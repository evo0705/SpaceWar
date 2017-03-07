#include <hxcpp.h>

#ifndef INCLUDED__StarField_ClsStar
#include <_StarField/ClsStar.h>
#endif
namespace _StarField{

Void ClsStar_obj::__construct()
{
HX_STACK_FRAME("_StarField.ClsStar","new",0xf74710a9,"_StarField.ClsStar.new","StarField.hx",203,0x0738ec56)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ClsStar_obj::~ClsStar_obj() { }

Dynamic ClsStar_obj::__CreateEmpty() { return  new ClsStar_obj; }
hx::ObjectPtr< ClsStar_obj > ClsStar_obj::__new()
{  hx::ObjectPtr< ClsStar_obj > _result_ = new ClsStar_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClsStar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClsStar_obj > _result_ = new ClsStar_obj();
	_result_->__construct();
	return _result_;}


ClsStar_obj::ClsStar_obj()
{
}

Dynamic ClsStar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClsStar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ClsStar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ClsStar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ClsStar_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsFloat,(int)offsetof(ClsStar_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ClsStar_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ClsStar_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ClsStar_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ClsStar_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClsStar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClsStar_obj::__mClass,"__mClass");
};

#endif

hx::Class ClsStar_obj::__mClass;

void ClsStar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_StarField.ClsStar","\x37","\x88","\x1d","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ClsStar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClsStar_obj >;
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

} // end namespace _StarField
