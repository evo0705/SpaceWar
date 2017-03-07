#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#define INCLUDED_flixel_addons_ui_FlxUI9SliceSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUI9SliceSprite_obj : public ::flixel::addons::ui::FlxUISprite_obj{
	public:
		typedef ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUI9SliceSprite_obj OBJ_;
		FlxUI9SliceSprite_obj();
		Void __construct(Float X,Float Y,Dynamic Graphic,::openfl::_legacy::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUI9SliceSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUI9SliceSprite_obj > __new(Float X,Float Y,Dynamic Graphic,::openfl::_legacy::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUI9SliceSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxSprite_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::IResizable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUI9SliceSprite","\x64","\x3e","\x2f","\xc3"); }

		static void __boot();
		::openfl::_legacy::display::BitmapData _bmpCanvas;
		Array< int > _slice9;
		int _tile;
		bool _smooth;
		::String _asset_id;
		::openfl::_legacy::display::BitmapData _raw_pixels;
		Float resize_ratio;
		virtual Float set_resize_ratio( Float r);
		Dynamic set_resize_ratio_dyn();

		::flixel::util::FlxPoint resize_point;
		virtual ::flixel::util::FlxPoint set_resize_point( ::flixel::util::FlxPoint r);
		Dynamic set_resize_point_dyn();

		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

		static int bitmapsCreated;
		static ::openfl::_legacy::display::Sprite _canvas;
		static bool useSectionCache;
		static ::haxe::ds::StringMap sectionCache;
		static ::openfl::_legacy::geom::Point _staticPoint;
		static ::openfl::_legacy::geom::Rectangle _staticRect;
		static ::openfl::_legacy::geom::Rectangle _staticRect2;
		static ::openfl::_legacy::geom::Point _staticPointZero;
		static ::openfl::_legacy::geom::Matrix _staticMatrix;
		static ::flixel::util::FlxRect _staticFlxRect;
		static ::flixel::util::FlxRect _staticFlxRect2;
		static int TILE_NONE;
		static int TILE_BOTH;
		static int TILE_H;
		static int TILE_V;
		static ::haxe::ds::StringMap _staticRects;
		static ::openfl::_legacy::geom::Rectangle getRectFromString( ::String str);
		static Dynamic getRectFromString_dyn();

		static Array< int > getRectIntsFromString( ::String str);
		static Dynamic getRectIntsFromString_dyn();

		static Void paintScale9( ::openfl::_legacy::display::BitmapData g,::String assetID,Array< int > scale9,::flixel::util::FlxRect rc,hx::Null< int >  tile,hx::Null< bool >  smooth,::openfl::_legacy::display::BitmapData raw);
		static Dynamic paintScale9_dyn();

		static Void paintCompoundBitmap( ::openfl::_legacy::display::BitmapData g,::String assetID,::haxe::ds::StringMap sourceRects,::flixel::util::FlxRect targetRect,hx::Null< int >  tile,hx::Null< bool >  smooth,::openfl::_legacy::display::BitmapData raw);
		static Dynamic paintCompoundBitmap_dyn();

		static Void paintBitmapSection( ::openfl::_legacy::display::BitmapData g,::String assetId,::flixel::util::FlxRect src,::flixel::util::FlxRect dst,::openfl::_legacy::display::BitmapData srcData,hx::Null< int >  tile,hx::Null< bool >  smooth,::openfl::_legacy::display::BitmapData raw);
		static Dynamic paintBitmapSection_dyn();

		static Void bitmapFillRect( ::openfl::_legacy::display::BitmapData g,::openfl::_legacy::geom::Rectangle dst,::openfl::_legacy::display::BitmapData section,hx::Null< int >  tile,hx::Null< bool >  smooth_);
		static Dynamic bitmapFillRect_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUI9SliceSprite */ 
