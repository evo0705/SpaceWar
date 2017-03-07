#include <hxcpp.h>

#ifndef INCLUDED_Ship
#include <Ship.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
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
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_util_PlayerHUD
#include <util/PlayerHUD.h>
#endif
namespace util{

Void PlayerHUD_obj::__construct(::Ship Parent)
{
HX_STACK_FRAME("util.PlayerHUD","new",0x2ca6ba3c,"util.PlayerHUD.new","util/PlayerHUD.hx",19,0x9d32de35)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(20)
	super::__construct(null());
	HX_STACK_LINE(21)
	this->_parent = Parent;
	HX_STACK_LINE(23)
	::Ship tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::Ship tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	Float tmp2 = tmp1->maxHealth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::flixel::ui::FlxBar tmp3 = ::flixel::ui::FlxBar_obj::__new((int)0,(int)0,(int)1,(int)121,(int)14,tmp,HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),(int)0,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	this->healthBar = tmp3;
	HX_STACK_LINE(24)
	::flixel::ui::FlxBar tmp4 = this->healthBar;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	tmp4->createFilledBar((int)0,(int)-16654476,true,(int)-1);
	HX_STACK_LINE(25)
	::flixel::ui::FlxBar tmp5 = this->healthBar;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	tmp5->set_x((int)10);
	HX_STACK_LINE(26)
	::flixel::ui::FlxBar tmp6 = this->healthBar;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	int tmp8 = (tmp7 - (int)24);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	tmp6->set_y(tmp8);
	HX_STACK_LINE(27)
	::flixel::ui::FlxBar tmp9 = this->healthBar;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	this->add(tmp9);
	HX_STACK_LINE(29)
	::String tmp10 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + Parent->health);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	::flixel::text::FlxText tmp11 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)120,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	this->health = tmp11;
	HX_STACK_LINE(30)
	::flixel::text::FlxText tmp12 = this->health;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(30)
	tmp12->set_alpha(((Float).5));
	HX_STACK_LINE(31)
	::flixel::text::FlxText tmp13 = this->health;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(31)
	::flixel::ui::FlxBar tmp14 = this->healthBar;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(31)
	Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(31)
	::flixel::ui::FlxBar tmp16 = this->healthBar;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(31)
	Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(31)
	Float tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(31)
	tmp13->setPosition(tmp15,tmp18);
	HX_STACK_LINE(32)
	::flixel::text::FlxText tmp19 = this->health;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(32)
	tmp19->setFormat(HX_HCSTRING("assets/fonts/space.ttf","\x27","\x85","\xd5","\x09"),(int)12,(int)-1,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),(int)3,(int)-16777216,null());
	HX_STACK_LINE(33)
	::flixel::text::FlxText tmp20 = this->health;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(33)
	this->add(tmp20);
}
;
	return null();
}

//PlayerHUD_obj::~PlayerHUD_obj() { }

Dynamic PlayerHUD_obj::__CreateEmpty() { return  new PlayerHUD_obj; }
hx::ObjectPtr< PlayerHUD_obj > PlayerHUD_obj::__new(::Ship Parent)
{  hx::ObjectPtr< PlayerHUD_obj > _result_ = new PlayerHUD_obj();
	_result_->__construct(Parent);
	return _result_;}

Dynamic PlayerHUD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerHUD_obj > _result_ = new PlayerHUD_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayerHUD_obj::update( ){
{
		HX_STACK_FRAME("util.PlayerHUD","update",0xee152dad,"util.PlayerHUD.update","util/PlayerHUD.hx",36,0x9d32de35)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->super::update();
		HX_STACK_LINE(38)
		::flixel::text::FlxText tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::Ship tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Float tmp2 = tmp1->health;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		tmp->set_text(tmp3);
		HX_STACK_LINE(39)
		::Ship tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = tmp4->health;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		if ((tmp6)){
			HX_STACK_LINE(39)
			::flixel::text::FlxText tmp7 = this->health;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			tmp7->set_text(HX_HCSTRING("You Died","\x45","\x79","\x2e","\x4c"));
		}
	}
return null();
}



PlayerHUD_obj::PlayerHUD_obj()
{
}

void PlayerHUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerHUD);
	HX_MARK_MEMBER_NAME(healthBar,"healthBar");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerHUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(healthBar,"healthBar");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerHUD_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthBar") ) { return healthBar; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerHUD_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::Ship >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthBar") ) { healthBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PlayerHUD_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PlayerHUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("healthBar","\x97","\x8a","\x92","\x42"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(PlayerHUD_obj,healthBar),HX_HCSTRING("healthBar","\x97","\x8a","\x92","\x42")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayerHUD_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsObject /*::Ship*/ ,(int)offsetof(PlayerHUD_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("healthBar","\x97","\x8a","\x92","\x42"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerHUD_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerHUD_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerHUD_obj::__mClass;

void PlayerHUD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.PlayerHUD","\x4a","\x2c","\xbe","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &PlayerHUD_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerHUD_obj >;
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
