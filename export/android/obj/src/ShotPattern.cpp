#include <hxcpp.h>

#ifndef INCLUDED_ShotPattern
#include <ShotPattern.h>
#endif

Void ShotPattern_obj::__construct(Float OffsetX,Float OffsetY,int OffsetAngle)
{
HX_STACK_FRAME("ShotPattern","new",0x80a16848,"ShotPattern.new","Weapon.hx",852,0xfcdf3d42)
HX_STACK_THIS(this)
HX_STACK_ARG(OffsetX,"OffsetX")
HX_STACK_ARG(OffsetY,"OffsetY")
HX_STACK_ARG(OffsetAngle,"OffsetAngle")
{
	HX_STACK_LINE(853)
	this->offsetX = OffsetX;
	HX_STACK_LINE(853)
	this->offsetY = OffsetY;
	HX_STACK_LINE(853)
	this->offsetAngle = OffsetAngle;
}
;
	return null();
}

//ShotPattern_obj::~ShotPattern_obj() { }

Dynamic ShotPattern_obj::__CreateEmpty() { return  new ShotPattern_obj; }
hx::ObjectPtr< ShotPattern_obj > ShotPattern_obj::__new(Float OffsetX,Float OffsetY,int OffsetAngle)
{  hx::ObjectPtr< ShotPattern_obj > _result_ = new ShotPattern_obj();
	_result_->__construct(OffsetX,OffsetY,OffsetAngle);
	return _result_;}

Dynamic ShotPattern_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShotPattern_obj > _result_ = new ShotPattern_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


ShotPattern_obj::ShotPattern_obj()
{
}

Dynamic ShotPattern_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { return offsetAngle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShotPattern_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { offsetAngle=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ShotPattern_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ShotPattern_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetAngle","\x40","\xc7","\x62","\xbb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ShotPattern_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(ShotPattern_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(ShotPattern_obj,offsetAngle),HX_HCSTRING("offsetAngle","\x40","\xc7","\x62","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetAngle","\x40","\xc7","\x62","\xbb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShotPattern_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShotPattern_obj::__mClass,"__mClass");
};

#endif

hx::Class ShotPattern_obj::__mClass;

void ShotPattern_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ShotPattern","\x56","\xe4","\xad","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ShotPattern_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShotPattern_obj >;
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

