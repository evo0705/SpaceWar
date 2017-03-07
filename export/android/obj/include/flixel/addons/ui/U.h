#ifndef INCLUDED_flixel_addons_ui_U
#define INCLUDED_flixel_addons_ui_U

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,U)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  U_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef U_obj OBJ_;
		U_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.addons.ui.U")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< U_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~U_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("U","\x55","\x00","\x00","\x00"); }

		static ::String xml_str( ::Xml data,::String att,hx::Null< bool >  lower_case,::String default_str);
		static Dynamic xml_str_dyn();

		static Float perc_to_float( ::String str);
		static Dynamic perc_to_float_dyn();

		static bool isStrNum( ::String str);
		static Dynamic isStrNum_dyn();

		static bool isStrInt( ::String str);
		static Dynamic isStrInt_dyn();

		static bool isStrFloat( ::String str);
		static Dynamic isStrFloat_dyn();

		static Float xml_f( ::Xml data,::String att,hx::Null< Float >  default_);
		static Dynamic xml_f_dyn();

		static int xml_i( ::Xml data,::String att,hx::Null< int >  default_);
		static Dynamic xml_i_dyn();

		static bool xml_bool( ::Xml data,::String att,hx::Null< bool >  default_);
		static Dynamic xml_bool_dyn();

		static ::String xml_gfx( ::Xml data,::String att,hx::Null< bool >  test);
		static Dynamic xml_gfx_dyn();

		static Void center( ::flixel::FlxObject fb1,::flixel::FlxObject fb2,hx::Null< bool >  centerX,hx::Null< bool >  centerY);
		static Dynamic center_dyn();

		static bool test_int( int i1,::String test,int i2);
		static Dynamic test_int_dyn();

		static bool test_float( Float f1,::String test,int f2);
		static Dynamic test_float_dyn();

		static ::String padDigits( int i,int d);
		static Dynamic padDigits_dyn();

		static int parseHex( ::String str,hx::Null< bool >  cast32Bit,hx::Null< bool >  safe,hx::Null< int >  default_color);
		static Dynamic parseHex_dyn();

		static int hexChar2dec( ::String hex_char);
		static Dynamic hexChar2dec_dyn();

		static int hex2dec( ::String hex_str);
		static Dynamic hex2dec_dyn();

		static Array< int > hex2rgb( int hex);
		static Dynamic hex2rgb_dyn();

		static int rgb2hex( int r,int g,int b);
		static Dynamic rgb2hex_dyn();

		static int interpolate( int hex1,int hex2,Float amt);
		static Dynamic interpolate_dyn();

		static Array< ::Dynamic > getLocList( int xmin,int ymin,int xmax,int ymax);
		static Dynamic getLocList_dyn();

		static Void disposeXML( Dynamic thing);
		static Dynamic disposeXML_dyn();

		static ::haxe::xml::Fast copyFast( ::haxe::xml::Fast fast);
		static Dynamic copyFast_dyn();

		static ::Xml copyXml( ::Xml data);
		static Dynamic copyXml_dyn();

		static ::Xml readXml( ::String path);
		static Dynamic readXml_dyn();

		static ::haxe::xml::Fast readFast( ::String path);
		static Dynamic readFast_dyn();

		static Void writeXml( ::Xml data,::String path,hx::Null< bool >  wrapData,hx::Null< bool >  addHeader);
		static Dynamic writeXml_dyn();

		static Dynamic getXML( ::String str,::String folder);
		static Dynamic getXML_dyn();

		static Dynamic json( ::String str,::String extension,::String dir);
		static Dynamic json_dyn();

		static Dynamic field( Dynamic object,::String field,Dynamic _default);
		static Dynamic field_dyn();

		static Dynamic xml( ::String id,::String extension,hx::Null< bool >  getFast,::String dir);
		static Dynamic xml_dyn();

		static Void clearArraySoft( cpp::ArrayBase array);
		static Dynamic clearArraySoft_dyn();

		static Void clearArray( cpp::ArrayBase array);
		static Dynamic clearArray_dyn();

		static Void destroyThing( Dynamic thing);
		static Dynamic destroyThing_dyn();

		static ::String fontStr( ::String str,::String style);
		static Dynamic fontStr_dyn();

		static ::String font( ::String str,::String style);
		static Dynamic font_dyn();

		static ::String _font( ::String str,::String style);
		static Dynamic _font_dyn();

		static ::flixel::addons::ui::FlxUISprite fsx( Dynamic data);
		static Dynamic fsx_dyn();

		static ::flixel::FlxSprite fs( Dynamic data);
		static Dynamic fs_dyn();

		static ::String FU( ::String str);
		static Dynamic FU_dyn();

		static bool checkHaxedef( ::String str);
		static Dynamic checkHaxedef_dyn();

		static cpp::ArrayBase copy_shallow_arr( cpp::ArrayBase src);
		static Dynamic copy_shallow_arr_dyn();

		static Array< int > copy_shallow_arr_i( Array< int > src);
		static Dynamic copy_shallow_arr_i_dyn();

		static Array< ::String > copy_shallow_arr_str( Array< ::String > src);
		static Dynamic copy_shallow_arr_str_dyn();

		static ::String FU_( ::String str);
		static Dynamic FU__dyn();

		static ::openfl::_legacy::display::BlendMode blendModeFromString( ::String str);
		static Dynamic blendModeFromString_dyn();

		static ::String gfx( ::String id,::String dir1,::String dir2,::String dir3,::String dir4,hx::Null< bool >  suppressError);
		static Dynamic gfx_dyn();

		static ::String bmpToCSVLayer( int color_index,::openfl::_legacy::display::BitmapData bd);
		static Dynamic bmpToCSVLayer_dyn();

		static ::String get_gfx( ::String str);
		static Dynamic get_gfx_dyn();

		static ::String sfx( ::String str);
		static Dynamic sfx_dyn();

		static Array< int > intStr_to_arr( ::String str);
		static Dynamic intStr_to_arr_dyn();

		static Array< ::String > intStr_to_arrStr( ::String str);
		static Dynamic intStr_to_arrStr_dyn();

		static ::String dirStr( int XX,int YY);
		static Dynamic dirStr_dyn();

		static ::flixel::util::FlxPoint obj_direction( ::flixel::FlxObject a,::flixel::FlxObject b);
		static Dynamic obj_direction_dyn();

		static bool circle_test( Float x1,Float y1,Float r1,Float x2,Float y2,Float r2);
		static Dynamic circle_test_dyn();

		static bool point_circle_test( Float x,Float y,Float cx,Float cy,Float r);
		static Dynamic point_circle_test_dyn();

		static bool aabb_test_mult( ::flixel::FlxObject a,::flixel::FlxObject b,hx::Null< Float >  multA,hx::Null< Float >  multB);
		static Dynamic aabb_test_mult_dyn();

		static bool aabb_test( ::flixel::FlxObject a,::flixel::FlxObject b);
		static Dynamic aabb_test_dyn();

		static ::openfl::_legacy::geom::Point bitStringDimensions( ::String str);
		static Dynamic bitStringDimensions_dyn();

		static Array< int > splitBitString( ::String str);
		static Dynamic splitBitString_dyn();

		static ::String getShortTextFromFlxKeyText( ::String str);
		static Dynamic getShortTextFromFlxKeyText_dyn();

		static ::String getFlxKeyTextFromShortText( ::String str);
		static Dynamic getFlxKeyTextFromShortText_dyn();

		static ::String formatXml( ::Xml _xml);
		static Dynamic formatXml_dyn();

		static ::String strCase( ::String str,::String code);
		static Dynamic strCase_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_U */ 
