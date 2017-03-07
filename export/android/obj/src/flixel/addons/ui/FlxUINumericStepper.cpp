#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#include <flixel/addons/ui/FlxUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUINumericStepper_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_StepSize,hx::Null< Float >  __o_DefaultValue,hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,hx::Null< int >  __o_Decimals,hx::Null< int >  __o_Stack,::flixel::text::FlxText TextField,::flixel::addons::ui::FlxUITypedButton ButtonPlus,::flixel::addons::ui::FlxUITypedButton ButtonMinus)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","new",0xdb22a66b,"flixel.addons.ui.FlxUINumericStepper.new","flixel/addons/ui/FlxUINumericStepper.hx",16,0xbef22206)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_StepSize,"StepSize")
HX_STACK_ARG(__o_DefaultValue,"DefaultValue")
HX_STACK_ARG(__o_Min,"Min")
HX_STACK_ARG(__o_Max,"Max")
HX_STACK_ARG(__o_Decimals,"Decimals")
HX_STACK_ARG(__o_Stack,"Stack")
HX_STACK_ARG(TextField,"TextField")
HX_STACK_ARG(ButtonPlus,"ButtonPlus")
HX_STACK_ARG(ButtonMinus,"ButtonMinus")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float StepSize = __o_StepSize.Default(1);
Float DefaultValue = __o_DefaultValue.Default(0);
Float Min = __o_Min.Default(-999);
Float Max = __o_Max.Default(999);
int Decimals = __o_Decimals.Default(0);
int Stack = __o_Stack.Default(1);
{
	HX_STACK_LINE(28)
	this->stack = (int)1;
	HX_STACK_LINE(27)
	this->value = ((Float)0);
	HX_STACK_LINE(26)
	this->max = ((Float)10);
	HX_STACK_LINE(25)
	this->min = ((Float)0);
	HX_STACK_LINE(24)
	this->decimals = (int)0;
	HX_STACK_LINE(23)
	this->stepSize = ((Float)0);
	HX_STACK_LINE(154)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(156)
	bool tmp2 = (TextField == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	if ((tmp2)){
		HX_STACK_LINE(157)
		::flixel::addons::ui::FlxUIInputText tmp3 = ::flixel::addons::ui::FlxUIInputText_obj::__new((int)0,(int)0,(int)25,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		TextField = tmp3;
	}
	HX_STACK_LINE(159)
	TextField->set_x((int)0);
	HX_STACK_LINE(160)
	TextField->set_y((int)0);
	HX_STACK_LINE(161)
	this->text_field = TextField;
	HX_STACK_LINE(162)
	::flixel::text::FlxText tmp3 = this->text_field;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	Float tmp4 = DefaultValue;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	tmp3->set_text(tmp5);
	HX_STACK_LINE(164)
	::flixel::text::FlxText tmp6 = this->text_field;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	if ((tmp7)){
		HX_STACK_LINE(166)
		::flixel::text::FlxText tmp8 = this->text_field;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(166)
		::flixel::addons::ui::FlxUIInputText fuit = ((::flixel::addons::ui::FlxUIInputText)(tmp8));		HX_STACK_VAR(fuit,"fuit");
		HX_STACK_LINE(167)
		fuit->set_lines((int)1);
		HX_STACK_LINE(168)
		Dynamic tmp9 = this->_onInputTextEvent_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(168)
		fuit->callback = tmp9;
		HX_STACK_LINE(169)
		fuit->broadcastToFlxUI = false;
	}
	HX_STACK_LINE(172)
	this->stepSize = StepSize;
	HX_STACK_LINE(173)
	int tmp8 = Decimals;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(173)
	this->set_decimals(tmp8);
	HX_STACK_LINE(174)
	Float tmp9 = Min;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(174)
	this->set_min(tmp9);
	HX_STACK_LINE(175)
	Float tmp10 = Max;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(175)
	this->set_max(tmp10);
	HX_STACK_LINE(176)
	Float tmp11 = DefaultValue;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(176)
	this->set_value(tmp11);
	HX_STACK_LINE(178)
	Float tmp12 = TextField->get_height();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(178)
	int tmp13 = ((int)(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(178)
	int tmp14 = ((int)1 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(178)
	int btnSize = tmp14;		HX_STACK_VAR(btnSize,"btnSize");
	HX_STACK_LINE(180)
	bool tmp15 = (ButtonPlus == null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(180)
	if ((tmp15)){
		HX_STACK_LINE(181)
		::flixel::addons::ui::FlxUITypedButton tmp16 = ::flixel::addons::ui::FlxUITypedButton_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(181)
		ButtonPlus = tmp16;
		HX_STACK_LINE(182)
		int tmp17 = btnSize;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(182)
		int tmp18 = btnSize;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(182)
		ButtonPlus->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/button_thin.png","\x58","\x62","\x55","\x9f")),tmp17,tmp18,Array_obj< ::Dynamic >::__new().Add(::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("2,2,15,15","\x38","\x7b","\x83","\x18"))),(int)0,(int)-1,false,(int)18,(int)18,null());
		HX_STACK_LINE(183)
		::flixel::FlxSprite tmp19 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("flixel/flixel-ui/img/plus_mark.png","\xe4","\xf7","\x7a","\xbe"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(183)
		ButtonPlus->set_label(tmp19);
	}
	HX_STACK_LINE(185)
	bool tmp16 = (ButtonMinus == null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(185)
	if ((tmp16)){
		HX_STACK_LINE(186)
		::flixel::addons::ui::FlxUITypedButton tmp17 = ::flixel::addons::ui::FlxUITypedButton_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(186)
		ButtonMinus = tmp17;
		HX_STACK_LINE(187)
		int tmp18 = btnSize;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(187)
		int tmp19 = btnSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(187)
		ButtonMinus->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/button_thin.png","\x58","\x62","\x55","\x9f")),tmp18,tmp19,Array_obj< ::Dynamic >::__new().Add(::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("2,2,15,15","\x38","\x7b","\x83","\x18"))),(int)0,(int)-1,false,(int)18,(int)18,null());
		HX_STACK_LINE(188)
		::flixel::FlxSprite tmp20 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_HCSTRING("flixel/flixel-ui/img/minus_mark.png","\x80","\xc9","\xb5","\x31"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(188)
		ButtonMinus->set_label(tmp20);
	}
	HX_STACK_LINE(191)
	this->button_plus = ButtonPlus;
	HX_STACK_LINE(192)
	this->button_minus = ButtonMinus;
	HX_STACK_LINE(194)
	::flixel::text::FlxText tmp17 = this->text_field;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(194)
	this->add(tmp17);
	HX_STACK_LINE(195)
	::flixel::addons::ui::FlxUITypedButton tmp18 = this->button_plus;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(195)
	this->add(tmp18);
	HX_STACK_LINE(196)
	::flixel::addons::ui::FlxUITypedButton tmp19 = this->button_minus;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(196)
	this->add(tmp19);
	HX_STACK_LINE(198)
	Dynamic tmp20 = this->_onPlus_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(198)
	::flixel::addons::ui::FlxUITypedButton tmp21 = this->button_plus;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(198)
	tmp21->onUp->callback = tmp20;
	HX_STACK_LINE(199)
	::flixel::addons::ui::FlxUITypedButton tmp22 = this->button_plus;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(199)
	tmp22->broadcastToFlxUI = false;
	HX_STACK_LINE(201)
	Dynamic tmp23 = this->_onMinus_dyn();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(201)
	::flixel::addons::ui::FlxUITypedButton tmp24 = this->button_minus;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(201)
	tmp24->onUp->callback = tmp23;
	HX_STACK_LINE(202)
	::flixel::addons::ui::FlxUITypedButton tmp25 = this->button_minus;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(202)
	tmp25->broadcastToFlxUI = false;
	HX_STACK_LINE(204)
	int tmp26 = Stack;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(204)
	this->set_stack(tmp26);
}
;
	return null();
}

//FlxUINumericStepper_obj::~FlxUINumericStepper_obj() { }

Dynamic FlxUINumericStepper_obj::__CreateEmpty() { return  new FlxUINumericStepper_obj; }
hx::ObjectPtr< FlxUINumericStepper_obj > FlxUINumericStepper_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_StepSize,hx::Null< Float >  __o_DefaultValue,hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,hx::Null< int >  __o_Decimals,hx::Null< int >  __o_Stack,::flixel::text::FlxText TextField,::flixel::addons::ui::FlxUITypedButton ButtonPlus,::flixel::addons::ui::FlxUITypedButton ButtonMinus)
{  hx::ObjectPtr< FlxUINumericStepper_obj > _result_ = new FlxUINumericStepper_obj();
	_result_->__construct(__o_X,__o_Y,__o_StepSize,__o_DefaultValue,__o_Min,__o_Max,__o_Decimals,__o_Stack,TextField,ButtonPlus,ButtonMinus);
	return _result_;}

Dynamic FlxUINumericStepper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUINumericStepper_obj > _result_ = new FlxUINumericStepper_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _result_;}

hx::Object *FlxUINumericStepper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

FlxUINumericStepper_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUINumericStepper_obj >(this); }
FlxUINumericStepper_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUINumericStepper_obj >(this); }
FlxUINumericStepper_obj::operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUINumericStepper_obj >(this); }
FlxUINumericStepper_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUINumericStepper_obj >(this); }
FlxUINumericStepper_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUINumericStepper_obj >(this); }
cpp::ArrayBase FlxUINumericStepper_obj::set_params( cpp::ArrayBase p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_params",0xbd02dad8,"flixel.addons.ui.FlxUINumericStepper.set_params","flixel/addons/ui/FlxUINumericStepper.hx",38,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(39)
	this->params = p;
	HX_STACK_LINE(40)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_params,return )

bool FlxUINumericStepper_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_skipButtonUpdate",0x707fcccc,"flixel.addons.ui.FlxUINumericStepper.set_skipButtonUpdate","flixel/addons/ui/FlxUINumericStepper.hx",44,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(45)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(46)
	::flixel::addons::ui::FlxUITypedButton tmp = this->button_plus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	tmp->set_skipButtonUpdate(tmp1);
	HX_STACK_LINE(47)
	::flixel::addons::ui::FlxUITypedButton tmp2 = this->button_minus;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	tmp2->set_skipButtonUpdate(tmp3);
	HX_STACK_LINE(49)
	bool tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_skipButtonUpdate,return )

