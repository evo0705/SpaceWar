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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
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
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
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
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
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
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUICheckBox_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic Box,Dynamic Check,::String Label,Dynamic __o_LabelW,cpp::ArrayBase Params,Dynamic Callback)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","new",0x24a5788a,"flixel.addons.ui.FlxUICheckBox.new","flixel/addons/ui/FlxUICheckBox.hx",17,0xab9d9a07)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Box,"Box")
HX_STACK_ARG(Check,"Check")
HX_STACK_ARG(Label,"Label")
HX_STACK_ARG(__o_LabelW,"LabelW")
HX_STACK_ARG(Params,"Params")
HX_STACK_ARG(Callback,"Callback")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Dynamic LabelW = __o_LabelW.Default(100);
{
	HX_STACK_LINE(37)
	this->skipButtonUpdate = false;
	HX_STACK_LINE(35)
	this->box_space = ((Float)2);
	HX_STACK_LINE(33)
	this->textY = ((Float)0);
	HX_STACK_LINE(32)
	this->textX = ((Float)0);
	HX_STACK_LINE(30)
	this->checkbox_dirty = false;
	HX_STACK_LINE(28)
	this->textIsClickable = true;
	HX_STACK_LINE(24)
	this->checked = false;
	HX_STACK_LINE(22)
	this->max_width = ((Float)-1);
	HX_STACK_LINE(69)
	super::__construct(null(),null());
	HX_STACK_LINE(71)
	this->callback = Callback;
	HX_STACK_LINE(73)
	this->set_params(Params);
	HX_STACK_LINE(75)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	this->box = tmp;
	HX_STACK_LINE(76)
	bool tmp1 = (Box == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	if ((tmp1)){
		HX_STACK_LINE(78)
		Box = HX_HCSTRING("flixel/flixel-ui/img/check_box.png","\x66","\x4a","\x70","\x4f");
	}
	HX_STACK_LINE(81)
	::flixel::FlxSprite tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	Dynamic tmp3 = Box;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	tmp2->loadGraphic(tmp3,true,null(),null(),null(),null());
	HX_STACK_LINE(83)
	::String tmp4 = Label;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	Dynamic tmp5 = this->_clickCheck_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	::flixel::addons::ui::FlxUIButton tmp6 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	this->button = tmp6;
	HX_STACK_LINE(86)
	::flixel::addons::ui::FlxUIButton tmp7 = this->button;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	tmp7->label->__Field(HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"), hx::paccDynamic )(null(),(int)8,(int)16777215,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),(int)2,null(),null());
	HX_STACK_LINE(87)
	::flixel::addons::ui::FlxUIButton tmp8 = this->button;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	tmp8->up_color = (int)16777215;
	HX_STACK_LINE(88)
	::flixel::addons::ui::FlxUIButton tmp9 = this->button;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	tmp9->down_color = (int)16777215;
	HX_STACK_LINE(89)
	::flixel::addons::ui::FlxUIButton tmp10 = this->button;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(89)
	tmp10->over_color = (int)16777215;
	HX_STACK_LINE(90)
	::flixel::addons::ui::FlxUIButton tmp11 = this->button;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(90)
	tmp11->up_toggle_color = (int)16777215;
	HX_STACK_LINE(91)
	::flixel::addons::ui::FlxUIButton tmp12 = this->button;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	tmp12->down_toggle_color = (int)16777215;
	HX_STACK_LINE(92)
	::flixel::addons::ui::FlxUIButton tmp13 = this->button;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(92)
	tmp13->over_toggle_color = (int)16777215;
	HX_STACK_LINE(96)
	::flixel::addons::ui::FlxUIButton tmp14 = this->button;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(96)
	::flixel::FlxSprite tmp15 = this->box;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(96)
	Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(96)
	Float tmp17 = (tmp16 + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(96)
	Dynamic tmp18 = LabelW;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(96)
	Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(96)
	int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(96)
	::flixel::FlxSprite tmp21 = this->box;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(96)
	Float tmp22 = tmp21->get_height();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(96)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(96)
	tmp14->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")),tmp20,tmp23,null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(98)
	::flixel::FlxSprite tmp24 = this->box;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(98)
	Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(98)
	Float tmp26 = this->box_space;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(98)
	Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(98)
	Dynamic tmp28 = LabelW;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(98)
	Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(98)
	int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(98)
	this->max_width = tmp30;
	HX_STACK_LINE(100)
	Dynamic tmp31 = this->_clickCheck_dyn();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(100)
	::flixel::addons::ui::FlxUIButton tmp32 = this->button;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(100)
	tmp32->onUp->callback = tmp31;
	HX_STACK_LINE(102)
	::flixel::FlxSprite tmp33 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(102)
	this->mark = tmp33;
	HX_STACK_LINE(103)
	bool tmp34 = (Check == null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(103)
	if ((tmp34)){
		HX_STACK_LINE(105)
		Check = HX_HCSTRING("flixel/flixel-ui/img/check_mark.png","\x28","\xe6","\x7d","\xef");
	}
	HX_STACK_LINE(108)
	::flixel::FlxSprite tmp35 = this->mark;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(108)
	Dynamic tmp36 = Check;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(108)
	tmp35->loadGraphic(tmp36,null(),null(),null(),null(),null());
	HX_STACK_LINE(110)
	::flixel::FlxSprite tmp37 = this->box;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(110)
	this->add(tmp37);
	HX_STACK_LINE(111)
	::flixel::FlxSprite tmp38 = this->mark;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(111)
	this->add(tmp38);
	HX_STACK_LINE(112)
	::flixel::addons::ui::FlxUIButton tmp39 = this->button;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(112)
	this->add(tmp39);
	HX_STACK_LINE(114)
	this->anchorLabelX();
	HX_STACK_LINE(115)
	this->anchorLabelY();
	HX_STACK_LINE(117)
	this->set_checked(false);
	HX_STACK_LINE(120)
	::flixel::addons::ui::FlxUIButton tmp40 = this->button;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(120)
	::flixel::util::FlxPoint tmp41 = tmp40->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(120)
	tmp41->set_x((int)0);
	HX_STACK_LINE(121)
	::flixel::addons::ui::FlxUIButton tmp42 = this->button;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(121)
	::flixel::util::FlxPoint tmp43 = tmp42->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(121)
	tmp43->set_y((int)0);
	HX_STACK_LINE(122)
	::flixel::addons::ui::FlxUIButton tmp44 = this->button;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(122)
	::flixel::util::FlxPoint tmp45 = tmp44->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(122)
	tmp45->set_x((int)0);
	HX_STACK_LINE(123)
	::flixel::addons::ui::FlxUIButton tmp46 = this->button;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(123)
	::flixel::util::FlxPoint tmp47 = tmp46->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(123)
	tmp47->set_y((int)0);
	HX_STACK_LINE(124)
	::flixel::addons::ui::FlxUIButton tmp48 = this->button;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(124)
	::flixel::util::FlxPoint tmp49 = tmp48->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(124)
	tmp49->set_x((int)0);
	HX_STACK_LINE(125)
	::flixel::addons::ui::FlxUIButton tmp50 = this->button;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(125)
	::flixel::util::FlxPoint tmp51 = tmp50->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(125)
	tmp51->set_y((int)0);
	HX_STACK_LINE(127)
	Float tmp52 = X;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(127)
	this->set_x(tmp52);
	HX_STACK_LINE(128)
	Float tmp53 = Y;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(128)
	this->set_y(tmp53);
	HX_STACK_LINE(130)
	this->set_textX((int)0);
	HX_STACK_LINE(131)
	this->set_textY((int)0);
}
;
	return null();
}

//FlxUICheckBox_obj::~FlxUICheckBox_obj() { }

Dynamic FlxUICheckBox_obj::__CreateEmpty() { return  new FlxUICheckBox_obj; }
hx::ObjectPtr< FlxUICheckBox_obj > FlxUICheckBox_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic Box,Dynamic Check,::String Label,Dynamic __o_LabelW,cpp::ArrayBase Params,Dynamic Callback)
{  hx::ObjectPtr< FlxUICheckBox_obj > _result_ = new FlxUICheckBox_obj();
	_result_->__construct(__o_X,__o_Y,Box,Check,Label,__o_LabelW,Params,Callback);
	return _result_;}

Dynamic FlxUICheckBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUICheckBox_obj > _result_ = new FlxUICheckBox_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

hx::Object *FlxUICheckBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ILabeled_obj)) return operator ::flixel::addons::ui::interfaces::ILabeled_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ICursorPointable_obj)) return operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *();
	return super::__ToInterface(inType);
}

