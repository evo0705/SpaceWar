package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeState;
import flixel.addons.nape.FlxNapeSprite;
import nape.geom.Vec2;
import source.Wire;

/**
 * ...
 * @author Samuel Lee
 */
class TestRope extends FlxNapeState
{
	
	private var tail:FlxNapeSprite;
	private var head:FlxNapeSprite;

	override public function create():Void {
		super.create();
		
		napeDebugEnabled = true;
		
		head = new FlxNapeSprite(FlxG.width * 0.5 - 27, 27, "assets/images/red.png");
		add(head);
		
		tail = new FlxNapeSprite(FlxG.width * 0.5 - 27, 480 - 27, "assets/images/red.png");
		tail.body.allowRotation = false;
		tail.body.allowMovement = false;
		add(tail);
		
		var yOffsetBox:Vec2 = new Vec2(0, -25);
		var yOffsetB:Vec2 = new Vec2(0, 25);
		var wire:Wire = new Wire(tail.body, head.body, yOffsetBox.add(head.body.localCOM),  yOffsetB.add(tail.body.localCOM), 100, 100);
		
		var floor:FlxNapeSprite = new FlxNapeSprite(FlxG.width * 0.5, FlxG.height - 10, "assets/images/red.png");
		floor.makeGraphic(FlxG.width, 10, 0xFFFF0000);
		floor.createRectangularBody(FlxG.width, 10);
		floor.setBodyMaterial(0, .2, 1, .5);
		floor.body.allowMovement = false;
		floor.body.allowRotation = false;
		add(floor);
		
		//FlxNapeState.space.gravity.setxy(0, 500);
	}
	
	override public function update() {
		super.update();	
		
		head.body.velocity.y = -100;
		
		var _keyUp:Bool = FlxG.keys.anyPressed(["UP"]);
		var _keyDown:Bool = FlxG.keys.anyPressed(["DOWN"]);
		var _keyLeft:Bool = FlxG.keys.anyPressed(["LEFT"]);
		var _keyRight:Bool = FlxG.keys.anyPressed(["RIGHT"]);
		
		if (tail.body.position.x <= 0) { tail.body.position.x = 0; _keyLeft = false; tail.body.velocity.x = 0; }
		if (tail.body.position.y <= 0) { tail.body.position.y = 0; _keyUp = false; tail.body.velocity.y = 0; }
		if (tail.body.position.x >= FlxG.width - tail.width) { tail.x = FlxG.width - tail.width; _keyRight = false; tail.body.velocity.x = 0; }
		if (tail.body.position.y >= FlxG.height - tail.height) { tail.y = FlxG.height - tail.height; _keyDown = false; tail.body.velocity.y = 0; }
		
		if (_keyLeft) {
			tail.body.velocity.x = -500;
		}
		
		if (_keyRight) {
			tail.body.velocity.x = 500;
		}
		
		if (_keyDown) {
			tail.body.velocity.y = 500;
		}
		
		if (_keyUp) {
			tail.body.velocity.y = -500;
		}
		
	}
	
	override public function destroy() {
		super.destroy();
	}
}