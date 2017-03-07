package source;
import nape.constraint.DistanceJoint;
import nape.geom.Vec2;
import nape.phys.Body;
import flixel.addons.nape.FlxNapeState;
import nape.phys.BodyType;
import nape.shape.Circle;
import openfl.display.Graphics;
import flixel.util.FlxSpriteUtil;

/**
 * ...
 * @author Samuel Lee
 */
class Wire
{
	public var joints:Array<DistanceJoint>; 		// Used to draw the wire.
	
	public function new(body1:Body, body2:Body, anchor1:Vec2, anchor2:Vec2, maxDist:Float, segments:Int)
	{	
		joints = new Array<DistanceJoint>();
		
		var circle:Body;
		var startPos:Vec2;
		var distX:Float;
		var distY:Float;
		var distJoint:DistanceJoint;
		
		if (segments < 2) segments = 2;
		if (maxDist < 10) maxDist = 10;
		
		distX = body2.position.x - body1.position.x;
		distY = body2.position.y - body2.position.y;
		
		for (i in 1...segments)
		{
			startPos = new Vec2(body1.position.x + distX / (i + 1), body1.position.y + distY / (i + 1)); 		// defines starting position.
			
			circle = new Body(BodyType.DYNAMIC, startPos);
			circle.shapes.add(new Circle(5));
			circle.space = FlxNapeState.space;
			circle.shapes.at(0).filter.collisionGroup = 2; 					// Belongs to group 2.
			circle.shapes.at(0).filter.collisionMask = ~2; 					// Ignores group 2.
			
			distJoint = new DistanceJoint(body1, circle, anchor1, circle.localCOM, 0, maxDist / segments);
			distJoint.frequency = 5;
			distJoint.space = FlxNapeState.space;
			
			body1 = circle;
			anchor1 = body1.localCOM;
			joints.push(distJoint);
		}
		
		distJoint = new DistanceJoint(body1, body2, body1.localCOM, anchor2, 0, maxDist / segments); 		// body1 is the last circle at this point
		distJoint.frequency = 5;
		distJoint.space = FlxNapeState.space;
		joints.push(distJoint);
	}
	
	public function draw()
	{
		var from:Vec2;
		var to:Vec2;
		var gfx:Graphics = FlxSpriteUtil.flashGfxSprite.graphics;
		gfx.lineStyle(1, 0x0);
		
		for (joint in joints)
		{
			from = joint.body1.localPointToWorld(joint.anchor1);
			to = joint.body2.localPointToWorld(joint.anchor2);
			gfx.moveTo(from.x, from.y); 
			gfx.lineTo(to.x, to.y);
		}
	}
}