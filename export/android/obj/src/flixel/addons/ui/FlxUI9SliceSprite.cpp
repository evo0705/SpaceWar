#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUI9SliceSprite_obj::__construct(Float X,Float Y,Dynamic Graphic,::openfl::_legacy::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","new",0x6ddf7885,"flixel.addons.ui.FlxUI9SliceSprite.new","flixel/addons/ui/FlxUI9SliceSprite.hx",18,0x728ef6ec)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Graphic,"Graphic")
HX_STACK_ARG(Rect,"Rect")
HX_STACK_ARG(Slice9,"Slice9")
HX_STACK_ARG(__o_Tile,"Tile")
HX_STACK_ARG(__o_Smooth,"Smooth")
HX_STACK_ARG(__o_Id,"Id")
HX_STACK_ARG(__o_Ratio,"Ratio")
HX_STACK_ARG(Resize_point,"Resize_point")
int Tile = __o_Tile.Default(0);
bool Smooth = __o_Smooth.Default(false);
::String Id = __o_Id.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Float Ratio = __o_Ratio.Default(-1);
{
	HX_STACK_LINE(33)
	this->_asset_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(32)
	this->_smooth = false;
	HX_STACK_LINE(31)
	this->_tile = (int)0;
	HX_STACK_LINE(29)
	this->_slice9 = null();
	HX_STACK_LINE(72)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(74)
	this->_slice9 = Slice9;
	HX_STACK_LINE(75)
	this->_tile = Tile;
	HX_STACK_LINE(76)
	this->_smooth = Smooth;
	HX_STACK_LINE(78)
	this->_asset_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(80)
	bool tmp2 = (Graphic == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	if ((tmp2)){
		HX_STACK_LINE(81)
		Graphic = HX_HCSTRING("flixel/flixel-ui/img/chrome.png","\xfe","\xfb","\x12","\x55");
	}
	HX_STACK_LINE(84)
	Dynamic tmp3 = Graphic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	if ((tmp4)){
		HX_STACK_LINE(85)
		this->_asset_id = Graphic;
		HX_STACK_LINE(86)
		this->_raw_pixels = null();
	}
	else{
		HX_STACK_LINE(87)
		Dynamic tmp5 = Graphic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		if ((tmp6)){
			HX_STACK_LINE(88)
			this->_asset_id = Id;
			HX_STACK_LINE(89)
			this->_raw_pixels = ((::openfl::_legacy::display::BitmapData)(Graphic));
		}
	}
	HX_STACK_LINE(92)
	Float tmp5 = Ratio;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	this->set_resize_ratio(tmp5);
	HX_STACK_LINE(93)
	bool tmp6 = (Resize_point != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	if ((tmp6)){
		HX_STACK_LINE(94)
		::flixel::util::FlxPoint tmp7 = Resize_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		this->set_resize_point(tmp7);
	}
	HX_STACK_LINE(97)
	Float tmp7 = Rect->width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	Float tmp8 = Rect->height;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	this->resize(tmp7,tmp8);
}
;
	return null();
}

//FlxUI9SliceSprite_obj::~FlxUI9SliceSprite_obj() { }

Dynamic FlxUI9SliceSprite_obj::__CreateEmpty() { return  new FlxUI9SliceSprite_obj; }
hx::ObjectPtr< FlxUI9SliceSprite_obj > FlxUI9SliceSprite_obj::__new(Float X,Float Y,Dynamic Graphic,::openfl::_legacy::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point)
{  hx::ObjectPtr< FlxUI9SliceSprite_obj > _result_ = new FlxUI9SliceSprite_obj();
	_result_->__construct(X,Y,Graphic,Rect,Slice9,__o_Tile,__o_Smooth,__o_Id,__o_Ratio,Resize_point);
	return _result_;}

Dynamic FlxUI9SliceSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUI9SliceSprite_obj > _result_ = new FlxUI9SliceSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _result_;}

hx::Object *FlxUI9SliceSprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

FlxUI9SliceSprite_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUI9SliceSprite_obj >(this); }
FlxUI9SliceSprite_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUI9SliceSprite_obj >(this); }
FlxUI9SliceSprite_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUI9SliceSprite_obj >(this); }
FlxUI9SliceSprite_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUI9SliceSprite_obj >(this); }
Float FlxUI9SliceSprite_obj::set_resize_ratio( Float r){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","set_resize_ratio",0x83be03f8,"flixel.addons.ui.FlxUI9SliceSprite.set_resize_ratio","flixel/addons/ui/FlxUI9SliceSprite.hx",101,0x728ef6ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(101)
	this->resize_ratio = r;
	HX_STACK_LINE(101)
	Float tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,set_resize_ratio,return )

::flixel::util::FlxPoint FlxUI9SliceSprite_obj::set_resize_point( ::flixel::util::FlxPoint r){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","set_resize_point",0x6629833d,"flixel.addons.ui.FlxUI9SliceSprite.set_resize_point","flixel/addons/ui/FlxUI9SliceSprite.hx",104,0x728ef6ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(105)
	bool tmp = (r != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	if ((tmp)){
		HX_STACK_LINE(106)
		::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(106)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(106)
			::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(106)
			point->_inPool = false;
			HX_STACK_LINE(106)
			tmp1 = point;
		}
		HX_STACK_LINE(106)
		this->resize_point = tmp1;
		HX_STACK_LINE(107)
		::flixel::util::FlxPoint tmp2 = this->resize_point;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = r->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		tmp2->set_x(tmp3);
		HX_STACK_LINE(108)
		::flixel::util::FlxPoint tmp4 = this->resize_point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		Float tmp5 = r->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		tmp4->set_y(tmp5);
	}
	HX_STACK_LINE(110)
	::flixel::util::FlxPoint tmp1 = this->resize_point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,set_resize_point,return )

