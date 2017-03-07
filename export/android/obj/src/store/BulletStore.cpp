#include <hxcpp.h>

#ifndef INCLUDED_BulletProperties
#include <BulletProperties.h>
#endif
#ifndef INCLUDED_ShotPattern
#include <ShotPattern.h>
#endif
#ifndef INCLUDED_store_BulletStore
#include <store/BulletStore.h>
#endif
namespace store{

Void BulletStore_obj::__construct()
{
HX_STACK_FRAME("store.BulletStore","new",0x42fdc004,"store.BulletStore.new","store/BulletStore.hx",17,0xcd88cbad)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BulletStore_obj::~BulletStore_obj() { }

Dynamic BulletStore_obj::__CreateEmpty() { return  new BulletStore_obj; }
hx::ObjectPtr< BulletStore_obj > BulletStore_obj::__new()
{  hx::ObjectPtr< BulletStore_obj > _result_ = new BulletStore_obj();
	_result_->__construct();
	return _result_;}

Dynamic BulletStore_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BulletStore_obj > _result_ = new BulletStore_obj();
	_result_->__construct();
	return _result_;}

::BulletProperties BulletStore_obj::Blaster( ){
	HX_STACK_FRAME("store.BulletStore","Blaster",0x8ad253a9,"store.BulletStore.Blaster","store/BulletStore.hx",21,0xcd88cbad)
	HX_STACK_LINE(22)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::BulletProperties tmp1 = ::BulletProperties_obj::__new(HX_HCSTRING("Blaster","\x05","\xc2","\x4d","\x0d"),HX_HCSTRING("assets/images/bullet_0001.png","\x4e","\xb3","\xba","\xbd"),Array_obj< ::Dynamic >::__new().Add(tmp),(int)1,(int)5,(int)500,(int)500,(int)0,(int)0,(int)18,(int)48,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,Blaster,return )

::BulletProperties BulletStore_obj::TurboBlaster( ){
	HX_STACK_FRAME("store.BulletStore","TurboBlaster",0x0a0cc9e3,"store.BulletStore.TurboBlaster","store/BulletStore.hx",26,0xcd88cbad)
	HX_STACK_LINE(27)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)6,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::ShotPattern tmp1 = ::ShotPattern_obj::__new((int)3,(int)-16,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	::ShotPattern tmp2 = ::ShotPattern_obj::__new((int)0,(int)-32,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::ShotPattern tmp3 = ::ShotPattern_obj::__new((int)-3,(int)-16,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	::ShotPattern tmp4 = ::ShotPattern_obj::__new((int)-6,(int)0,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	::BulletProperties tmp5 = ::BulletProperties_obj::__new(HX_HCSTRING("Turbo Blaster","\xa3","\x7b","\x7c","\x99"),HX_HCSTRING("assets/images/b-0001.png","\xb2","\x99","\xc9","\xec"),Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4),(int)1,(int)5,(int)700,(int)200,(int)0,(int)0,(int)7,(int)48,(int)1,Array_obj< int >::__new().Add((int)0),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,TurboBlaster,return )

::BulletProperties BulletStore_obj::Shocker( ){
	HX_STACK_FRAME("store.BulletStore","Shocker",0xb953a5d3,"store.BulletStore.Shocker","store/BulletStore.hx",31,0xcd88cbad)
	HX_STACK_LINE(32)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::BulletProperties tmp1 = ::BulletProperties_obj::__new(HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b"),HX_HCSTRING("assets/images/bullet_0002.png","\xcf","\x47","\x21","\x51"),Array_obj< ::Dynamic >::__new().Add(tmp),(int)1,(int)5,(int)500,(int)1000,(int)0,(int)0,(int)18,(int)48,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,Shocker,return )

::BulletProperties BulletStore_obj::TurboShocker( ){
	HX_STACK_FRAME("store.BulletStore","TurboShocker",0x388e1c0d,"store.BulletStore.TurboShocker","store/BulletStore.hx",36,0xcd88cbad)
	HX_STACK_LINE(37)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::BulletProperties tmp1 = ::BulletProperties_obj::__new(HX_HCSTRING("Turbo Shocker","\xcd","\xcd","\xfd","\xc7"),HX_HCSTRING("assets/images/bullet_0002.png","\xcf","\x47","\x21","\x51"),Array_obj< ::Dynamic >::__new().Add(tmp),(int)1,(int)5,(int)600,(int)800,(int)0,(int)0,(int)18,(int)48,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,TurboShocker,return )

::BulletProperties BulletStore_obj::Nova( ){
	HX_STACK_FRAME("store.BulletStore","Nova",0x45eb05a8,"store.BulletStore.Nova","store/BulletStore.hx",41,0xcd88cbad)
	HX_STACK_LINE(42)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::ShotPattern tmp1 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-180);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::ShotPattern tmp2 = ::ShotPattern_obj::__new((int)0,(int)0,(int)45);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	::ShotPattern tmp3 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-45);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	::ShotPattern tmp4 = ::ShotPattern_obj::__new((int)0,(int)0,(int)90);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	::ShotPattern tmp5 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-90);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	::ShotPattern tmp6 = ::ShotPattern_obj::__new((int)0,(int)0,(int)125);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	::ShotPattern tmp7 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-125);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	::BulletProperties tmp8 = ::BulletProperties_obj::__new(HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33"),HX_HCSTRING("assets/images/green_fire.png","\x18","\xc9","\x09","\xa1"),Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7),(int)1,(int)5,(int)300,(int)3000,(int)0,(int)0,(int)18,(int)55,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,Nova,return )

::BulletProperties BulletStore_obj::UltraNova( ){
	HX_STACK_FRAME("store.BulletStore","UltraNova",0xfaa1c17c,"store.BulletStore.UltraNova","store/BulletStore.hx",47,0xcd88cbad)
	HX_STACK_LINE(48)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::ShotPattern tmp1 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-180);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	::ShotPattern tmp2 = ::ShotPattern_obj::__new((int)0,(int)0,(int)45);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	::ShotPattern tmp3 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-45);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	::ShotPattern tmp4 = ::ShotPattern_obj::__new((int)0,(int)0,(int)67);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	::ShotPattern tmp5 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-67);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	::ShotPattern tmp6 = ::ShotPattern_obj::__new((int)0,(int)0,(int)22);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	::ShotPattern tmp7 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-22);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	::ShotPattern tmp8 = ::ShotPattern_obj::__new((int)0,(int)0,(int)90);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	::ShotPattern tmp9 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-90);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	::ShotPattern tmp10 = ::ShotPattern_obj::__new((int)0,(int)0,(int)125);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	::ShotPattern tmp11 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-125);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(51)
	::ShotPattern tmp12 = ::ShotPattern_obj::__new((int)0,(int)0,(int)104);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(51)
	::ShotPattern tmp13 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-104);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(51)
	::ShotPattern tmp14 = ::ShotPattern_obj::__new((int)0,(int)0,(int)147);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(51)
	::ShotPattern tmp15 = ::ShotPattern_obj::__new((int)0,(int)0,(int)-147);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(48)
	::BulletProperties tmp16 = ::BulletProperties_obj::__new(HX_HCSTRING("Ultra Nova","\x60","\x87","\x50","\xaf"),HX_HCSTRING("assets/images/green_fire.png","\x18","\xc9","\x09","\xa1"),Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7).Add(tmp8).Add(tmp9).Add(tmp10).Add(tmp11).Add(tmp12).Add(tmp13).Add(tmp14).Add(tmp15),(int)1,(int)5,(int)300,(int)3000,(int)0,(int)0,(int)18,(int)55,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(48)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,UltraNova,return )

