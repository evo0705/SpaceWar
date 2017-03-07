package util;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.FlxG;

/**
 * ...
 * @author 
 */
class PlayerHUD extends FlxGroup
{
	
	private var healthBar:FlxBar;
	private var health:FlxText;
	private var _parent:Ship;

	public function new(Parent:Ship) 
	{
		super();
		_parent = Parent;
		
		healthBar = new FlxBar(0, 0, FlxBar.FILL_LEFT_TO_RIGHT, 121, 14, _parent, "health", 0, _parent.maxHealth);
		healthBar.createFilledBar(0x0, 0xFF01DF74, true, 0xFFFFFFFF);
		healthBar.x = 10;
		healthBar.y = FlxG.height - 24;
		add(healthBar);
		
		health = new FlxText(0, 0, 120, "" + Parent.health);
		health.alpha = .5;
		health.setPosition(healthBar.x, healthBar.y - 2);
		health.setFormat("assets/fonts/space.ttf", 12, 0xFFFFFFFF, "center", FlxText.BORDER_OUTLINE_FAST, 0xFF000000);
		add(health);
	}
	
	override public function update() {
		super.update();
		health.text = "" + _parent.health;
		if (_parent.health <= 0) health.text = "You Died";
	}
	
}