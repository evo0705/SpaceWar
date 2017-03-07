#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_FillScaleMode
#include <flixel/system/scaleModes/FillScaleMode.h>
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

Void FillScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.FillScaleMode","new",0x3d6ffc01,"flixel.system.scaleModes.FillScaleMode.new","flixel/system/scaleModes/FillScaleMode.hx",5,0xb4555270)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//FillScaleMode_obj::~FillScaleMode_obj() { }

Dynamic FillScaleMode_obj::__CreateEmpty() { return  new FillScaleMode_obj; }
hx::ObjectPtr< FillScaleMode_obj > FillScaleMode_obj::__new()
{  hx::ObjectPtr< FillScaleMode_obj > _result_ = new FillScaleMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic FillScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FillScaleMode_obj > _result_ = new FillScaleMode_obj();
	_result_->__construct();
	return _result_;}

Void FillScaleMode_obj::updateGamePosition( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.FillScaleMode","updateGamePosition",0xbc8edfe3,"flixel.system.scaleModes.FillScaleMode.updateGamePosition","flixel/system/scaleModes/FillScaleMode.hx",8,0xb4555270)
		HX_STACK_THIS(this)
		HX_STACK_LINE(9)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(9)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9)
		Float tmp2 = tmp1->set_y((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		tmp->set_x(tmp2);
	}
return null();
}



FillScaleMode_obj::FillScaleMode_obj()
{
}

Dynamic FillScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamePosition") ) { return updateGamePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("updateGamePosition","\x64","\xce","\xf8","\x7d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FillScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class FillScaleMode_obj::__mClass;

void FillScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.FillScaleMode","\x8f","\xe7","\xe7","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FillScaleMode_obj >;
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
