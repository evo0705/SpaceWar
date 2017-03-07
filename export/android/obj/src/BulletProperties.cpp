#include <hxcpp.h>

#ifndef INCLUDED_BulletProperties
#include <BulletProperties.h>
#endif
#ifndef INCLUDED_ShotPattern
#include <ShotPattern.h>
#endif

Void BulletProperties_obj::__construct(::String Name,Dynamic SimpleGraphic,Array< ::Dynamic > ShotPatt,hx::Null< Float >  __o_MinDamage,hx::Null< Float >  __o_MaxDamage,hx::Null< int >  __o_Speed,hx::Null< int >  __o_FireRate,hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,int FrameWidth,int FrameHeight,hx::Null< Float >  __o_Alpha,Array< int > Frames,Dynamic __o_FrameRate,Dynamic __o_Rotation)
{
HX_STACK_FRAME("BulletProperties","new",0x150f5467,"BulletProperties.new","Weapon.hx",876,0xfcdf3d42)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(ShotPatt,"ShotPatt")
HX_STACK_ARG(__o_MinDamage,"MinDamage")
HX_STACK_ARG(__o_MaxDamage,"MaxDamage")
HX_STACK_ARG(__o_Speed,"Speed")
HX_STACK_ARG(__o_FireRate,"FireRate")
HX_STACK_ARG(__o_RandomAngle,"RandomAngle")
HX_STACK_ARG(__o_RandomSpeed,"RandomSpeed")
HX_STACK_ARG(FrameWidth,"FrameWidth")
HX_STACK_ARG(FrameHeight,"FrameHeight")
HX_STACK_ARG(__o_Alpha,"Alpha")
HX_STACK_ARG(Frames,"Frames")
HX_STACK_ARG(__o_FrameRate,"FrameRate")
HX_STACK_ARG(__o_Rotation,"Rotation")
Float MinDamage = __o_MinDamage.Default(0);
Float MaxDamage = __o_MaxDamage.Default(0);
int Speed = __o_Speed.Default(0);
int FireRate = __o_FireRate.Default(0);
int RandomAngle = __o_RandomAngle.Default(0);
int RandomSpeed = __o_RandomSpeed.Default(0);
Float Alpha = __o_Alpha.Default(1);
Dynamic FrameRate = __o_FrameRate.Default(10);
Dynamic Rotation = __o_Rotation.Default(0);
{
	HX_STACK_LINE(877)
	this->name = Name;
	HX_STACK_LINE(878)
	this->simpleGraphic = SimpleGraphic;
	HX_STACK_LINE(878)
	this->shotPattern = ShotPatt;
	HX_STACK_LINE(878)
	this->minDamage = MinDamage;
	HX_STACK_LINE(878)
	this->maxDamage = MaxDamage;
	HX_STACK_LINE(878)
	this->speed = Speed;
	HX_STACK_LINE(879)
	this->fireRate = FireRate;
	HX_STACK_LINE(879)
	this->frameWidth = FrameWidth;
	HX_STACK_LINE(879)
	this->frameHeight = FrameHeight;
	HX_STACK_LINE(879)
	this->alpha = Alpha;
	HX_STACK_LINE(880)
	this->frames = Frames;
	HX_STACK_LINE(880)
	this->frameRate = FrameRate;
	HX_STACK_LINE(880)
	this->randomAngle = RandomAngle;
	HX_STACK_LINE(880)
	this->randomSpeed = RandomSpeed;
	HX_STACK_LINE(881)
	this->rotation = Rotation;
}
;
	return null();
}

//BulletProperties_obj::~BulletProperties_obj() { }

Dynamic BulletProperties_obj::__CreateEmpty() { return  new BulletProperties_obj; }
hx::ObjectPtr< BulletProperties_obj > BulletProperties_obj::__new(::String Name,Dynamic SimpleGraphic,Array< ::Dynamic > ShotPatt,hx::Null< Float >  __o_MinDamage,hx::Null< Float >  __o_MaxDamage,hx::Null< int >  __o_Speed,hx::Null< int >  __o_FireRate,hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,int FrameWidth,int FrameHeight,hx::Null< Float >  __o_Alpha,Array< int > Frames,Dynamic __o_FrameRate,Dynamic __o_Rotation)
{  hx::ObjectPtr< BulletProperties_obj > _result_ = new BulletProperties_obj();
	_result_->__construct(Name,SimpleGraphic,ShotPatt,__o_MinDamage,__o_MaxDamage,__o_Speed,__o_FireRate,__o_RandomAngle,__o_RandomSpeed,FrameWidth,FrameHeight,__o_Alpha,Frames,__o_FrameRate,__o_Rotation);
	return _result_;}

