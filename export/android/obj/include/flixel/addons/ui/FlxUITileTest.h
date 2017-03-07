#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#define INCLUDED_flixel_addons_ui_FlxUITileTest

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
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITileTest)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUITileTest_obj : public ::flixel::addons::ui::FlxUISprite_obj{
	public:
		typedef ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUITileTest_obj OBJ_;
		FlxUITileTest_obj();
		Void __construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITileTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUITileTest_obj > __new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUITileTest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxSprite_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::IResizable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUITileTest","\xe6","\x3f","\xe9","\x97"); }

		int widthInTiles;
		int heightInTiles;
		int tileWidth;
		int tileHeight;
		virtual int get_widthInTiles( );
		Dynamic get_widthInTiles_dyn();

		virtual int get_heightInTiles( );
		Dynamic get_heightInTiles_dyn();

		int _tilesWide;
		int _tilesTall;
		int _color1;
		int _color2;
		bool floorToEven;
		virtual Void makeTiles( int tileWidth,int tileHeight,int tilesWide,int tilesTall,hx::Null< int >  color1,hx::Null< int >  color2);
		Dynamic makeTiles_dyn();

		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITileTest */ 
