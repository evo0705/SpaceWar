#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void U_obj::__construct()
{
	return null();
}

//U_obj::~U_obj() { }

Dynamic U_obj::__CreateEmpty() { return  new U_obj; }
hx::ObjectPtr< U_obj > U_obj::__new()
{  hx::ObjectPtr< U_obj > _result_ = new U_obj();
	_result_->__construct();
	return _result_;}

Dynamic U_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< U_obj > _result_ = new U_obj();
	_result_->__construct();
	return _result_;}

::String U_obj::xml_str( ::Xml data,::String att,hx::Null< bool >  __o_lower_case,::String __o_default_str){
bool lower_case = __o_lower_case.Default(false);
::String default_str = __o_default_str.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.U","xml_str",0xebebbe9f,"flixel.addons.ui.U.xml_str","flixel/addons/ui/U.hx",39,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(lower_case,"lower_case")
	HX_STACK_ARG(default_str,"default_str")
{
		HX_STACK_LINE(40)
		::String tmp = att;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::String tmp1 = data->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		if ((tmp2)){
			HX_STACK_LINE(41)
			bool tmp3 = lower_case;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			if ((tmp3)){
				HX_STACK_LINE(42)
				::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				::String tmp5 = data->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				::String tmp6 = tmp5.toLowerCase();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				return tmp6;
			}
			else{
				HX_STACK_LINE(44)
				::String tmp4 = att;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(44)
				::String tmp5 = data->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(44)
				return tmp5;
			}
		}
		HX_STACK_LINE(46)
		::String tmp3 = default_str;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,xml_str,return )

Float U_obj::perc_to_float( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","perc_to_float",0xc1657e67,"flixel.addons.ui.U.perc_to_float","flixel/addons/ui/U.hx",55,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(56)
	int tmp = str.lastIndexOf(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	int tmp1 = (str.length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(57)
		int tmp3 = (str.length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		::String tmp4 = str.substr((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		str = tmp4;
		HX_STACK_LINE(58)
		::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("([0-9]+)?(\\.)?([0-9]*)?","\x69","\x52","\x2d","\x64"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		::EReg r = tmp5;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(59)
		::String tmp6 = str;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		bool tmp7 = r->match(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		if ((tmp7)){
			HX_STACK_LINE(60)
			Dynamic tmp8 = r->matchedPos();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			Dynamic match = tmp8;		HX_STACK_VAR(match,"match");
			HX_STACK_LINE(61)
			bool tmp9 = (match->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			if ((tmp9)){
				HX_STACK_LINE(61)
				tmp10 = (match->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == str.length);
			}
			else{
				HX_STACK_LINE(61)
				tmp10 = false;
			}
			HX_STACK_LINE(61)
			if ((tmp10)){
				HX_STACK_LINE(62)
				::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				Float tmp12 = ::Std_obj::parseFloat(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				Float perc_float = tmp12;		HX_STACK_VAR(perc_float,"perc_float");
				HX_STACK_LINE(63)
				hx::DivEq(perc_float,(int)100);
				HX_STACK_LINE(64)
				Float tmp13 = perc_float;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(64)
				return tmp13;
			}
		}
	}
	HX_STACK_LINE(68)
	Float tmp3 = ::Math_obj::NaN;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,perc_to_float,return )

bool U_obj::isStrNum( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","isStrNum",0x399f4549,"flixel.addons.ui.U.isStrNum","flixel/addons/ui/U.hx",71,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(72)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("-?([0-9]+)?(\\.)?([0-9]*)?","\x37","\xd9","\x6d","\x5d"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::EReg r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(73)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	bool tmp2 = r->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	if ((tmp2)){
		HX_STACK_LINE(74)
		Dynamic tmp3 = r->matchedPos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		Dynamic p = tmp3;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(75)
		bool tmp4 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(75)
			tmp5 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == str.length);
		}
		else{
			HX_STACK_LINE(75)
			tmp5 = false;
		}
		HX_STACK_LINE(75)
		if ((tmp5)){
			HX_STACK_LINE(76)
			return true;
		}
	}
	HX_STACK_LINE(79)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,isStrNum,return )

bool U_obj::isStrInt( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","isStrInt",0x399b73f2,"flixel.addons.ui.U.isStrInt","flixel/addons/ui/U.hx",82,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(83)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("[0-9]+","\x8f","\xd9","\x9f","\x23"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::EReg r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(84)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	bool tmp2 = r->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	if ((tmp2)){
		HX_STACK_LINE(85)
		Dynamic tmp3 = r->matchedPos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		Dynamic p = tmp3;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(86)
		bool tmp4 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		if ((tmp4)){
			HX_STACK_LINE(86)
			tmp5 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == str.length);
		}
		else{
			HX_STACK_LINE(86)
			tmp5 = false;
		}
		HX_STACK_LINE(86)
		if ((tmp5)){
			HX_STACK_LINE(87)
			return true;
		}
	}
	HX_STACK_LINE(90)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,isStrInt,return )

bool U_obj::isStrFloat( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","isStrFloat",0xb2cc335f,"flixel.addons.ui.U.isStrFloat","flixel/addons/ui/U.hx",93,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(94)
	::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("[0-9]+\\.[0-9]+","\xf0","\xb3","\x16","\xfc"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::EReg r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(95)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	bool tmp2 = r->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	if ((tmp2)){
		HX_STACK_LINE(96)
		Dynamic tmp3 = r->matchedPos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Dynamic p = tmp3;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(97)
		bool tmp4 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		if ((tmp4)){
			HX_STACK_LINE(97)
			tmp5 = (p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ) == str.length);
		}
		else{
			HX_STACK_LINE(97)
			tmp5 = false;
		}
		HX_STACK_LINE(97)
		if ((tmp5)){
			HX_STACK_LINE(98)
			return true;
		}
	}
	HX_STACK_LINE(101)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,isStrFloat,return )

Float U_obj::xml_f( ::Xml data,::String att,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_f",0xcb3d1ed4,"flixel.addons.ui.U.xml_f","flixel/addons/ui/U.hx",112,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(113)
		::String tmp = att;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		::String tmp1 = data->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(114)
			::String tmp3 = att;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			::String tmp4 = data->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			Float tmp5 = ::Std_obj::parseFloat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			return tmp5;
		}
		HX_STACK_LINE(115)
		Float tmp3 = default_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_f,return )

int U_obj::xml_i( ::Xml data,::String att,hx::Null< int >  __o_default_){
int default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_i",0xcb3d1ed7,"flixel.addons.ui.U.xml_i","flixel/addons/ui/U.hx",126,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(127)
		::String tmp = att;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::String tmp1 = data->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		if ((tmp2)){
			HX_STACK_LINE(128)
			::String tmp3 = att;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::String tmp4 = data->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			return tmp5;
		}
		HX_STACK_LINE(129)
		int tmp3 = default_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_i,return )

bool U_obj::xml_bool( ::Xml data,::String att,hx::Null< bool >  __o_default_){
bool default_ = __o_default_.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_bool",0x771a9e7c,"flixel.addons.ui.U.xml_bool","flixel/addons/ui/U.hx",140,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(141)
		::String tmp = att;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		::String tmp1 = data->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(142)
			::String tmp3 = att;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			::String tmp4 = data->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			::String str = tmp4;		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(143)
			::String tmp5 = str.toLowerCase();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			str = tmp5;
			HX_STACK_LINE(144)
			bool tmp6 = (str == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			if ((tmp7)){
				HX_STACK_LINE(144)
				tmp8 = (str == HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(144)
				tmp8 = true;
			}
			HX_STACK_LINE(144)
			if ((tmp8)){
				HX_STACK_LINE(145)
				return true;
			}
			HX_STACK_LINE(147)
			return false;
		}
		HX_STACK_LINE(149)
		bool tmp3 = default_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_bool,return )

::String U_obj::xml_gfx( ::Xml data,::String att,hx::Null< bool >  __o_test){
bool test = __o_test.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","xml_gfx",0xebe29767,"flixel.addons.ui.U.xml_gfx","flixel/addons/ui/U.hx",152,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(att,"att")
	HX_STACK_ARG(test,"test")
{
		HX_STACK_LINE(153)
		::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(154)
		::String tmp = att;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		::String tmp1 = data->get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		if ((tmp2)){
			HX_STACK_LINE(155)
			::String tmp3 = att;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			::String tmp4 = data->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			str = tmp4;
			HX_STACK_LINE(156)
			bool tmp5 = (str == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			if ((tmp6)){
				HX_STACK_LINE(156)
				tmp7 = (str == null());
			}
			else{
				HX_STACK_LINE(156)
				tmp7 = true;
			}
			HX_STACK_LINE(156)
			if ((tmp7)){
				HX_STACK_LINE(157)
				str = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(159)
				::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(159)
				::String tmp9 = ::flixel::addons::ui::U_obj::gfx(tmp8,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(159)
				str = tmp9;
				HX_STACK_LINE(160)
				bool tmp10 = test;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(160)
				if ((tmp10)){
					HX_STACK_LINE(161)
					try
					{
					HX_STACK_CATCHABLE(::String, 0);
					{
						HX_STACK_LINE(162)
						::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(162)
						::openfl::_legacy::display::BitmapData tmp12 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(162)
						::openfl::_legacy::display::BitmapData testbmp = tmp12;		HX_STACK_VAR(testbmp,"testbmp");
						HX_STACK_LINE(163)
						bool tmp13 = (testbmp == null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(163)
						if ((tmp13)){
							HX_STACK_LINE(164)
							::String tmp14 = (HX_HCSTRING("couldn't load bmp \"","\x73","\xa2","\x6e","\x30") + att);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(164)
							::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(164)
							HX_STACK_DO_THROW(tmp15);
						}
						HX_STACK_LINE(166)
						testbmp = null();
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String msg = __e;{
								HX_STACK_LINE(168)
								Dynamic();
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
				}
			}
		}
		HX_STACK_LINE(173)
		::String tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,xml_gfx,return )

Void U_obj::center( ::flixel::FlxObject fb1,::flixel::FlxObject fb2,hx::Null< bool >  __o_centerX,hx::Null< bool >  __o_centerY){
bool centerX = __o_centerX.Default(true);
bool centerY = __o_centerY.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","center",0x0aecfeff,"flixel.addons.ui.U.center","flixel/addons/ui/U.hx",184,0x74647d9b)
	HX_STACK_ARG(fb1,"fb1")
	HX_STACK_ARG(fb2,"fb2")
	HX_STACK_ARG(centerX,"centerX")
	HX_STACK_ARG(centerY,"centerY")
{
		HX_STACK_LINE(185)
		bool tmp = centerX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		if ((tmp)){
			HX_STACK_LINE(185)
			Float tmp1 = fb1->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			Float tmp2 = fb1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			Float tmp3 = fb2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			Float tmp6 = (tmp1 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			fb2->set_x(tmp6);
		}
		HX_STACK_LINE(186)
		bool tmp1 = centerY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		if ((tmp1)){
			HX_STACK_LINE(186)
			Float tmp2 = fb1->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(186)
			Float tmp3 = fb1->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(186)
			Float tmp4 = fb2->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			Float tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			fb2->set_y(tmp7);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,center,(void))

bool U_obj::test_int( int i1,::String test,int i2){
	HX_STACK_FRAME("flixel.addons.ui.U","test_int",0x278ea2ec,"flixel.addons.ui.U.test_int","flixel/addons/ui/U.hx",202,0x74647d9b)
	HX_STACK_ARG(i1,"i1")
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(i2,"i2")
	HX_STACK_LINE(203)
	bool _bool = false;		HX_STACK_VAR(_bool,"bool");
	HX_STACK_LINE(204)
	::String tmp = test;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
		HX_STACK_LINE(205)
		bool tmp1 = (i1 == i2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		_bool = tmp1;
	}
	else if (  ( _switch_1==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
		HX_STACK_LINE(206)
		bool tmp1 = (i1 < i2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		_bool = tmp1;
	}
	else if (  ( _switch_1==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
		HX_STACK_LINE(207)
		bool tmp1 = (i1 > i2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		_bool = tmp1;
	}
	else if (  ( _switch_1==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
		HX_STACK_LINE(208)
		bool tmp1 = (i1 <= i2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		_bool = tmp1;
	}
	else if (  ( _switch_1==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
		HX_STACK_LINE(209)
		bool tmp1 = (i1 >= i2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		_bool = tmp1;
	}
	else if (  ( _switch_1==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){
		HX_STACK_LINE(210)
		bool tmp1 = (i1 != i2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		_bool = tmp1;
	}
	HX_STACK_LINE(212)
	bool tmp1 = _bool;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,test_int,return )

bool U_obj::test_float( Float f1,::String test,int f2){
	HX_STACK_FRAME("flixel.addons.ui.U","test_float",0x672494d9,"flixel.addons.ui.U.test_float","flixel/addons/ui/U.hx",215,0x74647d9b)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(test,"test")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(216)
	bool _bool = false;		HX_STACK_VAR(_bool,"bool");
	HX_STACK_LINE(217)
	::String tmp = test;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	::String _switch_2 = (tmp);
	if (  ( _switch_2==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
		HX_STACK_LINE(218)
		bool tmp1 = (f1 == f2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		_bool = tmp1;
	}
	else if (  ( _switch_2==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
		HX_STACK_LINE(219)
		bool tmp1 = (f1 < f2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		_bool = tmp1;
	}
	else if (  ( _switch_2==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
		HX_STACK_LINE(220)
		bool tmp1 = (f1 > f2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		_bool = tmp1;
	}
	else if (  ( _switch_2==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
		HX_STACK_LINE(221)
		bool tmp1 = (f1 <= f2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		_bool = tmp1;
	}
	else if (  ( _switch_2==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
		HX_STACK_LINE(222)
		bool tmp1 = (f1 >= f2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		_bool = tmp1;
	}
	else if (  ( _switch_2==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){
		HX_STACK_LINE(223)
		bool tmp1 = (f1 != f2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		_bool = tmp1;
	}
	HX_STACK_LINE(225)
	bool tmp1 = _bool;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,test_float,return )

::String U_obj::padDigits( int i,int d){
	HX_STACK_FRAME("flixel.addons.ui.U","padDigits",0x6478ccef,"flixel.addons.ui.U.padDigits","flixel/addons/ui/U.hx",266,0x74647d9b)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(267)
	Float f = i;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(268)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(269)
	int num_digits = (int)0;		HX_STACK_VAR(num_digits,"num_digits");
	HX_STACK_LINE(270)
	while((true)){
		HX_STACK_LINE(270)
		bool tmp = (f >= (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		if ((tmp1)){
			HX_STACK_LINE(270)
			break;
		}
		HX_STACK_LINE(271)
		hx::DivEq(f,(int)10);
		HX_STACK_LINE(272)
		(num_digits)++;
	}
	HX_STACK_LINE(275)
	bool tmp = (i == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	if ((tmp)){
		HX_STACK_LINE(276)
		num_digits = (int)1;
	}
	HX_STACK_LINE(279)
	bool tmp1 = (num_digits < d);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	if ((tmp1)){
		HX_STACK_LINE(280)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(280)
		int tmp2 = (d - num_digits);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		while((true)){
			HX_STACK_LINE(280)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(280)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(280)
			if ((tmp4)){
				HX_STACK_LINE(280)
				break;
			}
			HX_STACK_LINE(280)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			int temp = tmp5;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(281)
			hx::AddEq(str,HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
		}
	}
	HX_STACK_LINE(285)
	::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(285)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(285)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(285)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,padDigits,return )

int U_obj::parseHex( ::String str,hx::Null< bool >  __o_cast32Bit,hx::Null< bool >  __o_safe,hx::Null< int >  __o_default_color){
bool cast32Bit = __o_cast32Bit.Default(false);
bool safe = __o_safe.Default(false);
int default_color = __o_default_color.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.U","parseHex",0xa68b4412,"flixel.addons.ui.U.parseHex","flixel/addons/ui/U.hx",297,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(cast32Bit,"cast32Bit")
	HX_STACK_ARG(safe,"safe")
	HX_STACK_ARG(default_color,"default_color")
{
		HX_STACK_LINE(298)
		int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
		HX_STACK_LINE(300)
		int tmp = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		if ((tmp1)){
			HX_STACK_LINE(301)
			bool tmp2 = safe;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(301)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(301)
			if ((tmp3)){
				HX_STACK_LINE(302)
				::String tmp4 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(302)
				::String tmp5 = (tmp4 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(302)
				HX_STACK_DO_THROW(tmp5);
			}
			else{
				HX_STACK_LINE(304)
				return_val = default_color;
			}
		}
		HX_STACK_LINE(308)
		bool tmp2 = (str.length != (int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		if ((tmp2)){
			HX_STACK_LINE(308)
			tmp3 = (str.length != (int)10);
		}
		else{
			HX_STACK_LINE(308)
			tmp3 = false;
		}
		HX_STACK_LINE(308)
		if ((tmp3)){
			HX_STACK_LINE(309)
			bool tmp4 = safe;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			if ((tmp5)){
				HX_STACK_LINE(310)
				::String tmp6 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(310)
				::String tmp7 = (tmp6 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(310)
				HX_STACK_DO_THROW(tmp7);
			}
			else{
				HX_STACK_LINE(312)
				return_val = default_color;
			}
		}
		HX_STACK_LINE(316)
		bool tmp4 = (return_val == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(316)
		if ((tmp4)){
			HX_STACK_LINE(317)
			int tmp5 = (str.length - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(317)
			::String tmp6 = str.substr((int)2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(317)
			str = tmp6;
			HX_STACK_LINE(318)
			bool tmp7 = cast32Bit;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(318)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(318)
			if ((tmp7)){
				HX_STACK_LINE(318)
				tmp8 = (str.length == (int)6);
			}
			else{
				HX_STACK_LINE(318)
				tmp8 = false;
			}
			HX_STACK_LINE(318)
			if ((tmp8)){
				HX_STACK_LINE(319)
				::String tmp9 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				str = tmp9;
			}
			HX_STACK_LINE(321)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(321)
			{
				HX_STACK_LINE(321)
				int length = str.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(321)
				int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
				HX_STACK_LINE(321)
				int sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(321)
				int tmp10 = (length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(321)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(321)
				while((true)){
					HX_STACK_LINE(321)
					bool tmp11 = (i >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(321)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(321)
					if ((tmp12)){
						HX_STACK_LINE(321)
						break;
					}
					HX_STACK_LINE(321)
					int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(321)
					::String tmp14 = str.substr(tmp13,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(321)
					::String char_hex = tmp14;		HX_STACK_VAR(char_hex,"char_hex");
					HX_STACK_LINE(321)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(321)
					{
						HX_STACK_LINE(321)
						int val = (int)-1;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(321)
						::String tmp16 = char_hex;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(321)
						::String _switch_3 = (tmp16);
						if (  ( _switch_3==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
							HX_STACK_LINE(321)
							::String tmp17 = char_hex;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(321)
							Dynamic tmp18 = ::Std_obj::parseInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(321)
							val = tmp18;
						}
						else if (  ( _switch_3==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
							HX_STACK_LINE(321)
							val = (int)10;
						}
						else if (  ( _switch_3==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
							HX_STACK_LINE(321)
							val = (int)11;
						}
						else if (  ( _switch_3==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
							HX_STACK_LINE(321)
							val = (int)12;
						}
						else if (  ( _switch_3==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
							HX_STACK_LINE(321)
							val = (int)13;
						}
						else if (  ( _switch_3==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
							HX_STACK_LINE(321)
							val = (int)14;
						}
						else if (  ( _switch_3==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
							HX_STACK_LINE(321)
							val = (int)15;
						}
						HX_STACK_LINE(321)
						bool tmp17 = (val == (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(321)
						if ((tmp17)){
							HX_STACK_LINE(321)
							::String tmp18 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(321)
							::String tmp19 = (tmp18 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(321)
							HX_STACK_DO_THROW(tmp19);
						}
						HX_STACK_LINE(321)
						tmp15 = val;
					}
					HX_STACK_LINE(321)
					int char_int = tmp15;		HX_STACK_VAR(char_int,"char_int");
					HX_STACK_LINE(321)
					int tmp16 = (char_int * place_mult);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(321)
					hx::AddEq(sum,tmp16);
					HX_STACK_LINE(321)
					hx::MultEq(place_mult,(int)16);
					HX_STACK_LINE(321)
					(i)--;
				}
				HX_STACK_LINE(321)
				tmp9 = sum;
			}
			HX_STACK_LINE(321)
			return_val = tmp9;
		}
		HX_STACK_LINE(324)
		int tmp5 = return_val;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,parseHex,return )

int U_obj::hexChar2dec( ::String hex_char){
	HX_STACK_FRAME("flixel.addons.ui.U","hexChar2dec",0xbd0fe737,"flixel.addons.ui.U.hexChar2dec","flixel/addons/ui/U.hx",333,0x74647d9b)
	HX_STACK_ARG(hex_char,"hex_char")
	HX_STACK_LINE(334)
	int val = (int)-1;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(335)
	::String tmp = hex_char;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	::String _switch_4 = (tmp);
	if (  ( _switch_4==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
		HX_STACK_LINE(336)
		::String tmp1 = hex_char;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(336)
		val = tmp2;
	}
	else if (  ( _switch_4==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
		HX_STACK_LINE(337)
		val = (int)10;
	}
	else if (  ( _switch_4==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
		HX_STACK_LINE(338)
		val = (int)11;
	}
	else if (  ( _switch_4==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
		HX_STACK_LINE(339)
		val = (int)12;
	}
	else if (  ( _switch_4==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
		HX_STACK_LINE(340)
		val = (int)13;
	}
	else if (  ( _switch_4==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
		HX_STACK_LINE(341)
		val = (int)14;
	}
	else if (  ( _switch_4==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_4==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
		HX_STACK_LINE(342)
		val = (int)15;
	}
	HX_STACK_LINE(344)
	bool tmp1 = (val == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	if ((tmp1)){
		HX_STACK_LINE(345)
		::String tmp2 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + hex_char);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(347)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,hexChar2dec,return )

int U_obj::hex2dec( ::String hex_str){
	HX_STACK_FRAME("flixel.addons.ui.U","hex2dec",0xeabe5cc1,"flixel.addons.ui.U.hex2dec","flixel/addons/ui/U.hx",356,0x74647d9b)
	HX_STACK_ARG(hex_str,"hex_str")
	HX_STACK_LINE(357)
	int length = hex_str.length;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(358)
	int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
	HX_STACK_LINE(359)
	int sum = (int)0;		HX_STACK_VAR(sum,"sum");
	HX_STACK_LINE(360)
	int tmp = (length - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(360)
	while((true)){
		HX_STACK_LINE(360)
		bool tmp1 = (i >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(360)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		if ((tmp2)){
			HX_STACK_LINE(360)
			break;
		}
		HX_STACK_LINE(361)
		int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(361)
		::String tmp4 = hex_str.substr(tmp3,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		::String char_hex = tmp4;		HX_STACK_VAR(char_hex,"char_hex");
		HX_STACK_LINE(362)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		{
			HX_STACK_LINE(362)
			int val = (int)-1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(362)
			::String tmp6 = char_hex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(362)
			::String _switch_5 = (tmp6);
			if (  ( _switch_5==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
				HX_STACK_LINE(362)
				::String tmp7 = char_hex;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(362)
				Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(362)
				val = tmp8;
			}
			else if (  ( _switch_5==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
				HX_STACK_LINE(362)
				val = (int)10;
			}
			else if (  ( _switch_5==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
				HX_STACK_LINE(362)
				val = (int)11;
			}
			else if (  ( _switch_5==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
				HX_STACK_LINE(362)
				val = (int)12;
			}
			else if (  ( _switch_5==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
				HX_STACK_LINE(362)
				val = (int)13;
			}
			else if (  ( _switch_5==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
				HX_STACK_LINE(362)
				val = (int)14;
			}
			else if (  ( _switch_5==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
				HX_STACK_LINE(362)
				val = (int)15;
			}
			HX_STACK_LINE(362)
			bool tmp7 = (val == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(362)
			if ((tmp7)){
				HX_STACK_LINE(362)
				::String tmp8 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(362)
				::String tmp9 = (tmp8 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(362)
				HX_STACK_DO_THROW(tmp9);
			}
			HX_STACK_LINE(362)
			tmp5 = val;
		}
		HX_STACK_LINE(362)
		int char_int = tmp5;		HX_STACK_VAR(char_int,"char_int");
		HX_STACK_LINE(363)
		int tmp6 = (char_int * place_mult);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		hx::AddEq(sum,tmp6);
		HX_STACK_LINE(364)
		hx::MultEq(place_mult,(int)16);
		HX_STACK_LINE(365)
		(i)--;
	}
	HX_STACK_LINE(367)
	int tmp1 = sum;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,hex2dec,return )

Array< int > U_obj::hex2rgb( int hex){
	HX_STACK_FRAME("flixel.addons.ui.U","hex2rgb",0xeac8fe0c,"flixel.addons.ui.U.hex2rgb","flixel/addons/ui/U.hx",376,0x74647d9b)
	HX_STACK_ARG(hex,"hex")
	HX_STACK_LINE(377)
	int tmp = (int(hex) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(378)
	int tmp2 = (int(hex) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(378)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(379)
	int tmp4 = (int(hex) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(377)
	return Array_obj< int >::__new().Add(tmp1).Add(tmp3).Add(tmp4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,hex2rgb,return )

int U_obj::rgb2hex( int r,int g,int b){
	HX_STACK_FRAME("flixel.addons.ui.U","rgb2hex",0xac7dff0c,"flixel.addons.ui.U.rgb2hex","flixel/addons/ui/U.hx",390,0x74647d9b)
	HX_STACK_ARG(r,"r")
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(391)
	int tmp = (int(r) << int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	int tmp1 = (int(g) << int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(391)
	int tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(391)
	int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(391)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,rgb2hex,return )

int U_obj::interpolate( int hex1,int hex2,Float amt){
	HX_STACK_FRAME("flixel.addons.ui.U","interpolate",0x58cb8357,"flixel.addons.ui.U.interpolate","flixel/addons/ui/U.hx",402,0x74647d9b)
	HX_STACK_ARG(hex1,"hex1")
	HX_STACK_ARG(hex2,"hex2")
	HX_STACK_ARG(amt,"amt")
	HX_STACK_LINE(403)
	bool tmp = (amt < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	if ((tmp)){
		HX_STACK_LINE(403)
		amt = (int)0;
	}
	else{
		HX_STACK_LINE(403)
		bool tmp1 = (amt > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		if ((tmp1)){
			HX_STACK_LINE(403)
			amt = (int)1;
		}
	}
	HX_STACK_LINE(405)
	Float tmp1 = ((int)1 - amt);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	Float a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(407)
	int tmp2 = (int(hex1) >> int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(407)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(407)
	int c1r = tmp3;		HX_STACK_VAR(c1r,"c1r");
	HX_STACK_LINE(408)
	int tmp4 = (int(hex1) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(408)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(408)
	int c1g = tmp5;		HX_STACK_VAR(c1g,"c1g");
	HX_STACK_LINE(409)
	int tmp6 = (int(hex1) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(409)
	int c1b = tmp6;		HX_STACK_VAR(c1b,"c1b");
	HX_STACK_LINE(411)
	int tmp7 = (int(hex2) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(411)
	int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(411)
	int c2r = tmp8;		HX_STACK_VAR(c2r,"c2r");
	HX_STACK_LINE(412)
	int tmp9 = (int(hex2) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(412)
	int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(412)
	int c2g = tmp10;		HX_STACK_VAR(c2g,"c2g");
	HX_STACK_LINE(413)
	int tmp11 = (int(hex2) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(413)
	int c2b = tmp11;		HX_STACK_VAR(c2b,"c2b");
	HX_STACK_LINE(415)
	Float tmp12 = (c1r * a1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(415)
	Float tmp13 = (c2r * amt);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(415)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(415)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(415)
	int c3r = tmp15;		HX_STACK_VAR(c3r,"c3r");
	HX_STACK_LINE(416)
	Float tmp16 = (c1g * a1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(416)
	Float tmp17 = (c2g * amt);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(416)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(416)
	int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(416)
	int c3g = tmp19;		HX_STACK_VAR(c3g,"c3g");
	HX_STACK_LINE(417)
	Float tmp20 = (c1b * a1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(417)
	Float tmp21 = (c2b * amt);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(417)
	Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(417)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(417)
	int c3b = tmp23;		HX_STACK_VAR(c3b,"c3b");
	HX_STACK_LINE(419)
	int tmp24 = (int(c3r) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(419)
	int tmp25 = (int(c3g) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(419)
	int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(419)
	int tmp27 = c3b;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(419)
	int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(419)
	return tmp28;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,interpolate,return )

Array< ::Dynamic > U_obj::getLocList( int xmin,int ymin,int xmax,int ymax){
	HX_STACK_FRAME("flixel.addons.ui.U","getLocList",0xf38b1932,"flixel.addons.ui.U.getLocList","flixel/addons/ui/U.hx",438,0x74647d9b)
	HX_STACK_ARG(xmin,"xmin")
	HX_STACK_ARG(ymin,"ymin")
	HX_STACK_ARG(xmax,"xmax")
	HX_STACK_ARG(ymax,"ymax")
	HX_STACK_LINE(439)
	Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(440)
		int _g1 = ymin;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(440)
		int tmp = (ymax + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		while((true)){
			HX_STACK_LINE(440)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(440)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			if ((tmp2)){
				HX_STACK_LINE(440)
				break;
			}
			HX_STACK_LINE(440)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(440)
			int yy = tmp3;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				int _g3 = xmin;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(441)
				int tmp4 = (xmax + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(441)
				int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(441)
				while((true)){
					HX_STACK_LINE(441)
					bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(441)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(441)
					if ((tmp6)){
						HX_STACK_LINE(441)
						break;
					}
					HX_STACK_LINE(441)
					int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(441)
					int xx = tmp7;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(442)
					::flixel::util::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(442)
					{
						HX_STACK_LINE(442)
						::flixel::util::FlxPool tmp9 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(442)
						::flixel::util::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(442)
						int tmp11 = xx;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(442)
						int tmp12 = yy;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(442)
						::flixel::util::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(442)
						::flixel::util::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(442)
						point->_inPool = false;
						HX_STACK_LINE(442)
						tmp8 = point;
					}
					HX_STACK_LINE(442)
					list->push(tmp8);
				}
			}
		}
	}
	HX_STACK_LINE(444)
	return list;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,getLocList,return )

Void U_obj::disposeXML( Dynamic thing){
{
		HX_STACK_FRAME("flixel.addons.ui.U","disposeXML",0xe5262ca2,"flixel.addons.ui.U.disposeXML","flixel/addons/ui/U.hx",447,0x74647d9b)
		HX_STACK_ARG(thing,"thing")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,disposeXML,(void))

::haxe::xml::Fast U_obj::copyFast( ::haxe::xml::Fast fast){
	HX_STACK_FRAME("flixel.addons.ui.U","copyFast",0x986e209b,"flixel.addons.ui.U.copyFast","flixel/addons/ui/U.hx",461,0x74647d9b)
	HX_STACK_ARG(fast,"fast")
	HX_STACK_LINE(462)
	::Xml tmp = fast->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	::String tmp1 = ::haxe::xml::Printer_obj::print(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(462)
	::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(462)
	::Xml tmp3 = tmp2->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(462)
	::haxe::xml::Fast tmp4 = ::haxe::xml::Fast_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(462)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copyFast,return )

::Xml U_obj::copyXml( ::Xml data){
	HX_STACK_FRAME("flixel.addons.ui.U","copyXml",0xae1514b8,"flixel.addons.ui.U.copyXml","flixel/addons/ui/U.hx",465,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(466)
	::Xml tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	::String tmp1 = ::haxe::xml::Printer_obj::print(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(466)
	::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	::Xml tmp3 = tmp2->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(466)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copyXml,return )

::Xml U_obj::readXml( ::String path){
	HX_STACK_FRAME("flixel.addons.ui.U","readXml",0x6d613fb7,"flixel.addons.ui.U.readXml","flixel/addons/ui/U.hx",470,0x74647d9b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(471)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	bool tmp1 = ::sys::FileSystem_obj::exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	if ((tmp1)){
		HX_STACK_LINE(472)
		::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		::String tmp3 = ::sys::io::File_obj::getContent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		::String content = tmp3;		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(473)
		::String tmp4 = content;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(473)
		::Xml tmp5 = ::Xml_obj::parse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(473)
		::Xml tmp6 = tmp5->firstElement();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(473)
		return tmp6;
	}
	HX_STACK_LINE(475)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,readXml,return )

::haxe::xml::Fast U_obj::readFast( ::String path){
	HX_STACK_FRAME("flixel.addons.ui.U","readFast",0x3bc794bc,"flixel.addons.ui.U.readFast","flixel/addons/ui/U.hx",478,0x74647d9b)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(479)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	::Xml tmp1 = ::flixel::addons::ui::U_obj::readXml(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	::Xml xml = tmp1;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(480)
	bool tmp2 = (xml != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	if ((tmp2)){
		HX_STACK_LINE(481)
		::haxe::xml::Fast tmp3 = ::haxe::xml::Fast_obj::__new(xml);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		return tmp3;
	}
	HX_STACK_LINE(483)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,readFast,return )

Void U_obj::writeXml( ::Xml data,::String path,hx::Null< bool >  __o_wrapData,hx::Null< bool >  __o_addHeader){
bool wrapData = __o_wrapData.Default(true);
bool addHeader = __o_addHeader.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.U","writeXml",0xf415c5e2,"flixel.addons.ui.U.writeXml","flixel/addons/ui/U.hx",487,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(wrapData,"wrapData")
	HX_STACK_ARG(addHeader,"addHeader")
{
		HX_STACK_LINE(488)
		::Xml xml = data;		HX_STACK_VAR(xml,"xml");
		HX_STACK_LINE(490)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(490)
		bool tmp1 = ::sys::FileSystem_obj::exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(490)
		if ((tmp1)){
			HX_STACK_LINE(492)
			::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(492)
			::sys::FileSystem_obj::deleteFile(tmp2);
		}
		HX_STACK_LINE(495)
		::String xmlString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(xmlString,"xmlString");
		HX_STACK_LINE(497)
		::String tmp2 = path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		::sys::io::FileOutput tmp3 = ::sys::io::File_obj::write(tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		::sys::io::FileOutput fout = tmp3;		HX_STACK_VAR(fout,"fout");
		HX_STACK_LINE(498)
		bool tmp4 = addHeader;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		if ((tmp4)){
			HX_STACK_LINE(499)
			xmlString = HX_HCSTRING("<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n","\x73","\x6f","\x3d","\x1e");
		}
		HX_STACK_LINE(501)
		bool tmp5 = wrapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		if ((tmp5)){
			HX_STACK_LINE(502)
			hx::AddEq(xmlString,HX_HCSTRING("<data>\n","\xf2","\xbf","\x8c","\xe1"));
		}
		HX_STACK_LINE(505)
		::Xml tmp6 = xml;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(505)
		::String tmp7 = ::haxe::xml::Printer_obj::print(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(505)
		hx::AddEq(xmlString,tmp7);
		HX_STACK_LINE(507)
		bool tmp8 = wrapData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		if ((tmp8)){
			HX_STACK_LINE(508)
			hx::AddEq(xmlString,HX_HCSTRING("</data>","\x81","\xd9","\x55","\x5e"));
		}
		HX_STACK_LINE(511)
		::String tmp9 = xmlString;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(511)
		fout->writeString(tmp9);
		HX_STACK_LINE(512)
		fout->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,writeXml,(void))

Dynamic U_obj::getXML( ::String str,::String __o_folder){
::String folder = __o_folder.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.U","getXML",0xa83c640b,"flixel.addons.ui.U.getXML","flixel/addons/ui/U.hx",516,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(folder,"folder")
{
		HX_STACK_LINE(517)
		::String id = str;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(518)
		bool tmp = (folder != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		if ((tmp)){
			HX_STACK_LINE(519)
			::String tmp1 = (folder + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(519)
			::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(519)
			::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(519)
			id = tmp3;
		}
		HX_STACK_LINE(521)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(521)
		Dynamic tmp2 = ::flixel::addons::ui::U_obj::xml(tmp1,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,getXML,return )

Dynamic U_obj::json( ::String str,::String __o_extension,::String __o_dir){
::String extension = __o_extension.Default(HX_HCSTRING("json","\x28","\x42","\x68","\x46"));
::String dir = __o_dir.Default(HX_HCSTRING("assets/json/","\x3b","\xa3","\xbc","\x20"));
	HX_STACK_FRAME("flixel.addons.ui.U","json",0x492e9cd2,"flixel.addons.ui.U.json","flixel/addons/ui/U.hx",524,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(extension,"extension")
	HX_STACK_ARG(dir,"dir")
{
		HX_STACK_LINE(525)
		::String tmp = (dir + str);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		::String tmp1 = (tmp + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		::String tmp2 = extension;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		::String tmp4 = ::openfl::_legacy::Assets_obj::getText(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		::String json_str = tmp4;		HX_STACK_VAR(json_str,"json_str");
		HX_STACK_LINE(526)
		bool tmp5 = (json_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(526)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(526)
		if ((tmp5)){
			HX_STACK_LINE(526)
			tmp6 = (json_str != null());
		}
		else{
			HX_STACK_LINE(526)
			tmp6 = false;
		}
		HX_STACK_LINE(526)
		if ((tmp6)){
			HX_STACK_LINE(527)
			::haxe::format::JsonParser tmp7 = ::haxe::format::JsonParser_obj::__new(json_str);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			Dynamic tmp8 = tmp7->parseRec();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			Dynamic the_json = tmp8;		HX_STACK_VAR(the_json,"the_json");
			HX_STACK_LINE(528)
			Dynamic tmp9 = the_json;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(528)
			return tmp9;
		}
		HX_STACK_LINE(530)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,json,return )

Dynamic U_obj::field( Dynamic object,::String field,Dynamic _default){
	HX_STACK_FRAME("flixel.addons.ui.U","field",0x6b5c8ed0,"flixel.addons.ui.U.field","flixel/addons/ui/U.hx",533,0x74647d9b)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(_default,"_default")
	HX_STACK_LINE(534)
	bool tmp = (object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	if ((tmp)){
		HX_STACK_LINE(534)
		return null();
	}
	HX_STACK_LINE(535)
	Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	::String tmp2 = field;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	bool tmp3 = ::Reflect_obj::hasField(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(535)
	if ((tmp3)){
		HX_STACK_LINE(536)
		Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(536)
		::String tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(536)
		Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(536)
		Dynamic thing = tmp6;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(537)
		bool tmp7 = (thing == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		if ((tmp7)){
			HX_STACK_LINE(538)
			Dynamic tmp8 = _default;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(538)
			return tmp8;
		}
		HX_STACK_LINE(540)
		Dynamic tmp8 = thing;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(540)
		return tmp8;
	}
	HX_STACK_LINE(542)
	Dynamic tmp4 = _default;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(542)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(U_obj,field,return )

Dynamic U_obj::xml( ::String id,::String __o_extension,hx::Null< bool >  __o_getFast,::String __o_dir){
::String extension = __o_extension.Default(HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"));
bool getFast = __o_getFast.Default(true);
::String dir = __o_dir.Default(HX_HCSTRING("assets/xml/","\xc4","\xee","\x51","\xbb"));
	HX_STACK_FRAME("flixel.addons.ui.U","xml",0x6318966d,"flixel.addons.ui.U.xml","flixel/addons/ui/U.hx",545,0x74647d9b)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(extension,"extension")
	HX_STACK_ARG(getFast,"getFast")
	HX_STACK_ARG(dir,"dir")
{
		HX_STACK_LINE(546)
		::String tmp = (dir + id);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(546)
		::String tmp1 = (tmp + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(546)
		::String tmp2 = extension;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(546)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		::String tmp4 = ::openfl::_legacy::Assets_obj::getText(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(546)
		::String str = tmp4;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(547)
		bool tmp5 = (str == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(547)
		if ((tmp5)){
			HX_STACK_LINE(548)
			return null();
		}
		HX_STACK_LINE(550)
		::String tmp6 = str;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(550)
		::Xml tmp7 = ::Xml_obj::parse(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(550)
		::Xml the_xml = tmp7;		HX_STACK_VAR(the_xml,"the_xml");
		HX_STACK_LINE(551)
		bool tmp8 = getFast;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(551)
		if ((tmp8)){
			HX_STACK_LINE(552)
			::Xml tmp9 = the_xml->firstElement();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(552)
			::haxe::xml::Fast tmp10 = ::haxe::xml::Fast_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(552)
			::haxe::xml::Fast fast = tmp10;		HX_STACK_VAR(fast,"fast");
			HX_STACK_LINE(553)
			::haxe::xml::Fast tmp11 = fast;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(553)
			return tmp11;
		}
		else{
			HX_STACK_LINE(555)
			::Xml tmp9 = the_xml->firstElement();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(555)
			return tmp9;
		}
		HX_STACK_LINE(551)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,xml,return )

Void U_obj::clearArraySoft( cpp::ArrayBase array){
{
		HX_STACK_FRAME("flixel.addons.ui.U","clearArraySoft",0x8f7d5f00,"flixel.addons.ui.U.clearArraySoft","flixel/addons/ui/U.hx",566,0x74647d9b)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(567)
		bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		if ((tmp)){
			HX_STACK_LINE(567)
			return null();
		}
		HX_STACK_LINE(568)
		int tmp1 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(568)
		while((true)){
			HX_STACK_LINE(568)
			bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(568)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(568)
			if ((tmp3)){
				HX_STACK_LINE(568)
				break;
			}
			HX_STACK_LINE(569)
			hx::IndexRef((array).mPtr,i) = null();
			HX_STACK_LINE(570)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(570)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp4,(int)1);
			HX_STACK_LINE(571)
			(i)--;
		}
		HX_STACK_LINE(572)
		array = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,clearArraySoft,(void))

Void U_obj::clearArray( cpp::ArrayBase array){
{
		HX_STACK_FRAME("flixel.addons.ui.U","clearArray",0x7ee062f6,"flixel.addons.ui.U.clearArray","flixel/addons/ui/U.hx",580,0x74647d9b)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(581)
		bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(581)
		if ((tmp)){
			HX_STACK_LINE(581)
			return null();
		}
		HX_STACK_LINE(582)
		int tmp1 = (array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(582)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(582)
		while((true)){
			HX_STACK_LINE(582)
			bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(582)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(582)
			if ((tmp3)){
				HX_STACK_LINE(582)
				break;
			}
			HX_STACK_LINE(583)
			Dynamic tmp4 = array->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			::flixel::addons::ui::U_obj::destroyThing(tmp4);
			HX_STACK_LINE(584)
			hx::IndexRef((array).mPtr,i) = null();
			HX_STACK_LINE(585)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(585)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp5,(int)1);
			HX_STACK_LINE(586)
			(i)--;
		}
		HX_STACK_LINE(587)
		array = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,clearArray,(void))

Void U_obj::destroyThing( Dynamic thing){
{
		HX_STACK_FRAME("flixel.addons.ui.U","destroyThing",0x2d89953e,"flixel.addons.ui.U.destroyThing","flixel/addons/ui/U.hx",590,0x74647d9b)
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(591)
		bool tmp = (thing == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		if ((tmp)){
			HX_STACK_LINE(591)
			return null();
		}
		HX_STACK_LINE(593)
		Dynamic tmp1 = thing;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(593)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		if ((tmp2)){
			HX_STACK_LINE(594)
			Dynamic tmp3 = thing;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(594)
			::flixel::addons::ui::U_obj::clearArray(tmp3);
		}
		else{
			HX_STACK_LINE(595)
			Dynamic tmp3 = thing;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(595)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::flixel::interfaces::IFlxDestroyable >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(595)
			if ((tmp4)){
				HX_STACK_LINE(596)
				::flixel::interfaces::IFlxDestroyable tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(596)
				tmp5 = hx::TCast< ::flixel::interfaces::IFlxDestroyable >::cast(thing);
				HX_STACK_LINE(596)
				::flixel::interfaces::IFlxDestroyable idstr = tmp5;		HX_STACK_VAR(idstr,"idstr");
				HX_STACK_LINE(597)
				idstr->destroy();
				HX_STACK_LINE(598)
				idstr = null();
			}
			else{
				HX_STACK_LINE(599)
				Dynamic tmp5 = thing;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(599)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::flixel::FlxBasic >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(599)
				if ((tmp6)){
					HX_STACK_LINE(600)
					::flixel::FlxBasic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(600)
					tmp7 = hx::TCast< ::flixel::FlxBasic >::cast(thing);
					HX_STACK_LINE(600)
					::flixel::FlxBasic fb = tmp7;		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(601)
					fb->destroy();
					HX_STACK_LINE(602)
					fb = null();
				}
			}
		}
		HX_STACK_LINE(604)
		thing = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,destroyThing,(void))

::String U_obj::fontStr( ::String str,::String __o_style){
::String style = __o_style.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.U","fontStr",0x00b679b8,"flixel.addons.ui.U.fontStr","flixel/addons/ui/U.hx",607,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(style,"style")
{
		HX_STACK_LINE(608)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		{
			HX_STACK_LINE(608)
			::String style1 = style;		HX_STACK_VAR(style1,"style1");
			HX_STACK_LINE(608)
			::String tmp1 = style1.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(608)
			style1 = tmp1;
			HX_STACK_LINE(608)
			::String suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(suffix,"suffix");
			HX_STACK_LINE(608)
			::String tmp2 = style1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(608)
			::String _switch_6 = (tmp2);
			if (  ( _switch_6==HX_HCSTRING("normal","\x27","\x72","\x69","\x30")) ||  ( _switch_6==HX_HCSTRING("regular","\x5c","\x52","\x88","\x82")) ||  ( _switch_6==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) ||  ( _switch_6==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
				HX_STACK_LINE(608)
				suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else if (  ( _switch_6==HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")) ||  ( _switch_6==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
				HX_STACK_LINE(608)
				suffix = HX_HCSTRING("b","\x62","\x00","\x00","\x00");
			}
			else if (  ( _switch_6==HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")) ||  ( _switch_6==HX_HCSTRING("i","\x69","\x00","\x00","\x00"))){
				HX_STACK_LINE(608)
				suffix = HX_HCSTRING("i","\x69","\x00","\x00","\x00");
			}
			else if (  ( _switch_6==HX_HCSTRING("bold-italic","\xf8","\xf7","\xa5","\x60")) ||  ( _switch_6==HX_HCSTRING("bolditalic","\x35","\x22","\x3d","\x79")) ||  ( _switch_6==HX_HCSTRING("italic-bold","\x42","\x47","\x7f","\xd9")) ||  ( _switch_6==HX_HCSTRING("italicbold","\x75","\xe8","\x59","\xe8")) ||  ( _switch_6==HX_HCSTRING("ibold","\x6e","\x6a","\x2e","\xb6")) ||  ( _switch_6==HX_HCSTRING("boldi","\x44","\xd3","\xf5","\xb6")) ||  ( _switch_6==HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")) ||  ( _switch_6==HX_HCSTRING("bi","\xc7","\x55","\x00","\x00")) ||  ( _switch_6==HX_HCSTRING("z","\x7a","\x00","\x00","\x00"))){
				HX_STACK_LINE(608)
				suffix = HX_HCSTRING("z","\x7a","\x00","\x00","\x00");
			}
			HX_STACK_LINE(608)
			int tmp3 = str.indexOf(HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(608)
			bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(608)
			if ((tmp4)){
				HX_STACK_LINE(608)
				::String tmp5 = (HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c") + str);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(608)
				::String tmp6 = suffix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(608)
				tmp = (tmp5 + tmp6);
			}
			else{
				HX_STACK_LINE(608)
				tmp = (str + suffix);
			}
		}
		HX_STACK_LINE(608)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,fontStr,return )

::String U_obj::font( ::String str,::String __o_style){
::String style = __o_style.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.U","font",0x4686b879,"flixel.addons.ui.U.font","flixel/addons/ui/U.hx",611,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(style,"style")
{
		HX_STACK_LINE(615)
		::String tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			::String style1 = style;		HX_STACK_VAR(style1,"style1");
			HX_STACK_LINE(615)
			::String tmp1 = style1.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(615)
			style1 = tmp1;
			HX_STACK_LINE(615)
			::String suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(suffix,"suffix");
			HX_STACK_LINE(615)
			::String tmp2 = style1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(615)
			::String _switch_7 = (tmp2);
			if (  ( _switch_7==HX_HCSTRING("normal","\x27","\x72","\x69","\x30")) ||  ( _switch_7==HX_HCSTRING("regular","\x5c","\x52","\x88","\x82")) ||  ( _switch_7==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) ||  ( _switch_7==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
				HX_STACK_LINE(615)
				suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else if (  ( _switch_7==HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")) ||  ( _switch_7==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
				HX_STACK_LINE(615)
				suffix = HX_HCSTRING("b","\x62","\x00","\x00","\x00");
			}
			else if (  ( _switch_7==HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")) ||  ( _switch_7==HX_HCSTRING("i","\x69","\x00","\x00","\x00"))){
				HX_STACK_LINE(615)
				suffix = HX_HCSTRING("i","\x69","\x00","\x00","\x00");
			}
			else if (  ( _switch_7==HX_HCSTRING("bold-italic","\xf8","\xf7","\xa5","\x60")) ||  ( _switch_7==HX_HCSTRING("bolditalic","\x35","\x22","\x3d","\x79")) ||  ( _switch_7==HX_HCSTRING("italic-bold","\x42","\x47","\x7f","\xd9")) ||  ( _switch_7==HX_HCSTRING("italicbold","\x75","\xe8","\x59","\xe8")) ||  ( _switch_7==HX_HCSTRING("ibold","\x6e","\x6a","\x2e","\xb6")) ||  ( _switch_7==HX_HCSTRING("boldi","\x44","\xd3","\xf5","\xb6")) ||  ( _switch_7==HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")) ||  ( _switch_7==HX_HCSTRING("bi","\xc7","\x55","\x00","\x00")) ||  ( _switch_7==HX_HCSTRING("z","\x7a","\x00","\x00","\x00"))){
				HX_STACK_LINE(615)
				suffix = HX_HCSTRING("z","\x7a","\x00","\x00","\x00");
			}
			HX_STACK_LINE(615)
			int tmp3 = str.indexOf(HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(615)
			bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			if ((tmp4)){
				HX_STACK_LINE(615)
				::String tmp5 = (HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c") + str);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(615)
				::String tmp6 = suffix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(615)
				tmp = (tmp5 + tmp6);
			}
			else{
				HX_STACK_LINE(615)
				tmp = (str + suffix);
			}
		}
		HX_STACK_LINE(615)
		::String tmp1 = (tmp + HX_HCSTRING(".ttf","\x78","\x3b","\xc0","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,font,return )

::String U_obj::_font( ::String str,::String __o_style){
::String style = __o_style.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.U","_font",0x619a73c4,"flixel.addons.ui.U._font","flixel/addons/ui/U.hx",619,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(style,"style")
{
		HX_STACK_LINE(620)
		::String tmp = style.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		style = tmp;
		HX_STACK_LINE(621)
		::String suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(622)
		::String tmp1 = style;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		::String _switch_8 = (tmp1);
		if (  ( _switch_8==HX_HCSTRING("normal","\x27","\x72","\x69","\x30")) ||  ( _switch_8==HX_HCSTRING("regular","\x5c","\x52","\x88","\x82")) ||  ( _switch_8==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) ||  ( _switch_8==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
			HX_STACK_LINE(623)
			suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else if (  ( _switch_8==HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")) ||  ( _switch_8==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
			HX_STACK_LINE(624)
			suffix = HX_HCSTRING("b","\x62","\x00","\x00","\x00");
		}
		else if (  ( _switch_8==HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")) ||  ( _switch_8==HX_HCSTRING("i","\x69","\x00","\x00","\x00"))){
			HX_STACK_LINE(625)
			suffix = HX_HCSTRING("i","\x69","\x00","\x00","\x00");
		}
		else if (  ( _switch_8==HX_HCSTRING("bold-italic","\xf8","\xf7","\xa5","\x60")) ||  ( _switch_8==HX_HCSTRING("bolditalic","\x35","\x22","\x3d","\x79")) ||  ( _switch_8==HX_HCSTRING("italic-bold","\x42","\x47","\x7f","\xd9")) ||  ( _switch_8==HX_HCSTRING("italicbold","\x75","\xe8","\x59","\xe8")) ||  ( _switch_8==HX_HCSTRING("ibold","\x6e","\x6a","\x2e","\xb6")) ||  ( _switch_8==HX_HCSTRING("boldi","\x44","\xd3","\xf5","\xb6")) ||  ( _switch_8==HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("bi","\xc7","\x55","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("z","\x7a","\x00","\x00","\x00"))){
			HX_STACK_LINE(626)
			suffix = HX_HCSTRING("z","\x7a","\x00","\x00","\x00");
		}
		HX_STACK_LINE(629)
		int tmp2 = str.indexOf(HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(629)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(629)
		if ((tmp3)){
			HX_STACK_LINE(630)
			::String tmp4 = (HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c") + str);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			::String tmp5 = suffix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(630)
			return tmp6;
		}
		HX_STACK_LINE(632)
		::String tmp4 = (str + suffix);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(632)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,_font,return )

::flixel::addons::ui::FlxUISprite U_obj::fsx( Dynamic data){
	HX_STACK_FRAME("flixel.addons.ui.U","fsx",0x630af321,"flixel.addons.ui.U.fsx","flixel/addons/ui/U.hx",635,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(636)
	::flixel::addons::ui::FlxUISprite tmp = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,data);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,fsx,return )

::flixel::FlxSprite U_obj::fs( Dynamic data){
	HX_STACK_FRAME("flixel.addons.ui.U","fs",0x12cfd577,"flixel.addons.ui.U.fs","flixel/addons/ui/U.hx",639,0x74647d9b)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(640)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new((int)0,(int)0,data);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,fs,return )

::String U_obj::FU( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","FU",0x12cfb979,"flixel.addons.ui.U.FU","flixel/addons/ui/U.hx",643,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(644)
	::String tmp = str.substr((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(644)
	int tmp2 = (str.length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(644)
	::String tmp3 = str.substr((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(644)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(644)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,FU,return )

bool U_obj::checkHaxedef( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","checkHaxedef",0x22016e21,"flixel.addons.ui.U.checkHaxedef","flixel/addons/ui/U.hx",647,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(648)
	::String tmp = str.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	str = tmp;
	HX_STACK_LINE(649)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	::String _switch_9 = (tmp1);
	if (  ( _switch_9==HX_HCSTRING("cpp","\x23","\x81","\x4b","\x00"))){
		HX_STACK_LINE(652)
		return true;
	}
	else if (  ( _switch_9==HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("mac","\x8f","\x0a","\x53","\x00"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("linux","\xf4","\xeb","\x01","\x75"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("desktop","\xdc","\xc5","\x94","\x1e"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"))){
		HX_STACK_LINE(672)
		return true;
	}
	else if (  ( _switch_9==HX_HCSTRING("android","\x2f","\x9b","\xa4","\x9c"))){
		HX_STACK_LINE(676)
		return true;
	}
	else if (  ( _switch_9==HX_HCSTRING("ios","\xcd","\x0d","\x50","\x00"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("html5","\x6a","\x28","\xac","\x2e"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("web","\x94","\xa4","\x5a","\x00"))){
	}
	else if (  ( _switch_9==HX_HCSTRING("sys","\x0d","\xad","\x57","\x00"))){
		HX_STACK_LINE(696)
		return true;
	}
	HX_STACK_LINE(699)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,checkHaxedef,return )

cpp::ArrayBase U_obj::copy_shallow_arr( cpp::ArrayBase src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_shallow_arr",0xfda79816,"flixel.addons.ui.U.copy_shallow_arr","flixel/addons/ui/U.hx",702,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(703)
	bool tmp = (src == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(703)
	if ((tmp)){
		HX_STACK_LINE(703)
		return null();
	}
	HX_STACK_LINE(704)
	cpp::ArrayBase arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(705)
	Dynamic thing;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(706)
	bool tmp1 = (src == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(706)
	if ((tmp1)){
		HX_STACK_LINE(707)
		return arr;
	}
	HX_STACK_LINE(709)
	{
		HX_STACK_LINE(709)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(709)
		while((true)){
			HX_STACK_LINE(709)
			bool tmp2 = (_g < src->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(709)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(709)
			if ((tmp3)){
				HX_STACK_LINE(709)
				break;
			}
			HX_STACK_LINE(709)
			Dynamic tmp4 = src->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(709)
			Dynamic thing1 = tmp4;		HX_STACK_VAR(thing1,"thing1");
			HX_STACK_LINE(709)
			++(_g);
			HX_STACK_LINE(710)
			Dynamic tmp5 = thing1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(710)
			arr->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		}
	}
	HX_STACK_LINE(712)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_shallow_arr,return )

Array< int > U_obj::copy_shallow_arr_i( Array< int > src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_shallow_arr_i",0x68ce9cc0,"flixel.addons.ui.U.copy_shallow_arr_i","flixel/addons/ui/U.hx",715,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(716)
	bool tmp = (src == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(716)
	if ((tmp)){
		HX_STACK_LINE(716)
		return null();
	}
	HX_STACK_LINE(717)
	Array< int > arr = Array_obj< int >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(718)
	int thing;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(719)
	{
		HX_STACK_LINE(719)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(719)
		while((true)){
			HX_STACK_LINE(719)
			bool tmp1 = (_g < src->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(719)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(719)
			if ((tmp2)){
				HX_STACK_LINE(719)
				break;
			}
			HX_STACK_LINE(719)
			int tmp3 = src->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(719)
			int thing1 = tmp3;		HX_STACK_VAR(thing1,"thing1");
			HX_STACK_LINE(719)
			++(_g);
			HX_STACK_LINE(720)
			int tmp4 = thing1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(720)
			arr->push(tmp4);
		}
	}
	HX_STACK_LINE(722)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_shallow_arr_i,return )

Array< ::String > U_obj::copy_shallow_arr_str( Array< ::String > src){
	HX_STACK_FRAME("flixel.addons.ui.U","copy_shallow_arr_str",0x2f4748c8,"flixel.addons.ui.U.copy_shallow_arr_str","flixel/addons/ui/U.hx",725,0x74647d9b)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(726)
	bool tmp = (src == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(726)
	if ((tmp)){
		HX_STACK_LINE(726)
		return null();
	}
	HX_STACK_LINE(727)
	Array< ::String > arr = Array_obj< ::String >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(728)
	::String thing;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(729)
	{
		HX_STACK_LINE(729)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(729)
		while((true)){
			HX_STACK_LINE(729)
			bool tmp1 = (_g < src->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(729)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(729)
			if ((tmp2)){
				HX_STACK_LINE(729)
				break;
			}
			HX_STACK_LINE(729)
			::String tmp3 = src->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(729)
			::String thing1 = tmp3;		HX_STACK_VAR(thing1,"thing1");
			HX_STACK_LINE(729)
			++(_g);
			HX_STACK_LINE(730)
			::String tmp4 = thing1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(730)
			arr->push(tmp4);
		}
	}
	HX_STACK_LINE(732)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,copy_shallow_arr_str,return )

::String U_obj::FU_( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","FU_",0x62f290c6,"flixel.addons.ui.U.FU_","flixel/addons/ui/U.hx",735,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(736)
	Array< ::String > arr = str.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(737)
	::String str1 = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str1,"str1");
	HX_STACK_LINE(738)
	{
		HX_STACK_LINE(738)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(738)
		int _g = arr->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(738)
		while((true)){
			HX_STACK_LINE(738)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(738)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(738)
			if ((tmp1)){
				HX_STACK_LINE(738)
				break;
			}
			HX_STACK_LINE(738)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(738)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(739)
			::String tmp3 = arr->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(739)
			::String tmp4 = ::flixel::addons::ui::U_obj::FU(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			hx::AddEq(str1,tmp4);
			HX_STACK_LINE(740)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(740)
			int tmp6 = (arr->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(740)
			bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(740)
			if ((tmp7)){
				HX_STACK_LINE(741)
				hx::AddEq(str1,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
		}
	}
	HX_STACK_LINE(744)
	::String tmp = str1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(744)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,FU_,return )

::openfl::_legacy::display::BlendMode U_obj::blendModeFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","blendModeFromString",0x03077be5,"flixel.addons.ui.U.blendModeFromString","flixel/addons/ui/U.hx",748,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(749)
	::String tmp = str.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	str = tmp;
	HX_STACK_LINE(750)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(750)
	::String _switch_10 = (tmp1);
	if (  ( _switch_10==HX_HCSTRING("add","\x21","\xf2","\x49","\x00"))){
		HX_STACK_LINE(752)
		return ::openfl::_legacy::display::BlendMode_obj::ADD;
	}
	else if (  ( _switch_10==HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"))){
		HX_STACK_LINE(753)
		return ::openfl::_legacy::display::BlendMode_obj::ALPHA;
	}
	else if (  ( _switch_10==HX_HCSTRING("darken","\x5f","\x36","\x3a","\x21"))){
		HX_STACK_LINE(754)
		return ::openfl::_legacy::display::BlendMode_obj::DARKEN;
	}
	else if (  ( _switch_10==HX_HCSTRING("difference","\xfd","\x9b","\x91","\x46"))){
		HX_STACK_LINE(755)
		return ::openfl::_legacy::display::BlendMode_obj::DIFFERENCE;
	}
	else if (  ( _switch_10==HX_HCSTRING("erase","\xe6","\xe8","\x1c","\x73"))){
		HX_STACK_LINE(756)
		return ::openfl::_legacy::display::BlendMode_obj::ERASE;
	}
	else if (  ( _switch_10==HX_HCSTRING("hardlight","\x0b","\x6e","\x6b","\x53"))){
		HX_STACK_LINE(757)
		return ::openfl::_legacy::display::BlendMode_obj::HARDLIGHT;
	}
	else if (  ( _switch_10==HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"))){
		HX_STACK_LINE(758)
		return ::openfl::_legacy::display::BlendMode_obj::INVERT;
	}
	else if (  ( _switch_10==HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"))){
		HX_STACK_LINE(759)
		return ::openfl::_legacy::display::BlendMode_obj::LAYER;
	}
	else if (  ( _switch_10==HX_HCSTRING("lighten","\xbf","\x4a","\xe3","\x19"))){
		HX_STACK_LINE(760)
		return ::openfl::_legacy::display::BlendMode_obj::LIGHTEN;
	}
	else if (  ( _switch_10==HX_HCSTRING("multiply","\x24","\xe2","\x8c","\x9a"))){
		HX_STACK_LINE(761)
		return ::openfl::_legacy::display::BlendMode_obj::MULTIPLY;
	}
	else if (  ( _switch_10==HX_HCSTRING("normal","\x27","\x72","\x69","\x30"))){
		HX_STACK_LINE(762)
		return ::openfl::_legacy::display::BlendMode_obj::NORMAL;
	}
	else if (  ( _switch_10==HX_HCSTRING("overlay","\x90","\x43","\x10","\xa9"))){
		HX_STACK_LINE(763)
		return ::openfl::_legacy::display::BlendMode_obj::OVERLAY;
	}
	else if (  ( _switch_10==HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"))){
		HX_STACK_LINE(764)
		return ::openfl::_legacy::display::BlendMode_obj::SCREEN;
	}
	else if (  ( _switch_10==HX_HCSTRING("subtract","\x14","\x75","\x11","\xf8"))){
		HX_STACK_LINE(765)
		return ::openfl::_legacy::display::BlendMode_obj::SUBTRACT;
	}
	HX_STACK_LINE(770)
	return ::openfl::_legacy::display::BlendMode_obj::NORMAL;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,blendModeFromString,return )

::String U_obj::gfx( ::String id,::String __o_dir1,::String __o_dir2,::String __o_dir3,::String __o_dir4,hx::Null< bool >  __o_suppressError){
::String dir1 = __o_dir1.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String dir2 = __o_dir2.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String dir3 = __o_dir3.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String dir4 = __o_dir4.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool suppressError = __o_suppressError.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.U","gfx",0x630baa0f,"flixel.addons.ui.U.gfx","flixel/addons/ui/U.hx",773,0x74647d9b)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(dir1,"dir1")
	HX_STACK_ARG(dir2,"dir2")
	HX_STACK_ARG(dir3,"dir3")
	HX_STACK_ARG(dir4,"dir4")
	HX_STACK_ARG(suppressError,"suppressError")
{
		HX_STACK_LINE(774)
		bool tmp = (id != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(774)
		if ((tmp)){
			HX_STACK_LINE(775)
			::String tmp1 = id.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(775)
			id = tmp1;
		}
		HX_STACK_LINE(778)
		::String prefix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(780)
		bool tmp1 = (dir1 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(780)
		if ((tmp1)){
			HX_STACK_LINE(781)
			::String tmp2 = (dir1 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(781)
			prefix = tmp2;
			HX_STACK_LINE(782)
			bool tmp3 = (dir2 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(782)
			if ((tmp3)){
				HX_STACK_LINE(783)
				::String tmp4 = (dir2 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(783)
				hx::AddEq(prefix,tmp4);
				HX_STACK_LINE(784)
				bool tmp5 = (dir3 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(784)
				if ((tmp5)){
					HX_STACK_LINE(785)
					::String tmp6 = (dir3 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(785)
					hx::AddEq(prefix,tmp6);
					HX_STACK_LINE(786)
					bool tmp7 = (dir4 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(786)
					if ((tmp7)){
						HX_STACK_LINE(787)
						::String tmp8 = (dir4 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(787)
						hx::AddEq(prefix,tmp8);
					}
				}
			}
		}
		HX_STACK_LINE(793)
		bool tmp2 = (prefix != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(793)
		if ((tmp2)){
			HX_STACK_LINE(794)
			::String tmp3 = (prefix + id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(794)
			id = tmp3;
		}
		HX_STACK_LINE(797)
		int tmp3 = id.indexOf(HX_HCSTRING("raw:","\x52","\x55","\xa4","\x4b"),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(797)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(797)
		if ((tmp4)){
			HX_STACK_LINE(798)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(798)
			::String tmp6 = ::StringTools_obj::replace(tmp5,HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(798)
			id = tmp6;
		}
		HX_STACK_LINE(801)
		::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(801)
		::String tmp6 = ::flixel::addons::ui::U_obj::get_gfx(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(801)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(U_obj,gfx,return )

::String U_obj::bmpToCSVLayer( int color_index,::openfl::_legacy::display::BitmapData bd){
	HX_STACK_FRAME("flixel.addons.ui.U","bmpToCSVLayer",0xcff6d981,"flixel.addons.ui.U.bmpToCSVLayer","flixel/addons/ui/U.hx",836,0x74647d9b)
	HX_STACK_ARG(color_index,"color_index")
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(839)
	int p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(840)
	int last_p = (int)-1;		HX_STACK_VAR(last_p,"last_p");
	HX_STACK_LINE(841)
	::String csv = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(csv,"csv");
	HX_STACK_LINE(842)
	int tmp = bd->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(842)
	int w = tmp;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(843)
	int tmp1 = bd->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(843)
	int h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(844)
	{
		HX_STACK_LINE(844)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(844)
		while((true)){
			HX_STACK_LINE(844)
			bool tmp2 = (_g < h);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(844)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(844)
			if ((tmp3)){
				HX_STACK_LINE(844)
				break;
			}
			HX_STACK_LINE(844)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(844)
			int r = tmp4;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(845)
			{
				HX_STACK_LINE(845)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(845)
				while((true)){
					HX_STACK_LINE(845)
					bool tmp5 = (_g1 < w);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(845)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(845)
					if ((tmp6)){
						HX_STACK_LINE(845)
						break;
					}
					HX_STACK_LINE(845)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(845)
					int c = tmp7;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(847)
					int tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(847)
					int tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(847)
					int tmp10 = bd->getPixel(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(847)
					p = tmp10;
					HX_STACK_LINE(849)
					bool tmp11 = (p == color_index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(849)
					if ((tmp11)){
						HX_STACK_LINE(850)
						p = (int)1;
					}
					else{
						HX_STACK_LINE(852)
						p = (int)0;
					}
					HX_STACK_LINE(856)
					bool tmp12 = (c == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(856)
					if ((tmp12)){
						HX_STACK_LINE(858)
						bool tmp13 = (r == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(858)
						if ((tmp13)){
							HX_STACK_LINE(859)
							hx::AddEq(csv,p);
						}
						else{
							HX_STACK_LINE(861)
							::String tmp14 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + p);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(861)
							hx::AddEq(csv,tmp14);
						}
					}
					else{
						HX_STACK_LINE(865)
						::String tmp13 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + p);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(865)
						hx::AddEq(csv,tmp13);
						HX_STACK_LINE(866)
						int tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(866)
						int tmp15 = (w - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(866)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(866)
						if ((tmp16)){
							HX_STACK_LINE(867)
							bool tmp17 = (last_p != (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(867)
							if ((tmp17)){
								HX_STACK_LINE(868)
								::String tmp18 = (HX_HCSTRING(", ","\x74","\x26","\x00","\x00") + last_p);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(868)
								hx::AddEq(csv,tmp18);
							}
						}
					}
					HX_STACK_LINE(872)
					last_p = p;
				}
			}
		}
	}
	HX_STACK_LINE(875)
	::String tmp2 = csv;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(875)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,bmpToCSVLayer,return )

::String U_obj::get_gfx( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","get_gfx",0x914f75a6,"flixel.addons.ui.U.get_gfx","flixel/addons/ui/U.hx",878,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(879)
	int tmp = str.indexOf(HX_HCSTRING("raw:","\x52","\x55","\xa4","\x4b"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(879)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(879)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(879)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(879)
	if ((tmp2)){
		HX_STACK_LINE(879)
		int tmp4 = str.indexOf(HX_HCSTRING("RAW:","\x72","\x1d","\x65","\x36"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(879)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(879)
		tmp3 = (tmp5 == (int)0);
	}
	else{
		HX_STACK_LINE(879)
		tmp3 = true;
	}
	HX_STACK_LINE(879)
	if ((tmp3)){
		HX_STACK_LINE(880)
		int tmp4 = (str.length - (int)4);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(880)
		::String tmp5 = str.substr((int)4,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(880)
		str = tmp5;
		HX_STACK_LINE(881)
		::String tmp6 = (str + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(881)
		return tmp6;
	}
	HX_STACK_LINE(883)
	::String tmp4 = (HX_HCSTRING("assets/gfx/","\xe2","\x08","\x10","\xb0") + str);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(883)
	::String tmp5 = (tmp4 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(883)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,get_gfx,return )

::String U_obj::sfx( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","sfx",0x6314c51b,"flixel.addons.ui.U.sfx","flixel/addons/ui/U.hx",886,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(887)
	::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
	HX_STACK_LINE(891)
	extension = HX_HCSTRING(".ogg","\xe1","\x64","\xbc","\x1e");
	HX_STACK_LINE(893)
	int tmp = str.indexOf(HX_HCSTRING("RAW:","\x72","\x1d","\x65","\x36"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(893)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(893)
	if ((tmp1)){
		HX_STACK_LINE(894)
		int tmp2 = (str.length - (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(894)
		::String tmp3 = str.substr((int)4,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(894)
		str = tmp3;
		HX_STACK_LINE(895)
		::String tmp4 = (str + extension);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(895)
		return tmp4;
	}
	HX_STACK_LINE(897)
	::String tmp2 = (HX_HCSTRING("assets/sfx/","\x56","\x98","\xfe","\xb7") + str);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(897)
	::String tmp3 = extension;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(897)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(897)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,sfx,return )

Array< int > U_obj::intStr_to_arr( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","intStr_to_arr",0xf37b0550,"flixel.addons.ui.U.intStr_to_arr","flixel/addons/ui/U.hx",906,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(907)
	Array< ::String > arr = str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(908)
	Array< int > str_arr = Array_obj< int >::__new();		HX_STACK_VAR(str_arr,"str_arr");
	HX_STACK_LINE(909)
	{
		HX_STACK_LINE(909)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(909)
		while((true)){
			HX_STACK_LINE(909)
			bool tmp = (_g < arr->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(909)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(909)
			if ((tmp1)){
				HX_STACK_LINE(909)
				break;
			}
			HX_STACK_LINE(909)
			::String tmp2 = arr->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(909)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(909)
			++(_g);
			HX_STACK_LINE(910)
			int tmp3 = s.indexOf(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(910)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(910)
			if ((tmp4)){
				HX_STACK_LINE(911)
				::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(911)
				Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(911)
				str_arr->push(tmp6);
			}
			else{
				HX_STACK_LINE(913)
				Array< ::String > range = str.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(914)
				int lo = (int)-1;		HX_STACK_VAR(lo,"lo");
				HX_STACK_LINE(915)
				int hi = (int)-1;		HX_STACK_VAR(hi,"hi");
				HX_STACK_LINE(916)
				bool tmp5 = (range != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(916)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(916)
				if ((tmp5)){
					HX_STACK_LINE(916)
					tmp6 = (range->length == (int)2);
				}
				else{
					HX_STACK_LINE(916)
					tmp6 = false;
				}
				HX_STACK_LINE(916)
				if ((tmp6)){
					HX_STACK_LINE(917)
					::String tmp7 = range->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(917)
					Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(917)
					lo = tmp8;
					HX_STACK_LINE(918)
					::String tmp9 = range->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(918)
					Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(918)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(918)
					hi = tmp11;
					HX_STACK_LINE(919)
					bool tmp12 = (lo >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(919)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(919)
					if ((tmp12)){
						HX_STACK_LINE(919)
						tmp13 = (hi > lo);
					}
					else{
						HX_STACK_LINE(919)
						tmp13 = false;
					}
					HX_STACK_LINE(919)
					if ((tmp13)){
						HX_STACK_LINE(920)
						int _g1 = lo;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(920)
						while((true)){
							HX_STACK_LINE(920)
							bool tmp14 = (_g1 < hi);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(920)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(920)
							if ((tmp15)){
								HX_STACK_LINE(920)
								break;
							}
							HX_STACK_LINE(920)
							int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(920)
							int i = tmp16;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(921)
							int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(921)
							str_arr->push(tmp17);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(927)
	return str_arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,intStr_to_arr,return )

Array< ::String > U_obj::intStr_to_arrStr( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","intStr_to_arrStr",0xae968d41,"flixel.addons.ui.U.intStr_to_arrStr","flixel/addons/ui/U.hx",936,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(937)
	Array< ::String > arr = str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(938)
	Array< ::String > str_arr = Array_obj< ::String >::__new();		HX_STACK_VAR(str_arr,"str_arr");
	HX_STACK_LINE(939)
	{
		HX_STACK_LINE(939)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(939)
		while((true)){
			HX_STACK_LINE(939)
			bool tmp = (_g < arr->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(939)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(939)
			if ((tmp1)){
				HX_STACK_LINE(939)
				break;
			}
			HX_STACK_LINE(939)
			::String tmp2 = arr->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(939)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(939)
			++(_g);
			HX_STACK_LINE(940)
			int tmp3 = s.indexOf(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(940)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(940)
			if ((tmp4)){
				HX_STACK_LINE(941)
				::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(941)
				Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(941)
				::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(941)
				str_arr->push(tmp7);
			}
			else{
				HX_STACK_LINE(943)
				Array< ::String > range = str.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(944)
				int lo = (int)-1;		HX_STACK_VAR(lo,"lo");
				HX_STACK_LINE(945)
				int hi = (int)-1;		HX_STACK_VAR(hi,"hi");
				HX_STACK_LINE(946)
				bool tmp5 = (range != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(946)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(946)
				if ((tmp5)){
					HX_STACK_LINE(946)
					tmp6 = (range->length == (int)2);
				}
				else{
					HX_STACK_LINE(946)
					tmp6 = false;
				}
				HX_STACK_LINE(946)
				if ((tmp6)){
					HX_STACK_LINE(947)
					::String tmp7 = range->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(947)
					Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(947)
					lo = tmp8;
					HX_STACK_LINE(948)
					::String tmp9 = range->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(948)
					Dynamic tmp10 = ::Std_obj::parseInt(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(948)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(948)
					hi = tmp11;
					HX_STACK_LINE(949)
					bool tmp12 = (lo >= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(949)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(949)
					if ((tmp12)){
						HX_STACK_LINE(949)
						tmp13 = (hi > lo);
					}
					else{
						HX_STACK_LINE(949)
						tmp13 = false;
					}
					HX_STACK_LINE(949)
					if ((tmp13)){
						HX_STACK_LINE(950)
						int _g1 = lo;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(950)
						while((true)){
							HX_STACK_LINE(950)
							bool tmp14 = (_g1 < hi);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(950)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(950)
							if ((tmp15)){
								HX_STACK_LINE(950)
								break;
							}
							HX_STACK_LINE(950)
							int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(950)
							int i = tmp16;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(951)
							int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(951)
							::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(951)
							str_arr->push(tmp18);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(957)
	return str_arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,intStr_to_arrStr,return )

::String U_obj::dirStr( int XX,int YY){
	HX_STACK_FRAME("flixel.addons.ui.U","dirStr",0xc16e8a8e,"flixel.addons.ui.U.dirStr","flixel/addons/ui/U.hx",960,0x74647d9b)
	HX_STACK_ARG(XX,"XX")
	HX_STACK_ARG(YY,"YY")
	HX_STACK_LINE(961)
	::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(962)
	bool tmp = (XX == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(962)
	if ((tmp)){
		HX_STACK_LINE(963)
		bool tmp1 = (YY == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(963)
		if ((tmp1)){
			HX_STACK_LINE(963)
			str = HX_HCSTRING("N","\x4e","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(964)
			bool tmp2 = (YY == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(964)
			if ((tmp2)){
				HX_STACK_LINE(964)
				str = HX_HCSTRING("S","\x53","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(965)
				bool tmp3 = (YY == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(965)
				if ((tmp3)){
					HX_STACK_LINE(965)
					str = HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33");
				}
			}
		}
	}
	else{
		HX_STACK_LINE(966)
		bool tmp1 = (XX == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(966)
		if ((tmp1)){
			HX_STACK_LINE(967)
			bool tmp2 = (YY == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(967)
			if ((tmp2)){
				HX_STACK_LINE(967)
				str = HX_HCSTRING("NE","\x37","\x44","\x00","\x00");
			}
			else{
				HX_STACK_LINE(968)
				bool tmp3 = (YY == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(968)
				if ((tmp3)){
					HX_STACK_LINE(968)
					str = HX_HCSTRING("SE","\x92","\x48","\x00","\x00");
				}
				else{
					HX_STACK_LINE(969)
					bool tmp4 = (YY == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(969)
					if ((tmp4)){
						HX_STACK_LINE(969)
						str = HX_HCSTRING("E","\x45","\x00","\x00","\x00");
					}
				}
			}
		}
		else{
			HX_STACK_LINE(970)
			bool tmp2 = (XX == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(970)
			if ((tmp2)){
				HX_STACK_LINE(971)
				bool tmp3 = (YY == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(971)
				if ((tmp3)){
					HX_STACK_LINE(971)
					str = HX_HCSTRING("NW","\x49","\x44","\x00","\x00");
				}
				else{
					HX_STACK_LINE(972)
					bool tmp4 = (YY == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(972)
					if ((tmp4)){
						HX_STACK_LINE(972)
						str = HX_HCSTRING("SW","\xa4","\x48","\x00","\x00");
					}
					else{
						HX_STACK_LINE(973)
						bool tmp5 = (YY == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(973)
						if ((tmp5)){
							HX_STACK_LINE(973)
							str = HX_HCSTRING("W","\x57","\x00","\x00","\x00");
						}
					}
				}
			}
			else{
				HX_STACK_LINE(975)
				str = HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33");
			}
		}
	}
	HX_STACK_LINE(976)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(976)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,dirStr,return )

::flixel::util::FlxPoint U_obj::obj_direction( ::flixel::FlxObject a,::flixel::FlxObject b){
	HX_STACK_FRAME("flixel.addons.ui.U","obj_direction",0x85cba8cd,"flixel.addons.ui.U.obj_direction","flixel/addons/ui/U.hx",979,0x74647d9b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(980)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(980)
	Float tmp1 = a->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(980)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(980)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(980)
	Float ax = tmp3;		HX_STACK_VAR(ax,"ax");
	HX_STACK_LINE(981)
	Float tmp4 = a->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(981)
	Float tmp5 = a->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(981)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(981)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(981)
	Float ay = tmp7;		HX_STACK_VAR(ay,"ay");
	HX_STACK_LINE(983)
	Float tmp8 = b->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(983)
	Float tmp9 = b->get_width();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(983)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(983)
	Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(983)
	Float bx = tmp11;		HX_STACK_VAR(bx,"bx");
	HX_STACK_LINE(984)
	Float tmp12 = b->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(984)
	Float tmp13 = b->get_height();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(984)
	Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(984)
	Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(984)
	Float by = tmp15;		HX_STACK_VAR(by,"by");
	HX_STACK_LINE(986)
	Float tmp16 = (a->x - b->x);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(986)
	Float dx = tmp16;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(987)
	Float tmp17 = (a->y - b->y);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(987)
	Float dy = tmp17;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(989)
	::flixel::util::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(989)
	{
		HX_STACK_LINE(989)
		Float tmp19 = dx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(989)
		Float tmp20 = dx;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(989)
		Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(989)
		Float tmp22 = (Float(tmp19) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(989)
		int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(989)
		Float X = tmp23;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(989)
		Float tmp24 = dy;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(989)
		Float tmp25 = dy;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(989)
		Float tmp26 = ::Math_obj::abs(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(989)
		Float tmp27 = (Float(tmp24) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(989)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(989)
		Float Y = tmp28;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(989)
		::flixel::util::FlxPool tmp29 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(989)
		::flixel::util::FlxPoint tmp30 = tmp29->get();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(989)
		Float tmp31 = X;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(989)
		Float tmp32 = Y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(989)
		::flixel::util::FlxPoint tmp33 = tmp30->set(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(989)
		::flixel::util::FlxPoint point = tmp33;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(989)
		point->_inPool = false;
		HX_STACK_LINE(989)
		tmp18 = point;
	}
	HX_STACK_LINE(989)
	::flixel::util::FlxPoint ipt = tmp18;		HX_STACK_VAR(ipt,"ipt");
	HX_STACK_LINE(990)
	::flixel::util::FlxPoint tmp19 = ipt;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(990)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,obj_direction,return )

bool U_obj::circle_test( Float x1,Float y1,Float r1,Float x2,Float y2,Float r2){
	HX_STACK_FRAME("flixel.addons.ui.U","circle_test",0xe94ea6b7,"flixel.addons.ui.U.circle_test","flixel/addons/ui/U.hx",993,0x74647d9b)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(r2,"r2")
	HX_STACK_LINE(994)
	Float tmp = (x1 - x2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(994)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(995)
	Float tmp1 = (y1 - y2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(995)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(996)
	Float tmp2 = (dx * dx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(996)
	Float tmp3 = (dy * dy);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(996)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(996)
	Float d2 = tmp4;		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(997)
	Float tmp5 = (r1 * r1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(997)
	Float tmp6 = (r2 * r2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(997)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(997)
	Float dr2 = tmp7;		HX_STACK_VAR(dr2,"dr2");
	HX_STACK_LINE(998)
	bool tmp8 = (d2 <= dr2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(998)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(U_obj,circle_test,return )

bool U_obj::point_circle_test( Float x,Float y,Float cx,Float cy,Float r){
	HX_STACK_FRAME("flixel.addons.ui.U","point_circle_test",0x8b175588,"flixel.addons.ui.U.point_circle_test","flixel/addons/ui/U.hx",1001,0x74647d9b)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(1002)
	Float tmp = (x - cx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1002)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1003)
	Float tmp1 = (y - cy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1003)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(1004)
	Float tmp2 = (dx * dx);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1004)
	Float tmp3 = (dy * dy);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1004)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1004)
	Float d2 = tmp4;		HX_STACK_VAR(d2,"d2");
	HX_STACK_LINE(1005)
	Float tmp5 = d2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1005)
	Float tmp6 = (r * r);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1005)
	bool tmp7 = (tmp5 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1005)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(U_obj,point_circle_test,return )

bool U_obj::aabb_test_mult( ::flixel::FlxObject a,::flixel::FlxObject b,hx::Null< Float >  __o_multA,hx::Null< Float >  __o_multB){
Float multA = __o_multA.Default(1);
Float multB = __o_multB.Default(1);
	HX_STACK_FRAME("flixel.addons.ui.U","aabb_test_mult",0x7aa50bc8,"flixel.addons.ui.U.aabb_test_mult","flixel/addons/ui/U.hx",1008,0x74647d9b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(multA,"multA")
	HX_STACK_ARG(multB,"multB")
{
		HX_STACK_LINE(1009)
		Float tmp = a->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1009)
		Float tmp1 = multA;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1009)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1009)
		Float extra = tmp2;		HX_STACK_VAR(extra,"extra");
		HX_STACK_LINE(1009)
		Float tmp3 = extra;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1009)
		Float tmp4 = a->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1009)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1009)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1009)
		Float diff = tmp6;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(1011)
		Float tmp7 = (a->x - diff);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1011)
		Float ax1 = tmp7;		HX_STACK_VAR(ax1,"ax1");
		HX_STACK_LINE(1012)
		Float tmp8 = a->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1012)
		Float tmp9 = a->get_width();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1012)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1012)
		Float tmp11 = diff;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1012)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1012)
		Float ax2 = tmp12;		HX_STACK_VAR(ax2,"ax2");
		HX_STACK_LINE(1014)
		Float tmp13 = a->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1014)
		Float tmp14 = multA;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1014)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1014)
		extra = tmp15;
		HX_STACK_LINE(1014)
		Float tmp16 = extra;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1014)
		Float tmp17 = a->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1014)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1014)
		Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1014)
		diff = tmp19;
		HX_STACK_LINE(1016)
		Float tmp20 = (a->y - diff);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1016)
		Float ay1 = tmp20;		HX_STACK_VAR(ay1,"ay1");
		HX_STACK_LINE(1017)
		Float tmp21 = a->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1017)
		Float tmp22 = a->get_height();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1017)
		Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1017)
		Float tmp24 = diff;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1017)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1017)
		Float ay2 = tmp25;		HX_STACK_VAR(ay2,"ay2");
		HX_STACK_LINE(1019)
		Float tmp26 = b->get_width();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1019)
		Float tmp27 = multB;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1019)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1019)
		extra = tmp28;
		HX_STACK_LINE(1019)
		Float tmp29 = extra;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1019)
		Float tmp30 = b->get_width();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1019)
		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1019)
		Float tmp32 = (Float(tmp31) / Float((int)2));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1019)
		diff = tmp32;
		HX_STACK_LINE(1021)
		Float tmp33 = (b->x - diff);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1021)
		Float bx1 = tmp33;		HX_STACK_VAR(bx1,"bx1");
		HX_STACK_LINE(1022)
		Float tmp34 = b->x;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1022)
		Float tmp35 = b->get_width();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1022)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1022)
		Float tmp37 = diff;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1022)
		Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1022)
		Float bx2 = tmp38;		HX_STACK_VAR(bx2,"bx2");
		HX_STACK_LINE(1024)
		Float tmp39 = b->get_height();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1024)
		Float tmp40 = multB;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1024)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1024)
		extra = tmp41;
		HX_STACK_LINE(1024)
		Float tmp42 = extra;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1024)
		Float tmp43 = b->get_height();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1024)
		Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1024)
		Float tmp45 = (Float(tmp44) / Float((int)2));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1024)
		diff = tmp45;
		HX_STACK_LINE(1026)
		Float tmp46 = (b->y - diff);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1026)
		Float by1 = tmp46;		HX_STACK_VAR(by1,"by1");
		HX_STACK_LINE(1027)
		Float tmp47 = b->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1027)
		Float tmp48 = b->get_height();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1027)
		Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1027)
		Float tmp50 = diff;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1027)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1027)
		Float by2 = tmp51;		HX_STACK_VAR(by2,"by2");
		HX_STACK_LINE(1029)
		Float tmp52 = (bx2 + bx1);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1029)
		Float tmp53 = (ax2 + ax1);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1029)
		Float tmp54 = (tmp52 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1029)
		Float tmp55 = ::Math_obj::abs(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(1029)
		Float tmp56 = (bx2 - bx1);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(1029)
		Float tmp57 = ax2;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(1029)
		Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(1029)
		Float tmp59 = ax1;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1029)
		Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(1029)
		bool tmp61 = (tmp55 <= tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(1029)
		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(1029)
		if ((tmp61)){
			HX_STACK_LINE(1030)
			Float tmp63 = (by2 + by1);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1030)
			Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1030)
			Float tmp65 = (ay2 + ay1);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1030)
			Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1030)
			Float tmp67 = (tmp64 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1030)
			Float tmp68 = tmp67;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1030)
			Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1030)
			Float tmp70 = ::Math_obj::abs(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1030)
			Float tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1030)
			Float tmp72 = (by2 - by1);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1030)
			Float tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1030)
			Float tmp74 = ay2;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1030)
			Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1030)
			Float tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1030)
			Float tmp77 = ay1;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1030)
			Float tmp78 = (tmp76 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1030)
			Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1030)
			tmp62 = (tmp71 <= tmp79);
		}
		else{
			HX_STACK_LINE(1029)
			tmp62 = false;
		}
		HX_STACK_LINE(1029)
		return tmp62;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(U_obj,aabb_test_mult,return )

bool U_obj::aabb_test( ::flixel::FlxObject a,::flixel::FlxObject b){
	HX_STACK_FRAME("flixel.addons.ui.U","aabb_test",0xfa707aa7,"flixel.addons.ui.U.aabb_test","flixel/addons/ui/U.hx",1033,0x74647d9b)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(1035)
	Float ax1 = a->x;		HX_STACK_VAR(ax1,"ax1");
	HX_STACK_LINE(1036)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1036)
	Float tmp1 = a->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1036)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1036)
	Float ax2 = tmp2;		HX_STACK_VAR(ax2,"ax2");
	HX_STACK_LINE(1038)
	Float ay1 = a->y;		HX_STACK_VAR(ay1,"ay1");
	HX_STACK_LINE(1039)
	Float tmp3 = a->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1039)
	Float tmp4 = a->get_height();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1039)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1039)
	Float ay2 = tmp5;		HX_STACK_VAR(ay2,"ay2");
	HX_STACK_LINE(1041)
	Float bx1 = b->x;		HX_STACK_VAR(bx1,"bx1");
	HX_STACK_LINE(1042)
	Float tmp6 = b->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1042)
	Float tmp7 = b->get_width();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1042)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1042)
	Float bx2 = tmp8;		HX_STACK_VAR(bx2,"bx2");
	HX_STACK_LINE(1044)
	Float by1 = b->y;		HX_STACK_VAR(by1,"by1");
	HX_STACK_LINE(1045)
	Float tmp9 = b->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1045)
	Float tmp10 = b->get_height();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1045)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1045)
	Float by2 = tmp11;		HX_STACK_VAR(by2,"by2");
	HX_STACK_LINE(1047)
	Float tmp12 = (bx2 + bx1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1047)
	Float tmp13 = (ax2 + ax1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1047)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1047)
	Float tmp15 = ::Math_obj::abs(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1047)
	Float tmp16 = (bx2 - bx1);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1047)
	Float tmp17 = ax2;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1047)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1047)
	Float tmp19 = ax1;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1047)
	Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1047)
	bool tmp21 = (tmp15 <= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1047)
	bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1047)
	if ((tmp21)){
		HX_STACK_LINE(1048)
		Float tmp23 = (by2 + by1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1048)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1048)
		Float tmp25 = (ay2 + ay1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1048)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1048)
		Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1048)
		Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1048)
		Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1048)
		Float tmp30 = ::Math_obj::abs(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1048)
		Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1048)
		Float tmp32 = (by2 - by1);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1048)
		Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1048)
		Float tmp34 = ay2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1048)
		Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1048)
		Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1048)
		Float tmp37 = ay1;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1048)
		Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1048)
		Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1048)
		tmp22 = (tmp31 <= tmp39);
	}
	else{
		HX_STACK_LINE(1047)
		tmp22 = false;
	}
	HX_STACK_LINE(1047)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,aabb_test,return )

::openfl::_legacy::geom::Point U_obj::bitStringDimensions( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","bitStringDimensions",0x61b76e01,"flixel.addons.ui.U.bitStringDimensions","flixel/addons/ui/U.hx",1057,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1058)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1058)
	::openfl::_legacy::geom::Point pt = tmp;		HX_STACK_VAR(pt,"pt");
	HX_STACK_LINE(1059)
	Array< ::String > arr = str.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1060)
	bool tmp1 = (arr != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1060)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1060)
	if ((tmp1)){
		HX_STACK_LINE(1060)
		tmp2 = (arr->length > (int)1);
	}
	else{
		HX_STACK_LINE(1060)
		tmp2 = false;
	}
	HX_STACK_LINE(1060)
	if ((tmp2)){
		HX_STACK_LINE(1061)
		pt->y = arr->length;
		HX_STACK_LINE(1062)
		::String tmp3 = arr->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1062)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1062)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1062)
		if ((tmp4)){
			HX_STACK_LINE(1062)
			::String tmp6 = arr->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1062)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1062)
			int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1062)
			tmp5 = (tmp8 > (int)1);
		}
		else{
			HX_STACK_LINE(1062)
			tmp5 = false;
		}
		HX_STACK_LINE(1062)
		if ((tmp5)){
			HX_STACK_LINE(1063)
			::String tmp6 = arr->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1063)
			pt->x = tmp6.length;
		}
	}
	HX_STACK_LINE(1066)
	::openfl::_legacy::geom::Point tmp3 = pt;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1066)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,bitStringDimensions,return )

Array< int > U_obj::splitBitString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","splitBitString",0xe2e84a6e,"flixel.addons.ui.U.splitBitString","flixel/addons/ui/U.hx",1075,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1076)
	Array< int > final = Array_obj< int >::__new();		HX_STACK_VAR(final,"final");
	HX_STACK_LINE(1077)
	Array< ::String > arr = str.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(1078)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1078)
	while((true)){
		HX_STACK_LINE(1078)
		bool tmp = (i < arr->length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1078)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1078)
		if ((tmp1)){
			HX_STACK_LINE(1078)
			break;
		}
		HX_STACK_LINE(1079)
		::String tmp2 = arr->__get(i);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1079)
		int len = tmp2.length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(1080)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1080)
		while((true)){
			HX_STACK_LINE(1080)
			bool tmp3 = (j < len);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1080)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1080)
			if ((tmp4)){
				HX_STACK_LINE(1080)
				break;
			}
			HX_STACK_LINE(1081)
			::String tmp5 = arr->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1081)
			int tmp6 = j;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1081)
			::String tmp7 = tmp5.charAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1081)
			::String _char = tmp7;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(1082)
			::String tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1082)
			Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1082)
			int num = tmp9;		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(1083)
			int tmp10 = num;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1083)
			final->push(tmp10);
			HX_STACK_LINE(1084)
			(j)++;
		}
		HX_STACK_LINE(1086)
		(i)++;
	}
	HX_STACK_LINE(1088)
	return final;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,splitBitString,return )

::String U_obj::getShortTextFromFlxKeyText( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","getShortTextFromFlxKeyText",0x3a78f701,"flixel.addons.ui.U.getShortTextFromFlxKeyText","flixel/addons/ui/U.hx",1091,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1092)
	::String tmp = str.toUpperCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1092)
	::String s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1093)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1093)
	::String _switch_11 = (tmp1);
	if (  ( _switch_11==HX_HCSTRING("ESC","\x15","\xa4","\x34","\x00"))){
	}
	else if (  ( _switch_11==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"))){
		HX_STACK_LINE(1095)
		s = HX_HCSTRING("EC","\x5e","\x3c","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"))){
		HX_STACK_LINE(1096)
		s = HX_HCSTRING("-","\x2d","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"))){
		HX_STACK_LINE(1097)
		s = HX_HCSTRING("+","\x2b","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("EQUALS","\x3f","\x9a","\x75","\x72"))){
		HX_STACK_LINE(1098)
		s = HX_HCSTRING("=","\x3d","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"))){
		HX_STACK_LINE(1099)
		s = HX_HCSTRING("DE","\x81","\x3b","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"))){
		HX_STACK_LINE(1100)
		s = HX_HCSTRING("BK","\xc9","\x39","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"))){
		HX_STACK_LINE(1101)
		s = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"))){
		HX_STACK_LINE(1102)
		s = HX_HCSTRING("]","\x5d","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"))){
		HX_STACK_LINE(1103)
		s = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"))){
		HX_STACK_LINE(1104)
		s = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"))){
		HX_STACK_LINE(1105)
		s = HX_HCSTRING("\"","\x22","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"))){
		HX_STACK_LINE(1106)
		s = HX_HCSTRING("EN","\x69","\x3c","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"))){
		HX_STACK_LINE(1107)
		s = HX_HCSTRING("SH","\x95","\x48","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"))){
		HX_STACK_LINE(1108)
		s = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"))){
		HX_STACK_LINE(1109)
		s = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"))){
		HX_STACK_LINE(1110)
		s = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"))){
		HX_STACK_LINE(1111)
		s = HX_HCSTRING("CT","\xb1","\x3a","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"))){
		HX_STACK_LINE(1112)
		s = HX_HCSTRING("AT","\xf3","\x38","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"))){
		HX_STACK_LINE(1113)
		s = HX_HCSTRING("SP","\x9d","\x48","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"))){
		HX_STACK_LINE(1114)
		s = HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"))){
		HX_STACK_LINE(1115)
		s = HX_HCSTRING("DN","\x8a","\x3b","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"))){
		HX_STACK_LINE(1116)
		s = HX_HCSTRING("LT","\x88","\x42","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"))){
		HX_STACK_LINE(1117)
		s = HX_HCSTRING("RT","\xc2","\x47","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"))){
		HX_STACK_LINE(1118)
		s = HX_HCSTRING("0","\x30","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"))){
		HX_STACK_LINE(1119)
		s = HX_HCSTRING("1","\x31","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"))){
		HX_STACK_LINE(1120)
		s = HX_HCSTRING("2","\x32","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"))){
		HX_STACK_LINE(1121)
		s = HX_HCSTRING("3","\x33","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"))){
		HX_STACK_LINE(1122)
		s = HX_HCSTRING("4","\x34","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"))){
		HX_STACK_LINE(1123)
		s = HX_HCSTRING("5","\x35","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"))){
		HX_STACK_LINE(1124)
		s = HX_HCSTRING("6","\x36","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"))){
		HX_STACK_LINE(1125)
		s = HX_HCSTRING("7","\x37","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"))){
		HX_STACK_LINE(1126)
		s = HX_HCSTRING("8","\x38","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"))){
		HX_STACK_LINE(1127)
		s = HX_HCSTRING("9","\x39","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("TEN","\xbd","\xf9","\x3f","\x00"))){
		HX_STACK_LINE(1128)
		s = HX_HCSTRING("10","\xdf","\x2a","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("ACCENT","\x4a","\x3d","\x89","\xbd"))){
		HX_STACK_LINE(1129)
		s = HX_HCSTRING("`","\x60","\x00","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"))){
		HX_STACK_LINE(1130)
		s = HX_HCSTRING("TB","\x6e","\x49","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"))){
		HX_STACK_LINE(1131)
		s = HX_HCSTRING("CP","\xad","\x3a","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("PAUSEBREAK","\x09","\xc6","\x40","\xed"))){
		HX_STACK_LINE(1132)
		s = HX_HCSTRING("PB","\xf2","\x45","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"))){
		HX_STACK_LINE(1133)
		s = HX_HCSTRING("HM","\x05","\x3f","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"))){
		HX_STACK_LINE(1134)
		s = HX_HCSTRING("IN","\xe5","\x3f","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"))){
		HX_STACK_LINE(1135)
		s = HX_HCSTRING("PU","\x05","\x46","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"))){
		HX_STACK_LINE(1136)
		s = HX_HCSTRING("PD","\xf4","\x45","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"))){
		HX_STACK_LINE(1137)
		s = HX_HCSTRING("ED","\x5f","\x3c","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUMLOCK","\x11","\xe9","\x32","\x30"))){
		HX_STACK_LINE(1138)
		s = HX_HCSTRING("NM","\x3f","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("SCROLLLOCK","\x78","\x72","\xa7","\x0c"))){
		HX_STACK_LINE(1139)
		s = HX_HCSTRING("SC","\x90","\x48","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM0","\x4a","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1140)
		s = HX_HCSTRING("N0","\x22","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM1","\x4b","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1141)
		s = HX_HCSTRING("N1","\x23","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM2","\x4c","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1142)
		s = HX_HCSTRING("N2","\x24","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM3","\x4d","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1143)
		s = HX_HCSTRING("N3","\x25","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM4","\x4e","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1144)
		s = HX_HCSTRING("N4","\x26","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM5","\x4f","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1145)
		s = HX_HCSTRING("N5","\x27","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM6","\x50","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1146)
		s = HX_HCSTRING("N6","\x28","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM7","\x51","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1147)
		s = HX_HCSTRING("N7","\x29","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM8","\x52","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1148)
		s = HX_HCSTRING("N8","\x2a","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUM9","\x53","\x67","\xcf","\x33"))){
		HX_STACK_LINE(1149)
		s = HX_HCSTRING("N9","\x2b","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUMDIV","\xcb","\xba","\xfe","\x53"))){
		HX_STACK_LINE(1150)
		s = HX_HCSTRING("N/","\x21","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUMMULT","\x16","\xb5","\xe0","\x30"))){
		HX_STACK_LINE(1151)
		s = HX_HCSTRING("N*","\x1c","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUMPLUS","\x80","\x8c","\xd5","\x32"))){
		HX_STACK_LINE(1152)
		s = HX_HCSTRING("N+","\x1d","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUMMINUS","\x6a","\xb4","\xd0","\x8b"))){
		HX_STACK_LINE(1153)
		s = HX_HCSTRING("N-","\x1f","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NUMDEC","\x3c","\xb7","\xfe","\x53"))){
		HX_STACK_LINE(1154)
		s = HX_HCSTRING("N.","\x20","\x44","\x00","\x00");
	}
	else if (  ( _switch_11==HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33"))){
		HX_STACK_LINE(1155)
		s = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
	}
	else  {
		HX_STACK_LINE(1156)
		s = str;
	}
;
;
	HX_STACK_LINE(1158)
	::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1158)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,getShortTextFromFlxKeyText,return )

::String U_obj::getFlxKeyTextFromShortText( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.U","getFlxKeyTextFromShortText",0x32f730b9,"flixel.addons.ui.U.getFlxKeyTextFromShortText","flixel/addons/ui/U.hx",1161,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(1162)
	::String tmp = str.toUpperCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1162)
	::String s = tmp;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1163)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1163)
	::String _switch_12 = (tmp1);
	if (  ( _switch_12==HX_HCSTRING("EC","\x5e","\x3c","\x00","\x00"))){
		HX_STACK_LINE(1164)
		s = HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d");
	}
	else if (  ( _switch_12==HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))){
		HX_STACK_LINE(1165)
		s = HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86");
	}
	else if (  ( _switch_12==HX_HCSTRING("=","\x3d","\x00","\x00","\x00"))){
		HX_STACK_LINE(1166)
		s = HX_HCSTRING("EQUALS","\x3f","\x9a","\x75","\x72");
	}
	else if (  ( _switch_12==HX_HCSTRING("+","\x2b","\x00","\x00","\x00"))){
		HX_STACK_LINE(1167)
		s = HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35");
	}
	else if (  ( _switch_12==HX_HCSTRING("DE","\x81","\x3b","\x00","\x00"))){
		HX_STACK_LINE(1168)
		s = HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d");
	}
	else if (  ( _switch_12==HX_HCSTRING("BK","\xc9","\x39","\x00","\x00"))){
		HX_STACK_LINE(1169)
		s = HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6");
	}
	else if (  ( _switch_12==HX_HCSTRING("[","\x5b","\x00","\x00","\x00"))){
		HX_STACK_LINE(1170)
		s = HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16");
	}
	else if (  ( _switch_12==HX_HCSTRING("]","\x5d","\x00","\x00","\x00"))){
		HX_STACK_LINE(1171)
		s = HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d");
	}
	else if (  ( _switch_12==HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"))){
		HX_STACK_LINE(1172)
		s = HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3");
	}
	else if (  ( _switch_12==HX_HCSTRING("CP","\xad","\x3a","\x00","\x00"))){
		HX_STACK_LINE(1173)
		s = HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80");
	}
	else if (  ( _switch_12==HX_HCSTRING(";","\x3b","\x00","\x00","\x00"))){
		HX_STACK_LINE(1174)
		s = HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49");
	}
	else if (  ( _switch_12==HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))){
		HX_STACK_LINE(1175)
		s = HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb");
	}
	else if (  ( _switch_12==HX_HCSTRING("EN","\x69","\x3c","\x00","\x00"))){
		HX_STACK_LINE(1176)
		s = HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee");
	}
	else if (  ( _switch_12==HX_HCSTRING("SH","\x95","\x48","\x00","\x00"))){
		HX_STACK_LINE(1177)
		s = HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa");
	}
	else if (  ( _switch_12==HX_HCSTRING(",","\x2c","\x00","\x00","\x00"))){
		HX_STACK_LINE(1178)
		s = HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8");
	}
	else if (  ( _switch_12==HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))){
		HX_STACK_LINE(1179)
		s = HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed");
	}
	else if (  ( _switch_12==HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))){
		HX_STACK_LINE(1180)
		s = HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc");
	}
	else if (  ( _switch_12==HX_HCSTRING("CT","\xb1","\x3a","\x00","\x00"))){
		HX_STACK_LINE(1181)
		s = HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99");
	}
	else if (  ( _switch_12==HX_HCSTRING("AT","\xf3","\x38","\x00","\x00"))){
		HX_STACK_LINE(1182)
		s = HX_HCSTRING("ALT","\x09","\x95","\x31","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("SP","\x9d","\x48","\x00","\x00"))){
		HX_STACK_LINE(1183)
		s = HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff");
	}
	else if (  ( _switch_12==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"))){
		HX_STACK_LINE(1184)
		s = HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("DN","\x8a","\x3b","\x00","\x00"))){
		HX_STACK_LINE(1185)
		s = HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d");
	}
	else if (  ( _switch_12==HX_HCSTRING("LT","\x88","\x42","\x00","\x00"))){
		HX_STACK_LINE(1186)
		s = HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32");
	}
	else if (  ( _switch_12==HX_HCSTRING("RT","\xc2","\x47","\x00","\x00"))){
		HX_STACK_LINE(1187)
		s = HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67");
	}
	else if (  ( _switch_12==HX_HCSTRING("0","\x30","\x00","\x00","\x00"))){
		HX_STACK_LINE(1188)
		s = HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b");
	}
	else if (  ( _switch_12==HX_HCSTRING("1","\x31","\x00","\x00","\x00"))){
		HX_STACK_LINE(1189)
		s = HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("2","\x32","\x00","\x00","\x00"))){
		HX_STACK_LINE(1190)
		s = HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("3","\x33","\x00","\x00","\x00"))){
		HX_STACK_LINE(1191)
		s = HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d");
	}
	else if (  ( _switch_12==HX_HCSTRING("4","\x34","\x00","\x00","\x00"))){
		HX_STACK_LINE(1192)
		s = HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e");
	}
	else if (  ( _switch_12==HX_HCSTRING("5","\x35","\x00","\x00","\x00"))){
		HX_STACK_LINE(1193)
		s = HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e");
	}
	else if (  ( _switch_12==HX_HCSTRING("6","\x36","\x00","\x00","\x00"))){
		HX_STACK_LINE(1194)
		s = HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("7","\x37","\x00","\x00","\x00"))){
		HX_STACK_LINE(1195)
		s = HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8");
	}
	else if (  ( _switch_12==HX_HCSTRING("8","\x38","\x00","\x00","\x00"))){
		HX_STACK_LINE(1196)
		s = HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb");
	}
	else if (  ( _switch_12==HX_HCSTRING("9","\x39","\x00","\x00","\x00"))){
		HX_STACK_LINE(1197)
		s = HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
		HX_STACK_LINE(1198)
		s = HX_HCSTRING("TEN","\xbd","\xf9","\x3f","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("`","\x60","\x00","\x00","\x00"))){
		HX_STACK_LINE(1199)
		s = HX_HCSTRING("ACCENT","\x4a","\x3d","\x89","\xbd");
	}
	else if (  ( _switch_12==HX_HCSTRING("TB","\x6e","\x49","\x00","\x00"))){
		HX_STACK_LINE(1200)
		s = HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("PB","\xf2","\x45","\x00","\x00"))){
		HX_STACK_LINE(1201)
		s = HX_HCSTRING("PAUSEBREAK","\x09","\xc6","\x40","\xed");
	}
	else if (  ( _switch_12==HX_HCSTRING("HM","\x05","\x3f","\x00","\x00"))){
		HX_STACK_LINE(1202)
		s = HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f");
	}
	else if (  ( _switch_12==HX_HCSTRING("IN","\xe5","\x3f","\x00","\x00"))){
		HX_STACK_LINE(1203)
		s = HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50");
	}
	else if (  ( _switch_12==HX_HCSTRING("PU","\x05","\x46","\x00","\x00"))){
		HX_STACK_LINE(1204)
		s = HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98");
	}
	else if (  ( _switch_12==HX_HCSTRING("PD","\xf4","\x45","\x00","\x00"))){
		HX_STACK_LINE(1205)
		s = HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9");
	}
	else if (  ( _switch_12==HX_HCSTRING("ED","\x5f","\x3c","\x00","\x00"))){
		HX_STACK_LINE(1206)
		s = HX_HCSTRING("END","\xbb","\x9f","\x34","\x00");
	}
	else if (  ( _switch_12==HX_HCSTRING("NM","\x3f","\x44","\x00","\x00"))){
		HX_STACK_LINE(1207)
		s = HX_HCSTRING("NUMLOCK","\x11","\xe9","\x32","\x30");
	}
	else if (  ( _switch_12==HX_HCSTRING("SC","\x90","\x48","\x00","\x00"))){
		HX_STACK_LINE(1208)
		s = HX_HCSTRING("SCROLLLOCK","\x78","\x72","\xa7","\x0c");
	}
	else if (  ( _switch_12==HX_HCSTRING("N0","\x22","\x44","\x00","\x00"))){
		HX_STACK_LINE(1209)
		s = HX_HCSTRING("NUM0","\x4a","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N1","\x23","\x44","\x00","\x00"))){
		HX_STACK_LINE(1210)
		s = HX_HCSTRING("NUM1","\x4b","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N2","\x24","\x44","\x00","\x00"))){
		HX_STACK_LINE(1211)
		s = HX_HCSTRING("NUM2","\x4c","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N3","\x25","\x44","\x00","\x00"))){
		HX_STACK_LINE(1212)
		s = HX_HCSTRING("NUM3","\x4d","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N4","\x26","\x44","\x00","\x00"))){
		HX_STACK_LINE(1213)
		s = HX_HCSTRING("NUM4","\x4e","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N5","\x27","\x44","\x00","\x00"))){
		HX_STACK_LINE(1214)
		s = HX_HCSTRING("NUM5","\x4f","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N6","\x28","\x44","\x00","\x00"))){
		HX_STACK_LINE(1215)
		s = HX_HCSTRING("NUM6","\x50","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N7","\x29","\x44","\x00","\x00"))){
		HX_STACK_LINE(1216)
		s = HX_HCSTRING("NUM7","\x51","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N8","\x2a","\x44","\x00","\x00"))){
		HX_STACK_LINE(1217)
		s = HX_HCSTRING("NUM8","\x52","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N9","\x2b","\x44","\x00","\x00"))){
		HX_STACK_LINE(1218)
		s = HX_HCSTRING("NUM9","\x53","\x67","\xcf","\x33");
	}
	else if (  ( _switch_12==HX_HCSTRING("N.","\x20","\x44","\x00","\x00"))){
		HX_STACK_LINE(1219)
		s = HX_HCSTRING("NUMDEC","\x3c","\xb7","\xfe","\x53");
	}
	else if (  ( _switch_12==HX_HCSTRING("N/","\x21","\x44","\x00","\x00"))){
		HX_STACK_LINE(1220)
		s = HX_HCSTRING("NUMDIV","\xcb","\xba","\xfe","\x53");
	}
	else if (  ( _switch_12==HX_HCSTRING("N+","\x1d","\x44","\x00","\x00"))){
		HX_STACK_LINE(1221)
		s = HX_HCSTRING("NUMPLUS","\x80","\x8c","\xd5","\x32");
	}
	else if (  ( _switch_12==HX_HCSTRING("N-","\x1f","\x44","\x00","\x00"))){
		HX_STACK_LINE(1222)
		s = HX_HCSTRING("NUMMINUS","\x6a","\xb4","\xd0","\x8b");
	}
	else if (  ( _switch_12==HX_HCSTRING("*","\x2a","\x00","\x00","\x00"))){
		HX_STACK_LINE(1223)
		s = HX_HCSTRING("NUMMULT","\x16","\xb5","\xe0","\x30");
	}
	else if (  ( _switch_12==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
		HX_STACK_LINE(1224)
		s = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
	}
	else  {
		HX_STACK_LINE(1225)
		s = str;
	}
;
;
	HX_STACK_LINE(1227)
	::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1227)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,getFlxKeyTextFromShortText,return )

::String U_obj::formatXml( ::Xml _xml){
	HX_STACK_FRAME("flixel.addons.ui.U","formatXml",0x5ff16ff6,"flixel.addons.ui.U.formatXml","flixel/addons/ui/U.hx",1231,0x74647d9b)
	HX_STACK_ARG(_xml,"_xml")
	HX_STACK_LINE(1232)
	::Xml tmp = _xml;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1232)
	::String tmp1 = ::haxe::xml::Printer_obj::print(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1232)
	::String s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1234)
	::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING(">[^`<]*<","\x12","\xf9","\x4b","\xa6"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1234)
	::EReg r = tmp2;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1235)
	::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1235)
	::String tmp4 = r->replace(tmp3,HX_HCSTRING(">___SPLITHERE___<","\x66","\x2a","\xca","\xaf"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1235)
	s = tmp4;
	HX_STACK_LINE(1237)
	::EReg tmp5 = ::EReg_obj::__new(HX_HCSTRING("___SPLITHERE___","\x94","\xd3","\x9b","\xaf"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1237)
	r = tmp5;
	HX_STACK_LINE(1238)
	::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1238)
	Array< ::String > split = r->split(tmp6);		HX_STACK_VAR(split,"split");
	HX_STACK_LINE(1241)
	s = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(1242)
	int childDepht = (int)0;		HX_STACK_VAR(childDepht,"childDepht");
	HX_STACK_LINE(1243)
	::String whiteSpace = HX_HCSTRING("\t","\x09","\x00","\x00","\x00");		HX_STACK_VAR(whiteSpace,"whiteSpace");
	HX_STACK_LINE(1245)
	{
		HX_STACK_LINE(1245)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1245)
		while((true)){
			HX_STACK_LINE(1245)
			bool tmp7 = (_g < split->length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1245)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1245)
			if ((tmp8)){
				HX_STACK_LINE(1245)
				break;
			}
			HX_STACK_LINE(1245)
			::String tmp9 = split->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1245)
			::String str = tmp9;		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(1245)
			++(_g);
			HX_STACK_LINE(1247)
			{
				HX_STACK_LINE(1247)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1247)
				while((true)){
					HX_STACK_LINE(1247)
					bool tmp10 = (_g1 < childDepht);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1247)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1247)
					if ((tmp11)){
						HX_STACK_LINE(1247)
						break;
					}
					HX_STACK_LINE(1247)
					int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1247)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1249)
					hx::AddEq(s,whiteSpace);
				}
			}
			HX_STACK_LINE(1252)
			::String tmp10 = str.charAt((int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1252)
			bool tmp11 = (tmp10 == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1252)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1252)
			if ((tmp11)){
				HX_STACK_LINE(1252)
				::String tmp13 = str.charAt((int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1252)
				::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1252)
				tmp12 = (tmp14 == HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(1252)
				tmp12 = false;
			}
			HX_STACK_LINE(1252)
			if ((tmp12)){
				HX_STACK_LINE(1254)
				(childDepht)--;
				HX_STACK_LINE(1255)
				int tmp13 = (s.length - whiteSpace.length);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1255)
				::String tmp14 = s.substr((int)0,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1255)
				s = tmp14;
			}
			else{
				HX_STACK_LINE(1258)
				int tmp13 = (str.length - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1258)
				::String tmp14 = str.charAt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1258)
				bool tmp15 = (tmp14 == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1258)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1258)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1258)
				if ((tmp16)){
					HX_STACK_LINE(1258)
					int tmp18 = (str.length - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1258)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1258)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1258)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1258)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1258)
					::String tmp23 = str.charAt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1258)
					::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1258)
					::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1258)
					tmp17 = (tmp25 != HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(1258)
					tmp17 = false;
				}
				HX_STACK_LINE(1258)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1258)
				if ((tmp17)){
					HX_STACK_LINE(1258)
					int tmp19 = (str.length - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1258)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1258)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1258)
					::String tmp22 = str.charAt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1258)
					::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1258)
					tmp18 = (tmp23 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(1258)
					tmp18 = false;
				}
				HX_STACK_LINE(1258)
				if ((tmp18)){
					HX_STACK_LINE(1260)
					(childDepht)++;
				}
			}
			HX_STACK_LINE(1263)
			::String tmp13 = (str + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1263)
			hx::AddEq(s,tmp13);
		}
	}
	HX_STACK_LINE(1266)
	::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1266)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(U_obj,formatXml,return )

::String U_obj::strCase( ::String str,::String code){
	HX_STACK_FRAME("flixel.addons.ui.U","strCase",0x4a57cb97,"flixel.addons.ui.U.strCase","flixel/addons/ui/U.hx",1269,0x74647d9b)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(1270)
	::String tmp = code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1270)
	::String _switch_13 = (tmp);
	if (  ( _switch_13==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
		HX_STACK_LINE(1271)
		::String tmp1 = str.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1271)
		return tmp1;
	}
	else if (  ( _switch_13==HX_HCSTRING("l","\x6c","\x00","\x00","\x00"))){
		HX_STACK_LINE(1272)
		::String tmp1 = str.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1272)
		return tmp1;
	}
	else if (  ( _switch_13==HX_HCSTRING("fu","\x4f","\x59","\x00","\x00"))){
		HX_STACK_LINE(1273)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1273)
		::String tmp2 = ::flixel::addons::ui::U_obj::FU(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1273)
		return tmp2;
	}
	else if (  ( _switch_13==HX_HCSTRING("fu_","\x30","\xcc","\x4d","\x00"))){
		HX_STACK_LINE(1274)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1274)
		::String tmp2 = ::flixel::addons::ui::U_obj::FU_(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1274)
		return tmp2;
	}
	HX_STACK_LINE(1276)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1276)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(U_obj,strCase,return )


U_obj::U_obj()
{
}

bool U_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fs") ) { outValue = fs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FU") ) { outValue = FU_dyn(); return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fsx") ) { outValue = fsx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"FU_") ) { outValue = FU__dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"gfx") ) { outValue = gfx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sfx") ) { outValue = sfx_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"xml_f") ) { outValue = xml_f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"xml_i") ) { outValue = xml_i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"field") ) { outValue = field_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_font") ) { outValue = _font_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { outValue = center_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getXML") ) { outValue = getXML_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dirStr") ) { outValue = dirStr_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xml_str") ) { outValue = xml_str_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"xml_gfx") ) { outValue = xml_gfx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hex2dec") ) { outValue = hex2dec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hex2rgb") ) { outValue = hex2rgb_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rgb2hex") ) { outValue = rgb2hex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyXml") ) { outValue = copyXml_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readXml") ) { outValue = readXml_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fontStr") ) { outValue = fontStr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_gfx") ) { outValue = get_gfx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"strCase") ) { outValue = strCase_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isStrNum") ) { outValue = isStrNum_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isStrInt") ) { outValue = isStrInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"xml_bool") ) { outValue = xml_bool_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"test_int") ) { outValue = test_int_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"parseHex") ) { outValue = parseHex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyFast") ) { outValue = copyFast_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readFast") ) { outValue = readFast_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"writeXml") ) { outValue = writeXml_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"padDigits") ) { outValue = padDigits_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"aabb_test") ) { outValue = aabb_test_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"formatXml") ) { outValue = formatXml_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isStrFloat") ) { outValue = isStrFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"test_float") ) { outValue = test_float_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getLocList") ) { outValue = getLocList_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"disposeXML") ) { outValue = disposeXML_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearArray") ) { outValue = clearArray_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hexChar2dec") ) { outValue = hexChar2dec_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circle_test") ) { outValue = circle_test_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"destroyThing") ) { outValue = destroyThing_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"checkHaxedef") ) { outValue = checkHaxedef_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perc_to_float") ) { outValue = perc_to_float_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bmpToCSVLayer") ) { outValue = bmpToCSVLayer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intStr_to_arr") ) { outValue = intStr_to_arr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"obj_direction") ) { outValue = obj_direction_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearArraySoft") ) { outValue = clearArraySoft_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"aabb_test_mult") ) { outValue = aabb_test_mult_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"splitBitString") ) { outValue = splitBitString_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"copy_shallow_arr") ) { outValue = copy_shallow_arr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"intStr_to_arrStr") ) { outValue = intStr_to_arrStr_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"point_circle_test") ) { outValue = point_circle_test_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copy_shallow_arr_i") ) { outValue = copy_shallow_arr_i_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"blendModeFromString") ) { outValue = blendModeFromString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bitStringDimensions") ) { outValue = bitStringDimensions_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"copy_shallow_arr_str") ) { outValue = copy_shallow_arr_str_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getShortTextFromFlxKeyText") ) { outValue = getShortTextFromFlxKeyText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFlxKeyTextFromShortText") ) { outValue = getFlxKeyTextFromShortText_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(U_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(U_obj::__mClass,"__mClass");
};

#endif

hx::Class U_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("xml_str","\x09","\x93","\x5f","\x81"),
	HX_HCSTRING("perc_to_float","\x51","\x7e","\x53","\x6d"),
	HX_HCSTRING("isStrNum","\x9f","\x4d","\x85","\x69"),
	HX_HCSTRING("isStrInt","\x48","\x7c","\x81","\x69"),
	HX_HCSTRING("isStrFloat","\x35","\x7d","\x85","\x2e"),
	HX_HCSTRING("xml_f","\xbe","\x24","\x74","\x60"),
	HX_HCSTRING("xml_i","\xc1","\x24","\x74","\x60"),
	HX_HCSTRING("xml_bool","\xd2","\xa6","\x00","\xa7"),
	HX_HCSTRING("xml_gfx","\xd1","\x6b","\x56","\x81"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("test_int","\x42","\xab","\x74","\x57"),
	HX_HCSTRING("test_float","\xaf","\xde","\xdd","\xe2"),
	HX_HCSTRING("padDigits","\xd9","\x0f","\xda","\x1d"),
	HX_HCSTRING("parseHex","\x68","\x4c","\x71","\xd6"),
	HX_HCSTRING("hexChar2dec","\xa1","\x38","\x77","\x83"),
	HX_HCSTRING("hex2dec","\x2b","\x31","\x32","\x80"),
	HX_HCSTRING("hex2rgb","\x76","\xd2","\x3c","\x80"),
	HX_HCSTRING("rgb2hex","\x76","\xd3","\xf1","\x41"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("getLocList","\x08","\x63","\x44","\x6f"),
	HX_HCSTRING("disposeXML","\x78","\x76","\xdf","\x60"),
	HX_HCSTRING("copyFast","\xf1","\x28","\x54","\xc8"),
	HX_HCSTRING("copyXml","\x22","\xe9","\x88","\x43"),
	HX_HCSTRING("readXml","\x21","\x14","\xd5","\x02"),
	HX_HCSTRING("readFast","\x12","\x9d","\xad","\x6b"),
	HX_HCSTRING("writeXml","\x38","\xce","\xfb","\x23"),
	HX_HCSTRING("getXML","\xe1","\x8a","\x2a","\xa3"),
	HX_HCSTRING("json","\x28","\x42","\x68","\x46"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"),
	HX_HCSTRING("clearArraySoft","\xd6","\x4b","\xcf","\x53"),
	HX_HCSTRING("clearArray","\xcc","\xac","\x99","\xfa"),
	HX_HCSTRING("destroyThing","\x94","\x80","\x89","\x01"),
	HX_HCSTRING("fontStr","\x22","\x4e","\x2a","\x96"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6"),
	HX_HCSTRING("fsx","\x8b","\xca","\x4d","\x00"),
	HX_HCSTRING("fs","\x4d","\x59","\x00","\x00"),
	HX_HCSTRING("FU","\x4f","\x3d","\x00","\x00"),
	HX_HCSTRING("checkHaxedef","\x77","\x59","\x01","\xf6"),
	HX_HCSTRING("copy_shallow_arr","\x6c","\xe6","\xee","\xeb"),
	HX_HCSTRING("copy_shallow_arr_i","\x96","\xac","\x46","\xf2"),
	HX_HCSTRING("copy_shallow_arr_str","\x1e","\x7a","\xc3","\x12"),
	HX_HCSTRING("FU_","\x30","\x68","\x35","\x00"),
	HX_HCSTRING("blendModeFromString","\x4f","\x47","\x9d","\xc2"),
	HX_HCSTRING("gfx","\x79","\x81","\x4e","\x00"),
	HX_HCSTRING("bmpToCSVLayer","\x6b","\xd9","\xe4","\x7b"),
	HX_HCSTRING("get_gfx","\x10","\x4a","\xc3","\x26"),
	HX_HCSTRING("sfx","\x85","\x9c","\x57","\x00"),
	HX_HCSTRING("intStr_to_arr","\x3a","\x05","\x69","\x9f"),
	HX_HCSTRING("intStr_to_arrStr","\x97","\xdb","\xdd","\x9c"),
	HX_HCSTRING("dirStr","\x64","\xb1","\x5c","\xbc"),
	HX_HCSTRING("obj_direction","\xb7","\xa8","\xb9","\x31"),
	HX_HCSTRING("circle_test","\x21","\xf8","\xb5","\xaf"),
	HX_HCSTRING("point_circle_test","\x72","\x92","\x34","\x1b"),
	HX_HCSTRING("aabb_test_mult","\x9e","\xf8","\xf6","\x3e"),
	HX_HCSTRING("aabb_test","\x91","\xbd","\xd1","\xb3"),
	HX_HCSTRING("bitStringDimensions","\x6b","\x39","\x4d","\x21"),
	HX_HCSTRING("splitBitString","\x44","\x37","\x3a","\xa7"),
	HX_HCSTRING("getShortTextFromFlxKeyText","\xd7","\xcc","\xe5","\x76"),
	HX_HCSTRING("getFlxKeyTextFromShortText","\x8f","\x06","\x64","\x6f"),
	HX_HCSTRING("formatXml","\xe0","\xb2","\x52","\x19"),
	HX_HCSTRING("strCase","\x01","\xa0","\xcb","\xdf"),
	::String(null()) };

void U_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.U","\x04","\x06","\x40","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &U_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< U_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