int FlxUINumericStepper_obj::set_color( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_color",0x15562a11,"flixel.addons.ui.FlxUINumericStepper.set_color","flixel/addons/ui/FlxUINumericStepper.hx",52,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(53)
	this->color = Value;
	HX_STACK_LINE(54)
	::flixel::addons::ui::FlxUITypedButton tmp = this->button_plus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	tmp->set_color(tmp1);
	HX_STACK_LINE(55)
	::flixel::addons::ui::FlxUITypedButton tmp2 = this->button_minus;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	tmp2->set_color(tmp3);
	HX_STACK_LINE(56)
	::flixel::text::FlxText tmp4 = this->text_field;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::addons::ui::FlxInputText >());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	if ((tmp5)){
		HX_STACK_LINE(57)
		::flixel::text::FlxText tmp6 = this->text_field;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		::flixel::addons::ui::FlxInputText fit = ((::flixel::addons::ui::FlxInputText)(tmp6));		HX_STACK_VAR(fit,"fit");
		HX_STACK_LINE(58)
		int tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		fit->set_backgroundColor(tmp7);
	}
	else{
		HX_STACK_LINE(60)
		::flixel::text::FlxText tmp6 = this->text_field;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		int tmp7 = Value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		tmp6->set_color(tmp7);
	}
	HX_STACK_LINE(62)
	int tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	return tmp6;
}