FlxUICheckBox_obj::operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUICheckBox_obj >(this); }
FlxUICheckBox_obj::operator ::flixel::addons::ui::interfaces::ILabeled_obj *()
	{ return new ::flixel::addons::ui::interfaces::ILabeled_delegate_< FlxUICheckBox_obj >(this); }
FlxUICheckBox_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUICheckBox_obj >(this); }
FlxUICheckBox_obj::operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *()
	{ return new ::flixel::addons::ui::interfaces::ICursorPointable_delegate_< FlxUICheckBox_obj >(this); }
bool FlxUICheckBox_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_skipButtonUpdate",0x88caa7cd,"flixel.addons.ui.FlxUICheckBox.set_skipButtonUpdate","flixel/addons/ui/FlxUICheckBox.hx",43,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(44)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(45)
	::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	bool tmp1 = this->skipButtonUpdate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	tmp->set_skipButtonUpdate(tmp1);
	HX_STACK_LINE(46)
	bool tmp2 = this->skipButtonUpdate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_skipButtonUpdate,return )

cpp::ArrayBase FlxUICheckBox_obj::set_params( cpp::ArrayBase p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_params",0xd67a1a99,"flixel.addons.ui.FlxUICheckBox.set_params","flixel/addons/ui/FlxUICheckBox.hx",48,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(49)
	this->params = p;
	HX_STACK_LINE(50)
	bool tmp = (this->params == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(52)
		this->params = cpp::ArrayBase_obj::__new();
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUICheckBox.hx",54,0xab9d9a07)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("checked","\x27","\xb3","\x24","\x13"),false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(54)
	Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	Dynamic nb = tmp1;		HX_STACK_VAR(nb,"nb");
	HX_STACK_LINE(55)
	Dynamic tmp2 = nb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	this->params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	HX_STACK_LINE(56)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_params,return )

int FlxUICheckBox_obj::set_color( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_color",0x10dbdd70,"flixel.addons.ui.FlxUICheckBox.set_color","flixel/addons/ui/FlxUICheckBox.hx",59,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(60)
	::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	if ((tmp1)){
		HX_STACK_LINE(62)
		::flixel::addons::ui::FlxUIButton tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		tmp2->label->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp3);
	}
	HX_STACK_LINE(64)
	int tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	int tmp3 = this->super::set_color(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	return tmp3;
}


::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","setLabel",0xd38df688,"flixel.addons.ui.FlxUICheckBox.setLabel","flixel/addons/ui/FlxUICheckBox.hx",136,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(136)
	::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	if ((tmp1)){
		HX_STACK_LINE(136)
		return null();
	}
	HX_STACK_LINE(136)
	::flixel::addons::ui::FlxUIButton tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	::flixel::addons::ui::FlxUIText tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	tmp2->set_label(tmp3);
	HX_STACK_LINE(136)
	::flixel::addons::ui::FlxUIButton tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	::flixel::addons::ui::FlxUIText tmp5 = tmp4->label;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,setLabel,return )

