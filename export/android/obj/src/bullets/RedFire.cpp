#include <hxcpp.h>

#ifndef INCLUDED_bullets_RedFire
#include <bullets/RedFire.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace bullets{

Void RedFire_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("bullets.RedFire","new",0xd972adfc,"bullets.RedFire.new","bullets/RedFire.hx",9,0xcb509035)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(13)
	this->numOfBullets = ((Float)10);
	HX_STACK_LINE(12)
	this->movingSpeed = ((Float)600);
	HX_STACK_LINE(17)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(18)
	this->makeGraphic((int)4,(int)8,(int)-1996554240,null(),null());
}
;
	return null();
}

//RedFire_obj::~RedFire_obj() { }

Dynamic RedFire_obj::__CreateEmpty() { return  new RedFire_obj; }
hx::ObjectPtr< RedFire_obj > RedFire_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< RedFire_obj > _result_ = new RedFire_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic RedFire_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RedFire_obj > _result_ = new RedFire_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void RedFire_obj::update( ){
{
		HX_STACK_FRAME("bullets.RedFire","update",0x2fec11ed,"bullets.RedFire.update","bullets/RedFire.hx",22,0xcb509035)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->super::update();
		HX_STACK_LINE(24)
		::flixel::util::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		Float tmp1 = this->movingSpeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp->set_y(tmp2);
		HX_STACK_LINE(25)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		bool tmp4 = (tmp3 < (int)-10);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		if ((tmp4)){
			HX_STACK_LINE(25)
			this->kill();
			HX_STACK_LINE(25)
			this->set_exists(false);
		}
	}
return null();
}


Void RedFire_obj::destroy( ){
{
		HX_STACK_FRAME("bullets.RedFire","destroy",0x455a0896,"bullets.RedFire.destroy","bullets/RedFire.hx",30,0xcb509035)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::destroy();
	}
return null();
}



RedFire_obj::RedFire_obj()
{
}

Dynamic RedFire_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { return movingSpeed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numOfBullets") ) { return numOfBullets; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RedFire_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { movingSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numOfBullets") ) { numOfBullets=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RedFire_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11"));
	outFields->push(HX_HCSTRING("numOfBullets","\x74","\x98","\x76","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(RedFire_obj,movingSpeed),HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11")},
	{hx::fsFloat,(int)offsetof(RedFire_obj,numOfBullets),HX_HCSTRING("numOfBullets","\x74","\x98","\x76","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11"),
	HX_HCSTRING("numOfBullets","\x74","\x98","\x76","\xdf"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RedFire_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RedFire_obj::__mClass,"__mClass");
};

#endif

hx::Class RedFire_obj::__mClass;

void RedFire_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("bullets.RedFire","\x0a","\x40","\x15","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RedFire_obj >;
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

} // end namespace bullets