Float FlxUINumericStepper_obj::set_min( Float f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_min",0x8923a2c0,"flixel.addons.ui.FlxUINumericStepper.set_min","flixel/addons/ui/FlxUINumericStepper.hx",65,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(66)
	this->min = f;
	HX_STACK_LINE(67)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	if ((tmp2)){
		HX_STACK_LINE(67)
		Float tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		this->set_value(tmp3);
	}
	HX_STACK_LINE(68)
	Float tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_min,return )

Float FlxUINumericStepper_obj::set_max( Float f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_max",0x89239bd2,"flixel.addons.ui.FlxUINumericStepper.set_max","flixel/addons/ui/FlxUINumericStepper.hx",71,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(72)
	this->max = f;
	HX_STACK_LINE(73)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	Float tmp1 = this->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	if ((tmp2)){
		HX_STACK_LINE(73)
		Float tmp3 = this->max;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		this->set_value(tmp3);
	}
	HX_STACK_LINE(74)
	Float tmp3 = this->max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_max,return )

Float FlxUINumericStepper_obj::set_value( Float f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_value",0xfcb2381f,"flixel.addons.ui.FlxUINumericStepper.set_value","flixel/addons/ui/FlxUINumericStepper.hx",77,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(78)
	this->value = f;
	HX_STACK_LINE(79)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	if ((tmp2)){
		HX_STACK_LINE(79)
		Float tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		this->value = tmp3;
	}
	HX_STACK_LINE(80)
	Float tmp3 = this->value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	Float tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	if ((tmp5)){
		HX_STACK_LINE(80)
		Float tmp6 = this->max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		this->value = tmp6;
	}
	HX_STACK_LINE(81)
	::flixel::text::FlxText tmp6 = this->text_field;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	if ((tmp7)){
		HX_STACK_LINE(82)
		::flixel::text::FlxText tmp8 = this->text_field;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			int tmp10 = this->decimals;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float tmp11 = ::Math_obj::pow((int)10,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			Float tens = tmp11;		HX_STACK_VAR(tens,"tens");
			HX_STACK_LINE(82)
			Float tmp12 = this->value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			Float tmp13 = tens;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			Float tmp16 = tens;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			tmp9 = ::Std_obj::string(tmp17);
		}
		HX_STACK_LINE(82)
		tmp8->set_text(tmp9);
	}
	HX_STACK_LINE(84)
	Float tmp8 = this->value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(84)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_value,return )

