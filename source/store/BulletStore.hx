package store;

import flixel.animation.FlxAnimation;
import Weapon.BulletProperties;
import Weapon.ShotPattern;
import flixel.FlxSprite;

/**
 * ...
 * @author 
 */
 
class BulletStore
{

	public function new() 
	{
		
	}
	
	public static function Blaster():BulletProperties {
		return new BulletProperties("Blaster", "assets/images/bullet_0001.png", [new ShotPattern(0, 0, 0)], 
			1, 5, 500, 500, 0, 0, 18, 48, .7, [0, 1, 2]);
	}
	
	public static function TurboBlaster():BulletProperties {
		return new BulletProperties("Turbo Blaster", "assets/images/b-0001.png", [new ShotPattern(6, 0, 0), new ShotPattern(3, -16, 0), new ShotPattern(0, -32, 0), new ShotPattern(-3, -16, 0), new ShotPattern(-6, 0, 0)], 
			1, 5, 700, 200, 0, 0, 7, 48, 1, [0]);
	}
	
	public static function Shocker():BulletProperties {
		return new BulletProperties("Shocker", "assets/images/bullet_0002.png", [new ShotPattern(0, 0, 0)], 
			1, 5, 500, 1000, 0, 0, 18, 48, .7, [0, 1, 2]);
	}
	
	public static function TurboShocker():BulletProperties {
		return new BulletProperties("Turbo Shocker", "assets/images/bullet_0002.png", [new ShotPattern(0, 0, 0)], 
			1, 5, 600, 800, 0, 0, 18, 48, .7, [0, 1, 2]);
	}
	
	public static function Nova():BulletProperties {
		return new BulletProperties("Nova", "assets/images/green_fire.png", [new ShotPattern(0, 0, 0), new ShotPattern(0, 0, -180), new ShotPattern(0, 0, 45), new ShotPattern(0, 0, -45),
			new ShotPattern(0, 0, 90), new ShotPattern(0, 0, -90), new ShotPattern(0, 0, 125), new ShotPattern(0, 0, -125)], 
			1, 5, 300, 3000, 0, 0, 18, 55, .7, [0, 1, 2]);
	}
	
	public static function UltraNova():BulletProperties {
		return new BulletProperties("Ultra Nova", "assets/images/green_fire.png", [new ShotPattern(0, 0, 0), new ShotPattern(0, 0, -180), new ShotPattern(0, 0, 45), new ShotPattern(0, 0, -45),
			new ShotPattern(0, 0, 67), new ShotPattern(0, 0, -67), new ShotPattern(0, 0, 22), new ShotPattern(0, 0, -22),
			new ShotPattern(0, 0, 90), new ShotPattern(0, 0, -90), new ShotPattern(0, 0, 125), new ShotPattern(0, 0, -125),
			new ShotPattern(0, 0, 104), new ShotPattern(0, 0, -104), new ShotPattern(0, 0, 147), new ShotPattern(0, 0, -147)], 
			1, 5, 300, 3000, 0, 0, 18, 55, .7, [0, 1, 2]);
	}
	
	public static function MachineGunClockwise():BulletProperties {
		return new BulletProperties("Machine Gun", "assets/images/green_fire.png", [new ShotPattern(0, 0, 0)], 
			1, 3, 500, 300, 0, 0, 18, 55, .7, [0, 1, 2], 10, 1);
	}
	
	public static function MachineGunAntiClockwise():BulletProperties {
		return new BulletProperties("Machine Gun", "assets/images/green_fire.png", [new ShotPattern(0, 0, 0)], 
			1, 3, 500, 300, 0, 0, 18, 55, .7, [0, 1, 2], 10, -1);
	}
}