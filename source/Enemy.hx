package;
import flixel.group.FlxTypedGroup;
import store.EnemyStore;
/**
 * ...
 * @author Samuel Lee
 */
class Enemy
{

	public var group:FlxTypedGroup<Ship>;
	
	public function new() 
	{
		
	}
	
	public function makeEnemy(Quantity:Int = 0, ShipName:String = ""):Void {
		if (group == null) group = new FlxTypedGroup();
		if (ShipName != "") {
			for (i in 0...Quantity) {
				var tempShip:Ship = Reflect.callMethod(EnemyStore, Reflect.field(EnemyStore, ShipName), []);
				tempShip.exists = false;
				group.add(tempShip);
			}
		}
	}
	
	public function spawn(X:Float, Y:Float):Void
	{
		var freeEnemy:Ship = getFreeEnemy();
		if (freeEnemy != null) {
			freeEnemy.x = X; freeEnemy.y = Y - freeEnemy.height; freeEnemy.alive = freeEnemy.exists = true; freeEnemy.health = freeEnemy.maxHealth;
		}
	}
	
	private function getFreeEnemy():Ship
	{
		var result:Ship = null;
		
		if (group == null || group.length == 0)
		{
			throw "Enemy.hx cannot spawn an enemy until one has been created via a call to makeEnemy";
			return null;
		}
		
		var ship:Ship;
		
		for (i in 0...(group.members.length))
		{
			ship = group.members[i];
			
			if (ship.exists == false)
			{
				result = ship;
				break;
			}
		}
		
		return result;
	}
	
}