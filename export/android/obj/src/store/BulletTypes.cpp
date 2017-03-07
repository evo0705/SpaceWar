#include <hxcpp.h>

#ifndef INCLUDED_store_BulletTypes
#include <store/BulletTypes.h>
#endif
namespace store{

::store::BulletTypes BulletTypes_obj::Nova;

::store::BulletTypes BulletTypes_obj::RedLaser;

::store::BulletTypes BulletTypes_obj::RedLaserTurbo;

::store::BulletTypes BulletTypes_obj::RedLaserTurboPlusOne;

::store::BulletTypes BulletTypes_obj::RedLaserTurboPlusTwo;

::store::BulletTypes BulletTypes_obj::Shocker;

::store::BulletTypes BulletTypes_obj::ShockerTurbo;

::store::BulletTypes BulletTypes_obj::ShockerTurboPlusOne;

::store::BulletTypes BulletTypes_obj::ShockerTurboPlusTwo;

HX_DEFINE_CREATE_ENUM(BulletTypes_obj)

int BulletTypes_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33")) return 8;
	if (inName==HX_HCSTRING("RedLaser","\x5a","\xe1","\xb9","\xb8")) return 0;
	if (inName==HX_HCSTRING("RedLaserTurbo","\x24","\x80","\x4a","\xfc")) return 1;
	if (inName==HX_HCSTRING("RedLaserTurboPlusOne","\x68","\x5b","\x7f","\x9c")) return 2;
	if (inName==HX_HCSTRING("RedLaserTurboPlusTwo","\x8e","\x2e","\x83","\x9c")) return 3;
	if (inName==HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b")) return 4;
	if (inName==HX_HCSTRING("ShockerTurbo","\x2f","\xe9","\x23","\x2f")) return 5;
	if (inName==HX_HCSTRING("ShockerTurboPlusOne","\xbd","\xf9","\xbf","\x8c")) return 6;
	if (inName==HX_HCSTRING("ShockerTurboPlusTwo","\xe3","\xcc","\xc3","\x8c")) return 7;
	return super::__FindIndex(inName);
}

int BulletTypes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33")) return 0;
	if (inName==HX_HCSTRING("RedLaser","\x5a","\xe1","\xb9","\xb8")) return 0;
	if (inName==HX_HCSTRING("RedLaserTurbo","\x24","\x80","\x4a","\xfc")) return 0;
	if (inName==HX_HCSTRING("RedLaserTurboPlusOne","\x68","\x5b","\x7f","\x9c")) return 0;
	if (inName==HX_HCSTRING("RedLaserTurboPlusTwo","\x8e","\x2e","\x83","\x9c")) return 0;
	if (inName==HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b")) return 0;
	if (inName==HX_HCSTRING("ShockerTurbo","\x2f","\xe9","\x23","\x2f")) return 0;
	if (inName==HX_HCSTRING("ShockerTurboPlusOne","\xbd","\xf9","\xbf","\x8c")) return 0;
	if (inName==HX_HCSTRING("ShockerTurboPlusTwo","\xe3","\xcc","\xc3","\x8c")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BulletTypes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33")) return Nova;
	if (inName==HX_HCSTRING("RedLaser","\x5a","\xe1","\xb9","\xb8")) return RedLaser;
	if (inName==HX_HCSTRING("RedLaserTurbo","\x24","\x80","\x4a","\xfc")) return RedLaserTurbo;
	if (inName==HX_HCSTRING("RedLaserTurboPlusOne","\x68","\x5b","\x7f","\x9c")) return RedLaserTurboPlusOne;
	if (inName==HX_HCSTRING("RedLaserTurboPlusTwo","\x8e","\x2e","\x83","\x9c")) return RedLaserTurboPlusTwo;
	if (inName==HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b")) return Shocker;
	if (inName==HX_HCSTRING("ShockerTurbo","\x2f","\xe9","\x23","\x2f")) return ShockerTurbo;
	if (inName==HX_HCSTRING("ShockerTurboPlusOne","\xbd","\xf9","\xbf","\x8c")) return ShockerTurboPlusOne;
	if (inName==HX_HCSTRING("ShockerTurboPlusTwo","\xe3","\xcc","\xc3","\x8c")) return ShockerTurboPlusTwo;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RedLaser","\x5a","\xe1","\xb9","\xb8"),
	HX_HCSTRING("RedLaserTurbo","\x24","\x80","\x4a","\xfc"),
	HX_HCSTRING("RedLaserTurboPlusOne","\x68","\x5b","\x7f","\x9c"),
	HX_HCSTRING("RedLaserTurboPlusTwo","\x8e","\x2e","\x83","\x9c"),
	HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b"),
	HX_HCSTRING("ShockerTurbo","\x2f","\xe9","\x23","\x2f"),
	HX_HCSTRING("ShockerTurboPlusOne","\xbd","\xf9","\xbf","\x8c"),
	HX_HCSTRING("ShockerTurboPlusTwo","\xe3","\xcc","\xc3","\x8c"),
	HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BulletTypes_obj::Nova,"Nova");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::RedLaser,"RedLaser");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::RedLaserTurbo,"RedLaserTurbo");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::RedLaserTurboPlusOne,"RedLaserTurboPlusOne");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::RedLaserTurboPlusTwo,"RedLaserTurboPlusTwo");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::Shocker,"Shocker");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::ShockerTurbo,"ShockerTurbo");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::ShockerTurboPlusOne,"ShockerTurboPlusOne");
	HX_MARK_MEMBER_NAME(BulletTypes_obj::ShockerTurboPlusTwo,"ShockerTurboPlusTwo");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::Nova,"Nova");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::RedLaser,"RedLaser");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::RedLaserTurbo,"RedLaserTurbo");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::RedLaserTurboPlusOne,"RedLaserTurboPlusOne");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::RedLaserTurboPlusTwo,"RedLaserTurboPlusTwo");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::Shocker,"Shocker");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::ShockerTurbo,"ShockerTurbo");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::ShockerTurboPlusOne,"ShockerTurboPlusOne");
	HX_VISIT_MEMBER_NAME(BulletTypes_obj::ShockerTurboPlusTwo,"ShockerTurboPlusTwo");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BulletTypes_obj::__mClass;

