#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#include <flixel/addons/ui/FlxUIDropDownMenu.h>
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
#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIDropDownMenu_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","new",0x9471b5d7,"flixel.addons.ui.FlxUIDropDownMenu.new","flixel/addons/ui/FlxUIDropDownMenu.hx",113,0x238549da)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(DataList,"DataList")
HX_STACK_ARG(Callback,"Callback")
HX_STACK_ARG(Header,"Header")
HX_STACK_ARG(DropPanel,"DropPanel")
HX_STACK_ARG(ButtonList,"ButtonList")
HX_STACK_ARG(UIControlCallback,"UIControlCallback")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(114)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(115)
	this->callback = Callback;
	HX_STACK_LINE(117)
	this->header = Header;
	HX_STACK_LINE(118)
	::flixel::addons::ui::FlxUIDropDownHeader tmp2 = this->header;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	if ((tmp3)){
		HX_STACK_LINE(120)
		::flixel::addons::ui::FlxUIDropDownHeader tmp4 = ::flixel::addons::ui::FlxUIDropDownHeader_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		this->header = tmp4;
	}
	HX_STACK_LINE(123)
	::flixel::addons::ui::FlxUIDropDownHeader tmp4 = this->header;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(123)
	Float tmp5 = tmp4->background->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(123)
	::flixel::addons::ui::FlxUIDropDownHeader tmp6 = this->header;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(123)
	Float tmp7 = tmp6->background->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(123)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(123)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(123)
	int yoff = tmp9;		HX_STACK_VAR(yoff,"yoff");
	HX_STACK_LINE(125)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(127)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(128)
	bool tmp10 = (DataList != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	if ((tmp10)){
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				bool tmp11 = (_g < DataList->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(130)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(130)
				if ((tmp12)){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(130)
				::flixel::addons::ui::StrIdLabel tmp13 = DataList->__get(_g).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(130)
				::flixel::addons::ui::StrIdLabel data = tmp13;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(130)
				++(_g);
				HX_STACK_LINE(132)
				int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(132)
				::String tmp15 = data->label;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(132)
				::String tmp16 = data->id;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(132)
				::flixel::addons::ui::FlxUIButton tmp17 = this->makeListButton(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(132)
				::flixel::addons::ui::FlxUIButton t = tmp17;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(133)
				::flixel::addons::ui::FlxUIButton tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(133)
				this->list->push(tmp18);
				HX_STACK_LINE(134)
				int tmp19 = yoff;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				t->set_y(tmp19);
				HX_STACK_LINE(135)
				::flixel::addons::ui::FlxUIDropDownHeader tmp20 = this->header;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(135)
				Float tmp21 = tmp20->background->get_height();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(135)
				hx::AddEq(yoff,tmp22);
				HX_STACK_LINE(137)
				(i)++;
			}
		}
		HX_STACK_LINE(139)
		::flixel::addons::ui::StrIdLabel tmp11 = DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(139)
		::String tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(139)
		::flixel::addons::ui::StrIdLabel tmp13 = DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(139)
		::String tmp14 = tmp13->label;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(139)
		this->selectSomething(tmp12,tmp14);
	}
	else{
		HX_STACK_LINE(141)
		bool tmp11 = (ButtonList != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		if ((tmp11)){
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			while((true)){
				HX_STACK_LINE(143)
				bool tmp12 = (_g < ButtonList->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(143)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(143)
				if ((tmp13)){
					HX_STACK_LINE(143)
					break;
				}
				HX_STACK_LINE(143)
				::flixel::addons::ui::FlxUIButton tmp14 = ButtonList->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(143)
				::flixel::addons::ui::FlxUIButton btn = tmp14;		HX_STACK_VAR(btn,"btn");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(145)
				::flixel::addons::ui::FlxUIButton tmp15 = btn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(145)
				this->list->push(tmp15);
				HX_STACK_LINE(146)
				::flixel::addons::ui::FlxUIDropDownHeader tmp16 = this->header;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(146)
				Float tmp17 = tmp16->background->get_width();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(146)
				::flixel::addons::ui::FlxUIDropDownHeader tmp18 = this->header;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(146)
				Float tmp19 = tmp18->background->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(146)
				btn->resize(tmp17,tmp19);
				HX_STACK_LINE(147)
				btn->set_x((int)1);
				HX_STACK_LINE(148)
				int tmp20 = yoff;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				btn->set_y(tmp20);
				HX_STACK_LINE(149)
				::flixel::addons::ui::FlxUIDropDownHeader tmp21 = this->header;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(149)
				Float tmp22 = tmp21->background->get_height();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(149)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(149)
				hx::AddEq(yoff,tmp23);
				HX_STACK_LINE(151)
				(i)++;
			}
		}
	}
	HX_STACK_LINE(155)
	this->dropPanel = DropPanel;
	HX_STACK_LINE(156)
	::flixel::addons::ui::FlxUI9SliceSprite tmp11 = this->dropPanel;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(156)
	bool tmp12 = (tmp11 == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(156)
	if ((tmp12)){
		HX_STACK_LINE(157)
		::flixel::addons::ui::FlxUIDropDownHeader tmp13 = this->header;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		Float tmp14 = tmp13->background->get_width();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(157)
		::flixel::addons::ui::FlxUIDropDownHeader tmp15 = this->header;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(157)
		Float tmp16 = tmp15->background->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(157)
		::openfl::_legacy::geom::Rectangle tmp17 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(157)
		::openfl::_legacy::geom::Rectangle rect = tmp17;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(158)
		::flixel::addons::ui::FlxUI9SliceSprite tmp18 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_HCSTRING("flixel/flixel-ui/img/box.png","\xdd","\xa4","\xcf","\x5b"),rect,Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)14).Add((int)14),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(158)
		this->dropPanel = tmp18;
	}
	HX_STACK_LINE(161)
	::flixel::addons::ui::FlxUI9SliceSprite tmp13 = this->dropPanel;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(161)
	::flixel::addons::ui::FlxUIDropDownHeader tmp14 = this->header;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(161)
	Float tmp15 = tmp14->background->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(161)
	tmp13->set_y(tmp15);
	HX_STACK_LINE(162)
	::flixel::addons::ui::FlxUI9SliceSprite tmp16 = this->dropPanel;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(162)
	::flixel::addons::ui::FlxUIDropDownHeader tmp17 = this->header;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(162)
	Float tmp18 = tmp17->background->get_width();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(162)
	int tmp19 = yoff;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(162)
	tmp16->resize(tmp18,tmp19);
	HX_STACK_LINE(163)
	::flixel::addons::ui::FlxUI9SliceSprite tmp20 = this->dropPanel;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(163)
	tmp20->set_visible(false);
	HX_STACK_LINE(164)
	::flixel::addons::ui::FlxUI9SliceSprite tmp21 = this->dropPanel;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(164)
	this->add(tmp21);
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			bool tmp22 = (_g < _g1->length);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(166)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(166)
			if ((tmp23)){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(166)
			::flixel::addons::ui::FlxUIButton tmp24 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(166)
			::flixel::addons::ui::FlxUIButton btn = tmp24;		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(166)
			++(_g);
			HX_STACK_LINE(167)
			::flixel::addons::ui::FlxUIButton tmp25 = btn;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(167)
			this->add(tmp25);
			HX_STACK_LINE(168)
			btn->set_visible(false);
		}
	}
	HX_STACK_LINE(172)
	Dynamic tmp22 = this->onDropdown_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(172)
	::flixel::addons::ui::FlxUIDropDownHeader tmp23 = this->header;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(172)
	::flixel::ui::_FlxTypedButton::FlxButtonEvent tmp24 = tmp23->button->onUp;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(172)
	tmp24->callback = tmp22;
	HX_STACK_LINE(174)
	::flixel::addons::ui::FlxUIDropDownHeader tmp25 = this->header;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(174)
	this->add(tmp25);
}
;
	return null();
}

