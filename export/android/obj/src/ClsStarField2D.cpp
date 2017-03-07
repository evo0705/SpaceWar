#include <hxcpp.h>

#ifndef INCLUDED_ClsStarField2D
#include <ClsStarField2D.h>
#endif
#ifndef INCLUDED__StarField_ClsStar
#include <_StarField/ClsStar.h>
#endif
#ifndef INCLUDED__StarField_StarField
#include <_StarField/StarField.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void ClsStarField2D_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount,::flixel::util::FlxPoint VelocityOffset)
{
HX_STACK_FRAME("ClsStarField2D","new",0xbb0c18e2,"ClsStarField2D.new","StarField.hx",20,0x0738ec56)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_StarAmount,"StarAmount")
HX_STACK_ARG(VelocityOffset,"VelocityOffset")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
int StarAmount = __o_StarAmount.Default(300);
{
	HX_STACK_LINE(21)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	int tmp4 = StarAmount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
	HX_STACK_LINE(22)
	this->starVelocityOffset = VelocityOffset;
	HX_STACK_LINE(23)
	this->_depthColors = ::flixel::util::FlxGradient_obj::createGradientArray((int)1,(int)5,Array_obj< int >::__new().Add((int)-10987432).Add((int)-723724),null(),null(),null());
	HX_STACK_LINE(24)
	this->setStarSpeed((int)100,(int)400);
}
;
	return null();
}

//ClsStarField2D_obj::~ClsStarField2D_obj() { }

Dynamic ClsStarField2D_obj::__CreateEmpty() { return  new ClsStarField2D_obj; }
hx::ObjectPtr< ClsStarField2D_obj > ClsStarField2D_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount,::flixel::util::FlxPoint VelocityOffset)
{  hx::ObjectPtr< ClsStarField2D_obj > _result_ = new ClsStarField2D_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_StarAmount,VelocityOffset);
	return _result_;}

Dynamic ClsStarField2D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClsStarField2D_obj > _result_ = new ClsStarField2D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void ClsStarField2D_obj::destroy( ){
{
		HX_STACK_FRAME("ClsStarField2D","destroy",0x4f19de7c,"ClsStarField2D.destroy","StarField.hx",28,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::flixel::util::FlxPoint tmp = this->starVelocityOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		this->starVelocityOffset = tmp1;
		HX_STACK_LINE(30)
		this->super::destroy();
	}
return null();
}


Void ClsStarField2D_obj::update( ){
{
		HX_STACK_FRAME("ClsStarField2D","update",0x3c97fac7,"ClsStarField2D.update","StarField.hx",34,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			Array< ::Dynamic > _g1 = this->_stars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(35)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				if ((tmp1)){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				::_StarField::ClsStar tmp2 = _g1->__get(_g).StaticCast< ::_StarField::ClsStar >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				::_StarField::ClsStar star = tmp2;		HX_STACK_VAR(star,"star");
				HX_STACK_LINE(35)
				++(_g);
				HX_STACK_LINE(37)
				::flixel::util::FlxPoint tmp3 = this->starVelocityOffset;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				Float tmp5 = star->speed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(37)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				Float tmp7 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				hx::AddEq(star->x,tmp8);
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint tmp9 = this->starVelocityOffset;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				Float tmp11 = star->speed;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(38)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(38)
				Float tmp13 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(38)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(38)
				hx::AddEq(star->y,tmp14);
				HX_STACK_LINE(41)
				Float tmp15 = star->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(41)
				Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(41)
				bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(41)
				if ((tmp17)){
					HX_STACK_LINE(43)
					star->x = (int)0;
				}
				else{
					HX_STACK_LINE(45)
					bool tmp18 = (star->x < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(45)
					if ((tmp18)){
						HX_STACK_LINE(47)
						Float tmp19 = this->get_width();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(47)
						star->x = tmp19;
					}
				}
				HX_STACK_LINE(50)
				Float tmp18 = star->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(50)
				Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(50)
				bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(50)
				if ((tmp20)){
					HX_STACK_LINE(52)
					star->y = (int)0;
				}
				else{
					HX_STACK_LINE(54)
					bool tmp21 = (star->y < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(54)
					if ((tmp21)){
						HX_STACK_LINE(56)
						Float tmp22 = this->get_height();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(56)
						star->y = tmp22;
					}
				}
			}
		}
		HX_STACK_LINE(60)
		this->super::update();
	}
return null();
}



ClsStarField2D_obj::ClsStarField2D_obj()
{
}

void ClsStarField2D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClsStarField2D);
	HX_MARK_MEMBER_NAME(starVelocityOffset,"starVelocityOffset");
	::_StarField::StarField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClsStarField2D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(starVelocityOffset,"starVelocityOffset");
	::_StarField::StarField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClsStarField2D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"starVelocityOffset") ) { return starVelocityOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClsStarField2D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"starVelocityOffset") ) { starVelocityOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ClsStarField2D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ClsStarField2D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("starVelocityOffset","\x02","\xc5","\x2f","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(ClsStarField2D_obj,starVelocityOffset),HX_HCSTRING("starVelocityOffset","\x02","\xc5","\x2f","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("starVelocityOffset","\x02","\xc5","\x2f","\xfc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClsStarField2D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClsStarField2D_obj::__mClass,"__mClass");
};

#endif

hx::Class ClsStarField2D_obj::__mClass;

void ClsStarField2D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ClsStarField2D","\xf0","\xbf","\xd9","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ClsStarField2D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClsStarField2D_obj >;
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

