#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIDropDownHeader_obj::__construct(hx::Null< int >  __o_Width,::flixel::FlxSprite Background,::flixel::addons::ui::FlxUIText Text,::flixel::addons::ui::FlxUISpriteButton Button)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownHeader","new",0x97950645,"flixel.addons.ui.FlxUIDropDownHeader.new","flixel/addons/ui/FlxUIDropDownMenu.hx",417,0x238549da)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(Background,"Background")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(Button,"Button")
int Width = __o_Width.Default(120);
{
	HX_STACK_LINE(418)
	super::__construct(null(),null());
	HX_STACK_LINE(420)
	this->background = Background;
	HX_STACK_LINE(421)
	this->text = Text;
	HX_STACK_LINE(422)
	this->button = Button;
	HX_STACK_LINE(425)
	::flixel::FlxSprite tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(425)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(425)
	if ((tmp1)){
		HX_STACK_LINE(426)
		::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,Width,(int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		::flixel::addons::ui::FlxUI9SliceSprite tmp3 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_HCSTRING("flixel/flixel-ui/img/box.png","\xdd","\xa4","\xcf","\x5b"),tmp2,Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)14).Add((int)14),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		this->background = tmp3;
	}
	HX_STACK_LINE(430)
	::flixel::addons::ui::FlxUISpriteButton tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(430)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(430)
	if ((tmp3)){
		HX_STACK_LINE(431)
		::flixel::FlxSprite tmp4 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("flixel/flixel-ui/img/dropdown_mark.png","\xcd","\xeb","\x34","\x3e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		::flixel::addons::ui::FlxUISpriteButton tmp5 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(431)
		this->button = tmp5;
		HX_STACK_LINE(432)
		::flixel::addons::ui::FlxUISpriteButton tmp6 = this->button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(432)
		tmp6->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/button_thin.png","\x58","\x62","\x55","\x9f")),(int)80,(int)20,Array_obj< ::Dynamic >::__new().Add(::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07"))),(int)0,(int)-1,false,(int)18,(int)18,null());
	}
	HX_STACK_LINE(436)
	::flixel::addons::ui::FlxUISpriteButton tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(436)
	::flixel::FlxSprite tmp5 = this->background;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(436)
	Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(436)
	::flixel::FlxSprite tmp7 = this->background;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(436)
	Float tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(436)
	tmp4->resize(tmp6,tmp8);
	HX_STACK_LINE(437)
	::flixel::addons::ui::FlxUISpriteButton tmp9 = this->button;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(437)
	::flixel::FlxSprite tmp10 = this->background;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(437)
	Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(437)
	::flixel::FlxSprite tmp12 = this->background;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(437)
	Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(437)
	Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(437)
	::flixel::addons::ui::FlxUISpriteButton tmp15 = this->button;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(437)
	Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(437)
	Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(437)
	tmp9->set_x(tmp17);
	HX_STACK_LINE(440)
	::flixel::addons::ui::FlxUISpriteButton tmp18 = this->button;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(440)
	int tmp19 = Width;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(440)
	tmp18->set_width(tmp19);
	HX_STACK_LINE(441)
	{
		HX_STACK_LINE(441)
		::flixel::addons::ui::FlxUISpriteButton tmp20 = this->button;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(441)
		::flixel::util::FlxPoint _g = tmp20->offset;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(441)
		Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(441)
		int tmp22 = Width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(441)
		::flixel::addons::ui::FlxUISpriteButton tmp23 = this->button;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(441)
		int tmp24 = tmp23->frameWidth;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(441)
		int tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(441)
		Float tmp26 = (tmp21 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(441)
		_g->set_x(tmp26);
	}
	HX_STACK_LINE(442)
	::flixel::addons::ui::FlxUISpriteButton tmp20 = this->button;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(442)
	::flixel::util::FlxPoint tmp21 = this->offset;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(442)
	Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(442)
	tmp20->set_x(tmp22);
	HX_STACK_LINE(443)
	{
		HX_STACK_LINE(443)
		::flixel::addons::ui::FlxUISpriteButton tmp23 = this->button;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(443)
		::flixel::util::FlxPoint tmp24 = tmp23->label->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(443)
		::flixel::util::FlxPoint _g = tmp24;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(443)
		Float tmp25 = _g->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(443)
		::flixel::addons::ui::FlxUISpriteButton tmp26 = this->button;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(443)
		Float tmp27 = tmp26->offset->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(443)
		Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(443)
		_g->set_x(tmp28);
	}
	HX_STACK_LINE(446)
	::flixel::addons::ui::FlxUIText tmp23 = this->text;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(446)
	bool tmp24 = (tmp23 == null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(446)
	if ((tmp24)){
		HX_STACK_LINE(447)
		::flixel::FlxSprite tmp25 = this->background;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(447)
		Float tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(447)
		int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(447)
		::flixel::addons::ui::FlxUIText tmp28 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,tmp27,null(),null(),null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(447)
		this->text = tmp28;
	}
	HX_STACK_LINE(449)
	::flixel::addons::ui::FlxUIText tmp25 = this->text;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(449)
	tmp25->setPosition((int)2,(int)4);
	HX_STACK_LINE(450)
	::flixel::addons::ui::FlxUIText tmp26 = this->text;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(450)
	tmp26->set_color((int)-16777216);
	HX_STACK_LINE(452)
	::flixel::FlxSprite tmp27 = this->background;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(452)
	this->add(tmp27);
	HX_STACK_LINE(453)
	::flixel::addons::ui::FlxUISpriteButton tmp28 = this->button;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(453)
	this->add(tmp28);
	HX_STACK_LINE(454)
	::flixel::addons::ui::FlxUIText tmp29 = this->text;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(454)
	this->add(tmp29);
}
;
	return null();
}

