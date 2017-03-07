#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_ClsStarField3D
#include <ClsStarField3D.h>
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
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif

Void ClsStarField3D_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount)
{
HX_STACK_FRAME("ClsStarField3D","new",0x21677541,"ClsStarField3D.new","StarField.hx",69,0x0738ec56)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_StarAmount,"StarAmount")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
int StarAmount = __o_StarAmount.Default(300);
{
	HX_STACK_LINE(70)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	int tmp4 = StarAmount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
	HX_STACK_LINE(71)
	::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		Float X1 = tmp7;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(71)
		Float tmp8 = this->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		Float Y1 = tmp9;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(71)
		::flixel::util::FlxPool tmp10 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		::flixel::util::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(71)
		Float tmp12 = X1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(71)
		Float tmp13 = Y1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(71)
		::flixel::util::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(71)
		::flixel::util::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(71)
		point->_inPool = false;
		HX_STACK_LINE(71)
		tmp5 = point;
	}
	HX_STACK_LINE(71)
	this->center = tmp5;
	HX_STACK_LINE(72)
	this->_depthColors = ::flixel::util::FlxGradient_obj::createGradientArray((int)1,(int)300,Array_obj< int >::__new().Add((int)-14079703).Add((int)-1),null(),null(),null());
	HX_STACK_LINE(73)
	this->setStarSpeed((int)0,(int)200);
}
;
	return null();
}

//ClsStarField3D_obj::~ClsStarField3D_obj() { }

Dynamic ClsStarField3D_obj::__CreateEmpty() { return  new ClsStarField3D_obj; }
hx::ObjectPtr< ClsStarField3D_obj > ClsStarField3D_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount)
{  hx::ObjectPtr< ClsStarField3D_obj > _result_ = new ClsStarField3D_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_StarAmount);
	return _result_;}

Dynamic ClsStarField3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClsStarField3D_obj > _result_ = new ClsStarField3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void ClsStarField3D_obj::destroy( ){
{
		HX_STACK_FRAME("ClsStarField3D","destroy",0x0f64565b,"ClsStarField3D.destroy","StarField.hx",77,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint tmp = this->center;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		this->center = tmp1;
		HX_STACK_LINE(79)
		this->super::destroy();
	}
return null();
}


Void ClsStarField3D_obj::update( ){
{
		HX_STACK_FRAME("ClsStarField3D","update",0x0f8963c8,"ClsStarField3D.update","StarField.hx",83,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			Array< ::Dynamic > _g1 = this->_stars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(84)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(84)
				if ((tmp1)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				::_StarField::ClsStar tmp2 = _g1->__get(_g).StaticCast< ::_StarField::ClsStar >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				::_StarField::ClsStar star = tmp2;		HX_STACK_VAR(star,"star");
				HX_STACK_LINE(84)
				++(_g);
				HX_STACK_LINE(86)
				hx::MultEq(star->d,((Float)1.1));
				HX_STACK_LINE(87)
				::flixel::util::FlxPoint tmp3 = this->center;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				Float tmp5 = star->r;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				Float tmp7 = star->d;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				Float tmp9 = star->speed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(87)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(87)
				Float tmp11 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(87)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				Float tmp13 = (tmp4 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				star->x = tmp13;
				HX_STACK_LINE(88)
				::flixel::util::FlxPoint tmp14 = this->center;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(88)
				Float tmp16 = star->r;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(88)
				Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(88)
				Float tmp18 = star->d;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(88)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(88)
				Float tmp20 = star->speed;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(88)
				Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(88)
				Float tmp22 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(88)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(88)
				Float tmp24 = (tmp15 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(88)
				star->y = tmp24;
				HX_STACK_LINE(90)
				bool tmp25 = (star->x < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(90)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(90)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(90)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(90)
				if ((tmp27)){
					HX_STACK_LINE(90)
					Float tmp29 = star->x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(90)
					Float tmp30 = this->get_width();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(90)
					Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(90)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(90)
					tmp28 = (tmp29 > tmp32);
				}
				else{
					HX_STACK_LINE(90)
					tmp28 = true;
				}
				HX_STACK_LINE(90)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(90)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(90)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(90)
				if ((tmp30)){
					HX_STACK_LINE(90)
					tmp31 = (star->y < (int)0);
				}
				else{
					HX_STACK_LINE(90)
					tmp31 = true;
				}
				HX_STACK_LINE(90)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(90)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(90)
				if ((tmp32)){
					HX_STACK_LINE(90)
					Float tmp34 = star->y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(90)
					Float tmp35 = this->get_height();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(90)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(90)
					tmp33 = (tmp34 > tmp36);
				}
				else{
					HX_STACK_LINE(90)
					tmp33 = true;
				}
				HX_STACK_LINE(90)
				if ((tmp33)){
					HX_STACK_LINE(92)
					star->d = (int)1;
					HX_STACK_LINE(93)
					int tmp34 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(93)
					int tmp35 = (tmp34 * (int)48271);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(93)
					int tmp36 = hx::Mod(tmp35,(int)2147483647);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(93)
					int tmp37 = (int(tmp36) & int((int)2147483647));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(93)
					int tmp38 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(93)
					Float tmp39 = (Float(tmp38) / Float((int)2147483647));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(93)
					Float tmp40 = ::Math_obj::PI;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(93)
					Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(93)
					Float tmp42 = (tmp41 * (int)2);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(93)
					star->r = tmp42;
					HX_STACK_LINE(94)
					star->x = (int)0;
					HX_STACK_LINE(95)
					star->y = (int)0;
					HX_STACK_LINE(96)
					Float tmp43 = this->_minSpeed;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(96)
					Float tmp44 = this->_maxSpeed;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(96)
					Float tmp45 = ::flixel::util::FlxRandom_obj::floatRanged(tmp43,tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(96)
					star->speed = tmp45;
					HX_STACK_LINE(98)
					::_StarField::ClsStar tmp46 = star;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(98)
					this->_stars[star->index] = tmp46;
				}
			}
		}
		HX_STACK_LINE(102)
		this->super::update();
	}
return null();
}



ClsStarField3D_obj::ClsStarField3D_obj()
{
}

void ClsStarField3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClsStarField3D);
	HX_MARK_MEMBER_NAME(center,"center");
	::_StarField::StarField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ClsStarField3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(center,"center");
	::_StarField::StarField_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ClsStarField3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClsStarField3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ClsStarField3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ClsStarField3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(ClsStarField3D_obj,center),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClsStarField3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClsStarField3D_obj::__mClass,"__mClass");
};

#endif

hx::Class ClsStarField3D_obj::__mClass;

void ClsStarField3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ClsStarField3D","\xcf","\xc0","\xd9","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ClsStarField3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClsStarField3D_obj >;
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

