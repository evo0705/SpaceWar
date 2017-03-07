#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_StageSizeScaleMode
#include <flixel/system/scaleModes/StageSizeScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
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
namespace flixel{
namespace _system{
namespace scaleModes{

Void StageSizeScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.StageSizeScaleMode","new",0x27e1f43b,"flixel.system.scaleModes.StageSizeScaleMode.new","flixel/system/scaleModes/StageSizeScaleMode.hx",5,0x13b5e814)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//StageSizeScaleMode_obj::~StageSizeScaleMode_obj() { }

Dynamic StageSizeScaleMode_obj::__CreateEmpty() { return  new StageSizeScaleMode_obj; }
hx::ObjectPtr< StageSizeScaleMode_obj > StageSizeScaleMode_obj::__new()
{  hx::ObjectPtr< StageSizeScaleMode_obj > _result_ = new StageSizeScaleMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic StageSizeScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageSizeScaleMode_obj > _result_ = new StageSizeScaleMode_obj();
	_result_->__construct();
	return _result_;}

Void StageSizeScaleMode_obj::onMeasure( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.StageSizeScaleMode","onMeasure",0x5cbbae1a,"flixel.system.scaleModes.StageSizeScaleMode.onMeasure","flixel/system/scaleModes/StageSizeScaleMode.hx",8,0x13b5e814)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(9)
		::flixel::FlxG_obj::width = Width;
		HX_STACK_LINE(10)
		::flixel::FlxG_obj::height = Height;
		HX_STACK_LINE(12)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		Float tmp2 = tmp1->set_scaleY((int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		tmp->set_scaleX(tmp2);
		HX_STACK_LINE(13)
		::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13)
		Float tmp5 = tmp4->set_y((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		tmp3->set_x(tmp5);
		HX_STACK_LINE(15)
		::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(15)
		if ((tmp7)){
			HX_STACK_LINE(17)
			::flixel::FlxCamera tmp8 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			int oldW = tmp8->width;		HX_STACK_VAR(oldW,"oldW");
			HX_STACK_LINE(18)
			::flixel::FlxCamera tmp9 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(18)
			int oldH = tmp9->height;		HX_STACK_VAR(oldH,"oldH");
			HX_STACK_LINE(20)
			int tmp10 = Width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(20)
			::flixel::FlxCamera tmp11 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(20)
			Float tmp12 = tmp11->zoom;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			int tmp14 = ::Math_obj::ceil(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			int newW = tmp14;		HX_STACK_VAR(newW,"newW");
			HX_STACK_LINE(21)
			int tmp15 = Height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(21)
			::flixel::FlxCamera tmp16 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(21)
			Float tmp17 = tmp16->zoom;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(21)
			Float tmp18 = (Float(tmp15) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(21)
			int tmp19 = ::Math_obj::ceil(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(21)
			int newH = tmp19;		HX_STACK_VAR(newH,"newH");
			HX_STACK_LINE(23)
			{
				HX_STACK_LINE(23)
				::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(23)
				::flixel::FlxCamera _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(23)
				int tmp21 = newW;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(23)
				_this->set_width(tmp21);
				HX_STACK_LINE(23)
				int tmp22 = newH;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(23)
				_this->set_height(tmp22);
			}
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(24)
				::openfl::_legacy::display::Sprite _g = tmp20->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(24)
				Float tmp21 = _g->get_x();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(24)
				int tmp22 = (newW - oldW);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(24)
				Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(24)
				Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(24)
				_g->set_x(tmp24);
			}
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::flixel::FlxCamera tmp20 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(25)
				::openfl::_legacy::display::Sprite _g = tmp20->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(25)
				Float tmp21 = _g->get_y();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(25)
				int tmp22 = (newH - oldH);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(25)
				Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(25)
				Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(25)
				_g->set_y(tmp24);
			}
		}
	}
return null();
}



StageSizeScaleMode_obj::StageSizeScaleMode_obj()
{
}

Dynamic StageSizeScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return onMeasure_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageSizeScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageSizeScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class StageSizeScaleMode_obj::__mClass;

void StageSizeScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.StageSizeScaleMode","\xc9","\xba","\xb6","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StageSizeScaleMode_obj >;
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
} // end namespace system
} // end namespace scaleModes