int FlxUINumericStepper_obj::set_decimals( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_decimals",0xbb56b2d4,"flixel.addons.ui.FlxUINumericStepper.set_decimals","flixel/addons/ui/FlxUINumericStepper.hx",87,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(88)
	this->decimals = i;
	HX_STACK_LINE(89)
	bool tmp = (i < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	if ((tmp)){
		HX_STACK_LINE(89)
		this->decimals = (int)0;
	}
	HX_STACK_LINE(90)
	Float tmp1 = this->value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	this->set_value(tmp1);
	HX_STACK_LINE(91)
	int tmp2 = this->decimals;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_decimals,return )

int FlxUINumericStepper_obj::set_stack( int s){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_stack",0x4f051ff6,"flixel.addons.ui.FlxUINumericStepper.set_stack","flixel/addons/ui/FlxUINumericStepper.hx",94,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(95)
	this->stack = s;
	HX_STACK_LINE(96)
	int btnSize = (int)10;		HX_STACK_VAR(btnSize,"btnSize");
	HX_STACK_LINE(97)
	int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(98)
	int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(99)
	::flixel::text::FlxText tmp = this->text_field;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	if ((tmp1)){
		HX_STACK_LINE(100)
		offsetX = (int)1;
		HX_STACK_LINE(101)
		offsetY = (int)1;
	}
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int tmp2 = this->stack;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		switch( (int)(tmp3)){
			case (int)1: {
				HX_STACK_LINE(105)
				::flixel::text::FlxText tmp4 = this->text_field;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				Float tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				int tmp6 = ((int)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				int tmp7 = ((int)2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(105)
				btnSize = tmp7;
				HX_STACK_LINE(106)
				::flixel::addons::ui::FlxUITypedButton tmp8 = this->button_plus;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(106)
				Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				int tmp10 = btnSize;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(106)
				if ((tmp11)){
					HX_STACK_LINE(107)
					::flixel::addons::ui::FlxUITypedButton tmp12 = this->button_plus;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(107)
					int tmp13 = btnSize;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(107)
					int tmp14 = btnSize;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(107)
					tmp12->resize(tmp13,tmp14);
				}
				HX_STACK_LINE(109)
				::flixel::addons::ui::FlxUITypedButton tmp12 = this->button_minus;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				Float tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(109)
				int tmp14 = btnSize;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				if ((tmp15)){
					HX_STACK_LINE(110)
					::flixel::addons::ui::FlxUITypedButton tmp16 = this->button_minus;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(110)
					int tmp17 = btnSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(110)
					int tmp18 = btnSize;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(110)
					tmp16->resize(tmp17,tmp18);
				}
				HX_STACK_LINE(112)
				::flixel::addons::ui::FlxUITypedButton tmp16 = this->button_plus;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(112)
				int tmp17 = offsetX;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(112)
				::flixel::text::FlxText tmp18 = this->text_field;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(112)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(112)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(112)
				::flixel::text::FlxText tmp21 = this->text_field;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(112)
				Float tmp22 = tmp21->get_width();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(112)
				Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(112)
				tmp16->set_x(tmp23);
				HX_STACK_LINE(113)
				::flixel::addons::ui::FlxUITypedButton tmp24 = this->button_plus;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(113)
				int tmp25 = offsetY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(113)
				int tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(113)
				::flixel::text::FlxText tmp27 = this->text_field;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(113)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(113)
				Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(113)
				tmp24->set_y(tmp29);
				HX_STACK_LINE(114)
				::flixel::addons::ui::FlxUITypedButton tmp30 = this->button_minus;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(114)
				::flixel::addons::ui::FlxUITypedButton tmp31 = this->button_plus;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(114)
				Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(114)
				::flixel::addons::ui::FlxUITypedButton tmp33 = this->button_plus;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(114)
				Float tmp34 = tmp33->get_width();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(114)
				Float tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(114)
				tmp30->set_x(tmp35);
				HX_STACK_LINE(115)
				::flixel::addons::ui::FlxUITypedButton tmp36 = this->button_minus;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(115)
				::flixel::addons::ui::FlxUITypedButton tmp37 = this->button_plus;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(115)
				Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(115)
				tmp36->set_y(tmp38);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(117)
				::flixel::text::FlxText tmp4 = this->text_field;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(117)
				Float tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(117)
				Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(117)
				int tmp7 = ((int)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				int tmp8 = ((int)1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(117)
				btnSize = tmp8;
				HX_STACK_LINE(118)
				::flixel::addons::ui::FlxUITypedButton tmp9 = this->button_plus;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				int tmp11 = btnSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				if ((tmp12)){
					HX_STACK_LINE(119)
					::flixel::addons::ui::FlxUITypedButton tmp13 = this->button_plus;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(119)
					int tmp14 = btnSize;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(119)
					int tmp15 = btnSize;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(119)
					tmp13->resize(tmp14,tmp15);
				}
				HX_STACK_LINE(121)
				::flixel::addons::ui::FlxUITypedButton tmp13 = this->button_minus;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				int tmp15 = btnSize;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				if ((tmp16)){
					HX_STACK_LINE(122)
					::flixel::addons::ui::FlxUITypedButton tmp17 = this->button_minus;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(122)
					int tmp18 = btnSize;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(122)
					int tmp19 = btnSize;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(122)
					tmp17->resize(tmp18,tmp19);
				}
				HX_STACK_LINE(124)
				::flixel::addons::ui::FlxUITypedButton tmp17 = this->button_plus;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(124)
				int tmp18 = offsetX;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(124)
				::flixel::text::FlxText tmp19 = this->text_field;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(124)
				Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(124)
				Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(124)
				::flixel::text::FlxText tmp22 = this->text_field;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(124)
				Float tmp23 = tmp22->get_width();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(124)
				tmp17->set_x(tmp24);
				HX_STACK_LINE(125)
				::flixel::addons::ui::FlxUITypedButton tmp25 = this->button_plus;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(125)
				int tmp26 = offsetY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(125)
				int tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(125)
				::flixel::text::FlxText tmp28 = this->text_field;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(125)
				Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(125)
				Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(125)
				tmp25->set_y(tmp30);
				HX_STACK_LINE(126)
				::flixel::addons::ui::FlxUITypedButton tmp31 = this->button_minus;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(126)
				int tmp32 = offsetX;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(126)
				::flixel::text::FlxText tmp33 = this->text_field;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(126)
				Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(126)
				Float tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(126)
				::flixel::text::FlxText tmp36 = this->text_field;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(126)
				Float tmp37 = tmp36->get_width();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(126)
				Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(126)
				tmp31->set_x(tmp38);
				HX_STACK_LINE(127)
				::flixel::addons::ui::FlxUITypedButton tmp39 = this->button_minus;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(127)
				int tmp40 = offsetY;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(127)
				::flixel::text::FlxText tmp41 = this->text_field;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(127)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(127)
				Float tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(127)
				::flixel::text::FlxText tmp44 = this->text_field;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(127)
				Float tmp45 = tmp44->get_height();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(127)
				::flixel::addons::ui::FlxUITypedButton tmp46 = this->button_minus;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(127)
				Float tmp47 = tmp46->get_height();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(127)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(127)
				Float tmp49 = (tmp43 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(127)
				tmp39->set_y(tmp49);
			}
			;break;
		}
	}
	HX_STACK_LINE(129)
	int tmp2 = this->stack;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_stack,return )

::String FlxUINumericStepper_obj::decimalize( Float f,int digits){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","decimalize",0x151fa4b8,"flixel.addons.ui.FlxUINumericStepper.decimalize","flixel/addons/ui/FlxUINumericStepper.hx",132,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(digits,"digits")
	HX_STACK_LINE(133)
	int tmp = digits;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	Float tmp1 = ::Math_obj::pow((int)10,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	Float tens = tmp1;		HX_STACK_VAR(tens,"tens");
	HX_STACK_LINE(134)
	Float tmp2 = (f * tens);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	Float tmp4 = tens;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(134)
	::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(134)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUINumericStepper_obj,decimalize,return )

Void FlxUINumericStepper_obj::_onInputTextEvent( ::String text,::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_onInputTextEvent",0x97f1d1ec,"flixel.addons.ui.FlxUINumericStepper._onInputTextEvent","flixel/addons/ui/FlxUINumericStepper.hx",207,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(208)
		bool tmp = (text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		if ((tmp)){
			HX_STACK_LINE(210)
			Float tmp1 = this->min;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			text = tmp2;
		}
		HX_STACK_LINE(212)
		::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		this->set_value(tmp2);
		HX_STACK_LINE(213)
		this->_doCallback(HX_HCSTRING("edit_numeric_stepper","\xea","\x96","\x04","\x5c"));
		HX_STACK_LINE(214)
		this->_doCallback(HX_HCSTRING("change_numeric_stepper","\x50","\x0a","\xcc","\xbb"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUINumericStepper_obj,_onInputTextEvent,(void))

Void FlxUINumericStepper_obj::_onPlus( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_onPlus",0xcab59143,"flixel.addons.ui.FlxUINumericStepper._onPlus","flixel/addons/ui/FlxUINumericStepper.hx",217,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::flixel::addons::ui::FlxUINumericStepper _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			Float tmp = _g->value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(218)
			Float tmp1 = this->stepSize;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(218)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(219)
		this->_doCallback(HX_HCSTRING("click_numeric_stepper","\x28","\x25","\x65","\x6e"));
		HX_STACK_LINE(220)
		this->_doCallback(HX_HCSTRING("change_numeric_stepper","\x50","\x0a","\xcc","\xbb"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUINumericStepper_obj,_onPlus,(void))

Void FlxUINumericStepper_obj::_onMinus( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_onMinus",0xd7f4da67,"flixel.addons.ui.FlxUINumericStepper._onMinus","flixel/addons/ui/FlxUINumericStepper.hx",223,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::flixel::addons::ui::FlxUINumericStepper _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			Float tmp = _g->value;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(224)
			Float tmp1 = this->stepSize;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(224)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			_g->set_value(tmp2);
		}
		HX_STACK_LINE(225)
		this->_doCallback(HX_HCSTRING("click_numeric_stepper","\x28","\x25","\x65","\x6e"));
		HX_STACK_LINE(226)
		this->_doCallback(HX_HCSTRING("change_numeric_stepper","\x50","\x0a","\xcc","\xbb"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUINumericStepper_obj,_onMinus,(void))

Void FlxUINumericStepper_obj::_doCallback( ::String event_name){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_doCallback",0xf5f9d69a,"flixel.addons.ui.FlxUINumericStepper._doCallback","flixel/addons/ui/FlxUINumericStepper.hx",229,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event_name,"event_name")
		HX_STACK_LINE(230)
		bool tmp = this->broadcastToFlxUI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		if ((tmp)){
			HX_STACK_LINE(231)
			::String tmp1 = event_name;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(231)
			Float tmp2 = this->value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			::flixel::addons::ui::FlxUI_obj::event(tmp1,hx::ObjectPtr<OBJ_>(this),tmp2,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,_doCallback,(void))

int FlxUINumericStepper_obj::STACK_VERTICAL;

int FlxUINumericStepper_obj::STACK_HORIZONTAL;

::String FlxUINumericStepper_obj::CLICK_EVENT;

::String FlxUINumericStepper_obj::EDIT_EVENT;

::String FlxUINumericStepper_obj::CHANGE_EVENT;


FlxUINumericStepper_obj::FlxUINumericStepper_obj()
{
}

void FlxUINumericStepper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUINumericStepper);
	HX_MARK_MEMBER_NAME(button_plus,"button_plus");
	HX_MARK_MEMBER_NAME(button_minus,"button_minus");
	HX_MARK_MEMBER_NAME(text_field,"text_field");
	HX_MARK_MEMBER_NAME(stepSize,"stepSize");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUINumericStepper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button_plus,"button_plus");
	HX_VISIT_MEMBER_NAME(button_minus,"button_minus");
	HX_VISIT_MEMBER_NAME(text_field,"text_field");
	HX_VISIT_MEMBER_NAME(stepSize,"stepSize");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(stack,"stack");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUINumericStepper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		if (HX_FIELD_EQ(inName,"_onPlus") ) { return _onPlus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stepSize") ) { return stepSize; }
		if (HX_FIELD_EQ(inName,"decimals") ) { return decimals; }
		if (HX_FIELD_EQ(inName,"_onMinus") ) { return _onMinus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stack") ) { return set_stack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_field") ) { return text_field; }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"decimalize") ) { return decimalize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"button_plus") ) { return button_plus; }
		if (HX_FIELD_EQ(inName,"_doCallback") ) { return _doCallback_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"button_minus") ) { return button_minus; }
		if (HX_FIELD_EQ(inName,"set_decimals") ) { return set_decimals_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onInputTextEvent") ) { return _onInputTextEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUINumericStepper_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue);min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue);max=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { if (inCallProp == hx::paccAlways) return set_stack(inValue);stack=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return set_params(inValue);params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stepSize") ) { stepSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decimals") ) { if (inCallProp == hx::paccAlways) return set_decimals(inValue);decimals=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_field") ) { text_field=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"button_plus") ) { button_plus=inValue.Cast< ::flixel::addons::ui::FlxUITypedButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"button_minus") ) { button_minus=inValue.Cast< ::flixel::addons::ui::FlxUITypedButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUINumericStepper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUINumericStepper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("button_plus","\x07","\xac","\xe8","\xb7"));
	outFields->push(HX_HCSTRING("button_minus","\x23","\x2b","\x79","\x77"));
	outFields->push(HX_HCSTRING("text_field","\x68","\xe8","\xd6","\xfe"));
	outFields->push(HX_HCSTRING("stepSize","\x2d","\x4a","\x7c","\x9f"));
	outFields->push(HX_HCSTRING("decimals","\xc2","\x4a","\x6a","\x12"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::FlxUITypedButton*/ ,(int)offsetof(FlxUINumericStepper_obj,button_plus),HX_HCSTRING("button_plus","\x07","\xac","\xe8","\xb7")},
	{hx::fsObject /*::flixel::addons::ui::FlxUITypedButton*/ ,(int)offsetof(FlxUINumericStepper_obj,button_minus),HX_HCSTRING("button_minus","\x23","\x2b","\x79","\x77")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(FlxUINumericStepper_obj,text_field),HX_HCSTRING("text_field","\x68","\xe8","\xd6","\xfe")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,stepSize),HX_HCSTRING("stepSize","\x2d","\x4a","\x7c","\x9f")},
	{hx::fsInt,(int)offsetof(FlxUINumericStepper_obj,decimals),HX_HCSTRING("decimals","\xc2","\x4a","\x6a","\x12")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(FlxUINumericStepper_obj,stack),HX_HCSTRING("stack","\x48","\x67","\x0b","\x84")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxUINumericStepper_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsBool,(int)offsetof(FlxUINumericStepper_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxUINumericStepper_obj::STACK_VERTICAL,HX_HCSTRING("STACK_VERTICAL","\xad","\x7f","\x2e","\xce")},
	{hx::fsInt,(void *) &FlxUINumericStepper_obj::STACK_HORIZONTAL,HX_HCSTRING("STACK_HORIZONTAL","\xdb","\x1f","\xfd","\x43")},
	{hx::fsString,(void *) &FlxUINumericStepper_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{hx::fsString,(void *) &FlxUINumericStepper_obj::EDIT_EVENT,HX_HCSTRING("EDIT_EVENT","\xc5","\xfc","\x39","\xc0")},
	{hx::fsString,(void *) &FlxUINumericStepper_obj::CHANGE_EVENT,HX_HCSTRING("CHANGE_EVENT","\xab","\x38","\xff","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("button_plus","\x07","\xac","\xe8","\xb7"),
	HX_HCSTRING("button_minus","\x23","\x2b","\x79","\x77"),
	HX_HCSTRING("text_field","\x68","\xe8","\xd6","\xfe"),
	HX_HCSTRING("stepSize","\x2d","\x4a","\x7c","\x9f"),
	HX_HCSTRING("decimals","\xc2","\x4a","\x6a","\x12"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("stack","\x48","\x67","\x0b","\x84"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("set_decimals","\x3f","\x22","\x7d","\xdc"),
	HX_HCSTRING("set_stack","\xab","\xaf","\x05","\xab"),
	HX_HCSTRING("decimalize","\x63","\xd3","\x9c","\x39"),
	HX_HCSTRING("_onInputTextEvent","\xa1","\x9e","\x48","\xf2"),
	HX_HCSTRING("_onPlus","\xb8","\x59","\x5b","\x5b"),
	HX_HCSTRING("_onMinus","\x52","\x78","\x5e","\xd8"),
	HX_HCSTRING("_doCallback","\x8f","\x7d","\x05","\xbf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::STACK_VERTICAL,"STACK_VERTICAL");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::EDIT_EVENT,"EDIT_EVENT");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::STACK_VERTICAL,"STACK_VERTICAL");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::EDIT_EVENT,"EDIT_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#endif

hx::Class FlxUINumericStepper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STACK_VERTICAL","\xad","\x7f","\x2e","\xce"),
	HX_HCSTRING("STACK_HORIZONTAL","\xdb","\x1f","\xfd","\x43"),
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	HX_HCSTRING("EDIT_EVENT","\xc5","\xfc","\x39","\xc0"),
	HX_HCSTRING("CHANGE_EVENT","\xab","\x38","\xff","\x8d"),
	::String(null()) };

void FlxUINumericStepper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUINumericStepper","\xf9","\x94","\xc6","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUINumericStepper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUINumericStepper_obj >;
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

void FlxUINumericStepper_obj::__boot()
{
	STACK_VERTICAL= (int)0;
	STACK_HORIZONTAL= (int)1;
	CLICK_EVENT= HX_HCSTRING("click_numeric_stepper","\x28","\x25","\x65","\x6e");
	EDIT_EVENT= HX_HCSTRING("edit_numeric_stepper","\xea","\x96","\x04","\x5c");
	CHANGE_EVENT= HX_HCSTRING("change_numeric_stepper","\x50","\x0a","\xcc","\xbb");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