::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::getLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","getLabel",0x25309d14,"flixel.addons.ui.FlxUICheckBox.getLabel","flixel/addons/ui/FlxUICheckBox.hx",137,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp1)){
		HX_STACK_LINE(137)
		return null();
	}
	HX_STACK_LINE(137)
	::flixel::addons::ui::FlxUIButton tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	::flixel::addons::ui::FlxUIText tmp3 = tmp2->label;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,getLabel,return )

bool FlxUICheckBox_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_visible",0x9960c1bf,"flixel.addons.ui.FlxUICheckBox.set_visible","flixel/addons/ui/FlxUICheckBox.hx",140,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(142)
	this->visible = Value;
	HX_STACK_LINE(143)
	bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	return tmp;
}


Void FlxUICheckBox_obj::anchorTime( ::flixel::util::FlxTimer f){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","anchorTime",0xb5482238,"flixel.addons.ui.FlxUICheckBox.anchorTime","flixel/addons/ui/FlxUICheckBox.hx",147,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(147)
		this->anchorLabelY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,anchorTime,(void))

Float FlxUICheckBox_obj::set_textX( Float n){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_textX",0xd418b718,"flixel.addons.ui.FlxUICheckBox.set_textX","flixel/addons/ui/FlxUICheckBox.hx",150,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(151)
	this->textX = n;
	HX_STACK_LINE(152)
	this->anchorLabelX();
	HX_STACK_LINE(153)
	Float tmp = this->textX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textX,return )

