#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void ButtonLabelStyle_obj::__construct(::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border)
{
HX_STACK_FRAME("flixel.addons.ui.ButtonLabelStyle","new",0x18d06f72,"flixel.addons.ui.ButtonLabelStyle.new","flixel/addons/ui/FlxUIButton.hx",233,0xbb6c9298)
HX_STACK_THIS(this)
HX_STACK_ARG(Font,"Font")
HX_STACK_ARG(Align,"Align")
HX_STACK_ARG(Color,"Color")
HX_STACK_ARG(Border,"Border")
{
	HX_STACK_LINE(238)
	this->align = null();
	HX_STACK_LINE(237)
	this->color = null();
	HX_STACK_LINE(236)
	this->border = null();
	HX_STACK_LINE(235)
	this->font = null();
	HX_STACK_LINE(241)
	this->font = Font;
	HX_STACK_LINE(242)
	this->border = Border;
	HX_STACK_LINE(243)
	this->color = Color;
	HX_STACK_LINE(244)
	this->align = Align;
}
;
	return null();
}

//ButtonLabelStyle_obj::~ButtonLabelStyle_obj() { }

Dynamic ButtonLabelStyle_obj::__CreateEmpty() { return  new ButtonLabelStyle_obj; }
hx::ObjectPtr< ButtonLabelStyle_obj > ButtonLabelStyle_obj::__new(::flixel::addons::ui::FontDef Font,::String Align,Dynamic Color,::flixel::addons::ui::BorderDef Border)
{  hx::ObjectPtr< ButtonLabelStyle_obj > _result_ = new ButtonLabelStyle_obj();
	_result_->__construct(Font,Align,Color,Border);
	return _result_;}

Dynamic ButtonLabelStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ButtonLabelStyle_obj > _result_ = new ButtonLabelStyle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void ButtonLabelStyle_obj::apply( ::flixel::text::FlxText f){
{
		HX_STACK_FRAME("flixel.addons.ui.ButtonLabelStyle","apply",0xcc6b8d00,"flixel.addons.ui.ButtonLabelStyle.apply","flixel/addons/ui/FlxUIButton.hx",247,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(248)
		::flixel::addons::ui::FontDef tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(249)
			::flixel::addons::ui::FontDef tmp2 = this->font;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			::flixel::text::FlxText tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			tmp2->apply(tmp3);
		}
		HX_STACK_LINE(251)
		::flixel::addons::ui::BorderDef tmp2 = this->border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		if ((tmp3)){
			HX_STACK_LINE(252)
			::flixel::addons::ui::BorderDef tmp4 = this->border;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			::flixel::text::FlxText tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			tmp4->apply(tmp5);
		}
		HX_STACK_LINE(254)
		Dynamic tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		if ((tmp5)){
			HX_STACK_LINE(255)
			Dynamic tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			f->set_color(tmp6);
		}
		HX_STACK_LINE(257)
		::String tmp6 = this->align;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		if ((tmp7)){
			HX_STACK_LINE(258)
			::String tmp8 = this->align;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(258)
			f->set_alignment(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ButtonLabelStyle_obj,apply,(void))


ButtonLabelStyle_obj::ButtonLabelStyle_obj()
{
}

void ButtonLabelStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonLabelStyle);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_END_CLASS();
}

void ButtonLabelStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(align,"align");
}

Dynamic ButtonLabelStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ButtonLabelStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::flixel::addons::ui::FontDef >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::flixel::addons::ui::BorderDef >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ButtonLabelStyle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ButtonLabelStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::FontDef*/ ,(int)offsetof(ButtonLabelStyle_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::flixel::addons::ui::BorderDef*/ ,(int)offsetof(ButtonLabelStyle_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ButtonLabelStyle_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsString,(int)offsetof(ButtonLabelStyle_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ButtonLabelStyle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ButtonLabelStyle_obj::__mClass,"__mClass");
};

#endif

hx::Class ButtonLabelStyle_obj::__mClass;

void ButtonLabelStyle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.ButtonLabelStyle","\x80","\x8e","\xeb","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ButtonLabelStyle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ButtonLabelStyle_obj >;
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

} // end namespace flixel
} // end namespace addons
} // end namespace ui
