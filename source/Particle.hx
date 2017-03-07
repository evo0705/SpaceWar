package;

import flixel.FlxSprite;

/**
 * ...
 * @author 
 */
class Particle extends FlxSprite
{

	public var duration:Float = 0.5;
	public function new(SimpleGraphic:Dynamic, Width:Int, Height:Int, Frames:Array<Int>, FrameRate:Int = 30, ?Alpha:Float = .7) 
	{
		super(0, 0);
		loadGraphic(SimpleGraphic, true, Width, Height);
		animation.add("kaboom", Frames, FrameRate, false);
		alpha = Alpha;
		exists = false;
	}
	
	public function start(X:Float, Y:Float):Void {
		x = X - width / 2;
		y = Y - height / 2;
		exists = true;
		animation.play("kaboom");
	}
	
	override public function update() {
		super.update();
		if (animation.finished) {
			alive = exists = false;
		}
	}

}