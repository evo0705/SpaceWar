#if !lime_hybrid


package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if neko
import neko.vm.Deque;
import neko.vm.Thread;
#elseif cpp
import cpp.vm.Deque;
import cpp.vm.Thread;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._legacy.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	private static var loaded = 0;
	private static var loading = 0;
	private static var workerIncomingQueue = new Deque<Dynamic> ();
	private static var workerResult = new Deque<Dynamic> ();
	private static var workerThread:Thread;
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		
		
		Font.registerFont (__ASSET__assets_fonts_space_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		Font.registerFont (__ASSET__assets_fonts_nokiafc22_ttf);
		Font.registerFont (__ASSET__assets_fonts_arial_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), BitmapData);
			
		} else {
			
			return BitmapData.load (path.get (id));
			
		}
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), ByteArray);
			
		} else {
			
			return ByteArray.readFile (path.get (id));
			
		}
		
	}
	
	
	public override function getFont (id:String):Font {
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return new Font (path.get (id));
			
		}
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), Sound);
			
		} else {
			
			return new Sound (new URLRequest (path.get (id)), null, true);
			
		}
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		if (className.exists (id)) {
			
			return cast (Type.createInstance (className.get (id), []), Sound);
			
		} else {
			
			return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
			
		}
		
	}
	
	
	public override function getText (id:String):String {
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		__load (getBitmapData, id, handler);
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		__load (getBytes, id, handler);
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		__load (getFont, id, handler);
		
	}
	
	
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		__load (getMusic, id, handler);
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		__load (getSound, id, handler);
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
	}
	
	
	private static function __doWork ():Void {
		
		while (true) {
			
			var message = workerIncomingQueue.pop (true);
			
			if (message == "WORK") {
				
				var getMethod = workerIncomingQueue.pop (true);
				var id = workerIncomingQueue.pop (true);
				var handler = workerIncomingQueue.pop (true);
				
				var data = getMethod (id);
				workerResult.add ("RESULT");
				workerResult.add (data);
				workerResult.add (handler);
				
			} else if (message == "EXIT") {
				
				break;
				
			}
			
		}
		
	}
	
	
	private inline function __load<T> (getMethod:String->T, id:String, handler:T->Void):Void {
		
		workerIncomingQueue.add ("WORK");
		workerIncomingQueue.add (getMethod);
		workerIncomingQueue.add (id);
		workerIncomingQueue.add (handler);
		
		loading++;
		
	}
	
	
	public static function __poll ():Void {
		
		if (loading > loaded) {
			
			if (workerThread == null) {
				
				workerThread = Thread.create (__doWork);
				
			}
			
			var message = workerResult.pop (false);
			
			while (message == "RESULT") {
				
				loaded++;
				
				var data = workerResult.pop (true);
				var handler = workerResult.pop (true);
				
				if (handler != null) {
					
					handler (data);
					
				}
				
				message = workerResult.pop (false);
				
			}
			
		} else {
			
			if (workerThread != null) {
				
				workerIncomingQueue.add ("EXIT");
				workerThread = null;
				
			}
			
		}
		
	}
	
	
}


#if (windows || mac || linux)


@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/nokiafc22.ttf") @:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends flash.text.Font {}
@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/arial.ttf") @:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends flash.text.Font {}



@:keep class __ASSET__assets_fonts_space_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/space.ttf"; fontName = "PirulenRg-Regular"; }}


#else


class __ASSET__assets_fonts_space_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/space.ttf"; fontName = "PirulenRg-Regular";  }}
class __ASSET__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/nokiafc22.ttf"; fontName = "Nokia Cellphone FC Small";  }}
class __ASSET__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/fonts/arial.ttf"; fontName = "Arial";  }}


#end


#else


