#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
#ifndef INCLUDED_utilities_FPS
#include <utilities/FPS.h>
#endif
namespace utilities{

Void FPS_obj::__construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{
HX_STACK_FRAME("utilities.FPS","new",0xc4cd8797,"utilities.FPS.new","utilities/FPS.hx",9,0xdd8d2e7a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inX,"inX")
HX_STACK_ARG(__o_inY,"inY")
HX_STACK_ARG(__o_inCol,"inCol")
Float inX = __o_inX.Default(((Float)10.0));
Float inY = __o_inY.Default(((Float)10.0));
int inCol = __o_inCol.Default(0);
{
	HX_STACK_LINE(12)
	this->memPeak = ((Float)0);
	HX_STACK_LINE(16)
	super::__construct(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(18)
	Float tmp = inX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->set_x(tmp);
	HX_STACK_LINE(19)
	Float tmp1 = inY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->set_y(tmp1);
	HX_STACK_LINE(21)
	this->set_text(HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83"));
	HX_STACK_LINE(22)
	this->set_size((int)12);
	HX_STACK_LINE(24)
	this->times = Array_obj< Float >::__new();
	HX_STACK_LINE(25)
	this->set_width((int)150);
	HX_STACK_LINE(26)
	this->set_height((int)70);
}
;
	return null();
}

//FPS_obj::~FPS_obj() { }

Dynamic FPS_obj::__CreateEmpty() { return  new FPS_obj; }
hx::ObjectPtr< FPS_obj > FPS_obj::__new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY,hx::Null< int >  __o_inCol)
{  hx::ObjectPtr< FPS_obj > _result_ = new FPS_obj();
	_result_->__construct(__o_inX,__o_inY,__o_inCol);
	return _result_;}

Dynamic FPS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FPS_obj > _result_ = new FPS_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FPS_obj::update( ){
{
		HX_STACK_FRAME("utilities.FPS","update",0x2e92eb32,"utilities.FPS.update","utilities/FPS.hx",30,0xdd8d2e7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(32)
		Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		this->times->push(tmp1);
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			Float tmp2 = this->times->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			Float tmp3 = (now - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			if ((tmp5)){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(35)
			this->times->shift();
		}
		HX_STACK_LINE(37)
		int tmp2 = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Float tmp3 = (Float(tmp2) / Float((int)1024));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		Float tmp4 = (Float(tmp3) / Float((int)1024));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Float tmp5 = (tmp4 * (int)100);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		int tmp6 = ::Math_obj::round(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float tmp7 = (Float(tmp6) / Float((int)100));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		Float mem = tmp7;		HX_STACK_VAR(mem,"mem");
		HX_STACK_LINE(38)
		Float tmp8 = mem;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		Float tmp9 = this->memPeak;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		if ((tmp10)){
			HX_STACK_LINE(38)
			this->memPeak = mem;
		}
		HX_STACK_LINE(40)
		bool tmp11 = this->visible;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		if ((tmp11)){
			HX_STACK_LINE(42)
			int tmp12 = this->times->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			::String tmp13 = (HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(42)
			::String tmp14 = (tmp13 + HX_HCSTRING("\nMEM: ","\x91","\x9f","\x42","\x83"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			Float tmp15 = mem;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(42)
			::String tmp17 = (tmp16 + HX_HCSTRING(" MB\nMEM peak: ","\x85","\x3c","\xcd","\x94"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(42)
			Float tmp18 = this->memPeak;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(42)
			::String tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(42)
			::String tmp20 = (tmp19 + HX_HCSTRING(" MB","\x75","\x8b","\x18","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(42)
			this->set_text(tmp20);
		}
		HX_STACK_LINE(44)
		this->super::update();
	}
return null();
}



FPS_obj::FPS_obj()
{
}

void FPS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS);
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(memPeak,"memPeak");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(memPeak,"memPeak");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FPS_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return times; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { return memPeak; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FPS_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { memPeak=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("memPeak","\xd4","\x46","\x8a","\x0e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FPS_obj,times),HX_HCSTRING("times","\xc6","\xbf","\x35","\x10")},
	{hx::fsFloat,(int)offsetof(FPS_obj,memPeak),HX_HCSTRING("memPeak","\xd4","\x46","\x8a","\x0e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("times","\xc6","\xbf","\x35","\x10"),
	HX_HCSTRING("memPeak","\xd4","\x46","\x8a","\x0e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPS_obj::__mClass,"__mClass");
};

#endif

hx::Class FPS_obj::__mClass;

void FPS_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("utilities.FPS","\x25","\x70","\x46","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FPS_obj >;
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

} // end namespace utilities