//FlxUIDropDownMenu_obj::~FlxUIDropDownMenu_obj() { }

Dynamic FlxUIDropDownMenu_obj::__CreateEmpty() { return  new FlxUIDropDownMenu_obj; }
hx::ObjectPtr< FlxUIDropDownMenu_obj > FlxUIDropDownMenu_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback)
{  hx::ObjectPtr< FlxUIDropDownMenu_obj > _result_ = new FlxUIDropDownMenu_obj();
	_result_->__construct(__o_X,__o_Y,DataList,Callback,Header,DropPanel,ButtonList,UIControlCallback);
	return _result_;}

Dynamic FlxUIDropDownMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIDropDownMenu_obj > _result_ = new FlxUIDropDownMenu_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

hx::Object *FlxUIDropDownMenu_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

FlxUIDropDownMenu_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUIDropDownMenu_obj >(this); }
FlxUIDropDownMenu_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUIDropDownMenu_obj >(this); }
FlxUIDropDownMenu_obj::operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUIDropDownMenu_obj >(this); }
FlxUIDropDownMenu_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIDropDownMenu_obj >(this); }
FlxUIDropDownMenu_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIDropDownMenu_obj >(this); }
bool FlxUIDropDownMenu_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_skipButtonUpdate",0xeb78a3e0,"flixel.addons.ui.FlxUIDropDownMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUIDropDownMenu.hx",25,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(26)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(27)
	::flixel::addons::ui::FlxUIDropDownHeader tmp = this->header;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp->button->set_skipButtonUpdate(tmp1);
	HX_STACK_LINE(28)
	bool tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_skipButtonUpdate,return )