//FlxUIDropDownHeader_obj::~FlxUIDropDownHeader_obj() { }

Dynamic FlxUIDropDownHeader_obj::__CreateEmpty() { return  new FlxUIDropDownHeader_obj; }
hx::ObjectPtr< FlxUIDropDownHeader_obj > FlxUIDropDownHeader_obj::__new(hx::Null< int >  __o_Width,::flixel::FlxSprite Background,::flixel::addons::ui::FlxUIText Text,::flixel::addons::ui::FlxUISpriteButton Button)
{  hx::ObjectPtr< FlxUIDropDownHeader_obj > _result_ = new FlxUIDropDownHeader_obj();
	_result_->__construct(__o_Width,Background,Text,Button);
	return _result_;}

Dynamic FlxUIDropDownHeader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIDropDownHeader_obj > _result_ = new FlxUIDropDownHeader_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxUIDropDownHeader_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownHeader","destroy",0x07c8b95f,"flixel.addons.ui.FlxUIDropDownHeader.destroy","flixel/addons/ui/FlxUIDropDownMenu.hx",458,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(459)
		this->super::destroy();
		HX_STACK_LINE(461)
		::flixel::FlxSprite tmp = this->background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		::flixel::FlxSprite tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(461)
		this->background = tmp1;
		HX_STACK_LINE(462)
		::flixel::addons::ui::FlxUIText tmp2 = this->text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		::flixel::addons::ui::FlxUIText tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		this->text = tmp3;
		HX_STACK_LINE(463)
		::flixel::addons::ui::FlxUISpriteButton tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		::flixel::addons::ui::FlxUISpriteButton tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		this->button = tmp5;
	}
return null();
}



FlxUIDropDownHeader_obj::FlxUIDropDownHeader_obj()
{
}

void FlxUIDropDownHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownHeader);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(button,"button");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(button,"button");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIDropDownHeader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIDropDownHeader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::flixel::addons::ui::FlxUIText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::addons::ui::FlxUISpriteButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIDropDownHeader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIDropDownHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUIDropDownHeader_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIText*/ ,(int)offsetof(FlxUIDropDownHeader_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::flixel::addons::ui::FlxUISpriteButton*/ ,(int)offsetof(FlxUIDropDownHeader_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIDropDownHeader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIDropDownHeader_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUIDropDownHeader_obj::__mClass;

void FlxUIDropDownHeader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIDropDownHeader","\xd3","\x7f","\x21","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIDropDownHeader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIDropDownHeader_obj >;
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
