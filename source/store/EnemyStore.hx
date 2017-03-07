package store;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
/**
 * ...
 * @author 
 */
enum EnemyTypes {
	Wolf;	
}
 
class EnemyStore
{

	public function new() 
	{
		
	}
	
	public static function Wolf():Ship {
		var ship:Ship = new Ship(0, 0, "assets/images/ship_0001.png", false, true, 8);
		var weaponHost:WeaponHost = new WeaponHost("Gun", ship, "assets/images/firing_host.png", new FlxPoint(0, -36), true);
		weaponHost.setWeaponBullet(FlxRandom.getObject([Reflect.callMethod(BulletStore, Reflect.field(BulletStore, "MachineGunClockwise"), []), Reflect.callMethod(BulletStore, Reflect.field(BulletStore, "MachineGunAntiClockwise"), [])]));
		ship.weapons.add(weaponHost);
		return ship;
	}
	
	public static function Rhino():Ship {
		var ship:Ship = new Ship(0, 0, "assets/images/ship_0001.png", false, true, 8);
		var weaponHost:WeaponHost = new WeaponHost("Gun", ship, "assets/images/firing_host.png", new FlxPoint(0, -36), true);
		weaponHost.setWeaponBullet(Reflect.callMethod(BulletStore, Reflect.field(BulletStore, "Shocker"), []));
		ship.weapons.add(weaponHost);
		return ship;
	}
}