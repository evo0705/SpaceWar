#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_PixelPerfectScaleMode
#include <flixel/system/scaleModes/PixelPerfectScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace _system{
namespace scaleModes{

Void PixelPerfectScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.PixelPerfectScaleMode","new",0xef519ddd,"flixel.system.scaleModes.PixelPerfectScaleMode.new","flixel/system/scaleModes/PixelPerfectScaleMode.hx",9,0xeb6fe914)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//PixelPerfectScaleMode_obj::~PixelPerfectScaleMode_obj() { }

Dynamic PixelPerfectScaleMode_obj::__CreateEmpty() { return  new PixelPerfectScaleMode_obj; }
hx::ObjectPtr< PixelPerfectScaleMode_obj > PixelPerfectScaleMode_obj::__new()
{  hx::ObjectPtr< PixelPerfectScaleMode_obj > _result_ = new PixelPerfectScaleMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic PixelPerfectScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PixelPerfectScaleMode_obj > _result_ = new PixelPerfectScaleMode_obj();
	_result_->__construct();
	return _result_;}

Void PixelPerfectScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.PixelPerfectScaleMode","updateGameSize",0x7b076e9f,"flixel.system.scaleModes.PixelPerfectScaleMode.updateGameSize","flixel/system/scaleModes/PixelPerfectScaleMode.hx",12,0xeb6fe914)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(13)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		Float scaleFactorX = tmp2;		HX_STACK_VAR(scaleFactorX,"scaleFactorX");
		HX_STACK_LINE(14)
		int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(14)
		Float scaleFactorY = tmp5;		HX_STACK_VAR(scaleFactorY,"scaleFactorY");
		HX_STACK_LINE(15)
		Float tmp6 = scaleFactorX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		Float tmp7 = scaleFactorY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(15)
		Float tmp8 = ::Math_obj::min(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(15)
		int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(15)
		int scaleFactor = tmp9;		HX_STACK_VAR(scaleFactor,"scaleFactor");
		HX_STACK_LINE(18)
		bool tmp10 = (scaleFactor < (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(18)
		if ((tmp10)){
			HX_STACK_LINE(18)
			scaleFactor = (int)1;
		}
		HX_STACK_LINE(20)
		::flixel::util::FlxPoint tmp11 = this->gameSize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(20)
		int tmp12 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(20)
		int tmp13 = scaleFactor;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(20)
		int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(20)
		tmp11->set_x(tmp14);
		HX_STACK_LINE(21)
		::flixel::util::FlxPoint tmp15 = this->gameSize;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(21)
		int tmp16 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(21)
		int tmp17 = scaleFactor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(21)
		int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(21)
		tmp15->set_y(tmp18);
	}
return null();
}



PixelPerfectScaleMode_obj::PixelPerfectScaleMode_obj()
{
}

Dynamic PixelPerfectScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelPerfectScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelPerfectScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class PixelPerfectScaleMode_obj::__mClass;

void PixelPerfectScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.PixelPerfectScaleMode","\x6b","\x6b","\xa4","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PixelPerfectScaleMode_obj >;
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
