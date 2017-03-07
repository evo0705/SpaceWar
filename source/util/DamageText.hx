package util;

import flixel.FlxSprite;
import flixel.group.FlxTypedGroup;
import flixel.text.FlxText;
import openfl.text.TextFieldAutoSize;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxDestroyUtil;

/**
 * ...
 * @author 
 */
class DamageText extends FlxTypedGroup<FlxText>
{
	
	public var damageText:FlxText;
	private var target:FlxSprite;
	private var frames:Int = Math.round(Reg.FrameRate / 2);
	private var color:Int;
	private var borderColor:Int;

	public function new(Object:FlxSprite, Label:String = "", Damage:Int, ?Color:Int = 0xFFFFFFFF, ?BorderColor:Int = 0xFF333333)
	{
		super();
		target = Object;
		color = Color;
		borderColor = BorderColor;
		damageText = new FlxText(0, 0, 0, "", 24);
		add(damageText);
		damageText.kill();
	}
	
	public function showDamage(Label:String = "", Damage:Int, X:Float, Y:Float) {
		//damageText.revive();
		FlxDestroyUtil.destroy(damageText);
		damageText = new FlxText(0, 0, 0, Label + Damage, 24);
		damageText.setFormat("assets/fonts/space.ttf", 24, color, "center", FlxText.BORDER_OUTLINE_FAST, borderColor);
		damageText.borderSize = 2;
		damageText.text = Label + Damage;
		damageText.setPosition(X - damageText.width / 2, Y);
		frames = Reg.FrameRate;
		damageText.alpha = 1;
		
		add(damageText);
	}
	
	public function getCountDown():Int {
		return frames;
	}
	
	override public function update():Void
	{ 
		damageText.y -= 2; 
		if (frames % 3 == 0) {
			damageText.alpha = frames / Reg.FrameRate;
		}
		if (frames > 0) frames--;
		else damageText.kill();
		super.update();
	}	
	
	override public function destroy() {
		super.destroy();
		damageText = null;
		target = null;
		frames = 0;
	}	
	
}