Float FlxUICheckBox_obj::set_textY( Float n){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_textY",0xd418b719,"flixel.addons.ui.FlxUICheckBox.set_textY","flixel/addons/ui/FlxUICheckBox.hx",156,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(157)
	this->textY = n;
	HX_STACK_LINE(158)
	this->anchorLabelY();
	HX_STACK_LINE(159)
	Float tmp = this->textY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textY,return )

Void FlxUICheckBox_obj::anchorLabelX( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","anchorLabelX",0xdbea9ecf,"flixel.addons.ui.FlxUICheckBox.anchorLabelX","flixel/addons/ui/FlxUICheckBox.hx",162,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(164)
			::flixel::addons::ui::FlxUIButton tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			::flixel::util::FlxPoint tmp3 = tmp2->label->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			::flixel::FlxSprite tmp4 = this->box;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			Float tmp6 = this->box_space;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(164)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(164)
			Float tmp8 = this->textX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(164)
			Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(164)
			tmp3->set_x(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelX,(void))

Void FlxUICheckBox_obj::anchorLabelY( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","anchorLabelY",0xdbea9ed0,"flixel.addons.ui.FlxUICheckBox.anchorLabelY","flixel/addons/ui/FlxUICheckBox.hx",168,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		if ((tmp1)){
			HX_STACK_LINE(170)
			::flixel::addons::ui::FlxUIButton tmp2 = this->button;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			::flixel::FlxSprite tmp3 = this->box;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			::flixel::FlxSprite tmp5 = this->box;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			::flixel::addons::ui::FlxUIButton tmp7 = this->button;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			Float tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(170)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			Float tmp11 = (tmp4 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			Float tmp12 = this->textY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(170)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(170)
			tmp2->set_y(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelY,(void))

Void FlxUICheckBox_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","destroy",0xc5a03224,"flixel.addons.ui.FlxUICheckBox.destroy","flixel/addons/ui/FlxUICheckBox.hx",175,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		this->super::destroy();
		HX_STACK_LINE(177)
		::flixel::FlxSprite tmp = this->mark;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(178)
			::flixel::FlxSprite tmp2 = this->mark;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(178)
			tmp2->destroy();
			HX_STACK_LINE(179)
			this->mark = null();
		}
		HX_STACK_LINE(181)
		::flixel::FlxSprite tmp2 = this->box;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		if ((tmp3)){
			HX_STACK_LINE(182)
			::flixel::FlxSprite tmp4 = this->box;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			tmp4->destroy();
			HX_STACK_LINE(183)
			this->box = null();
		}
		HX_STACK_LINE(185)
		::flixel::addons::ui::FlxUIButton tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		if ((tmp5)){
			HX_STACK_LINE(186)
			::flixel::addons::ui::FlxUIButton tmp6 = this->button;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			tmp6->destroy();
			HX_STACK_LINE(187)
			this->button = null();
		}
	}
return null();
}


