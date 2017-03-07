#include <hxcpp.h>

#ifndef INCLUDED_store_EnemyTypes
#include <store/EnemyTypes.h>
#endif
namespace store{

::store::EnemyTypes EnemyTypes_obj::Wolf;

HX_DEFINE_CREATE_ENUM(EnemyTypes_obj)

int EnemyTypes_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39")) return 0;
	return super::__FindIndex(inName);
}

int EnemyTypes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnemyTypes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39")) return Wolf;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyTypes_obj::Wolf,"Wolf");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyTypes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnemyTypes_obj::Wolf,"Wolf");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnemyTypes_obj::__mClass;

Dynamic __Create_EnemyTypes_obj() { return new EnemyTypes_obj; }

void EnemyTypes_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("store.EnemyTypes","\x9e","\xf8","\x82","\x5a"), hx::TCanCast< EnemyTypes_obj >,sStaticFields,sMemberFields,
	&__Create_EnemyTypes_obj, &__Create,
	&super::__SGetClass(), &CreateEnemyTypes_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnemyTypes_obj::__boot()
{
hx::Static(Wolf) = hx::CreateEnum< EnemyTypes_obj >(HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39"),0);
}


} // end namespace store