Void FlxUI9SliceSprite_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","resize",0x881d96ef,"flixel.addons.ui.FlxUI9SliceSprite.resize","flixel/addons/ui/FlxUI9SliceSprite.hx",113,0x728ef6ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(115)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		Float old_width = tmp;		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(116)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		Float old_height = tmp1;		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(118)
		Float tmp2 = this->resize_ratio;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		if ((tmp3)){
			HX_STACK_LINE(119)
			Float tmp4 = (Float(w) / Float(h));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			Float effective_ratio = tmp4;		HX_STACK_VAR(effective_ratio,"effective_ratio");
			HX_STACK_LINE(120)
			Float tmp5 = effective_ratio;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			Float tmp6 = this->resize_ratio;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(120)
			bool tmp9 = (tmp8 > ((Float)0.0001));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			if ((tmp9)){
				HX_STACK_LINE(121)
				Float tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				Float tmp11 = this->resize_ratio;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				Float tmp12 = (Float((int)1) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				h = tmp13;
			}
		}
		HX_STACK_LINE(125)
		bool tmp4 = (this->_slice9 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		if ((tmp5)){
			HX_STACK_LINE(125)
			tmp6 = (this->_slice9 == Array_obj< int >::__new());
		}
		else{
			HX_STACK_LINE(125)
			tmp6 = true;
		}
		HX_STACK_LINE(125)
		if ((tmp6)){
			HX_STACK_LINE(126)
			this->_slice9 = Array_obj< int >::__new().Add((int)4).Add((int)4).Add((int)7).Add((int)7);
		}
		HX_STACK_LINE(129)
		::openfl::_legacy::display::Sprite tmp7 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_canvas;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		if ((tmp8)){
			HX_STACK_LINE(130)
			::openfl::_legacy::display::Sprite tmp9 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_canvas = tmp9;
		}
		HX_STACK_LINE(132)
		::openfl::_legacy::display::Sprite tmp9 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_canvas;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(132)
		::openfl::_legacy::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(132)
		tmp10->clear();
		HX_STACK_LINE(134)
		Float tmp11 = w;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(134)
		Float tmp13 = h;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(134)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(134)
		::openfl::_legacy::display::BitmapData tmp15 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp12,tmp14,null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(134)
		this->_bmpCanvas = tmp15;
		HX_STACK_LINE(136)
		::flixel::util::FlxRect tmp16 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(136)
		tmp16->x = (int)0;
		HX_STACK_LINE(137)
		::flixel::util::FlxRect tmp17 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(137)
		tmp17->y = (int)0;
		HX_STACK_LINE(138)
		::flixel::util::FlxRect tmp18 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(138)
		tmp18->width = w;
		HX_STACK_LINE(139)
		::flixel::util::FlxRect tmp19 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(139)
		tmp19->height = h;
		HX_STACK_LINE(140)
		::openfl::_legacy::display::BitmapData tmp20 = this->_bmpCanvas;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(140)
		::String tmp21 = this->_asset_id;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(140)
		::flixel::util::FlxRect tmp22 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(140)
		int tmp23 = this->_tile;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(140)
		bool tmp24 = this->_smooth;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(140)
		::openfl::_legacy::display::BitmapData tmp25 = this->_raw_pixels;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(140)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::paintScale9(tmp20,tmp21,this->_slice9,tmp22,tmp23,tmp24,tmp25);
		HX_STACK_LINE(142)
		Float tmp26 = w;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(142)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(142)
		int iw = tmp27;		HX_STACK_VAR(iw,"iw");
		HX_STACK_LINE(143)
		bool tmp28 = (iw < (int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(143)
		if ((tmp28)){
			HX_STACK_LINE(144)
			iw = (int)1;
		}
		HX_STACK_LINE(146)
		Float tmp29 = h;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(146)
		int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(146)
		int ih = tmp30;		HX_STACK_VAR(ih,"ih");
		HX_STACK_LINE(147)
		bool tmp31 = (ih < (int)1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(147)
		if ((tmp31)){
			HX_STACK_LINE(148)
			ih = (int)1;
		}
		HX_STACK_LINE(152)
		::String tmp32 = this->_asset_id;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(152)
		::String tmp33 = (tmp32 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(152)
		::String tmp34 = this->_slice9->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(152)
		::String tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(152)
		::String tmp36 = (tmp35 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(152)
		int tmp37 = iw;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(152)
		::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(152)
		::String tmp39 = (tmp38 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(152)
		int tmp40 = ih;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(152)
		::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(152)
		::String tmp42 = (tmp41 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(152)
		int tmp43 = this->_tile;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(152)
		::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(152)
		::String tmp45 = (tmp44 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(152)
		bool tmp46 = this->_smooth;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(152)
		::String tmp47 = ::Std_obj::string(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(152)
		::String tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(152)
		::String key = tmp48;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(154)
		::openfl::_legacy::display::BitmapData tmp49 = this->_bmpCanvas;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(154)
		::openfl::_legacy::display::BitmapData tmp50 = this->_bmpCanvas;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(154)
		int tmp51 = tmp50->get_width();		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(154)
		::openfl::_legacy::display::BitmapData tmp52 = this->_bmpCanvas;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(154)
		int tmp53 = tmp52->get_height();		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(154)
		::String tmp54 = key;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(154)
		this->loadGraphic(tmp49,false,tmp51,tmp53,false,tmp54);
		HX_STACK_LINE(156)
		Float tmp55 = this->get_width();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(156)
		Float tmp56 = old_width;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(156)
		Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(156)
		Float diff_w = tmp57;		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(157)
		Float tmp58 = this->get_height();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(157)
		Float tmp59 = old_height;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(157)
		Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(157)
		Float diff_h = tmp60;		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(159)
		::flixel::util::FlxPoint tmp61 = this->resize_point;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(159)
		bool tmp62 = (tmp61 != null());		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(159)
		if ((tmp62)){
			HX_STACK_LINE(160)
			Float tmp63 = diff_w;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(160)
			::flixel::util::FlxPoint tmp64 = this->resize_point;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(160)
			Float tmp65 = tmp64->x;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(160)
			Float tmp66 = (tmp63 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(160)
			Float delta_x = tmp66;		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(161)
			Float tmp67 = diff_h;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(161)
			::flixel::util::FlxPoint tmp68 = this->resize_point;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(161)
			Float tmp69 = tmp68->y;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(161)
			Float tmp70 = (tmp67 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(161)
			Float delta_y = tmp70;		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::flixel::addons::ui::FlxUI9SliceSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(162)
				Float tmp71 = (_g->x - delta_x);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(162)
				_g->set_x(tmp71);
			}
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::flixel::addons::ui::FlxUI9SliceSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(163)
				Float tmp71 = (_g->y - delta_y);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(163)
				_g->set_y(tmp71);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI9SliceSprite_obj,resize,(void))

int FlxUI9SliceSprite_obj::bitmapsCreated;

::openfl::_legacy::display::Sprite FlxUI9SliceSprite_obj::_canvas;

bool FlxUI9SliceSprite_obj::useSectionCache;

::haxe::ds::StringMap FlxUI9SliceSprite_obj::sectionCache;

::openfl::_legacy::geom::Point FlxUI9SliceSprite_obj::_staticPoint;

::openfl::_legacy::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect;

::openfl::_legacy::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect2;

::openfl::_legacy::geom::Point FlxUI9SliceSprite_obj::_staticPointZero;

::openfl::_legacy::geom::Matrix FlxUI9SliceSprite_obj::_staticMatrix;

::flixel::util::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect;

::flixel::util::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect2;

int FlxUI9SliceSprite_obj::TILE_NONE;

int FlxUI9SliceSprite_obj::TILE_BOTH;

int FlxUI9SliceSprite_obj::TILE_H;

int FlxUI9SliceSprite_obj::TILE_V;

::haxe::ds::StringMap FlxUI9SliceSprite_obj::_staticRects;

::openfl::_legacy::geom::Rectangle FlxUI9SliceSprite_obj::getRectFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","getRectFromString",0x5989423a,"flixel.addons.ui.FlxUI9SliceSprite.getRectFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",167,0x728ef6ec)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(168)
	Array< ::String > coords = str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(169)
	::openfl::_legacy::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(170)
	bool tmp = (coords != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp)){
		HX_STACK_LINE(170)
		tmp1 = (coords->length == (int)4);
	}
	else{
		HX_STACK_LINE(170)
		tmp1 = false;
	}
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(171)
		::String tmp2 = coords->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		int x_ = tmp3;		HX_STACK_VAR(x_,"x_");
		HX_STACK_LINE(172)
		::String tmp4 = coords->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		int y_ = tmp5;		HX_STACK_VAR(y_,"y_");
		HX_STACK_LINE(173)
		::String tmp6 = coords->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		int w_ = tmp7;		HX_STACK_VAR(w_,"w_");
		HX_STACK_LINE(174)
		::String tmp8 = coords->__get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		int h_ = tmp9;		HX_STACK_VAR(h_,"h_");
		HX_STACK_LINE(175)
		::openfl::_legacy::geom::Rectangle tmp10 = ::openfl::_legacy::geom::Rectangle_obj::__new(x_,y_,w_,h_);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		rect = tmp10;
	}
	HX_STACK_LINE(177)
	::openfl::_legacy::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectFromString,return )

Array< int > FlxUI9SliceSprite_obj::getRectIntsFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","getRectIntsFromString",0x35da5b7e,"flixel.addons.ui.FlxUI9SliceSprite.getRectIntsFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",180,0x728ef6ec)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(181)
	Array< ::String > coords = str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(182)
	bool tmp = (coords != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	if ((tmp)){
		HX_STACK_LINE(182)
		tmp1 = (coords->length == (int)4);
	}
	else{
		HX_STACK_LINE(182)
		tmp1 = false;
	}
	HX_STACK_LINE(182)
	if ((tmp1)){
		HX_STACK_LINE(183)
		::String tmp2 = coords->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		int x1 = tmp3;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(184)
		::String tmp4 = coords->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		Dynamic tmp5 = ::Std_obj::parseInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		int y1 = tmp5;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(185)
		::String tmp6 = coords->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		int x2 = tmp7;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(186)
		::String tmp8 = coords->__get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(186)
		int y2 = tmp9;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(187)
		return Array_obj< int >::__new().Add(x1).Add(y1).Add(x2).Add(y2);
	}
	HX_STACK_LINE(189)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectIntsFromString,return )

Void FlxUI9SliceSprite_obj::paintScale9( ::openfl::_legacy::display::BitmapData g,::String assetID,Array< int > scale9,::flixel::util::FlxRect rc,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_legacy::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintScale9",0xf90375d2,"flixel.addons.ui.FlxUI9SliceSprite.paintScale9","flixel/addons/ui/FlxUI9SliceSprite.hx",206,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetID,"assetID")
	HX_STACK_ARG(scale9,"scale9")
	HX_STACK_ARG(rc,"rc")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(207)
		bool tmp = (scale9 != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		if ((tmp)){
			HX_STACK_LINE(209)
			int w;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(210)
			int h;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(211)
			bool tmp1 = (raw == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			if ((tmp1)){
				HX_STACK_LINE(212)
				::String tmp2 = assetID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(212)
				::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(212)
				int tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				w = tmp4;
				HX_STACK_LINE(213)
				::String tmp5 = assetID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				::openfl::_legacy::display::BitmapData tmp6 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				int tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				h = tmp7;
			}
			else{
				HX_STACK_LINE(215)
				int tmp2 = raw->get_width();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(215)
				w = tmp2;
				HX_STACK_LINE(216)
				int tmp3 = raw->get_height();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(216)
				h = tmp3;
			}
			HX_STACK_LINE(219)
			int tmp2 = scale9->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			int x1 = tmp2;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(220)
			int tmp3 = scale9->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			int y1 = tmp3;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(221)
			int tmp4 = scale9->__get((int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			int x2 = tmp4;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(222)
			int tmp5 = scale9->__get((int)3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			int y2 = tmp5;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(224)
			::haxe::ds::StringMap tmp6 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			if ((tmp7)){
				HX_STACK_LINE(225)
				::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(225)
					::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(225)
					::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(225)
					tmp8 = tmp10;
				}
				HX_STACK_LINE(225)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects = tmp8;
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(226)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(226)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(226)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(226)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(226)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(226)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(226)
							_this->x = X;
							HX_STACK_LINE(226)
							_this->y = Y;
							HX_STACK_LINE(226)
							_this->width = Width;
							HX_STACK_LINE(226)
							_this->height = Height;
							HX_STACK_LINE(226)
							tmp10 = _this;
						}
						HX_STACK_LINE(226)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(226)
						rect->_inPool = false;
						HX_STACK_LINE(226)
						tmp9 = rect;
					}
					HX_STACK_LINE(226)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(226)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(226)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(226)
					tmp10->set(HX_HCSTRING("top.left","\x80","\x54","\xc1","\x7e"),tmp11);
				}
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(227)
					{
						HX_STACK_LINE(227)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(227)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(227)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(227)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(227)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(227)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(227)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(227)
							_this->x = X;
							HX_STACK_LINE(227)
							_this->y = Y;
							HX_STACK_LINE(227)
							_this->width = Width;
							HX_STACK_LINE(227)
							_this->height = Height;
							HX_STACK_LINE(227)
							tmp10 = _this;
						}
						HX_STACK_LINE(227)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(227)
						rect->_inPool = false;
						HX_STACK_LINE(227)
						tmp9 = rect;
					}
					HX_STACK_LINE(227)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(227)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(227)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(227)
					tmp10->set(HX_HCSTRING("top","\x95","\x66","\x58","\x00"),tmp11);
				}
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(228)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(228)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(228)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(228)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(228)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(228)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(228)
							_this->x = X;
							HX_STACK_LINE(228)
							_this->y = Y;
							HX_STACK_LINE(228)
							_this->width = Width;
							HX_STACK_LINE(228)
							_this->height = Height;
							HX_STACK_LINE(228)
							tmp10 = _this;
						}
						HX_STACK_LINE(228)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(228)
						rect->_inPool = false;
						HX_STACK_LINE(228)
						tmp9 = rect;
					}
					HX_STACK_LINE(228)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(228)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(228)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(228)
					tmp10->set(HX_HCSTRING("top.right","\x43","\xa9","\x75","\xe1"),tmp11);
				}
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(229)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(229)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(229)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(229)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(229)
						{
							HX_STACK_LINE(229)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(229)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(229)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(229)
							_this->x = X;
							HX_STACK_LINE(229)
							_this->y = Y;
							HX_STACK_LINE(229)
							_this->width = Width;
							HX_STACK_LINE(229)
							_this->height = Height;
							HX_STACK_LINE(229)
							tmp10 = _this;
						}
						HX_STACK_LINE(229)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(229)
						rect->_inPool = false;
						HX_STACK_LINE(229)
						tmp9 = rect;
					}
					HX_STACK_LINE(229)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(229)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(229)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(229)
					tmp10->set(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),tmp11);
				}
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(230)
					{
						HX_STACK_LINE(230)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(230)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(230)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(230)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(230)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(230)
						{
							HX_STACK_LINE(230)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(230)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(230)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(230)
							_this->x = X;
							HX_STACK_LINE(230)
							_this->y = Y;
							HX_STACK_LINE(230)
							_this->width = Width;
							HX_STACK_LINE(230)
							_this->height = Height;
							HX_STACK_LINE(230)
							tmp10 = _this;
						}
						HX_STACK_LINE(230)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(230)
						rect->_inPool = false;
						HX_STACK_LINE(230)
						tmp9 = rect;
					}
					HX_STACK_LINE(230)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(230)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(230)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(230)
					tmp10->set(HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"),tmp11);
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					{
						HX_STACK_LINE(231)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(231)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(231)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(231)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(231)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(231)
						{
							HX_STACK_LINE(231)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(231)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(231)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(231)
							_this->x = X;
							HX_STACK_LINE(231)
							_this->y = Y;
							HX_STACK_LINE(231)
							_this->width = Width;
							HX_STACK_LINE(231)
							_this->height = Height;
							HX_STACK_LINE(231)
							tmp10 = _this;
						}
						HX_STACK_LINE(231)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(231)
						rect->_inPool = false;
						HX_STACK_LINE(231)
						tmp9 = rect;
					}
					HX_STACK_LINE(231)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(231)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(231)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(231)
					tmp10->set(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),tmp11);
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(232)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(232)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(232)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(232)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(232)
						{
							HX_STACK_LINE(232)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(232)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(232)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(232)
							_this->x = X;
							HX_STACK_LINE(232)
							_this->y = Y;
							HX_STACK_LINE(232)
							_this->width = Width;
							HX_STACK_LINE(232)
							_this->height = Height;
							HX_STACK_LINE(232)
							tmp10 = _this;
						}
						HX_STACK_LINE(232)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(232)
						rect->_inPool = false;
						HX_STACK_LINE(232)
						tmp9 = rect;
					}
					HX_STACK_LINE(232)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(232)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(232)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(232)
					tmp10->set(HX_HCSTRING("bottom.left","\x6a","\xdc","\x81","\x96"),tmp11);
				}
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(233)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(233)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(233)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(233)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(233)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(233)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(233)
							_this->x = X;
							HX_STACK_LINE(233)
							_this->y = Y;
							HX_STACK_LINE(233)
							_this->width = Width;
							HX_STACK_LINE(233)
							_this->height = Height;
							HX_STACK_LINE(233)
							tmp10 = _this;
						}
						HX_STACK_LINE(233)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(233)
						rect->_inPool = false;
						HX_STACK_LINE(233)
						tmp9 = rect;
					}
					HX_STACK_LINE(233)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(233)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(233)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(233)
					tmp10->set(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),tmp11);
				}
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					::flixel::util::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(234)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(234)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(234)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(234)
						::flixel::util::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							::flixel::util::FlxPool tmp11 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(234)
							::flixel::util::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(234)
							::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(234)
							_this->x = X;
							HX_STACK_LINE(234)
							_this->y = Y;
							HX_STACK_LINE(234)
							_this->width = Width;
							HX_STACK_LINE(234)
							_this->height = Height;
							HX_STACK_LINE(234)
							tmp10 = _this;
						}
						HX_STACK_LINE(234)
						::flixel::util::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(234)
						rect->_inPool = false;
						HX_STACK_LINE(234)
						tmp9 = rect;
					}
					HX_STACK_LINE(234)
					::flixel::util::FlxRect value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(234)
					::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(234)
					::flixel::util::FlxRect tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(234)
					tmp10->set(HX_HCSTRING("bottom.right","\x19","\x0e","\x2c","\x92"),tmp11);
				}
			}
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("top.left","\x80","\x54","\xc1","\x7e"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(237)
				_this->x = (int)0;
				HX_STACK_LINE(237)
				_this->y = (int)0;
				HX_STACK_LINE(237)
				_this->width = x1;
				HX_STACK_LINE(237)
				_this->height = y1;
				HX_STACK_LINE(237)
				_this;
			}
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(238)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(238)
				_this->x = x1;
				HX_STACK_LINE(238)
				_this->y = (int)0;
				HX_STACK_LINE(238)
				int tmp10 = (x2 - x1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(238)
				_this->width = tmp10;
				HX_STACK_LINE(238)
				_this->height = y1;
				HX_STACK_LINE(238)
				_this;
			}
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(239)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("top.right","\x43","\xa9","\x75","\xe1"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(239)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(239)
				_this->x = x2;
				HX_STACK_LINE(239)
				_this->y = (int)0;
				HX_STACK_LINE(239)
				int tmp10 = (w - x2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				_this->width = tmp10;
				HX_STACK_LINE(239)
				_this->height = y1;
				HX_STACK_LINE(239)
				_this;
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(241)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(241)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(241)
				_this->x = (int)0;
				HX_STACK_LINE(241)
				_this->y = y1;
				HX_STACK_LINE(241)
				_this->width = x1;
				HX_STACK_LINE(241)
				int tmp10 = (y2 - y1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(241)
				_this->height = tmp10;
				HX_STACK_LINE(241)
				_this;
			}
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(242)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(242)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(242)
				_this->x = x1;
				HX_STACK_LINE(242)
				_this->y = y1;
				HX_STACK_LINE(242)
				int tmp10 = (x2 - x1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(242)
				_this->width = tmp10;
				HX_STACK_LINE(242)
				int tmp11 = (y2 - y1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(242)
				_this->height = tmp11;
				HX_STACK_LINE(242)
				_this;
			}
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(243)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(243)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(243)
				_this->x = x2;
				HX_STACK_LINE(243)
				_this->y = y1;
				HX_STACK_LINE(243)
				int tmp10 = (w - x2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(243)
				_this->width = tmp10;
				HX_STACK_LINE(243)
				int tmp11 = (y2 - y1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(243)
				_this->height = tmp11;
				HX_STACK_LINE(243)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(245)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("bottom.left","\x6a","\xdc","\x81","\x96"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(245)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->x = (int)0;
				HX_STACK_LINE(245)
				_this->y = y2;
				HX_STACK_LINE(245)
				_this->width = x1;
				HX_STACK_LINE(245)
				int tmp10 = (h - y2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				_this->height = tmp10;
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(246)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				_this->x = x1;
				HX_STACK_LINE(246)
				_this->y = y2;
				HX_STACK_LINE(246)
				int tmp10 = (x2 - x1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(246)
				_this->width = tmp10;
				HX_STACK_LINE(246)
				int tmp11 = (h - y2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(246)
				_this->height = tmp11;
				HX_STACK_LINE(246)
				_this;
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::haxe::ds::StringMap tmp8 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				::flixel::util::FlxRect tmp9 = tmp8->get(HX_HCSTRING("bottom.right","\x19","\x0e","\x2c","\x92"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				::flixel::util::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				_this->x = x2;
				HX_STACK_LINE(247)
				_this->y = y2;
				HX_STACK_LINE(247)
				int tmp10 = (w - x2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				_this->width = tmp10;
				HX_STACK_LINE(247)
				int tmp11 = (h - y2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				_this->height = tmp11;
				HX_STACK_LINE(247)
				_this;
			}
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData tmp8 = g;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(264)
			::String tmp9 = assetID;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(264)
			::haxe::ds::StringMap tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			::flixel::util::FlxRect tmp11 = rc;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(264)
			int tmp12 = tile;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(264)
			bool tmp13 = smooth;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData tmp14 = raw;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(264)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintCompoundBitmap(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintScale9,(void))

Void FlxUI9SliceSprite_obj::paintCompoundBitmap( ::openfl::_legacy::display::BitmapData g,::String assetID,::haxe::ds::StringMap sourceRects,::flixel::util::FlxRect targetRect,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_legacy::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintCompoundBitmap",0xb0d9501d,"flixel.addons.ui.FlxUI9SliceSprite.paintCompoundBitmap","flixel/addons/ui/FlxUI9SliceSprite.hx",268,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetID,"assetID")
	HX_STACK_ARG(sourceRects,"sourceRects")
	HX_STACK_ARG(targetRect,"targetRect")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(269)
		int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
		HX_STACK_LINE(271)
		Float tmp = targetRect->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		targetRect->x = tmp1;
		HX_STACK_LINE(272)
		Float tmp2 = targetRect->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		targetRect->y = tmp3;
		HX_STACK_LINE(273)
		Float tmp4 = targetRect->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		targetRect->width = tmp5;
		HX_STACK_LINE(274)
		Float tmp6 = targetRect->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		targetRect->height = tmp7;
		HX_STACK_LINE(277)
		::flixel::util::FlxRect tmp8 = sourceRects->get(HX_HCSTRING("top.left","\x80","\x54","\xc1","\x7e"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		::flixel::util::FlxRect tl = tmp8;		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(278)
		bool tmp9 = (tl != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(278)
		if ((tmp9)){
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::util::FlxRect tmp10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(279)
				::flixel::util::FlxRect _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				_this->x = (int)0;
				HX_STACK_LINE(279)
				_this->y = (int)0;
				HX_STACK_LINE(279)
				_this->width = tl->width;
				HX_STACK_LINE(279)
				_this->height = tl->height;
				HX_STACK_LINE(279)
				_this;
			}
			HX_STACK_LINE(280)
			::openfl::_legacy::display::BitmapData tmp10 = g;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(280)
			::String tmp11 = assetID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(280)
			::flixel::util::FlxRect tmp12 = tl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(280)
			::flixel::util::FlxRect tmp13 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(280)
			bool tmp14 = smooth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(280)
			::openfl::_legacy::display::BitmapData tmp15 = raw;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(280)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp10,tmp11,tmp12,tmp13,null(),(int)0,tmp14,tmp15);
		}
		HX_STACK_LINE(283)
		::flixel::util::FlxRect tmp10 = sourceRects->get(HX_HCSTRING("top.right","\x43","\xa9","\x75","\xe1"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(283)
		::flixel::util::FlxRect tr = tmp10;		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(284)
		bool tmp11 = (tr != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(284)
		if ((tmp11)){
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::flixel::util::FlxRect tmp12 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(285)
				::flixel::util::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(285)
				Float tmp13 = (targetRect->width - tr->width);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				_this->x = tmp13;
				HX_STACK_LINE(285)
				_this->y = (int)0;
				HX_STACK_LINE(285)
				_this->width = tr->width;
				HX_STACK_LINE(285)
				_this->height = tr->height;
				HX_STACK_LINE(285)
				_this;
			}
			HX_STACK_LINE(286)
			::openfl::_legacy::display::BitmapData tmp12 = g;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(286)
			::String tmp13 = assetID;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(286)
			::flixel::util::FlxRect tmp14 = tr;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(286)
			::flixel::util::FlxRect tmp15 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(286)
			bool tmp16 = smooth;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(286)
			::openfl::_legacy::display::BitmapData tmp17 = raw;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(286)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp12,tmp13,tmp14,tmp15,null(),(int)0,tmp16,tmp17);
		}
		HX_STACK_LINE(289)
		::flixel::util::FlxRect tmp12 = sourceRects->get(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(289)
		::flixel::util::FlxRect t = tmp12;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(290)
		bool tmp13 = (t != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(290)
		if ((tmp13)){
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				::flixel::util::FlxRect tmp14 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(291)
				::flixel::util::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(291)
				_this->x = tl->width;
				HX_STACK_LINE(291)
				_this->y = (int)0;
				HX_STACK_LINE(291)
				Float tmp15 = (targetRect->width - tl->width);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(291)
				Float tmp16 = tr->width;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(291)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(291)
				_this->width = tmp17;
				HX_STACK_LINE(291)
				_this->height = t->height;
				HX_STACK_LINE(291)
				_this;
			}
			HX_STACK_LINE(292)
			::openfl::_legacy::display::BitmapData tmp14 = g;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(292)
			::String tmp15 = assetID;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(292)
			::flixel::util::FlxRect tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(292)
			::flixel::util::FlxRect tmp17 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(292)
			int tmp18 = (int(tile) & int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(292)
			bool tmp19 = smooth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(292)
			::openfl::_legacy::display::BitmapData tmp20 = raw;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(292)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp14,tmp15,tmp16,tmp17,null(),tmp18,tmp19,tmp20);
		}
		HX_STACK_LINE(296)
		::flixel::util::FlxRect tmp14 = sourceRects->get(HX_HCSTRING("bottom.left","\x6a","\xdc","\x81","\x96"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(296)
		::flixel::util::FlxRect bl = tmp14;		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(297)
		bool tmp15 = (bl != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(297)
		if ((tmp15)){
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(298)
				::flixel::util::FlxRect tmp16 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(298)
				::flixel::util::FlxRect _this = tmp16;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(298)
				_this->x = (int)0;
				HX_STACK_LINE(298)
				Float tmp17 = (targetRect->height - bl->height);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(298)
				_this->y = tmp17;
				HX_STACK_LINE(298)
				_this->width = bl->width;
				HX_STACK_LINE(298)
				_this->height = bl->height;
				HX_STACK_LINE(298)
				_this;
			}
			HX_STACK_LINE(299)
			::openfl::_legacy::display::BitmapData tmp16 = g;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(299)
			::String tmp17 = assetID;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(299)
			::flixel::util::FlxRect tmp18 = bl;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(299)
			::flixel::util::FlxRect tmp19 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(299)
			bool tmp20 = smooth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(299)
			::openfl::_legacy::display::BitmapData tmp21 = raw;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(299)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp16,tmp17,tmp18,tmp19,null(),(int)0,tmp20,tmp21);
		}
		HX_STACK_LINE(302)
		::flixel::util::FlxRect tmp16 = sourceRects->get(HX_HCSTRING("bottom.right","\x19","\x0e","\x2c","\x92"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(302)
		::flixel::util::FlxRect br = tmp16;		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(303)
		bool tmp17 = (br != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(303)
		if ((tmp17)){
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::flixel::util::FlxRect tmp18 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(304)
				::flixel::util::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(304)
				Float tmp19 = (targetRect->width - br->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(304)
				_this->x = tmp19;
				HX_STACK_LINE(304)
				Float tmp20 = (targetRect->height - br->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(304)
				_this->y = tmp20;
				HX_STACK_LINE(304)
				_this->width = br->width;
				HX_STACK_LINE(304)
				_this->height = br->height;
				HX_STACK_LINE(304)
				_this;
			}
			HX_STACK_LINE(305)
			::openfl::_legacy::display::BitmapData tmp18 = g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(305)
			::String tmp19 = assetID;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(305)
			::flixel::util::FlxRect tmp20 = br;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(305)
			::flixel::util::FlxRect tmp21 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(305)
			bool tmp22 = smooth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(305)
			::openfl::_legacy::display::BitmapData tmp23 = raw;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(305)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp18,tmp19,tmp20,tmp21,null(),(int)0,tmp22,tmp23);
		}
		HX_STACK_LINE(308)
		::flixel::util::FlxRect tmp18 = sourceRects->get(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(308)
		::flixel::util::FlxRect b = tmp18;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(309)
		bool tmp19 = (b != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(309)
		if ((tmp19)){
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::flixel::util::FlxRect tmp20 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(310)
				::flixel::util::FlxRect _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(310)
				_this->x = bl->width;
				HX_STACK_LINE(310)
				Float tmp21 = (targetRect->height - b->height);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(310)
				_this->y = tmp21;
				HX_STACK_LINE(310)
				Float tmp22 = (targetRect->width - bl->width);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(310)
				Float tmp23 = br->width;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(310)
				Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(310)
				_this->width = tmp24;
				HX_STACK_LINE(310)
				_this->height = b->height;
				HX_STACK_LINE(310)
				_this;
			}
			HX_STACK_LINE(311)
			::openfl::_legacy::display::BitmapData tmp20 = g;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(311)
			::String tmp21 = assetID;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(311)
			::flixel::util::FlxRect tmp22 = b;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(311)
			::flixel::util::FlxRect tmp23 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(311)
			int tmp24 = (int(tile) & int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(311)
			bool tmp25 = smooth;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(311)
			::openfl::_legacy::display::BitmapData tmp26 = raw;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(311)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp20,tmp21,tmp22,tmp23,null(),tmp24,tmp25,tmp26);
		}
		HX_STACK_LINE(315)
		::flixel::util::FlxRect tmp20 = sourceRects->get(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(315)
		::flixel::util::FlxRect l = tmp20;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(316)
		bool tmp21 = (l != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(316)
		if ((tmp21)){
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				::flixel::util::FlxRect tmp22 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(317)
				::flixel::util::FlxRect _this = tmp22;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(317)
				_this->x = (int)0;
				HX_STACK_LINE(317)
				_this->y = tl->height;
				HX_STACK_LINE(317)
				_this->width = l->width;
				HX_STACK_LINE(317)
				Float tmp23 = (targetRect->height - tl->height);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(317)
				Float tmp24 = bl->height;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(317)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(317)
				_this->height = tmp25;
				HX_STACK_LINE(317)
				_this;
			}
			HX_STACK_LINE(318)
			::openfl::_legacy::display::BitmapData tmp22 = g;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(318)
			::String tmp23 = assetID;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(318)
			::flixel::util::FlxRect tmp24 = l;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(318)
			::flixel::util::FlxRect tmp25 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(318)
			int tmp26 = (int(tile) & int((int)1));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(318)
			bool tmp27 = smooth;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(318)
			::openfl::_legacy::display::BitmapData tmp28 = raw;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(318)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp22,tmp23,tmp24,tmp25,null(),tmp26,tmp27,tmp28);
		}
		HX_STACK_LINE(321)
		::flixel::util::FlxRect tmp22 = sourceRects->get(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(321)
		::flixel::util::FlxRect r = tmp22;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(322)
		bool tmp23 = (r != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(322)
		if ((tmp23)){
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				::flixel::util::FlxRect tmp24 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(323)
				::flixel::util::FlxRect _this = tmp24;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(323)
				Float tmp25 = (targetRect->width - r->width);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(323)
				_this->x = tmp25;
				HX_STACK_LINE(323)
				_this->y = tr->height;
				HX_STACK_LINE(323)
				_this->width = r->width;
				HX_STACK_LINE(323)
				Float tmp26 = (targetRect->height - tl->height);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(323)
				Float tmp27 = bl->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(323)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(323)
				_this->height = tmp28;
				HX_STACK_LINE(323)
				_this;
			}
			HX_STACK_LINE(324)
			::openfl::_legacy::display::BitmapData tmp24 = g;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(324)
			::String tmp25 = assetID;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(324)
			::flixel::util::FlxRect tmp26 = r;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(324)
			::flixel::util::FlxRect tmp27 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(324)
			int tmp28 = (int(tile) & int((int)1));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(324)
			bool tmp29 = smooth;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(324)
			::openfl::_legacy::display::BitmapData tmp30 = raw;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(324)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp24,tmp25,tmp26,tmp27,null(),tmp28,tmp29,tmp30);
		}
		HX_STACK_LINE(327)
		::flixel::util::FlxRect tmp24 = sourceRects->get(HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(327)
		::flixel::util::FlxRect m = tmp24;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(328)
		bool tmp25 = (m != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(328)
		if ((tmp25)){
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::flixel::util::FlxRect tmp26 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(329)
				::flixel::util::FlxRect _this = tmp26;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				_this->x = l->width;
				HX_STACK_LINE(329)
				_this->y = t->height;
				HX_STACK_LINE(329)
				Float tmp27 = (targetRect->width - l->width);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(329)
				Float tmp28 = r->width;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(329)
				Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(329)
				_this->width = tmp29;
				HX_STACK_LINE(329)
				Float tmp30 = (targetRect->height - t->height);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(329)
				Float tmp31 = b->height;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(329)
				Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(329)
				_this->height = tmp32;
				HX_STACK_LINE(329)
				_this;
			}
			HX_STACK_LINE(330)
			::openfl::_legacy::display::BitmapData tmp26 = g;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(330)
			::String tmp27 = assetID;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(330)
			::flixel::util::FlxRect tmp28 = m;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(330)
			::flixel::util::FlxRect tmp29 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(330)
			int tmp30 = tile;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(330)
			bool tmp31 = smooth;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(330)
			::openfl::_legacy::display::BitmapData tmp32 = raw;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(330)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(tmp26,tmp27,tmp28,tmp29,null(),tmp30,tmp31,tmp32);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintCompoundBitmap,(void))

Void FlxUI9SliceSprite_obj::paintBitmapSection( ::openfl::_legacy::display::BitmapData g,::String assetId,::flixel::util::FlxRect src,::flixel::util::FlxRect dst,::openfl::_legacy::display::BitmapData srcData,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_legacy::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintBitmapSection",0xd9a180b3,"flixel.addons.ui.FlxUI9SliceSprite.paintBitmapSection","flixel/addons/ui/FlxUI9SliceSprite.hx",334,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetId,"assetId")
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(srcData,"srcData")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(335)
		bool tmp = (srcData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		if ((tmp)){
			HX_STACK_LINE(336)
			bool tmp1 = (raw != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(336)
			if ((tmp1)){
				HX_STACK_LINE(337)
				srcData = raw;
			}
			else{
				HX_STACK_LINE(339)
				::String tmp2 = assetId;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(339)
				::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(339)
				srcData = tmp3;
			}
		}
		HX_STACK_LINE(343)
		Float tmp1 = src->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(343)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(343)
		src->x = tmp2;
		HX_STACK_LINE(344)
		Float tmp3 = src->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(344)
		src->y = tmp4;
		HX_STACK_LINE(345)
		Float tmp5 = src->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		src->width = tmp6;
		HX_STACK_LINE(346)
		Float tmp7 = src->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(346)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(346)
		src->height = tmp8;
		HX_STACK_LINE(348)
		Float tmp9 = dst->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(348)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(348)
		dst->x = tmp10;
		HX_STACK_LINE(349)
		Float tmp11 = dst->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(349)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(349)
		dst->y = tmp12;
		HX_STACK_LINE(350)
		Float tmp13 = dst->width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(350)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(350)
		dst->width = tmp14;
		HX_STACK_LINE(351)
		Float tmp15 = dst->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(351)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(351)
		dst->height = tmp16;
		HX_STACK_LINE(353)
		::openfl::_legacy::display::BitmapData section = null();		HX_STACK_VAR(section,"section");
		HX_STACK_LINE(354)
		::String cacheId = null();		HX_STACK_VAR(cacheId,"cacheId");
		HX_STACK_LINE(355)
		bool tmp17 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(355)
		bool tmp18 = (tmp17 == true);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(355)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(355)
		if ((tmp18)){
			HX_STACK_LINE(355)
			tmp19 = (assetId != null());
		}
		else{
			HX_STACK_LINE(355)
			tmp19 = false;
		}
		HX_STACK_LINE(355)
		if ((tmp19)){
			HX_STACK_LINE(356)
			::haxe::ds::StringMap tmp20 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(356)
			bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(356)
			if ((tmp21)){
				HX_STACK_LINE(357)
				::haxe::ds::StringMap tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(357)
				{
					HX_STACK_LINE(357)
					::haxe::ds::StringMap tmp23 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(357)
					::haxe::ds::StringMap tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(357)
					tmp22 = tmp24;
				}
				HX_STACK_LINE(357)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache = tmp22;
			}
			HX_STACK_LINE(359)
			::String tmp22 = (assetId + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(359)
			Float tmp23 = src->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(359)
			::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(359)
			::String tmp25 = (tmp24 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(359)
			Float tmp26 = src->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(359)
			::String tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(359)
			::String tmp28 = (tmp27 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(359)
			Float tmp29 = src->width;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(359)
			::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(359)
			::String tmp31 = (tmp30 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(359)
			Float tmp32 = src->height;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(359)
			::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(359)
			::String tmp34 = (tmp33 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(359)
			cacheId = tmp34;
			HX_STACK_LINE(360)
			::haxe::ds::StringMap tmp35 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(360)
			::String tmp36 = cacheId;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(360)
			::openfl::_legacy::display::BitmapData tmp37 = tmp35->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(360)
			section = tmp37;
		}
		HX_STACK_LINE(363)
		bool tmp20 = (section == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(363)
		if ((tmp20)){
			HX_STACK_LINE(364)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(365)
			Float tmp21 = src->width;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(365)
			int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(365)
			Float tmp23 = src->height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(365)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(365)
			int tmp25 = fillcolor;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(365)
			::openfl::_legacy::display::BitmapData tmp26 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp22,tmp24,true,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(365)
			section = tmp26;
			HX_STACK_LINE(367)
			::openfl::_legacy::geom::Rectangle tmp27 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(367)
			tmp27->x = src->x;
			HX_STACK_LINE(368)
			::openfl::_legacy::geom::Rectangle tmp28 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(368)
			tmp28->y = src->y;
			HX_STACK_LINE(369)
			::openfl::_legacy::geom::Rectangle tmp29 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(369)
			tmp29->width = src->width;
			HX_STACK_LINE(370)
			::openfl::_legacy::geom::Rectangle tmp30 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(370)
			tmp30->height = src->height;
			HX_STACK_LINE(372)
			::openfl::_legacy::display::BitmapData tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(372)
			::openfl::_legacy::geom::Rectangle tmp32 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(372)
			::openfl::_legacy::geom::Point tmp33 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPointZero;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(372)
			section->copyPixels(tmp31,tmp32,tmp33,null(),null(),null());
			HX_STACK_LINE(374)
			bool tmp34 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(374)
			bool tmp35 = (tmp34 == true);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(374)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(374)
			if ((tmp35)){
				HX_STACK_LINE(374)
				tmp36 = (cacheId != null());
			}
			else{
				HX_STACK_LINE(374)
				tmp36 = false;
			}
			HX_STACK_LINE(374)
			if ((tmp36)){
				HX_STACK_LINE(375)
				::haxe::ds::StringMap tmp37 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(375)
				::String tmp38 = cacheId;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(375)
				::openfl::_legacy::display::BitmapData tmp39 = section;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(375)
				tmp37->set(tmp38,tmp39);
			}
			HX_STACK_LINE(377)
			(::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapsCreated)++;
		}
		HX_STACK_LINE(380)
		bool tmp21 = (dst->width > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(380)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(380)
		if ((tmp21)){
			HX_STACK_LINE(380)
			tmp22 = (dst->height > (int)0);
		}
		else{
			HX_STACK_LINE(380)
			tmp22 = false;
		}
		HX_STACK_LINE(380)
		if ((tmp22)){
			HX_STACK_LINE(382)
			::openfl::_legacy::geom::Rectangle tmp23 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(382)
			tmp23->x = dst->x;
			HX_STACK_LINE(383)
			::openfl::_legacy::geom::Rectangle tmp24 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(383)
			tmp24->y = dst->y;
			HX_STACK_LINE(384)
			::openfl::_legacy::geom::Rectangle tmp25 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(384)
			tmp25->width = dst->width;
			HX_STACK_LINE(385)
			::openfl::_legacy::geom::Rectangle tmp26 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(385)
			tmp26->height = dst->height;
			HX_STACK_LINE(387)
			::openfl::_legacy::display::BitmapData tmp27 = g;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(387)
			::openfl::_legacy::geom::Rectangle tmp28 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(387)
			::openfl::_legacy::display::BitmapData tmp29 = section;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(387)
			int tmp30 = tile;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(387)
			bool tmp31 = smooth;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(387)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapFillRect(tmp27,tmp28,tmp29,tmp30,tmp31);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxUI9SliceSprite_obj,paintBitmapSection,(void))

Void FlxUI9SliceSprite_obj::bitmapFillRect( ::openfl::_legacy::display::BitmapData g,::openfl::_legacy::geom::Rectangle dst,::openfl::_legacy::display::BitmapData section,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth_){
int tile = __o_tile.Default(0);
bool smooth_ = __o_smooth_.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","bitmapFillRect",0x90ef4851,"flixel.addons.ui.FlxUI9SliceSprite.bitmapFillRect","flixel/addons/ui/FlxUI9SliceSprite.hx",391,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(section,"section")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth_,"smooth_")
{
		HX_STACK_LINE(398)
		Float tmp = dst->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		Float tmp2 = dst->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp3,true,(int)0,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(398)
		::openfl::_legacy::display::BitmapData final_pixels = tmp4;		HX_STACK_VAR(final_pixels,"final_pixels");
		HX_STACK_LINE(400)
		::openfl::_legacy::geom::Matrix tmp5 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(400)
		tmp5->identity();
		HX_STACK_LINE(403)
		::openfl::_legacy::geom::Rectangle tmp6 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		tmp6->x = (int)0;
		HX_STACK_LINE(404)
		::openfl::_legacy::geom::Rectangle tmp7 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		tmp7->y = (int)0;
		HX_STACK_LINE(405)
		int tmp8 = section->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(405)
		::openfl::_legacy::geom::Rectangle tmp9 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(405)
		tmp9->width = tmp8;
		HX_STACK_LINE(406)
		int tmp10 = section->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(406)
		::openfl::_legacy::geom::Rectangle tmp11 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(406)
		tmp11->height = tmp10;
		HX_STACK_LINE(408)
		int tmp12 = (int(tile) & int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(408)
		bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(408)
		if ((tmp13)){
			HX_STACK_LINE(409)
			::openfl::_legacy::geom::Matrix tmp14 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(409)
			Float tmp15 = dst->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(409)
			int tmp16 = section->get_width();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(409)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(409)
			tmp14->scale(tmp17,((Float)1.0));
			HX_STACK_LINE(410)
			::openfl::_legacy::geom::Rectangle tmp18 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(410)
			tmp18->width = dst->width;
		}
		HX_STACK_LINE(412)
		int tmp14 = (int(tile) & int((int)1));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(412)
		bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(412)
		if ((tmp15)){
			HX_STACK_LINE(413)
			::openfl::_legacy::geom::Matrix tmp16 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(413)
			Float tmp17 = dst->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(413)
			int tmp18 = section->get_height();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(413)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(413)
			tmp16->scale(((Float)1.0),tmp19);
			HX_STACK_LINE(414)
			::openfl::_legacy::geom::Rectangle tmp20 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(414)
			tmp20->height = dst->height;
		}
		HX_STACK_LINE(422)
		int tmp16 = section->get_width();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(422)
		Float tmp17 = dst->width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(422)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(422)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(422)
		if ((tmp18)){
			HX_STACK_LINE(422)
			int tmp20 = section->get_height();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(422)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(422)
			Float tmp22 = dst->height;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(422)
			tmp19 = (tmp21 == tmp22);
		}
		else{
			HX_STACK_LINE(422)
			tmp19 = false;
		}
		HX_STACK_LINE(422)
		if ((tmp19)){
			HX_STACK_LINE(423)
			::openfl::_legacy::geom::Point tmp20 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(423)
			tmp20->x = (int)0;
			HX_STACK_LINE(424)
			::openfl::_legacy::geom::Point tmp21 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(424)
			tmp21->y = (int)0;
			HX_STACK_LINE(425)
			::openfl::_legacy::display::BitmapData tmp22 = section;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(425)
			::openfl::_legacy::geom::Rectangle tmp23 = section->get_rect();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(425)
			::openfl::_legacy::geom::Point tmp24 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(425)
			final_pixels->copyPixels(tmp22,tmp23,tmp24,null(),null(),null());
		}
		else{
			HX_STACK_LINE(427)
			bool tmp20 = smooth_;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(427)
			if ((tmp20)){
				HX_STACK_LINE(428)
				::openfl::_legacy::display::BitmapData tmp21 = section;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(428)
				::openfl::_legacy::geom::Matrix tmp22 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(428)
				final_pixels->draw(tmp21,tmp22,null(),null(),null(),true);
			}
			else{
				HX_STACK_LINE(430)
				::openfl::_legacy::display::BitmapData tmp21 = section;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(430)
				::openfl::_legacy::geom::Matrix tmp22 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(430)
				final_pixels->draw(tmp21,tmp22,null(),null(),null(),false);
			}
		}
		HX_STACK_LINE(435)
		bool tmp20 = (tile != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(435)
		if ((tmp20)){
			HX_STACK_LINE(439)
			int tmp21 = (int(tile) & int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(439)
			int th = tmp21;		HX_STACK_VAR(th,"th");
			HX_STACK_LINE(441)
			int tmp22 = (int(tile) & int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(441)
			bool tmp23 = (tmp22 == (int)16);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(441)
			if ((tmp23)){
				HX_STACK_LINE(443)
				::openfl::_legacy::geom::Point tmp24 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(443)
				tmp24->x = (int)0;
				HX_STACK_LINE(444)
				::openfl::_legacy::geom::Point tmp25 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(444)
				tmp25->y = (int)0;
				HX_STACK_LINE(446)
				while((true)){
					HX_STACK_LINE(446)
					::openfl::_legacy::geom::Point tmp26 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(446)
					Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(446)
					Float tmp28 = dst->width;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(446)
					bool tmp29 = (tmp27 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(446)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(446)
					if ((tmp30)){
						HX_STACK_LINE(446)
						break;
					}
					HX_STACK_LINE(447)
					::openfl::_legacy::geom::Rectangle tmp31 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(447)
					::openfl::_legacy::geom::Point tmp32 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(447)
					hx::AddEq(tmp32->x,tmp31->width);
					HX_STACK_LINE(450)
					::openfl::_legacy::display::BitmapData tmp33 = final_pixels;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(450)
					::openfl::_legacy::geom::Rectangle tmp34 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(450)
					::openfl::_legacy::geom::Point tmp35 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(450)
					final_pixels->copyPixels(tmp33,tmp34,tmp35,null(),null(),null());
				}
			}
			HX_STACK_LINE(460)
			int tmp24 = (int(tile) & int((int)1));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(460)
			bool tmp25 = (tmp24 == (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(460)
			if ((tmp25)){
				HX_STACK_LINE(462)
				::openfl::_legacy::geom::Point tmp26 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(462)
				tmp26->x = (int)0;
				HX_STACK_LINE(463)
				::openfl::_legacy::geom::Point tmp27 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(463)
				tmp27->y = (int)0;
				HX_STACK_LINE(466)
				int tmp28 = final_pixels->get_width();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(466)
				::openfl::_legacy::geom::Rectangle tmp29 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(466)
				tmp29->width = tmp28;
				HX_STACK_LINE(468)
				while((true)){
					HX_STACK_LINE(468)
					::openfl::_legacy::geom::Point tmp30 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(468)
					Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(468)
					Float tmp32 = dst->height;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(468)
					bool tmp33 = (tmp31 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(468)
					bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(468)
					if ((tmp34)){
						HX_STACK_LINE(468)
						break;
					}
					HX_STACK_LINE(469)
					::openfl::_legacy::geom::Rectangle tmp35 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(469)
					::openfl::_legacy::geom::Point tmp36 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(469)
					hx::AddEq(tmp36->y,tmp35->height);
					HX_STACK_LINE(473)
					::openfl::_legacy::display::BitmapData tmp37 = final_pixels;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(473)
					::openfl::_legacy::geom::Rectangle tmp38 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(473)
					::openfl::_legacy::geom::Point tmp39 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(473)
					final_pixels->copyPixels(tmp37,tmp38,tmp39,null(),null(),null());
				}
			}
		}
		HX_STACK_LINE(482)
		::openfl::_legacy::geom::Point tmp21 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(482)
		tmp21->x = dst->x;
		HX_STACK_LINE(483)
		::openfl::_legacy::geom::Point tmp22 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(483)
		tmp22->y = dst->y;
		HX_STACK_LINE(486)
		::openfl::_legacy::display::BitmapData tmp23 = final_pixels;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(486)
		::openfl::_legacy::geom::Rectangle tmp24 = final_pixels->get_rect();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(486)
		::openfl::_legacy::geom::Point tmp25 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(486)
		g->copyPixels(tmp23,tmp24,tmp25,null(),null(),null());
		HX_STACK_LINE(489)
		::openfl::_legacy::display::BitmapData tmp26 = final_pixels;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(489)
		::openfl::_legacy::display::BitmapData tmp27 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(489)
		final_pixels = tmp27;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxUI9SliceSprite_obj,bitmapFillRect,(void))


FlxUI9SliceSprite_obj::FlxUI9SliceSprite_obj()
{
}

void FlxUI9SliceSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI9SliceSprite);
	HX_MARK_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_MARK_MEMBER_NAME(_slice9,"_slice9");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_asset_id,"_asset_id");
	HX_MARK_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	::flixel::addons::ui::FlxUISprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI9SliceSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_VISIT_MEMBER_NAME(_slice9,"_slice9");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_asset_id,"_asset_id");
	HX_VISIT_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	::flixel::addons::ui::FlxUISprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUI9SliceSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slice9") ) { return _slice9; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return _smooth; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { return _asset_id; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { return _bmpCanvas; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { return _raw_pixels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return resize_ratio; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return resize_point; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_resize_ratio") ) { return set_resize_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_resize_point") ) { return set_resize_point_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxUI9SliceSprite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { outValue = _canvas; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { outValue = _staticRect; return true;  }
		if (HX_FIELD_EQ(inName,"paintScale9") ) { outValue = paintScale9_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { outValue = sectionCache; return true;  }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { outValue = _staticPoint; return true;  }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { outValue = _staticRect2; return true;  }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { outValue = _staticRects; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { outValue = _staticMatrix; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { outValue = bitmapsCreated; return true;  }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { outValue = _staticFlxRect; return true;  }
		if (HX_FIELD_EQ(inName,"bitmapFillRect") ) { outValue = bitmapFillRect_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { outValue = useSectionCache; return true;  }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { outValue = _staticFlxRect2; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { outValue = _staticPointZero; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRectFromString") ) { outValue = getRectFromString_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { outValue = paintBitmapSection_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { outValue = paintCompoundBitmap_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getRectIntsFromString") ) { outValue = getRectIntsFromString_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxUI9SliceSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_slice9") ) { _slice9=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { _asset_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { _bmpCanvas=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { _raw_pixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { if (inCallProp == hx::paccAlways) return set_resize_ratio(inValue);resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { if (inCallProp == hx::paccAlways) return set_resize_point(inValue);resize_point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUI9SliceSprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { _staticRect=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { _staticPoint=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { _staticRect2=ioValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { _staticRects=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { _staticMatrix=ioValue.Cast< ::openfl::_legacy::geom::Matrix >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { bitmapsCreated=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { _staticFlxRect=ioValue.Cast< ::flixel::util::FlxRect >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { useSectionCache=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { _staticFlxRect2=ioValue.Cast< ::flixel::util::FlxRect >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { _staticPointZero=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
	}
	return false;
}

void FlxUI9SliceSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_bmpCanvas","\xbe","\x02","\xc2","\x94"));
	outFields->push(HX_HCSTRING("_slice9","\x46","\x15","\x7b","\xde"));
	outFields->push(HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_smooth","\xcd","\x19","\xe2","\x75"));
	outFields->push(HX_HCSTRING("_asset_id","\x69","\xd5","\x4f","\x11"));
	outFields->push(HX_HCSTRING("_raw_pixels","\x03","\x05","\xc0","\xf2"));
	outFields->push(HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"));
	outFields->push(HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_bmpCanvas),HX_HCSTRING("_bmpCanvas","\xbe","\x02","\xc2","\x94")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_slice9),HX_HCSTRING("_slice9","\x46","\x15","\x7b","\xde")},
	{hx::fsInt,(int)offsetof(FlxUI9SliceSprite_obj,_tile),HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00")},
	{hx::fsBool,(int)offsetof(FlxUI9SliceSprite_obj,_smooth),HX_HCSTRING("_smooth","\xcd","\x19","\xe2","\x75")},
	{hx::fsString,(int)offsetof(FlxUI9SliceSprite_obj,_asset_id),HX_HCSTRING("_asset_id","\x69","\xd5","\x4f","\x11")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_raw_pixels),HX_HCSTRING("_raw_pixels","\x03","\x05","\xc0","\xf2")},
	{hx::fsFloat,(int)offsetof(FlxUI9SliceSprite_obj,resize_ratio),HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUI9SliceSprite_obj,resize_point),HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxUI9SliceSprite_obj::bitmapsCreated,HX_HCSTRING("bitmapsCreated","\xa4","\x38","\xf9","\x81")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &FlxUI9SliceSprite_obj::_canvas,HX_HCSTRING("_canvas","\x77","\x66","\xb9","\x26")},
	{hx::fsBool,(void *) &FlxUI9SliceSprite_obj::useSectionCache,HX_HCSTRING("useSectionCache","\x04","\xcd","\xd1","\x77")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxUI9SliceSprite_obj::sectionCache,HX_HCSTRING("sectionCache","\x1d","\x86","\xf1","\x9f")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxUI9SliceSprite_obj::_staticPoint,HX_HCSTRING("_staticPoint","\xc3","\x3e","\x66","\x41")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxUI9SliceSprite_obj::_staticRect,HX_HCSTRING("_staticRect","\x11","\x12","\xdd","\x7f")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &FlxUI9SliceSprite_obj::_staticRect2,HX_HCSTRING("_staticRect2","\x01","\xbd","\x92","\x61")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &FlxUI9SliceSprite_obj::_staticPointZero,HX_HCSTRING("_staticPointZero","\x8b","\x97","\x4a","\x47")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &FlxUI9SliceSprite_obj::_staticMatrix,HX_HCSTRING("_staticMatrix","\x6e","\xd0","\xaa","\xbc")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(void *) &FlxUI9SliceSprite_obj::_staticFlxRect,HX_HCSTRING("_staticFlxRect","\xe9","\xab","\x12","\xd4")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(void *) &FlxUI9SliceSprite_obj::_staticFlxRect2,HX_HCSTRING("_staticFlxRect2","\x29","\xc0","\x43","\xbc")},
	{hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_NONE,HX_HCSTRING("TILE_NONE","\xa9","\x1c","\x74","\x5c")},
	{hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_BOTH,HX_HCSTRING("TILE_BOTH","\x72","\x92","\x85","\x54")},
	{hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_H,HX_HCSTRING("TILE_H","\xb7","\x8d","\xab","\xd0")},
	{hx::fsInt,(void *) &FlxUI9SliceSprite_obj::TILE_V,HX_HCSTRING("TILE_V","\xc5","\x8d","\xab","\xd0")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxUI9SliceSprite_obj::_staticRects,HX_HCSTRING("_staticRects","\x42","\xbd","\x92","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_bmpCanvas","\xbe","\x02","\xc2","\x94"),
	HX_HCSTRING("_slice9","\x46","\x15","\x7b","\xde"),
	HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"),
	HX_HCSTRING("_smooth","\xcd","\x19","\xe2","\x75"),
	HX_HCSTRING("_asset_id","\x69","\xd5","\x4f","\x11"),
	HX_HCSTRING("_raw_pixels","\x03","\x05","\xc0","\xf2"),
	HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"),
	HX_HCSTRING("set_resize_ratio","\x3d","\x9f","\x65","\xea"),
	HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"),
	HX_HCSTRING("set_resize_point","\x82","\x1e","\xd1","\xcc"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#endif

hx::Class FlxUI9SliceSprite_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("bitmapsCreated","\xa4","\x38","\xf9","\x81"),
	HX_HCSTRING("_canvas","\x77","\x66","\xb9","\x26"),
	HX_HCSTRING("useSectionCache","\x04","\xcd","\xd1","\x77"),
	HX_HCSTRING("sectionCache","\x1d","\x86","\xf1","\x9f"),
	HX_HCSTRING("_staticPoint","\xc3","\x3e","\x66","\x41"),
	HX_HCSTRING("_staticRect","\x11","\x12","\xdd","\x7f"),
	HX_HCSTRING("_staticRect2","\x01","\xbd","\x92","\x61"),
	HX_HCSTRING("_staticPointZero","\x8b","\x97","\x4a","\x47"),
	HX_HCSTRING("_staticMatrix","\x6e","\xd0","\xaa","\xbc"),
	HX_HCSTRING("_staticFlxRect","\xe9","\xab","\x12","\xd4"),
	HX_HCSTRING("_staticFlxRect2","\x29","\xc0","\x43","\xbc"),
	HX_HCSTRING("TILE_NONE","\xa9","\x1c","\x74","\x5c"),
	HX_HCSTRING("TILE_BOTH","\x72","\x92","\x85","\x54"),
	HX_HCSTRING("TILE_H","\xb7","\x8d","\xab","\xd0"),
	HX_HCSTRING("TILE_V","\xc5","\x8d","\xab","\xd0"),
	HX_HCSTRING("_staticRects","\x42","\xbd","\x92","\x61"),
	HX_HCSTRING("getRectFromString","\x55","\x83","\x89","\xc5"),
	HX_HCSTRING("getRectIntsFromString","\x19","\xc6","\x60","\x39"),
	HX_HCSTRING("paintScale9","\xad","\xa0","\xab","\x9e"),
	HX_HCSTRING("paintCompoundBitmap","\xf8","\x4d","\x40","\x4e"),
	HX_HCSTRING("paintBitmapSection","\x38","\x37","\xda","\xed"),
	HX_HCSTRING("bitmapFillRect","\x56","\x18","\xff","\x37"),
	::String(null()) };

void FlxUI9SliceSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUI9SliceSprite","\x13","\xd2","\x35","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUI9SliceSprite_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxUI9SliceSprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUI9SliceSprite_obj >;
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

void FlxUI9SliceSprite_obj::__boot()
{
	bitmapsCreated= (int)0;
	useSectionCache= true;
	_staticPoint= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	_staticRect= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_staticRect2= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_staticPointZero= ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);
	_staticMatrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
struct _Function_0_1{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",45,0x728ef6ec)
		{
			HX_STACK_LINE(45)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(45)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(45)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(45)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(45)
			::flixel::util::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::flixel::util::FlxPool tmp1 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				::flixel::util::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(45)
				_this->x = X;
				HX_STACK_LINE(45)
				_this->y = Y;
				HX_STACK_LINE(45)
				_this->width = Width;
				HX_STACK_LINE(45)
				_this->height = Height;
				HX_STACK_LINE(45)
				tmp = _this;
			}
			HX_STACK_LINE(45)
			::flixel::util::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(45)
			rect->_inPool = false;
			HX_STACK_LINE(45)
			return rect;
		}
		return null();
	}
};
	_staticFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",46,0x728ef6ec)
		{
			HX_STACK_LINE(46)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(46)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(46)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(46)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(46)
			::flixel::util::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::flixel::util::FlxPool tmp1 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				::flixel::util::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(46)
				::flixel::util::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(46)
				_this->x = X;
				HX_STACK_LINE(46)
				_this->y = Y;
				HX_STACK_LINE(46)
				_this->width = Width;
				HX_STACK_LINE(46)
				_this->height = Height;
				HX_STACK_LINE(46)
				tmp = _this;
			}
			HX_STACK_LINE(46)
			::flixel::util::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(46)
			rect->_inPool = false;
			HX_STACK_LINE(46)
			return rect;
		}
		return null();
	}
};
	_staticFlxRect2= _Function_0_2::Block();
	TILE_NONE= (int)0;
	TILE_BOTH= (int)17;
	TILE_H= (int)16;
	TILE_V= (int)1;
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
