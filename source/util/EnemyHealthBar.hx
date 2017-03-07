package util;

import flixel.ui.FlxBar;
import flixel.FlxSprite;

/**
 * ...
 * @author Samuel Lee
 */
class EnemyHealthBar
{
	
	public var bar:FlxBar;

	public function new(Parent:Ship) 
	{
		bar = new FlxBar(Parent.x, Parent.y, FlxBar.FILL_LEFT_TO_RIGHT, Math.round(Parent.width), 4, Parent, "health", 0, Parent.maxHealth);
		bar.createFilledBar(0xFFFA5858, 0xFF01DF74);
		bar.trackParent(0, -10);
		bar.exists = false;
	}
	
}