package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_space_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_fonts_arial_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		path.set ("assets/fonts/space.ttf", "assets/fonts/space.ttf");
		type.set ("assets/fonts/space.ttf", AssetType.FONT);
		path.set ("assets/images/b-0001.png", "assets/images/b-0001.png");
		type.set ("assets/images/b-0001.png", AssetType.IMAGE);
		path.set ("assets/images/blue.png", "assets/images/blue.png");
		type.set ("assets/images/blue.png", AssetType.IMAGE);
		path.set ("assets/images/blue2.png", "assets/images/blue2.png");
		type.set ("assets/images/blue2.png", AssetType.IMAGE);
		path.set ("assets/images/blue_fire.png", "assets/images/blue_fire.png");
		type.set ("assets/images/blue_fire.png", AssetType.IMAGE);
		path.set ("assets/images/bullet_0001.png", "assets/images/bullet_0001.png");
		type.set ("assets/images/bullet_0001.png", AssetType.IMAGE);
		path.set ("assets/images/bullet_0002.png", "assets/images/bullet_0002.png");
		type.set ("assets/images/bullet_0002.png", AssetType.IMAGE);
		path.set ("assets/images/button-0001.png", "assets/images/button-0001.png");
		type.set ("assets/images/button-0001.png", AssetType.IMAGE);
		path.set ("assets/images/empty_host.png", "assets/images/empty_host.png");
		type.set ("assets/images/empty_host.png", AssetType.IMAGE);
		path.set ("assets/images/firing_host.png", "assets/images/firing_host.png");
		type.set ("assets/images/firing_host.png", AssetType.IMAGE);
		path.set ("assets/images/green_fire.png", "assets/images/green_fire.png");
		type.set ("assets/images/green_fire.png", AssetType.IMAGE);
		path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		path.set ("assets/images/particle_0001.png", "assets/images/particle_0001.png");
		type.set ("assets/images/particle_0001.png", AssetType.IMAGE);
		path.set ("assets/images/red.png", "assets/images/red.png");
		type.set ("assets/images/red.png", AssetType.IMAGE);
		path.set ("assets/images/ship_0001.png", "assets/images/ship_0001.png");
		type.set ("assets/images/ship_0001.png", AssetType.IMAGE);
		path.set ("assets/images/simple_laser_anim.png", "assets/images/simple_laser_anim.png");
		type.set ("assets/images/simple_laser_anim.png", AssetType.IMAGE);
		path.set ("assets/images/weaponhost_0001.png", "assets/images/weaponhost_0001.png");
		type.set ("assets/images/weaponhost_0001.png", AssetType.IMAGE);
		path.set ("assets/images/yellow_ring.png", "assets/images/yellow_ring.png");
		type.set ("assets/images/yellow_ring.png", AssetType.IMAGE);
		path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
		type.set ("flixel/flixel-ui/img/box.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
		type.set ("flixel/flixel-ui/img/button.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
		type.set ("flixel/flixel-ui/img/button_arrow_down.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
		type.set ("flixel/flixel-ui/img/button_arrow_left.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
		type.set ("flixel/flixel-ui/img/button_arrow_right.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
		type.set ("flixel/flixel-ui/img/button_arrow_up.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
		type.set ("flixel/flixel-ui/img/button_thin.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
		type.set ("flixel/flixel-ui/img/button_toggle.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
		type.set ("flixel/flixel-ui/img/check_box.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
		type.set ("flixel/flixel-ui/img/check_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
		type.set ("flixel/flixel-ui/img/chrome.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
		type.set ("flixel/flixel-ui/img/chrome_flat.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
		type.set ("flixel/flixel-ui/img/chrome_inset.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
		type.set ("flixel/flixel-ui/img/chrome_light.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
		type.set ("flixel/flixel-ui/img/dropdown_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
		type.set ("flixel/flixel-ui/img/finger_big.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
		type.set ("flixel/flixel-ui/img/finger_small.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
		type.set ("flixel/flixel-ui/img/hilight.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
		type.set ("flixel/flixel-ui/img/invis.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
		type.set ("flixel/flixel-ui/img/minus_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
		type.set ("flixel/flixel-ui/img/plus_mark.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
		type.set ("flixel/flixel-ui/img/radio.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
		type.set ("flixel/flixel-ui/img/radio_dot.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
		type.set ("flixel/flixel-ui/img/swatch.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
		type.set ("flixel/flixel-ui/img/tab.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
		type.set ("flixel/flixel-ui/img/tab_back.png", AssetType.IMAGE);
		path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
		type.set ("flixel/flixel-ui/xml/defaults.xml", AssetType.TEXT);
		path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
		type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", AssetType.TEXT);
		path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
		type.set ("flixel/flixel-ui/xml/default_popup.xml", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/fonts/space.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/images/b-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/blue.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/blue2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/blue_fire.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet_0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bullet_0002.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/button-0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/empty_host.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/firing_host.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/green_fire.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/particle_0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/red.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ship_0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/simple_laser_anim.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/weaponhost_0001.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/yellow_ring.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__assets_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/fonts/arial.ttf";
		className.set (id, __ASSET__assets_fonts_arial_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/flixel-ui/img/box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_arrow_up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_thin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/button_toggle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/check_box.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/check_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_flat.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_inset.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/chrome_light.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/dropdown_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/finger_big.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/finger_small.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/hilight.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/invis.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/minus_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/plus_mark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/radio.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/radio_dot.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/swatch.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/tab.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/img/tab_back.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "flixel/flixel-ui/xml/defaults.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "flixel/flixel-ui/xml/default_loading_screen.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "flixel/flixel-ui/xml/default_popup.xml";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		
		className.set ("assets/fonts/space.ttf", __ASSET__assets_fonts_space_ttf);
		type.set ("assets/fonts/space.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/fonts/nokiafc22.ttf", __ASSET__assets_fonts_nokiafc22_ttf);
		type.set ("assets/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("assets/fonts/arial.ttf", __ASSET__assets_fonts_arial_ttf);
		type.set ("assets/fonts/arial.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash
























@:keep @:bind #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_fonts_arial_ttf extends null { }































#elseif html5


@:keep #if display private #end class __ASSET__assets_fonts_space_ttf extends lime.text.Font { public function new () { super (); name = "PirulenRg-Regular"; } } 





















@:keep #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font { public function new () { super (); name = "Arial"; } } 































#else

@:keep #if display private #end class __ASSET__assets_fonts_space_ttf extends lime.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/space.ttf"; name = "PirulenRg-Regular"; super (); }}


#if (windows || mac || linux || cpp)


@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__assets_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("C:/Users/Samuel/windows/flixel/3,3,11/assets/fonts/arial.ttf") #if display private #end class __ASSET__assets_fonts_arial_ttf extends lime.text.Font {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_space_ttf extends openfl.text.Font { public function new () { __fontPath = #if ios "assets/" + #end "assets/fonts/space.ttf"; name = "PirulenRg-Regular"; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_fonts_arial_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_fonts_arial_ttf (); src = font.src; name = font.name; super (); }}

#end

#end


#end