Dynamic __Create_BulletTypes_obj() { return new BulletTypes_obj; }

void BulletTypes_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("store.BulletTypes","\xaa","\x0a","\xd2","\x66"), hx::TCanCast< BulletTypes_obj >,sStaticFields,sMemberFields,
	&__Create_BulletTypes_obj, &__Create,
	&super::__SGetClass(), &CreateBulletTypes_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BulletTypes_obj::__boot()
{
hx::Static(Nova) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33"),8);
hx::Static(RedLaser) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("RedLaser","\x5a","\xe1","\xb9","\xb8"),0);
hx::Static(RedLaserTurbo) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("RedLaserTurbo","\x24","\x80","\x4a","\xfc"),1);
hx::Static(RedLaserTurboPlusOne) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("RedLaserTurboPlusOne","\x68","\x5b","\x7f","\x9c"),2);
hx::Static(RedLaserTurboPlusTwo) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("RedLaserTurboPlusTwo","\x8e","\x2e","\x83","\x9c"),3);
hx::Static(Shocker) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b"),4);
hx::Static(ShockerTurbo) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("ShockerTurbo","\x2f","\xe9","\x23","\x2f"),5);
hx::Static(ShockerTurboPlusOne) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("ShockerTurboPlusOne","\xbd","\xf9","\xbf","\x8c"),6);
hx::Static(ShockerTurboPlusTwo) = hx::CreateEnum< BulletTypes_obj >(HX_HCSTRING("ShockerTurboPlusTwo","\xe3","\xcc","\xc3","\x8c"),7);
}


} // end namespace store