::String FlxUIDropDownMenu_obj::get_selectedId( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","get_selectedId",0x60d4af48,"flixel.addons.ui.FlxUIDropDownMenu.get_selectedId","flixel/addons/ui/FlxUIDropDownMenu.hx",37,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::String tmp = this->_selectedId;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,get_selectedId,return )

::String FlxUIDropDownMenu_obj::set_selectedId( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_selectedId",0x80f497bc,"flixel.addons.ui.FlxUIDropDownMenu.set_selectedId","flixel/addons/ui/FlxUIDropDownMenu.hx",38,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(39)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(40)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			if ((tmp1)){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			::flixel::addons::ui::FlxUIButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			::flixel::addons::ui::FlxUIButton btn = tmp2;		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(40)
			++(_g);
			HX_STACK_LINE(41)
			bool tmp3 = (btn != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			if ((tmp3)){
				HX_STACK_LINE(41)
				tmp4 = (btn->id == str);
			}
			else{
				HX_STACK_LINE(41)
				tmp4 = false;
			}
			HX_STACK_LINE(41)
			if ((tmp4)){
				HX_STACK_LINE(42)
				::flixel::addons::ui::FlxUIButton tmp5 = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				::flixel::addons::ui::FlxUIButton item = tmp5;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(43)
				this->_selectedId = str;
				HX_STACK_LINE(44)
				bool tmp6 = (item->label != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				if ((tmp6)){
					HX_STACK_LINE(45)
					::String tmp7 = item->label->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					this->_selectedLabel = tmp7;
					HX_STACK_LINE(46)
					::flixel::addons::ui::FlxUIDropDownHeader tmp8 = this->header;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(46)
					::String tmp9 = item->label->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(46)
					tmp8->text->set_text(tmp9);
				}
				else{
					HX_STACK_LINE(48)
					this->_selectedLabel = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					HX_STACK_LINE(49)
					::flixel::addons::ui::FlxUIDropDownHeader tmp7 = this->header;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(49)
					tmp7->text->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(51)
				::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				return tmp7;
			}
			HX_STACK_LINE(53)
			(i)++;
		}
	}
	HX_STACK_LINE(55)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_selectedId,return )

::String FlxUIDropDownMenu_obj::get_selectedLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","get_selectedLabel",0x701cdca7,"flixel.addons.ui.FlxUIDropDownMenu.get_selectedLabel","flixel/addons/ui/FlxUIDropDownMenu.hx",58,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::String tmp = this->_selectedLabel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,get_selectedLabel,return )

::String FlxUIDropDownMenu_obj::set_selectedLabel( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_selectedLabel",0x938ab4b3,"flixel.addons.ui.FlxUIDropDownMenu.set_selectedLabel","flixel/addons/ui/FlxUIDropDownMenu.hx",59,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(60)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(61)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			if ((tmp1)){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			::flixel::addons::ui::FlxUIButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			::flixel::addons::ui::FlxUIButton btn = tmp2;		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(61)
			++(_g);
			HX_STACK_LINE(62)
			::String tmp3 = btn->label->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			if ((tmp5)){
				HX_STACK_LINE(63)
				::flixel::addons::ui::FlxUIButton tmp6 = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				::flixel::addons::ui::FlxUIButton item = tmp6;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(64)
				this->_selectedId = item->id;
				HX_STACK_LINE(65)
				this->_selectedLabel = str;
				HX_STACK_LINE(66)
				::flixel::addons::ui::FlxUIDropDownHeader tmp7 = this->header;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				tmp7->text->set_text(tmp8);
				HX_STACK_LINE(67)
				::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				return tmp9;
			}
			HX_STACK_LINE(69)
			(i)++;
		}
	}
	HX_STACK_LINE(71)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_selectedLabel,return )

cpp::ArrayBase FlxUIDropDownMenu_obj::set_params( cpp::ArrayBase p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_params",0x718bd0ec,"flixel.addons.ui.FlxUIDropDownMenu.set_params","flixel/addons/ui/FlxUIDropDownMenu.hx",89,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(90)
	this->params = p;
	HX_STACK_LINE(91)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_params,return )

