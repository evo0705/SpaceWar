#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reg
#include <Reg.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_util_DamageText
#include <util/DamageText.h>
#endif
namespace util{

Void DamageText_obj::__construct(::flixel::FlxSprite Object,::String __o_Label,int Damage,Dynamic __o_Color,Dynamic __o_BorderColor)
{
HX_STACK_FRAME("util.DamageText","new",0xc651deba,"util.DamageText.new","util/DamageText.hx",14,0x107b2955)
HX_STACK_THIS(this)
HX_STACK_ARG(Object,"Object")
HX_STACK_ARG(__o_Label,"Label")
HX_STACK_ARG(Damage,"Damage")
HX_STACK_ARG(__o_Color,"Color")
HX_STACK_ARG(__o_BorderColor,"BorderColor")
::String Label = __o_Label.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Dynamic Color = __o_Color.Default(-1);
Dynamic BorderColor = __o_BorderColor.Default(-13421773);
{
	struct _Function_1_1{
		inline static int Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","util/DamageText.hx",19,0x107b2955)
			{
				HX_STACK_LINE(19)
				int tmp = ::Reg_obj::FrameRate;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(19)
				Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(19)
				return ::Math_obj::round(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(19)
	this->frames = _Function_1_1::Block();
	HX_STACK_LINE(25)
	super::__construct(null());
	HX_STACK_LINE(26)
	this->target = Object;
	HX_STACK_LINE(27)
	this->color = Color;
	HX_STACK_LINE(28)
	this->borderColor = BorderColor;
	HX_STACK_LINE(29)
	::flixel::text::FlxText tmp = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)24,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->damageText = tmp;
	HX_STACK_LINE(30)
	::flixel::text::FlxText tmp1 = this->damageText;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->add(tmp1);
	HX_STACK_LINE(31)
	::flixel::text::FlxText tmp2 = this->damageText;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	tmp2->kill();
}
;
	return null();
}

//DamageText_obj::~DamageText_obj() { }

Dynamic DamageText_obj::__CreateEmpty() { return  new DamageText_obj; }
hx::ObjectPtr< DamageText_obj > DamageText_obj::__new(::flixel::FlxSprite Object,::String __o_Label,int Damage,Dynamic __o_Color,Dynamic __o_BorderColor)
{  hx::ObjectPtr< DamageText_obj > _result_ = new DamageText_obj();
	_result_->__construct(Object,__o_Label,Damage,__o_Color,__o_BorderColor);
	return _result_;}

Dynamic DamageText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DamageText_obj > _result_ = new DamageText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void DamageText_obj::showDamage( ::String __o_Label,int Damage,Float X,Float Y){
::String Label = __o_Label.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("util.DamageText","showDamage",0x7b150632,"util.DamageText.showDamage","util/DamageText.hx",34,0x107b2955)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Label,"Label")
	HX_STACK_ARG(Damage,"Damage")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(36)
		::flixel::text::FlxText tmp = this->damageText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::flixel::util::FlxDestroyUtil_obj::destroy(tmp);
		HX_STACK_LINE(37)
		::String tmp1 = (Label + Damage);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::flixel::text::FlxText tmp2 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,tmp1,(int)24,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		this->damageText = tmp2;
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp3 = this->damageText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		int tmp5 = this->borderColor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp3->setFormat(HX_HCSTRING("assets/fonts/space.ttf","\x27","\x85","\xd5","\x09"),(int)24,tmp4,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),(int)3,tmp5,null());
		HX_STACK_LINE(39)
		::flixel::text::FlxText tmp6 = this->damageText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		tmp6->set_borderSize((int)2);
		HX_STACK_LINE(40)
		::flixel::text::FlxText tmp7 = this->damageText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		::String tmp8 = (Label + Damage);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		tmp7->set_text(tmp8);
		HX_STACK_LINE(41)
		::flixel::text::FlxText tmp9 = this->damageText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::flixel::text::FlxText tmp11 = this->damageText;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Float tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		Float tmp15 = Y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(41)
		tmp9->setPosition(tmp14,tmp15);
		HX_STACK_LINE(42)
		int tmp16 = ::Reg_obj::FrameRate;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(42)
		this->frames = tmp16;
		HX_STACK_LINE(43)
		::flixel::text::FlxText tmp17 = this->damageText;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(43)
		tmp17->set_alpha((int)1);
		HX_STACK_LINE(45)
		::flixel::text::FlxText tmp18 = this->damageText;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(45)
		this->add(tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DamageText_obj,showDamage,(void))

int DamageText_obj::getCountDown( ){
	HX_STACK_FRAME("util.DamageText","getCountDown",0x9ae36fc1,"util.DamageText.getCountDown","util/DamageText.hx",48,0x107b2955)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	int tmp = this->frames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DamageText_obj,getCountDown,return )

Void DamageText_obj::update( ){
{
		HX_STACK_FRAME("util.DamageText","update",0x90416bef,"util.DamageText.update","util/DamageText.hx",53,0x107b2955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::flixel::text::FlxText tmp = this->damageText;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			::flixel::text::FlxText _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			Float tmp1 = (_g->y - (int)2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(54)
			_g->set_y(tmp1);
		}
		HX_STACK_LINE(55)
		int tmp = this->frames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		int tmp1 = hx::Mod(tmp,(int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		if ((tmp2)){
			HX_STACK_LINE(56)
			::flixel::text::FlxText tmp3 = this->damageText;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			int tmp4 = this->frames;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			int tmp5 = ::Reg_obj::FrameRate;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			tmp3->set_alpha(tmp6);
		}
		HX_STACK_LINE(58)
		int tmp3 = this->frames;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		if ((tmp4)){
			HX_STACK_LINE(58)
			(this->frames)--;
		}
		else{
			HX_STACK_LINE(59)
			::flixel::text::FlxText tmp5 = this->damageText;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			tmp5->kill();
		}
		HX_STACK_LINE(60)
		this->super::update();
	}
return null();
}


Void DamageText_obj::destroy( ){
{
		HX_STACK_FRAME("util.DamageText","destroy",0x2fb37054,"util.DamageText.destroy","util/DamageText.hx",63,0x107b2955)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::destroy();
		HX_STACK_LINE(65)
		this->damageText = null();
		HX_STACK_LINE(66)
		this->target = null();
		HX_STACK_LINE(67)
		this->frames = (int)0;
	}
return null();
}



DamageText_obj::DamageText_obj()
{
}

void DamageText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DamageText);
	HX_MARK_MEMBER_NAME(damageText,"damageText");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DamageText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(damageText,"damageText");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DamageText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"damageText") ) { return damageText; }
		if (HX_FIELD_EQ(inName,"showDamage") ) { return showDamage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getCountDown") ) { return getCountDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DamageText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"damageText") ) { damageText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DamageText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DamageText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("damageText","\xbc","\xec","\xb9","\xb4"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(DamageText_obj,damageText),HX_HCSTRING("damageText","\xbc","\xec","\xb9","\xb4")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(DamageText_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsInt,(int)offsetof(DamageText_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsInt,(int)offsetof(DamageText_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(DamageText_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("damageText","\xbc","\xec","\xb9","\xb4"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("showDamage","\x4c","\x35","\x59","\x87"),
	HX_HCSTRING("getCountDown","\x5b","\x19","\xe5","\x63"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DamageText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DamageText_obj::__mClass,"__mClass");
};

#endif

hx::Class DamageText_obj::__mClass;

void DamageText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.DamageText","\xc8","\xb9","\xa1","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DamageText_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DamageText_obj >;
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

} // end namespace util
