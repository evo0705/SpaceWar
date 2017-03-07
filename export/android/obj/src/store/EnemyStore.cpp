#include <hxcpp.h>

#ifndef INCLUDED_BulletProperties
#include <BulletProperties.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_WeaponHost
#include <WeaponHost.h>
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_store_BulletStore
#include <store/BulletStore.h>
#endif
#ifndef INCLUDED_store_EnemyStore
#include <store/EnemyStore.h>
#endif
namespace store{

Void EnemyStore_obj::__construct()
{
HX_STACK_FRAME("store.EnemyStore","new",0x43eeb7f8,"store.EnemyStore.new","store/EnemyStore.hx",16,0xbe63c1d7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//EnemyStore_obj::~EnemyStore_obj() { }

Dynamic EnemyStore_obj::__CreateEmpty() { return  new EnemyStore_obj; }
hx::ObjectPtr< EnemyStore_obj > EnemyStore_obj::__new()
{  hx::ObjectPtr< EnemyStore_obj > _result_ = new EnemyStore_obj();
	_result_->__construct();
	return _result_;}

Dynamic EnemyStore_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyStore_obj > _result_ = new EnemyStore_obj();
	_result_->__construct();
	return _result_;}

::Ship EnemyStore_obj::Wolf( ){
	HX_STACK_FRAME("store.EnemyStore","Wolf",0x1dc5e61a,"store.EnemyStore.Wolf","store/EnemyStore.hx",20,0xbe63c1d7)
	HX_STACK_LINE(21)
	::Ship tmp = ::Ship_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/ship_0001.png","\x54","\xef","\xd8","\x93"),false,true,null(),(int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::Ship ship = tmp;		HX_STACK_VAR(ship,"ship");
	HX_STACK_LINE(22)
	::Ship tmp1 = ship;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::flixel::util::FlxPoint tmp2 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)-36);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::WeaponHost tmp3 = ::WeaponHost_obj::__new(HX_HCSTRING("Gun","\x60","\x46","\x36","\x00"),tmp1,HX_HCSTRING("assets/images/firing_host.png","\xe4","\xdb","\x6a","\xaf"),tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::WeaponHost weaponHost = tmp3;		HX_STACK_VAR(weaponHost,"weaponHost");
	HX_STACK_LINE(23)
	Dynamic tmp4 = ::Reflect_obj::field(hx::ClassOf< ::store::BulletStore >(),HX_HCSTRING("MachineGunClockwise","\x59","\xad","\x77","\xf3"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	Dynamic tmp5 = ::Reflect_obj::callMethod(hx::ClassOf< ::store::BulletStore >(),tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	Dynamic tmp6 = ::Reflect_obj::field(hx::ClassOf< ::store::BulletStore >(),HX_HCSTRING("MachineGunAntiClockwise","\xd7","\x38","\x58","\xf6"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	Dynamic tmp7 = ::Reflect_obj::callMethod(hx::ClassOf< ::store::BulletStore >(),tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	::BulletProperties tmp8 = ::flixel::util::FlxRandom_obj::getObject_BulletProperties(Array_obj< ::Dynamic >::__new().Add(tmp5).Add(tmp7),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(23)
	weaponHost->setWeaponBullet(tmp8);
	HX_STACK_LINE(24)
	::WeaponHost tmp9 = weaponHost;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	ship->weapons->add(tmp9);
	HX_STACK_LINE(25)
	::Ship tmp10 = ship;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(25)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EnemyStore_obj,Wolf,return )

::Ship EnemyStore_obj::Rhino( ){
	HX_STACK_FRAME("store.EnemyStore","Rhino",0x09bfcc6c,"store.EnemyStore.Rhino","store/EnemyStore.hx",28,0xbe63c1d7)
	HX_STACK_LINE(29)
	::Ship tmp = ::Ship_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/ship_0001.png","\x54","\xef","\xd8","\x93"),false,true,null(),(int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::Ship ship = tmp;		HX_STACK_VAR(ship,"ship");
	HX_STACK_LINE(30)
	::Ship tmp1 = ship;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::flixel::util::FlxPoint tmp2 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)-36);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::WeaponHost tmp3 = ::WeaponHost_obj::__new(HX_HCSTRING("Gun","\x60","\x46","\x36","\x00"),tmp1,HX_HCSTRING("assets/images/firing_host.png","\xe4","\xdb","\x6a","\xaf"),tmp2,true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::WeaponHost weaponHost = tmp3;		HX_STACK_VAR(weaponHost,"weaponHost");
	HX_STACK_LINE(31)
	Dynamic tmp4 = ::Reflect_obj::field(hx::ClassOf< ::store::BulletStore >(),HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Dynamic tmp5 = ::Reflect_obj::callMethod(hx::ClassOf< ::store::BulletStore >(),tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	weaponHost->setWeaponBullet(tmp5);
	HX_STACK_LINE(32)
	::WeaponHost tmp6 = weaponHost;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	ship->weapons->add(tmp6);
	HX_STACK_LINE(33)
	::Ship tmp7 = ship;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(EnemyStore_obj,Rhino,return )


EnemyStore_obj::EnemyStore_obj()
{
}

bool EnemyStore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Wolf") ) { outValue = Wolf_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Rhino") ) { outValue = Rhino_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyStore_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyStore_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyStore_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39"),
	HX_HCSTRING("Rhino","\xd4","\xce","\xe9","\x7b"),
	::String(null()) };

void EnemyStore_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("store.EnemyStore","\x06","\x9c","\xcd","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EnemyStore_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EnemyStore_obj >;
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

} // end namespace store