Void FlxUIDropDownMenu_obj::setData( Array< ::Dynamic > DataList){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","setData",0xb60b03e3,"flixel.addons.ui.FlxUIDropDownMenu.setData","flixel/addons/ui/FlxUIDropDownMenu.hx",183,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(DataList,"DataList")
		HX_STACK_LINE(184)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(186)
		Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::flixel::addons::ui::FlxUIDropDownHeader tmp1 = this->header;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		Float tmp2 = tmp1->background->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		::flixel::addons::ui::FlxUIDropDownHeader tmp4 = this->header;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		Float tmp5 = tmp4->background->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		int yoff = tmp7;		HX_STACK_VAR(yoff,"yoff");
		HX_STACK_LINE(188)
		bool tmp8 = (DataList != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(188)
		if ((tmp8)){
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(189)
				while((true)){
					HX_STACK_LINE(189)
					bool tmp9 = (_g < DataList->length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(189)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(189)
					if ((tmp10)){
						HX_STACK_LINE(189)
						break;
					}
					HX_STACK_LINE(189)
					::flixel::addons::ui::StrIdLabel tmp11 = DataList->__get(_g).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(189)
					::flixel::addons::ui::StrIdLabel data = tmp11;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(189)
					++(_g);
					HX_STACK_LINE(190)
					bool recycled = false;		HX_STACK_VAR(recycled,"recycled");
					HX_STACK_LINE(191)
					bool tmp12 = (this->list != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(191)
					if ((tmp12)){
						HX_STACK_LINE(192)
						int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(192)
						int tmp14 = this->list->length;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(192)
						int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(192)
						bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(192)
						if ((tmp16)){
							HX_STACK_LINE(194)
							::flixel::addons::ui::FlxUIButton tmp17 = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(194)
							::flixel::addons::ui::FlxUIButton btn = tmp17;		HX_STACK_VAR(btn,"btn");
							HX_STACK_LINE(195)
							bool tmp18 = (btn != null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(195)
							if ((tmp18)){
								HX_STACK_LINE(196)
								::String tmp19 = data->label;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(196)
								btn->label->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp19);
								HX_STACK_LINE(197)
								::flixel::addons::ui::FlxUIButton tmp20 = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(197)
								::String old_id = tmp20->id;		HX_STACK_VAR(old_id,"old_id");
								HX_STACK_LINE(198)
								::flixel::addons::ui::FlxUIButton tmp21 = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(198)
								tmp21->id = data->id;
								HX_STACK_LINE(199)
								recycled = true;
								HX_STACK_LINE(200)
								::flixel::addons::ui::FlxUIDropDownHeader tmp22 = this->header;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(200)
								Float tmp23 = tmp22->background->get_height();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(200)
								int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(200)
								hx::AddEq(yoff,tmp24);
							}
						}
					}
					else{
						HX_STACK_LINE(204)
						this->list = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(206)
					bool tmp13 = recycled;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(206)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(206)
					if ((tmp14)){
						HX_STACK_LINE(207)
						int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(207)
						::String tmp16 = data->label;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(207)
						::String tmp17 = data->id;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(207)
						::flixel::addons::ui::FlxUIButton tmp18 = this->makeListButton(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(207)
						::flixel::addons::ui::FlxUIButton t = tmp18;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(208)
						::flixel::addons::ui::FlxUIButton tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(208)
						this->list->push(tmp19);
						HX_STACK_LINE(209)
						int tmp20 = yoff;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(209)
						t->set_y(tmp20);
						HX_STACK_LINE(210)
						::flixel::addons::ui::FlxUIButton tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(210)
						this->add(tmp21);
						HX_STACK_LINE(211)
						t->set_visible(false);
						HX_STACK_LINE(212)
						::flixel::addons::ui::FlxUIDropDownHeader tmp22 = this->header;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(212)
						Float tmp23 = tmp22->background->get_height();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(212)
						int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(212)
						hx::AddEq(yoff,tmp24);
					}
					HX_STACK_LINE(214)
					(i)++;
				}
			}
			HX_STACK_LINE(218)
			int tmp9 = this->list->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(218)
			int tmp10 = DataList->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(218)
			bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(218)
			if ((tmp11)){
				HX_STACK_LINE(219)
				int _g1 = DataList->length;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(219)
				int tmp12 = this->list->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(219)
				int _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(219)
				while((true)){
					HX_STACK_LINE(219)
					bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(219)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(219)
					if ((tmp14)){
						HX_STACK_LINE(219)
						break;
					}
					HX_STACK_LINE(219)
					int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(219)
					int j = tmp15;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(220)
					::flixel::addons::ui::FlxUIButton tmp16 = this->list->pop().StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(220)
					::flixel::addons::ui::FlxUIButton b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(221)
					b->set_visible(false);
					HX_STACK_LINE(222)
					b->set_active(false);
					HX_STACK_LINE(223)
					::flixel::addons::ui::FlxUIButton tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(223)
					this->remove(tmp17,true);
					HX_STACK_LINE(224)
					b->destroy();
					HX_STACK_LINE(225)
					b = null();
				}
			}
			HX_STACK_LINE(229)
			::flixel::addons::ui::StrIdLabel tmp12 = DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(229)
			::String tmp13 = tmp12->id;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(229)
			::flixel::addons::ui::StrIdLabel tmp14 = DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(229)
			::String tmp15 = tmp14->label;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			this->selectSomething(tmp13,tmp15);
		}
		HX_STACK_LINE(232)
		::flixel::addons::ui::FlxUI9SliceSprite tmp9 = this->dropPanel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(232)
		::flixel::addons::ui::FlxUIDropDownHeader tmp10 = this->header;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(232)
		Float tmp11 = tmp10->background->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(232)
		int tmp12 = yoff;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(232)
		tmp9->resize(tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,setData,(void))

Void FlxUIDropDownMenu_obj::selectSomething( ::String id,::String label){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","selectSomething",0xd0a071d5,"flixel.addons.ui.FlxUIDropDownMenu.selectSomething","flixel/addons/ui/FlxUIDropDownMenu.hx",235,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(label,"label")
		HX_STACK_LINE(236)
		::flixel::addons::ui::FlxUIDropDownHeader tmp = this->header;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		::String tmp1 = label;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		tmp->text->set_text(tmp1);
		HX_STACK_LINE(237)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		this->set_selectedId(tmp2);
		HX_STACK_LINE(238)
		::String tmp3 = label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		this->set_selectedLabel(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,selectSomething,(void))

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::makeListButton( int i,::String Label,::String Name){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","makeListButton",0xfb84f067,"flixel.addons.ui.FlxUIDropDownMenu.makeListButton","flixel/addons/ui/FlxUIDropDownMenu.hx",241,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(Label,"Label")
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(242)
	::flixel::addons::ui::FlxUIButton tmp = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,Label,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	::flixel::addons::ui::FlxUIButton t = tmp;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(243)
	t->broadcastToFlxUI = false;
	HX_STACK_LINE(244)
	Dynamic tmp1 = this->onClickItem_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		Dynamic f = tmp1;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(244)
		int i1 = tmp2;		HX_STACK_VAR(i1,"i1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,int,i1,Dynamic,f)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/ui/FlxUIDropDownMenu.hx",244,0x238549da)
			{
				HX_STACK_LINE(244)
				int tmp4 = i1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(244)
				f(tmp4).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(244)
		tmp3 =  Dynamic(new _Function_2_1(i1,f));
	}
	HX_STACK_LINE(244)
	t->onUp->callback = tmp3;
	HX_STACK_LINE(246)
	t->id = Name;
	HX_STACK_LINE(248)
	::flixel::addons::ui::FlxUIDropDownHeader tmp4 = this->header;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(248)
	Float tmp5 = tmp4->background->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(248)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(249)
	::flixel::addons::ui::FlxUIDropDownHeader tmp7 = this->header;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(249)
	Float tmp8 = tmp7->background->get_height();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(249)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(248)
	t->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/invis.png","\xad","\x69","\xe0","\x09")).Add(HX_HCSTRING("flixel/flixel-ui/img/hilight.png","\x87","\x4d","\x54","\x73")).Add(HX_HCSTRING("flixel/flixel-ui/img/hilight.png","\x87","\x4d","\x54","\x73")),tmp6,tmp9,Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)),(int)0,null(),null(),null(),null(),null());
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		::flixel::util::FlxPoint tmp10 = t->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(250)
		::flixel::util::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(250)
		Float tmp11 = (_g->y - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(250)
		_g->set_y(tmp11);
	}
	HX_STACK_LINE(252)
	t->up_color = (int)-16777216;
	HX_STACK_LINE(253)
	t->over_color = (int)-1;
	HX_STACK_LINE(254)
	t->down_color = (int)-1;
	HX_STACK_LINE(256)
	::flixel::addons::ui::FlxUIDropDownHeader tmp10 = this->header;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(256)
	Float tmp11 = tmp10->background->get_width();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(256)
	Float tmp12 = (tmp11 - (int)2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(256)
	::flixel::addons::ui::FlxUIDropDownHeader tmp13 = this->header;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(256)
	Float tmp14 = tmp13->background->get_height();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(256)
	Float tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(256)
	t->resize(tmp12,tmp15);
	HX_STACK_LINE(258)
	t->label->__Field(HX_HCSTRING("set_alignment","\xc6","\x98","\xa7","\xf0"), hx::paccDynamic )(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	HX_STACK_LINE(259)
	t->autoCenterLabel();
	HX_STACK_LINE(260)
	t->set_x((int)1);
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(262)
		Array< ::Dynamic > _g1 = t->labelOffsets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(262)
		while((true)){
			HX_STACK_LINE(262)
			bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(262)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			if ((tmp17)){
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(262)
			::flixel::util::FlxPoint tmp18 = _g1->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			::flixel::util::FlxPoint offset = tmp18;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(262)
			++(_g);
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::flixel::util::FlxPoint _g2 = offset;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(264)
				Float tmp19 = (_g2->x + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(264)
				_g2->set_x(tmp19);
			}
		}
	}
	HX_STACK_LINE(267)
	::flixel::addons::ui::FlxUIButton tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(267)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIDropDownMenu_obj,makeListButton,return )

Void FlxUIDropDownMenu_obj::changeLabelByIndex( int i,::String NewLabel){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","changeLabelByIndex",0xa18ac820,"flixel.addons.ui.FlxUIDropDownMenu.changeLabelByIndex","flixel/addons/ui/FlxUIDropDownMenu.hx",274,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(NewLabel,"NewLabel")
		HX_STACK_LINE(275)
		int tmp = i;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		::flixel::addons::ui::FlxUIButton tmp1 = this->getBtnByIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		::flixel::addons::ui::FlxUIButton btn = tmp1;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(276)
		bool tmp2 = (btn != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(276)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(276)
		if ((tmp2)){
			HX_STACK_LINE(276)
			tmp3 = (btn->label != null());
		}
		else{
			HX_STACK_LINE(276)
			tmp3 = false;
		}
		HX_STACK_LINE(276)
		if ((tmp3)){
			HX_STACK_LINE(277)
			::String tmp4 = NewLabel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			btn->label->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,changeLabelByIndex,(void))

Void FlxUIDropDownMenu_obj::changeLabelById( ::String id,::String NewLabel){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","changeLabelById",0x75719a0d,"flixel.addons.ui.FlxUIDropDownMenu.changeLabelById","flixel/addons/ui/FlxUIDropDownMenu.hx",281,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(NewLabel,"NewLabel")
		HX_STACK_LINE(282)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(282)
		::flixel::addons::ui::FlxUIButton tmp1 = this->getBtnById(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(282)
		::flixel::addons::ui::FlxUIButton btn = tmp1;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(283)
		bool tmp2 = (btn != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		if ((tmp2)){
			HX_STACK_LINE(283)
			tmp3 = (btn->label != null());
		}
		else{
			HX_STACK_LINE(283)
			tmp3 = false;
		}
		HX_STACK_LINE(283)
		if ((tmp3)){
			HX_STACK_LINE(284)
			::String tmp4 = NewLabel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			btn->label->__Field(HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,changeLabelById,(void))

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::getBtnByIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","getBtnByIndex",0x24b02f2c,"flixel.addons.ui.FlxUIDropDownMenu.getBtnByIndex","flixel/addons/ui/FlxUIDropDownMenu.hx",288,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(289)
	bool tmp = (i >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	if ((tmp)){
		HX_STACK_LINE(289)
		int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		int tmp3 = this->list->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(289)
		tmp1 = false;
	}
	HX_STACK_LINE(289)
	if ((tmp1)){
		HX_STACK_LINE(290)
		::flixel::addons::ui::FlxUIButton tmp2 = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		return tmp2;
	}
	HX_STACK_LINE(292)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,getBtnByIndex,return )

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::getBtnById( ::String id){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","getBtnById",0xae1a9381,"flixel.addons.ui.FlxUIDropDownMenu.getBtnById","flixel/addons/ui/FlxUIDropDownMenu.hx",295,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(296)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(296)
		while((true)){
			HX_STACK_LINE(296)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(296)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(296)
			if ((tmp1)){
				HX_STACK_LINE(296)
				break;
			}
			HX_STACK_LINE(296)
			::flixel::addons::ui::FlxUIButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			::flixel::addons::ui::FlxUIButton btn = tmp2;		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(296)
			++(_g);
			HX_STACK_LINE(297)
			bool tmp3 = (btn->id == id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			if ((tmp3)){
				HX_STACK_LINE(298)
				::flixel::addons::ui::FlxUIButton tmp4 = btn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(301)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,getBtnById,return )

Void FlxUIDropDownMenu_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","update",0x4f8d24f2,"flixel.addons.ui.FlxUIDropDownMenu.update","flixel/addons/ui/FlxUIDropDownMenu.hx",305,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		this->super::update();
		HX_STACK_LINE(309)
		::flixel::addons::ui::FlxUI9SliceSprite tmp = this->dropPanel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		if ((tmp1)){
			HX_STACK_LINE(309)
			::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			::flixel::input::mouse::FlxMouse tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			::flixel::input::mouse::FlxMouseButton _this = tmp4->_leftButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(309)
			bool tmp5 = (_this->current == (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(309)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(309)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(309)
			if ((tmp10)){
				HX_STACK_LINE(309)
				tmp2 = (_this->current == (int)-2);
			}
			else{
				HX_STACK_LINE(309)
				tmp2 = true;
			}
		}
		else{
			HX_STACK_LINE(309)
			tmp2 = false;
		}
		HX_STACK_LINE(309)
		if ((tmp2)){
			HX_STACK_LINE(311)
			::flixel::addons::ui::FlxUI9SliceSprite tmp3 = this->dropPanel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::flixel::input::mouse::FlxMouse tmp4 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			bool tmp5 = tmp3->overlapsPoint(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			if ((tmp6)){
				HX_STACK_LINE(313)
				this->showList(false);
			}
		}
	}
return null();
}


Void FlxUIDropDownMenu_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","destroy",0xd2a999f1,"flixel.addons.ui.FlxUIDropDownMenu.destroy","flixel/addons/ui/FlxUIDropDownMenu.hx",320,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		this->super::destroy();
		HX_STACK_LINE(323)
		::flixel::addons::ui::FlxUI9SliceSprite tmp = this->dropPanel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		::flixel::addons::ui::FlxUI9SliceSprite tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		this->dropPanel = tmp1;
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(325)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(325)
			while((true)){
				HX_STACK_LINE(325)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(325)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(325)
				if ((tmp3)){
					HX_STACK_LINE(325)
					break;
				}
				HX_STACK_LINE(325)
				::flixel::addons::ui::FlxUIButton tmp4 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(325)
				::flixel::addons::ui::FlxUIButton button = tmp4;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(325)
				++(_g);
				HX_STACK_LINE(327)
				::flixel::addons::ui::FlxUIButton tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(327)
				::flixel::addons::ui::FlxUIButton tmp6 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(327)
				button = tmp6;
			}
		}
		HX_STACK_LINE(330)
		this->list = null();
		HX_STACK_LINE(332)
		this->callback = null();
	}
return null();
}


Void FlxUIDropDownMenu_obj::showList( bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","showList",0x6015cb24,"flixel.addons.ui.FlxUIDropDownMenu.showList","flixel/addons/ui/FlxUIDropDownMenu.hx",336,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(337)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(337)
			while((true)){
				HX_STACK_LINE(337)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(337)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(337)
				if ((tmp1)){
					HX_STACK_LINE(337)
					break;
				}
				HX_STACK_LINE(337)
				::flixel::addons::ui::FlxUIButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(337)
				::flixel::addons::ui::FlxUIButton button = tmp2;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(337)
				++(_g);
				HX_STACK_LINE(338)
				bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(338)
				button->set_visible(tmp3);
				HX_STACK_LINE(339)
				bool tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(339)
				button->set_active(tmp4);
			}
		}
		HX_STACK_LINE(342)
		::flixel::addons::ui::FlxUI9SliceSprite tmp = this->dropPanel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(344)
		bool tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		::flixel::addons::ui::FlxUI_obj::forceFocus(tmp2,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,showList,(void))

Void FlxUIDropDownMenu_obj::onDropdown( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","onDropdown",0x6af20fb9,"flixel.addons.ui.FlxUIDropDownMenu.onDropdown","flixel/addons/ui/FlxUIDropDownMenu.hx",348,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		::flixel::addons::ui::FlxUI9SliceSprite tmp = this->dropPanel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		if ((tmp1)){
			HX_STACK_LINE(349)
			this->showList(false);
		}
		else{
			HX_STACK_LINE(349)
			this->showList(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,onDropdown,(void))

Void FlxUIDropDownMenu_obj::onClickItem( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","onClickItem",0xc144c8d3,"flixel.addons.ui.FlxUIDropDownMenu.onClickItem","flixel/addons/ui/FlxUIDropDownMenu.hx",353,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(354)
		::flixel::addons::ui::FlxUIButton tmp = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		::flixel::addons::ui::FlxUIButton item = tmp;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(355)
		::String tmp1 = item->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		::String tmp2 = item->label->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		this->selectSomething(tmp1,tmp2);
		HX_STACK_LINE(356)
		this->showList(false);
		HX_STACK_LINE(358)
		Dynamic tmp3 = this->callback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(358)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(358)
		if ((tmp4)){
			HX_STACK_LINE(359)
			::String tmp5 = item->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(359)
			this->callback(tmp5);
		}
		HX_STACK_LINE(362)
		bool tmp5 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		if ((tmp5)){
			HX_STACK_LINE(363)
			::String tmp6 = item->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("click_dropdown","\x28","\x26","\xa9","\x27"),hx::ObjectPtr<OBJ_>(this),tmp6,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,onClickItem,(void))

::String FlxUIDropDownMenu_obj::CLICK_EVENT;

Array< ::Dynamic > FlxUIDropDownMenu_obj::makeStrIdLabelArray( Array< ::String > StringArray,hx::Null< bool >  __o_UseIndexID){
bool UseIndexID = __o_UseIndexID.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","makeStrIdLabelArray",0xab19023a,"flixel.addons.ui.FlxUIDropDownMenu.makeStrIdLabelArray","flixel/addons/ui/FlxUIDropDownMenu.hx",375,0x238549da)
	HX_STACK_ARG(StringArray,"StringArray")
	HX_STACK_ARG(UseIndexID,"UseIndexID")
{
		HX_STACK_LINE(376)
		Array< ::Dynamic > strIdArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(strIdArray,"strIdArray");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			int _g = StringArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(377)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(377)
				if ((tmp1)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(377)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(377)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(379)
				::String tmp3 = StringArray->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(379)
				::String ID = tmp3;		HX_STACK_VAR(ID,"ID");
				HX_STACK_LINE(380)
				bool tmp4 = UseIndexID;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(380)
				if ((tmp4)){
					HX_STACK_LINE(382)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(382)
					::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(382)
					ID = tmp6;
				}
				HX_STACK_LINE(384)
				::String tmp5 = ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(384)
				::String tmp6 = StringArray->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(384)
				::flixel::addons::ui::StrIdLabel tmp7 = ::flixel::addons::ui::StrIdLabel_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(384)
				strIdArray[i] = tmp7;
			}
		}
		HX_STACK_LINE(386)
		return strIdArray;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,makeStrIdLabelArray,return )


FlxUIDropDownMenu_obj::FlxUIDropDownMenu_obj()
{
}

void FlxUIDropDownMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownMenu);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_selectedId,"_selectedId");
	HX_MARK_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(dropPanel,"dropPanel");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_selectedId,"_selectedId");
	HX_VISIT_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(dropPanel,"dropPanel");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIDropDownMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return header; }
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dropPanel") ) { return dropPanel; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == hx::paccAlways) return get_selectedId(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"getBtnById") ) { return getBtnById_dyn(); }
		if (HX_FIELD_EQ(inName,"onDropdown") ) { return onDropdown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { return _selectedId; }
		if (HX_FIELD_EQ(inName,"onClickItem") ) { return onClickItem_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == hx::paccAlways) return get_selectedLabel(); }
		if (HX_FIELD_EQ(inName,"getBtnByIndex") ) { return getBtnByIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { return _selectedLabel; }
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return get_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return set_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"makeListButton") ) { return makeListButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectSomething") ) { return selectSomething_dyn(); }
		if (HX_FIELD_EQ(inName,"changeLabelById") ) { return changeLabelById_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return get_selectedLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return set_selectedLabel_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"changeLabelByIndex") ) { return changeLabelByIndex_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxUIDropDownMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"makeStrIdLabelArray") ) { outValue = makeStrIdLabelArray_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxUIDropDownMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::flixel::addons::ui::FlxUIDropDownHeader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return set_params(inValue);params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dropPanel") ) { dropPanel=inValue.Cast< ::flixel::addons::ui::FlxUI9SliceSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == hx::paccAlways) return set_selectedId(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { _selectedId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == hx::paccAlways) return set_selectedLabel(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { _selectedLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIDropDownMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIDropDownMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	outFields->push(HX_HCSTRING("selectedId","\x16","\xf7","\xd0","\xc6"));
	outFields->push(HX_HCSTRING("selectedLabel","\x99","\xe9","\xf0","\x65"));
	outFields->push(HX_HCSTRING("_selectedId","\x35","\xc4","\x5a","\x99"));
	outFields->push(HX_HCSTRING("_selectedLabel","\xda","\xd9","\x42","\xa4"));
	outFields->push(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("dropPanel","\x55","\xa8","\x0a","\xff"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIDropDownMenu_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{hx::fsString,(int)offsetof(FlxUIDropDownMenu_obj,_selectedId),HX_HCSTRING("_selectedId","\x35","\xc4","\x5a","\x99")},
	{hx::fsString,(int)offsetof(FlxUIDropDownMenu_obj,_selectedLabel),HX_HCSTRING("_selectedLabel","\xda","\xd9","\x42","\xa4")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownHeader*/ ,(int)offsetof(FlxUIDropDownMenu_obj,header),HX_HCSTRING("header","\x8d","\x09","\x00","\xfd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUIDropDownMenu_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI9SliceSprite*/ ,(int)offsetof(FlxUIDropDownMenu_obj,dropPanel),HX_HCSTRING("dropPanel","\x55","\xa8","\x0a","\xff")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxUIDropDownMenu_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIDropDownMenu_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUIDropDownMenu_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("_selectedId","\x35","\xc4","\x5a","\x99"),
	HX_HCSTRING("_selectedLabel","\xda","\xd9","\x42","\xa4"),
	HX_HCSTRING("get_selectedId","\x5f","\x7f","\xc6","\x3c"),
	HX_HCSTRING("set_selectedId","\xd3","\x67","\xe6","\x5c"),
	HX_HCSTRING("get_selectedLabel","\xf0","\xf4","\x60","\x6c"),
	HX_HCSTRING("set_selectedLabel","\xfc","\xcc","\xce","\x8f"),
	HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("dropPanel","\x55","\xa8","\x0a","\xff"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("setData","\xec","\x96","\xe7","\x07"),
	HX_HCSTRING("selectSomething","\xde","\xb5","\x44","\x68"),
	HX_HCSTRING("makeListButton","\x7e","\xc0","\x76","\xd7"),
	HX_HCSTRING("changeLabelByIndex","\xb7","\xef","\xdb","\x60"),
	HX_HCSTRING("changeLabelById","\x16","\xde","\x15","\x0d"),
	HX_HCSTRING("getBtnByIndex","\xf5","\x2e","\xfe","\x8c"),
	HX_HCSTRING("getBtnById","\x18","\xcc","\x0e","\x1e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("showList","\xfb","\xdf","\x39","\xaf"),
	HX_HCSTRING("onDropdown","\x50","\x48","\xe6","\xda"),
	HX_HCSTRING("onClickItem","\x5c","\x14","\x02","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenu_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenu_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

hx::Class FlxUIDropDownMenu_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	HX_HCSTRING("makeStrIdLabelArray","\xc3","\x7e","\xca","\x52"),
	::String(null()) };

void FlxUIDropDownMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIDropDownMenu","\x65","\x7e","\x26","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUIDropDownMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxUIDropDownMenu_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIDropDownMenu_obj >;
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

void FlxUIDropDownMenu_obj::__boot()
{
	CLICK_EVENT= HX_HCSTRING("click_dropdown","\x28","\x26","\xa9","\x27");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
