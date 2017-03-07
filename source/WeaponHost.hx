package;

import flixel.FlxSprite;
import flixel.util.FlxPoint;
import Weapon.BulletProperties;
import flixel.util.FlxRandom;

/**
 * ...
 * @author Samuel Lee
 */
class WeaponHost extends FlxSprite
{
	public var weapon:Weapon;
	public var autoFire:Bool = false;
	private var _parent:Ship;
	private var _bulletProp:BulletProperties;
	private var _minDamage:Float = 1;
	private var _maxDamage:Float = 1;
	/**
	 * Creates the Weapon for Ship
	 * @param	Name		The name of your weapon (i.e. "lazer" or "shotgun"). For your internal reference really, but could be displayed in-game.
	 * @param	ParentRef	If this weapon belongs to a parent sprite, specify it here (bullets will fire from the sprites x/y vars as defined below).
	 * @param	SimpleGraphic	The firing host of the weapon
	 * @param	ParentRef	Set offset so that the bullet looks like firing from the weapon host.
	 * @param	AutoFire	Set whether the weapon should be firing by it self.
	 */
	public function new(Name:String, ParentRef:Ship, ?SimpleGraphic:Dynamic, ?Offset:FlxPoint, ?AutoFire:Bool = false) 
	{
		super(0, 0);
		if (SimpleGraphic != null) loadGraphic(SimpleGraphic);
		if (Offset != null) offset = Offset;
		if (ParentRef.isEnemy) offset.y = -1 * offset.y;
		
		weapon = new Weapon(Name, this);
		_parent = ParentRef;
		angle += _parent.angle;
		autoFire = AutoFire;
		exists = false;
	}
	
	public function getParent():Ship {
		return _parent;
	}
	
	public function setWeaponBullet(BulletProp:BulletProperties):Void {
		_bulletProp = BulletProp;
		weapon.setFireRate(BulletProp.fireRate);
		weapon.setBulletRandomFactor(BulletProp.randomAngle, BulletProp.randomSpeed);
		var estimatedQuantity:Int = BulletProp.shotPattern.length + Math.round(BulletProp.shotPattern.length / BulletProp.speed / BulletProp.fireRate * 1000000);
		weapon.makeBullet(estimatedQuantity, BulletProp, true);
	}
	
	/**
	 * Change the Angle of the weapon
	 * @param	Angle	This will reflect the weapon sprite angle and also the firing angle.
	 */
	public function setAngle(Angle:Float = 0):Void {
		angle = Angle;
		angle += _parent.angle;
	}
	
	override public function hurt(Damage:Float) {
		super.hurt(0);
	}

	override public function update():Void {
		exists = _parent.exists;
		
		// makes the weapon stick to the parent sprite
		x = _parent.x + _parent.width / 2 - width / 2;
		y = _parent.y - height;
		if (_parent.isEnemy) {
			y += _parent.height + height;
		}		
		
		angle += _bulletProp.rotation;
		
		weapon.setFiringPosition(0, 0, Math.round(width / 2 - _bulletProp.frameWidth / 2 - offset.x), -Math.round(offset.y + height / 2 ));
		if (autoFire) weapon.fireFromParentAngle();
		super.update();
	}
	
	public function fire() {
		weapon.setFiringPosition(0, 0, Math.round(width / 2 - _bulletProp.frameWidth / 2 - offset.x), -Math.round(offset.y + height / 2 ));
		weapon.fireFromParentAngle();
	}
}