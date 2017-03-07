package;

import flixel.util.FlxRandom;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxTween.TweenOptions;
import util.DamageText;
import util.EnemyHealthBar;
import util.PlayerHUD;
import Weapon.BulletProperties;

/**
 * ...
 * @author Samuel Lee
 */
class Ship extends FlxSprite
{
	
	public var weapons:List<WeaponHost>;
	public var movingSpeed:Float = 400;
	public var isPlayer:Bool = false;
	public var isEnemy:Bool = false;
	public var isBoss:Bool = false;
	public var isDamagable:Bool = false;
	public var maxHealth:Float = 1;
	
	public var playerHud:PlayerHUD;
	public var enemyHealthBar:EnemyHealthBar;
	
	private var _keyUp:Bool = false;
	private var _keyDown:Bool = false;
	private var _keyLeft:Bool = false;
	private var _keyRight:Bool = false;
	private var _keyShoot:Bool = false;
	private var _keyUpElapsed:Float = 0;
	private var _keyDownElapsed:Float = 0;
	private var _keyLeftElapsed:Float = 0;
	private var _keyRightElapsed:Float = 0;
	private var _keyMouseElapsed:Float = 0;
	private var _aiMovementDelay:Float = 0; //second
	public var damageText:Array<DamageText> = new Array<DamageText>();

	public function new(X:Float=0, Y:Float=0, SimpleGraphic:Dynamic, IsPlayer:Bool = false, IsEnemy:Bool = false, IsBoss:Bool = false, MaxHealth:Float = 1) 
	{
		super(X, Y);
		
		loadGraphic(SimpleGraphic, true, 64, 64);
		
		health = 99999;
		weapons = new List<WeaponHost>();
		isPlayer = IsPlayer;
		isEnemy = IsEnemy;
		isBoss = IsBoss;
		isDamagable = true;
		health = maxHealth = MaxHealth;
		
		
		if (isEnemy) {
			angle += 180;
			enemyHealthBar = new EnemyHealthBar(this);
		}
		if (isPlayer) {
			playerHud = new PlayerHUD(this);
		}
		
		for (i in 0...(isBoss || !isEnemy ? 15 : 5)) {
			var tmpDmgTxt:DamageText = new DamageText(this, "", 0, (!isEnemy ? 0xFFFF0000 : 0xFFFFFFFF), (!isEnemy ? 0x0 : 0xFF333333));
			tmpDmgTxt.damageText.kill();
			damageText.push(tmpDmgTxt);
		}
	}
	
	override public function update():Void {
		if (enemyHealthBar != null)
			enemyHealthBar.bar.exists = exists;
		for (weap in weapons) {
			cast(weap, WeaponHost).exists = exists;
		}
		
		if (!isEnemy) {
			movements();	
		}else {
			ai();
		}
		if (alpha < 1) alpha += 0.05;
		
		super.update();
	}
	
	private function movements() {
		drag.x = drag.y = 2000;
		
		_keyUp = FlxG.keys.anyPressed(["UP"]);
		_keyDown = FlxG.keys.anyPressed(["DOWN"]);
		_keyLeft = FlxG.keys.anyPressed(["LEFT"]);
		_keyRight = FlxG.keys.anyPressed(["RIGHT"]);
		
		// Movements limit
		var isLimitedX:Bool = false;
		var isLimitedY:Bool = false;
		if (x <= 0) { x = 0; _keyLeft = false; velocity.x = 0; }
		if (y <= 0) {y = 0; _keyUp = false; velocity.y = 0; }
		if (x >= FlxG.width - width) { x = FlxG.width - width; _keyRight = false; velocity.x = 0; }
		if (y >= FlxG.height - height) { y = FlxG.height - height; _keyDown = false; velocity.y = 0; }
		
		// Key Movements
		if (_keyUp) { 
			if (_keyUpElapsed > 0.9) _keyUpElapsed = 0.9;
			velocity.y = -((movingSpeed / 10) + movingSpeed / 1.5 * _keyUpElapsed); 
			_keyUpElapsed += FlxG.elapsed * 3;
		}
		if (_keyDown) {
			if (_keyDownElapsed > 0.9) _keyDownElapsed = 0.9;
			velocity.y = (movingSpeed / 10) + movingSpeed / 1.5 * _keyDownElapsed; 
			_keyDownElapsed += FlxG.elapsed * 3;
		}			
		if(!(_keyLeft && _keyRight)){
			if (_keyLeft) { 
				if (_keyLeftElapsed > 0.9) _keyLeftElapsed = 0.9;
				velocity.x = -((movingSpeed / 10) + movingSpeed * _keyLeftElapsed); 
				_keyLeftElapsed += FlxG.elapsed * 3;
			}
			if (_keyRight) {
				if (_keyRightElapsed > 0.9) _keyRightElapsed = 0.9;
				velocity.x = (movingSpeed / 10) + movingSpeed * _keyRightElapsed; 
				_keyRightElapsed += FlxG.elapsed * 3;
			}
		}
		if(!_keyUp) _keyUpElapsed = 0;
		if(!_keyDown) _keyDownElapsed = 0;
		if(!_keyLeft) _keyLeftElapsed = 0;
		if (!_keyRight) _keyRightElapsed = 0;	
		
		#if !FLX_NO_TOUCH
		if (FlxG.mouse.pressed) {
			if (_keyMouseElapsed > 0.9) _keyMouseElapsed = 0.9;	
			
			var distanceX = FlxG.mouse.x - x - (width / 2);
			var distanceY = FlxG.mouse.y - y - height;
			var speed = (movingSpeed / 10) + movingSpeed * _keyMouseElapsed;
			
			velocity.x = distanceX * (speed / 200);
			velocity.y = distanceY * (speed / 200 / 1.5);
			
			_keyMouseElapsed += FlxG.elapsed * 2;
		} else {
			_keyMouseElapsed = 0;
		}
		#end
	}
	
	public function hit(Damage:Float, ?DisplayDamage:Bool = true) {
		if (isDamagable) {
			hurt(Damage);
			if (DisplayDamage) {
				var tmpTxt:DamageText = damageText[0];
				damageText.remove(tmpTxt);
				damageText.push(tmpTxt);
				tmpTxt.showDamage("", Math.round(Damage), x + width / 2, y + height / 2);
			}
			FlxTween.color(this, 0.1, 0xBB3333, 0xFFFFFF, .9, 1);
			
		}
	}
	
	private function ai() {
		drag.x = drag.y = 200;
		
		if (y >= FlxG.height + height) { kill(); }
		
		velocity.y = movingSpeed / 6;
		
		_aiMovementDelay -= FlxG.elapsed;
		if (velocity.x == 0 && _aiMovementDelay <= 0) {
			_aiMovementDelay = FlxRandom.floatRanged(2, 5);
			velocity.x = (FlxRandom.chanceRoll() ? -1 : 1) * movingSpeed / 2;
		}
		
		if (!isEnemy) {
			//for (weapon in weapons) cast(weapon, WeaponHost).fire();	
		}
		
		
		if (x <= 0) { x = 0; velocity.x = 0; }
		if (x >= FlxG.width - width) { x = FlxG.width - width; velocity.x = 0; }
	}
	
	override public function kill() {
		super.kill();
		if (enemyHealthBar != null) {
			enemyHealthBar.bar.exists = false;
		}
	}
}