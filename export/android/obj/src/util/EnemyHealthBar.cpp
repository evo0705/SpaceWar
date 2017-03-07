#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Ship
#include <Ship.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_util_EnemyHealthBar
#include <util/EnemyHealthBar.h>
#endif
namespace util{

Void EnemyHealthBar_obj::__construct(::Ship Parent)
{
HX_STACK_FRAME("util.EnemyHealthBar","new",0xdf5becad,"util.EnemyHealthBar.new","util/EnemyHealthBar.hx",16,0x4832f642)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(17)
	Float tmp = Parent->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = Parent->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	Float tmp2 = Parent->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	::Ship tmp4 = Parent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	Float tmp5 = Parent->maxHealth;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	::flixel::ui::FlxBar tmp6 = ::flixel::ui::FlxBar_obj::__new(tmp,tmp1,(int)1,tmp3,(int)4,tmp4,HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),(int)0,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	this->bar = tmp6;
	HX_STACK_LINE(18)
	::flixel::ui::FlxBar tmp7 = this->bar;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(18)
	tmp7->createFilledBar((int)-370600,(int)-16654476,null(),null());
	HX_STACK_LINE(19)
	::flixel::ui::FlxBar tmp8 = this->bar;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(19)
	tmp8->trackParent((int)0,(int)-10);
	HX_STACK_LINE(20)
	::flixel::ui::FlxBar tmp9 = this->bar;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(20)
	tmp9->set_exists(false);
}
;
	return null();
}

//EnemyHealthBar_obj::~EnemyHealthBar_obj() { }

Dynamic EnemyHealthBar_obj::__CreateEmpty() { return  new EnemyHealthBar_obj; }
hx::ObjectPtr< EnemyHealthBar_obj > EnemyHealthBar_obj::__new(::Ship Parent)
{  hx::ObjectPtr< EnemyHealthBar_obj > _result_ = new EnemyHealthBar_obj();
	_result_->__construct(Parent);
	return _result_;}

Dynamic EnemyHealthBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyHealthBar_obj > _result_ = new EnemyHealthBar_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


EnemyHealthBar_obj::EnemyHealthBar_obj()
{
}

void EnemyHealthBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnemyHealthBar);
	HX_MARK_MEMBER_NAME(bar,"bar");
	HX_MARK_END_CLASS();
}

void EnemyHealthBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bar,"bar");
}

Dynamic EnemyHealthBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { return bar; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyHealthBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool EnemyHealthBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void EnemyHealthBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(EnemyHealthBar_obj,bar),HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyHealthBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyHealthBar_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyHealthBar_obj::__mClass;

void EnemyHealthBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.EnemyHealthBar","\x3b","\x12","\x0b","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &EnemyHealthBar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyHealthBar_obj >;
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

} // end namespace util