::BulletProperties BulletStore_obj::MachineGunClockwise( ){
	HX_STACK_FRAME("store.BulletStore","MachineGunClockwise",0x5d6224fd,"store.BulletStore.MachineGunClockwise","store/BulletStore.hx",55,0xcd88cbad)
	HX_STACK_LINE(56)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::BulletProperties tmp1 = ::BulletProperties_obj::__new(HX_HCSTRING("Machine Gun","\x27","\xbd","\x5c","\xb5"),HX_HCSTRING("assets/images/green_fire.png","\x18","\xc9","\x09","\xa1"),Array_obj< ::Dynamic >::__new().Add(tmp),(int)1,(int)3,(int)500,(int)300,(int)0,(int)0,(int)18,(int)55,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),(int)10,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,MachineGunClockwise,return )

::BulletProperties BulletStore_obj::MachineGunAntiClockwise( ){
	HX_STACK_FRAME("store.BulletStore","MachineGunAntiClockwise",0xba01527b,"store.BulletStore.MachineGunAntiClockwise","store/BulletStore.hx",60,0xcd88cbad)
	HX_STACK_LINE(61)
	::ShotPattern tmp = ::ShotPattern_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::BulletProperties tmp1 = ::BulletProperties_obj::__new(HX_HCSTRING("Machine Gun","\x27","\xbd","\x5c","\xb5"),HX_HCSTRING("assets/images/green_fire.png","\x18","\xc9","\x09","\xa1"),Array_obj< ::Dynamic >::__new().Add(tmp),(int)1,(int)3,(int)500,(int)300,(int)0,(int)0,(int)18,(int)55,((Float).7),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),(int)10,(int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BulletStore_obj,MachineGunAntiClockwise,return )


BulletStore_obj::BulletStore_obj()
{
}

bool BulletStore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Nova") ) { outValue = Nova_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Blaster") ) { outValue = Blaster_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"Shocker") ) { outValue = Shocker_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"UltraNova") ) { outValue = UltraNova_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TurboBlaster") ) { outValue = TurboBlaster_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TurboShocker") ) { outValue = TurboShocker_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MachineGunClockwise") ) { outValue = MachineGunClockwise_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MachineGunAntiClockwise") ) { outValue = MachineGunAntiClockwise_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BulletStore_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BulletStore_obj::__mClass,"__mClass");
};

#endif

hx::Class BulletStore_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Blaster","\x05","\xc2","\x4d","\x0d"),
	HX_HCSTRING("TurboBlaster","\x07","\xce","\x37","\xb4"),
	HX_HCSTRING("Shocker","\x2f","\x14","\xcf","\x3b"),
	HX_HCSTRING("TurboShocker","\x31","\x20","\xb9","\xe2"),
	HX_HCSTRING("Nova","\xcc","\x45","\xe3","\x33"),
	HX_HCSTRING("UltraNova","\xd8","\x7e","\x9a","\xa5"),
	HX_HCSTRING("MachineGunClockwise","\x59","\xad","\x77","\xf3"),
	HX_HCSTRING("MachineGunAntiClockwise","\xd7","\x38","\x58","\xf6"),
	::String(null()) };

void BulletStore_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("store.BulletStore","\x12","\xae","\x1c","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BulletStore_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BulletStore_obj >;
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