::String FlxUICheckBox_obj::get_text( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","get_text",0x225f07cc,"flixel.addons.ui.FlxUICheckBox.get_text","flixel/addons/ui/FlxUICheckBox.hx",192,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	::String tmp1 = tmp->label->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,get_text,return )

::String FlxUICheckBox_obj::set_text( ::String value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_text",0xd0bc6140,"flixel.addons.ui.FlxUICheckBox.set_text","flixel/addons/ui/FlxUICheckBox.hx",194,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(195)
	::flixel::addons::ui::FlxUIButton tmp = this->button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	tmp->label->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(196)
	this->checkbox_dirty = true;
	HX_STACK_LINE(197)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_text,return )

Void FlxUICheckBox_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","update",0x52efd41f,"flixel.addons.ui.FlxUICheckBox.update","flixel/addons/ui/FlxUICheckBox.hx",200,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		this->super::update();
		HX_STACK_LINE(203)
		bool tmp = this->checkbox_dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		if ((tmp)){
			HX_STACK_LINE(204)
			::flixel::addons::ui::FlxUIButton tmp1 = this->button;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(204)
			::flixel::addons::ui::FlxUIText tmp2 = tmp1->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			if ((tmp3)){
				HX_STACK_LINE(205)
				::flixel::addons::ui::FlxUIButton tmp4 = this->button;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(205)
				::flixel::addons::ui::FlxUIText tmp5 = tmp4->label;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(205)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::flixel::addons::ui::FlxUIText >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(205)
				if ((tmp6)){
					HX_STACK_LINE(206)
					::flixel::addons::ui::FlxUIButton tmp7 = this->button;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(206)
					::flixel::addons::ui::FlxUIText ftu = ((::flixel::addons::ui::FlxUIText)(tmp7->label));		HX_STACK_VAR(ftu,"ftu");
					HX_STACK_LINE(207)
					{
						HX_STACK_LINE(207)
						bool Force = false;		HX_STACK_VAR(Force,"Force");
						HX_STACK_LINE(207)
						ftu->calcFrame(true);
					}
				}
				HX_STACK_LINE(209)
				this->anchorLabelX();
				HX_STACK_LINE(210)
				this->anchorLabelY();
				HX_STACK_LINE(211)
				::flixel::addons::ui::FlxUIButton tmp7 = this->button;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(211)
				::flixel::FlxSprite tmp8 = this->box;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(211)
				int tmp9 = tmp8->frameWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(211)
				::flixel::addons::ui::FlxUIButton tmp10 = this->button;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(211)
				::openfl::_legacy::text::TextField tmp11 = tmp10->label->__Field(HX_HCSTRING("get_textField","\xa4","\xf8","\xe4","\x5a"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(211)
				Float tmp12 = tmp11->get_textWidth();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(211)
				Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(211)
				::flixel::addons::ui::FlxUIButton tmp14 = this->button;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(211)
				Float tmp15 = tmp14->label->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(211)
				::flixel::addons::ui::FlxUIButton tmp16 = this->button;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(211)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(211)
				::flixel::FlxSprite tmp18 = this->box;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(211)
				int tmp19 = tmp18->frameWidth;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				Float tmp21 = (tmp15 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(211)
				Float tmp22 = (tmp13 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(211)
				tmp7->set_width(tmp22);
				HX_STACK_LINE(212)
				this->checkbox_dirty = false;
			}
		}
	}
return null();
}


bool FlxUICheckBox_obj::set_checked( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","set_checked",0x0960fc74,"flixel.addons.ui.FlxUICheckBox.set_checked","flixel/addons/ui/FlxUICheckBox.hx",219,0xab9d9a07)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(220)
	::flixel::FlxSprite tmp = this->mark;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	tmp->set_visible(tmp1);
	HX_STACK_LINE(221)
	bool tmp2 = this->checked = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_checked,return )

Void FlxUICheckBox_obj::_clickCheck( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUICheckBox","_clickCheck",0xbe94b6a9,"flixel.addons.ui.FlxUICheckBox._clickCheck","flixel/addons/ui/FlxUICheckBox.hx",227,0xab9d9a07)
		HX_STACK_THIS(this)
		HX_STACK_LINE(228)
		bool tmp = this->checked;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		this->set_checked(tmp1);
		HX_STACK_LINE(229)
		Dynamic tmp2 = this->callback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		if ((tmp3)){
			HX_STACK_LINE(230)
			this->callback();
		}
		HX_STACK_LINE(232)
		bool tmp4 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		if ((tmp4)){
			HX_STACK_LINE(233)
			bool tmp5 = this->checked;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("click_check_box","\xdd","\xc1","\x1e","\xa8"),hx::ObjectPtr<OBJ_>(this),tmp5,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,_clickCheck,(void))

::String FlxUICheckBox_obj::CLICK_EVENT;


FlxUICheckBox_obj::FlxUICheckBox_obj()
{
}

void FlxUICheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUICheckBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(mark,"mark");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(max_width,"max_width");
	HX_MARK_MEMBER_NAME(checked,"checked");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_MARK_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(box_space,"box_space");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUICheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(mark,"mark");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(max_width,"max_width");
	HX_VISIT_MEMBER_NAME(checked,"checked");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_VISIT_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(box_space,"box_space");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUICheckBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { return mark; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { return textX; }
		if (HX_FIELD_EQ(inName,"textY") ) { return textY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return button; }
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { return checked; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return setLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return getLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { return max_width; }
		if (HX_FIELD_EQ(inName,"box_space") ) { return box_space; }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textX") ) { return set_textX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textY") ) { return set_textY_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTime") ) { return anchorTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_checked") ) { return set_checked_dyn(); }
		if (HX_FIELD_EQ(inName,"_clickCheck") ) { return _clickCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"anchorLabelX") ) { return anchorLabelX_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorLabelY") ) { return anchorLabelY_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { return checkbox_dirty; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { return textIsClickable; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUICheckBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { mark=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { if (inCallProp == hx::paccAlways) return set_textX(inValue);textX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { if (inCallProp == hx::paccAlways) return set_textY(inValue);textY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return set_params(inValue);params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { if (inCallProp == hx::paccAlways) return set_checked(inValue);checked=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { max_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"box_space") ) { box_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { checkbox_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { textIsClickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUICheckBox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUICheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"));
	outFields->push(HX_HCSTRING("mark","\x0d","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"));
	outFields->push(HX_HCSTRING("checked","\x27","\xb3","\x24","\x13"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("textIsClickable","\xeb","\xc4","\xa0","\xc4"));
	outFields->push(HX_HCSTRING("checkbox_dirty","\xd6","\xfd","\xf4","\xa5"));
	outFields->push(HX_HCSTRING("textX","\x0b","\x4b","\x99","\x0d"));
	outFields->push(HX_HCSTRING("textY","\x0c","\x4b","\x99","\x0d"));
	outFields->push(HX_HCSTRING("box_space","\x52","\x2c","\xa7","\x88"));
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUICheckBox_obj,box),HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUICheckBox_obj,mark),HX_HCSTRING("mark","\x0d","\x40","\x56","\x48")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIButton*/ ,(int)offsetof(FlxUICheckBox_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,max_width),HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checked),HX_HCSTRING("checked","\x27","\xb3","\x24","\x13")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxUICheckBox_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,textIsClickable),HX_HCSTRING("textIsClickable","\xeb","\xc4","\xa0","\xc4")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checkbox_dirty),HX_HCSTRING("checkbox_dirty","\xd6","\xfd","\xf4","\xa5")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textX),HX_HCSTRING("textX","\x0b","\x4b","\x99","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textY),HX_HCSTRING("textY","\x0c","\x4b","\x99","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,box_space),HX_HCSTRING("box_space","\x52","\x2c","\xa7","\x88")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUICheckBox_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUICheckBox_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("mark","\x0d","\x40","\x56","\x48"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"),
	HX_HCSTRING("checked","\x27","\xb3","\x24","\x13"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("textIsClickable","\xeb","\xc4","\xa0","\xc4"),
	HX_HCSTRING("checkbox_dirty","\xd6","\xfd","\xf4","\xa5"),
	HX_HCSTRING("textX","\x0b","\x4b","\x99","\x0d"),
	HX_HCSTRING("textY","\x0c","\x4b","\x99","\x0d"),
	HX_HCSTRING("box_space","\x52","\x2c","\xa7","\x88"),
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("setLabel","\xf2","\x76","\xe3","\x7d"),
	HX_HCSTRING("getLabel","\x7e","\x1d","\x86","\xcf"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("anchorTime","\x22","\x11","\x4e","\xc0"),
	HX_HCSTRING("set_textX","\x6e","\x93","\x93","\x34"),
	HX_HCSTRING("set_textY","\x6f","\x93","\x93","\x34"),
	HX_HCSTRING("anchorLabelX","\x39","\x9c","\x79","\x27"),
	HX_HCSTRING("anchorLabelY","\x3a","\x9c","\x79","\x27"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_checked","\x4a","\x1a","\x8c","\xa3"),
	HX_HCSTRING("_clickCheck","\x7f","\xd4","\xbf","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

hx::Class FlxUICheckBox_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	::String(null()) };

void FlxUICheckBox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUICheckBox","\x98","\x2b","\x10","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUICheckBox_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUICheckBox_obj >;
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

void FlxUICheckBox_obj::__boot()
{
	CLICK_EVENT= HX_HCSTRING("click_check_box","\xdd","\xc1","\x1e","\xa8");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