Dynamic BulletProperties_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BulletProperties_obj > _result_ = new BulletProperties_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return _result_;}


BulletProperties_obj::BulletProperties_obj()
{
}

void BulletProperties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BulletProperties);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(simpleGraphic,"simpleGraphic");
	HX_MARK_MEMBER_NAME(shotPattern,"shotPattern");
	HX_MARK_MEMBER_NAME(minDamage,"minDamage");
	HX_MARK_MEMBER_NAME(maxDamage,"maxDamage");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(randomAngle,"randomAngle");
	HX_MARK_MEMBER_NAME(randomSpeed,"randomSpeed");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_END_CLASS();
}

void BulletProperties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(simpleGraphic,"simpleGraphic");
	HX_VISIT_MEMBER_NAME(shotPattern,"shotPattern");
	HX_VISIT_MEMBER_NAME(minDamage,"minDamage");
	HX_VISIT_MEMBER_NAME(maxDamage,"maxDamage");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(randomAngle,"randomAngle");
	HX_VISIT_MEMBER_NAME(randomSpeed,"randomSpeed");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
}

Dynamic BulletProperties_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minDamage") ) { return minDamage; }
		if (HX_FIELD_EQ(inName,"maxDamage") ) { return maxDamage; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return frameWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shotPattern") ) { return shotPattern; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return frameHeight; }
		if (HX_FIELD_EQ(inName,"randomAngle") ) { return randomAngle; }
		if (HX_FIELD_EQ(inName,"randomSpeed") ) { return randomSpeed; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"simpleGraphic") ) { return simpleGraphic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BulletProperties_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minDamage") ) { minDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxDamage") ) { maxDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shotPattern") ) { shotPattern=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomAngle") ) { randomAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomSpeed") ) { randomSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"simpleGraphic") ) { simpleGraphic=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BulletProperties_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BulletProperties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("simpleGraphic","\x96","\x48","\x5c","\x1c"));
	outFields->push(HX_HCSTRING("shotPattern","\x76","\x4c","\x7b","\x42"));
	outFields->push(HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77"));
	outFields->push(HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"));
	outFields->push(HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"));
	outFields->push(HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("randomAngle","\xd0","\x66","\x77","\x8d"));
	outFields->push(HX_HCSTRING("randomSpeed","\x84","\xba","\xfe","\xeb"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BulletProperties_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BulletProperties_obj,simpleGraphic),HX_HCSTRING("simpleGraphic","\x96","\x48","\x5c","\x1c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BulletProperties_obj,shotPattern),HX_HCSTRING("shotPattern","\x76","\x4c","\x7b","\x42")},
	{hx::fsFloat,(int)offsetof(BulletProperties_obj,minDamage),HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77")},
	{hx::fsFloat,(int)offsetof(BulletProperties_obj,maxDamage),HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,fireRate),HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,frameWidth),HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,frameHeight),HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BulletProperties_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,randomAngle),HX_HCSTRING("randomAngle","\xd0","\x66","\x77","\x8d")},
	{hx::fsInt,(int)offsetof(BulletProperties_obj,randomSpeed),HX_HCSTRING("randomSpeed","\x84","\xba","\xfe","\xeb")},
	{hx::fsFloat,(int)offsetof(BulletProperties_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(BulletProperties_obj,rotation),HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("simpleGraphic","\x96","\x48","\x5c","\x1c"),
	HX_HCSTRING("shotPattern","\x76","\x4c","\x7b","\x42"),
	HX_HCSTRING("minDamage","\xa1","\x8f","\x2c","\x77"),
	HX_HCSTRING("maxDamage","\x33","\xa2","\x6f","\x4d"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"),
	HX_HCSTRING("frameWidth","\x99","\xea","\x88","\xad"),
	HX_HCSTRING("frameHeight","\xf4","\xd3","\x93","\xe0"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("randomAngle","\xd0","\x66","\x77","\x8d"),
	HX_HCSTRING("randomSpeed","\x84","\xba","\xfe","\xeb"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BulletProperties_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BulletProperties_obj::__mClass,"__mClass");
};

#endif

hx::Class BulletProperties_obj::__mClass;

void BulletProperties_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("BulletProperties","\xf5","\x94","\xcd","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BulletProperties_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BulletProperties_obj >;
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

