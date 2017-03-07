package;

import flixel.addons.ui.FlxUISpriteButton;
import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxPoint;
import flixel.util.FlxCollision;
import flixel.util.FlxRandom;
import flixel.FlxSprite;
import flixel.util.FlxRect;
import openfl.geom.Rectangle;
import openfl.text.TextFormat;
import openfl.utils.Object;
import StarField.ClsStarField2D;
import store.BulletStore;
import store.EnemyStore;
import util.DamageText;
import Weapon.ShotPattern;
import Weapon.BulletProperties;
import flixel.util.FlxAngle;
import util.FPS;
import flixel.util.FlxSort;
import flixel.group.FlxTypedGroup;
import flixel.FlxObject;
import flixel.system.scaleModes.FillScaleMode;
import flixel.effects.FlxFlicker;
import flash.Lib;
import flixel.addons.ui.FlxUITypedButton;
import flixel.addons.ui.FlxUI9SliceSprite;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	private var _playerGroup:FlxGroup = new FlxGroup();
	private var _playerBulletGroup:FlxGroup = new FlxGroup();
	private var _playerBulletParticleGroup:FlxGroup = new FlxGroup();
	private var _playerDamageGroup:FlxGroup = new FlxGroup();
	private var _playerHUDGroup:FlxGroup = new FlxGroup();
	private var _enemyGroup:FlxGroup = new FlxGroup();
	private var _enemyBulletGroup:FlxGroup = new FlxGroup();
	private var _enemyBulletParticleGroup:FlxGroup = new FlxGroup();
	private var _enemyDamageGroup:FlxGroup = new FlxGroup();
	private var _enemyBarGroup:FlxGroup = new FlxGroup();
	private var _sortableGroup:FlxTypedGroup<Ship> = new FlxTypedGroup<Ship>();
	
	private var FramesPerHeavyProcess:Int = 2;
	private var _framesUntilHeavyProcess:Int = 2;
	
	private var _seconds:Float = 0;
	private var _enemies:Enemy;

	private var _ticks:Float = 0;
	override public function create():Void
	{
		super.create();		
		//FlxG.scaleMode = new FillScaleMode();
		var _tmpStar = new ClsStarField2D(0, 0, FlxG.width, FlxG.height, 30, FlxPoint.get(0, 3));
		_tmpStar.setStarSpeed(100, 200);
		add(_tmpStar);
		
		for(i in 0...1){
			var ship:Ship = new Ship(0, 0, "assets/images/red.png", true, false, false, 1000);
			ship.x = FlxG.width / 2 - ship.width / 2;
			ship.y = FlxG.height - ship.height / 2;
			var weaponHost:WeaponHost = new WeaponHost("Gun", ship, "assets/images/empty_host.png", new FlxPoint(0, 16), true);
			weaponHost.setWeaponBullet(Reflect.callMethod(BulletStore, Reflect.field(BulletStore, "TurboBlaster"), []));
			ship.weapons.add(weaponHost);
			_playerGroup.add(ship);
			_playerHUDGroup.add(ship.playerHud);
			_sortableGroup.add(ship);
			for(txt in ship.damageText)
				_playerDamageGroup.add(txt);
			for (w in ship.weapons){
				_playerBulletGroup.add(cast(w, WeaponHost).weapon.group);
				_playerBulletParticleGroup.add(cast(w, WeaponHost).weapon.groupParticle);
			}
			for (w in ship.weapons)
				_playerGroup.add(cast(w, WeaponHost));
		}
		
		_enemies = new Enemy();
		_enemies.makeEnemy(5, "Rhino");
		_enemies.makeEnemy(5, "Wolf");
		for (e in _enemies.group) {
			var ship:Ship = cast(e, Ship);
			_enemyGroup.add(ship);
			_sortableGroup.add(ship);
			for(txt in ship.damageText)
				_enemyDamageGroup.add(txt);
			for (w in ship.weapons){
				_enemyBulletGroup.add(cast(w, WeaponHost).weapon.group);
				_enemyBulletParticleGroup.add(cast(w, WeaponHost).weapon.groupParticle);
			}
			for (w in ship.weapons){
				_enemyGroup.add(cast(w, WeaponHost));
			}
			_enemyBarGroup.add(ship.enemyHealthBar.bar);
		}
		
		add(_sortableGroup);
		add(_enemyGroup);
		add(_playerGroup);
		add(_enemyBulletGroup);
		add(_playerBulletGroup);
		add(_enemyBulletParticleGroup);
		add(_playerBulletParticleGroup);
		add(_enemyDamageGroup);
		add(_playerDamageGroup);
		add(_enemyBarGroup);
		add(_playerHUDGroup);
		
		var fps_mem:FPS = new FPS(10, 10, 0xffffff);
		add(fps_mem);
		
		var btnLabels:Array<String> = ["Buy", "Sell", "Upgrade", "Tune", "Leave"];
		for(i in 0...5){
		var myButton9Slice2 = new FlxUISpriteButton(100, 100 + (72 * i));
        var _graphic_sheet:String = "assets/images/button-0001.png";
        myButton9Slice2.loadGraphicSlice9([_graphic_sheet], 260, 70, [[16, 16, 32, 32]], FlxUI9SliceSprite.TILE_NONE, -1, false, 48, 48);
		var btnTxt:FlxText = new FlxText(0, 0, 260, btnLabels[i]);
		btnTxt.setFormat("assets/fonts/space.ttf", 30, 0xFFFFFF, "center");
		btnTxt.antialiasing = true;
		myButton9Slice2.label = btnTxt;
		myButton9Slice2.setAllLabelOffsets(0, 14);
        add(myButton9Slice2);
		}
		
		//var nineSlice:FlxUI9SliceSprite = new FlxUI9SliceSprite(100, 100, "assets/images/button-0001.png", new Rectangle(0, 0, 250, 48), [15, 15, 31, 31], FlxUI9SliceSprite.TILE_NONE, false, "", -1, new FlxPoint(47, 47));
		////var button:FlxButton = new FlxButton(10, 10);
		////button.loadGraphicFromSprite(nineSlice);
		//add(nineSlice);
		
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{	
		super.update();
		
		_framesUntilHeavyProcess--;
		if (_framesUntilHeavyProcess == 0) {	
			_framesUntilHeavyProcess = FramesPerHeavyProcess;
			
			_sortableGroup.sort(sortByY, FlxSort.ASCENDING);
			
			FlxG.overlap(_enemyGroup, _playerBulletGroup, function(victim:Ship, hitBy:Bullet) {
				var damage:Int = hitBy.hitObject(victim);
			}, function(victim:Ship, hitBy:Bullet) { 
				if (victim == null || hitBy == null) return false;
				else return FlxCollision.pixelPerfectCheck(victim, hitBy);
			});
			
			FlxG.overlap(_playerGroup, _enemyBulletGroup, function(victim:Ship, hitBy:Bullet) {
				var damage:Int = hitBy.hitObject(victim);
				FlxG.camera.shake(0.01, 0.1);
			}, function(victim:Ship, hitBy:Bullet) { 
				if (victim == null || hitBy == null) return false;
				else return FlxCollision.pixelPerfectCheck(victim, hitBy);
			});
		}
		
		if (_ticks <= 0) {
			_ticks = .25;
		}
		_ticks -= FlxG.elapsed;
		
		FlxG.overlap(_playerGroup, _enemyGroup, function(player:Ship, enemy:Ship) { 
			if (_ticks <= 0) {
				if (player.isDamagable) player.hit(1, false);
				if (enemy.isDamagable) enemy.hit(1, false);
				FlxG.camera.shake(0.01, 0.1);
			}
		}, function(player:Ship, enemy:Ship) { 
				if (player == null || enemy == null) return false;
				else return FlxCollision.pixelPerfectCheck(player, enemy);
		});
		
		if (FlxRandom.chanceRoll(5)) {
			_enemies.spawn(FlxRandom.floatRanged(0, FlxG.width), 0);
		}
	}
	
	private inline function sortByY(order:Int, o1:FlxObject, o2:FlxObject):Int
	{
		return FlxSort.byValues(order, o1.y + o1.height, o2.y + o2.height);
	}
}