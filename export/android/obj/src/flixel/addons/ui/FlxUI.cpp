#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#include <flixel/addons/ui/FlxUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#include <flixel/addons/ui/FlxUIRegion.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUI_obj::__construct(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUI","new",0x89fff7c7,"flixel.addons.ui.FlxUI.new","flixel/addons/ui/FlxUI.hx",44,0xf354486a)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(ptr,"ptr")
HX_STACK_ARG(superIndex_,"superIndex_")
HX_STACK_ARG(tongue_,"tongue_")
{
	HX_STACK_LINE(734)
	this->_safe_input_delay_elapsed = ((Float)0.0);
	HX_STACK_LINE(729)
	this->_curr_mode = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(76)
	this->getTextFallback = null();
	HX_STACK_LINE(52)
	this->failed_by = ((Float)0);
	HX_STACK_LINE(51)
	this->failed = false;
	HX_STACK_LINE(49)
	this->safe_input_delay_time = ((Float)0.01);
	HX_STACK_LINE(48)
	this->do_safe_input_delay = true;
	HX_STACK_LINE(191)
	super::__construct(null(),null());
	HX_STACK_LINE(192)
	this->_ptr_tongue = tongue_;
	HX_STACK_LINE(196)
	this->_ptr = ptr;
	HX_STACK_LINE(197)
	bool tmp = (superIndex_ != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	if ((tmp)){
		HX_STACK_LINE(198)
		::flixel::addons::ui::FlxUI tmp1 = superIndex_;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		this->setSuperIndex(tmp1);
	}
	HX_STACK_LINE(200)
	bool tmp1 = (data != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(200)
	if ((tmp1)){
		HX_STACK_LINE(201)
		::haxe::xml::Fast tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		this->load(tmp2);
	}
}
;
	return null();
}

//FlxUI_obj::~FlxUI_obj() { }

Dynamic FlxUI_obj::__CreateEmpty() { return  new FlxUI_obj; }
hx::ObjectPtr< FlxUI_obj > FlxUI_obj::__new(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_)
{  hx::ObjectPtr< FlxUI_obj > _result_ = new FlxUI_obj();
	_result_->__construct(data,ptr,superIndex_,tongue_);
	return _result_;}

Dynamic FlxUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUI_obj > _result_ = new FlxUI_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxUI_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IEventGetter_obj)) return operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
	return super::__ToInterface(inType);
}

FlxUI_obj::operator ::flixel::addons::ui::interfaces::IEventGetter_obj *()
	{ return new ::flixel::addons::ui::interfaces::IEventGetter_delegate_< FlxUI_obj >(this); }
::flixel::addons::ui::interfaces::IFireTongue FlxUI_obj::get_tongue( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","get_tongue",0x7aee5906,"flixel.addons.ui.FlxUI.get_tongue","flixel/addons/ui/FlxUI.hx",55,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::flixel::addons::ui::interfaces::IFireTongue tmp = this->_ptr_tongue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,get_tongue,return )

::flixel::addons::ui::interfaces::IFireTongue FlxUI_obj::set_tongue( ::flixel::addons::ui::interfaces::IFireTongue t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_tongue",0x7e6bf77a,"flixel.addons.ui.FlxUI.set_tongue","flixel/addons/ui/FlxUI.hx",57,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(58)
	this->_ptr_tongue = t;
	HX_STACK_LINE(59)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::flixel::addons::ui::interfaces::IFireTongue tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	this->_tongueSet(tmp->members,tmp1);
	HX_STACK_LINE(60)
	::flixel::addons::ui::interfaces::IFireTongue tmp2 = this->_ptr_tongue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_tongue,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::set_focus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_focus",0xbe69d6e2,"flixel.addons.ui.FlxUI.set_focus","flixel/addons/ui/FlxUI.hx",64,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(65)
	::flixel::addons::ui::interfaces::IFlxUIWidget tmp = this->focus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	if ((tmp1)){
		HX_STACK_LINE(66)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp2 = this->focus;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		this->onFocusLost(tmp2);
	}
	HX_STACK_LINE(68)
	this->focus = widget;
	HX_STACK_LINE(69)
	::flixel::addons::ui::interfaces::IFlxUIWidget tmp2 = this->focus;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	if ((tmp3)){
		HX_STACK_LINE(70)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = this->focus;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		this->onFocus(tmp4);
	}
	HX_STACK_LINE(72)
	::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = widget;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_focus,return )

Void FlxUI_obj::_tongueSet( Array< ::Dynamic > list,::flixel::addons::ui::interfaces::IFireTongue tongue){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_tongueSet",0x62471f78,"flixel.addons.ui.FlxUI._tongueSet","flixel/addons/ui/FlxUI.hx",86,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(tongue,"tongue")
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			if ((tmp1)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			::flixel::FlxSprite tmp2 = list->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			::flixel::FlxSprite fs = tmp2;		HX_STACK_VAR(fs,"fs");
			HX_STACK_LINE(86)
			++(_g);
			HX_STACK_LINE(87)
			::flixel::FlxSprite tmp3 = fs;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			if ((tmp4)){
				HX_STACK_LINE(88)
				::flixel::addons::ui::FlxUIGroup tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				tmp5 = hx::TCast< ::flixel::addons::ui::FlxUIGroup >::cast(fs);
				HX_STACK_LINE(88)
				::flixel::addons::ui::FlxUIGroup g = tmp5;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(89)
				::flixel::addons::ui::interfaces::IFireTongue tmp6 = tongue;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				this->_tongueSet(g->group->members,tmp6);
			}
			else{
				HX_STACK_LINE(90)
				::flixel::FlxSprite tmp5 = fs;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::flixel::addons::ui::FlxUI >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				if ((tmp6)){
					HX_STACK_LINE(91)
					::flixel::addons::ui::FlxUI tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(91)
					tmp7 = hx::TCast< ::flixel::addons::ui::FlxUI >::cast(fs);
					HX_STACK_LINE(91)
					::flixel::addons::ui::FlxUI fu = tmp7;		HX_STACK_VAR(fu,"fu");
					HX_STACK_LINE(92)
					::flixel::addons::ui::interfaces::IFireTongue tmp8 = tongue;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(92)
					fu->set_tongue(tmp8);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_tongueSet,(void))

Void FlxUI_obj::callEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","callEvent",0x94ea5143,"flixel.addons.ui.FlxUI.callEvent","flixel/addons/ui/FlxUI.hx",170,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(171)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp1 = sender;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		this->getEvent(tmp,tmp1,tmp2,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,callEvent,(void))

Void FlxUI_obj::getEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","getEvent",0xd6447add,"flixel.addons.ui.FlxUI.getEvent","flixel/addons/ui/FlxUI.hx",174,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(175)
		::flixel::addons::ui::interfaces::IEventGetter tmp = this->_ptr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		if ((tmp1)){
			HX_STACK_LINE(176)
			::flixel::addons::ui::interfaces::IEventGetter tmp2 = this->_ptr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = sender;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			tmp2->getEvent(tmp3,tmp4,tmp5,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getEvent,(void))

Dynamic FlxUI_obj::getRequest( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getRequest",0x8a6908d2,"flixel.addons.ui.FlxUI.getRequest","flixel/addons/ui/FlxUI.hx",180,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(181)
	::flixel::addons::ui::interfaces::IEventGetter tmp = this->_ptr;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	if ((tmp1)){
		HX_STACK_LINE(182)
		::flixel::addons::ui::interfaces::IEventGetter tmp2 = this->_ptr;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = sender;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		Dynamic tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		Dynamic tmp6 = tmp2->getRequest(tmp3,tmp4,tmp5,params);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		return tmp6;
	}
	HX_STACK_LINE(184)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getRequest,return )

Void FlxUI_obj::onFocus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","onFocus",0x59586520,"flixel.addons.ui.FlxUI.onFocus","flixel/addons/ui/FlxUI.hx",205,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(206)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp = widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		if ((tmp1)){
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(208)
				if ((tmp4)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				::flixel::FlxSprite tmp5 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(208)
				::flixel::FlxSprite asset = tmp5;		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(208)
				++(_g);
				HX_STACK_LINE(209)
				::flixel::FlxSprite tmp6 = asset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(209)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp7 = widget;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(209)
				this->setWidgetSuppression(tmp6,tmp7,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,onFocus,(void))

Void FlxUI_obj::setWidgetSuppression( ::flixel::FlxSprite asset,::flixel::addons::ui::interfaces::IFlxUIWidget butNotThisOne,hx::Null< bool >  __o_suppressed){
bool suppressed = __o_suppressed.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","setWidgetSuppression",0x343faf06,"flixel.addons.ui.FlxUI.setWidgetSuppression","flixel/addons/ui/FlxUI.hx",214,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(butNotThisOne,"butNotThisOne")
	HX_STACK_ARG(suppressed,"suppressed")
{
		HX_STACK_LINE(215)
		::flixel::FlxSprite tmp = asset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		if ((tmp1)){
			HX_STACK_LINE(216)
			bool skip = false;		HX_STACK_VAR(skip,"skip");
			HX_STACK_LINE(217)
			::flixel::FlxSprite tmp2 = asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			if ((tmp3)){
				HX_STACK_LINE(218)
				::flixel::addons::ui::FlxUIDropDownMenu ddasset = ((::flixel::addons::ui::FlxUIDropDownMenu)(asset));		HX_STACK_VAR(ddasset,"ddasset");
				HX_STACK_LINE(219)
				bool tmp4 = (ddasset == butNotThisOne);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				if ((tmp4)){
					HX_STACK_LINE(220)
					skip = true;
				}
			}
			HX_STACK_LINE(223)
			bool tmp4 = skip;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			if ((tmp5)){
				HX_STACK_LINE(224)
				::flixel::addons::ui::interfaces::IFlxUIClickable ibtn = ((::flixel::addons::ui::interfaces::IFlxUIClickable)(asset));		HX_STACK_VAR(ibtn,"ibtn");
				HX_STACK_LINE(225)
				bool tmp6 = suppressed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(225)
				ibtn->set_skipButtonUpdate(tmp6);
			}
		}
		else{
			HX_STACK_LINE(227)
			::flixel::FlxSprite tmp2 = asset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			if ((tmp3)){
				HX_STACK_LINE(228)
				::flixel::addons::ui::FlxUIGroup g = ((::flixel::addons::ui::FlxUIGroup)(asset));		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(229)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(229)
					while((true)){
						HX_STACK_LINE(229)
						bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(229)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(229)
						if ((tmp5)){
							HX_STACK_LINE(229)
							break;
						}
						HX_STACK_LINE(229)
						::flixel::FlxSprite tmp6 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(229)
						::flixel::FlxSprite groupAsset = tmp6;		HX_STACK_VAR(groupAsset,"groupAsset");
						HX_STACK_LINE(229)
						++(_g);
						HX_STACK_LINE(230)
						::flixel::FlxSprite tmp7 = groupAsset;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(230)
						::flixel::addons::ui::interfaces::IFlxUIWidget tmp8 = butNotThisOne;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(230)
						bool tmp9 = suppressed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(230)
						this->setWidgetSuppression(tmp7,tmp8,tmp9);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,setWidgetSuppression,(void))

Void FlxUI_obj::onFocusLost( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","onFocusLost",0xfd524b24,"flixel.addons.ui.FlxUI.onFocusLost","flixel/addons/ui/FlxUI.hx",240,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(241)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp = widget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		if ((tmp1)){
			HX_STACK_LINE(245)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			Array< ::Dynamic > _g1 = tmp2->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				if ((tmp4)){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::flixel::FlxSprite tmp5 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(245)
				::flixel::FlxSprite asset = tmp5;		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(245)
				++(_g);
				HX_STACK_LINE(246)
				::flixel::FlxSprite tmp6 = asset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				this->setWidgetSuppression(tmp6,null(),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,onFocusLost,(void))

Void FlxUI_obj::setSuperIndex( ::flixel::addons::ui::FlxUI flxUI){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","setSuperIndex",0x53bc1800,"flixel.addons.ui.FlxUI.setSuperIndex","flixel/addons/ui/FlxUI.hx",257,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flxUI,"flxUI")
		HX_STACK_LINE(257)
		this->_superIndexUI = flxUI;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,setSuperIndex,(void))

Void FlxUI_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","update",0x5c40b902,"flixel.addons.ui.FlxUI.update","flixel/addons/ui/FlxUI.hx",260,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		bool tmp = this->do_safe_input_delay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		if ((tmp)){
			HX_STACK_LINE(262)
			Float tmp1 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(262)
			hx::AddEq(this->_safe_input_delay_elapsed,tmp1);
			HX_STACK_LINE(263)
			Float tmp2 = this->_safe_input_delay_elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(263)
			Float tmp3 = this->safe_input_delay_time;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(263)
			if ((tmp4)){
				HX_STACK_LINE(264)
				this->do_safe_input_delay = false;
			}
			else{
				HX_STACK_LINE(266)
				return null();
			}
		}
		HX_STACK_LINE(270)
		this->super::update();
	}
return null();
}


::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::removeAsset( ::String key,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","removeAsset",0xe039ad73,"flixel.addons.ui.FlxUI.removeAsset","flixel/addons/ui/FlxUI.hx",280,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(destroy,"destroy")
{
		HX_STACK_LINE(281)
		::String tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp1 = this->getAsset(tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = tmp1;		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(282)
		bool tmp2 = (asset != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		if ((tmp2)){
			HX_STACK_LINE(283)
			::flixel::FlxSprite tmp3 = ((::flixel::FlxSprite)(asset));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(283)
			this->replaceInGroup(tmp3,null(),true);
			HX_STACK_LINE(284)
			::haxe::ds::StringMap tmp4 = this->_asset_index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			tmp4->remove(tmp5);
		}
		HX_STACK_LINE(286)
		bool tmp3 = destroy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		if ((tmp3)){
			HX_STACK_LINE(287)
			asset->destroy();
			HX_STACK_LINE(288)
			asset = null();
		}
		HX_STACK_LINE(290)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = asset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(290)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,removeAsset,return )

bool FlxUI_obj::addAsset( ::flixel::addons::ui::interfaces::IFlxUIWidget asset,::String key,::String __o_group_id,hx::Null< bool >  __o_recursive){
::String group_id = __o_group_id.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","addAsset",0xa03f3348,"flixel.addons.ui.FlxUI.addAsset","flixel/addons/ui/FlxUI.hx",301,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(group_id,"group_id")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(302)
		::haxe::ds::StringMap tmp = this->_asset_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(302)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		if ((tmp2)){
			HX_STACK_LINE(303)
			return false;
		}
		HX_STACK_LINE(306)
		::String tmp3 = group_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		bool tmp4 = recursive;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		::flixel::addons::ui::FlxUIGroup tmp5 = this->getGroup(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		::flixel::addons::ui::FlxUIGroup g = tmp5;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(307)
		bool tmp6 = (g != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(307)
		if ((tmp6)){
			HX_STACK_LINE(308)
			::flixel::FlxSprite tmp7 = ((::flixel::FlxSprite)(asset));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(308)
			g->add(tmp7);
		}
		else{
			HX_STACK_LINE(310)
			::flixel::FlxSprite tmp7 = ((::flixel::FlxSprite)(asset));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(310)
			this->add(tmp7);
		}
		HX_STACK_LINE(313)
		::haxe::ds::StringMap tmp7 = this->_asset_index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(313)
		::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp9 = asset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(313)
		tmp7->set(tmp8,tmp9);
		HX_STACK_LINE(315)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,addAsset,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::replaceAsset( ::String key,::flixel::addons::ui::interfaces::IFlxUIWidget replace,hx::Null< bool >  __o_center_x,hx::Null< bool >  __o_center_y,hx::Null< bool >  __o_destroy_old){
bool center_x = __o_center_x.Default(true);
bool center_y = __o_center_y.Default(true);
bool destroy_old = __o_destroy_old.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","replaceAsset",0xb0d588d5,"flixel.addons.ui.FlxUI.replaceAsset","flixel/addons/ui/FlxUI.hx",326,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(replace,"replace")
	HX_STACK_ARG(center_x,"center_x")
	HX_STACK_ARG(center_y,"center_y")
	HX_STACK_ARG(destroy_old,"destroy_old")
{
		HX_STACK_LINE(328)
		::String tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp1 = this->getAsset(tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		::flixel::addons::ui::interfaces::IFlxUIWidget original = tmp1;		HX_STACK_VAR(original,"original");
		HX_STACK_LINE(330)
		bool tmp2 = (original != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(330)
		if ((tmp2)){
			HX_STACK_LINE(332)
			bool tmp3 = center_x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(332)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(332)
			if ((tmp4)){
				HX_STACK_LINE(333)
				Float tmp5 = original->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(333)
				replace->set_x(tmp5);
			}
			else{
				HX_STACK_LINE(335)
				Float tmp5 = original->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(335)
				Float tmp6 = original->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				Float tmp7 = replace->get_width();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(335)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(335)
				Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(335)
				Float tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(335)
				replace->set_x(tmp10);
			}
			HX_STACK_LINE(337)
			bool tmp5 = center_y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(337)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			if ((tmp6)){
				HX_STACK_LINE(338)
				Float tmp7 = original->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(338)
				replace->set_y(tmp7);
			}
			else{
				HX_STACK_LINE(340)
				Float tmp7 = original->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(340)
				Float tmp8 = original->get_height();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(340)
				Float tmp9 = replace->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(340)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(340)
				Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(340)
				Float tmp12 = (tmp7 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(340)
				replace->set_y(tmp12);
			}
			HX_STACK_LINE(344)
			::flixel::FlxSprite tmp7 = ((::flixel::FlxSprite)(original));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(344)
			::flixel::FlxSprite tmp8 = ((::flixel::FlxSprite)(replace));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(344)
			this->replaceInGroup(tmp7,tmp8,null());
			HX_STACK_LINE(347)
			::haxe::ds::StringMap tmp9 = this->_asset_index;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(347)
			::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(347)
			tmp9->remove(tmp10);
			HX_STACK_LINE(350)
			::haxe::ds::StringMap tmp11 = this->_asset_index;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(350)
			::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(350)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp13 = replace;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(350)
			tmp11->set(tmp12,tmp13);
			HX_STACK_LINE(353)
			bool tmp14 = destroy_old;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(353)
			if ((tmp14)){
				HX_STACK_LINE(354)
				original->destroy();
				HX_STACK_LINE(355)
				original = null();
			}
		}
		HX_STACK_LINE(359)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = original;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(359)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUI_obj,replaceAsset,return )

Void FlxUI_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","destroy",0xe31793e1,"flixel.addons.ui.FlxUI.destroy","flixel/addons/ui/FlxUI.hx",368,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		::haxe::ds::StringMap tmp = this->_group_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(369)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(369)
		if ((tmp1)){
			HX_STACK_LINE(370)
			::haxe::ds::StringMap tmp2 = this->_group_index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(370)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(371)
					::haxe::ds::StringMap tmp4 = this->_group_index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(371)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(371)
					tmp4->remove(tmp5);
				}
;
			}
			HX_STACK_LINE(372)
			this->_group_index = null();
		}
		HX_STACK_LINE(374)
		::haxe::ds::StringMap tmp2 = this->_asset_index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		if ((tmp3)){
			HX_STACK_LINE(375)
			::haxe::ds::StringMap tmp4 = this->_asset_index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp5);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(376)
					::haxe::ds::StringMap tmp6 = this->_asset_index;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(376)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(376)
					tmp6->remove(tmp7);
				}
;
			}
			HX_STACK_LINE(377)
			this->_asset_index = null();
		}
		HX_STACK_LINE(379)
		::haxe::ds::StringMap tmp4 = this->_definition_index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(379)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(379)
		if ((tmp5)){
			HX_STACK_LINE(380)
			::haxe::ds::StringMap tmp6 = this->_definition_index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(380)
			Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(380)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(381)
					::haxe::ds::StringMap tmp8 = this->_definition_index;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(381)
					::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(381)
					tmp8->remove(tmp9);
				}
;
			}
			HX_STACK_LINE(382)
			this->_definition_index = null();
		}
		HX_STACK_LINE(384)
		this->_superIndexUI = null();
		HX_STACK_LINE(385)
		this->_ptr_tongue = null();
		HX_STACK_LINE(386)
		this->super::destroy();
	}
return null();
}


Void FlxUI_obj::load( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","load",0x34adecdf,"flixel.addons.ui.FlxUI.load","flixel/addons/ui/FlxUI.hx",395,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(396)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		{
			HX_STACK_LINE(396)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(396)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(396)
			tmp = tmp2;
		}
		HX_STACK_LINE(396)
		this->_group_index = tmp;
		HX_STACK_LINE(397)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		{
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(397)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(397)
		this->_asset_index = tmp1;
		HX_STACK_LINE(398)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(398)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(398)
		this->_definition_index = tmp2;
		HX_STACK_LINE(399)
		::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(399)
			::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			tmp3 = tmp5;
		}
		HX_STACK_LINE(399)
		this->_mode_index = tmp3;
		HX_STACK_LINE(402)
		bool tmp4 = (data != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		if ((tmp4)){
			HX_STACK_LINE(404)
			this->_data = data;
			HX_STACK_LINE(408)
			bool tmp5 = data->hasNode->resolve(HX_HCSTRING("include","\x28","\xfe","\xf6","\x51"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			if ((tmp5)){
				HX_STACK_LINE(409)
				::_List::ListIterator tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					::List tmp7 = data->nodes->resolve(HX_HCSTRING("include","\x28","\xfe","\xf6","\x51"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(409)
					::List _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(409)
					tmp6 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(409)
				::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(409)
				while((true)){
					HX_STACK_LINE(409)
					bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(409)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(409)
					if ((tmp8)){
						HX_STACK_LINE(409)
						break;
					}
					HX_STACK_LINE(409)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(409)
						_g->val = tmp10;
						HX_STACK_LINE(409)
						Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(409)
						_g->head = tmp11;
						HX_STACK_LINE(409)
						tmp9 = _g->val;
					}
					HX_STACK_LINE(409)
					::haxe::xml::Fast inc_data = ((::haxe::xml::Fast)(tmp9));		HX_STACK_VAR(inc_data,"inc_data");
					HX_STACK_LINE(410)
					::String tmp10 = inc_data->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(410)
					::String inc_id = tmp10;		HX_STACK_VAR(inc_id,"inc_id");
					HX_STACK_LINE(411)
					::String tmp11 = inc_id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(411)
					Dynamic tmp12 = ::flixel::addons::ui::U_obj::xml(tmp11,null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(411)
					::haxe::xml::Fast inc_xml = tmp12;		HX_STACK_VAR(inc_xml,"inc_xml");
					HX_STACK_LINE(412)
					bool tmp13 = (inc_xml != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(412)
					if ((tmp13)){
						HX_STACK_LINE(413)
						::_List::ListIterator tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(413)
						{
							HX_STACK_LINE(413)
							::List tmp15 = inc_xml->nodes->resolve(HX_HCSTRING("definition","\x93","\xd5","\x0d","\xec"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(413)
							::List _this = tmp15;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(413)
							tmp14 = ::_List::ListIterator_obj::__new(_this->h);
						}
						HX_STACK_LINE(413)
						::_List::ListIterator _g1 = tmp14;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(413)
						while((true)){
							HX_STACK_LINE(413)
							bool tmp15 = (_g1->head != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(413)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(413)
							if ((tmp16)){
								HX_STACK_LINE(413)
								break;
							}
							HX_STACK_LINE(413)
							Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(413)
							{
								HX_STACK_LINE(413)
								Dynamic tmp18 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(413)
								_g1->val = tmp18;
								HX_STACK_LINE(413)
								Dynamic tmp19 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(413)
								_g1->head = tmp19;
								HX_STACK_LINE(413)
								tmp17 = _g1->val;
							}
							HX_STACK_LINE(413)
							::haxe::xml::Fast def_data = ((::haxe::xml::Fast)(tmp17));		HX_STACK_VAR(def_data,"def_data");
							HX_STACK_LINE(415)
							::String tmp18 = def_data->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(415)
							::String tmp19 = (HX_HCSTRING("include:","\x12","\x65","\x27","\x66") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(415)
							::String def_id = tmp19;		HX_STACK_VAR(def_id,"def_id");
							HX_STACK_LINE(416)
							::haxe::ds::StringMap tmp20 = this->_definition_index;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(416)
							::String tmp21 = def_id;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(416)
							::haxe::xml::Fast tmp22 = def_data;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(416)
							tmp20->set(tmp21,tmp22);
						}
					}
				}
			}
			HX_STACK_LINE(428)
			bool tmp6 = data->hasNode->resolve(HX_HCSTRING("definition","\x93","\xd5","\x0d","\xec"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(428)
			if ((tmp6)){
				HX_STACK_LINE(429)
				::_List::ListIterator tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::List tmp8 = data->nodes->resolve(HX_HCSTRING("definition","\x93","\xd5","\x0d","\xec"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(429)
					::List _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					tmp7 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(429)
				::_List::ListIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(429)
				while((true)){
					HX_STACK_LINE(429)
					bool tmp8 = (_g->head != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(429)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(429)
					if ((tmp9)){
						HX_STACK_LINE(429)
						break;
					}
					HX_STACK_LINE(429)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(429)
					{
						HX_STACK_LINE(429)
						Dynamic tmp11 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(429)
						_g->val = tmp11;
						HX_STACK_LINE(429)
						Dynamic tmp12 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(429)
						_g->head = tmp12;
						HX_STACK_LINE(429)
						tmp10 = _g->val;
					}
					HX_STACK_LINE(429)
					::haxe::xml::Fast def_data = ((::haxe::xml::Fast)(tmp10));		HX_STACK_VAR(def_data,"def_data");
					HX_STACK_LINE(430)
					::String tmp11 = def_data->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(430)
					::String def_id = tmp11;		HX_STACK_VAR(def_id,"def_id");
					HX_STACK_LINE(431)
					::haxe::ds::StringMap tmp12 = this->_definition_index;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(431)
					::String tmp13 = def_id;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(431)
					::haxe::xml::Fast tmp14 = def_data;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(431)
					tmp12->set(tmp13,tmp14);
				}
			}
			HX_STACK_LINE(437)
			bool tmp7 = data->hasNode->resolve(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(437)
			if ((tmp7)){
				HX_STACK_LINE(438)
				::_List::ListIterator tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(438)
				{
					HX_STACK_LINE(438)
					::List tmp9 = data->nodes->resolve(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(438)
					::List _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(438)
					tmp8 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(438)
				::_List::ListIterator _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(438)
				while((true)){
					HX_STACK_LINE(438)
					bool tmp9 = (_g->head != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(438)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(438)
					if ((tmp10)){
						HX_STACK_LINE(438)
						break;
					}
					HX_STACK_LINE(438)
					Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(438)
					{
						HX_STACK_LINE(438)
						Dynamic tmp12 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(438)
						_g->val = tmp12;
						HX_STACK_LINE(438)
						Dynamic tmp13 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(438)
						_g->head = tmp13;
						HX_STACK_LINE(438)
						tmp11 = _g->val;
					}
					HX_STACK_LINE(438)
					::haxe::xml::Fast mode_data = ((::haxe::xml::Fast)(tmp11));		HX_STACK_VAR(mode_data,"mode_data");
					HX_STACK_LINE(439)
					::haxe::xml::Fast tmp12 = mode_data;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(439)
					::haxe::xml::Fast tmp13 = this->applyNodeConditionals(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(439)
					::haxe::xml::Fast mode_data2 = tmp13;		HX_STACK_VAR(mode_data2,"mode_data2");
					HX_STACK_LINE(440)
					::String tmp14 = mode_data->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(440)
					::String mode_id = tmp14;		HX_STACK_VAR(mode_id,"mode_id");
					HX_STACK_LINE(442)
					::haxe::ds::StringMap tmp15 = this->_mode_index;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(442)
					::String tmp16 = mode_id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(442)
					::haxe::xml::Fast tmp17 = mode_data2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(442)
					tmp15->set(tmp16,tmp17);
				}
			}
			HX_STACK_LINE(447)
			bool tmp8 = data->hasNode->resolve(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(447)
			if ((tmp8)){
				HX_STACK_LINE(448)
				::_List::ListIterator tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(448)
				{
					HX_STACK_LINE(448)
					::List tmp10 = data->nodes->resolve(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(448)
					::List _this = tmp10;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(448)
					tmp9 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(448)
				::_List::ListIterator _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(448)
				while((true)){
					HX_STACK_LINE(448)
					bool tmp10 = (_g->head != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(448)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(448)
					if ((tmp11)){
						HX_STACK_LINE(448)
						break;
					}
					HX_STACK_LINE(448)
					Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(448)
					{
						HX_STACK_LINE(448)
						Dynamic tmp13 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(448)
						_g->val = tmp13;
						HX_STACK_LINE(448)
						Dynamic tmp14 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(448)
						_g->head = tmp14;
						HX_STACK_LINE(448)
						tmp12 = _g->val;
					}
					HX_STACK_LINE(448)
					::haxe::xml::Fast group_data = ((::haxe::xml::Fast)(tmp12));		HX_STACK_VAR(group_data,"group_data");
					HX_STACK_LINE(451)
					::String tmp13 = group_data->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(451)
					::String id = tmp13;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(452)
					::flixel::addons::ui::FlxUIGroup tmp14 = ::flixel::addons::ui::FlxUIGroup_obj::__new(null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(452)
					::flixel::addons::ui::FlxUIGroup tempGroup = tmp14;		HX_STACK_VAR(tempGroup,"tempGroup");
					HX_STACK_LINE(453)
					tempGroup->id = id;
					HX_STACK_LINE(454)
					::haxe::ds::StringMap tmp15 = this->_group_index;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(454)
					::String tmp16 = id;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(454)
					::flixel::addons::ui::FlxUIGroup tmp17 = tempGroup;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(454)
					tmp15->set(tmp16,tmp17);
					HX_STACK_LINE(455)
					::flixel::addons::ui::FlxUIGroup tmp18 = tempGroup;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(455)
					this->add(tmp18);
				}
			}
			HX_STACK_LINE(459)
			::Xml tmp9 = data->x->firstElement();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(459)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(459)
			if ((tmp10)){
				HX_STACK_LINE(461)
				::Xml node;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(462)
				Dynamic tmp11 = data->x->elements();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(462)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp11);  __it->hasNext(); ){
					::Xml node1 = __it->next();
					{
						HX_STACK_LINE(464)
						::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(464)
						{
							HX_STACK_LINE(464)
							int tmp13 = node1->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(464)
							int tmp14 = ::Xml_obj::Element;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(464)
							bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(464)
							if ((tmp15)){
								HX_STACK_LINE(464)
								::String tmp16 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node1->nodeType);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(464)
								HX_STACK_DO_THROW(tmp16);
							}
							HX_STACK_LINE(464)
							tmp12 = node1->nodeName;
						}
						HX_STACK_LINE(464)
						::String type = tmp12;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(465)
						type.toLowerCase();
						HX_STACK_LINE(466)
						::haxe::xml::Fast tmp13 = ::haxe::xml::Fast_obj::__new(node1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(466)
						::haxe::xml::Fast obj = tmp13;		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(467)
						::String group_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(group_id,"group_id");
						HX_STACK_LINE(468)
						::flixel::addons::ui::FlxUIGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
						HX_STACK_LINE(470)
						::Xml tmp14 = obj->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(470)
						::String tmp15 = ::flixel::addons::ui::U_obj::xml_str(tmp14,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(470)
						::String thing_id = tmp15;		HX_STACK_VAR(thing_id,"thing_id");
						HX_STACK_LINE(473)
						bool tmp16 = obj->has->resolve(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(473)
						if ((tmp16)){
							HX_STACK_LINE(474)
							::String tmp17 = obj->att->resolve(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(474)
							group_id = tmp17;
							HX_STACK_LINE(475)
							::String tmp18 = group_id;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(475)
							::flixel::addons::ui::FlxUIGroup tmp19 = this->getGroup(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(475)
							tempGroup = tmp19;
						}
						HX_STACK_LINE(479)
						::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(479)
						::haxe::xml::Fast tmp18 = obj;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(479)
						::flixel::addons::ui::interfaces::IFlxUIWidget tmp19 = this->_loadThing(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(479)
						::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp19;		HX_STACK_VAR(thing,"thing");
						HX_STACK_LINE(481)
						bool tmp20 = (thing != null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(481)
						if ((tmp20)){
							HX_STACK_LINE(482)
							bool tmp21 = (tempGroup != null());		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(482)
							if ((tmp21)){
								HX_STACK_LINE(483)
								::flixel::FlxSprite tmp22 = ((::flixel::FlxSprite)(thing));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(483)
								tempGroup->add(tmp22);
							}
							else{
								HX_STACK_LINE(485)
								::flixel::FlxSprite tmp22 = ((::flixel::FlxSprite)(thing));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(485)
								this->add(tmp22);
							}
							HX_STACK_LINE(488)
							::haxe::xml::Fast tmp22 = obj;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(488)
							::flixel::addons::ui::interfaces::IFlxUIWidget tmp23 = thing;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(488)
							this->_loadPosition(tmp22,tmp23);
							HX_STACK_LINE(490)
							bool tmp24 = (thing_id != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(490)
							bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(490)
							if ((tmp24)){
								HX_STACK_LINE(490)
								tmp25 = (thing_id != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(490)
								tmp25 = false;
							}
							HX_STACK_LINE(490)
							if ((tmp25)){
								HX_STACK_LINE(491)
								::haxe::ds::StringMap tmp26 = this->_asset_index;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(491)
								::String tmp27 = thing_id;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(491)
								::flixel::addons::ui::interfaces::IFlxUIWidget tmp28 = thing;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(491)
								tmp26->set(tmp27,tmp28);
							}
						}
					}
;
				}
			}
			HX_STACK_LINE(498)
			::haxe::xml::Fast tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(498)
			this->_postLoad(tmp11);
		}
		else{
			HX_STACK_LINE(501)
			this->_onFinishLoad();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,load,(void))

Void FlxUI_obj::_postLoad( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_postLoad",0xe07320ac,"flixel.addons.ui.FlxUI._postLoad","flixel/addons/ui/FlxUI.hx",507,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(509)
		::Xml tmp = data->x->firstElement();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		if ((tmp1)){
			HX_STACK_LINE(511)
			::Xml node;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(512)
			Dynamic tmp2 = data->x->elements();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(512)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp2);  __it->hasNext(); ){
				::Xml node1 = __it->next();
				{
					HX_STACK_LINE(514)
					::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(514)
					{
						HX_STACK_LINE(514)
						int tmp4 = node1->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(514)
						int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(514)
						bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(514)
						if ((tmp6)){
							HX_STACK_LINE(514)
							::String tmp7 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node1->nodeType);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(514)
							HX_STACK_DO_THROW(tmp7);
						}
						HX_STACK_LINE(514)
						tmp3 = node1->nodeName;
					}
					HX_STACK_LINE(514)
					::String tmp4 = tmp3.toLowerCase();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(514)
					::haxe::xml::Fast tmp5 = ::haxe::xml::Fast_obj::__new(node1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(514)
					this->_postLoadThing(tmp4,tmp5);
				}
;
			}
		}
		HX_STACK_LINE(518)
		bool tmp2 = data->hasNode->resolve(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		if ((tmp2)){
			HX_STACK_LINE(519)
			::_List::ListIterator tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(519)
			{
				HX_STACK_LINE(519)
				::List tmp4 = data->nodes->resolve(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(519)
				::List _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(519)
				tmp3 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(519)
			::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(519)
			while((true)){
				HX_STACK_LINE(519)
				bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(519)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(519)
				if ((tmp5)){
					HX_STACK_LINE(519)
					break;
				}
				HX_STACK_LINE(519)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(519)
					Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(519)
					_g->val = tmp7;
					HX_STACK_LINE(519)
					Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(519)
					_g->head = tmp8;
					HX_STACK_LINE(519)
					tmp6 = _g->val;
				}
				HX_STACK_LINE(519)
				::haxe::xml::Fast mode_node = ((::haxe::xml::Fast)(tmp6));		HX_STACK_VAR(mode_node,"mode_node");
				HX_STACK_LINE(520)
				::Xml tmp7 = mode_node->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(520)
				bool tmp8 = ::flixel::addons::ui::U_obj::xml_bool(tmp7,HX_HCSTRING("is_default","\x2c","\x88","\x79","\x76"),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(520)
				bool is_default = tmp8;		HX_STACK_VAR(is_default,"is_default");
				HX_STACK_LINE(521)
				bool tmp9 = is_default;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(521)
				if ((tmp9)){
					HX_STACK_LINE(522)
					::Xml tmp10 = mode_node->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(522)
					::String tmp11 = ::flixel::addons::ui::U_obj::xml_str(tmp10,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(522)
					::String mode_id = tmp11;		HX_STACK_VAR(mode_id,"mode_id");
					HX_STACK_LINE(523)
					::String tmp12 = mode_id;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(523)
					this->setMode(tmp12,null());
					HX_STACK_LINE(524)
					break;
				}
			}
		}
		HX_STACK_LINE(529)
		bool tmp3 = (this->_failure_checks != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(529)
		if ((tmp3)){
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(530)
				Array< ::Dynamic > _g1 = this->_failure_checks;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(530)
				while((true)){
					HX_STACK_LINE(530)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(530)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(530)
					if ((tmp5)){
						HX_STACK_LINE(530)
						break;
					}
					HX_STACK_LINE(530)
					::haxe::xml::Fast tmp6 = _g1->__get(_g).StaticCast< ::haxe::xml::Fast >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(530)
					::haxe::xml::Fast data1 = tmp6;		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(530)
					++(_g);
					HX_STACK_LINE(531)
					::haxe::xml::Fast tmp7 = data1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(531)
					bool tmp8 = this->_checkFailure(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(531)
					if ((tmp8)){
						HX_STACK_LINE(532)
						this->failed = true;
						HX_STACK_LINE(533)
						break;
					}
				}
			}
			HX_STACK_LINE(536)
			::flixel::addons::ui::U_obj::clearArraySoft(this->_failure_checks);
			HX_STACK_LINE(537)
			this->_failure_checks = null();
		}
		HX_STACK_LINE(540)
		this->_onFinishLoad();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_postLoad,(void))

::String FlxUI_obj::get_currMode( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","get_currMode",0xd78f9337,"flixel.addons.ui.FlxUI.get_currMode","flixel/addons/ui/FlxUI.hx",544,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	::String tmp = this->_curr_mode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,get_currMode,return )

::String FlxUI_obj::set_currMode( ::String m){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_currMode",0xec88b6ab,"flixel.addons.ui.FlxUI.set_currMode","flixel/addons/ui/FlxUI.hx",545,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(545)
	::String tmp = m;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(545)
	this->setMode(tmp,null());
	HX_STACK_LINE(545)
	::String tmp1 = this->_curr_mode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(545)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_currMode,return )

Void FlxUI_obj::setMode( ::String mode_id,::String __o_target_id){
::String target_id = __o_target_id.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","setMode",0xcc767b0c,"flixel.addons.ui.FlxUI.setMode","flixel/addons/ui/FlxUI.hx",553,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mode_id,"mode_id")
	HX_STACK_ARG(target_id,"target_id")
{
		HX_STACK_LINE(554)
		::String tmp = this->_curr_mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		::String tmp1 = mode_id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(554)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(554)
		if ((tmp2)){
			HX_STACK_LINE(556)
			return null();
		}
		HX_STACK_LINE(558)
		::String tmp3 = mode_id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(558)
		::haxe::xml::Fast tmp4 = this->getMode(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(558)
		::haxe::xml::Fast mode = tmp4;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(559)
		this->_curr_mode = mode_id;
		HX_STACK_LINE(560)
		::String id = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(561)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(562)
		bool tmp5 = (target_id == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(562)
		if ((tmp5)){
			HX_STACK_LINE(563)
			bool tmp6 = (mode != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(563)
			if ((tmp6)){
				HX_STACK_LINE(565)
				::Xml xml;		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(566)
				Dynamic tmp7 = mode->get_elements();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(566)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(tmp7);  __it->hasNext(); ){
					::haxe::xml::Fast node = __it->next();
					{
						HX_STACK_LINE(568)
						::haxe::xml::Fast tmp8 = node;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(568)
						::haxe::xml::Fast tmp9 = this->applyNodeConditionals(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(568)
						::haxe::xml::Fast node2 = tmp9;		HX_STACK_VAR(node2,"node2");
						HX_STACK_LINE(569)
						xml = node2->x;
						HX_STACK_LINE(571)
						::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(571)
						{
							HX_STACK_LINE(571)
							int tmp11 = xml->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(571)
							int tmp12 = ::Xml_obj::Element;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(571)
							bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(571)
							if ((tmp13)){
								HX_STACK_LINE(571)
								::String tmp14 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + xml->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(571)
								HX_STACK_DO_THROW(tmp14);
							}
							HX_STACK_LINE(571)
							tmp10 = xml->nodeName;
						}
						HX_STACK_LINE(571)
						::String nodeName = tmp10;		HX_STACK_VAR(nodeName,"nodeName");
						HX_STACK_LINE(573)
						::String tmp11 = nodeName;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(573)
						::String _switch_1 = (tmp11);
						if (  ( _switch_1==HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"))){
							HX_STACK_LINE(575)
							::Xml tmp12 = xml;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(575)
							::String tmp13 = ::flixel::addons::ui::U_obj::xml_str(tmp12,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(575)
							this->showThing(tmp13,true);
						}
						else if (  ( _switch_1==HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"))){
							HX_STACK_LINE(577)
							::Xml tmp12 = xml;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(577)
							::String tmp13 = ::flixel::addons::ui::U_obj::xml_str(tmp12,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(577)
							this->showThing(tmp13,false);
						}
						else if (  ( _switch_1==HX_HCSTRING("align","\xc5","\x56","\x91","\x21"))){
							HX_STACK_LINE(579)
							::haxe::xml::Fast tmp12 = node2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(579)
							this->_alignThing(tmp12);
						}
						else if (  ( _switch_1==HX_HCSTRING("change","\x70","\x91","\x72","\xb7"))){
							HX_STACK_LINE(581)
							::haxe::xml::Fast tmp12 = node2;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(581)
							this->_changeThing(tmp12);
						}
						else if (  ( _switch_1==HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"))){
							HX_STACK_LINE(583)
							::Xml tmp12 = xml;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(583)
							::String tmp13 = ::flixel::addons::ui::U_obj::xml_str(tmp12,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(583)
							id = tmp13;
							HX_STACK_LINE(584)
							::String tmp14 = id;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(584)
							::flixel::addons::ui::interfaces::IFlxUIWidget tmp15 = this->getAsset(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(584)
							thing = tmp15;
							HX_STACK_LINE(585)
							bool tmp16 = (thing != null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(585)
							if ((tmp16)){
								HX_STACK_LINE(586)
								::haxe::xml::Fast tmp17 = node2;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(586)
								::flixel::addons::ui::interfaces::IFlxUIWidget tmp18 = thing;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(586)
								this->_loadPosition(tmp17,tmp18);
							}
						}
					}
;
				}
			}
		}
		else{
			HX_STACK_LINE(592)
			::String tmp6 = target_id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp7 = this->getAsset(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(592)
			::flixel::addons::ui::interfaces::IFlxUIWidget target = tmp7;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(593)
			bool tmp8 = (target != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(593)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(593)
			if ((tmp8)){
				HX_STACK_LINE(593)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(593)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(593)
				tmp9 = ::Std_obj::is(tmp11,hx::ClassOf< ::flixel::addons::ui::FlxUI >());
			}
			else{
				HX_STACK_LINE(593)
				tmp9 = false;
			}
			HX_STACK_LINE(593)
			if ((tmp9)){
				HX_STACK_LINE(594)
				::flixel::addons::ui::FlxUI tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(594)
				tmp10 = hx::TCast< ::flixel::addons::ui::FlxUI >::cast(target);
				HX_STACK_LINE(594)
				::flixel::addons::ui::FlxUI targetUI = tmp10;		HX_STACK_VAR(targetUI,"targetUI");
				HX_STACK_LINE(595)
				::String tmp11 = mode_id;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(595)
				targetUI->setMode(tmp11,HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,setMode,(void))

Void FlxUI_obj::showThing( ::String id,hx::Null< bool >  __o_b){
bool b = __o_b.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","showThing",0xd0d41c58,"flixel.addons.ui.FlxUI.showThing","flixel/addons/ui/FlxUI.hx",600,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(b,"b")
{
		HX_STACK_LINE(601)
		int tmp = id.indexOf(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(601)
		bool tmp1 = (tmp != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		if ((tmp1)){
			HX_STACK_LINE(602)
			Array< ::String > ids = id.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(ids,"ids");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(603)
				while((true)){
					HX_STACK_LINE(603)
					bool tmp2 = (_g < ids->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(603)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(603)
					if ((tmp3)){
						HX_STACK_LINE(603)
						break;
					}
					HX_STACK_LINE(603)
					::String tmp4 = ids->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(603)
					::String each_id = tmp4;		HX_STACK_VAR(each_id,"each_id");
					HX_STACK_LINE(603)
					++(_g);
					HX_STACK_LINE(604)
					::String tmp5 = each_id;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(604)
					::flixel::addons::ui::interfaces::IFlxUIWidget tmp6 = this->getAsset(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(604)
					::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp6;		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(605)
					bool tmp7 = (thing != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(605)
					if ((tmp7)){
						HX_STACK_LINE(606)
						bool tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(606)
						thing->set_visible(tmp8);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(610)
			bool tmp2 = (id != HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			if ((tmp2)){
				HX_STACK_LINE(611)
				::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(611)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = this->getAsset(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(611)
				::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp4;		HX_STACK_VAR(thing,"thing");
				HX_STACK_LINE(612)
				bool tmp5 = (thing != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(612)
				if ((tmp5)){
					HX_STACK_LINE(613)
					bool tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(613)
					thing->set_visible(tmp6);
				}
			}
			else{
				HX_STACK_LINE(616)
				::haxe::ds::StringMap tmp3 = this->_asset_index;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(616)
				Dynamic tmp4 = tmp3->keys();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(616)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp4);  __it->hasNext(); ){
					::String asset_id = __it->next();
					{
						HX_STACK_LINE(617)
						bool tmp5 = (asset_id != HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(617)
						if ((tmp5)){
							HX_STACK_LINE(618)
							::String tmp6 = asset_id;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(618)
							bool tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(618)
							this->showThing(tmp6,tmp7);
						}
					}
;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,showThing,(void))

::flixel::addons::ui::FlxUIGroup FlxUI_obj::getGroup( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getGroup",0xfa746602,"flixel.addons.ui.FlxUI.getGroup","flixel/addons/ui/FlxUI.hx",627,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(628)
		::haxe::ds::StringMap tmp = this->_group_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(628)
		::flixel::addons::ui::FlxUIGroup tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		::flixel::addons::ui::FlxUIGroup tempGroup = tmp2;		HX_STACK_VAR(tempGroup,"tempGroup");
		HX_STACK_LINE(629)
		bool tmp3 = (tempGroup == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(629)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(629)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(629)
		if ((tmp4)){
			HX_STACK_LINE(629)
			tmp5 = recursive;
		}
		else{
			HX_STACK_LINE(629)
			tmp5 = false;
		}
		HX_STACK_LINE(629)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		if ((tmp5)){
			HX_STACK_LINE(629)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(629)
			::flixel::addons::ui::FlxUI tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(629)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(629)
			tmp6 = false;
		}
		HX_STACK_LINE(629)
		if ((tmp6)){
			HX_STACK_LINE(630)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(630)
			bool tmp9 = recursive;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(630)
			::flixel::addons::ui::FlxUIGroup tmp10 = tmp7->getGroup(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(630)
			return tmp10;
		}
		HX_STACK_LINE(632)
		::flixel::addons::ui::FlxUIGroup tmp7 = tempGroup;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(632)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getGroup,return )

::flixel::text::FlxText FlxUI_obj::getFlxText( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getFlxText",0x55e507c2,"flixel.addons.ui.FlxUI.getFlxText","flixel/addons/ui/FlxUI.hx",635,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(636)
		::String tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(636)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(636)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp2 = this->getAsset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = tmp2;		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(637)
		bool tmp3 = (asset != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(637)
		if ((tmp3)){
			HX_STACK_LINE(638)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp4 = asset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(638)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::text::FlxText >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(638)
			if ((tmp5)){
				HX_STACK_LINE(639)
				::flixel::text::FlxText tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(639)
				tmp6 = hx::TCast< ::flixel::text::FlxText >::cast(asset);
				HX_STACK_LINE(639)
				return tmp6;
			}
		}
		HX_STACK_LINE(642)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getFlxText,return )

bool FlxUI_obj::hasAsset( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","hasAsset",0xb33a576f,"flixel.addons.ui.FlxUI.hasAsset","flixel/addons/ui/FlxUI.hx",645,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(646)
		::haxe::ds::StringMap tmp = this->_asset_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(646)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(646)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		if ((tmp2)){
			HX_STACK_LINE(647)
			return true;
		}
		HX_STACK_LINE(649)
		bool tmp3 = recursive;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(649)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(649)
		if ((tmp3)){
			HX_STACK_LINE(649)
			::flixel::addons::ui::FlxUI tmp5 = this->_superIndexUI;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(649)
			::flixel::addons::ui::FlxUI tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(649)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(649)
			tmp4 = false;
		}
		HX_STACK_LINE(649)
		if ((tmp4)){
			HX_STACK_LINE(650)
			::flixel::addons::ui::FlxUI tmp5 = this->_superIndexUI;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(650)
			::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(650)
			bool tmp7 = recursive;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(650)
			bool tmp8 = tmp5->hasAsset(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			return tmp8;
		}
		HX_STACK_LINE(652)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,hasAsset,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::getAsset( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getAsset",0x86b91cb3,"flixel.addons.ui.FlxUI.getAsset","flixel/addons/ui/FlxUI.hx",655,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(656)
		::haxe::ds::StringMap tmp = this->_asset_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(656)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(656)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = tmp2;		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(657)
		bool tmp3 = (asset == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(657)
		if ((tmp4)){
			HX_STACK_LINE(657)
			tmp5 = recursive;
		}
		else{
			HX_STACK_LINE(657)
			tmp5 = false;
		}
		HX_STACK_LINE(657)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(657)
		if ((tmp5)){
			HX_STACK_LINE(657)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(657)
			::flixel::addons::ui::FlxUI tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(657)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(657)
			tmp6 = false;
		}
		HX_STACK_LINE(657)
		if ((tmp6)){
			HX_STACK_LINE(658)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(658)
			::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(658)
			bool tmp9 = recursive;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(658)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = tmp7->getAsset(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(658)
			return tmp10;
		}
		HX_STACK_LINE(660)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp7 = asset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(660)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getAsset,return )

::haxe::xml::Fast FlxUI_obj::getMode( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getMode",0xd974ea00,"flixel.addons.ui.FlxUI.getMode","flixel/addons/ui/FlxUI.hx",663,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(664)
		::haxe::ds::StringMap tmp = this->_mode_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		::haxe::xml::Fast tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		::haxe::xml::Fast mode = tmp2;		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(665)
		bool tmp3 = (mode == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(665)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(665)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(665)
		if ((tmp4)){
			HX_STACK_LINE(665)
			tmp5 = recursive;
		}
		else{
			HX_STACK_LINE(665)
			tmp5 = false;
		}
		HX_STACK_LINE(665)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(665)
		if ((tmp5)){
			HX_STACK_LINE(665)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(665)
			::flixel::addons::ui::FlxUI tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(665)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(665)
			tmp6 = false;
		}
		HX_STACK_LINE(665)
		if ((tmp6)){
			HX_STACK_LINE(666)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(666)
			::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(666)
			bool tmp9 = recursive;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(666)
			::haxe::xml::Fast tmp10 = tmp7->getMode(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(666)
			return tmp10;
		}
		HX_STACK_LINE(668)
		::haxe::xml::Fast tmp7 = mode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(668)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getMode,return )

::flixel::addons::ui::ButtonLabelStyle FlxUI_obj::getLabelStyleFromDefinition( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLabelStyleFromDefinition",0xade61a37,"flixel.addons.ui.FlxUI.getLabelStyleFromDefinition","flixel/addons/ui/FlxUI.hx",671,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(672)
		::String tmp = key;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(672)
		::haxe::xml::Fast tmp2 = this->getDefinition(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		::haxe::xml::Fast definition = tmp2;		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(673)
		bool tmp3 = (definition != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(673)
		if ((tmp3)){
			HX_STACK_LINE(674)
			::haxe::xml::Fast tmp4 = definition;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(674)
			::flixel::addons::ui::FontDef tmp5 = this->_loadFontDef(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(674)
			::flixel::addons::ui::FontDef fontDef = tmp5;		HX_STACK_VAR(fontDef,"fontDef");
			HX_STACK_LINE(675)
			::Xml tmp6 = definition->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(675)
			::String tmp7 = ::flixel::addons::ui::U_obj::xml_str(tmp6,HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(675)
			::String align = tmp7;		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(675)
			bool tmp8 = (align == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(675)
			if ((tmp8)){
				HX_STACK_LINE(675)
				align = null();
			}
			HX_STACK_LINE(676)
			::haxe::xml::Fast tmp9 = definition;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(676)
			int tmp10 = this->_loadColor(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(676)
			int color = tmp10;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(677)
			::haxe::xml::Fast tmp11 = definition;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(677)
			::flixel::addons::ui::BorderDef tmp12 = this->_loadBorder(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(677)
			::flixel::addons::ui::BorderDef border = tmp12;		HX_STACK_VAR(border,"border");
			HX_STACK_LINE(678)
			::flixel::addons::ui::ButtonLabelStyle tmp13 = ::flixel::addons::ui::ButtonLabelStyle_obj::__new(fontDef,align,color,border);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(678)
			return tmp13;
		}
		HX_STACK_LINE(680)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getLabelStyleFromDefinition,return )

::haxe::xml::Fast FlxUI_obj::getDefinition( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getDefinition",0xdd003ff0,"flixel.addons.ui.FlxUI.getDefinition","flixel/addons/ui/FlxUI.hx",683,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(684)
		::haxe::ds::StringMap tmp = this->_definition_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(684)
		::String tmp1 = key;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		::haxe::xml::Fast tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(684)
		::haxe::xml::Fast definition = tmp2;		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(685)
		bool tmp3 = (definition == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(685)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(685)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(685)
		if ((tmp4)){
			HX_STACK_LINE(685)
			tmp5 = recursive;
		}
		else{
			HX_STACK_LINE(685)
			tmp5 = false;
		}
		HX_STACK_LINE(685)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(685)
		if ((tmp5)){
			HX_STACK_LINE(685)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(685)
			::flixel::addons::ui::FlxUI tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(685)
			tmp6 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(685)
			tmp6 = false;
		}
		HX_STACK_LINE(685)
		if ((tmp6)){
			HX_STACK_LINE(686)
			::flixel::addons::ui::FlxUI tmp7 = this->_superIndexUI;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(686)
			::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(686)
			bool tmp9 = recursive;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(686)
			::haxe::xml::Fast tmp10 = tmp7->getDefinition(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(686)
			definition = tmp10;
		}
		HX_STACK_LINE(688)
		bool tmp7 = (definition == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(688)
		if ((tmp7)){
			HX_STACK_LINE(689)
			int tmp8 = key.indexOf(HX_HCSTRING("include:","\x12","\x65","\x27","\x66"),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(689)
			bool tmp9 = (tmp8 == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(689)
			if ((tmp9)){
				HX_STACK_LINE(692)
				::String tmp10 = (HX_HCSTRING("include:","\x12","\x65","\x27","\x66") + key);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(692)
				bool tmp11 = recursive;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(692)
				::haxe::xml::Fast tmp12 = this->getDefinition(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(692)
				definition = tmp12;
			}
		}
		HX_STACK_LINE(695)
		::haxe::xml::Fast tmp8 = definition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(695)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getDefinition,return )

Void FlxUI_obj::replaceInGroup( ::flixel::FlxSprite original,::flixel::FlxSprite replace,hx::Null< bool >  __o_splice){
bool splice = __o_splice.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","replaceInGroup",0xb7beeb3f,"flixel.addons.ui.FlxUI.replaceInGroup","flixel/addons/ui/FlxUI.hx",745,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(original,"original")
	HX_STACK_ARG(replace,"replace")
	HX_STACK_ARG(splice,"splice")
{
		HX_STACK_LINE(748)
		::haxe::ds::StringMap tmp = this->_group_index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		if ((tmp1)){
			HX_STACK_LINE(749)
			::haxe::ds::StringMap tmp2 = this->_group_index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(749)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(749)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(750)
					::haxe::ds::StringMap tmp4 = this->_group_index;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(750)
					::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(750)
					::flixel::addons::ui::FlxUIGroup tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(750)
					::flixel::addons::ui::FlxUIGroup tempGroup = tmp6;		HX_STACK_VAR(tempGroup,"tempGroup");
					HX_STACK_LINE(751)
					bool tmp7 = (tempGroup->group->members != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(751)
					if ((tmp7)){
						HX_STACK_LINE(752)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(753)
						{
							HX_STACK_LINE(753)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(753)
							Array< ::Dynamic > _g1 = tempGroup->group->members;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(753)
							while((true)){
								HX_STACK_LINE(753)
								bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(753)
								bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(753)
								if ((tmp9)){
									HX_STACK_LINE(753)
									break;
								}
								HX_STACK_LINE(753)
								::flixel::FlxSprite tmp10 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(753)
								::flixel::FlxSprite member = tmp10;		HX_STACK_VAR(member,"member");
								HX_STACK_LINE(753)
								++(_g);
								HX_STACK_LINE(754)
								bool tmp11 = (member != null());		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(754)
								if ((tmp11)){
									HX_STACK_LINE(755)
									bool tmp12 = (member == original);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(755)
									if ((tmp12)){
										HX_STACK_LINE(756)
										::flixel::FlxSprite tmp13 = replace;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(756)
										hx::IndexRef((tempGroup->group->members).mPtr,i) = tmp13;
										HX_STACK_LINE(757)
										bool tmp14 = (replace == null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(757)
										if ((tmp14)){
											HX_STACK_LINE(758)
											bool tmp15 = splice;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(758)
											if ((tmp15)){
												HX_STACK_LINE(759)
												int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
												HX_STACK_LINE(759)
												tempGroup->group->members->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp16,(int)1);
												HX_STACK_LINE(760)
												(i)--;
											}
										}
										HX_STACK_LINE(763)
										return null();
									}
									HX_STACK_LINE(765)
									(i)++;
								}
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(773)
		::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(773)
		bool tmp3 = (tmp2->members != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(773)
		if ((tmp3)){
			HX_STACK_LINE(774)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(775)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(775)
				::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(775)
				Array< ::Dynamic > _g1 = tmp4->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(775)
				while((true)){
					HX_STACK_LINE(775)
					bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(775)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(775)
					if ((tmp6)){
						HX_STACK_LINE(775)
						break;
					}
					HX_STACK_LINE(775)
					::flixel::FlxSprite tmp7 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(775)
					::flixel::FlxSprite member = tmp7;		HX_STACK_VAR(member,"member");
					HX_STACK_LINE(775)
					++(_g);
					HX_STACK_LINE(776)
					bool tmp8 = (member != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(776)
					if ((tmp8)){
						HX_STACK_LINE(777)
						bool tmp9 = (member == original);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(777)
						if ((tmp9)){
							HX_STACK_LINE(778)
							::flixel::group::FlxTypedGroup tmp10 = this->group;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(778)
							::flixel::FlxSprite tmp11 = replace;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(778)
							hx::IndexRef((tmp10->members).mPtr,i) = tmp11;
							HX_STACK_LINE(779)
							bool tmp12 = (replace == null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(779)
							if ((tmp12)){
								HX_STACK_LINE(780)
								bool tmp13 = splice;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(780)
								if ((tmp13)){
									HX_STACK_LINE(781)
									::flixel::group::FlxTypedGroup tmp14 = this->group;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(781)
									int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(781)
									tmp14->members->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp15,(int)1);
									HX_STACK_LINE(782)
									(i)--;
								}
							}
							HX_STACK_LINE(785)
							return null();
						}
					}
					HX_STACK_LINE(788)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,replaceInGroup,(void))

::haxe::xml::Fast FlxUI_obj::applyNodeConditionals( ::haxe::xml::Fast info){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","applyNodeConditionals",0x57bfbe44,"flixel.addons.ui.FlxUI.applyNodeConditionals","flixel/addons/ui/FlxUI.hx",795,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(796)
	bool tmp = info->hasNode->resolve(HX_HCSTRING("locale","\x9a","\x74","\xbf","\x59"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(796)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(796)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(796)
	if ((tmp1)){
		HX_STACK_LINE(796)
		tmp2 = info->hasNode->resolve(HX_HCSTRING("haxedef","\x5f","\xa1","\x7a","\x08"));
	}
	else{
		HX_STACK_LINE(796)
		tmp2 = true;
	}
	HX_STACK_LINE(796)
	if ((tmp2)){
		HX_STACK_LINE(797)
		::Xml tmp3 = info->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(797)
		::String tmp4 = ::haxe::xml::Printer_obj::print(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(797)
		::Xml tmp5 = ::Xml_obj::parse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(797)
		::Xml tmp6 = tmp5->firstElement();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(797)
		::haxe::xml::Fast tmp7 = ::haxe::xml::Fast_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(797)
		info = tmp7;
		HX_STACK_LINE(799)
		bool tmp8 = info->hasNode->resolve(HX_HCSTRING("locale","\x9a","\x74","\xbf","\x59"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(799)
		if ((tmp8)){
			HX_STACK_LINE(800)
			::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(800)
			::haxe::xml::Fast tmp10 = this->applyNodeChanges(tmp9,HX_HCSTRING("locale","\x9a","\x74","\xbf","\x59"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(800)
			info = tmp10;
		}
		HX_STACK_LINE(803)
		bool tmp9 = info->hasNode->resolve(HX_HCSTRING("haxedef","\x5f","\xa1","\x7a","\x08"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(803)
		if ((tmp9)){
			HX_STACK_LINE(804)
			::haxe::xml::Fast tmp10 = info;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(804)
			::haxe::xml::Fast tmp11 = this->applyNodeChanges(tmp10,HX_HCSTRING("haxedef","\x5f","\xa1","\x7a","\x08"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(804)
			info = tmp11;
		}
	}
	HX_STACK_LINE(807)
	::haxe::xml::Fast tmp3 = info;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(807)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,applyNodeConditionals,return )

::haxe::xml::Fast FlxUI_obj::applyNodeChanges( ::haxe::xml::Fast data,::String nodeName){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","applyNodeChanges",0x1f7e448c,"flixel.addons.ui.FlxUI.applyNodeChanges","flixel/addons/ui/FlxUI.hx",816,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(819)
	::String nodeValue = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(nodeValue,"nodeValue");
	HX_STACK_LINE(822)
	bool tmp = (nodeName == HX_HCSTRING("locale","\x9a","\x74","\xbf","\x59"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(822)
	if ((tmp)){
		HX_STACK_LINE(823)
		::flixel::addons::ui::interfaces::IFireTongue tmp1 = this->_ptr_tongue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(823)
		if ((tmp2)){
			HX_STACK_LINE(824)
			::haxe::xml::Fast tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(824)
			return tmp3;
		}
		HX_STACK_LINE(826)
		::flixel::addons::ui::interfaces::IFireTongue tmp3 = this->_ptr_tongue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(826)
		::String tmp4 = tmp3->get_locale();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(826)
		::String tmp5 = tmp4.toLowerCase();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(826)
		nodeValue = tmp5;
	}
	HX_STACK_LINE(830)
	bool haxedef = false;		HX_STACK_VAR(haxedef,"haxedef");
	HX_STACK_LINE(831)
	bool tmp1 = (nodeName == HX_HCSTRING("haxedef","\x5f","\xa1","\x7a","\x08"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(831)
	if ((tmp1)){
		HX_STACK_LINE(832)
		haxedef = true;
	}
	HX_STACK_LINE(835)
	{
		HX_STACK_LINE(835)
		::_List::ListIterator tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		{
			HX_STACK_LINE(835)
			::String tmp3 = nodeName;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(835)
			::List tmp4 = data->nodes->resolve(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(835)
			::List _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(835)
			tmp2 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(835)
		::_List::ListIterator _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(835)
		while((true)){
			HX_STACK_LINE(835)
			bool tmp3 = (_g->head != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(835)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(835)
			if ((tmp4)){
				HX_STACK_LINE(835)
				break;
			}
			HX_STACK_LINE(835)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(835)
			{
				HX_STACK_LINE(835)
				Dynamic tmp6 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(835)
				_g->val = tmp6;
				HX_STACK_LINE(835)
				Dynamic tmp7 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(835)
				_g->head = tmp7;
				HX_STACK_LINE(835)
				tmp5 = _g->val;
			}
			HX_STACK_LINE(835)
			::haxe::xml::Fast cNode = ((::haxe::xml::Fast)(tmp5));		HX_STACK_VAR(cNode,"cNode");
			HX_STACK_LINE(836)
			::Xml tmp6 = cNode->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(836)
			::String tmp7 = ::flixel::addons::ui::U_obj::xml_str(tmp6,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(836)
			::String cid = tmp7;		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(838)
			bool tmp8 = haxedef;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(838)
			if ((tmp8)){
				HX_STACK_LINE(839)
				nodeValue = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				HX_STACK_LINE(840)
				::String tmp9 = cid;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(840)
				bool tmp10 = ::flixel::addons::ui::U_obj::checkHaxedef(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(840)
				if ((tmp10)){
					HX_STACK_LINE(841)
					nodeValue = cid;
				}
			}
			HX_STACK_LINE(845)
			bool tmp9 = (cid == nodeValue);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(845)
			if ((tmp9)){
				HX_STACK_LINE(846)
				bool tmp10 = cNode->hasNode->resolve(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(846)
				if ((tmp10)){
					HX_STACK_LINE(847)
					::_List::ListIterator tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(847)
					{
						HX_STACK_LINE(847)
						::List tmp12 = cNode->nodes->resolve(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(847)
						::List _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(847)
						tmp11 = ::_List::ListIterator_obj::__new(_this->h);
					}
					HX_STACK_LINE(847)
					::_List::ListIterator _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(847)
					while((true)){
						HX_STACK_LINE(847)
						bool tmp12 = (_g1->head != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(847)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(847)
						if ((tmp13)){
							HX_STACK_LINE(847)
							break;
						}
						HX_STACK_LINE(847)
						Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(847)
						{
							HX_STACK_LINE(847)
							Dynamic tmp15 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(847)
							_g1->val = tmp15;
							HX_STACK_LINE(847)
							Dynamic tmp16 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(847)
							_g1->head = tmp16;
							HX_STACK_LINE(847)
							tmp14 = _g1->val;
						}
						HX_STACK_LINE(847)
						::haxe::xml::Fast change = ((::haxe::xml::Fast)(tmp14));		HX_STACK_VAR(change,"change");
						HX_STACK_LINE(848)
						::Xml xml;		HX_STACK_VAR(xml,"xml");
						HX_STACK_LINE(849)
						Dynamic tmp15 = change->x->attributes();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(849)
						for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp15);  __it->hasNext(); ){
							::String att = __it->next();
							{
								HX_STACK_LINE(850)
								::String tmp16 = att;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(850)
								::String tmp17 = change->x->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(850)
								::String value = tmp17;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(851)
								::String tmp18 = att;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(851)
								::String tmp19 = value;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(851)
								data->x->set(tmp18,tmp19);
							}
;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(858)
	::haxe::xml::Fast tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(858)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,applyNodeChanges,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadThing( ::String type,::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadThing",0x7ce5f322,"flixel.addons.ui.FlxUI._loadThing","flixel/addons/ui/FlxUI.hx",861,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(862)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("use_def","\x8d","\xda","\xe9","\x62"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(862)
	::String use_def = tmp1;		HX_STACK_VAR(use_def,"use_def");
	HX_STACK_LINE(863)
	::haxe::xml::Fast definition = null();		HX_STACK_VAR(definition,"definition");
	HX_STACK_LINE(864)
	bool tmp2 = (use_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(864)
	if ((tmp2)){
		HX_STACK_LINE(865)
		::String tmp3 = use_def;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(865)
		::haxe::xml::Fast tmp4 = this->getDefinition(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(865)
		definition = tmp4;
	}
	HX_STACK_LINE(868)
	::haxe::xml::Fast tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(868)
	::haxe::xml::Fast tmp4 = definition;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(868)
	::haxe::xml::Fast tmp5 = ::flixel::addons::ui::FlxUI_obj::consolidateData(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(868)
	::haxe::xml::Fast info = tmp5;		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(869)
	::haxe::xml::Fast tmp6 = info;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(869)
	::haxe::xml::Fast tmp7 = this->applyNodeConditionals(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(869)
	info = tmp7;
	HX_STACK_LINE(871)
	::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(871)
	::String _switch_2 = (tmp8);
	if (  ( _switch_2==HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"))){
		HX_STACK_LINE(872)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(872)
		::flixel::addons::ui::FlxUIRegion tmp10 = this->_loadRegion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(872)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("chrome","\x7a","\xf9","\xaf","\xc2")) ||  ( _switch_2==HX_HCSTRING("nineslicesprite","\xe5","\xad","\xda","\x98")) ||  ( _switch_2==HX_HCSTRING("nine_slice_sprite","\xff","\x6d","\x22","\xc8")) ||  ( _switch_2==HX_HCSTRING("nineslice","\xe0","\x29","\x78","\xd8")) ||  ( _switch_2==HX_HCSTRING("nine_slice","\x45","\x82","\x57","\x9b"))){
		HX_STACK_LINE(873)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(873)
		::flixel::addons::ui::FlxUI9SliceSprite tmp10 = this->_load9SliceSprite(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(873)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("tile_test","\x43","\xd2","\x38","\xf8"))){
		HX_STACK_LINE(874)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(874)
		::flixel::addons::ui::FlxUITileTest tmp10 = this->_loadTileTest(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(874)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"))){
		HX_STACK_LINE(875)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(875)
		::flixel::addons::ui::FlxUISprite tmp10 = this->_loadLine(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(875)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"))){
		HX_STACK_LINE(876)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(876)
		::flixel::addons::ui::FlxUISprite tmp10 = this->_loadSprite(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(876)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"))){
		HX_STACK_LINE(877)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(877)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = this->_loadText(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(877)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("numeric_stepper","\x5f","\x56","\xdc","\x30"))){
		HX_STACK_LINE(878)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(878)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = this->_loadNumericStepper(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(878)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"))){
		HX_STACK_LINE(879)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(879)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = this->_loadButton(tmp9,null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(879)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("button_toggle","\x81","\x71","\xc8","\x4e"))){
		HX_STACK_LINE(880)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(880)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = this->_loadButton(tmp9,true,true,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(880)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("tab_menu","\x09","\x73","\xe1","\xd6"))){
		HX_STACK_LINE(882)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(882)
		::flixel::addons::ui::FlxUITabMenu tmp10 = this->_loadTabMenu(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(882)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("dropdown_menu","\xcd","\x8f","\xc7","\x05")) ||  ( _switch_2==HX_HCSTRING("dropdown","\x11","\x74","\x2f","\xfd")) ||  ( _switch_2==HX_HCSTRING("pulldown","\xa7","\xca","\xa0","\xa7")) ||  ( _switch_2==HX_HCSTRING("pulldown_menu","\x77","\x99","\x46","\x8c"))){
		HX_STACK_LINE(885)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(885)
		::flixel::addons::ui::FlxUIDropDownMenu tmp10 = this->_loadDropDownMenu(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(885)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("checkbox","\x43","\xd2","\xf5","\xac"))){
		HX_STACK_LINE(887)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(887)
		::flixel::addons::ui::FlxUICheckBox tmp10 = this->_loadCheckBox(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(887)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("radio_group","\xbb","\x79","\xeb","\xb8"))){
		HX_STACK_LINE(888)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(888)
		::flixel::addons::ui::FlxUIRadioGroup tmp10 = this->_loadRadioGroup(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(888)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58")) ||  ( _switch_2==HX_HCSTRING("ui","\x54","\x66","\x00","\x00"))){
		HX_STACK_LINE(889)
		::haxe::xml::Fast tmp9 = info;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(889)
		::flixel::addons::ui::FlxUI tmp10 = this->_loadLayout(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(889)
		return tmp10;
	}
	else if (  ( _switch_2==HX_HCSTRING("failure","\x4a","\x70","\xfa","\x16"))){
		HX_STACK_LINE(890)
		bool tmp9 = (this->_failure_checks == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(890)
		if ((tmp9)){
			HX_STACK_LINE(890)
			this->_failure_checks = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(891)
		::haxe::xml::Fast tmp10 = data;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(891)
		this->_failure_checks->push(tmp10);
		HX_STACK_LINE(892)
		return null();
	}
	else if (  ( _switch_2==HX_HCSTRING("align","\xc5","\x56","\x91","\x21"))){
		HX_STACK_LINE(893)
		::haxe::xml::Fast tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(893)
		this->_alignThing(tmp9);
		HX_STACK_LINE(894)
		return null();
	}
	else if (  ( _switch_2==HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")) ||  ( _switch_2==HX_HCSTRING("include","\x28","\xfe","\xf6","\x51")) ||  ( _switch_2==HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")) ||  ( _switch_2==HX_HCSTRING("load_if","\x96","\x33","\xeb","\x08"))){
		HX_STACK_LINE(896)
		return null();
	}
	else  {
		HX_STACK_LINE(900)
		::flixel::addons::ui::interfaces::IEventGetter tmp9 = this->_ptr;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(900)
		::String tmp10 = (HX_HCSTRING("ui_get:","\xef","\x47","\x3b","\xf4") + type);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(900)
		::haxe::xml::Fast tmp11 = info;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(900)
		Dynamic tmp12 = tmp9->getRequest(tmp10,hx::ObjectPtr<OBJ_>(this),tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(900)
		::flixel::addons::ui::interfaces::IFlxUIWidget result = tmp12;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(901)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp13 = result;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(901)
		return tmp13;
	}
;
;
	HX_STACK_LINE(903)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadThing,return )

Float FlxUI_obj::_loadX( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadX",0x4a11c1ac,"flixel.addons.ui.FlxUI._loadX","flixel/addons/ui/FlxUI.hx",907,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(908)
		::haxe::xml::Fast tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		Float tmp1 = default_;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		Float tmp2 = this->_loadWidth(tmp,tmp1,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(908)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadX,return )

Float FlxUI_obj::_loadY( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadY",0x4a11c1ad,"flixel.addons.ui.FlxUI._loadY","flixel/addons/ui/FlxUI.hx",911,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(912)
		::haxe::xml::Fast tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(912)
		Float tmp1 = default_;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(912)
		Float tmp2 = this->_loadHeight(tmp,tmp1,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(912)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadY,return )

Float FlxUI_obj::_loadWidth( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_,::String __o_str){
Float default_ = __o_default_.Default(10);
::String str = __o_str.Default(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadWidth",0x37bf213a,"flixel.addons.ui.FlxUI._loadWidth","flixel/addons/ui/FlxUI.hx",915,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(916)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(916)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(916)
		Float tmp2 = default_;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(916)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(916)
		::String tmp4 = ::flixel::addons::ui::U_obj::xml_str(tmp,tmp1,true,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(916)
		::String ws = tmp4;		HX_STACK_VAR(ws,"ws");
		HX_STACK_LINE(917)
		::String tmp5 = ws;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(917)
		Float tmp6 = default_;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(917)
		Float tmp7 = this->_getDataSize(HX_HCSTRING("w","\x77","\x00","\x00","\x00"),tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(917)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadWidth,return )

Float FlxUI_obj::_loadHeight( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_,::String __o_str){
Float default_ = __o_default_.Default(10);
::String str = __o_str.Default(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadHeight",0x45cd6a33,"flixel.addons.ui.FlxUI._loadHeight","flixel/addons/ui/FlxUI.hx",920,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(921)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(921)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(921)
		Float tmp2 = default_;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(921)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(921)
		::String tmp4 = ::flixel::addons::ui::U_obj::xml_str(tmp,tmp1,true,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(921)
		::String hs = tmp4;		HX_STACK_VAR(hs,"hs");
		HX_STACK_LINE(922)
		::String tmp5 = hs;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(922)
		Float tmp6 = default_;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(922)
		Float tmp7 = this->_getDataSize(HX_HCSTRING("h","\x68","\x00","\x00","\x00"),tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(922)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadHeight,return )

::flixel::util::FlxPoint FlxUI_obj::_loadCompass( ::haxe::xml::Fast data,::String __o_str){
::String str = __o_str.Default(HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadCompass",0x511db9c6,"flixel.addons.ui.FlxUI._loadCompass","flixel/addons/ui/FlxUI.hx",925,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(926)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(926)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(926)
		::String tmp2 = ::flixel::addons::ui::U_obj::xml_str(tmp,tmp1,true,HX_HCSTRING("nw","\x49","\x60","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(926)
		::String cs = tmp2;		HX_STACK_VAR(cs,"cs");
		HX_STACK_LINE(927)
		::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(927)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(927)
			::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(927)
			::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(927)
			Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(927)
			Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(927)
			::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(927)
			::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(927)
			point->_inPool = false;
			HX_STACK_LINE(927)
			tmp3 = point;
		}
		HX_STACK_LINE(927)
		::flixel::util::FlxPoint fp = tmp3;		HX_STACK_VAR(fp,"fp");
		HX_STACK_LINE(928)
		::String tmp4 = cs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(928)
		::String _switch_3 = (tmp4);
		if (  ( _switch_3==HX_HCSTRING("nw","\x49","\x60","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("ul","\x57","\x66","\x00","\x00"))){
			HX_STACK_LINE(929)
			fp->set_x((int)0);
			HX_STACK_LINE(929)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_HCSTRING("n","\x6e","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
			HX_STACK_LINE(930)
			fp->set_x(((Float)0.5));
			HX_STACK_LINE(930)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_HCSTRING("ne","\x37","\x60","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("ur","\x5d","\x66","\x00","\x00"))){
			HX_STACK_LINE(931)
			fp->set_x((int)1);
			HX_STACK_LINE(931)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_HCSTRING("e","\x65","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("r","\x72","\x00","\x00","\x00"))){
			HX_STACK_LINE(932)
			fp->set_x((int)1);
			HX_STACK_LINE(932)
			fp->set_y(((Float)0.5));
		}
		else if (  ( _switch_3==HX_HCSTRING("se","\x92","\x64","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("lr","\x86","\x5e","\x00","\x00"))){
			HX_STACK_LINE(933)
			fp->set_x((int)1);
			HX_STACK_LINE(933)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_HCSTRING("s","\x73","\x00","\x00","\x00"))){
			HX_STACK_LINE(934)
			fp->set_x(((Float)0.5));
			HX_STACK_LINE(934)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_HCSTRING("sw","\xa4","\x64","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("ll","\x80","\x5e","\x00","\x00"))){
			HX_STACK_LINE(935)
			fp->set_x((int)0);
			HX_STACK_LINE(935)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_HCSTRING("w","\x77","\x00","\x00","\x00"))){
			HX_STACK_LINE(936)
			fp->set_x(((Float)0.5));
			HX_STACK_LINE(936)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_HCSTRING("m","\x6d","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("c","\x63","\x00","\x00","\x00")) ||  ( _switch_3==HX_HCSTRING("mid","\x88","\x11","\x53","\x00")) ||  ( _switch_3==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
			HX_STACK_LINE(937)
			fp->set_x(((Float)0.5));
			HX_STACK_LINE(937)
			fp->set_y(((Float)0.5));
		}
		HX_STACK_LINE(939)
		::flixel::util::FlxPoint tmp5 = fp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(939)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadCompass,return )

Void FlxUI_obj::_changeParamsThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_changeParamsThing",0x3feee472,"flixel.addons.ui.FlxUI._changeParamsThing","flixel/addons/ui/FlxUI.hx",942,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(943)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		::String id = tmp1;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(944)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(944)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = this->getAsset(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(944)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp3;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(945)
		bool tmp4 = (thing == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(945)
		if ((tmp4)){
			HX_STACK_LINE(946)
			return null();
		}
		HX_STACK_LINE(949)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp5 = thing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(949)
		bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(949)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(949)
		if ((tmp7)){
			HX_STACK_LINE(950)
			return null();
		}
		HX_STACK_LINE(953)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(954)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp8 = thing;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(954)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(954)
		if ((tmp9)){
		}
		HX_STACK_LINE(957)
		::flixel::addons::ui::interfaces::IHasParams ihp = ((::flixel::addons::ui::interfaces::IHasParams)(thing));		HX_STACK_VAR(ihp,"ihp");
		struct _Function_1_1{
			inline static cpp::ArrayBase Block( ::haxe::xml::Fast &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",958,0xf354486a)
				{
					HX_STACK_LINE(958)
					cpp::ArrayBase params = null();		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(958)
					bool tmp10 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(958)
					if ((tmp10)){
						HX_STACK_LINE(958)
						params = Dynamic( Array_obj<Dynamic>::__new() );
						HX_STACK_LINE(958)
						{
							HX_STACK_LINE(958)
							::_List::ListIterator tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								::List tmp12 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(958)
								::List _this = tmp12;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(958)
								tmp11 = ::_List::ListIterator_obj::__new(_this->h);
							}
							HX_STACK_LINE(958)
							::_List::ListIterator _g = tmp11;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(958)
							while((true)){
								HX_STACK_LINE(958)
								bool tmp12 = (_g->head != null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(958)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(958)
								if ((tmp13)){
									HX_STACK_LINE(958)
									break;
								}
								HX_STACK_LINE(958)
								Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(958)
								{
									HX_STACK_LINE(958)
									Dynamic tmp15 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(958)
									_g->val = tmp15;
									HX_STACK_LINE(958)
									Dynamic tmp16 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(958)
									_g->head = tmp16;
									HX_STACK_LINE(958)
									tmp14 = _g->val;
								}
								HX_STACK_LINE(958)
								::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp14));		HX_STACK_VAR(param,"param");
								HX_STACK_LINE(958)
								bool tmp15 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(958)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(958)
								if ((tmp15)){
									HX_STACK_LINE(958)
									tmp16 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
								}
								else{
									HX_STACK_LINE(958)
									tmp16 = false;
								}
								HX_STACK_LINE(958)
								if ((tmp16)){
									HX_STACK_LINE(958)
									::String tmp17 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(958)
									::String type = tmp17;		HX_STACK_VAR(type,"type");
									HX_STACK_LINE(958)
									::String tmp18 = type.toLowerCase();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(958)
									type = tmp18;
									HX_STACK_LINE(958)
									::String tmp19 = type;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(958)
									::String _switch_4 = (tmp19);
									if (  ( _switch_4==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
										HX_STACK_LINE(958)
										::String tmp20 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(958)
										::String tmp21 = ::String(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(958)
										params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
									}
									else if (  ( _switch_4==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
										HX_STACK_LINE(958)
										::String tmp20 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(958)
										Dynamic tmp21 = ::Std_obj::parseInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(958)
										params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
									}
									else if (  ( _switch_4==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
										HX_STACK_LINE(958)
										::String tmp20 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(958)
										Float tmp21 = ::Std_obj::parseFloat(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(958)
										params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
									}
									else if (  ( _switch_4==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_4==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
										HX_STACK_LINE(958)
										int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(958)
										{
											HX_STACK_LINE(958)
											::String tmp21 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(958)
											::String str = tmp21;		HX_STACK_VAR(str,"str");
											HX_STACK_LINE(958)
											bool safe = false;		HX_STACK_VAR(safe,"safe");
											HX_STACK_LINE(958)
											int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
											HX_STACK_LINE(958)
											int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
											HX_STACK_LINE(958)
											int tmp22 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(958)
											bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(958)
											if ((tmp23)){
												HX_STACK_LINE(958)
												bool tmp24 = safe;		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(958)
												bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(958)
												if ((tmp25)){
													HX_STACK_LINE(958)
													::String tmp26 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(958)
													::String tmp27 = (tmp26 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(958)
													HX_STACK_DO_THROW(tmp27);
												}
												else{
													HX_STACK_LINE(958)
													return_val = default_color;
												}
											}
											HX_STACK_LINE(958)
											bool tmp24 = (str.length != (int)8);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(958)
											bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(958)
											if ((tmp24)){
												HX_STACK_LINE(958)
												tmp25 = (str.length != (int)10);
											}
											else{
												HX_STACK_LINE(958)
												tmp25 = false;
											}
											HX_STACK_LINE(958)
											if ((tmp25)){
												HX_STACK_LINE(958)
												bool tmp26 = safe;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(958)
												bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(958)
												if ((tmp27)){
													HX_STACK_LINE(958)
													::String tmp28 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(958)
													::String tmp29 = (tmp28 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(958)
													HX_STACK_DO_THROW(tmp29);
												}
												else{
													HX_STACK_LINE(958)
													return_val = default_color;
												}
											}
											HX_STACK_LINE(958)
											bool tmp26 = (return_val == (int)-1);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(958)
											if ((tmp26)){
												HX_STACK_LINE(958)
												int tmp27 = (str.length - (int)2);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(958)
												::String tmp28 = str.substr((int)2,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(958)
												str = tmp28;
												HX_STACK_LINE(958)
												bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(958)
												tmp29 = (str.length == (int)6);
												HX_STACK_LINE(958)
												if ((tmp29)){
													HX_STACK_LINE(958)
													::String tmp30 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(958)
													str = tmp30;
												}
												HX_STACK_LINE(958)
												int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(958)
												{
													HX_STACK_LINE(958)
													int length = str.length;		HX_STACK_VAR(length,"length");
													HX_STACK_LINE(958)
													int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
													HX_STACK_LINE(958)
													int sum = (int)0;		HX_STACK_VAR(sum,"sum");
													HX_STACK_LINE(958)
													int tmp31 = (length - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(958)
													int i1 = tmp31;		HX_STACK_VAR(i1,"i1");
													HX_STACK_LINE(958)
													while((true)){
														HX_STACK_LINE(958)
														bool tmp32 = (i1 >= (int)0);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(958)
														bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(958)
														if ((tmp33)){
															HX_STACK_LINE(958)
															break;
														}
														HX_STACK_LINE(958)
														int tmp34 = i1;		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(958)
														::String tmp35 = str.substr(tmp34,(int)1);		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(958)
														::String char_hex = tmp35;		HX_STACK_VAR(char_hex,"char_hex");
														HX_STACK_LINE(958)
														int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
														HX_STACK_LINE(958)
														{
															HX_STACK_LINE(958)
															int val = (int)-1;		HX_STACK_VAR(val,"val");
															HX_STACK_LINE(958)
															::String tmp37 = char_hex;		HX_STACK_VAR(tmp37,"tmp37");
															HX_STACK_LINE(958)
															::String _switch_5 = (tmp37);
															if (  ( _switch_5==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
																HX_STACK_LINE(958)
																::String tmp38 = char_hex;		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(958)
																Dynamic tmp39 = ::Std_obj::parseInt(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(958)
																val = tmp39;
															}
															else if (  ( _switch_5==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
																HX_STACK_LINE(958)
																val = (int)10;
															}
															else if (  ( _switch_5==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
																HX_STACK_LINE(958)
																val = (int)11;
															}
															else if (  ( _switch_5==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
																HX_STACK_LINE(958)
																val = (int)12;
															}
															else if (  ( _switch_5==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
																HX_STACK_LINE(958)
																val = (int)13;
															}
															else if (  ( _switch_5==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
																HX_STACK_LINE(958)
																val = (int)14;
															}
															else if (  ( _switch_5==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_5==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
																HX_STACK_LINE(958)
																val = (int)15;
															}
															HX_STACK_LINE(958)
															bool tmp38 = (val == (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
															HX_STACK_LINE(958)
															if ((tmp38)){
																HX_STACK_LINE(958)
																::String tmp39 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp39,"tmp39");
																HX_STACK_LINE(958)
																::String tmp40 = (tmp39 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
																HX_STACK_LINE(958)
																HX_STACK_DO_THROW(tmp40);
															}
															HX_STACK_LINE(958)
															tmp36 = val;
														}
														HX_STACK_LINE(958)
														int char_int = tmp36;		HX_STACK_VAR(char_int,"char_int");
														HX_STACK_LINE(958)
														int tmp37 = (char_int * place_mult);		HX_STACK_VAR(tmp37,"tmp37");
														HX_STACK_LINE(958)
														hx::AddEq(sum,tmp37);
														HX_STACK_LINE(958)
														hx::MultEq(place_mult,(int)16);
														HX_STACK_LINE(958)
														(i1)--;
													}
													HX_STACK_LINE(958)
													tmp30 = sum;
												}
												HX_STACK_LINE(958)
												return_val = tmp30;
											}
											HX_STACK_LINE(958)
											tmp20 = return_val;
										}
										HX_STACK_LINE(958)
										params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
									}
								}
							}
						}
					}
					HX_STACK_LINE(958)
					return params;
				}
				return null();
			}
		};
		HX_STACK_LINE(958)
		ihp->set_params(_Function_1_1::Block(data));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_changeParamsThing,(void))

Void FlxUI_obj::_changeThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_changeThing",0x32661218,"flixel.addons.ui.FlxUI._changeThing","flixel/addons/ui/FlxUI.hx",961,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(962)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(962)
		::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(962)
		::String id = tmp1;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(963)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(963)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = this->getAsset(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(963)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp3;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(964)
		bool tmp4 = (thing == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(964)
		if ((tmp4)){
			HX_STACK_LINE(965)
			return null();
		}
		HX_STACK_LINE(968)
		Float new_width = (int)-1;		HX_STACK_VAR(new_width,"new_width");
		HX_STACK_LINE(969)
		Float new_height = (int)-1;		HX_STACK_VAR(new_height,"new_height");
		HX_STACK_LINE(971)
		::String context = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(972)
		::String code = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(974)
		Dynamic tmp5 = data->x->attributes();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(974)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp5);  __it->hasNext(); ){
			::String attribute = __it->next();
			{
				HX_STACK_LINE(975)
				::String tmp6 = attribute;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(975)
				::String _switch_6 = (tmp6);
				if (  ( _switch_6==HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"))){
					HX_STACK_LINE(976)
					::flixel::addons::ui::interfaces::IFlxUIWidget tmp7 = thing;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(976)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::flixel::addons::ui::FlxUIText >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(976)
					if ((tmp8)){
						HX_STACK_LINE(977)
						::Xml tmp9 = data->x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(977)
						::String tmp10 = ::flixel::addons::ui::U_obj::xml_str(tmp9,HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(977)
						::String text = tmp10;		HX_STACK_VAR(text,"text");
						HX_STACK_LINE(978)
						::Xml tmp11 = data->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(978)
						::String tmp12 = ::flixel::addons::ui::U_obj::xml_str(tmp11,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(978)
						context = tmp12;
						HX_STACK_LINE(979)
						::flixel::addons::ui::FlxUIText t = ((::flixel::addons::ui::FlxUIText)(thing));		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(980)
						::Xml tmp13 = data->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(980)
						::String tmp14 = ::flixel::addons::ui::U_obj::xml_str(tmp13,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(980)
						code = tmp14;
						HX_STACK_LINE(981)
						::String tmp15 = text;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(981)
						::String tmp16 = context;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(981)
						::String tmp17 = code;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(981)
						::String tmp18 = this->getText(tmp15,tmp16,true,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(981)
						t->set_text(tmp18);
					}
				}
				else if (  ( _switch_6==HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"))){
					HX_STACK_LINE(983)
					::Xml tmp7 = data->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(983)
					::String tmp8 = ::flixel::addons::ui::U_obj::xml_str(tmp7,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(983)
					::String label = tmp8;		HX_STACK_VAR(label,"label");
					HX_STACK_LINE(984)
					::Xml tmp9 = data->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(984)
					::String tmp10 = ::flixel::addons::ui::U_obj::xml_str(tmp9,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(984)
					context = tmp10;
					HX_STACK_LINE(985)
					::Xml tmp11 = data->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(985)
					::String tmp12 = ::flixel::addons::ui::U_obj::xml_str(tmp11,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(985)
					code = tmp12;
					HX_STACK_LINE(986)
					::String tmp13 = label;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(986)
					::String tmp14 = context;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(986)
					::String tmp15 = code;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(986)
					::String tmp16 = this->getText(tmp13,tmp14,true,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(986)
					label = tmp16;
					HX_STACK_LINE(987)
					::flixel::addons::ui::interfaces::IFlxUIWidget tmp17 = thing;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(987)
					bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::flixel::addons::ui::interfaces::ILabeled >());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(987)
					if ((tmp18)){
						HX_STACK_LINE(988)
						::flixel::addons::ui::interfaces::ILabeled b = ((::flixel::addons::ui::interfaces::ILabeled)(thing));		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(989)
						::flixel::addons::ui::FlxUIText tmp19 = b->getLabel();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(989)
						::String tmp20 = label;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(989)
						tmp19->set_text(tmp20);
					}
				}
				else if (  ( _switch_6==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
					HX_STACK_LINE(991)
					::haxe::xml::Fast tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(991)
					Float tmp8 = this->_loadWidth(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(991)
					new_width = tmp8;
				}
				else if (  ( _switch_6==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
					HX_STACK_LINE(992)
					::haxe::xml::Fast tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(992)
					Float tmp8 = this->_loadHeight(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(992)
					new_height = tmp8;
				}
			}
;
		}
		HX_STACK_LINE(995)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp6 = thing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(995)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(995)
		if ((tmp7)){
			HX_STACK_LINE(996)
			::flixel::addons::ui::interfaces::IResizable ir = ((::flixel::addons::ui::interfaces::IResizable)(thing));		HX_STACK_VAR(ir,"ir");
			HX_STACK_LINE(997)
			Float tmp8 = new_width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(997)
			int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(997)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(997)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(997)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(997)
			if ((tmp11)){
				HX_STACK_LINE(997)
				tmp12 = (new_height != (int)-1);
			}
			else{
				HX_STACK_LINE(997)
				tmp12 = true;
			}
			HX_STACK_LINE(997)
			if ((tmp12)){
				HX_STACK_LINE(998)
				bool tmp13 = (new_width == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(998)
				if ((tmp13)){
					HX_STACK_LINE(998)
					Float tmp14 = ir->get_width();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(998)
					new_width = tmp14;
				}
				HX_STACK_LINE(999)
				bool tmp14 = (new_height == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(999)
				if ((tmp14)){
					HX_STACK_LINE(999)
					Float tmp15 = ir->get_height();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(999)
					new_height = tmp15;
				}
				HX_STACK_LINE(1000)
				Float tmp15 = new_width;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1000)
				Float tmp16 = new_height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1000)
				ir->resize(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(1004)
		bool tmp8 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1004)
		if ((tmp8)){
			HX_STACK_LINE(1005)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp9 = thing;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1005)
			bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1005)
			if ((tmp10)){
				HX_STACK_LINE(1006)
				::flixel::addons::ui::interfaces::IHasParams ihp = ((::flixel::addons::ui::interfaces::IHasParams)(thing));		HX_STACK_VAR(ihp,"ihp");
				struct _Function_3_1{
					inline static cpp::ArrayBase Block( ::haxe::xml::Fast &data){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",1007,0xf354486a)
						{
							HX_STACK_LINE(1007)
							cpp::ArrayBase params = null();		HX_STACK_VAR(params,"params");
							HX_STACK_LINE(1007)
							bool tmp11 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1007)
							if ((tmp11)){
								HX_STACK_LINE(1007)
								params = Dynamic( Array_obj<Dynamic>::__new() );
								HX_STACK_LINE(1007)
								{
									HX_STACK_LINE(1007)
									::_List::ListIterator tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										::List tmp13 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1007)
										::List _this = tmp13;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1007)
										tmp12 = ::_List::ListIterator_obj::__new(_this->h);
									}
									HX_STACK_LINE(1007)
									::_List::ListIterator _g = tmp12;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(1007)
									while((true)){
										HX_STACK_LINE(1007)
										bool tmp13 = (_g->head != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1007)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1007)
										if ((tmp14)){
											HX_STACK_LINE(1007)
											break;
										}
										HX_STACK_LINE(1007)
										Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1007)
										{
											HX_STACK_LINE(1007)
											Dynamic tmp16 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1007)
											_g->val = tmp16;
											HX_STACK_LINE(1007)
											Dynamic tmp17 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1007)
											_g->head = tmp17;
											HX_STACK_LINE(1007)
											tmp15 = _g->val;
										}
										HX_STACK_LINE(1007)
										::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp15));		HX_STACK_VAR(param,"param");
										HX_STACK_LINE(1007)
										bool tmp16 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1007)
										bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1007)
										if ((tmp16)){
											HX_STACK_LINE(1007)
											tmp17 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
										}
										else{
											HX_STACK_LINE(1007)
											tmp17 = false;
										}
										HX_STACK_LINE(1007)
										if ((tmp17)){
											HX_STACK_LINE(1007)
											::String tmp18 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1007)
											::String type = tmp18;		HX_STACK_VAR(type,"type");
											HX_STACK_LINE(1007)
											::String tmp19 = type.toLowerCase();		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1007)
											type = tmp19;
											HX_STACK_LINE(1007)
											::String tmp20 = type;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(1007)
											::String _switch_7 = (tmp20);
											if (  ( _switch_7==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
												HX_STACK_LINE(1007)
												::String tmp21 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1007)
												::String tmp22 = ::String(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1007)
												params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
											}
											else if (  ( _switch_7==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
												HX_STACK_LINE(1007)
												::String tmp21 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1007)
												Dynamic tmp22 = ::Std_obj::parseInt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1007)
												params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
											}
											else if (  ( _switch_7==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
												HX_STACK_LINE(1007)
												::String tmp21 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1007)
												Float tmp22 = ::Std_obj::parseFloat(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(1007)
												params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
											}
											else if (  ( _switch_7==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_7==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
												HX_STACK_LINE(1007)
												int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(1007)
												{
													HX_STACK_LINE(1007)
													::String tmp22 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(1007)
													::String str = tmp22;		HX_STACK_VAR(str,"str");
													HX_STACK_LINE(1007)
													bool safe = false;		HX_STACK_VAR(safe,"safe");
													HX_STACK_LINE(1007)
													int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
													HX_STACK_LINE(1007)
													int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
													HX_STACK_LINE(1007)
													int tmp23 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(1007)
													bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(1007)
													if ((tmp24)){
														HX_STACK_LINE(1007)
														bool tmp25 = safe;		HX_STACK_VAR(tmp25,"tmp25");
														HX_STACK_LINE(1007)
														bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
														HX_STACK_LINE(1007)
														if ((tmp26)){
															HX_STACK_LINE(1007)
															::String tmp27 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp27,"tmp27");
															HX_STACK_LINE(1007)
															::String tmp28 = (tmp27 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp28,"tmp28");
															HX_STACK_LINE(1007)
															HX_STACK_DO_THROW(tmp28);
														}
														else{
															HX_STACK_LINE(1007)
															return_val = default_color;
														}
													}
													HX_STACK_LINE(1007)
													bool tmp25 = (str.length != (int)8);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(1007)
													bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(1007)
													if ((tmp25)){
														HX_STACK_LINE(1007)
														tmp26 = (str.length != (int)10);
													}
													else{
														HX_STACK_LINE(1007)
														tmp26 = false;
													}
													HX_STACK_LINE(1007)
													if ((tmp26)){
														HX_STACK_LINE(1007)
														bool tmp27 = safe;		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(1007)
														bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1007)
														if ((tmp28)){
															HX_STACK_LINE(1007)
															::String tmp29 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(1007)
															::String tmp30 = (tmp29 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(1007)
															HX_STACK_DO_THROW(tmp30);
														}
														else{
															HX_STACK_LINE(1007)
															return_val = default_color;
														}
													}
													HX_STACK_LINE(1007)
													bool tmp27 = (return_val == (int)-1);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(1007)
													if ((tmp27)){
														HX_STACK_LINE(1007)
														int tmp28 = (str.length - (int)2);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(1007)
														::String tmp29 = str.substr((int)2,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(1007)
														str = tmp29;
														HX_STACK_LINE(1007)
														bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(1007)
														tmp30 = (str.length == (int)6);
														HX_STACK_LINE(1007)
														if ((tmp30)){
															HX_STACK_LINE(1007)
															::String tmp31 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(1007)
															str = tmp31;
														}
														HX_STACK_LINE(1007)
														int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(1007)
														{
															HX_STACK_LINE(1007)
															int length = str.length;		HX_STACK_VAR(length,"length");
															HX_STACK_LINE(1007)
															int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
															HX_STACK_LINE(1007)
															int sum = (int)0;		HX_STACK_VAR(sum,"sum");
															HX_STACK_LINE(1007)
															int tmp32 = (length - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(1007)
															int i = tmp32;		HX_STACK_VAR(i,"i");
															HX_STACK_LINE(1007)
															while((true)){
																HX_STACK_LINE(1007)
																bool tmp33 = (i >= (int)0);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(1007)
																bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(1007)
																if ((tmp34)){
																	HX_STACK_LINE(1007)
																	break;
																}
																HX_STACK_LINE(1007)
																int tmp35 = i;		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(1007)
																::String tmp36 = str.substr(tmp35,(int)1);		HX_STACK_VAR(tmp36,"tmp36");
																HX_STACK_LINE(1007)
																::String char_hex = tmp36;		HX_STACK_VAR(char_hex,"char_hex");
																HX_STACK_LINE(1007)
																int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
																HX_STACK_LINE(1007)
																{
																	HX_STACK_LINE(1007)
																	int val = (int)-1;		HX_STACK_VAR(val,"val");
																	HX_STACK_LINE(1007)
																	::String tmp38 = char_hex;		HX_STACK_VAR(tmp38,"tmp38");
																	HX_STACK_LINE(1007)
																	::String _switch_8 = (tmp38);
																	if (  ( _switch_8==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		::String tmp39 = char_hex;		HX_STACK_VAR(tmp39,"tmp39");
																		HX_STACK_LINE(1007)
																		Dynamic tmp40 = ::Std_obj::parseInt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1007)
																		val = tmp40;
																	}
																	else if (  ( _switch_8==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		val = (int)10;
																	}
																	else if (  ( _switch_8==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		val = (int)11;
																	}
																	else if (  ( _switch_8==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		val = (int)12;
																	}
																	else if (  ( _switch_8==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		val = (int)13;
																	}
																	else if (  ( _switch_8==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		val = (int)14;
																	}
																	else if (  ( _switch_8==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_8==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
																		HX_STACK_LINE(1007)
																		val = (int)15;
																	}
																	HX_STACK_LINE(1007)
																	bool tmp39 = (val == (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
																	HX_STACK_LINE(1007)
																	if ((tmp39)){
																		HX_STACK_LINE(1007)
																		::String tmp40 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp40,"tmp40");
																		HX_STACK_LINE(1007)
																		::String tmp41 = (tmp40 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
																		HX_STACK_LINE(1007)
																		HX_STACK_DO_THROW(tmp41);
																	}
																	HX_STACK_LINE(1007)
																	tmp37 = val;
																}
																HX_STACK_LINE(1007)
																int char_int = tmp37;		HX_STACK_VAR(char_int,"char_int");
																HX_STACK_LINE(1007)
																int tmp38 = (char_int * place_mult);		HX_STACK_VAR(tmp38,"tmp38");
																HX_STACK_LINE(1007)
																hx::AddEq(sum,tmp38);
																HX_STACK_LINE(1007)
																hx::MultEq(place_mult,(int)16);
																HX_STACK_LINE(1007)
																(i)--;
															}
															HX_STACK_LINE(1007)
															tmp31 = sum;
														}
														HX_STACK_LINE(1007)
														return_val = tmp31;
													}
													HX_STACK_LINE(1007)
													tmp21 = return_val;
												}
												HX_STACK_LINE(1007)
												params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
											}
										}
									}
								}
							}
							HX_STACK_LINE(1007)
							return params;
						}
						return null();
					}
				};
				HX_STACK_LINE(1007)
				ihp->set_params(_Function_3_1::Block(data));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_changeThing,(void))

Void FlxUI_obj::_alignThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_alignThing",0x37322a6f,"flixel.addons.ui.FlxUI._alignThing","flixel/addons/ui/FlxUI.hx",1014,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1015)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1015)
		::String tmp1 = ::haxe::xml::Printer_obj::print(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1015)
		::String datastr = tmp1;		HX_STACK_VAR(datastr,"datastr");
		HX_STACK_LINE(1016)
		bool tmp2 = data->hasNode->resolve(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1016)
		if ((tmp2)){
			HX_STACK_LINE(1017)
			::_List::ListIterator tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1017)
			{
				HX_STACK_LINE(1017)
				::List tmp4 = data->nodes->resolve(HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1017)
				::List _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1017)
				tmp3 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(1017)
			::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1017)
			while((true)){
				HX_STACK_LINE(1017)
				bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1017)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1017)
				if ((tmp5)){
					HX_STACK_LINE(1017)
					break;
				}
				HX_STACK_LINE(1017)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1017)
				{
					HX_STACK_LINE(1017)
					Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1017)
					_g->val = tmp7;
					HX_STACK_LINE(1017)
					Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1017)
					_g->head = tmp8;
					HX_STACK_LINE(1017)
					tmp6 = _g->val;
				}
				HX_STACK_LINE(1017)
				::haxe::xml::Fast objectNode = ((::haxe::xml::Fast)(tmp6));		HX_STACK_VAR(objectNode,"objectNode");
				HX_STACK_LINE(1018)
				::Xml tmp7 = objectNode->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1018)
				::String tmp8 = ::flixel::addons::ui::U_obj::xml_str(tmp7,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1018)
				Array< ::String > objects = tmp8.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(objects,"objects");
				HX_STACK_LINE(1020)
				::Xml tmp9 = data->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1020)
				::String tmp10 = ::flixel::addons::ui::U_obj::xml_str(tmp9,HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),true,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1020)
				::String axis = tmp10;		HX_STACK_VAR(axis,"axis");
				HX_STACK_LINE(1021)
				::Xml tmp11 = data->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1021)
				Float tmp12 = ::flixel::addons::ui::U_obj::xml_f(tmp11,HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),(int)-1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1021)
				Float spacing = tmp12;		HX_STACK_VAR(spacing,"spacing");
				HX_STACK_LINE(1022)
				::Xml tmp13 = data->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1022)
				bool tmp14 = ::flixel::addons::ui::U_obj::xml_bool(tmp13,HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1022)
				bool resize = tmp14;		HX_STACK_VAR(resize,"resize");
				HX_STACK_LINE(1024)
				::flixel::util::FlxPoint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1024)
				{
					HX_STACK_LINE(1024)
					::flixel::util::FlxPool tmp16 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1024)
					::flixel::util::FlxPoint tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1024)
					::flixel::util::FlxPoint tmp18 = tmp17->set((int)-1,(int)-1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1024)
					::flixel::util::FlxPoint point = tmp18;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(1024)
					point->_inPool = false;
					HX_STACK_LINE(1024)
					tmp15 = point;
				}
				HX_STACK_LINE(1024)
				::flixel::util::FlxPoint bounds = tmp15;		HX_STACK_VAR(bounds,"bounds");
				HX_STACK_LINE(1026)
				bool tmp16 = (axis != HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1026)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1026)
				if ((tmp16)){
					HX_STACK_LINE(1026)
					tmp17 = (axis != HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));
				}
				else{
					HX_STACK_LINE(1026)
					tmp17 = false;
				}
				HX_STACK_LINE(1026)
				if ((tmp17)){
					HX_STACK_LINE(1027)
					::openfl::errors::Error tmp18 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("FlxUI._alignThing(): axis must be \"horizontal\" or \"vertical\"!","\xa0","\xea","\x67","\x82"),null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1027)
					HX_STACK_DO_THROW(tmp18);
					HX_STACK_LINE(1028)
					return null();
				}
				HX_STACK_LINE(1031)
				bool tmp18 = data->hasNode->resolve(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1031)
				if ((tmp18)){
					HX_STACK_LINE(1032)
					Float bound_range = (int)-1;		HX_STACK_VAR(bound_range,"bound_range");
					HX_STACK_LINE(1034)
					bool tmp19 = (axis == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1034)
					if ((tmp19)){
						HX_STACK_LINE(1035)
						::haxe::xml::Fast tmp20 = data->node->resolve(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1035)
						::Xml tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1035)
						::String tmp22 = ::flixel::addons::ui::U_obj::xml_str(tmp21,HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),null(),null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(1035)
						Float tmp23 = this->_getDataSize(HX_HCSTRING("w","\x77","\x00","\x00","\x00"),tmp22,(int)-1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1035)
						bounds->set_x(tmp23);
						HX_STACK_LINE(1036)
						::haxe::xml::Fast tmp24 = data->node->resolve(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1036)
						::Xml tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1036)
						::String tmp26 = ::flixel::addons::ui::U_obj::xml_str(tmp25,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1036)
						Float tmp27 = this->_getDataSize(HX_HCSTRING("w","\x77","\x00","\x00","\x00"),tmp26,(int)-1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1036)
						bounds->set_y(tmp27);
					}
					else{
						HX_STACK_LINE(1037)
						bool tmp20 = (axis == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1037)
						if ((tmp20)){
							HX_STACK_LINE(1038)
							::haxe::xml::Fast tmp21 = data->node->resolve(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1038)
							::Xml tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1038)
							::String tmp23 = ::flixel::addons::ui::U_obj::xml_str(tmp22,HX_HCSTRING("top","\x95","\x66","\x58","\x00"),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1038)
							Float tmp24 = this->_getDataSize(HX_HCSTRING("h","\x68","\x00","\x00","\x00"),tmp23,(int)-1);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1038)
							bounds->set_x(tmp24);
							HX_STACK_LINE(1039)
							::haxe::xml::Fast tmp25 = data->node->resolve(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1039)
							::Xml tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1039)
							::String tmp27 = ::flixel::addons::ui::U_obj::xml_str(tmp26,HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1039)
							Float tmp28 = this->_getDataSize(HX_HCSTRING("h","\x68","\x00","\x00","\x00"),tmp27,(int)-1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1039)
							bounds->set_y(tmp28);
						}
					}
					HX_STACK_LINE(1042)
					Float tmp20 = bounds->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1042)
					int tmp21 = (int)-1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1042)
					bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1042)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1042)
					if ((tmp22)){
						HX_STACK_LINE(1042)
						tmp23 = (bounds->y != (int)-1);
					}
					else{
						HX_STACK_LINE(1042)
						tmp23 = false;
					}
					HX_STACK_LINE(1042)
					if ((tmp23)){
						HX_STACK_LINE(1043)
						bool tmp24 = (bounds->y <= bounds->x);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1043)
						if ((tmp24)){
							HX_STACK_LINE(1045)
							return null();
						}
					}
					else{
						HX_STACK_LINE(1049)
						return null();
					}
					HX_STACK_LINE(1052)
					::String tmp24 = axis;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1052)
					Float tmp25 = spacing;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1052)
					bool tmp26 = resize;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1052)
					::flixel::util::FlxPoint tmp27 = bounds;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1052)
					this->_doAlign(objects,tmp24,tmp25,tmp26,tmp27);
					HX_STACK_LINE(1054)
					bool tmp28 = data->hasNode->resolve(HX_HCSTRING("anchor","\x75","\x3a","\x71","\x60"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1054)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1054)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1054)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1054)
					if ((tmp30)){
						HX_STACK_LINE(1054)
						tmp31 = data->has->resolve(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(1054)
						tmp31 = true;
					}
					HX_STACK_LINE(1054)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1054)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1054)
					if ((tmp32)){
						HX_STACK_LINE(1054)
						tmp33 = data->has->resolve(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(1054)
						tmp33 = true;
					}
					HX_STACK_LINE(1054)
					if ((tmp33)){
						HX_STACK_LINE(1055)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1055)
						while((true)){
							HX_STACK_LINE(1055)
							bool tmp34 = (_g1 < objects->length);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1055)
							bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1055)
							if ((tmp35)){
								HX_STACK_LINE(1055)
								break;
							}
							HX_STACK_LINE(1055)
							::String tmp36 = objects->__get(_g1);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1055)
							::String object = tmp36;		HX_STACK_VAR(object,"object");
							HX_STACK_LINE(1055)
							++(_g1);
							HX_STACK_LINE(1056)
							::String tmp37 = object;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1056)
							::flixel::addons::ui::interfaces::IFlxUIWidget tmp38 = this->getAsset(tmp37,null());		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1056)
							::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp38;		HX_STACK_VAR(thing,"thing");
							HX_STACK_LINE(1057)
							::haxe::xml::Fast tmp39 = data;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1057)
							::flixel::addons::ui::interfaces::IFlxUIWidget tmp40 = thing;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1057)
							this->_loadPosition(tmp39,tmp40);
						}
					}
				}
				else{
					HX_STACK_LINE(1062)
					::openfl::errors::Error tmp19 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("FlxUI._alignThing(): <bounds> node not found!","\x5e","\xc1","\x39","\xd0"),null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1062)
					HX_STACK_DO_THROW(tmp19);
					HX_STACK_LINE(1063)
					return null();
				}
			}
		}
		else{
			HX_STACK_LINE(1067)
			::openfl::errors::Error tmp3 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("FlxUI._alignThing(): <objects> node not found!","\xe9","\x2b","\xf0","\x7a"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1067)
			HX_STACK_DO_THROW(tmp3);
			HX_STACK_LINE(1068)
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_alignThing,(void))

Void FlxUI_obj::_doAlign( Array< ::String > objects,::String axis,Float spacing,bool resize,::flixel::util::FlxPoint bounds){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_doAlign",0x8f1f33f4,"flixel.addons.ui.FlxUI._doAlign","flixel/addons/ui/FlxUI.hx",1072,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objects,"objects")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(spacing,"spacing")
		HX_STACK_ARG(resize,"resize")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1073)
		Float total_spacing = (int)0;		HX_STACK_VAR(total_spacing,"total_spacing");
		HX_STACK_LINE(1074)
		Float total_size = (int)0;		HX_STACK_VAR(total_size,"total_size");
		HX_STACK_LINE(1076)
		Float tmp = (bounds->y - bounds->x);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1076)
		Float bound_range = tmp;		HX_STACK_VAR(bound_range,"bound_range");
		HX_STACK_LINE(1078)
		int tmp1 = (objects->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1078)
		Float spaces = tmp1;		HX_STACK_VAR(spaces,"spaces");
		HX_STACK_LINE(1079)
		Float space_size = (int)0;		HX_STACK_VAR(space_size,"space_size");
		HX_STACK_LINE(1080)
		Float object_size = (int)0;		HX_STACK_VAR(object_size,"object_size");
		HX_STACK_LINE(1082)
		::String size_prop = HX_HCSTRING("width","\x06","\xb6","\x62","\xca");		HX_STACK_VAR(size_prop,"size_prop");
		HX_STACK_LINE(1083)
		::String pos_prop = HX_HCSTRING("x","\x78","\x00","\x00","\x00");		HX_STACK_VAR(pos_prop,"pos_prop");
		HX_STACK_LINE(1084)
		bool tmp2 = (axis == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1084)
		if ((tmp2)){
			HX_STACK_LINE(1085)
			size_prop = HX_HCSTRING("height","\xe7","\x07","\x4c","\x02");
			HX_STACK_LINE(1086)
			pos_prop = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		}
		HX_STACK_LINE(1090)
		{
			HX_STACK_LINE(1090)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1090)
			while((true)){
				HX_STACK_LINE(1090)
				bool tmp3 = (_g < objects->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1090)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1090)
				if ((tmp4)){
					HX_STACK_LINE(1090)
					break;
				}
				HX_STACK_LINE(1090)
				::String tmp5 = objects->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1090)
				::String id = tmp5;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1090)
				++(_g);
				HX_STACK_LINE(1091)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1091)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp7 = this->getAsset(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1091)
				::flixel::addons::ui::interfaces::IFlxUIWidget widget = tmp7;		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(1093)
				Float theval = (int)0;		HX_STACK_VAR(theval,"theval");
				HX_STACK_LINE(1095)
				::String tmp8 = size_prop;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1095)
				::String _switch_9 = (tmp8);
				if (  ( _switch_9==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
					HX_STACK_LINE(1096)
					Float tmp9 = widget->get_width();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1096)
					theval = tmp9;
				}
				else if (  ( _switch_9==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
					HX_STACK_LINE(1097)
					Float tmp9 = widget->get_height();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1097)
					theval = tmp9;
				}
				HX_STACK_LINE(1100)
				hx::AddEq(total_size,theval);
			}
		}
		HX_STACK_LINE(1103)
		bool tmp3 = (resize == false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1103)
		if ((tmp3)){
			HX_STACK_LINE(1104)
			Float tmp4 = (bound_range - total_size);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1104)
			total_spacing = tmp4;
			HX_STACK_LINE(1105)
			Float tmp5 = (Float(total_spacing) / Float(spaces));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1105)
			space_size = tmp5;
		}
		else{
			HX_STACK_LINE(1107)
			space_size = spacing;
			HX_STACK_LINE(1108)
			Float tmp4 = (spacing * spaces);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1108)
			total_spacing = tmp4;
			HX_STACK_LINE(1109)
			Float tmp5 = (bound_range - total_spacing);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1109)
			int tmp6 = objects->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1109)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1109)
			object_size = tmp7;
		}
		HX_STACK_LINE(1112)
		Float tmp4 = object_size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1112)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1112)
		object_size = tmp5;
		HX_STACK_LINE(1113)
		Float tmp6 = space_size;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1113)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1113)
		space_size = tmp7;
		HX_STACK_LINE(1115)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1116)
		Float last_pos = bounds->x;		HX_STACK_VAR(last_pos,"last_pos");
		HX_STACK_LINE(1117)
		{
			HX_STACK_LINE(1117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1117)
			while((true)){
				HX_STACK_LINE(1117)
				bool tmp8 = (_g < objects->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1117)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1117)
				if ((tmp9)){
					HX_STACK_LINE(1117)
					break;
				}
				HX_STACK_LINE(1117)
				::String tmp10 = objects->__get(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1117)
				::String id = tmp10;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1117)
				++(_g);
				HX_STACK_LINE(1118)
				::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1118)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp12 = this->getAsset(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1118)
				::flixel::addons::ui::interfaces::IFlxUIWidget widget = tmp12;		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(1119)
				Float pos = last_pos;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1120)
				bool tmp13 = resize;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1120)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1120)
				if ((tmp14)){
					HX_STACK_LINE(1121)
					::String tmp15 = size_prop;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1121)
					::String _switch_10 = (tmp15);
					if (  ( _switch_10==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
						HX_STACK_LINE(1122)
						Float tmp16 = widget->get_width();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1122)
						object_size = tmp16;
					}
					else if (  ( _switch_10==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
						HX_STACK_LINE(1123)
						Float tmp16 = widget->get_height();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1123)
						object_size = tmp16;
					}
				}
				else{
					HX_STACK_LINE(1127)
					::flixel::addons::ui::interfaces::IFlxUIWidget tmp15 = widget;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1127)
					bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1127)
					if ((tmp16)){
						HX_STACK_LINE(1128)
						::flixel::addons::ui::interfaces::IResizable widgetr = ((::flixel::addons::ui::interfaces::IResizable)(widget));		HX_STACK_VAR(widgetr,"widgetr");
						HX_STACK_LINE(1129)
						bool tmp17 = (axis == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1129)
						if ((tmp17)){
							HX_STACK_LINE(1130)
							Float tmp18 = widgetr->get_width();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1130)
							Float tmp19 = object_size;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1130)
							widgetr->resize(tmp18,tmp19);
						}
						else{
							HX_STACK_LINE(1131)
							bool tmp18 = (axis == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1131)
							if ((tmp18)){
								HX_STACK_LINE(1132)
								Float tmp19 = object_size;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1132)
								Float tmp20 = widgetr->get_height();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1132)
								widgetr->resize(tmp19,tmp20);
							}
						}
					}
				}
				HX_STACK_LINE(1136)
				Float tmp15 = (pos + object_size);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1136)
				Float tmp16 = space_size;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1136)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1136)
				last_pos = tmp17;
				HX_STACK_LINE(1138)
				::String tmp18 = pos_prop;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1138)
				::String _switch_11 = (tmp18);
				if (  ( _switch_11==HX_HCSTRING("x","\x78","\x00","\x00","\x00"))){
					HX_STACK_LINE(1139)
					Float tmp19 = pos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1139)
					widget->set_x(tmp19);
				}
				else if (  ( _switch_11==HX_HCSTRING("y","\x79","\x00","\x00","\x00"))){
					HX_STACK_LINE(1140)
					Float tmp19 = pos;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1140)
					widget->set_y(tmp19);
				}
				HX_STACK_LINE(1143)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUI_obj,_doAlign,(void))

bool FlxUI_obj::_checkFailure( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_checkFailure",0x7b6fc968,"flixel.addons.ui.FlxUI._checkFailure","flixel/addons/ui/FlxUI.hx",1147,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1148)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1148)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1148)
	::String target = tmp1;		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(1149)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1149)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("property","\x55","\x48","\x38","\xac"),true,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1149)
	::String property = tmp3;		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(1150)
	::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1150)
	::String tmp5 = ::flixel::addons::ui::U_obj::xml_str(tmp4,HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),true,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1150)
	::String compare = tmp5;		HX_STACK_VAR(compare,"compare");
	HX_STACK_LINE(1151)
	::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1151)
	::String tmp7 = ::flixel::addons::ui::U_obj::xml_str(tmp6,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),true,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1151)
	::String value = tmp7;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1153)
	::String tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1153)
	::flixel::addons::ui::interfaces::IFlxUIWidget tmp9 = this->getAsset(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1153)
	::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp9;		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(1155)
	bool tmp10 = (thing == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1155)
	if ((tmp10)){
		HX_STACK_LINE(1156)
		return false;
	}
	HX_STACK_LINE(1159)
	Float prop_f = (int)0;		HX_STACK_VAR(prop_f,"prop_f");
	HX_STACK_LINE(1160)
	Float val_f = (int)0;		HX_STACK_VAR(val_f,"val_f");
	HX_STACK_LINE(1162)
	::String tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1162)
	Float tmp12 = ::flixel::addons::ui::U_obj::perc_to_float(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1162)
	Float p = tmp12;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1164)
	::String tmp13 = property;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1164)
	::String _switch_12 = (tmp13);
	if (  ( _switch_12==HX_HCSTRING("w","\x77","\x00","\x00","\x00")) ||  ( _switch_12==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
		HX_STACK_LINE(1165)
		Float tmp14 = thing->get_width();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1165)
		prop_f = tmp14;
	}
	else if (  ( _switch_12==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_12==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
		HX_STACK_LINE(1166)
		Float tmp14 = thing->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1166)
		prop_f = tmp14;
	}
	HX_STACK_LINE(1169)
	Float tmp14 = p;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1169)
	bool tmp15 = ::Math_obj::isNaN(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1169)
	if ((tmp15)){
		HX_STACK_LINE(1170)
		::String tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1170)
		bool tmp17 = ::flixel::addons::ui::U_obj::isStrNum(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1170)
		if ((tmp17)){
			HX_STACK_LINE(1171)
			::String tmp18 = value;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1171)
			Float tmp19 = ::Std_obj::parseFloat(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1171)
			val_f = tmp19;
		}
		else{
			HX_STACK_LINE(1173)
			return false;
		}
	}
	else{
		HX_STACK_LINE(1176)
		::String tmp16 = property;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1176)
		::String _switch_13 = (tmp16);
		if (  ( _switch_13==HX_HCSTRING("w","\x77","\x00","\x00","\x00")) ||  ( _switch_13==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
			HX_STACK_LINE(1177)
			Float tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1177)
			int tmp18 = this->thisWidth();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1177)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1177)
			val_f = tmp19;
		}
		else if (  ( _switch_13==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_13==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
			HX_STACK_LINE(1178)
			Float tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1178)
			int tmp18 = this->thisHeight();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1178)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1178)
			val_f = tmp19;
		}
	}
	HX_STACK_LINE(1182)
	bool return_val = false;		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(1184)
	::String tmp16 = compare;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1184)
	::String _switch_14 = (tmp16);
	if (  ( _switch_14==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
		HX_STACK_LINE(1185)
		bool tmp17 = (prop_f < val_f);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1185)
		if ((tmp17)){
			HX_STACK_LINE(1186)
			Float tmp18 = (val_f - prop_f);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1186)
			this->failed_by = tmp18;
			HX_STACK_LINE(1187)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
		HX_STACK_LINE(1189)
		bool tmp17 = (prop_f > val_f);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1189)
		if ((tmp17)){
			HX_STACK_LINE(1190)
			Float tmp18 = (prop_f - val_f);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1190)
			this->failed_by = tmp18;
			HX_STACK_LINE(1191)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_HCSTRING("=","\x3d","\x00","\x00","\x00")) ||  ( _switch_14==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
		HX_STACK_LINE(1193)
		bool tmp17 = (prop_f == val_f);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1193)
		if ((tmp17)){
			HX_STACK_LINE(1194)
			Float tmp18 = (prop_f - val_f);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1194)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1194)
			this->failed_by = tmp19;
			HX_STACK_LINE(1195)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
		HX_STACK_LINE(1197)
		bool tmp17 = (prop_f <= val_f);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1197)
		if ((tmp17)){
			HX_STACK_LINE(1198)
			Float tmp18 = (val_f - prop_f);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1198)
			this->failed_by = tmp18;
			HX_STACK_LINE(1199)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
		HX_STACK_LINE(1201)
		bool tmp17 = (prop_f >= val_f);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1201)
		if ((tmp17)){
			HX_STACK_LINE(1202)
			Float tmp18 = (prop_f - val_f);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1202)
			this->failed_by = tmp18;
			HX_STACK_LINE(1203)
			return_val = true;
		}
	}
	HX_STACK_LINE(1207)
	bool tmp17 = return_val;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1207)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_checkFailure,return )

Void FlxUI_obj::_resizeThing( ::flixel::addons::ui::interfaces::IResizable fo_r,Dynamic bounds){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_resizeThing",0x4ba3eb14,"flixel.addons.ui.FlxUI._resizeThing","flixel/addons/ui/FlxUI.hx",1211,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fo_r,"fo_r")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1212)
		bool do_resize = false;		HX_STACK_VAR(do_resize,"do_resize");
		HX_STACK_LINE(1213)
		Float tmp = fo_r->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1213)
		Float ww = tmp;		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(1214)
		Float tmp1 = fo_r->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1214)
		Float hh = tmp1;		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(1216)
		bool tmp2 = (ww < bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1216)
		if ((tmp2)){
			HX_STACK_LINE(1217)
			do_resize = true;
			HX_STACK_LINE(1218)
			ww = bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(1219)
			bool tmp3 = (ww > bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1219)
			if ((tmp3)){
				HX_STACK_LINE(1220)
				do_resize = true;
				HX_STACK_LINE(1221)
				ww = bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(1224)
		bool tmp3 = (hh < bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1224)
		if ((tmp3)){
			HX_STACK_LINE(1225)
			do_resize = true;
			HX_STACK_LINE(1226)
			hh = bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(1227)
			bool tmp4 = (hh > bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1227)
			if ((tmp4)){
				HX_STACK_LINE(1228)
				do_resize = true;
				HX_STACK_LINE(1229)
				hh = bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic );
			}
		}
		HX_STACK_LINE(1232)
		bool tmp4 = do_resize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1232)
		if ((tmp4)){
			HX_STACK_LINE(1233)
			Float tmp5 = ww;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1233)
			Float tmp6 = hh;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1233)
			fo_r->resize(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_resizeThing,(void))

Void FlxUI_obj::_postLoadThing( ::String type,::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_postLoadThing",0x7251e7a2,"flixel.addons.ui.FlxUI._postLoadThing","flixel/addons/ui/FlxUI.hx",1237,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1239)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1239)
		::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1239)
		::String id = tmp1;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1240)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1240)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = this->getAsset(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1240)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = tmp3;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(1242)
		bool tmp4 = (type == HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1242)
		if ((tmp4)){
			HX_STACK_LINE(1243)
			::haxe::xml::Fast tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1243)
			this->_alignThing(tmp5);
		}
		HX_STACK_LINE(1246)
		bool tmp5 = (thing == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1246)
		if ((tmp5)){
			HX_STACK_LINE(1247)
			return null();
		}
		HX_STACK_LINE(1250)
		::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1250)
		::String tmp7 = ::flixel::addons::ui::U_obj::xml_str(tmp6,HX_HCSTRING("use_def","\x8d","\xda","\xe9","\x62"),true,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1250)
		::String use_def = tmp7;		HX_STACK_VAR(use_def,"use_def");
		HX_STACK_LINE(1251)
		::haxe::xml::Fast definition = null();		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(1252)
		bool tmp8 = (use_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1252)
		if ((tmp8)){
			HX_STACK_LINE(1253)
			::String tmp9 = use_def;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1253)
			::haxe::xml::Fast tmp10 = this->getDefinition(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1253)
			definition = tmp10;
		}
		HX_STACK_LINE(1256)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp9 = thing;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1256)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1256)
		if ((tmp10)){
			HX_STACK_LINE(1258)
			::haxe::xml::Fast tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1258)
			Dynamic tmp12 = this->calcMaxMinSize(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1258)
			Dynamic bounds = tmp12;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(1260)
			bool tmp13 = (bounds != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1260)
			if ((tmp13)){
				HX_STACK_LINE(1261)
				::flixel::addons::ui::interfaces::IResizable tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1261)
				tmp14 = hx::TCast< ::flixel::addons::ui::interfaces::IResizable >::cast(thing);
				HX_STACK_LINE(1261)
				Dynamic tmp15 = bounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1261)
				this->_resizeThing(tmp14,tmp15);
			}
		}
		HX_STACK_LINE(1265)
		{
			HX_STACK_LINE(1265)
			{
				HX_STACK_LINE(1265)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1265)
				Float tmp11 = _g->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1265)
				Float tmp12 = thing->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1265)
				Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1265)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1265)
				_g->set_x(tmp14);
			}
			HX_STACK_LINE(1265)
			{
				HX_STACK_LINE(1265)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1265)
				Float tmp11 = _g->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1265)
				Float tmp12 = thing->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1265)
				Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1265)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1265)
				_g->set_y(tmp14);
			}
		}
		HX_STACK_LINE(1266)
		::haxe::xml::Fast tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1266)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp12 = thing;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1266)
		this->_loadPosition(tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_postLoadThing,(void))

::flixel::addons::ui::FlxUITileTest FlxUI_obj::_loadTileTest( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTileTest",0xb7577bec,"flixel.addons.ui.FlxUI._loadTileTest","flixel/addons/ui/FlxUI.hx",1269,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1271)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1271)
	int tmp1 = ::flixel::addons::ui::U_obj::xml_i(tmp,HX_HCSTRING("tiles_w","\xfd","\x7b","\x93","\x45"),(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1271)
	int tiles_w = tmp1;		HX_STACK_VAR(tiles_w,"tiles_w");
	HX_STACK_LINE(1272)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1272)
	int tmp3 = ::flixel::addons::ui::U_obj::xml_i(tmp2,HX_HCSTRING("tiles_h","\xee","\x7b","\x93","\x45"),(int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1272)
	int tiles_h = tmp3;		HX_STACK_VAR(tiles_h,"tiles_h");
	HX_STACK_LINE(1273)
	::haxe::xml::Fast tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1273)
	Float tmp5 = this->_loadWidth(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1273)
	Float w = tmp5;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(1274)
	::haxe::xml::Fast tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1274)
	Float tmp7 = this->_loadHeight(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1274)
	Float h = tmp7;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1277)
	::haxe::xml::Fast tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1277)
	Dynamic tmp9 = this->calcMaxMinSize(tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1277)
	Dynamic bounds = tmp9;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1279)
	bool tmp10 = (w < bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1279)
	if ((tmp10)){
		HX_STACK_LINE(1279)
		w = bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic );
	}
	HX_STACK_LINE(1280)
	bool tmp11 = (h < bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1280)
	if ((tmp11)){
		HX_STACK_LINE(1280)
		h = bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic );
	}
	HX_STACK_LINE(1282)
	Float tmp12 = (Float(w) / Float(tiles_w));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1282)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1282)
	int tileWidth = tmp13;		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(1283)
	Float tmp14 = (Float(h) / Float(tiles_h));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1283)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1283)
	int tileHeight = tmp15;		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(1285)
	bool tmp16 = (tileWidth < tileHeight);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1285)
	if ((tmp16)){
		HX_STACK_LINE(1285)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(1286)
		bool tmp17 = (tileHeight < tileWidth);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1286)
		if ((tmp17)){
			HX_STACK_LINE(1286)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(1288)
	int tmp17 = (tileWidth * tiles_w);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1288)
	Float totalw = tmp17;		HX_STACK_VAR(totalw,"totalw");
	HX_STACK_LINE(1289)
	int tmp18 = (tileHeight * tiles_h);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1289)
	Float totalh = tmp18;		HX_STACK_VAR(totalh,"totalh");
	HX_STACK_LINE(1291)
	bool tmp19 = (totalw > bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1291)
	if ((tmp19)){
		HX_STACK_LINE(1291)
		Float tmp20 = (Float(bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic )) / Float(tiles_w));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1291)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1291)
		tileWidth = tmp21;
	}
	HX_STACK_LINE(1292)
	bool tmp20 = (totalh > bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1292)
	if ((tmp20)){
		HX_STACK_LINE(1292)
		Float tmp21 = (Float(bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic )) / Float(tiles_h));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1292)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1292)
		tileHeight = tmp22;
	}
	HX_STACK_LINE(1294)
	bool tmp21 = (tileWidth < tileHeight);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1294)
	if ((tmp21)){
		HX_STACK_LINE(1294)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(1295)
		bool tmp22 = (tileHeight < tileWidth);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1295)
		if ((tmp22)){
			HX_STACK_LINE(1295)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(1297)
	bool tmp22 = (tileWidth < (int)2);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1297)
	if ((tmp22)){
		HX_STACK_LINE(1297)
		tileWidth = (int)2;
	}
	HX_STACK_LINE(1298)
	bool tmp23 = (tileHeight < (int)2);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1298)
	if ((tmp23)){
		HX_STACK_LINE(1298)
		tileHeight = (int)2;
	}
	HX_STACK_LINE(1300)
	::flixel::addons::ui::FlxUITileTest tmp24 = ::flixel::addons::ui::FlxUITileTest_obj::__new((int)0,(int)0,tileWidth,tileHeight,tiles_w,tiles_h,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1300)
	::flixel::addons::ui::FlxUITileTest ftt = tmp24;		HX_STACK_VAR(ftt,"ftt");
	HX_STACK_LINE(1301)
	::flixel::addons::ui::FlxUITileTest tmp25 = ftt;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1301)
	return tmp25;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTileTest,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadText( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadText",0x9815c3f9,"flixel.addons.ui.FlxUI._loadText","flixel/addons/ui/FlxUI.hx",1304,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1306)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1306)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1306)
	::String text = tmp1;		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(1307)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1307)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1307)
	::String context = tmp3;		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1308)
	::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1308)
	::String tmp5 = ::flixel::addons::ui::U_obj::xml_str(tmp4,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1308)
	::String code = tmp5;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1309)
	::String tmp6 = text;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1309)
	::String tmp7 = context;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1309)
	::String tmp8 = code;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1309)
	::String tmp9 = this->getText(tmp6,tmp7,true,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1309)
	text = tmp9;
	HX_STACK_LINE(1311)
	::haxe::xml::Fast tmp10 = data;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1311)
	Float tmp11 = this->_loadWidth(tmp10,(int)100,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1311)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1311)
	int W = tmp12;		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1313)
	::haxe::xml::Fast tmp13 = data;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1313)
	::String tmp14 = this->_loadFontFace(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1313)
	::String the_font = tmp14;		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(1315)
	::Xml tmp15 = data->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1315)
	bool tmp16 = ::flixel::addons::ui::U_obj::xml_bool(tmp15,HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1315)
	bool input = tmp16;		HX_STACK_VAR(input,"input");
	HX_STACK_LINE(1317)
	::Xml tmp17 = data->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1317)
	::String tmp18 = ::flixel::addons::ui::U_obj::xml_str(tmp17,HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1317)
	::String align = tmp18;		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(1317)
	bool tmp19 = (align == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1317)
	if ((tmp19)){
		HX_STACK_LINE(1317)
		align = null();
	}
	HX_STACK_LINE(1318)
	::Xml tmp20 = data->x;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1318)
	int tmp21 = ::flixel::addons::ui::U_obj::xml_i(tmp20,HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1318)
	int size = tmp21;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(1318)
	bool tmp22 = (size == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1318)
	if ((tmp22)){
		HX_STACK_LINE(1318)
		size = (int)8;
	}
	HX_STACK_LINE(1319)
	::haxe::xml::Fast tmp23 = data;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1319)
	int tmp24 = this->_loadColor(tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1319)
	int color = tmp24;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(1321)
	::haxe::xml::Fast tmp25 = data;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1321)
	::flixel::addons::ui::BorderDef tmp26 = this->_loadBorder(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1321)
	::flixel::addons::ui::BorderDef border = tmp26;		HX_STACK_VAR(border,"border");
	HX_STACK_LINE(1323)
	int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1323)
	{
		HX_STACK_LINE(1323)
		::Xml tmp28 = data->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1323)
		::String tmp29 = ::flixel::addons::ui::U_obj::xml_str(tmp28,HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),true,HX_HCSTRING("0x00000000","\x48","\x5a","\xd7","\x68"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1323)
		::String str = tmp29;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(1323)
		int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
		HX_STACK_LINE(1323)
		int tmp30 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1323)
		bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1323)
		if ((tmp31)){
			HX_STACK_LINE(1323)
			bool tmp32 = false;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1323)
			if ((tmp32)){
				HX_STACK_LINE(1323)
				::String tmp33 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1323)
				::String tmp34 = (tmp33 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1323)
				HX_STACK_DO_THROW(tmp34);
			}
			else{
				HX_STACK_LINE(1323)
				return_val = (int)0;
			}
		}
		HX_STACK_LINE(1323)
		bool tmp32 = (str.length != (int)8);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1323)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1323)
		if ((tmp32)){
			HX_STACK_LINE(1323)
			tmp33 = (str.length != (int)10);
		}
		else{
			HX_STACK_LINE(1323)
			tmp33 = false;
		}
		HX_STACK_LINE(1323)
		if ((tmp33)){
			HX_STACK_LINE(1323)
			bool tmp34 = false;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1323)
			if ((tmp34)){
				HX_STACK_LINE(1323)
				::String tmp35 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1323)
				::String tmp36 = (tmp35 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1323)
				HX_STACK_DO_THROW(tmp36);
			}
			else{
				HX_STACK_LINE(1323)
				return_val = (int)0;
			}
		}
		HX_STACK_LINE(1323)
		bool tmp34 = (return_val == (int)-1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1323)
		if ((tmp34)){
			HX_STACK_LINE(1323)
			int tmp35 = (str.length - (int)2);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1323)
			::String tmp36 = str.substr((int)2,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1323)
			str = tmp36;
			HX_STACK_LINE(1323)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1323)
			tmp37 = (str.length == (int)6);
			HX_STACK_LINE(1323)
			if ((tmp37)){
				HX_STACK_LINE(1323)
				::String tmp38 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1323)
				str = tmp38;
			}
			HX_STACK_LINE(1323)
			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				int length = str.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(1323)
				int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
				HX_STACK_LINE(1323)
				int sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(1323)
				int tmp39 = (length - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1323)
				int i = tmp39;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1323)
				while((true)){
					HX_STACK_LINE(1323)
					bool tmp40 = (i >= (int)0);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1323)
					bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1323)
					if ((tmp41)){
						HX_STACK_LINE(1323)
						break;
					}
					HX_STACK_LINE(1323)
					int tmp42 = i;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1323)
					::String tmp43 = str.substr(tmp42,(int)1);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1323)
					::String char_hex = tmp43;		HX_STACK_VAR(char_hex,"char_hex");
					HX_STACK_LINE(1323)
					int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1323)
					{
						HX_STACK_LINE(1323)
						int val = (int)-1;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1323)
						::String tmp45 = char_hex;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1323)
						::String _switch_15 = (tmp45);
						if (  ( _switch_15==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
							HX_STACK_LINE(1323)
							::String tmp46 = char_hex;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1323)
							Dynamic tmp47 = ::Std_obj::parseInt(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1323)
							val = tmp47;
						}
						else if (  ( _switch_15==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
							HX_STACK_LINE(1323)
							val = (int)10;
						}
						else if (  ( _switch_15==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
							HX_STACK_LINE(1323)
							val = (int)11;
						}
						else if (  ( _switch_15==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
							HX_STACK_LINE(1323)
							val = (int)12;
						}
						else if (  ( _switch_15==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
							HX_STACK_LINE(1323)
							val = (int)13;
						}
						else if (  ( _switch_15==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
							HX_STACK_LINE(1323)
							val = (int)14;
						}
						else if (  ( _switch_15==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_15==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
							HX_STACK_LINE(1323)
							val = (int)15;
						}
						HX_STACK_LINE(1323)
						bool tmp46 = (val == (int)-1);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1323)
						if ((tmp46)){
							HX_STACK_LINE(1323)
							::String tmp47 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1323)
							::String tmp48 = (tmp47 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1323)
							HX_STACK_DO_THROW(tmp48);
						}
						HX_STACK_LINE(1323)
						tmp44 = val;
					}
					HX_STACK_LINE(1323)
					int char_int = tmp44;		HX_STACK_VAR(char_int,"char_int");
					HX_STACK_LINE(1323)
					int tmp45 = (char_int * place_mult);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(1323)
					hx::AddEq(sum,tmp45);
					HX_STACK_LINE(1323)
					hx::MultEq(place_mult,(int)16);
					HX_STACK_LINE(1323)
					(i)--;
				}
				HX_STACK_LINE(1323)
				tmp38 = sum;
			}
			HX_STACK_LINE(1323)
			return_val = tmp38;
		}
		HX_STACK_LINE(1323)
		tmp27 = return_val;
	}
	HX_STACK_LINE(1323)
	int backgroundColor = tmp27;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(1325)
	::flixel::addons::ui::interfaces::IFlxUIWidget ft;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(1326)
	bool tmp28 = (input == false);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(1326)
	if ((tmp28)){
		HX_STACK_LINE(1327)
		::flixel::addons::ui::FlxUIText tmp29 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,W,text,size,null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1327)
		::flixel::addons::ui::FlxUIText ftu = tmp29;		HX_STACK_VAR(ftu,"ftu");
		HX_STACK_LINE(1328)
		::String tmp30 = the_font;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1328)
		int tmp31 = size;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1328)
		int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1328)
		::String tmp33 = align;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1328)
		ftu->setFormat(tmp30,tmp31,tmp32,tmp33,null(),null(),null());
		HX_STACK_LINE(1329)
		::flixel::addons::ui::FlxUIText tmp34 = ftu;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1329)
		border->apply(tmp34);
		HX_STACK_LINE(1330)
		{
			HX_STACK_LINE(1330)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(1330)
			ftu->calcFrame(true);
		}
		HX_STACK_LINE(1331)
		ft = ftu;
	}
	else{
		HX_STACK_LINE(1333)
		::flixel::addons::ui::FlxUIInputText tmp29 = ::flixel::addons::ui::FlxUIInputText_obj::__new((int)0,(int)0,W,text,size,color,backgroundColor,null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1333)
		::flixel::addons::ui::FlxUIInputText fti = tmp29;		HX_STACK_VAR(fti,"fti");
		HX_STACK_LINE(1334)
		::String tmp30 = the_font;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1334)
		int tmp31 = size;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1334)
		int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1334)
		::String tmp33 = align;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1334)
		fti->setFormat(tmp30,tmp31,tmp32,tmp33,null(),null(),null());
		HX_STACK_LINE(1335)
		::flixel::addons::ui::FlxUIInputText tmp34 = fti;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1335)
		border->apply(tmp34);
		HX_STACK_LINE(1336)
		{
			HX_STACK_LINE(1336)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(1336)
			fti->calcFrame(true);
		}
		HX_STACK_LINE(1337)
		ft = fti;
	}
	HX_STACK_LINE(1339)
	::flixel::addons::ui::interfaces::IFlxUIWidget tmp29 = ft;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(1339)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadText,return )

::flixel::addons::ui::FlxUIRadioGroup FlxUI_obj::_loadRadioGroup( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadRadioGroup",0x22b21c90,"flixel.addons.ui.FlxUI._loadRadioGroup","flixel/addons/ui/FlxUI.hx",1379,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1380)
	::flixel::addons::ui::FlxUIRadioGroup frg = null();		HX_STACK_VAR(frg,"frg");
	HX_STACK_LINE(1382)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1382)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("dot_src","\xee","\xa6","\x9d","\xa9"),true,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1382)
	::String dot_src = tmp1;		HX_STACK_VAR(dot_src,"dot_src");
	HX_STACK_LINE(1383)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1383)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("radio_src","\x60","\x96","\x16","\xfe"),true,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1383)
	::String radio_src = tmp3;		HX_STACK_VAR(radio_src,"radio_src");
	HX_STACK_LINE(1385)
	Array< ::String > labels = Array_obj< ::String >::__new();		HX_STACK_VAR(labels,"labels");
	HX_STACK_LINE(1386)
	Array< ::String > ids = Array_obj< ::String >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(1388)
	::haxe::xml::Fast tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1388)
	Float tmp5 = this->_loadWidth(tmp4,(int)11,HX_HCSTRING("radio_width","\x82","\x7c","\x59","\xe9"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1388)
	int W = ((int)(tmp5));		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1389)
	::haxe::xml::Fast tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1389)
	Float tmp7 = this->_loadHeight(tmp6,(int)11,HX_HCSTRING("radio_height","\xeb","\xed","\x42","\xfb"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1389)
	int H = ((int)(tmp7));		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(1391)
	::haxe::xml::Fast tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1391)
	Float tmp9 = this->_loadWidth(tmp8,(int)100,HX_HCSTRING("label_width","\x3b","\xfa","\xb5","\xdc"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1391)
	int labelW = ((int)(tmp9));		HX_STACK_VAR(labelW,"labelW");
	HX_STACK_LINE(1393)
	{
		HX_STACK_LINE(1393)
		::_List::ListIterator tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1393)
		{
			HX_STACK_LINE(1393)
			::List tmp11 = data->nodes->resolve(HX_HCSTRING("radio","\xfb","\x10","\x18","\xe4"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1393)
			::List _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1393)
			tmp10 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(1393)
		::_List::ListIterator _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1393)
		while((true)){
			HX_STACK_LINE(1393)
			bool tmp11 = (_g->head != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1393)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1393)
			if ((tmp12)){
				HX_STACK_LINE(1393)
				break;
			}
			HX_STACK_LINE(1393)
			Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1393)
			{
				HX_STACK_LINE(1393)
				Dynamic tmp14 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1393)
				_g->val = tmp14;
				HX_STACK_LINE(1393)
				Dynamic tmp15 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1393)
				_g->head = tmp15;
				HX_STACK_LINE(1393)
				tmp13 = _g->val;
			}
			HX_STACK_LINE(1393)
			::haxe::xml::Fast radioNode = ((::haxe::xml::Fast)(tmp13));		HX_STACK_VAR(radioNode,"radioNode");
			HX_STACK_LINE(1394)
			::Xml tmp14 = radioNode->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1394)
			::String tmp15 = ::flixel::addons::ui::U_obj::xml_str(tmp14,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1394)
			::String id = tmp15;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(1395)
			::Xml tmp16 = radioNode->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1395)
			::String tmp17 = ::flixel::addons::ui::U_obj::xml_str(tmp16,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1395)
			::String label = tmp17;		HX_STACK_VAR(label,"label");
			HX_STACK_LINE(1397)
			::Xml tmp18 = radioNode->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1397)
			::String tmp19 = ::flixel::addons::ui::U_obj::xml_str(tmp18,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1397)
			::String context = tmp19;		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(1398)
			::Xml tmp20 = radioNode->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1398)
			::String tmp21 = ::flixel::addons::ui::U_obj::xml_str(tmp20,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1398)
			::String code = tmp21;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(1399)
			::String tmp22 = label;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1399)
			::String tmp23 = context;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1399)
			::String tmp24 = code;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1399)
			::String tmp25 = this->getText(tmp22,tmp23,true,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1399)
			label = tmp25;
			HX_STACK_LINE(1401)
			::String tmp26 = id;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1401)
			ids->push(tmp26);
			HX_STACK_LINE(1402)
			::String tmp27 = label;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1402)
			labels->push(tmp27);
		}
	}
	HX_STACK_LINE(1405)
	::Xml tmp10 = data->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1405)
	Float tmp11 = ::flixel::addons::ui::U_obj::xml_f(tmp10,HX_HCSTRING("y_space","\x40","\xf5","\xf2","\x24"),(int)25);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1405)
	Float y_space = tmp11;		HX_STACK_VAR(y_space,"y_space");
	HX_STACK_LINE(1407)
	cpp::ArrayBase params;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(1407)
	{
		HX_STACK_LINE(1407)
		cpp::ArrayBase params1 = null();		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(1407)
		bool tmp12 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1407)
		if ((tmp12)){
			HX_STACK_LINE(1407)
			params1 = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(1407)
			{
				HX_STACK_LINE(1407)
				::_List::ListIterator tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1407)
				{
					HX_STACK_LINE(1407)
					::List tmp14 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1407)
					::List _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1407)
					tmp13 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(1407)
				::_List::ListIterator _g = tmp13;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1407)
				while((true)){
					HX_STACK_LINE(1407)
					bool tmp14 = (_g->head != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1407)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1407)
					if ((tmp15)){
						HX_STACK_LINE(1407)
						break;
					}
					HX_STACK_LINE(1407)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1407)
					{
						HX_STACK_LINE(1407)
						Dynamic tmp17 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1407)
						_g->val = tmp17;
						HX_STACK_LINE(1407)
						Dynamic tmp18 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1407)
						_g->head = tmp18;
						HX_STACK_LINE(1407)
						tmp16 = _g->val;
					}
					HX_STACK_LINE(1407)
					::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp16));		HX_STACK_VAR(param,"param");
					HX_STACK_LINE(1407)
					bool tmp17 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1407)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1407)
					if ((tmp17)){
						HX_STACK_LINE(1407)
						tmp18 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
					}
					else{
						HX_STACK_LINE(1407)
						tmp18 = false;
					}
					HX_STACK_LINE(1407)
					if ((tmp18)){
						HX_STACK_LINE(1407)
						::String tmp19 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1407)
						::String type = tmp19;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1407)
						::String tmp20 = type.toLowerCase();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1407)
						type = tmp20;
						HX_STACK_LINE(1407)
						::String tmp21 = type;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1407)
						::String _switch_16 = (tmp21);
						if (  ( _switch_16==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
							HX_STACK_LINE(1407)
							::String tmp22 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1407)
							::String tmp23 = ::String(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1407)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
						}
						else if (  ( _switch_16==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
							HX_STACK_LINE(1407)
							::String tmp22 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1407)
							Dynamic tmp23 = ::Std_obj::parseInt(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1407)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
						}
						else if (  ( _switch_16==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
							HX_STACK_LINE(1407)
							::String tmp22 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1407)
							Float tmp23 = ::Std_obj::parseFloat(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1407)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
						}
						else if (  ( _switch_16==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_16==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
							HX_STACK_LINE(1407)
							int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1407)
							{
								HX_STACK_LINE(1407)
								::String tmp23 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1407)
								::String str = tmp23;		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(1407)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(1407)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(1407)
								int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(1407)
								int tmp24 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1407)
								bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1407)
								if ((tmp25)){
									HX_STACK_LINE(1407)
									bool tmp26 = safe;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1407)
									bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1407)
									if ((tmp27)){
										HX_STACK_LINE(1407)
										::String tmp28 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1407)
										::String tmp29 = (tmp28 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1407)
										HX_STACK_DO_THROW(tmp29);
									}
									else{
										HX_STACK_LINE(1407)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1407)
								bool tmp26 = (str.length != (int)8);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1407)
								bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1407)
								if ((tmp26)){
									HX_STACK_LINE(1407)
									tmp27 = (str.length != (int)10);
								}
								else{
									HX_STACK_LINE(1407)
									tmp27 = false;
								}
								HX_STACK_LINE(1407)
								if ((tmp27)){
									HX_STACK_LINE(1407)
									bool tmp28 = safe;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1407)
									bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1407)
									if ((tmp29)){
										HX_STACK_LINE(1407)
										::String tmp30 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1407)
										::String tmp31 = (tmp30 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1407)
										HX_STACK_DO_THROW(tmp31);
									}
									else{
										HX_STACK_LINE(1407)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1407)
								bool tmp28 = (return_val == (int)-1);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1407)
								if ((tmp28)){
									HX_STACK_LINE(1407)
									int tmp29 = (str.length - (int)2);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1407)
									::String tmp30 = str.substr((int)2,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1407)
									str = tmp30;
									HX_STACK_LINE(1407)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1407)
									tmp31 = (str.length == (int)6);
									HX_STACK_LINE(1407)
									if ((tmp31)){
										HX_STACK_LINE(1407)
										::String tmp32 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1407)
										str = tmp32;
									}
									HX_STACK_LINE(1407)
									int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1407)
									{
										HX_STACK_LINE(1407)
										int length = str.length;		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(1407)
										int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
										HX_STACK_LINE(1407)
										int sum = (int)0;		HX_STACK_VAR(sum,"sum");
										HX_STACK_LINE(1407)
										int tmp33 = (length - (int)1);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(1407)
										int i = tmp33;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1407)
										while((true)){
											HX_STACK_LINE(1407)
											bool tmp34 = (i >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1407)
											bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1407)
											if ((tmp35)){
												HX_STACK_LINE(1407)
												break;
											}
											HX_STACK_LINE(1407)
											int tmp36 = i;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1407)
											::String tmp37 = str.substr(tmp36,(int)1);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1407)
											::String char_hex = tmp37;		HX_STACK_VAR(char_hex,"char_hex");
											HX_STACK_LINE(1407)
											int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1407)
											{
												HX_STACK_LINE(1407)
												int val = (int)-1;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(1407)
												::String tmp39 = char_hex;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1407)
												::String _switch_17 = (tmp39);
												if (  ( _switch_17==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
													HX_STACK_LINE(1407)
													::String tmp40 = char_hex;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1407)
													Dynamic tmp41 = ::Std_obj::parseInt(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1407)
													val = tmp41;
												}
												else if (  ( _switch_17==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
													HX_STACK_LINE(1407)
													val = (int)10;
												}
												else if (  ( _switch_17==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
													HX_STACK_LINE(1407)
													val = (int)11;
												}
												else if (  ( _switch_17==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
													HX_STACK_LINE(1407)
													val = (int)12;
												}
												else if (  ( _switch_17==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
													HX_STACK_LINE(1407)
													val = (int)13;
												}
												else if (  ( _switch_17==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
													HX_STACK_LINE(1407)
													val = (int)14;
												}
												else if (  ( _switch_17==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_17==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
													HX_STACK_LINE(1407)
													val = (int)15;
												}
												HX_STACK_LINE(1407)
												bool tmp40 = (val == (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1407)
												if ((tmp40)){
													HX_STACK_LINE(1407)
													::String tmp41 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1407)
													::String tmp42 = (tmp41 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1407)
													HX_STACK_DO_THROW(tmp42);
												}
												HX_STACK_LINE(1407)
												tmp38 = val;
											}
											HX_STACK_LINE(1407)
											int char_int = tmp38;		HX_STACK_VAR(char_int,"char_int");
											HX_STACK_LINE(1407)
											int tmp39 = (char_int * place_mult);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1407)
											hx::AddEq(sum,tmp39);
											HX_STACK_LINE(1407)
											hx::MultEq(place_mult,(int)16);
											HX_STACK_LINE(1407)
											(i)--;
										}
										HX_STACK_LINE(1407)
										tmp32 = sum;
									}
									HX_STACK_LINE(1407)
									return_val = tmp32;
								}
								HX_STACK_LINE(1407)
								tmp22 = return_val;
							}
							HX_STACK_LINE(1407)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1407)
		params = params1;
	}
	HX_STACK_LINE(1409)
	::String radio_asset = null();		HX_STACK_VAR(radio_asset,"radio_asset");
	HX_STACK_LINE(1410)
	bool tmp12 = (radio_src != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1410)
	if ((tmp12)){
		HX_STACK_LINE(1411)
		::String tmp13 = radio_src;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1411)
		::String tmp14 = ::flixel::addons::ui::U_obj::gfx(tmp13,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1411)
		radio_asset = tmp14;
	}
	HX_STACK_LINE(1414)
	Dynamic dot_asset = null();		HX_STACK_VAR(dot_asset,"dot_asset");
	HX_STACK_LINE(1415)
	bool tmp13 = (dot_src != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1415)
	if ((tmp13)){
		HX_STACK_LINE(1416)
		::String tmp14 = dot_src;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1416)
		::String tmp15 = ::flixel::addons::ui::U_obj::gfx(tmp14,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1416)
		dot_asset = tmp15;
	}
	HX_STACK_LINE(1422)
	::flixel::addons::ui::FlxUIRadioGroup tmp14 = ::flixel::addons::ui::FlxUIRadioGroup_obj::__new((int)0,(int)0,ids,labels,null(),y_space,W,H,labelW);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1422)
	frg = tmp14;
	HX_STACK_LINE(1423)
	frg->set_params(params);
	HX_STACK_LINE(1425)
	bool tmp15 = (radio_asset != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1425)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1425)
	if ((tmp15)){
		HX_STACK_LINE(1425)
		tmp16 = (radio_asset != null());
	}
	else{
		HX_STACK_LINE(1425)
		tmp16 = false;
	}
	HX_STACK_LINE(1425)
	if ((tmp16)){
		HX_STACK_LINE(1426)
		::String tmp17 = radio_asset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1426)
		Dynamic tmp18 = dot_asset;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1426)
		frg->loadGraphics(tmp17,tmp18);
	}
	HX_STACK_LINE(1429)
	::Xml tmp17 = data->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1429)
	int tmp18 = ::flixel::addons::ui::U_obj::xml_i(tmp17,HX_HCSTRING("text_x","\x26","\x65","\x88","\xd8"),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1429)
	int text_x = tmp18;		HX_STACK_VAR(text_x,"text_x");
	HX_STACK_LINE(1430)
	::Xml tmp19 = data->x;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1430)
	int tmp20 = ::flixel::addons::ui::U_obj::xml_i(tmp19,HX_HCSTRING("text_y","\x27","\x65","\x88","\xd8"),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1430)
	int text_y = tmp20;		HX_STACK_VAR(text_y,"text_y");
	HX_STACK_LINE(1432)
	{
		HX_STACK_LINE(1432)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1432)
		Array< ::Dynamic > _g1 = frg->group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1432)
		while((true)){
			HX_STACK_LINE(1432)
			bool tmp21 = (_g < _g1->length);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1432)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1432)
			if ((tmp22)){
				HX_STACK_LINE(1432)
				break;
			}
			HX_STACK_LINE(1432)
			::flixel::FlxSprite tmp23 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1432)
			::flixel::FlxSprite fo = tmp23;		HX_STACK_VAR(fo,"fo");
			HX_STACK_LINE(1432)
			++(_g);
			HX_STACK_LINE(1433)
			bool tmp24 = (fo != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1433)
			if ((tmp24)){
				HX_STACK_LINE(1434)
				::flixel::FlxSprite tmp25 = fo;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1434)
				bool tmp26 = ::Std_obj::is(tmp25,hx::ClassOf< ::flixel::addons::ui::FlxUICheckBox >());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1434)
				if ((tmp26)){
					HX_STACK_LINE(1435)
					::flixel::addons::ui::FlxUICheckBox tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1435)
					tmp27 = hx::TCast< ::flixel::addons::ui::FlxUICheckBox >::cast(fo);
					HX_STACK_LINE(1435)
					::flixel::addons::ui::FlxUICheckBox fc = tmp27;		HX_STACK_VAR(fc,"fc");
					HX_STACK_LINE(1436)
					::haxe::xml::Fast tmp28 = data;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1436)
					::flixel::addons::ui::FlxUICheckBox tmp29 = fc;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1436)
					this->formatButtonText(tmp28,tmp29);
					HX_STACK_LINE(1437)
					int tmp30 = text_x;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1437)
					fc->set_textX(tmp30);
					HX_STACK_LINE(1438)
					int tmp31 = text_y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1438)
					fc->set_textY(tmp31);
				}
			}
		}
	}
	HX_STACK_LINE(1443)
	::flixel::addons::ui::FlxUIRadioGroup tmp21 = frg;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1443)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadRadioGroup,return )

::flixel::addons::ui::FlxUICheckBox FlxUI_obj::_loadCheckBox( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadCheckBox",0xdd35176f,"flixel.addons.ui.FlxUI._loadCheckBox","flixel/addons/ui/FlxUI.hx",1446,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1447)
	::String src = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(1448)
	::flixel::addons::ui::FlxUICheckBox fc = null();		HX_STACK_VAR(fc,"fc");
	HX_STACK_LINE(1450)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1450)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1450)
	::String label = tmp1;		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(1451)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1451)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1451)
	::String context = tmp3;		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1452)
	::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1452)
	::String tmp5 = ::flixel::addons::ui::U_obj::xml_str(tmp4,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1452)
	::String code = tmp5;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1454)
	::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1454)
	bool tmp7 = ::flixel::addons::ui::U_obj::xml_bool(tmp6,HX_HCSTRING("checked","\x27","\xb3","\x24","\x13"),false);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1454)
	bool checked = tmp7;		HX_STACK_VAR(checked,"checked");
	HX_STACK_LINE(1456)
	::String tmp8 = label;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1456)
	::String tmp9 = context;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1456)
	::String tmp10 = code;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1456)
	::String tmp11 = this->getText(tmp8,tmp9,true,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1456)
	label = tmp11;
	HX_STACK_LINE(1458)
	::haxe::xml::Fast tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1458)
	Float tmp13 = this->_loadWidth(tmp12,(int)100,HX_HCSTRING("label_width","\x3b","\xfa","\xb5","\xdc"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1458)
	int labelW = ((int)(tmp13));		HX_STACK_VAR(labelW,"labelW");
	HX_STACK_LINE(1460)
	::Xml tmp14 = data->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1460)
	::String tmp15 = ::flixel::addons::ui::U_obj::xml_str(tmp14,HX_HCSTRING("check_src","\xad","\x88","\x29","\xa8"),true,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1460)
	::String check_src = tmp15;		HX_STACK_VAR(check_src,"check_src");
	HX_STACK_LINE(1461)
	::Xml tmp16 = data->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1461)
	::String tmp17 = ::flixel::addons::ui::U_obj::xml_str(tmp16,HX_HCSTRING("box_src","\x70","\x0b","\x0d","\xa4"),true,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1461)
	::String box_src = tmp17;		HX_STACK_VAR(box_src,"box_src");
	HX_STACK_LINE(1463)
	cpp::ArrayBase params;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(1463)
	{
		HX_STACK_LINE(1463)
		cpp::ArrayBase params1 = null();		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(1463)
		bool tmp18 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1463)
		if ((tmp18)){
			HX_STACK_LINE(1463)
			params1 = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(1463)
			{
				HX_STACK_LINE(1463)
				::_List::ListIterator tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1463)
				{
					HX_STACK_LINE(1463)
					::List tmp20 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1463)
					::List _this = tmp20;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1463)
					tmp19 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(1463)
				::_List::ListIterator _g = tmp19;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1463)
				while((true)){
					HX_STACK_LINE(1463)
					bool tmp20 = (_g->head != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1463)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1463)
					if ((tmp21)){
						HX_STACK_LINE(1463)
						break;
					}
					HX_STACK_LINE(1463)
					Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1463)
					{
						HX_STACK_LINE(1463)
						Dynamic tmp23 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(1463)
						_g->val = tmp23;
						HX_STACK_LINE(1463)
						Dynamic tmp24 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1463)
						_g->head = tmp24;
						HX_STACK_LINE(1463)
						tmp22 = _g->val;
					}
					HX_STACK_LINE(1463)
					::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp22));		HX_STACK_VAR(param,"param");
					HX_STACK_LINE(1463)
					bool tmp23 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1463)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1463)
					if ((tmp23)){
						HX_STACK_LINE(1463)
						tmp24 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
					}
					else{
						HX_STACK_LINE(1463)
						tmp24 = false;
					}
					HX_STACK_LINE(1463)
					if ((tmp24)){
						HX_STACK_LINE(1463)
						::String tmp25 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1463)
						::String type = tmp25;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1463)
						::String tmp26 = type.toLowerCase();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1463)
						type = tmp26;
						HX_STACK_LINE(1463)
						::String tmp27 = type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1463)
						::String _switch_18 = (tmp27);
						if (  ( _switch_18==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
							HX_STACK_LINE(1463)
							::String tmp28 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1463)
							::String tmp29 = ::String(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1463)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
						}
						else if (  ( _switch_18==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
							HX_STACK_LINE(1463)
							::String tmp28 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1463)
							Dynamic tmp29 = ::Std_obj::parseInt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1463)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
						}
						else if (  ( _switch_18==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
							HX_STACK_LINE(1463)
							::String tmp28 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1463)
							Float tmp29 = ::Std_obj::parseFloat(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1463)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
						}
						else if (  ( _switch_18==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_18==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
							HX_STACK_LINE(1463)
							int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1463)
							{
								HX_STACK_LINE(1463)
								::String tmp29 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1463)
								::String str = tmp29;		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(1463)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(1463)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(1463)
								int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(1463)
								int tmp30 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1463)
								bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1463)
								if ((tmp31)){
									HX_STACK_LINE(1463)
									bool tmp32 = safe;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1463)
									bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1463)
									if ((tmp33)){
										HX_STACK_LINE(1463)
										::String tmp34 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(1463)
										::String tmp35 = (tmp34 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(1463)
										HX_STACK_DO_THROW(tmp35);
									}
									else{
										HX_STACK_LINE(1463)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1463)
								bool tmp32 = (str.length != (int)8);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1463)
								bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1463)
								if ((tmp32)){
									HX_STACK_LINE(1463)
									tmp33 = (str.length != (int)10);
								}
								else{
									HX_STACK_LINE(1463)
									tmp33 = false;
								}
								HX_STACK_LINE(1463)
								if ((tmp33)){
									HX_STACK_LINE(1463)
									bool tmp34 = safe;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1463)
									bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1463)
									if ((tmp35)){
										HX_STACK_LINE(1463)
										::String tmp36 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(1463)
										::String tmp37 = (tmp36 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1463)
										HX_STACK_DO_THROW(tmp37);
									}
									else{
										HX_STACK_LINE(1463)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1463)
								bool tmp34 = (return_val == (int)-1);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1463)
								if ((tmp34)){
									HX_STACK_LINE(1463)
									int tmp35 = (str.length - (int)2);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1463)
									::String tmp36 = str.substr((int)2,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1463)
									str = tmp36;
									HX_STACK_LINE(1463)
									bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1463)
									tmp37 = (str.length == (int)6);
									HX_STACK_LINE(1463)
									if ((tmp37)){
										HX_STACK_LINE(1463)
										::String tmp38 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1463)
										str = tmp38;
									}
									HX_STACK_LINE(1463)
									int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1463)
									{
										HX_STACK_LINE(1463)
										int length = str.length;		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(1463)
										int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
										HX_STACK_LINE(1463)
										int sum = (int)0;		HX_STACK_VAR(sum,"sum");
										HX_STACK_LINE(1463)
										int tmp39 = (length - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1463)
										int i = tmp39;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1463)
										while((true)){
											HX_STACK_LINE(1463)
											bool tmp40 = (i >= (int)0);		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1463)
											bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1463)
											if ((tmp41)){
												HX_STACK_LINE(1463)
												break;
											}
											HX_STACK_LINE(1463)
											int tmp42 = i;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1463)
											::String tmp43 = str.substr(tmp42,(int)1);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1463)
											::String char_hex = tmp43;		HX_STACK_VAR(char_hex,"char_hex");
											HX_STACK_LINE(1463)
											int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1463)
											{
												HX_STACK_LINE(1463)
												int val = (int)-1;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(1463)
												::String tmp45 = char_hex;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1463)
												::String _switch_19 = (tmp45);
												if (  ( _switch_19==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
													HX_STACK_LINE(1463)
													::String tmp46 = char_hex;		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(1463)
													Dynamic tmp47 = ::Std_obj::parseInt(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1463)
													val = tmp47;
												}
												else if (  ( _switch_19==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
													HX_STACK_LINE(1463)
													val = (int)10;
												}
												else if (  ( _switch_19==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
													HX_STACK_LINE(1463)
													val = (int)11;
												}
												else if (  ( _switch_19==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
													HX_STACK_LINE(1463)
													val = (int)12;
												}
												else if (  ( _switch_19==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
													HX_STACK_LINE(1463)
													val = (int)13;
												}
												else if (  ( _switch_19==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
													HX_STACK_LINE(1463)
													val = (int)14;
												}
												else if (  ( _switch_19==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_19==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
													HX_STACK_LINE(1463)
													val = (int)15;
												}
												HX_STACK_LINE(1463)
												bool tmp46 = (val == (int)-1);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1463)
												if ((tmp46)){
													HX_STACK_LINE(1463)
													::String tmp47 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(1463)
													::String tmp48 = (tmp47 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(1463)
													HX_STACK_DO_THROW(tmp48);
												}
												HX_STACK_LINE(1463)
												tmp44 = val;
											}
											HX_STACK_LINE(1463)
											int char_int = tmp44;		HX_STACK_VAR(char_int,"char_int");
											HX_STACK_LINE(1463)
											int tmp45 = (char_int * place_mult);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1463)
											hx::AddEq(sum,tmp45);
											HX_STACK_LINE(1463)
											hx::MultEq(place_mult,(int)16);
											HX_STACK_LINE(1463)
											(i)--;
										}
										HX_STACK_LINE(1463)
										tmp38 = sum;
									}
									HX_STACK_LINE(1463)
									return_val = tmp38;
								}
								HX_STACK_LINE(1463)
								tmp28 = return_val;
							}
							HX_STACK_LINE(1463)
							params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp28);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1463)
		params = params1;
	}
	HX_STACK_LINE(1465)
	::String box_asset = null();		HX_STACK_VAR(box_asset,"box_asset");
	HX_STACK_LINE(1466)
	::String check_asset = null();		HX_STACK_VAR(check_asset,"check_asset");
	HX_STACK_LINE(1468)
	bool tmp18 = (box_src != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1468)
	if ((tmp18)){
		HX_STACK_LINE(1469)
		::String tmp19 = box_src;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1469)
		::String tmp20 = ::flixel::addons::ui::U_obj::gfx(tmp19,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1469)
		box_asset = tmp20;
	}
	HX_STACK_LINE(1471)
	bool tmp19 = (check_src != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1471)
	if ((tmp19)){
		HX_STACK_LINE(1472)
		::String tmp20 = check_src;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1472)
		::String tmp21 = ::flixel::addons::ui::U_obj::gfx(tmp20,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1472)
		check_asset = tmp21;
	}
	HX_STACK_LINE(1475)
	::flixel::addons::ui::FlxUICheckBox tmp20 = ::flixel::addons::ui::FlxUICheckBox_obj::__new((int)0,(int)0,box_asset,check_asset,label,labelW,params,null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1475)
	fc = tmp20;
	HX_STACK_LINE(1476)
	::haxe::xml::Fast tmp21 = data;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1476)
	::flixel::addons::ui::FlxUICheckBox tmp22 = fc;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1476)
	this->formatButtonText(tmp21,tmp22);
	HX_STACK_LINE(1478)
	::Xml tmp23 = data->x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1478)
	int tmp24 = ::flixel::addons::ui::U_obj::xml_i(tmp23,HX_HCSTRING("text_x","\x26","\x65","\x88","\xd8"),null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1478)
	int text_x = tmp24;		HX_STACK_VAR(text_x,"text_x");
	HX_STACK_LINE(1479)
	::Xml tmp25 = data->x;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1479)
	int tmp26 = ::flixel::addons::ui::U_obj::xml_i(tmp25,HX_HCSTRING("text_y","\x27","\x65","\x88","\xd8"),null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1479)
	int text_y = tmp26;		HX_STACK_VAR(text_y,"text_y");
	HX_STACK_LINE(1481)
	int tmp27 = text_x;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1481)
	fc->set_textX(tmp27);
	HX_STACK_LINE(1482)
	int tmp28 = text_y;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(1482)
	fc->set_textY(tmp28);
	HX_STACK_LINE(1484)
	::String tmp29 = label;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(1484)
	fc->set_text(tmp29);
	HX_STACK_LINE(1486)
	bool tmp30 = checked;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(1486)
	fc->set_checked(tmp30);
	HX_STACK_LINE(1488)
	::flixel::addons::ui::FlxUICheckBox tmp31 = fc;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(1488)
	return tmp31;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadCheckBox,return )

::flixel::addons::ui::FlxUIDropDownMenu FlxUI_obj::_loadDropDownMenu( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadDropDownMenu",0xfcc3a1bc,"flixel.addons.ui.FlxUI._loadDropDownMenu","flixel/addons/ui/FlxUI.hx",1492,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1517)
	::flixel::addons::ui::FlxUIDropDownMenu fud = null();		HX_STACK_VAR(fud,"fud");
	HX_STACK_LINE(1519)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1519)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1519)
	::String label = tmp1;		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(1520)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1520)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1520)
	::String context = tmp3;		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1521)
	::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1521)
	::String tmp5 = ::flixel::addons::ui::U_obj::xml_str(tmp4,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1521)
	::String code = tmp5;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1522)
	::String tmp6 = label;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1522)
	::String tmp7 = context;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1522)
	::String tmp8 = code;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1522)
	::String tmp9 = this->getText(tmp6,tmp7,true,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1522)
	label = tmp9;
	HX_STACK_LINE(1524)
	::Xml tmp10 = data->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1524)
	::String tmp11 = ::flixel::addons::ui::U_obj::xml_str(tmp10,HX_HCSTRING("back_def","\x6d","\xf8","\x3d","\x17"),true,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1524)
	::String back_def = tmp11;		HX_STACK_VAR(back_def,"back_def");
	HX_STACK_LINE(1525)
	::Xml tmp12 = data->x;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1525)
	::String tmp13 = ::flixel::addons::ui::U_obj::xml_str(tmp12,HX_HCSTRING("panel_def","\xca","\xcb","\x5d","\xa4"),true,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1525)
	::String panel_def = tmp13;		HX_STACK_VAR(panel_def,"panel_def");
	HX_STACK_LINE(1526)
	::Xml tmp14 = data->x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1526)
	::String tmp15 = ::flixel::addons::ui::U_obj::xml_str(tmp14,HX_HCSTRING("button_def","\xb8","\xc1","\x34","\xbe"),true,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1526)
	::String button_def = tmp15;		HX_STACK_VAR(button_def,"button_def");
	HX_STACK_LINE(1527)
	::Xml tmp16 = data->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1527)
	::String tmp17 = ::flixel::addons::ui::U_obj::xml_str(tmp16,HX_HCSTRING("label_def","\xba","\x96","\x96","\x65"),true,null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1527)
	::String label_def = tmp17;		HX_STACK_VAR(label_def,"label_def");
	HX_STACK_LINE(1529)
	::flixel::FlxSprite back_asset = null();		HX_STACK_VAR(back_asset,"back_asset");
	HX_STACK_LINE(1530)
	::flixel::addons::ui::FlxUI9SliceSprite panel_asset = null();		HX_STACK_VAR(panel_asset,"panel_asset");
	HX_STACK_LINE(1531)
	::flixel::addons::ui::FlxUISpriteButton button_asset = null();		HX_STACK_VAR(button_asset,"button_asset");
	HX_STACK_LINE(1532)
	::flixel::addons::ui::FlxUIText label_asset = null();		HX_STACK_VAR(label_asset,"label_asset");
	HX_STACK_LINE(1534)
	bool tmp18 = (back_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1534)
	if ((tmp18)){
		HX_STACK_LINE(1535)
		::String tmp19 = back_def;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1535)
		::haxe::xml::Fast tmp20 = this->getDefinition(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1535)
		::flixel::addons::ui::FlxUISprite tmp21 = this->_loadSprite(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1535)
		back_asset = tmp21;
	}
	HX_STACK_LINE(1538)
	bool tmp19 = (panel_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1538)
	if ((tmp19)){
		HX_STACK_LINE(1539)
		::String tmp20 = panel_def;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1539)
		::haxe::xml::Fast tmp21 = this->getDefinition(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1539)
		::flixel::addons::ui::FlxUI9SliceSprite tmp22 = this->_load9SliceSprite(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1539)
		panel_asset = tmp22;
	}
	HX_STACK_LINE(1542)
	bool tmp20 = (button_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1542)
	if ((tmp20)){
		HX_STACK_LINE(1543)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(1544)
			::String tmp21 = button_def;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1544)
			::haxe::xml::Fast tmp22 = this->getDefinition(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1544)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp23 = this->_loadButton(tmp22,false,false,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1544)
			button_asset = ((::flixel::addons::ui::FlxUISpriteButton)(tmp23));
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(1547)
					button_asset = null();
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
	HX_STACK_LINE(1551)
	bool tmp21 = (label_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1551)
	if ((tmp21)){
		HX_STACK_LINE(1552)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(1553)
			::String tmp22 = label_def;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1553)
			::haxe::xml::Fast tmp23 = this->getDefinition(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1553)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp24 = this->_loadText(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1553)
			label_asset = ((::flixel::addons::ui::FlxUIText)(tmp24));
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(1556)
					label_asset = null();
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(1558)
		bool tmp22 = (label_asset != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1558)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1558)
		if ((tmp22)){
			HX_STACK_LINE(1558)
			tmp23 = (label != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(1558)
			tmp23 = false;
		}
		HX_STACK_LINE(1558)
		if ((tmp23)){
			HX_STACK_LINE(1559)
			::String tmp24 = label;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1559)
			label_asset->set_text(tmp24);
		}
	}
	HX_STACK_LINE(1563)
	Array< ::Dynamic > asset_list = null();		HX_STACK_VAR(asset_list,"asset_list");
	HX_STACK_LINE(1564)
	Array< ::Dynamic > data_list = null();		HX_STACK_VAR(data_list,"data_list");
	HX_STACK_LINE(1566)
	bool tmp22 = data->hasNode->resolve(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1566)
	if ((tmp22)){
		HX_STACK_LINE(1567)
		::_List::ListIterator tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1567)
		{
			HX_STACK_LINE(1567)
			::List tmp24 = data->nodes->resolve(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1567)
			::List _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1567)
			tmp23 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(1567)
		::_List::ListIterator _g = tmp23;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1567)
		while((true)){
			HX_STACK_LINE(1567)
			bool tmp24 = (_g->head != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1567)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1567)
			if ((tmp25)){
				HX_STACK_LINE(1567)
				break;
			}
			HX_STACK_LINE(1567)
			Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1567)
			{
				HX_STACK_LINE(1567)
				Dynamic tmp27 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1567)
				_g->val = tmp27;
				HX_STACK_LINE(1567)
				Dynamic tmp28 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1567)
				_g->head = tmp28;
				HX_STACK_LINE(1567)
				tmp26 = _g->val;
			}
			HX_STACK_LINE(1567)
			::haxe::xml::Fast dataNode = ((::haxe::xml::Fast)(tmp26));		HX_STACK_VAR(dataNode,"dataNode");
			HX_STACK_LINE(1568)
			bool tmp27 = (data_list == null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1568)
			if ((tmp27)){
				HX_STACK_LINE(1569)
				data_list = Array_obj< ::Dynamic >::__new();
			}
			HX_STACK_LINE(1571)
			::Xml tmp28 = dataNode->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1571)
			::String tmp29 = ::flixel::addons::ui::U_obj::xml_str(tmp28,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1571)
			::Xml tmp30 = dataNode->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1571)
			::String tmp31 = ::flixel::addons::ui::U_obj::xml_str(tmp30,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1571)
			::flixel::addons::ui::StrIdLabel tmp32 = ::flixel::addons::ui::StrIdLabel_obj::__new(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1571)
			::flixel::addons::ui::StrIdLabel idl = tmp32;		HX_STACK_VAR(idl,"idl");
			HX_STACK_LINE(1572)
			::flixel::addons::ui::StrIdLabel tmp33 = idl;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1572)
			data_list->push(tmp33);
		}
	}
	else{
		HX_STACK_LINE(1574)
		bool tmp23 = data->hasNode->resolve(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1574)
		if ((tmp23)){
			HX_STACK_LINE(1575)
			::_List::ListIterator tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1575)
			{
				HX_STACK_LINE(1575)
				::List tmp25 = data->nodes->resolve(HX_HCSTRING("asset","\xf0","\x69","\x39","\x26"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1575)
				::List _this = tmp25;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1575)
				tmp24 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(1575)
			::_List::ListIterator _g = tmp24;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1575)
			while((true)){
				HX_STACK_LINE(1575)
				bool tmp25 = (_g->head != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1575)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1575)
				if ((tmp26)){
					HX_STACK_LINE(1575)
					break;
				}
				HX_STACK_LINE(1575)
				Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1575)
				{
					HX_STACK_LINE(1575)
					Dynamic tmp28 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1575)
					_g->val = tmp28;
					HX_STACK_LINE(1575)
					Dynamic tmp29 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1575)
					_g->head = tmp29;
					HX_STACK_LINE(1575)
					tmp27 = _g->val;
				}
				HX_STACK_LINE(1575)
				::haxe::xml::Fast assetNode = ((::haxe::xml::Fast)(tmp27));		HX_STACK_VAR(assetNode,"assetNode");
				HX_STACK_LINE(1576)
				bool tmp28 = (asset_list == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1576)
				if ((tmp28)){
					HX_STACK_LINE(1577)
					asset_list = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(1579)
				::Xml tmp29 = assetNode->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1579)
				::String tmp30 = ::flixel::addons::ui::U_obj::xml_str(tmp29,HX_HCSTRING("def","\xc5","\x39","\x4c","\x00"),true,null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1579)
				::String def_id = tmp30;		HX_STACK_VAR(def_id,"def_id");
				HX_STACK_LINE(1580)
				::Xml tmp31 = assetNode->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1580)
				::String tmp32 = ::flixel::addons::ui::U_obj::xml_str(tmp31,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1580)
				::String id = tmp32;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1581)
				::flixel::addons::ui::FlxUIButton asset = null();		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(1583)
				try
				{
				HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
				{
					HX_STACK_LINE(1584)
					::String tmp33 = def_id;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1584)
					::haxe::xml::Fast tmp34 = this->getDefinition(tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1584)
					::flixel::addons::ui::interfaces::IFlxUIWidget tmp35 = this->_loadButton(tmp34,false,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1584)
					asset = ((::flixel::addons::ui::FlxUIButton)(tmp35));
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::openfl::errors::Error >() ){
						HX_STACK_BEGIN_CATCH
						::openfl::errors::Error e = __e;{
							HX_STACK_LINE(1586)
							Dynamic();
						}
					}
					else {
					    HX_STACK_DO_THROW(__e);
					}
				}
				HX_STACK_LINE(1589)
				bool tmp33 = (asset != null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1589)
				if ((tmp33)){
					HX_STACK_LINE(1590)
					asset->id = id;
					HX_STACK_LINE(1591)
					bool tmp34 = (asset_list == null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1591)
					if ((tmp34)){
						HX_STACK_LINE(1592)
						asset_list = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(1594)
					::flixel::addons::ui::FlxUIButton tmp35 = asset;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1594)
					asset_list->push(tmp35);
				}
			}
		}
	}
	HX_STACK_LINE(1599)
	::flixel::addons::ui::FlxUIDropDownHeader tmp23 = ::flixel::addons::ui::FlxUIDropDownHeader_obj::__new((int)120,back_asset,label_asset,button_asset);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1599)
	::flixel::addons::ui::FlxUIDropDownHeader header = tmp23;		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(1600)
	::flixel::addons::ui::FlxUIDropDownMenu tmp24 = ::flixel::addons::ui::FlxUIDropDownMenu_obj::__new((int)0,(int)0,data_list,null(),header,panel_asset,asset_list,null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1600)
	fud = tmp24;
	HX_STACK_LINE(1602)
	::flixel::addons::ui::FlxUIDropDownMenu tmp25 = fud;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1602)
	return tmp25;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadDropDownMenu,return )

bool FlxUI_obj::_loadTest( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTest",0x9815bf9e,"flixel.addons.ui.FlxUI._loadTest","flixel/addons/ui/FlxUI.hx",1605,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1606)
	bool tmp = data->hasNode->resolve(HX_HCSTRING("load_if","\x96","\x33","\xeb","\x08"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1606)
	if ((tmp)){
		HX_STACK_LINE(1607)
		::_List::ListIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1607)
		{
			HX_STACK_LINE(1607)
			::List tmp2 = data->nodes->resolve(HX_HCSTRING("load_if","\x96","\x33","\xeb","\x08"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1607)
			::List _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1607)
			tmp1 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(1607)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1607)
		while((true)){
			HX_STACK_LINE(1607)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1607)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1607)
			if ((tmp3)){
				HX_STACK_LINE(1607)
				break;
			}
			HX_STACK_LINE(1607)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1607)
			{
				HX_STACK_LINE(1607)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1607)
				_g->val = tmp5;
				HX_STACK_LINE(1607)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1607)
				_g->head = tmp6;
				HX_STACK_LINE(1607)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(1607)
			::haxe::xml::Fast node = ((::haxe::xml::Fast)(tmp4));		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(1608)
			::Xml tmp5 = node->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1608)
			Float tmp6 = ::flixel::addons::ui::U_obj::xml_f(tmp5,HX_HCSTRING("aspect_ratio","\x24","\x04","\x8d","\xfd"),(int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1608)
			Float aspect_ratio = tmp6;		HX_STACK_VAR(aspect_ratio,"aspect_ratio");
			HX_STACK_LINE(1609)
			bool tmp7 = (aspect_ratio != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1609)
			if ((tmp7)){
				HX_STACK_LINE(1610)
				::Xml tmp8 = node->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1610)
				Float tmp9 = ::flixel::addons::ui::U_obj::xml_f(tmp8,HX_HCSTRING("tolerance","\x0d","\x3d","\x7c","\x33"),((Float)0.1));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1610)
				Float tolerance = tmp9;		HX_STACK_VAR(tolerance,"tolerance");
				HX_STACK_LINE(1611)
				int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1611)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1611)
				tmp11 = hx::TCast< ::Float >::cast(tmp10);
				HX_STACK_LINE(1611)
				int tmp12 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1611)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1611)
				tmp13 = hx::TCast< ::Float >::cast(tmp12);
				HX_STACK_LINE(1611)
				Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1611)
				Float screen_ratio = tmp14;		HX_STACK_VAR(screen_ratio,"screen_ratio");
				HX_STACK_LINE(1612)
				Float tmp15 = (screen_ratio - aspect_ratio);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1612)
				Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1612)
				Float diff = tmp16;		HX_STACK_VAR(diff,"diff");
				HX_STACK_LINE(1613)
				bool tmp17 = (diff > tolerance);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1613)
				if ((tmp17)){
					HX_STACK_LINE(1614)
					return false;
				}
			}
			HX_STACK_LINE(1618)
			::Xml tmp8 = node->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1618)
			::String tmp9 = ::flixel::addons::ui::U_obj::xml_str(tmp8,HX_HCSTRING("haxedef","\x5f","\xa1","\x7a","\x08"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1618)
			::String haxeDef = tmp9;		HX_STACK_VAR(haxeDef,"haxeDef");
			HX_STACK_LINE(1619)
			::Xml tmp10 = node->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1619)
			bool tmp11 = ::flixel::addons::ui::U_obj::xml_bool(tmp10,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),true);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1619)
			bool haxeVal = tmp11;		HX_STACK_VAR(haxeVal,"haxeVal");
			HX_STACK_LINE(1621)
			bool tmp12 = (haxeDef != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1621)
			if ((tmp12)){
				HX_STACK_LINE(1622)
				bool defValue = false;		HX_STACK_VAR(defValue,"defValue");
				HX_STACK_LINE(1623)
				::String tmp13 = haxeDef;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1623)
				::String _switch_20 = (tmp13);
				if (  ( _switch_20==HX_HCSTRING("3ds","\x82","\x0a","\x27","\x00"))){
				}
				else if (  ( _switch_20==HX_HCSTRING("wiiu","\x7e","\x6c","\xf8","\x4e"))){
				}
				else if (  ( _switch_20==HX_HCSTRING("vita","\x60","\x3f","\x4f","\x4e"))){
				}
				else if (  ( _switch_20==HX_HCSTRING("ps4","\xd1","\x60","\x55","\x00"))){
				}
				HX_STACK_LINE(1641)
				bool tmp14 = (defValue == haxeVal);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1641)
				return tmp14;
			}
		}
	}
	HX_STACK_LINE(1645)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTest,return )

::flixel::addons::ui::FlxUI FlxUI_obj::_loadLayout( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadLayout",0x9c3a10f6,"flixel.addons.ui.FlxUI._loadLayout","flixel/addons/ui/FlxUI.hx",1648,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1650)
	::haxe::xml::Fast tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1650)
	bool tmp1 = this->_loadTest(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1650)
	if ((tmp1)){
		HX_STACK_LINE(1652)
		::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1652)
		::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1652)
		::String id = tmp3;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1653)
		::haxe::xml::Fast tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1653)
		::flixel::addons::ui::interfaces::IFireTongue tmp5 = this->_ptr_tongue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1653)
		::flixel::addons::ui::FlxUI tmp6 = ::flixel::addons::ui::FlxUI_obj::__new(tmp4,hx::ObjectPtr<OBJ_>(this),hx::ObjectPtr<OBJ_>(this),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1653)
		::flixel::addons::ui::FlxUI _ui = tmp6;		HX_STACK_VAR(_ui,"_ui");
		HX_STACK_LINE(1654)
		_ui->id = id;
		HX_STACK_LINE(1656)
		::flixel::addons::ui::FlxUI tmp7 = _ui;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1656)
		return tmp7;
	}
	HX_STACK_LINE(1659)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadLayout,return )

::flixel::addons::ui::FlxUITabMenu FlxUI_obj::_loadTabMenu( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTabMenu",0x0e83bac8,"flixel.addons.ui.FlxUI._loadTabMenu","flixel/addons/ui/FlxUI.hx",1662,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1664)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1664)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("back_def","\x6d","\xf8","\x3d","\x17"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1664)
	::String back_def_str = tmp1;		HX_STACK_VAR(back_def_str,"back_def_str");
	HX_STACK_LINE(1665)
	::String tmp2 = back_def_str;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1665)
	::haxe::xml::Fast tmp3 = this->getDefinition(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1665)
	::haxe::xml::Fast back_def = tmp3;		HX_STACK_VAR(back_def,"back_def");
	HX_STACK_LINE(1666)
	bool tmp4 = (back_def == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1666)
	if ((tmp4)){
		HX_STACK_LINE(1667)
		back_def = data;
	}
	HX_STACK_LINE(1670)
	::haxe::xml::Fast tmp5 = back_def;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1670)
	::haxe::xml::Fast tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1670)
	::haxe::xml::Fast tmp7 = ::flixel::addons::ui::FlxUI_obj::consolidateData(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1670)
	back_def = tmp7;
	HX_STACK_LINE(1671)
	::haxe::xml::Fast tmp8 = back_def;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1671)
	::flixel::addons::ui::FlxUI9SliceSprite tmp9 = this->_load9SliceSprite(tmp8,HX_HCSTRING("tab_menu","\x09","\x73","\xe1","\xd6"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1671)
	::flixel::addons::ui::FlxUI9SliceSprite back = tmp9;		HX_STACK_VAR(back,"back");
	HX_STACK_LINE(1673)
	::haxe::xml::Fast tab_def = null();		HX_STACK_VAR(tab_def,"tab_def");
	HX_STACK_LINE(1675)
	::Xml tmp10 = data->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1675)
	bool tmp11 = ::flixel::addons::ui::U_obj::xml_bool(tmp10,HX_HCSTRING("stretch_tabs","\x38","\x9c","\xfc","\x5c"),false);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1675)
	bool stretch_tabs = tmp11;		HX_STACK_VAR(stretch_tabs,"stretch_tabs");
	HX_STACK_LINE(1677)
	::String stackToggled = HX_HCSTRING("front","\xa9","\x18","\x8e","\x06");		HX_STACK_VAR(stackToggled,"stackToggled");
	HX_STACK_LINE(1678)
	::String stackUntoggled = HX_HCSTRING("back","\x27","\xda","\x10","\x41");		HX_STACK_VAR(stackUntoggled,"stackUntoggled");
	HX_STACK_LINE(1680)
	bool tmp12 = data->hasNode->resolve(HX_HCSTRING("stacking","\x9a","\x62","\xb6","\x99"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1680)
	if ((tmp12)){
		HX_STACK_LINE(1681)
		::haxe::xml::Fast tmp13 = data->node->resolve(HX_HCSTRING("stacking","\x9a","\x62","\xb6","\x99"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1681)
		::Xml tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1681)
		::String tmp15 = ::flixel::addons::ui::U_obj::xml_str(tmp14,HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"),true,HX_HCSTRING("front","\xa9","\x18","\x8e","\x06"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1681)
		stackToggled = tmp15;
		HX_STACK_LINE(1682)
		::haxe::xml::Fast tmp16 = data->node->resolve(HX_HCSTRING("stacking","\x9a","\x62","\xb6","\x99"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1682)
		::Xml tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1682)
		::String tmp18 = ::flixel::addons::ui::U_obj::xml_str(tmp17,HX_HCSTRING("untoggled","\x17","\xe9","\x05","\xc8"),true,HX_HCSTRING("back","\x27","\xda","\x10","\x41"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1682)
		stackUntoggled = tmp18;
	}
	HX_STACK_LINE(1685)
	::Xml tmp13 = data->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1685)
	::String tmp14 = ::flixel::addons::ui::U_obj::xml_str(tmp13,HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1685)
	::String tab_spacing_str = tmp14;		HX_STACK_VAR(tab_spacing_str,"tab_spacing_str");
	HX_STACK_LINE(1686)
	Dynamic tab_spacing = null();		HX_STACK_VAR(tab_spacing,"tab_spacing");
	HX_STACK_LINE(1687)
	bool tmp15 = (tab_spacing_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1687)
	if ((tmp15)){
		HX_STACK_LINE(1688)
		::String tmp16 = tab_spacing_str;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1688)
		Float tmp17 = ::Std_obj::parseFloat(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1688)
		tab_spacing = tmp17;
	}
	HX_STACK_LINE(1692)
	::Xml tmp16 = data->x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1692)
	Float tmp17 = ::flixel::addons::ui::U_obj::xml_f(tmp16,HX_HCSTRING("tab_x","\xce","\xac","\xe3","\x0a"),(int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1692)
	Float tab_x = tmp17;		HX_STACK_VAR(tab_x,"tab_x");
	HX_STACK_LINE(1693)
	::Xml tmp18 = data->x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1693)
	Float tmp19 = ::flixel::addons::ui::U_obj::xml_f(tmp18,HX_HCSTRING("tab_y","\xcf","\xac","\xe3","\x0a"),(int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1693)
	Float tab_y = tmp19;		HX_STACK_VAR(tab_y,"tab_y");
	HX_STACK_LINE(1694)
	::flixel::util::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1694)
	{
		HX_STACK_LINE(1694)
		::flixel::util::FlxPool tmp21 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1694)
		::flixel::util::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1694)
		Float tmp23 = tab_x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1694)
		Float tmp24 = tab_y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1694)
		::flixel::util::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1694)
		::flixel::util::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1694)
		point->_inPool = false;
		HX_STACK_LINE(1694)
		tmp20 = point;
	}
	HX_STACK_LINE(1694)
	::flixel::util::FlxPoint tab_offset = tmp20;		HX_STACK_VAR(tab_offset,"tab_offset");
	HX_STACK_LINE(1696)
	::String tab_def_str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tab_def_str,"tab_def_str");
	HX_STACK_LINE(1698)
	bool tmp21 = data->hasNode->resolve(HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1698)
	if ((tmp21)){
		HX_STACK_LINE(1699)
		{
			HX_STACK_LINE(1699)
			::_List::ListIterator tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1699)
			{
				HX_STACK_LINE(1699)
				::List tmp23 = data->nodes->resolve(HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1699)
				::List _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1699)
				tmp22 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(1699)
			::_List::ListIterator _g = tmp22;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1699)
			while((true)){
				HX_STACK_LINE(1699)
				bool tmp23 = (_g->head != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1699)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1699)
				if ((tmp24)){
					HX_STACK_LINE(1699)
					break;
				}
				HX_STACK_LINE(1699)
				Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1699)
				{
					HX_STACK_LINE(1699)
					Dynamic tmp26 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1699)
					_g->val = tmp26;
					HX_STACK_LINE(1699)
					Dynamic tmp27 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1699)
					_g->head = tmp27;
					HX_STACK_LINE(1699)
					tmp25 = _g->val;
				}
				HX_STACK_LINE(1699)
				::haxe::xml::Fast tabNode = ((::haxe::xml::Fast)(tmp25));		HX_STACK_VAR(tabNode,"tabNode");
				HX_STACK_LINE(1700)
				::Xml tmp26 = tabNode->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1700)
				::String tmp27 = ::flixel::addons::ui::U_obj::xml_str(tmp26,HX_HCSTRING("use_def","\x8d","\xda","\xe9","\x62"),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1700)
				::String temp = tmp27;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1701)
				bool tmp28 = (temp != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1701)
				if ((tmp28)){
					HX_STACK_LINE(1702)
					tab_def_str = temp;
				}
			}
		}
		HX_STACK_LINE(1705)
		bool tmp22 = (tab_def_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1705)
		if ((tmp22)){
			HX_STACK_LINE(1706)
			::String tmp23 = tab_def_str;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1706)
			::haxe::xml::Fast tmp24 = this->getDefinition(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1706)
			tab_def = tmp24;
		}
		else{
			HX_STACK_LINE(1708)
			::haxe::xml::Fast tmp23 = data->node->resolve(HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1708)
			tab_def = tmp23;
		}
	}
	HX_STACK_LINE(1712)
	Array< ::Dynamic > list_tabs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list_tabs,"list_tabs");
	HX_STACK_LINE(1714)
	::String id = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(1716)
	bool tmp22 = data->hasNode->resolve(HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1716)
	if ((tmp22)){
		HX_STACK_LINE(1717)
		::_List::ListIterator tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1717)
		{
			HX_STACK_LINE(1717)
			::List tmp24 = data->nodes->resolve(HX_HCSTRING("tab","\x55","\x5a","\x58","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1717)
			::List _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1717)
			tmp23 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(1717)
		::_List::ListIterator _g = tmp23;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1717)
		while((true)){
			HX_STACK_LINE(1717)
			bool tmp24 = (_g->head != null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1717)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1717)
			if ((tmp25)){
				HX_STACK_LINE(1717)
				break;
			}
			HX_STACK_LINE(1717)
			Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1717)
			{
				HX_STACK_LINE(1717)
				Dynamic tmp27 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1717)
				_g->val = tmp27;
				HX_STACK_LINE(1717)
				Dynamic tmp28 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1717)
				_g->head = tmp28;
				HX_STACK_LINE(1717)
				tmp26 = _g->val;
			}
			HX_STACK_LINE(1717)
			::haxe::xml::Fast tab_node = ((::haxe::xml::Fast)(tmp26));		HX_STACK_VAR(tab_node,"tab_node");
			HX_STACK_LINE(1718)
			::Xml tmp27 = tab_node->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1718)
			::String tmp28 = ::flixel::addons::ui::U_obj::xml_str(tmp27,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1718)
			id = tmp28;
			HX_STACK_LINE(1720)
			bool tmp29 = (id != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1720)
			if ((tmp29)){
				HX_STACK_LINE(1721)
				::Xml tmp30 = tab_node->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1721)
				::String tmp31 = ::flixel::addons::ui::U_obj::xml_str(tmp30,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1721)
				::String label = tmp31;		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(1722)
				::Xml tmp32 = tab_node->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1722)
				::String tmp33 = ::flixel::addons::ui::U_obj::xml_str(tmp32,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1722)
				::String context = tmp33;		HX_STACK_VAR(context,"context");
				HX_STACK_LINE(1723)
				::Xml tmp34 = tab_node->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1723)
				::String tmp35 = ::flixel::addons::ui::U_obj::xml_str(tmp34,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1723)
				::String code = tmp35;		HX_STACK_VAR(code,"code");
				HX_STACK_LINE(1724)
				::String tmp36 = label;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1724)
				::String tmp37 = context;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1724)
				::String tmp38 = code;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1724)
				::String tmp39 = this->getText(tmp36,tmp37,true,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1724)
				label = tmp39;
				HX_STACK_LINE(1726)
				::String tmp40 = label;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1726)
				::String tmp41 = context;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1726)
				::String tmp42 = code;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1726)
				::String tmp43 = this->getText(tmp40,tmp41,true,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1726)
				label = tmp43;
				HX_STACK_LINE(1728)
				::haxe::xml::Fast tmp44 = tab_node;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1728)
				::haxe::xml::Fast tmp45 = tab_def;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1728)
				::haxe::xml::Fast tmp46 = ::flixel::addons::ui::FlxUI_obj::consolidateData(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1728)
				::haxe::xml::Fast tab_info = tmp46;		HX_STACK_VAR(tab_info,"tab_info");
				HX_STACK_LINE(1729)
				::haxe::xml::Fast tmp47 = tab_info;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1729)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp48 = this->_loadButton(tmp47,true,true,HX_HCSTRING("tab_menu","\x09","\x73","\xe1","\xd6"));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1729)
				::flixel::addons::ui::FlxUIButton tab = ((::flixel::addons::ui::FlxUIButton)(tmp48));		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(1730)
				tab->id = id;
				HX_STACK_LINE(1731)
				::flixel::addons::ui::FlxUIButton tmp49 = tab;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1731)
				list_tabs->push(tmp49);
			}
		}
	}
	HX_STACK_LINE(1736)
	bool tmp23 = (list_tabs->length > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1736)
	if ((tmp23)){
		HX_STACK_LINE(1737)
		bool tmp24 = (tab_def == null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1737)
		bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1737)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1737)
		if ((tmp25)){
			HX_STACK_LINE(1737)
			bool tmp27 = tab_def->hasNode->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1737)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1737)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1737)
			tmp26 = !(tmp29);
		}
		else{
			HX_STACK_LINE(1737)
			tmp26 = true;
		}
		HX_STACK_LINE(1737)
		if ((tmp26)){
			HX_STACK_LINE(1738)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1738)
			while((true)){
				HX_STACK_LINE(1738)
				bool tmp27 = (_g < list_tabs->length);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1738)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1738)
				if ((tmp28)){
					HX_STACK_LINE(1738)
					break;
				}
				HX_STACK_LINE(1738)
				::flixel::addons::ui::FlxUIButton tmp29 = list_tabs->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1738)
				::flixel::addons::ui::FlxUIButton t = tmp29;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1738)
				++(_g);
				HX_STACK_LINE(1739)
				t->label->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )((int)16777215);
				HX_STACK_LINE(1740)
				{
					HX_STACK_LINE(1740)
					::flixel::addons::ui::FlxUIText _this = t->label;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1740)
					int Color = (int)0;		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(1740)
					Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
					HX_STACK_LINE(1740)
					Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
					HX_STACK_LINE(1740)
					_this->set_borderStyle((int)2);
					HX_STACK_LINE(1740)
					int tmp30 = Color;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1740)
					_this->set_borderColor(tmp30);
					HX_STACK_LINE(1740)
					Float tmp31 = Size;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1740)
					_this->set_borderSize(tmp31);
					HX_STACK_LINE(1740)
					Float tmp32 = Quality;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1740)
					_this->set_borderQuality(tmp32);
				}
			}
		}
		HX_STACK_LINE(1744)
		bool tmp27 = (tab_def == null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1744)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1744)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1744)
		if ((tmp28)){
			HX_STACK_LINE(1744)
			bool tmp30 = tab_def->has->resolve(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1744)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1744)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1744)
			tmp29 = !(tmp32);
		}
		else{
			HX_STACK_LINE(1744)
			tmp29 = true;
		}
		HX_STACK_LINE(1744)
		if ((tmp29)){
			HX_STACK_LINE(1745)
			stretch_tabs = true;
		}
	}
	HX_STACK_LINE(1750)
	Array< ::String > tab_stacking = Array_obj< ::String >::__new().Add(stackToggled).Add(stackUntoggled);		HX_STACK_VAR(tab_stacking,"tab_stacking");
	HX_STACK_LINE(1752)
	::flixel::addons::ui::FlxUITabMenu tmp24 = ::flixel::addons::ui::FlxUITabMenu_obj::__new(back,list_tabs,null(),tab_offset,stretch_tabs,tab_spacing,tab_stacking);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1752)
	::flixel::addons::ui::FlxUITabMenu fg = tmp24;		HX_STACK_VAR(fg,"fg");
	HX_STACK_LINE(1754)
	bool tmp25 = data->hasNode->resolve(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1754)
	if ((tmp25)){
		HX_STACK_LINE(1755)
		::_List::ListIterator tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1755)
		{
			HX_STACK_LINE(1755)
			::List tmp27 = data->nodes->resolve(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1755)
			::List _this = tmp27;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1755)
			tmp26 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(1755)
		::_List::ListIterator _g = tmp26;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1755)
		while((true)){
			HX_STACK_LINE(1755)
			bool tmp27 = (_g->head != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1755)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1755)
			if ((tmp28)){
				HX_STACK_LINE(1755)
				break;
			}
			HX_STACK_LINE(1755)
			Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1755)
			{
				HX_STACK_LINE(1755)
				Dynamic tmp30 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1755)
				_g->val = tmp30;
				HX_STACK_LINE(1755)
				Dynamic tmp31 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1755)
				_g->head = tmp31;
				HX_STACK_LINE(1755)
				tmp29 = _g->val;
			}
			HX_STACK_LINE(1755)
			::haxe::xml::Fast group_node = ((::haxe::xml::Fast)(tmp29));		HX_STACK_VAR(group_node,"group_node");
			HX_STACK_LINE(1756)
			::Xml tmp30 = group_node->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1756)
			::String tmp31 = ::flixel::addons::ui::U_obj::xml_str(tmp30,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1756)
			id = tmp31;
			HX_STACK_LINE(1757)
			::haxe::xml::Fast tmp32 = group_node;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1757)
			::flixel::addons::ui::FlxUITabMenu tmp33 = fg;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1757)
			::flixel::addons::ui::interfaces::IFireTongue tmp34 = this->_ptr_tongue;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1757)
			::flixel::addons::ui::FlxUI tmp35 = ::flixel::addons::ui::FlxUI_obj::__new(tmp32,tmp33,hx::ObjectPtr<OBJ_>(this),tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1757)
			::flixel::addons::ui::FlxUI _ui = tmp35;		HX_STACK_VAR(_ui,"_ui");
			HX_STACK_LINE(1758)
			bool tmp36 = (list_tabs != null());		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1758)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1758)
			if ((tmp36)){
				HX_STACK_LINE(1758)
				tmp37 = (list_tabs->length > (int)0);
			}
			else{
				HX_STACK_LINE(1758)
				tmp37 = false;
			}
			HX_STACK_LINE(1758)
			if ((tmp37)){
				HX_STACK_LINE(1759)
				::flixel::addons::ui::FlxUI _g1 = _ui;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1759)
				Float tmp38 = _g1->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1759)
				::flixel::addons::ui::FlxUIButton tmp39 = list_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1759)
				Float tmp40 = tmp39->get_height();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1759)
				Float tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1759)
				_g1->set_y(tmp41);
			}
			HX_STACK_LINE(1761)
			_ui->id = id;
			HX_STACK_LINE(1762)
			::flixel::addons::ui::FlxUI tmp38 = _ui;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1762)
			fg->addGroup(tmp38);
		}
	}
	HX_STACK_LINE(1768)
	::flixel::addons::ui::FlxUITabMenu tmp26 = fg;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1768)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTabMenu,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadNumericStepper( ::haxe::xml::Fast data,hx::Null< bool >  __o_setCallback){
bool setCallback = __o_setCallback.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadNumericStepper",0x27747c10,"flixel.addons.ui.FlxUI._loadNumericStepper","flixel/addons/ui/FlxUI.hx",1771,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(setCallback,"setCallback")
{
		HX_STACK_LINE(1783)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1783)
		Float tmp1 = ::flixel::addons::ui::U_obj::xml_f(tmp,HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1783)
		Float stepSize = tmp1;		HX_STACK_VAR(stepSize,"stepSize");
		HX_STACK_LINE(1784)
		::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1784)
		Float tmp3 = ::flixel::addons::ui::U_obj::xml_f(tmp2,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1784)
		Float defaultValue = tmp3;		HX_STACK_VAR(defaultValue,"defaultValue");
		HX_STACK_LINE(1785)
		::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1785)
		Float tmp5 = ::flixel::addons::ui::U_obj::xml_f(tmp4,HX_HCSTRING("min","\x92","\x11","\x53","\x00"),(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1785)
		Float min = tmp5;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(1786)
		::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1786)
		Float tmp7 = ::flixel::addons::ui::U_obj::xml_f(tmp6,HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),(int)10);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1786)
		Float max = tmp7;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(1787)
		::Xml tmp8 = data->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1787)
		int tmp9 = ::flixel::addons::ui::U_obj::xml_i(tmp8,HX_HCSTRING("decimals","\xc2","\x4a","\x6a","\x12"),(int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1787)
		int decimals = tmp9;		HX_STACK_VAR(decimals,"decimals");
		HX_STACK_LINE(1789)
		::flixel::text::FlxText theText = null();		HX_STACK_VAR(theText,"theText");
		HX_STACK_LINE(1790)
		::flixel::addons::ui::FlxUITypedButton buttPlus = null();		HX_STACK_VAR(buttPlus,"buttPlus");
		HX_STACK_LINE(1791)
		::flixel::addons::ui::FlxUITypedButton buttMinus = null();		HX_STACK_VAR(buttMinus,"buttMinus");
		HX_STACK_LINE(1792)
		::flixel::addons::ui::FlxUISprite bkg = null();		HX_STACK_VAR(bkg,"bkg");
		HX_STACK_LINE(1794)
		bool tmp10 = data->hasNode->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1794)
		if ((tmp10)){
			HX_STACK_LINE(1795)
			::haxe::xml::Fast tmp11 = data->node->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1795)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp12 = this->_loadText(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1795)
			theText = ((::flixel::text::FlxText)(tmp12));
		}
		HX_STACK_LINE(1797)
		bool tmp11 = data->hasNode->resolve(HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1797)
		if ((tmp11)){
			HX_STACK_LINE(1798)
			::haxe::xml::Fast tmp12 = data->node->resolve(HX_HCSTRING("plus","\x5a","\x3f","\x5a","\x4a"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1798)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp13 = this->_loadButton(tmp12,null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1798)
			buttPlus = ((::flixel::addons::ui::FlxUITypedButton)(tmp13));
		}
		HX_STACK_LINE(1800)
		bool tmp12 = data->hasNode->resolve(HX_HCSTRING("minus","\x70","\x80","\x68","\x08"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1800)
		if ((tmp12)){
			HX_STACK_LINE(1801)
			::haxe::xml::Fast tmp13 = data->node->resolve(HX_HCSTRING("minus","\x70","\x80","\x68","\x08"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1801)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp14 = this->_loadButton(tmp13,null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1801)
			buttMinus = ((::flixel::addons::ui::FlxUITypedButton)(tmp14));
		}
		HX_STACK_LINE(1804)
		::flixel::addons::ui::FlxUINumericStepper tmp13 = ::flixel::addons::ui::FlxUINumericStepper_obj::__new((int)0,(int)0,stepSize,defaultValue,min,max,decimals,(int)1,theText,buttPlus,buttMinus);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1804)
		::flixel::addons::ui::FlxUINumericStepper ns = tmp13;		HX_STACK_VAR(ns,"ns");
		HX_STACK_LINE(1806)
		bool tmp14 = setCallback;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1806)
		if ((tmp14)){
			HX_STACK_LINE(1807)
			cpp::ArrayBase params;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(1807)
			{
				HX_STACK_LINE(1807)
				cpp::ArrayBase params1 = null();		HX_STACK_VAR(params1,"params1");
				HX_STACK_LINE(1807)
				bool tmp15 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1807)
				if ((tmp15)){
					HX_STACK_LINE(1807)
					params1 = Dynamic( Array_obj<Dynamic>::__new() );
					HX_STACK_LINE(1807)
					{
						HX_STACK_LINE(1807)
						::_List::ListIterator tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1807)
						{
							HX_STACK_LINE(1807)
							::List tmp17 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1807)
							::List _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1807)
							tmp16 = ::_List::ListIterator_obj::__new(_this->h);
						}
						HX_STACK_LINE(1807)
						::_List::ListIterator _g = tmp16;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1807)
						while((true)){
							HX_STACK_LINE(1807)
							bool tmp17 = (_g->head != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1807)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1807)
							if ((tmp18)){
								HX_STACK_LINE(1807)
								break;
							}
							HX_STACK_LINE(1807)
							Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1807)
							{
								HX_STACK_LINE(1807)
								Dynamic tmp20 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1807)
								_g->val = tmp20;
								HX_STACK_LINE(1807)
								Dynamic tmp21 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1807)
								_g->head = tmp21;
								HX_STACK_LINE(1807)
								tmp19 = _g->val;
							}
							HX_STACK_LINE(1807)
							::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp19));		HX_STACK_VAR(param,"param");
							HX_STACK_LINE(1807)
							bool tmp20 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1807)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1807)
							if ((tmp20)){
								HX_STACK_LINE(1807)
								tmp21 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
							}
							else{
								HX_STACK_LINE(1807)
								tmp21 = false;
							}
							HX_STACK_LINE(1807)
							if ((tmp21)){
								HX_STACK_LINE(1807)
								::String tmp22 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1807)
								::String type = tmp22;		HX_STACK_VAR(type,"type");
								HX_STACK_LINE(1807)
								::String tmp23 = type.toLowerCase();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1807)
								type = tmp23;
								HX_STACK_LINE(1807)
								::String tmp24 = type;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1807)
								::String _switch_21 = (tmp24);
								if (  ( _switch_21==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
									HX_STACK_LINE(1807)
									::String tmp25 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1807)
									::String tmp26 = ::String(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1807)
									params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
								}
								else if (  ( _switch_21==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
									HX_STACK_LINE(1807)
									::String tmp25 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1807)
									Dynamic tmp26 = ::Std_obj::parseInt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1807)
									params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
								}
								else if (  ( _switch_21==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
									HX_STACK_LINE(1807)
									::String tmp25 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1807)
									Float tmp26 = ::Std_obj::parseFloat(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1807)
									params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
								}
								else if (  ( _switch_21==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_21==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
									HX_STACK_LINE(1807)
									int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1807)
									{
										HX_STACK_LINE(1807)
										::String tmp26 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1807)
										::String str = tmp26;		HX_STACK_VAR(str,"str");
										HX_STACK_LINE(1807)
										bool safe = false;		HX_STACK_VAR(safe,"safe");
										HX_STACK_LINE(1807)
										int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
										HX_STACK_LINE(1807)
										int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
										HX_STACK_LINE(1807)
										int tmp27 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1807)
										bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1807)
										if ((tmp28)){
											HX_STACK_LINE(1807)
											bool tmp29 = safe;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1807)
											bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1807)
											if ((tmp30)){
												HX_STACK_LINE(1807)
												::String tmp31 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(1807)
												::String tmp32 = (tmp31 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(1807)
												HX_STACK_DO_THROW(tmp32);
											}
											else{
												HX_STACK_LINE(1807)
												return_val = default_color;
											}
										}
										HX_STACK_LINE(1807)
										bool tmp29 = (str.length != (int)8);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1807)
										bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1807)
										if ((tmp29)){
											HX_STACK_LINE(1807)
											tmp30 = (str.length != (int)10);
										}
										else{
											HX_STACK_LINE(1807)
											tmp30 = false;
										}
										HX_STACK_LINE(1807)
										if ((tmp30)){
											HX_STACK_LINE(1807)
											bool tmp31 = safe;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1807)
											bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1807)
											if ((tmp32)){
												HX_STACK_LINE(1807)
												::String tmp33 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1807)
												::String tmp34 = (tmp33 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1807)
												HX_STACK_DO_THROW(tmp34);
											}
											else{
												HX_STACK_LINE(1807)
												return_val = default_color;
											}
										}
										HX_STACK_LINE(1807)
										bool tmp31 = (return_val == (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1807)
										if ((tmp31)){
											HX_STACK_LINE(1807)
											int tmp32 = (str.length - (int)2);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1807)
											::String tmp33 = str.substr((int)2,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1807)
											str = tmp33;
											HX_STACK_LINE(1807)
											bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1807)
											tmp34 = (str.length == (int)6);
											HX_STACK_LINE(1807)
											if ((tmp34)){
												HX_STACK_LINE(1807)
												::String tmp35 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1807)
												str = tmp35;
											}
											HX_STACK_LINE(1807)
											int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1807)
											{
												HX_STACK_LINE(1807)
												int length = str.length;		HX_STACK_VAR(length,"length");
												HX_STACK_LINE(1807)
												int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
												HX_STACK_LINE(1807)
												int sum = (int)0;		HX_STACK_VAR(sum,"sum");
												HX_STACK_LINE(1807)
												int tmp36 = (length - (int)1);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1807)
												int i = tmp36;		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1807)
												while((true)){
													HX_STACK_LINE(1807)
													bool tmp37 = (i >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
													HX_STACK_LINE(1807)
													bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(1807)
													if ((tmp38)){
														HX_STACK_LINE(1807)
														break;
													}
													HX_STACK_LINE(1807)
													int tmp39 = i;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(1807)
													::String tmp40 = str.substr(tmp39,(int)1);		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(1807)
													::String char_hex = tmp40;		HX_STACK_VAR(char_hex,"char_hex");
													HX_STACK_LINE(1807)
													int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(1807)
													{
														HX_STACK_LINE(1807)
														int val = (int)-1;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1807)
														::String tmp42 = char_hex;		HX_STACK_VAR(tmp42,"tmp42");
														HX_STACK_LINE(1807)
														::String _switch_22 = (tmp42);
														if (  ( _switch_22==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
															HX_STACK_LINE(1807)
															::String tmp43 = char_hex;		HX_STACK_VAR(tmp43,"tmp43");
															HX_STACK_LINE(1807)
															Dynamic tmp44 = ::Std_obj::parseInt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1807)
															val = tmp44;
														}
														else if (  ( _switch_22==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
															HX_STACK_LINE(1807)
															val = (int)10;
														}
														else if (  ( _switch_22==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
															HX_STACK_LINE(1807)
															val = (int)11;
														}
														else if (  ( _switch_22==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
															HX_STACK_LINE(1807)
															val = (int)12;
														}
														else if (  ( _switch_22==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
															HX_STACK_LINE(1807)
															val = (int)13;
														}
														else if (  ( _switch_22==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
															HX_STACK_LINE(1807)
															val = (int)14;
														}
														else if (  ( _switch_22==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_22==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
															HX_STACK_LINE(1807)
															val = (int)15;
														}
														HX_STACK_LINE(1807)
														bool tmp43 = (val == (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
														HX_STACK_LINE(1807)
														if ((tmp43)){
															HX_STACK_LINE(1807)
															::String tmp44 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp44,"tmp44");
															HX_STACK_LINE(1807)
															::String tmp45 = (tmp44 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
															HX_STACK_LINE(1807)
															HX_STACK_DO_THROW(tmp45);
														}
														HX_STACK_LINE(1807)
														tmp41 = val;
													}
													HX_STACK_LINE(1807)
													int char_int = tmp41;		HX_STACK_VAR(char_int,"char_int");
													HX_STACK_LINE(1807)
													int tmp42 = (char_int * place_mult);		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(1807)
													hx::AddEq(sum,tmp42);
													HX_STACK_LINE(1807)
													hx::MultEq(place_mult,(int)16);
													HX_STACK_LINE(1807)
													(i)--;
												}
												HX_STACK_LINE(1807)
												tmp35 = sum;
											}
											HX_STACK_LINE(1807)
											return_val = tmp35;
										}
										HX_STACK_LINE(1807)
										tmp25 = return_val;
									}
									HX_STACK_LINE(1807)
									params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp25);
								}
							}
						}
					}
				}
				HX_STACK_LINE(1807)
				params = params1;
			}
			HX_STACK_LINE(1808)
			ns->set_params(params);
		}
		HX_STACK_LINE(1811)
		::flixel::addons::ui::FlxUINumericStepper tmp15 = ns;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1811)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadNumericStepper,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadButton( ::haxe::xml::Fast data,hx::Null< bool >  __o_setCallback,hx::Null< bool >  __o_isToggle,::String __o_load_code){
bool setCallback = __o_setCallback.Default(true);
bool isToggle = __o_isToggle.Default(false);
::String load_code = __o_load_code.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadButton",0x1d61c43e,"flixel.addons.ui.FlxUI._loadButton","flixel/addons/ui/FlxUI.hx",1814,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(setCallback,"setCallback")
	HX_STACK_ARG(isToggle,"isToggle")
	HX_STACK_ARG(load_code,"load_code")
{
		HX_STACK_LINE(1815)
		::String src = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(1816)
		::flixel::addons::ui::interfaces::IFlxUIButton fb = null();		HX_STACK_VAR(fb,"fb");
		HX_STACK_LINE(1818)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1818)
		Float tmp1 = ::flixel::addons::ui::U_obj::xml_f(tmp,HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"),(int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1818)
		Float resize_ratio = tmp1;		HX_STACK_VAR(resize_ratio,"resize_ratio");
		HX_STACK_LINE(1819)
		::haxe::xml::Fast tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1819)
		::flixel::util::FlxPoint tmp3 = this->_loadCompass(tmp2,HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1819)
		::flixel::util::FlxPoint resize_point = tmp3;		HX_STACK_VAR(resize_point,"resize_point");
		HX_STACK_LINE(1820)
		::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1820)
		bool tmp5 = ::flixel::addons::ui::U_obj::xml_bool(tmp4,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1820)
		bool isVis = tmp5;		HX_STACK_VAR(isVis,"isVis");
		HX_STACK_LINE(1822)
		::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1822)
		::String tmp7 = ::flixel::addons::ui::U_obj::xml_str(tmp6,HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1822)
		::String label = tmp7;		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(1824)
		::flixel::addons::ui::FlxUISprite sprite = null();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(1826)
		bool tmp8 = data->hasNode->resolve(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1826)
		if ((tmp8)){
			HX_STACK_LINE(1827)
			::haxe::xml::Fast tmp9 = data->node->resolve(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1827)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp10 = this->_loadThing(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1827)
			sprite = ((::flixel::addons::ui::FlxUISprite)(tmp10));
		}
		HX_STACK_LINE(1830)
		::Xml tmp9 = data->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1830)
		::String tmp10 = ::flixel::addons::ui::U_obj::xml_str(tmp9,HX_HCSTRING("context","\xef","\x95","\x77","\x19"),true,HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1830)
		::String context = tmp10;		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(1831)
		::Xml tmp11 = data->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1831)
		::String tmp12 = ::flixel::addons::ui::U_obj::xml_str(tmp11,HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1831)
		::String code = tmp12;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(1833)
		::String tmp13 = label;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1833)
		::String tmp14 = context;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1833)
		::String tmp15 = code;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1833)
		::String tmp16 = this->getText(tmp13,tmp14,true,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1833)
		label = tmp16;
		HX_STACK_LINE(1835)
		::haxe::xml::Fast tmp17 = data;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1835)
		Float tmp18 = this->_loadWidth(tmp17,(int)0,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1835)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1835)
		int W = tmp19;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(1836)
		::haxe::xml::Fast tmp20 = data;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1836)
		Float tmp21 = this->_loadHeight(tmp20,(int)0,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1836)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1836)
		int H = tmp22;		HX_STACK_VAR(H,"H");
		HX_STACK_LINE(1838)
		cpp::ArrayBase params;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(1838)
		{
			HX_STACK_LINE(1838)
			cpp::ArrayBase params1 = null();		HX_STACK_VAR(params1,"params1");
			HX_STACK_LINE(1838)
			bool tmp23 = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1838)
			if ((tmp23)){
				HX_STACK_LINE(1838)
				params1 = Dynamic( Array_obj<Dynamic>::__new() );
				HX_STACK_LINE(1838)
				{
					HX_STACK_LINE(1838)
					::_List::ListIterator tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1838)
					{
						HX_STACK_LINE(1838)
						::List tmp25 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1838)
						::List _this = tmp25;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1838)
						tmp24 = ::_List::ListIterator_obj::__new(_this->h);
					}
					HX_STACK_LINE(1838)
					::_List::ListIterator _g = tmp24;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1838)
					while((true)){
						HX_STACK_LINE(1838)
						bool tmp25 = (_g->head != null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1838)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1838)
						if ((tmp26)){
							HX_STACK_LINE(1838)
							break;
						}
						HX_STACK_LINE(1838)
						Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1838)
						{
							HX_STACK_LINE(1838)
							Dynamic tmp28 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1838)
							_g->val = tmp28;
							HX_STACK_LINE(1838)
							Dynamic tmp29 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1838)
							_g->head = tmp29;
							HX_STACK_LINE(1838)
							tmp27 = _g->val;
						}
						HX_STACK_LINE(1838)
						::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp27));		HX_STACK_VAR(param,"param");
						HX_STACK_LINE(1838)
						bool tmp28 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1838)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1838)
						if ((tmp28)){
							HX_STACK_LINE(1838)
							tmp29 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
						}
						else{
							HX_STACK_LINE(1838)
							tmp29 = false;
						}
						HX_STACK_LINE(1838)
						if ((tmp29)){
							HX_STACK_LINE(1838)
							::String tmp30 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1838)
							::String type = tmp30;		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(1838)
							::String tmp31 = type.toLowerCase();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1838)
							type = tmp31;
							HX_STACK_LINE(1838)
							::String tmp32 = type;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1838)
							::String _switch_23 = (tmp32);
							if (  ( _switch_23==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
								HX_STACK_LINE(1838)
								::String tmp33 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1838)
								::String tmp34 = ::String(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1838)
								params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp34);
							}
							else if (  ( _switch_23==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
								HX_STACK_LINE(1838)
								::String tmp33 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1838)
								Dynamic tmp34 = ::Std_obj::parseInt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1838)
								params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp34);
							}
							else if (  ( _switch_23==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
								HX_STACK_LINE(1838)
								::String tmp33 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1838)
								Float tmp34 = ::Std_obj::parseFloat(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1838)
								params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp34);
							}
							else if (  ( _switch_23==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_23==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
								HX_STACK_LINE(1838)
								int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1838)
								{
									HX_STACK_LINE(1838)
									::String tmp34 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1838)
									::String str = tmp34;		HX_STACK_VAR(str,"str");
									HX_STACK_LINE(1838)
									bool safe = false;		HX_STACK_VAR(safe,"safe");
									HX_STACK_LINE(1838)
									int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
									HX_STACK_LINE(1838)
									int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
									HX_STACK_LINE(1838)
									int tmp35 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1838)
									bool tmp36 = (tmp35 != (int)0);		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1838)
									if ((tmp36)){
										HX_STACK_LINE(1838)
										bool tmp37 = safe;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1838)
										bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1838)
										if ((tmp38)){
											HX_STACK_LINE(1838)
											::String tmp39 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1838)
											::String tmp40 = (tmp39 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1838)
											HX_STACK_DO_THROW(tmp40);
										}
										else{
											HX_STACK_LINE(1838)
											return_val = default_color;
										}
									}
									HX_STACK_LINE(1838)
									bool tmp37 = (str.length != (int)8);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1838)
									bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1838)
									if ((tmp37)){
										HX_STACK_LINE(1838)
										tmp38 = (str.length != (int)10);
									}
									else{
										HX_STACK_LINE(1838)
										tmp38 = false;
									}
									HX_STACK_LINE(1838)
									if ((tmp38)){
										HX_STACK_LINE(1838)
										bool tmp39 = safe;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1838)
										bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1838)
										if ((tmp40)){
											HX_STACK_LINE(1838)
											::String tmp41 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1838)
											::String tmp42 = (tmp41 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1838)
											HX_STACK_DO_THROW(tmp42);
										}
										else{
											HX_STACK_LINE(1838)
											return_val = default_color;
										}
									}
									HX_STACK_LINE(1838)
									bool tmp39 = (return_val == (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1838)
									if ((tmp39)){
										HX_STACK_LINE(1838)
										int tmp40 = (str.length - (int)2);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1838)
										::String tmp41 = str.substr((int)2,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1838)
										str = tmp41;
										HX_STACK_LINE(1838)
										bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1838)
										tmp42 = (str.length == (int)6);
										HX_STACK_LINE(1838)
										if ((tmp42)){
											HX_STACK_LINE(1838)
											::String tmp43 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1838)
											str = tmp43;
										}
										HX_STACK_LINE(1838)
										int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1838)
										{
											HX_STACK_LINE(1838)
											int length = str.length;		HX_STACK_VAR(length,"length");
											HX_STACK_LINE(1838)
											int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
											HX_STACK_LINE(1838)
											int sum = (int)0;		HX_STACK_VAR(sum,"sum");
											HX_STACK_LINE(1838)
											int tmp44 = (length - (int)1);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1838)
											int i = tmp44;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1838)
											while((true)){
												HX_STACK_LINE(1838)
												bool tmp45 = (i >= (int)0);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1838)
												bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1838)
												if ((tmp46)){
													HX_STACK_LINE(1838)
													break;
												}
												HX_STACK_LINE(1838)
												int tmp47 = i;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1838)
												::String tmp48 = str.substr(tmp47,(int)1);		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1838)
												::String char_hex = tmp48;		HX_STACK_VAR(char_hex,"char_hex");
												HX_STACK_LINE(1838)
												int tmp49;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1838)
												{
													HX_STACK_LINE(1838)
													int val = (int)-1;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(1838)
													::String tmp50 = char_hex;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(1838)
													::String _switch_24 = (tmp50);
													if (  ( _switch_24==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
														HX_STACK_LINE(1838)
														::String tmp51 = char_hex;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(1838)
														Dynamic tmp52 = ::Std_obj::parseInt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(1838)
														val = tmp52;
													}
													else if (  ( _switch_24==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
														HX_STACK_LINE(1838)
														val = (int)10;
													}
													else if (  ( _switch_24==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
														HX_STACK_LINE(1838)
														val = (int)11;
													}
													else if (  ( _switch_24==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
														HX_STACK_LINE(1838)
														val = (int)12;
													}
													else if (  ( _switch_24==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
														HX_STACK_LINE(1838)
														val = (int)13;
													}
													else if (  ( _switch_24==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
														HX_STACK_LINE(1838)
														val = (int)14;
													}
													else if (  ( _switch_24==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_24==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
														HX_STACK_LINE(1838)
														val = (int)15;
													}
													HX_STACK_LINE(1838)
													bool tmp51 = (val == (int)-1);		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(1838)
													if ((tmp51)){
														HX_STACK_LINE(1838)
														::String tmp52 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(1838)
														::String tmp53 = (tmp52 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(1838)
														HX_STACK_DO_THROW(tmp53);
													}
													HX_STACK_LINE(1838)
													tmp49 = val;
												}
												HX_STACK_LINE(1838)
												int char_int = tmp49;		HX_STACK_VAR(char_int,"char_int");
												HX_STACK_LINE(1838)
												int tmp50 = (char_int * place_mult);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1838)
												hx::AddEq(sum,tmp50);
												HX_STACK_LINE(1838)
												hx::MultEq(place_mult,(int)16);
												HX_STACK_LINE(1838)
												(i)--;
											}
											HX_STACK_LINE(1838)
											tmp43 = sum;
										}
										HX_STACK_LINE(1838)
										return_val = tmp43;
									}
									HX_STACK_LINE(1838)
									tmp33 = return_val;
								}
								HX_STACK_LINE(1838)
								params1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp33);
							}
						}
					}
				}
			}
			HX_STACK_LINE(1838)
			params = params1;
		}
		HX_STACK_LINE(1840)
		bool tmp23 = (sprite == null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1840)
		if ((tmp23)){
			HX_STACK_LINE(1841)
			::flixel::addons::ui::FlxUIButton tmp24 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,label,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1841)
			fb = tmp24;
		}
		else{
			HX_STACK_LINE(1843)
			::flixel::group::FlxSpriteGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
			HX_STACK_LINE(1845)
			bool tmp24 = (label != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1845)
			if ((tmp24)){
				HX_STACK_LINE(1848)
				::flixel::addons::ui::FlxUIText tmp25 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)80,label,(int)8,null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1848)
				::flixel::addons::ui::FlxUIText labelTxt = tmp25;		HX_STACK_VAR(labelTxt,"labelTxt");
				HX_STACK_LINE(1849)
				labelTxt->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
				HX_STACK_LINE(1851)
				::flixel::group::FlxSpriteGroup tmp26 = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1851)
				tempGroup = tmp26;
				HX_STACK_LINE(1853)
				::flixel::addons::ui::FlxUISprite tmp27 = sprite;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1853)
				tempGroup->add(tmp27);
				HX_STACK_LINE(1854)
				::flixel::addons::ui::FlxUIText tmp28 = labelTxt;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1854)
				tempGroup->add(tmp28);
				HX_STACK_LINE(1856)
				::flixel::addons::ui::FlxUISpriteButton tmp29 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,tempGroup,null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1856)
				fb = tmp29;
			}
			else{
				HX_STACK_LINE(1860)
				::flixel::addons::ui::FlxUISpriteButton tmp25 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,sprite,null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1860)
				fb = tmp25;
			}
		}
		HX_STACK_LINE(1863)
		fb->__FieldRef(HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f")) = resize_ratio;
		HX_STACK_LINE(1864)
		fb->__FieldRef(HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71")) = resize_point;
		HX_STACK_LINE(1866)
		bool tmp24 = setCallback;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1866)
		if ((tmp24)){
			HX_STACK_LINE(1867)
			fb->__Field(HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"), hx::paccDynamic )(params);
		}
		HX_STACK_LINE(1872)
		bool tmp25 = data->hasNode->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1872)
		if ((tmp25)){
			HX_STACK_LINE(1874)
			::haxe::xml::Fast tmp26 = data->node->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1874)
			::Xml tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1874)
			bool tmp28 = ::flixel::addons::ui::U_obj::xml_bool(tmp27,HX_HCSTRING("blank","\x54","\xdf","\xf1","\xb4"),null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1874)
			bool blank = tmp28;		HX_STACK_VAR(blank,"blank");
			HX_STACK_LINE(1876)
			bool tmp29 = blank;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1876)
			if ((tmp29)){
				HX_STACK_LINE(1881)
				int tmp30 = W;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1881)
				int tmp31 = H;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1881)
				Float tmp32 = resize_ratio;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1881)
				fb->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")),tmp30,tmp31,null(),(int)0,tmp32,null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(1886)
				Array< ::String > graphic_ids = null();		HX_STACK_VAR(graphic_ids,"graphic_ids");
				HX_STACK_LINE(1887)
				Array< ::Dynamic > slice9_ids = null();		HX_STACK_VAR(slice9_ids,"slice9_ids");
				HX_STACK_LINE(1888)
				Array< int > frames = null();		HX_STACK_VAR(frames,"frames");
				HX_STACK_LINE(1890)
				bool tmp30 = isToggle;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1890)
				if ((tmp30)){
					HX_STACK_LINE(1891)
					graphic_ids = Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(1892)
					slice9_ids = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
				}
				else{
					HX_STACK_LINE(1894)
					graphic_ids = Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(1895)
					slice9_ids = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
				}
				HX_STACK_LINE(1899)
				::haxe::xml::Fast tmp31 = data->node->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1899)
				::Xml tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1899)
				int tmp33 = ::flixel::addons::ui::U_obj::xml_i(tmp32,HX_HCSTRING("src_w","\x1c","\x7b","\xba","\x82"),(int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1899)
				int src_w = tmp33;		HX_STACK_VAR(src_w,"src_w");
				HX_STACK_LINE(1900)
				::haxe::xml::Fast tmp34 = data->node->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1900)
				::Xml tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1900)
				int tmp36 = ::flixel::addons::ui::U_obj::xml_i(tmp35,HX_HCSTRING("src_h","\x0d","\x7b","\xba","\x82"),(int)0);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1900)
				int src_h = tmp36;		HX_STACK_VAR(src_h,"src_h");
				HX_STACK_LINE(1901)
				int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1901)
				{
					HX_STACK_LINE(1901)
					::haxe::xml::Fast tmp38 = data->node->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1901)
					::haxe::xml::Fast data1 = tmp38;		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(1901)
					::Xml tmp39 = data1->x;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1901)
					::String tmp40 = ::flixel::addons::ui::U_obj::xml_str(tmp39,HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1901)
					::String tileStr = tmp40;		HX_STACK_VAR(tileStr,"tileStr");
					HX_STACK_LINE(1901)
					int tile = (int)0;		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(1901)
					::String tmp41 = tileStr;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1901)
					::String _switch_25 = (tmp41);
					if (  ( _switch_25==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d")) ||  ( _switch_25==HX_HCSTRING("both","\x81","\x88","\x1b","\x41")) ||  ( _switch_25==HX_HCSTRING("all","\x21","\xf9","\x49","\x00")) ||  ( _switch_25==HX_HCSTRING("hv","\x0e","\x5b","\x00","\x00")) ||  ( _switch_25==HX_HCSTRING("vh","\x32","\x67","\x00","\x00"))){
						HX_STACK_LINE(1901)
						tile = (int)17;
					}
					else if (  ( _switch_25==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_25==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
						HX_STACK_LINE(1901)
						tile = (int)16;
					}
					else if (  ( _switch_25==HX_HCSTRING("v","\x76","\x00","\x00","\x00")) ||  ( _switch_25==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
						HX_STACK_LINE(1901)
						tile = (int)1;
					}
					HX_STACK_LINE(1901)
					tmp37 = tile;
				}
				HX_STACK_LINE(1901)
				int tile = tmp37;		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(1904)
				::haxe::xml::Fast tmp38 = data->node->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1904)
				::Xml tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1904)
				::String tmp40 = ::flixel::addons::ui::U_obj::xml_str(tmp39,HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),true,null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1904)
				::String frame_str = tmp40;		HX_STACK_VAR(frame_str,"frame_str");
				HX_STACK_LINE(1905)
				bool tmp41 = (frame_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1905)
				if ((tmp41)){
					HX_STACK_LINE(1906)
					frames = Array_obj< int >::__new();
					HX_STACK_LINE(1907)
					Array< ::String > arr = frame_str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(1908)
					{
						HX_STACK_LINE(1908)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1908)
						while((true)){
							HX_STACK_LINE(1908)
							bool tmp42 = (_g < arr->length);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1908)
							bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1908)
							if ((tmp43)){
								HX_STACK_LINE(1908)
								break;
							}
							HX_STACK_LINE(1908)
							::String tmp44 = arr->__get(_g);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1908)
							::String numstr = tmp44;		HX_STACK_VAR(numstr,"numstr");
							HX_STACK_LINE(1908)
							++(_g);
							HX_STACK_LINE(1909)
							::String tmp45 = numstr;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1909)
							Dynamic tmp46 = ::Std_obj::parseInt(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1909)
							frames->push(tmp46);
						}
					}
				}
				HX_STACK_LINE(1913)
				{
					HX_STACK_LINE(1913)
					::_List::ListIterator tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1913)
					{
						HX_STACK_LINE(1913)
						::List tmp43 = data->nodes->resolve(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1913)
						::List _this = tmp43;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1913)
						tmp42 = ::_List::ListIterator_obj::__new(_this->h);
					}
					HX_STACK_LINE(1913)
					::_List::ListIterator _g = tmp42;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1913)
					while((true)){
						HX_STACK_LINE(1913)
						bool tmp43 = (_g->head != null());		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1913)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1913)
						if ((tmp44)){
							HX_STACK_LINE(1913)
							break;
						}
						HX_STACK_LINE(1913)
						Dynamic tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1913)
						{
							HX_STACK_LINE(1913)
							Dynamic tmp46 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1913)
							_g->val = tmp46;
							HX_STACK_LINE(1913)
							Dynamic tmp47 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1913)
							_g->head = tmp47;
							HX_STACK_LINE(1913)
							tmp45 = _g->val;
						}
						HX_STACK_LINE(1913)
						::haxe::xml::Fast graphicNode = ((::haxe::xml::Fast)(tmp45));		HX_STACK_VAR(graphicNode,"graphicNode");
						HX_STACK_LINE(1914)
						::Xml tmp46 = graphicNode->x;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1914)
						::String tmp47 = ::flixel::addons::ui::U_obj::xml_str(tmp46,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1914)
						::String graphic_id = tmp47;		HX_STACK_VAR(graphic_id,"graphic_id");
						HX_STACK_LINE(1915)
						::Xml tmp48 = graphicNode->x;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(1915)
						::String tmp49 = ::flixel::addons::ui::U_obj::xml_str(tmp48,HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),null(),null());		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(1915)
						::String image = tmp49;		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(1916)
						::Xml tmp50 = graphicNode->x;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(1916)
						::String tmp51 = ::flixel::addons::ui::U_obj::xml_str(tmp50,HX_HCSTRING("slice9","\xa7","\x03","\x04","\x70"),null(),null());		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(1916)
						Array< int > slice9 = ::flixel::util::FlxStringUtil_obj::toIntArray(tmp51);		HX_STACK_VAR(slice9,"slice9");
						HX_STACK_LINE(1917)
						int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(1917)
						{
							HX_STACK_LINE(1917)
							::Xml tmp53 = graphicNode->x;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1917)
							::String tmp54 = ::flixel::addons::ui::U_obj::xml_str(tmp53,HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1917)
							::String tileStr = tmp54;		HX_STACK_VAR(tileStr,"tileStr");
							HX_STACK_LINE(1917)
							int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
							HX_STACK_LINE(1917)
							::String tmp55 = tileStr;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1917)
							::String _switch_26 = (tmp55);
							if (  ( _switch_26==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d")) ||  ( _switch_26==HX_HCSTRING("both","\x81","\x88","\x1b","\x41")) ||  ( _switch_26==HX_HCSTRING("all","\x21","\xf9","\x49","\x00")) ||  ( _switch_26==HX_HCSTRING("hv","\x0e","\x5b","\x00","\x00")) ||  ( _switch_26==HX_HCSTRING("vh","\x32","\x67","\x00","\x00"))){
								HX_STACK_LINE(1917)
								tile1 = (int)17;
							}
							else if (  ( _switch_26==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_26==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
								HX_STACK_LINE(1917)
								tile1 = (int)16;
							}
							else if (  ( _switch_26==HX_HCSTRING("v","\x76","\x00","\x00","\x00")) ||  ( _switch_26==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
								HX_STACK_LINE(1917)
								tile1 = (int)1;
							}
							HX_STACK_LINE(1917)
							tmp52 = tile1;
						}
						HX_STACK_LINE(1917)
						tile = tmp52;
						HX_STACK_LINE(1919)
						::Xml tmp53 = graphicNode->x;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(1919)
						bool tmp54 = ::flixel::addons::ui::U_obj::xml_bool(tmp53,HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"),null());		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(1919)
						bool toggleState = tmp54;		HX_STACK_VAR(toggleState,"toggleState");
						HX_STACK_LINE(1920)
						bool tmp55 = toggleState;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(1920)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(1920)
						if ((tmp55)){
							HX_STACK_LINE(1920)
							tmp56 = isToggle;
						}
						else{
							HX_STACK_LINE(1920)
							tmp56 = false;
						}
						HX_STACK_LINE(1920)
						toggleState = tmp56;
						HX_STACK_LINE(1922)
						::String tmp57 = graphic_id;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(1922)
						::String _switch_27 = (tmp57);
						if (  ( _switch_27==HX_HCSTRING("inactive","\x6b","\x17","\x30","\x6a")) ||  ( _switch_27==HX_HCSTRING("","\x00","\x00","\x00","\x00")) ||  ( _switch_27==HX_HCSTRING("normal","\x27","\x72","\x69","\x30")) ||  ( _switch_27==HX_HCSTRING("up","\x5b","\x66","\x00","\x00"))){
							HX_STACK_LINE(1924)
							bool tmp58 = (image != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1924)
							if ((tmp58)){
								HX_STACK_LINE(1925)
								bool tmp59 = toggleState;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1925)
								bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1925)
								if ((tmp60)){
									HX_STACK_LINE(1926)
									::String tmp61 = image;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1926)
									::String tmp62 = ::flixel::addons::ui::U_obj::gfx(tmp61,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1926)
									graphic_ids[(int)0] = tmp62;
								}
								else{
									HX_STACK_LINE(1928)
									::String tmp61 = image;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1928)
									::String tmp62 = ::flixel::addons::ui::U_obj::gfx(tmp61,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1928)
									graphic_ids[(int)3] = tmp62;
								}
							}
							HX_STACK_LINE(1931)
							slice9_ids[(int)0] = slice9;
						}
						else if (  ( _switch_27==HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) ||  ( _switch_27==HX_HCSTRING("highlight","\x34","\x56","\x00","\xed")) ||  ( _switch_27==HX_HCSTRING("hilight","\x35","\xb2","\x2d","\x55")) ||  ( _switch_27==HX_HCSTRING("over","\x54","\x91","\xb8","\x49")) ||  ( _switch_27==HX_HCSTRING("hover","\xbc","\xe5","\x64","\x2b"))){
							HX_STACK_LINE(1933)
							bool tmp58 = (image != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1933)
							if ((tmp58)){
								HX_STACK_LINE(1934)
								bool tmp59 = toggleState;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1934)
								bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1934)
								if ((tmp60)){
									HX_STACK_LINE(1935)
									::String tmp61 = image;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1935)
									::String tmp62 = ::flixel::addons::ui::U_obj::gfx(tmp61,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1935)
									graphic_ids[(int)1] = tmp62;
								}
								else{
									HX_STACK_LINE(1937)
									::String tmp61 = image;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1937)
									::String tmp62 = ::flixel::addons::ui::U_obj::gfx(tmp61,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1937)
									graphic_ids[(int)4] = tmp62;
								}
							}
							HX_STACK_LINE(1940)
							slice9_ids[(int)1] = slice9;
						}
						else if (  ( _switch_27==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) ||  ( _switch_27==HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")) ||  ( _switch_27==HX_HCSTRING("pushed","\xb9","\x14","\x2d","\x72"))){
							HX_STACK_LINE(1942)
							bool tmp58 = (image != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1942)
							if ((tmp58)){
								HX_STACK_LINE(1943)
								bool tmp59 = toggleState;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1943)
								bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1943)
								if ((tmp60)){
									HX_STACK_LINE(1944)
									::String tmp61 = image;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1944)
									::String tmp62 = ::flixel::addons::ui::U_obj::gfx(tmp61,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1944)
									graphic_ids[(int)2] = tmp62;
								}
								else{
									HX_STACK_LINE(1946)
									::String tmp61 = image;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(1946)
									::String tmp62 = ::flixel::addons::ui::U_obj::gfx(tmp61,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(1946)
									graphic_ids[(int)5] = tmp62;
								}
							}
							HX_STACK_LINE(1949)
							slice9_ids[(int)2] = slice9;
						}
						else if (  ( _switch_27==HX_HCSTRING("all","\x21","\xf9","\x49","\x00"))){
							HX_STACK_LINE(1951)
							bool tmp58 = (image != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(1951)
							if ((tmp58)){
								HX_STACK_LINE(1952)
								::String tmp59 = image;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(1952)
								::String tmp60 = ::flixel::addons::ui::U_obj::gfx(tmp59,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(1952)
								graphic_ids = Array_obj< ::String >::__new().Add(tmp60);
							}
							HX_STACK_LINE(1954)
							slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9);
							HX_STACK_LINE(1955)
							bool tmp59 = (src_w == (int)0);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(1955)
							bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1955)
							bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(1955)
							if ((tmp60)){
								HX_STACK_LINE(1955)
								tmp61 = (src_h == (int)0);
							}
							else{
								HX_STACK_LINE(1955)
								tmp61 = true;
							}
							HX_STACK_LINE(1955)
							if ((tmp61)){
								HX_STACK_LINE(1956)
								::String tmp62 = graphic_ids->__get((int)0);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1956)
								::openfl::_legacy::display::BitmapData tmp63 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp62,null());		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1956)
								::openfl::_legacy::display::BitmapData temp = tmp63;		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(1957)
								int tmp64 = temp->get_width();		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1957)
								src_w = tmp64;
								HX_STACK_LINE(1958)
								bool tmp65 = isToggle;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1958)
								if ((tmp65)){
									HX_STACK_LINE(1959)
									int tmp66 = temp->get_height();		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1959)
									Float tmp67 = (Float(tmp66) / Float((int)6));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1959)
									int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1959)
									src_h = tmp68;
								}
								else{
									HX_STACK_LINE(1961)
									int tmp66 = temp->get_height();		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1961)
									Float tmp67 = (Float(tmp66) / Float((int)3));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1961)
									int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1961)
									src_h = tmp68;
								}
							}
						}
						HX_STACK_LINE(1966)
						::String tmp58 = graphic_ids->__get((int)0);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(1966)
						bool tmp59 = (tmp58 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(1966)
						if ((tmp59)){
							HX_STACK_LINE(1967)
							bool tmp60 = (graphic_ids->length >= (int)3);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(1967)
							if ((tmp60)){
								HX_STACK_LINE(1968)
								::String tmp61 = graphic_ids->__get((int)1);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(1968)
								bool tmp62 = (tmp61 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(1968)
								if ((tmp62)){
									HX_STACK_LINE(1969)
									::String tmp63 = graphic_ids->__get((int)0);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(1969)
									graphic_ids[(int)1] = tmp63;
								}
								HX_STACK_LINE(1971)
								::String tmp63 = graphic_ids->__get((int)2);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(1971)
								bool tmp64 = (tmp63 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(1971)
								if ((tmp64)){
									HX_STACK_LINE(1972)
									::String tmp65 = graphic_ids->__get((int)1);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(1972)
									graphic_ids[(int)2] = tmp65;
								}
								HX_STACK_LINE(1974)
								bool tmp65 = (graphic_ids->length >= (int)6);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(1974)
								if ((tmp65)){
									HX_STACK_LINE(1975)
									::String tmp66 = graphic_ids->__get((int)3);		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(1975)
									bool tmp67 = (tmp66 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(1975)
									if ((tmp67)){
										HX_STACK_LINE(1976)
										::String tmp68 = graphic_ids->__get((int)0);		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(1976)
										graphic_ids[(int)3] = tmp68;
									}
									HX_STACK_LINE(1978)
									::String tmp68 = graphic_ids->__get((int)4);		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(1978)
									bool tmp69 = (tmp68 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(1978)
									if ((tmp69)){
										HX_STACK_LINE(1979)
										::String tmp70 = graphic_ids->__get((int)1);		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(1979)
										graphic_ids[(int)4] = tmp70;
									}
									HX_STACK_LINE(1981)
									::String tmp70 = graphic_ids->__get((int)5);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(1981)
									bool tmp71 = (tmp70 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(1981)
									if ((tmp71)){
										HX_STACK_LINE(1982)
										::String tmp72 = graphic_ids->__get((int)2);		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(1982)
										graphic_ids[(int)5] = tmp72;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(1990)
				int tmp42 = W;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1990)
				int tmp43 = H;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1990)
				int tmp44 = tile;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1990)
				Float tmp45 = resize_ratio;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1990)
				bool tmp46 = isToggle;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1990)
				int tmp47 = src_w;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1990)
				int tmp48 = src_h;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1990)
				fb->loadGraphicSlice9(graphic_ids,tmp42,tmp43,slice9_ids,tmp44,tmp45,tmp46,tmp47,tmp48,frames);
			}
		}
		else{
			HX_STACK_LINE(1993)
			bool tmp26 = (load_code == HX_HCSTRING("tab_menu","\x09","\x73","\xe1","\xd6"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1993)
			if ((tmp26)){
				HX_STACK_LINE(1995)
				Array< ::String > graphic_ids = Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04"));		HX_STACK_VAR(graphic_ids,"graphic_ids");
				HX_STACK_LINE(1996)
				Array< int > slice9_tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07"));		HX_STACK_VAR(slice9_tab,"slice9_tab");
				HX_STACK_LINE(1997)
				Array< ::Dynamic > slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab);		HX_STACK_VAR(slice9_ids,"slice9_ids");
				HX_STACK_LINE(2000)
				::flixel::addons::ui::interfaces::IFlxUIButton tmp27 = fb;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2000)
				bool tmp28 = ::Std_obj::is(tmp27,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2000)
				if ((tmp28)){
					HX_STACK_LINE(2001)
					::flixel::addons::ui::FlxUIButton fbui = ((::flixel::addons::ui::FlxUIButton)(fb));		HX_STACK_VAR(fbui,"fbui");
					HX_STACK_LINE(2002)
					int tmp29 = W;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2002)
					int tmp30 = H;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2002)
					Float tmp31 = resize_ratio;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2002)
					bool tmp32 = isToggle;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2002)
					fbui->loadGraphicSlice9(graphic_ids,tmp29,tmp30,slice9_ids,(int)0,tmp31,tmp32,null(),null(),null());
				}
				else{
					HX_STACK_LINE(2003)
					::flixel::addons::ui::interfaces::IFlxUIButton tmp29 = fb;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2003)
					bool tmp30 = ::Std_obj::is(tmp29,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2003)
					if ((tmp30)){
						HX_STACK_LINE(2004)
						::flixel::addons::ui::FlxUISpriteButton fbuis = ((::flixel::addons::ui::FlxUISpriteButton)(fb));		HX_STACK_VAR(fbuis,"fbuis");
						HX_STACK_LINE(2005)
						int tmp31 = W;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2005)
						int tmp32 = H;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2005)
						Float tmp33 = resize_ratio;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2005)
						bool tmp34 = isToggle;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2005)
						fbuis->loadGraphicSlice9(graphic_ids,tmp31,tmp32,slice9_ids,(int)0,tmp33,tmp34,null(),null(),null());
					}
					else{
						HX_STACK_LINE(2007)
						int tmp31 = W;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2007)
						int tmp32 = H;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2007)
						Float tmp33 = resize_ratio;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2007)
						bool tmp34 = isToggle;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2007)
						fb->loadGraphicSlice9(graphic_ids,tmp31,tmp32,slice9_ids,(int)0,tmp33,tmp34,null(),null(),null());
					}
				}
			}
			else{
				HX_STACK_LINE(2011)
				bool tmp27 = (W > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2011)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2011)
				if ((tmp27)){
					HX_STACK_LINE(2011)
					tmp28 = (H > (int)0);
				}
				else{
					HX_STACK_LINE(2011)
					tmp28 = false;
				}
				HX_STACK_LINE(2011)
				if ((tmp28)){
					HX_STACK_LINE(2012)
					int tmp29 = W;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2012)
					int tmp30 = H;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2012)
					Float tmp31 = resize_ratio;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2012)
					bool tmp32 = isToggle;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2012)
					fb->loadGraphicSlice9(null(),tmp29,tmp30,null(),(int)0,tmp31,tmp32,null(),null(),null());
				}
			}
		}
		HX_STACK_LINE(2019)
		bool tmp26 = (sprite == null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2019)
		if ((tmp26)){
			HX_STACK_LINE(2020)
			bool tmp27 = (data != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2020)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2020)
			if ((tmp27)){
				HX_STACK_LINE(2020)
				tmp28 = data->hasNode->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
			}
			else{
				HX_STACK_LINE(2020)
				tmp28 = false;
			}
			HX_STACK_LINE(2020)
			if ((tmp28)){
				HX_STACK_LINE(2021)
				::haxe::xml::Fast tmp29 = data;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2021)
				::flixel::addons::ui::interfaces::IFlxUIButton tmp30 = fb;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2021)
				this->formatButtonText(tmp29,tmp30);
			}
			else{
				HX_STACK_LINE(2023)
				bool tmp29 = (load_code == HX_HCSTRING("tab_menu","\x09","\x73","\xe1","\xd6"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2023)
				if ((tmp29)){
					HX_STACK_LINE(2024)
					fb->__FieldRef(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b")) = (int)16777215;
					HX_STACK_LINE(2025)
					fb->__FieldRef(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e")) = (int)16777215;
					HX_STACK_LINE(2026)
					fb->__FieldRef(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7")) = (int)16777215;
					HX_STACK_LINE(2027)
					fb->__FieldRef(HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd")) = (int)16777215;
					HX_STACK_LINE(2028)
					fb->__FieldRef(HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06")) = (int)16777215;
					HX_STACK_LINE(2029)
					fb->__FieldRef(HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa")) = (int)16777215;
				}
				else{
					HX_STACK_LINE(2033)
					fb->autoCenterLabel();
				}
			}
		}
		HX_STACK_LINE(2038)
		bool tmp27 = (sprite != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(2038)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(2038)
		if ((tmp27)){
			HX_STACK_LINE(2038)
			tmp28 = (label != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(2038)
			tmp28 = false;
		}
		HX_STACK_LINE(2038)
		if ((tmp28)){
			HX_STACK_LINE(2039)
			bool tmp29 = (data != null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2039)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2039)
			if ((tmp29)){
				HX_STACK_LINE(2039)
				tmp30 = data->hasNode->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
			}
			else{
				HX_STACK_LINE(2039)
				tmp30 = false;
			}
			HX_STACK_LINE(2039)
			if ((tmp30)){
				HX_STACK_LINE(2040)
				::haxe::xml::Fast tmp31 = data;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(2040)
				::flixel::addons::ui::interfaces::IFlxUIButton tmp32 = fb;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2040)
				this->formatButtonText(tmp31,tmp32);
			}
		}
		HX_STACK_LINE(2044)
		int text_x = (int)0;		HX_STACK_VAR(text_x,"text_x");
		HX_STACK_LINE(2045)
		int text_y = (int)0;		HX_STACK_VAR(text_y,"text_y");
		HX_STACK_LINE(2046)
		::String tmp29 = data->x->get(HX_HCSTRING("text_x","\x26","\x65","\x88","\xd8"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(2046)
		bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(2046)
		if ((tmp30)){
			HX_STACK_LINE(2047)
			::Xml tmp31 = data->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2047)
			int tmp32 = ::flixel::addons::ui::U_obj::xml_i(tmp31,HX_HCSTRING("text_x","\x26","\x65","\x88","\xd8"),null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2047)
			text_x = tmp32;
		}
		else{
			HX_STACK_LINE(2048)
			::String tmp31 = data->x->get(HX_HCSTRING("label_x","\x2d","\xc6","\x05","\x04"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2048)
			bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2048)
			if ((tmp32)){
				HX_STACK_LINE(2049)
				::Xml tmp33 = data->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2049)
				int tmp34 = ::flixel::addons::ui::U_obj::xml_i(tmp33,HX_HCSTRING("label_x","\x2d","\xc6","\x05","\x04"),null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2049)
				text_x = tmp34;
			}
		}
		HX_STACK_LINE(2051)
		::String tmp31 = data->x->get(HX_HCSTRING("text_y","\x27","\x65","\x88","\xd8"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(2051)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(2051)
		if ((tmp32)){
			HX_STACK_LINE(2052)
			::Xml tmp33 = data->x;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2052)
			int tmp34 = ::flixel::addons::ui::U_obj::xml_i(tmp33,HX_HCSTRING("text_y","\x27","\x65","\x88","\xd8"),null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2052)
			text_y = tmp34;
		}
		else{
			HX_STACK_LINE(2053)
			::String tmp33 = data->x->get(HX_HCSTRING("label_y","\x2e","\xc6","\x05","\x04"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2053)
			bool tmp34 = (tmp33 != null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2053)
			if ((tmp34)){
				HX_STACK_LINE(2054)
				::Xml tmp35 = data->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2054)
				int tmp36 = ::flixel::addons::ui::U_obj::xml_i(tmp35,HX_HCSTRING("label_y","\x2e","\xc6","\x05","\x04"),null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2054)
				text_y = tmp36;
			}
		}
		HX_STACK_LINE(2057)
		::flixel::addons::ui::interfaces::IFlxUIButton tmp33 = fb;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(2057)
		bool tmp34 = ::Std_obj::is(tmp33,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >());		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(2057)
		if ((tmp34)){
			HX_STACK_LINE(2059)
			::flixel::addons::ui::FlxUISpriteButton fbs = ((::flixel::addons::ui::FlxUISpriteButton)(fb));		HX_STACK_VAR(fbs,"fbs");
			HX_STACK_LINE(2060)
			::flixel::group::FlxSpriteGroup g = ((::flixel::group::FlxSpriteGroup)(fbs->label));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(2061)
			{
				HX_STACK_LINE(2061)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2061)
				Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2061)
				while((true)){
					HX_STACK_LINE(2061)
					bool tmp35 = (_g < _g1->length);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2061)
					bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2061)
					if ((tmp36)){
						HX_STACK_LINE(2061)
						break;
					}
					HX_STACK_LINE(2061)
					::flixel::FlxSprite tmp37 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2061)
					::flixel::FlxSprite sprite1 = tmp37;		HX_STACK_VAR(sprite1,"sprite1");
					HX_STACK_LINE(2061)
					++(_g);
					HX_STACK_LINE(2063)
					::flixel::FlxSprite tmp38 = sprite1;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2063)
					bool tmp39 = ::Std_obj::is(tmp38,hx::ClassOf< ::flixel::addons::ui::FlxUIText >());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2063)
					if ((tmp39)){
						HX_STACK_LINE(2066)
						{
							HX_STACK_LINE(2066)
							::flixel::util::FlxPoint _g2 = sprite1->offset;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(2066)
							Float tmp40 = (_g2->x - text_x);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(2066)
							_g2->set_x(tmp40);
						}
						HX_STACK_LINE(2067)
						{
							HX_STACK_LINE(2067)
							::flixel::util::FlxPoint _g2 = sprite1->offset;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(2067)
							Float tmp40 = (_g2->y - text_y);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(2067)
							_g2->set_y(tmp40);
						}
						HX_STACK_LINE(2068)
						break;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2074)
			::flixel::addons::ui::FlxUIButton fbu = ((::flixel::addons::ui::FlxUIButton)(fb));		HX_STACK_VAR(fbu,"fbu");
			HX_STACK_LINE(2076)
			{
				HX_STACK_LINE(2076)
				::flixel::util::FlxPoint tmp35 = fbu->label->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2076)
				::flixel::util::FlxPoint _g = tmp35;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2076)
				Float tmp36 = (_g->x - text_x);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2076)
				_g->set_x(tmp36);
			}
			HX_STACK_LINE(2077)
			{
				HX_STACK_LINE(2077)
				::flixel::util::FlxPoint tmp35 = fbu->label->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2077)
				::flixel::util::FlxPoint _g = tmp35;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2077)
				Float tmp36 = (_g->y - text_y);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2077)
				_g->set_y(tmp36);
			}
		}
		HX_STACK_LINE(2080)
		bool tmp35 = isVis;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(2080)
		fb->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp35);
		HX_STACK_LINE(2082)
		::flixel::addons::ui::interfaces::IFlxUIButton tmp36 = fb;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(2082)
		return tmp36;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,_loadButton,return )

::flixel::addons::ui::FlxUIRegion FlxUI_obj::_loadRegion( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadRegion",0x440e2340,"flixel.addons.ui.FlxUI._loadRegion","flixel/addons/ui/FlxUI.hx",2093,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2094)
	::haxe::xml::Fast tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2094)
	Float tmp1 = this->_loadWidth(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2094)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2094)
	int w = tmp2;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(2095)
	::haxe::xml::Fast tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2095)
	Float tmp4 = this->_loadHeight(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2095)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2095)
	int h = tmp5;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(2096)
	::flixel::addons::ui::FlxUIRegion tmp6 = ::flixel::addons::ui::FlxUIRegion_obj::__new((int)0,(int)0,w,h);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2096)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadRegion,return )

::flixel::addons::ui::FlxUI9SliceSprite FlxUI_obj::_load9SliceSprite( ::haxe::xml::Fast data,::String __o_load_code){
::String load_code = __o_load_code.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_load9SliceSprite",0xb0d2f56a,"flixel.addons.ui.FlxUI._load9SliceSprite","flixel/addons/ui/FlxUI.hx",2099,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(load_code,"load_code")
{
		HX_STACK_LINE(2100)
		::String src = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(2101)
		::flixel::addons::ui::FlxUI9SliceSprite f9s = null();		HX_STACK_VAR(f9s,"f9s");
		HX_STACK_LINE(2103)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2103)
		Float tmp1 = ::flixel::addons::ui::U_obj::xml_f(tmp,HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"),(int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2103)
		Float resize_ratio = tmp1;		HX_STACK_VAR(resize_ratio,"resize_ratio");
		HX_STACK_LINE(2104)
		::haxe::xml::Fast tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2104)
		::flixel::util::FlxPoint tmp3 = this->_loadCompass(tmp2,HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2104)
		::flixel::util::FlxPoint resize_point = tmp3;		HX_STACK_VAR(resize_point,"resize_point");
		HX_STACK_LINE(2107)
		::haxe::xml::Fast tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2107)
		Dynamic tmp5 = this->calcMaxMinSize(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2107)
		Dynamic bounds = tmp5;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(2109)
		::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2109)
		{
			HX_STACK_LINE(2109)
			::Xml data1 = data->x;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(2109)
			bool test = true;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(2109)
			::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(2109)
			::String tmp7 = data1->get(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2109)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2109)
			if ((tmp8)){
				HX_STACK_LINE(2109)
				::String tmp9 = data1->get(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2109)
				str = tmp9;
				HX_STACK_LINE(2109)
				bool tmp10 = (str == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2109)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2109)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2109)
				if ((tmp11)){
					HX_STACK_LINE(2109)
					tmp12 = (str == null());
				}
				else{
					HX_STACK_LINE(2109)
					tmp12 = true;
				}
				HX_STACK_LINE(2109)
				if ((tmp12)){
					HX_STACK_LINE(2109)
					str = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(2109)
					::String tmp13 = str;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2109)
					::String tmp14 = ::flixel::addons::ui::U_obj::gfx(tmp13,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2109)
					str = tmp14;
					HX_STACK_LINE(2109)
					bool tmp15 = test;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2109)
					if ((tmp15)){
						HX_STACK_LINE(2109)
						try
						{
						HX_STACK_CATCHABLE(::String, 0);
						{
							HX_STACK_LINE(2109)
							::String tmp16 = str;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2109)
							::openfl::_legacy::display::BitmapData tmp17 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2109)
							::openfl::_legacy::display::BitmapData testbmp = tmp17;		HX_STACK_VAR(testbmp,"testbmp");
							HX_STACK_LINE(2109)
							bool tmp18 = (testbmp == null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2109)
							if ((tmp18)){
								HX_STACK_LINE(2109)
								::String tmp19 = HX_HCSTRING("couldn't load bmp \"src","\x51","\xce","\x3d","\xa9");		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2109)
								::String tmp20 = (tmp19 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2109)
								HX_STACK_DO_THROW(tmp20);
							}
							HX_STACK_LINE(2109)
							testbmp = null();
						}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String msg = __e;{
									HX_STACK_LINE(2109)
									Dynamic();
								}
							}
							else {
							    HX_STACK_DO_THROW(__e);
							}
						}
					}
				}
			}
			HX_STACK_LINE(2109)
			tmp6 = str;
		}
		HX_STACK_LINE(2109)
		src = tmp6;
		HX_STACK_LINE(2110)
		bool tmp7 = (src == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2110)
		if ((tmp7)){
			HX_STACK_LINE(2110)
			src = null();
		}
		HX_STACK_LINE(2112)
		bool tmp8 = (src == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2112)
		if ((tmp8)){
			HX_STACK_LINE(2113)
			bool tmp9 = (load_code == HX_HCSTRING("tab_menu","\x09","\x73","\xe1","\xd6"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2113)
			if ((tmp9)){
				HX_STACK_LINE(2114)
				src = HX_HCSTRING("flixel/flixel-ui/img/chrome_flat.png","\x30","\xcf","\x0a","\x80");
			}
		}
		HX_STACK_LINE(2118)
		::openfl::_legacy::geom::Rectangle rc;		HX_STACK_VAR(rc,"rc");
		HX_STACK_LINE(2119)
		::haxe::xml::Fast tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2119)
		Float tmp10 = this->_loadWidth(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2119)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2119)
		int rect_w = tmp11;		HX_STACK_VAR(rect_w,"rect_w");
		HX_STACK_LINE(2120)
		::haxe::xml::Fast tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2120)
		Float tmp13 = this->_loadHeight(tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2120)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2120)
		int rect_h = tmp14;		HX_STACK_VAR(rect_h,"rect_h");
		HX_STACK_LINE(2122)
		bool tmp15 = (bounds != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2122)
		if ((tmp15)){
			HX_STACK_LINE(2123)
			bool tmp16 = (rect_w < bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2123)
			if ((tmp16)){
				HX_STACK_LINE(2123)
				Float tmp17 = bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2123)
				int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2123)
				rect_w = tmp18;
			}
			else{
				HX_STACK_LINE(2124)
				bool tmp17 = (rect_w > bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2124)
				if ((tmp17)){
					HX_STACK_LINE(2124)
					rect_w = ((int)(bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic )));
				}
			}
			HX_STACK_LINE(2126)
			bool tmp17 = (rect_h < bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2126)
			if ((tmp17)){
				HX_STACK_LINE(2126)
				Float tmp18 = bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2126)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2126)
				rect_h = tmp19;
			}
			else{
				HX_STACK_LINE(2127)
				bool tmp18 = (rect_h > bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2127)
				if ((tmp18)){
					HX_STACK_LINE(2127)
					Float tmp19 = bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2127)
					int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2127)
					rect_h = tmp20;
				}
			}
		}
		HX_STACK_LINE(2129)
		bool tmp16 = (rect_w == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2129)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2129)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2129)
		if ((tmp17)){
			HX_STACK_LINE(2129)
			tmp18 = (rect_h == (int)0);
		}
		else{
			HX_STACK_LINE(2129)
			tmp18 = true;
		}
		HX_STACK_LINE(2129)
		if ((tmp18)){
			HX_STACK_LINE(2130)
			return null();
		}
		HX_STACK_LINE(2133)
		::openfl::_legacy::geom::Rectangle tmp19 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,rect_w,rect_h);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2133)
		::openfl::_legacy::geom::Rectangle rc1 = tmp19;		HX_STACK_VAR(rc1,"rc1");
		HX_STACK_LINE(2134)
		::Xml tmp20 = data->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(2134)
		::String tmp21 = ::flixel::addons::ui::U_obj::xml_str(tmp20,HX_HCSTRING("slice9","\xa7","\x03","\x04","\x70"),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(2134)
		Array< int > slice9 = ::flixel::util::FlxStringUtil_obj::toIntArray(tmp21);		HX_STACK_VAR(slice9,"slice9");
		HX_STACK_LINE(2136)
		::Xml tmp22 = data->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(2136)
		bool tmp23 = ::flixel::addons::ui::U_obj::xml_bool(tmp22,HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),false);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(2136)
		bool smooth = tmp23;		HX_STACK_VAR(smooth,"smooth");
		HX_STACK_LINE(2138)
		int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(2138)
		{
			HX_STACK_LINE(2138)
			::Xml tmp25 = data->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2138)
			::String tmp26 = ::flixel::addons::ui::U_obj::xml_str(tmp25,HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2138)
			::String tileStr = tmp26;		HX_STACK_VAR(tileStr,"tileStr");
			HX_STACK_LINE(2138)
			int tile = (int)0;		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(2138)
			::String tmp27 = tileStr;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2138)
			::String _switch_28 = (tmp27);
			if (  ( _switch_28==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d")) ||  ( _switch_28==HX_HCSTRING("both","\x81","\x88","\x1b","\x41")) ||  ( _switch_28==HX_HCSTRING("all","\x21","\xf9","\x49","\x00")) ||  ( _switch_28==HX_HCSTRING("hv","\x0e","\x5b","\x00","\x00")) ||  ( _switch_28==HX_HCSTRING("vh","\x32","\x67","\x00","\x00"))){
				HX_STACK_LINE(2138)
				tile = (int)17;
			}
			else if (  ( _switch_28==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_28==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
				HX_STACK_LINE(2138)
				tile = (int)16;
			}
			else if (  ( _switch_28==HX_HCSTRING("v","\x76","\x00","\x00","\x00")) ||  ( _switch_28==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
				HX_STACK_LINE(2138)
				tile = (int)1;
			}
			HX_STACK_LINE(2138)
			tmp24 = tile;
		}
		HX_STACK_LINE(2138)
		int tile = tmp24;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2140)
		::flixel::addons::ui::FlxUI9SliceSprite tmp25 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,src,rc1,slice9,tile,smooth,HX_HCSTRING("","\x00","\x00","\x00","\x00"),resize_ratio,resize_point);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(2140)
		f9s = tmp25;
		HX_STACK_LINE(2142)
		::flixel::addons::ui::FlxUI9SliceSprite tmp26 = f9s;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(2142)
		return tmp26;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_load9SliceSprite,return )

int FlxUI_obj::_loadTileRule( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTileRule",0xb6112c96,"flixel.addons.ui.FlxUI._loadTileRule","flixel/addons/ui/FlxUI.hx",2145,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2146)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2146)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2146)
	::String tileStr = tmp1;		HX_STACK_VAR(tileStr,"tileStr");
	HX_STACK_LINE(2147)
	int tile = (int)0;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(2148)
	::String tmp2 = tileStr;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2148)
	::String _switch_29 = (tmp2);
	if (  ( _switch_29==HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d")) ||  ( _switch_29==HX_HCSTRING("both","\x81","\x88","\x1b","\x41")) ||  ( _switch_29==HX_HCSTRING("all","\x21","\xf9","\x49","\x00")) ||  ( _switch_29==HX_HCSTRING("hv","\x0e","\x5b","\x00","\x00")) ||  ( _switch_29==HX_HCSTRING("vh","\x32","\x67","\x00","\x00"))){
		HX_STACK_LINE(2149)
		tile = (int)17;
	}
	else if (  ( _switch_29==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_29==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(2150)
		tile = (int)16;
	}
	else if (  ( _switch_29==HX_HCSTRING("v","\x76","\x00","\x00","\x00")) ||  ( _switch_29==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(2151)
		tile = (int)1;
	}
	HX_STACK_LINE(2153)
	int tmp3 = tile;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2153)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTileRule,return )

::flixel::addons::ui::FlxUISprite FlxUI_obj::_loadLine( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadLine",0x92cf0f40,"flixel.addons.ui.FlxUI._loadLine","flixel/addons/ui/FlxUI.hx",2156,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2157)
	::String src = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2158)
	::flixel::addons::ui::FlxUISprite fs = null();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(2160)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2160)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),true,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2160)
	::String axis = tmp1;		HX_STACK_VAR(axis,"axis");
	HX_STACK_LINE(2161)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2161)
	int tmp3 = ::flixel::addons::ui::U_obj::xml_i(tmp2,HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2161)
	int thickness = tmp3;		HX_STACK_VAR(thickness,"thickness");
	HX_STACK_LINE(2164)
	::haxe::xml::Fast tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2164)
	Dynamic tmp5 = this->calcMaxMinSize(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2164)
	Dynamic bounds = tmp5;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2166)
	bool tmp6 = (bounds == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2166)
	if ((tmp6)){
		HX_STACK_LINE(2167)
		Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2167)
		Float tmp8 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2167)
		Float tmp9 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2167)
		Float tmp10 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_2_1{
			inline static Dynamic Block( Float &tmp9,Float &tmp10,Float &tmp7,Float &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2167,0xf354486a)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea") , tmp7,false);
					__result->Add(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69") , tmp8,false);
					__result->Add(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1") , tmp9,false);
					__result->Add(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d") , tmp10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2167)
		Dynamic tmp11 = _Function_2_1::Block(tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2167)
		bounds = tmp11;
	}
	HX_STACK_LINE(2169)
	::String tmp7 = axis;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2169)
	::String _switch_30 = (tmp7);
	if (  ( _switch_30==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_30==HX_HCSTRING("horz","\x8f","\xce","\x12","\x45")) ||  ( _switch_30==HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"))){
		HX_STACK_LINE(2170)
		bounds->__FieldRef(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d")) = thickness;
		HX_STACK_LINE(2170)
		bounds->__FieldRef(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69")) = thickness;
	}
	else if (  ( _switch_30==HX_HCSTRING("v","\x76","\x00","\x00","\x00")) ||  ( _switch_30==HX_HCSTRING("vert","\xb1","\x34","\x4c","\x4e")) ||  ( _switch_30==HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"))){
		HX_STACK_LINE(2171)
		bounds->__FieldRef(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1")) = thickness;
		HX_STACK_LINE(2171)
		bounds->__FieldRef(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea")) = thickness;
	}
	HX_STACK_LINE(2174)
	::haxe::xml::Fast tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2174)
	Float tmp9 = this->_loadWidth(tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2174)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2174)
	int W = tmp10;		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(2175)
	::haxe::xml::Fast tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(2175)
	Float tmp12 = this->_loadHeight(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(2175)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(2175)
	int H = tmp13;		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(2177)
	bool tmp14 = (bounds != null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(2177)
	if ((tmp14)){
		HX_STACK_LINE(2178)
		bool tmp15 = (W < bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2178)
		if ((tmp15)){
			HX_STACK_LINE(2178)
			Float tmp16 = bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2178)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2178)
			W = tmp17;
		}
		else{
			HX_STACK_LINE(2179)
			bool tmp16 = (W > bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2179)
			if ((tmp16)){
				HX_STACK_LINE(2179)
				Float tmp17 = bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2179)
				int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2179)
				W = tmp18;
			}
		}
		HX_STACK_LINE(2180)
		bool tmp16 = (H < bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2180)
		if ((tmp16)){
			HX_STACK_LINE(2180)
			Float tmp17 = bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2180)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2180)
			H = tmp18;
		}
		else{
			HX_STACK_LINE(2181)
			bool tmp17 = (H > bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2181)
			if ((tmp17)){
				HX_STACK_LINE(2181)
				Float tmp18 = bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2181)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2181)
				H = tmp19;
			}
		}
	}
	HX_STACK_LINE(2184)
	::Xml tmp15 = data->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(2184)
	::String tmp16 = ::flixel::addons::ui::U_obj::xml_str(tmp15,HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),true,HX_HCSTRING("0xff000000","\x88","\x79","\x02","\x3f"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(2184)
	::String cstr = tmp16;		HX_STACK_VAR(cstr,"cstr");
	HX_STACK_LINE(2185)
	int C = (int)0;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(2186)
	bool tmp17 = (cstr != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(2186)
	if ((tmp17)){
		HX_STACK_LINE(2187)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2187)
		{
			HX_STACK_LINE(2187)
			::String str = cstr;		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(2187)
			bool safe = false;		HX_STACK_VAR(safe,"safe");
			HX_STACK_LINE(2187)
			int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
			HX_STACK_LINE(2187)
			int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
			HX_STACK_LINE(2187)
			int tmp19 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2187)
			bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2187)
			if ((tmp20)){
				HX_STACK_LINE(2187)
				bool tmp21 = safe;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2187)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2187)
				if ((tmp22)){
					HX_STACK_LINE(2187)
					::String tmp23 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2187)
					::String tmp24 = (tmp23 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2187)
					HX_STACK_DO_THROW(tmp24);
				}
				else{
					HX_STACK_LINE(2187)
					return_val = default_color;
				}
			}
			HX_STACK_LINE(2187)
			bool tmp21 = (str.length != (int)8);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2187)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2187)
			if ((tmp21)){
				HX_STACK_LINE(2187)
				tmp22 = (str.length != (int)10);
			}
			else{
				HX_STACK_LINE(2187)
				tmp22 = false;
			}
			HX_STACK_LINE(2187)
			if ((tmp22)){
				HX_STACK_LINE(2187)
				bool tmp23 = safe;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2187)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2187)
				if ((tmp24)){
					HX_STACK_LINE(2187)
					::String tmp25 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2187)
					::String tmp26 = (tmp25 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2187)
					HX_STACK_DO_THROW(tmp26);
				}
				else{
					HX_STACK_LINE(2187)
					return_val = default_color;
				}
			}
			HX_STACK_LINE(2187)
			bool tmp23 = (return_val == (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2187)
			if ((tmp23)){
				HX_STACK_LINE(2187)
				int tmp24 = (str.length - (int)2);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2187)
				::String tmp25 = str.substr((int)2,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2187)
				str = tmp25;
				HX_STACK_LINE(2187)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2187)
				tmp26 = (str.length == (int)6);
				HX_STACK_LINE(2187)
				if ((tmp26)){
					HX_STACK_LINE(2187)
					::String tmp27 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2187)
					str = tmp27;
				}
				HX_STACK_LINE(2187)
				int tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(2187)
				{
					HX_STACK_LINE(2187)
					int length = str.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(2187)
					int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
					HX_STACK_LINE(2187)
					int sum = (int)0;		HX_STACK_VAR(sum,"sum");
					HX_STACK_LINE(2187)
					int tmp28 = (length - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2187)
					int i = tmp28;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2187)
					while((true)){
						HX_STACK_LINE(2187)
						bool tmp29 = (i >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2187)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2187)
						if ((tmp30)){
							HX_STACK_LINE(2187)
							break;
						}
						HX_STACK_LINE(2187)
						int tmp31 = i;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2187)
						::String tmp32 = str.substr(tmp31,(int)1);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2187)
						::String char_hex = tmp32;		HX_STACK_VAR(char_hex,"char_hex");
						HX_STACK_LINE(2187)
						int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2187)
						{
							HX_STACK_LINE(2187)
							int val = (int)-1;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(2187)
							::String tmp34 = char_hex;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(2187)
							::String _switch_31 = (tmp34);
							if (  ( _switch_31==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
								HX_STACK_LINE(2187)
								::String tmp35 = char_hex;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(2187)
								Dynamic tmp36 = ::Std_obj::parseInt(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2187)
								val = tmp36;
							}
							else if (  ( _switch_31==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
								HX_STACK_LINE(2187)
								val = (int)10;
							}
							else if (  ( _switch_31==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
								HX_STACK_LINE(2187)
								val = (int)11;
							}
							else if (  ( _switch_31==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
								HX_STACK_LINE(2187)
								val = (int)12;
							}
							else if (  ( _switch_31==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
								HX_STACK_LINE(2187)
								val = (int)13;
							}
							else if (  ( _switch_31==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
								HX_STACK_LINE(2187)
								val = (int)14;
							}
							else if (  ( _switch_31==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_31==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
								HX_STACK_LINE(2187)
								val = (int)15;
							}
							HX_STACK_LINE(2187)
							bool tmp35 = (val == (int)-1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2187)
							if ((tmp35)){
								HX_STACK_LINE(2187)
								::String tmp36 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(2187)
								::String tmp37 = (tmp36 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(2187)
								HX_STACK_DO_THROW(tmp37);
							}
							HX_STACK_LINE(2187)
							tmp33 = val;
						}
						HX_STACK_LINE(2187)
						int char_int = tmp33;		HX_STACK_VAR(char_int,"char_int");
						HX_STACK_LINE(2187)
						int tmp34 = (char_int * place_mult);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2187)
						hx::AddEq(sum,tmp34);
						HX_STACK_LINE(2187)
						hx::MultEq(place_mult,(int)16);
						HX_STACK_LINE(2187)
						(i)--;
					}
					HX_STACK_LINE(2187)
					tmp27 = sum;
				}
				HX_STACK_LINE(2187)
				return_val = tmp27;
			}
			HX_STACK_LINE(2187)
			tmp18 = return_val;
		}
		HX_STACK_LINE(2187)
		C = tmp18;
	}
	HX_STACK_LINE(2189)
	::flixel::addons::ui::FlxUISprite tmp18 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(2189)
	fs = tmp18;
	HX_STACK_LINE(2190)
	int tmp19 = W;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(2190)
	int tmp20 = H;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(2190)
	int tmp21 = C;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(2190)
	fs->makeGraphic(tmp19,tmp20,tmp21,null(),null());
	HX_STACK_LINE(2192)
	::flixel::addons::ui::FlxUISprite tmp22 = fs;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(2192)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadLine,return )

::flixel::addons::ui::FlxUISprite FlxUI_obj::_loadSprite( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadSprite",0x07173e51,"flixel.addons.ui.FlxUI._loadSprite","flixel/addons/ui/FlxUI.hx",2195,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2196)
	::String src = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2197)
	::flixel::addons::ui::FlxUISprite fs = null();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(2199)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2199)
	{
		HX_STACK_LINE(2199)
		::Xml data1 = data->x;		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(2199)
		bool test = true;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(2199)
		::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(2199)
		::String tmp1 = data1->get(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2199)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2199)
		if ((tmp2)){
			HX_STACK_LINE(2199)
			::String tmp3 = data1->get(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2199)
			str = tmp3;
			HX_STACK_LINE(2199)
			bool tmp4 = (str == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2199)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2199)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2199)
			if ((tmp5)){
				HX_STACK_LINE(2199)
				tmp6 = (str == null());
			}
			else{
				HX_STACK_LINE(2199)
				tmp6 = true;
			}
			HX_STACK_LINE(2199)
			if ((tmp6)){
				HX_STACK_LINE(2199)
				str = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else{
				HX_STACK_LINE(2199)
				::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2199)
				::String tmp8 = ::flixel::addons::ui::U_obj::gfx(tmp7,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2199)
				str = tmp8;
				HX_STACK_LINE(2199)
				bool tmp9 = test;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2199)
				if ((tmp9)){
					HX_STACK_LINE(2199)
					try
					{
					HX_STACK_CATCHABLE(::String, 0);
					{
						HX_STACK_LINE(2199)
						::String tmp10 = str;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2199)
						::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2199)
						::openfl::_legacy::display::BitmapData testbmp = tmp11;		HX_STACK_VAR(testbmp,"testbmp");
						HX_STACK_LINE(2199)
						bool tmp12 = (testbmp == null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2199)
						if ((tmp12)){
							HX_STACK_LINE(2199)
							::String tmp13 = HX_HCSTRING("couldn't load bmp \"src","\x51","\xce","\x3d","\xa9");		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2199)
							::String tmp14 = (tmp13 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2199)
							HX_STACK_DO_THROW(tmp14);
						}
						HX_STACK_LINE(2199)
						testbmp = null();
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String msg = __e;{
								HX_STACK_LINE(2199)
								Dynamic();
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
				}
			}
		}
		HX_STACK_LINE(2199)
		tmp = str;
	}
	HX_STACK_LINE(2199)
	src = tmp;
	HX_STACK_LINE(2202)
	::haxe::xml::Fast tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2202)
	Dynamic tmp2 = this->calcMaxMinSize(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2202)
	Dynamic bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2204)
	bool tmp3 = (src != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2204)
	if ((tmp3)){
		HX_STACK_LINE(2205)
		::flixel::addons::ui::FlxUISprite tmp4 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,src);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2205)
		fs = tmp4;
	}
	else{
		HX_STACK_LINE(2207)
		::haxe::xml::Fast tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2207)
		Float tmp5 = this->_loadWidth(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2207)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2207)
		int W = tmp6;		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(2208)
		::haxe::xml::Fast tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2208)
		Float tmp8 = this->_loadHeight(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2208)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2208)
		int H = tmp9;		HX_STACK_VAR(H,"H");
		HX_STACK_LINE(2210)
		bool tmp10 = (bounds != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2210)
		if ((tmp10)){
			HX_STACK_LINE(2211)
			bool tmp11 = (W < bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2211)
			if ((tmp11)){
				HX_STACK_LINE(2211)
				Float tmp12 = bounds->__Field(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2211)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2211)
				W = tmp13;
			}
			else{
				HX_STACK_LINE(2212)
				bool tmp12 = (W > bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2212)
				if ((tmp12)){
					HX_STACK_LINE(2212)
					Float tmp13 = bounds->__Field(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2212)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2212)
					W = tmp14;
				}
			}
			HX_STACK_LINE(2213)
			bool tmp12 = (H < bounds->__Field(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2213)
			if ((tmp12)){
				HX_STACK_LINE(2213)
				Float tmp13 = bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2213)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2213)
				H = tmp14;
			}
			else{
				HX_STACK_LINE(2214)
				bool tmp13 = (H > bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2214)
				if ((tmp13)){
					HX_STACK_LINE(2214)
					Float tmp14 = bounds->__Field(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2214)
					int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2214)
					H = tmp15;
				}
			}
		}
		HX_STACK_LINE(2217)
		::Xml tmp11 = data->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2217)
		::String tmp12 = ::flixel::addons::ui::U_obj::xml_str(tmp11,HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2217)
		::String cstr = tmp12;		HX_STACK_VAR(cstr,"cstr");
		HX_STACK_LINE(2218)
		int C = (int)0;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(2219)
		bool tmp13 = (cstr != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2219)
		if ((tmp13)){
			HX_STACK_LINE(2220)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2220)
			{
				HX_STACK_LINE(2220)
				::String str = cstr;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(2220)
				bool safe = false;		HX_STACK_VAR(safe,"safe");
				HX_STACK_LINE(2220)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2220)
				int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2220)
				int tmp15 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2220)
				bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2220)
				if ((tmp16)){
					HX_STACK_LINE(2220)
					bool tmp17 = safe;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2220)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2220)
					if ((tmp18)){
						HX_STACK_LINE(2220)
						::String tmp19 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2220)
						::String tmp20 = (tmp19 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2220)
						HX_STACK_DO_THROW(tmp20);
					}
					else{
						HX_STACK_LINE(2220)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2220)
				bool tmp17 = (str.length != (int)8);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2220)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2220)
				if ((tmp17)){
					HX_STACK_LINE(2220)
					tmp18 = (str.length != (int)10);
				}
				else{
					HX_STACK_LINE(2220)
					tmp18 = false;
				}
				HX_STACK_LINE(2220)
				if ((tmp18)){
					HX_STACK_LINE(2220)
					bool tmp19 = safe;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2220)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2220)
					if ((tmp20)){
						HX_STACK_LINE(2220)
						::String tmp21 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2220)
						::String tmp22 = (tmp21 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2220)
						HX_STACK_DO_THROW(tmp22);
					}
					else{
						HX_STACK_LINE(2220)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2220)
				bool tmp19 = (return_val == (int)-1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2220)
				if ((tmp19)){
					HX_STACK_LINE(2220)
					int tmp20 = (str.length - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2220)
					::String tmp21 = str.substr((int)2,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2220)
					str = tmp21;
					HX_STACK_LINE(2220)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2220)
					tmp22 = (str.length == (int)6);
					HX_STACK_LINE(2220)
					if ((tmp22)){
						HX_STACK_LINE(2220)
						::String tmp23 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2220)
						str = tmp23;
					}
					HX_STACK_LINE(2220)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(2220)
					{
						HX_STACK_LINE(2220)
						int length = str.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2220)
						int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
						HX_STACK_LINE(2220)
						int sum = (int)0;		HX_STACK_VAR(sum,"sum");
						HX_STACK_LINE(2220)
						int tmp24 = (length - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2220)
						int i = tmp24;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2220)
						while((true)){
							HX_STACK_LINE(2220)
							bool tmp25 = (i >= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2220)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2220)
							if ((tmp26)){
								HX_STACK_LINE(2220)
								break;
							}
							HX_STACK_LINE(2220)
							int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2220)
							::String tmp28 = str.substr(tmp27,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2220)
							::String char_hex = tmp28;		HX_STACK_VAR(char_hex,"char_hex");
							HX_STACK_LINE(2220)
							int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2220)
							{
								HX_STACK_LINE(2220)
								int val = (int)-1;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2220)
								::String tmp30 = char_hex;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2220)
								::String _switch_32 = (tmp30);
								if (  ( _switch_32==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
									HX_STACK_LINE(2220)
									::String tmp31 = char_hex;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2220)
									Dynamic tmp32 = ::Std_obj::parseInt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2220)
									val = tmp32;
								}
								else if (  ( _switch_32==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
									HX_STACK_LINE(2220)
									val = (int)10;
								}
								else if (  ( _switch_32==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
									HX_STACK_LINE(2220)
									val = (int)11;
								}
								else if (  ( _switch_32==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
									HX_STACK_LINE(2220)
									val = (int)12;
								}
								else if (  ( _switch_32==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
									HX_STACK_LINE(2220)
									val = (int)13;
								}
								else if (  ( _switch_32==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
									HX_STACK_LINE(2220)
									val = (int)14;
								}
								else if (  ( _switch_32==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_32==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
									HX_STACK_LINE(2220)
									val = (int)15;
								}
								HX_STACK_LINE(2220)
								bool tmp31 = (val == (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2220)
								if ((tmp31)){
									HX_STACK_LINE(2220)
									::String tmp32 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2220)
									::String tmp33 = (tmp32 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2220)
									HX_STACK_DO_THROW(tmp33);
								}
								HX_STACK_LINE(2220)
								tmp29 = val;
							}
							HX_STACK_LINE(2220)
							int char_int = tmp29;		HX_STACK_VAR(char_int,"char_int");
							HX_STACK_LINE(2220)
							int tmp30 = (char_int * place_mult);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(2220)
							hx::AddEq(sum,tmp30);
							HX_STACK_LINE(2220)
							hx::MultEq(place_mult,(int)16);
							HX_STACK_LINE(2220)
							(i)--;
						}
						HX_STACK_LINE(2220)
						tmp23 = sum;
					}
					HX_STACK_LINE(2220)
					return_val = tmp23;
				}
				HX_STACK_LINE(2220)
				tmp14 = return_val;
			}
			HX_STACK_LINE(2220)
			C = tmp14;
		}
		HX_STACK_LINE(2222)
		::flixel::addons::ui::FlxUISprite tmp14 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2222)
		fs = tmp14;
		HX_STACK_LINE(2223)
		int tmp15 = W;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2223)
		int tmp16 = H;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2223)
		int tmp17 = C;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2223)
		fs->makeGraphic(tmp15,tmp16,tmp17,null(),null());
	}
	HX_STACK_LINE(2226)
	::flixel::addons::ui::FlxUISprite tmp4 = fs;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2226)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadSprite,return )

int FlxUI_obj::thisWidth( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","thisWidth",0xcbb0796f,"flixel.addons.ui.FlxUI.thisWidth","flixel/addons/ui/FlxUI.hx",2229,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2231)
	int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2231)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,thisWidth,return )

int FlxUI_obj::thisHeight( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","thisHeight",0x2509405e,"flixel.addons.ui.FlxUI.thisHeight","flixel/addons/ui/FlxUI.hx",2237,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2239)
	int tmp = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2239)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,thisHeight,return )

Float FlxUI_obj::_getAnchorPos( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,::String axis,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getAnchorPos",0xe6674faf,"flixel.addons.ui.FlxUI._getAnchorPos","flixel/addons/ui/FlxUI.hx",2245,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2246)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2246)
	::String _switch_33 = (tmp);
	if (  ( _switch_33==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
		HX_STACK_LINE(2247)
		return (int)0;
	}
	else if (  ( _switch_33==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(2248)
		return (int)0;
	}
	else if (  ( _switch_33==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(2249)
		int tmp1 = this->thisWidth();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2249)
		return tmp1;
	}
	else if (  ( _switch_33==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(2251)
		bool tmp1 = (axis == HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2251)
		if ((tmp1)){
			HX_STACK_LINE(2251)
			int tmp2 = this->thisWidth();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2251)
			Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2251)
			return tmp3;
		}
		else{
			HX_STACK_LINE(2252)
			bool tmp2 = (axis == HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2252)
			if ((tmp2)){
				HX_STACK_LINE(2252)
				int tmp3 = this->thisHeight();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2252)
				Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2252)
				return tmp4;
			}
		}
	}
	else if (  ( _switch_33==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) ||  ( _switch_33==HX_HCSTRING("up","\x5b","\x66","\x00","\x00"))){
		HX_STACK_LINE(2253)
		return (int)0;
	}
	else if (  ( _switch_33==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) ||  ( _switch_33==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"))){
		HX_STACK_LINE(2254)
		int tmp1 = this->thisHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2254)
		return tmp1;
	}
	else  {
		HX_STACK_LINE(2256)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2256)
		Float tmp2 = ::flixel::addons::ui::U_obj::perc_to_float(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2256)
		Float perc = tmp2;		HX_STACK_VAR(perc,"perc");
		HX_STACK_LINE(2257)
		Float tmp3 = perc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2257)
		bool tmp4 = ::Math_obj::isNaN(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2257)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2257)
		if ((tmp5)){
			HX_STACK_LINE(2258)
			bool tmp6 = (axis == HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2258)
			if ((tmp6)){
				HX_STACK_LINE(2259)
				Float tmp7 = perc;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2259)
				int tmp8 = this->thisWidth();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2259)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2259)
				return tmp9;
			}
			else{
				HX_STACK_LINE(2260)
				bool tmp7 = (axis == HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2260)
				if ((tmp7)){
					HX_STACK_LINE(2261)
					Float tmp8 = perc;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2261)
					int tmp9 = this->thisHeight();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2261)
					Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2261)
					return tmp10;
				}
			}
		}
		else{
			HX_STACK_LINE(2264)
			::EReg tmp6 = ::EReg_obj::__new(HX_HCSTRING("[\\w]+\\.[\\w]+","\xee","\xda","\x86","\x47"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2264)
			::EReg r = tmp6;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2265)
			::String property = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(property,"property");
			HX_STACK_LINE(2267)
			::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2267)
			bool tmp8 = r->match(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2267)
			if ((tmp8)){
				HX_STACK_LINE(2268)
				::String wh = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wh,"wh");
				HX_STACK_LINE(2269)
				bool tmp9 = (axis == HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2269)
				if ((tmp9)){
					HX_STACK_LINE(2269)
					wh = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
				}
				HX_STACK_LINE(2270)
				bool tmp10 = (axis == HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2270)
				if ((tmp10)){
					HX_STACK_LINE(2270)
					wh = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
				}
				HX_STACK_LINE(2271)
				::String tmp11 = wh;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2271)
				::String tmp12 = str;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2271)
				Float tmp13 = this->_getStretch((int)1,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2271)
				Float assetValue = tmp13;		HX_STACK_VAR(assetValue,"assetValue");
				HX_STACK_LINE(2272)
				Float tmp14 = assetValue;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2272)
				return tmp14;
			}
		}
	}
;
;
	HX_STACK_LINE(2307)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getAnchorPos,return )

Dynamic FlxUI_obj::calcMaxMinSize( ::haxe::xml::Fast data,Dynamic width,Dynamic height){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","calcMaxMinSize",0x437b661d,"flixel.addons.ui.FlxUI.calcMaxMinSize","flixel/addons/ui/FlxUI.hx",2310,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(2311)
	Float min_w = (int)0;		HX_STACK_VAR(min_w,"min_w");
	HX_STACK_LINE(2312)
	Float min_h = (int)0;		HX_STACK_VAR(min_h,"min_h");
	HX_STACK_LINE(2313)
	Float tmp = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2313)
	Float max_w = tmp;		HX_STACK_VAR(max_w,"max_w");
	HX_STACK_LINE(2314)
	Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2314)
	Float max_h = tmp1;		HX_STACK_VAR(max_h,"max_h");
	HX_STACK_LINE(2315)
	Float temp_min_w = (int)0;		HX_STACK_VAR(temp_min_w,"temp_min_w");
	HX_STACK_LINE(2316)
	Float temp_min_h = (int)0;		HX_STACK_VAR(temp_min_h,"temp_min_h");
	HX_STACK_LINE(2317)
	Float tmp2 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2317)
	Float temp_max_w = tmp2;		HX_STACK_VAR(temp_max_w,"temp_max_w");
	HX_STACK_LINE(2318)
	Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2318)
	Float temp_max_h = tmp3;		HX_STACK_VAR(temp_max_h,"temp_max_h");
	HX_STACK_LINE(2320)
	bool tmp4 = data->hasNode->resolve(HX_HCSTRING("exact_size","\x81","\x45","\x3f","\xe0"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2320)
	if ((tmp4)){
		HX_STACK_LINE(2321)
		::_List::ListIterator tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2321)
		{
			HX_STACK_LINE(2321)
			::List tmp6 = data->nodes->resolve(HX_HCSTRING("exact_size","\x81","\x45","\x3f","\xe0"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2321)
			::List _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(2321)
			tmp5 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(2321)
		::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2321)
		while((true)){
			HX_STACK_LINE(2321)
			bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2321)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2321)
			if ((tmp7)){
				HX_STACK_LINE(2321)
				break;
			}
			HX_STACK_LINE(2321)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2321)
			{
				HX_STACK_LINE(2321)
				Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2321)
				_g->val = tmp9;
				HX_STACK_LINE(2321)
				Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2321)
				_g->head = tmp10;
				HX_STACK_LINE(2321)
				tmp8 = _g->val;
			}
			HX_STACK_LINE(2321)
			::haxe::xml::Fast exactNode = ((::haxe::xml::Fast)(tmp8));		HX_STACK_VAR(exactNode,"exactNode");
			HX_STACK_LINE(2322)
			::Xml tmp9 = exactNode->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2322)
			::String tmp10 = ::flixel::addons::ui::U_obj::xml_str(tmp9,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2322)
			::String exact_w_str = tmp10;		HX_STACK_VAR(exact_w_str,"exact_w_str");
			HX_STACK_LINE(2323)
			::Xml tmp11 = exactNode->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2323)
			::String tmp12 = ::flixel::addons::ui::U_obj::xml_str(tmp11,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2323)
			::String exact_h_str = tmp12;		HX_STACK_VAR(exact_h_str,"exact_h_str");
			HX_STACK_LINE(2324)
			::String tmp13 = exact_w_str;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2324)
			Float tmp14 = this->_getDataSize(HX_HCSTRING("w","\x77","\x00","\x00","\x00"),tmp13,(int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2324)
			min_w = tmp14;
			HX_STACK_LINE(2325)
			::String tmp15 = exact_h_str;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2325)
			Float tmp16 = this->_getDataSize(HX_HCSTRING("h","\x68","\x00","\x00","\x00"),tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2325)
			min_h = tmp16;
			HX_STACK_LINE(2326)
			max_w = min_w;
			HX_STACK_LINE(2327)
			max_h = min_h;
		}
	}
	else{
		HX_STACK_LINE(2329)
		bool tmp5 = data->hasNode->resolve(HX_HCSTRING("min_size","\xce","\xb9","\x6e","\x63"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2329)
		if ((tmp5)){
			HX_STACK_LINE(2330)
			::_List::ListIterator tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2330)
			{
				HX_STACK_LINE(2330)
				::List tmp7 = data->nodes->resolve(HX_HCSTRING("min_size","\xce","\xb9","\x6e","\x63"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2330)
				::List _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2330)
				tmp6 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(2330)
			::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2330)
			while((true)){
				HX_STACK_LINE(2330)
				bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2330)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2330)
				if ((tmp8)){
					HX_STACK_LINE(2330)
					break;
				}
				HX_STACK_LINE(2330)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2330)
				{
					HX_STACK_LINE(2330)
					Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2330)
					_g->val = tmp10;
					HX_STACK_LINE(2330)
					Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2330)
					_g->head = tmp11;
					HX_STACK_LINE(2330)
					tmp9 = _g->val;
				}
				HX_STACK_LINE(2330)
				::haxe::xml::Fast minNode = ((::haxe::xml::Fast)(tmp9));		HX_STACK_VAR(minNode,"minNode");
				HX_STACK_LINE(2331)
				::Xml tmp10 = minNode->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2331)
				::String tmp11 = ::flixel::addons::ui::U_obj::xml_str(tmp10,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2331)
				::String min_w_str = tmp11;		HX_STACK_VAR(min_w_str,"min_w_str");
				HX_STACK_LINE(2332)
				::Xml tmp12 = minNode->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2332)
				::String tmp13 = ::flixel::addons::ui::U_obj::xml_str(tmp12,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2332)
				::String min_h_str = tmp13;		HX_STACK_VAR(min_h_str,"min_h_str");
				HX_STACK_LINE(2333)
				::String tmp14 = min_w_str;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2333)
				Float tmp15 = this->_getDataSize(HX_HCSTRING("w","\x77","\x00","\x00","\x00"),tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2333)
				temp_min_w = tmp15;
				HX_STACK_LINE(2334)
				::String tmp16 = min_h_str;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2334)
				Float tmp17 = this->_getDataSize(HX_HCSTRING("h","\x68","\x00","\x00","\x00"),tmp16,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2334)
				temp_min_h = tmp17;
				HX_STACK_LINE(2335)
				bool tmp18 = (temp_min_w > min_w);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2335)
				if ((tmp18)){
					HX_STACK_LINE(2336)
					min_w = temp_min_w;
				}
				HX_STACK_LINE(2338)
				bool tmp19 = (temp_min_h > min_h);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2338)
				if ((tmp19)){
					HX_STACK_LINE(2339)
					min_h = temp_min_h;
				}
			}
		}
		else{
			HX_STACK_LINE(2342)
			bool tmp6 = data->hasNode->resolve(HX_HCSTRING("max_size","\x7c","\x9f","\x54","\x16"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2342)
			if ((tmp6)){
				HX_STACK_LINE(2343)
				::_List::ListIterator tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2343)
				{
					HX_STACK_LINE(2343)
					::List tmp8 = data->nodes->resolve(HX_HCSTRING("max_size","\x7c","\x9f","\x54","\x16"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2343)
					::List _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2343)
					tmp7 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(2343)
				::_List::ListIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2343)
				while((true)){
					HX_STACK_LINE(2343)
					bool tmp8 = (_g->head != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2343)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2343)
					if ((tmp9)){
						HX_STACK_LINE(2343)
						break;
					}
					HX_STACK_LINE(2343)
					Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2343)
					{
						HX_STACK_LINE(2343)
						Dynamic tmp11 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2343)
						_g->val = tmp11;
						HX_STACK_LINE(2343)
						Dynamic tmp12 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2343)
						_g->head = tmp12;
						HX_STACK_LINE(2343)
						tmp10 = _g->val;
					}
					HX_STACK_LINE(2343)
					::haxe::xml::Fast maxNode = ((::haxe::xml::Fast)(tmp10));		HX_STACK_VAR(maxNode,"maxNode");
					HX_STACK_LINE(2344)
					::Xml tmp11 = maxNode->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2344)
					::String tmp12 = ::flixel::addons::ui::U_obj::xml_str(tmp11,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2344)
					::String max_w_str = tmp12;		HX_STACK_VAR(max_w_str,"max_w_str");
					HX_STACK_LINE(2345)
					::Xml tmp13 = maxNode->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2345)
					::String tmp14 = ::flixel::addons::ui::U_obj::xml_str(tmp13,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2345)
					::String max_h_str = tmp14;		HX_STACK_VAR(max_h_str,"max_h_str");
					HX_STACK_LINE(2346)
					::String tmp15 = max_w_str;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2346)
					Float tmp16 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2346)
					Float tmp17 = this->_getDataSize(HX_HCSTRING("w","\x77","\x00","\x00","\x00"),tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2346)
					temp_max_w = tmp17;
					HX_STACK_LINE(2347)
					::String tmp18 = max_h_str;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2347)
					Float tmp19 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2347)
					Float tmp20 = this->_getDataSize(HX_HCSTRING("h","\x68","\x00","\x00","\x00"),tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2347)
					temp_max_h = tmp20;
					HX_STACK_LINE(2348)
					bool tmp21 = (temp_max_w < max_w);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2348)
					if ((tmp21)){
						HX_STACK_LINE(2349)
						max_w = temp_max_w;
					}
					HX_STACK_LINE(2351)
					bool tmp22 = (temp_max_h < max_h);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2351)
					if ((tmp22)){
						HX_STACK_LINE(2352)
						max_h = temp_max_h;
					}
				}
			}
			else{
				HX_STACK_LINE(2356)
				return null();
			}
		}
	}
	HX_STACK_LINE(2359)
	bool tmp5 = (width != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2359)
	if ((tmp5)){
		HX_STACK_LINE(2360)
		bool tmp6 = (width > min_w);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2360)
		if ((tmp6)){
			HX_STACK_LINE(2360)
			min_w = width;
		}
		HX_STACK_LINE(2361)
		bool tmp7 = (width < max_w);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2361)
		if ((tmp7)){
			HX_STACK_LINE(2361)
			max_w = width;
		}
	}
	HX_STACK_LINE(2363)
	bool tmp6 = (height != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2363)
	if ((tmp6)){
		HX_STACK_LINE(2364)
		bool tmp7 = (height > min_h);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2364)
		if ((tmp7)){
			HX_STACK_LINE(2364)
			min_h = height;
		}
		HX_STACK_LINE(2365)
		bool tmp8 = (height < max_h);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2365)
		if ((tmp8)){
			HX_STACK_LINE(2365)
			max_h = height;
		}
	}
	HX_STACK_LINE(2370)
	bool tmp7 = (max_w <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2370)
	if ((tmp7)){
		HX_STACK_LINE(2370)
		Float tmp8 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2370)
		max_w = tmp8;
	}
	HX_STACK_LINE(2371)
	bool tmp8 = (max_h <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2371)
	if ((tmp8)){
		HX_STACK_LINE(2371)
		Float tmp9 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2371)
		max_h = tmp9;
	}
	struct _Function_1_1{
		inline static Dynamic Block( Float &max_w,Float &max_h,Float &min_w,Float &min_h){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2373,0xf354486a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("min_width","\x59","\x88","\xfd","\xea") , min_w,false);
				__result->Add(HX_HCSTRING("min_height","\x34","\x3e","\x29","\x69") , min_h,false);
				__result->Add(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1") , max_w,false);
				__result->Add(HX_HCSTRING("max_height","\x62","\x6b","\x96","\x0d") , max_h,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(2373)
	Dynamic tmp9 = _Function_1_1::Block(max_w,max_h,min_w,min_h);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2373)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,calcMaxMinSize,return )

Float FlxUI_obj::_getDataSize( ::String target,::String str,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getDataSize",0xaed2247b,"flixel.addons.ui.FlxUI._getDataSize","flixel/addons/ui/FlxUI.hx",2376,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(2378)
		::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2378)
		bool tmp1 = ::flixel::addons::ui::U_obj::isStrNum(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2378)
		if ((tmp1)){
			HX_STACK_LINE(2379)
			::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2379)
			Float tmp3 = ::Std_obj::parseFloat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2379)
			return tmp3;
		}
		HX_STACK_LINE(2382)
		::String tmp2 = str;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2382)
		Float tmp3 = ::flixel::addons::ui::U_obj::perc_to_float(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2382)
		Float percf = tmp3;		HX_STACK_VAR(percf,"percf");
		HX_STACK_LINE(2383)
		Float tmp4 = percf;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2383)
		bool tmp5 = ::Math_obj::isNaN(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2383)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2383)
		if ((tmp6)){
			HX_STACK_LINE(2384)
			::String tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2384)
			::String _switch_34 = (tmp7);
			if (  ( _switch_34==HX_HCSTRING("w","\x77","\x00","\x00","\x00")) ||  ( _switch_34==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
				HX_STACK_LINE(2385)
				int tmp8 = this->thisWidth();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2385)
				Float tmp9 = percf;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2385)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2385)
				return tmp10;
			}
			else if (  ( _switch_34==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_34==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
				HX_STACK_LINE(2386)
				int tmp8 = this->thisHeight();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2386)
				Float tmp9 = percf;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2386)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2386)
				return tmp10;
			}
		}
		else{
			HX_STACK_LINE(2389)
			int tmp7 = str.indexOf(HX_HCSTRING("stretch:","\x95","\x06","\x83","\x92"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2389)
			bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2389)
			if ((tmp8)){
				HX_STACK_LINE(2390)
				::String tmp9 = str;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2390)
				::String tmp10 = ::StringTools_obj::replace(tmp9,HX_HCSTRING("stretch:","\x95","\x06","\x83","\x92"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2390)
				str = tmp10;
				HX_STACK_LINE(2391)
				Array< ::String > arr = str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(2392)
				::String tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2392)
				::String tmp12 = arr->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(2392)
				Float tmp13 = this->_getStretch((int)0,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(2392)
				Float stretch_0 = tmp13;		HX_STACK_VAR(stretch_0,"stretch_0");
				HX_STACK_LINE(2393)
				::String tmp14 = target;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2393)
				::String tmp15 = arr->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2393)
				Float tmp16 = this->_getStretch((int)1,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2393)
				Float stretch_1 = tmp16;		HX_STACK_VAR(stretch_1,"stretch_1");
				HX_STACK_LINE(2394)
				Float tmp17 = stretch_0;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2394)
				int tmp18 = (int)-1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2394)
				bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2394)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2394)
				if ((tmp19)){
					HX_STACK_LINE(2394)
					tmp20 = (stretch_1 != (int)-1);
				}
				else{
					HX_STACK_LINE(2394)
					tmp20 = false;
				}
				HX_STACK_LINE(2394)
				if ((tmp20)){
					HX_STACK_LINE(2395)
					Float tmp21 = (stretch_1 - stretch_0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2395)
					return tmp21;
				}
				else{
					HX_STACK_LINE(2397)
					Float tmp21 = default_;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2397)
					return tmp21;
				}
			}
			else{
				HX_STACK_LINE(2399)
				int tmp9 = str.indexOf(HX_HCSTRING("asset:","\x4a","\x48","\x03","\x4c"),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2399)
				bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2399)
				if ((tmp10)){
					HX_STACK_LINE(2400)
					::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2400)
					::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("asset:","\x4a","\x48","\x03","\x4c"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2400)
					str = tmp12;
					HX_STACK_LINE(2401)
					::String tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2401)
					::String tmp14 = str;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2401)
					Float tmp15 = this->_getStretch((int)1,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2401)
					Float assetValue = tmp15;		HX_STACK_VAR(assetValue,"assetValue");
					HX_STACK_LINE(2402)
					Float tmp16 = assetValue;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2402)
					return tmp16;
				}
				else{
					HX_STACK_LINE(2404)
					::EReg tmp11 = ::EReg_obj::__new(HX_HCSTRING("[\\w]+\\.[\\w]+","\xee","\xda","\x86","\x47"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2404)
					::EReg r = tmp11;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2405)
					::String tmp12 = str;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2405)
					bool tmp13 = r->match(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2405)
					if ((tmp13)){
						HX_STACK_LINE(2406)
						::String tmp14 = target;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2406)
						::String tmp15 = str;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2406)
						Float tmp16 = this->_getStretch((int)1,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2406)
						Float assetValue = tmp16;		HX_STACK_VAR(assetValue,"assetValue");
						HX_STACK_LINE(2407)
						Float tmp17 = assetValue;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2407)
						return tmp17;
					}
				}
			}
		}
		HX_STACK_LINE(2412)
		Float tmp7 = default_;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2412)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getDataSize,return )

cpp::ArrayBase FlxUI_obj::_getOperation( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getOperation",0x2685c1b7,"flixel.addons.ui.FlxUI._getOperation","flixel/addons/ui/FlxUI.hx",2423,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2424)
	Array< ::String > list = Array_obj< ::String >::__new().Add(HX_HCSTRING("+","\x2b","\x00","\x00","\x00")).Add(HX_HCSTRING("-","\x2d","\x00","\x00","\x00")).Add(HX_HCSTRING("*","\x2a","\x00","\x00","\x00")).Add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00")).Add(HX_HCSTRING("^","\x5e","\x00","\x00","\x00"));		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(2425)
	Array< ::String > temp = null();		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2427)
	{
		HX_STACK_LINE(2427)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2427)
		while((true)){
			HX_STACK_LINE(2427)
			bool tmp = (_g < list->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2427)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2427)
			if ((tmp1)){
				HX_STACK_LINE(2427)
				break;
			}
			HX_STACK_LINE(2427)
			::String tmp2 = list->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2427)
			::String _operator = tmp2;		HX_STACK_VAR(_operator,"operator");
			HX_STACK_LINE(2427)
			++(_g);
			HX_STACK_LINE(2428)
			::String tmp3 = _operator;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2428)
			int tmp4 = str.indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2428)
			bool tmp5 = (tmp4 != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2428)
			if ((tmp5)){
				HX_STACK_LINE(2429)
				::String tmp6 = _operator;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2429)
				temp = str.split(tmp6);
				HX_STACK_LINE(2430)
				bool tmp7 = (temp != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2430)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2430)
				if ((tmp7)){
					HX_STACK_LINE(2430)
					tmp8 = (temp->length == (int)2);
				}
				else{
					HX_STACK_LINE(2430)
					tmp8 = false;
				}
				HX_STACK_LINE(2430)
				if ((tmp8)){
					HX_STACK_LINE(2431)
					::String tmp9 = temp->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2431)
					Float tmp10 = ::Std_obj::parseFloat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2431)
					Float f = tmp10;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2432)
					bool tmp11 = (f == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2432)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2432)
					if ((tmp11)){
						HX_STACK_LINE(2432)
						::String tmp13 = temp->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2432)
						::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2432)
						tmp12 = (tmp14 != HX_HCSTRING("0","\x30","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(2432)
						tmp12 = false;
					}
					HX_STACK_LINE(2432)
					if ((tmp12)){
						HX_STACK_LINE(2433)
						return null();
					}
					else{
						HX_STACK_LINE(2435)
						::String tmp13 = temp->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2435)
						::String tmp14 = _operator;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2435)
						Float tmp15 = f;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2435)
						return cpp::ArrayBase_obj::__new().Add(tmp13).Add(tmp14).Add(tmp15);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2441)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_getOperation,return )

Float FlxUI_obj::_doOperation( Float value,::String _operator,Float operand){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_doOperation",0xf65624d6,"flixel.addons.ui.FlxUI._doOperation","flixel/addons/ui/FlxUI.hx",2444,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_operator,"operator")
	HX_STACK_ARG(operand,"operand")
	HX_STACK_LINE(2445)
	::String tmp = _operator;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2445)
	::String _switch_35 = (tmp);
	if (  ( _switch_35==HX_HCSTRING("+","\x2b","\x00","\x00","\x00"))){
		HX_STACK_LINE(2446)
		Float tmp1 = (value + operand);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2446)
		return tmp1;
	}
	else if (  ( _switch_35==HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))){
		HX_STACK_LINE(2447)
		Float tmp1 = (value - operand);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2447)
		return tmp1;
	}
	else if (  ( _switch_35==HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))){
		HX_STACK_LINE(2448)
		Float tmp1 = (Float(value) / Float(operand));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2448)
		return tmp1;
	}
	else if (  ( _switch_35==HX_HCSTRING("*","\x2a","\x00","\x00","\x00"))){
		HX_STACK_LINE(2449)
		Float tmp1 = (value * operand);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2449)
		return tmp1;
	}
	else if (  ( _switch_35==HX_HCSTRING("^","\x5e","\x00","\x00","\x00"))){
		HX_STACK_LINE(2450)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2450)
		Float tmp2 = operand;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2450)
		Float tmp3 = ::Math_obj::pow(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2450)
		return tmp3;
	}
	HX_STACK_LINE(2452)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2452)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_doOperation,return )

Float FlxUI_obj::_getStretch( int index,::String target,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getStretch",0xd40af795,"flixel.addons.ui.FlxUI._getStretch","flixel/addons/ui/FlxUI.hx",2455,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2456)
	cpp::ArrayBase arr = null();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(2457)
	::String prop = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prop,"prop");
	HX_STACK_LINE(2458)
	::String _operator = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(_operator,"operator");
	HX_STACK_LINE(2459)
	Float operand = (int)0;		HX_STACK_VAR(operand,"operand");
	HX_STACK_LINE(2461)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2461)
	arr = this->_getOperation(tmp);
	HX_STACK_LINE(2462)
	bool tmp1 = (arr != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2462)
	if ((tmp1)){
		HX_STACK_LINE(2463)
		Dynamic tmp2 = arr->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2463)
		str = ((::String)(tmp2));
		HX_STACK_LINE(2464)
		Dynamic tmp3 = arr->__GetItem((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2464)
		_operator = ((::String)(tmp3));
		HX_STACK_LINE(2465)
		Dynamic tmp4 = arr->__GetItem((int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2465)
		operand = ((Float)(tmp4));
	}
	HX_STACK_LINE(2468)
	int tmp2 = str.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2468)
	bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2468)
	if ((tmp3)){
		HX_STACK_LINE(2469)
		arr = str.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
		HX_STACK_LINE(2470)
		Dynamic tmp4 = arr->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2470)
		str = tmp4;
		HX_STACK_LINE(2471)
		Dynamic tmp5 = arr->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2471)
		prop = tmp5;
	}
	HX_STACK_LINE(2474)
	::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2474)
	::flixel::addons::ui::interfaces::IFlxUIWidget tmp5 = this->getAsset(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2474)
	::flixel::addons::ui::interfaces::IFlxUIWidget other = tmp5;		HX_STACK_VAR(other,"other");
	HX_STACK_LINE(2476)
	Float return_val = (int)0;		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(2478)
	bool tmp6 = (other == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2478)
	if ((tmp6)){
		HX_STACK_LINE(2479)
		::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2479)
		::String _switch_36 = (tmp7);
		if (  ( _switch_36==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) ||  ( _switch_36==HX_HCSTRING("up","\x5b","\x66","\x00","\x00"))){
			HX_STACK_LINE(2480)
			return_val = (int)0;
		}
		else if (  ( _switch_36==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) ||  ( _switch_36==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"))){
			HX_STACK_LINE(2481)
			int tmp8 = this->thisHeight();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2481)
			return_val = tmp8;
		}
		else if (  ( _switch_36==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
			HX_STACK_LINE(2482)
			return_val = (int)0;
		}
		else if (  ( _switch_36==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
			HX_STACK_LINE(2483)
			int tmp8 = this->thisWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2483)
			return_val = tmp8;
		}
		else  {
			HX_STACK_LINE(2485)
			::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2485)
			bool tmp9 = ::flixel::addons::ui::U_obj::isStrNum(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2485)
			if ((tmp9)){
				HX_STACK_LINE(2486)
				::String tmp10 = str;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2486)
				Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2486)
				return_val = tmp11;
			}
			else{
				HX_STACK_LINE(2488)
				return_val = (int)-1;
			}
		}
;
;
	}
	else{
		HX_STACK_LINE(2492)
		::String tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2492)
		::String _switch_37 = (tmp7);
		if (  ( _switch_37==HX_HCSTRING("w","\x77","\x00","\x00","\x00")) ||  ( _switch_37==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
			HX_STACK_LINE(2494)
			bool tmp8 = (prop == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2494)
			if ((tmp8)){
				HX_STACK_LINE(2495)
				bool tmp9 = (index == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2495)
				if ((tmp9)){
					HX_STACK_LINE(2495)
					Float tmp10 = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2495)
					Float tmp11 = other->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2495)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2495)
					return_val = tmp12;
				}
				HX_STACK_LINE(2496)
				bool tmp10 = (index == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2496)
				if ((tmp10)){
					HX_STACK_LINE(2496)
					return_val = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
				}
			}
			else{
				HX_STACK_LINE(2498)
				::String tmp9 = prop;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2498)
				::String _switch_38 = (tmp9);
				if (  ( _switch_38==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) ||  ( _switch_38==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) ||  ( _switch_38==HX_HCSTRING("y","\x79","\x00","\x00","\x00"))){
					HX_STACK_LINE(2499)
					return_val = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
				}
				else if (  ( _switch_38==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) ||  ( _switch_38==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"))){
					HX_STACK_LINE(2500)
					Float tmp10 = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2500)
					Float tmp11 = other->get_height();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2500)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2500)
					return_val = tmp12;
				}
				else if (  ( _switch_38==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(2501)
					Float tmp10 = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2501)
					Float tmp11 = other->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2501)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2501)
					return_val = tmp12;
				}
				else if (  ( _switch_38==HX_HCSTRING("left","\x07","\x08","\xb0","\x47")) ||  ( _switch_38==HX_HCSTRING("x","\x78","\x00","\x00","\x00"))){
					HX_STACK_LINE(2502)
					return_val = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
				}
				else if (  ( _switch_38==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(2503)
					Float tmp10 = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2503)
					Float tmp11 = other->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2503)
					Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2503)
					Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2503)
					return_val = tmp13;
				}
				else if (  ( _switch_38==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
					HX_STACK_LINE(2504)
					Float tmp10 = other->get_width();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2504)
					return_val = tmp10;
				}
				else if (  ( _switch_38==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
					HX_STACK_LINE(2505)
					Float tmp10 = other->get_height();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2505)
					return_val = tmp10;
				}
			}
		}
		else if (  ( _switch_37==HX_HCSTRING("h","\x68","\x00","\x00","\x00")) ||  ( _switch_37==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
			HX_STACK_LINE(2509)
			bool tmp8 = (prop == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2509)
			if ((tmp8)){
				HX_STACK_LINE(2510)
				bool tmp9 = (index == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2510)
				if ((tmp9)){
					HX_STACK_LINE(2510)
					Float tmp10 = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2510)
					Float tmp11 = other->get_height();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2510)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2510)
					return_val = tmp12;
				}
				HX_STACK_LINE(2511)
				bool tmp10 = (index == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2511)
				if ((tmp10)){
					HX_STACK_LINE(2511)
					return_val = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
				}
			}
			else{
				HX_STACK_LINE(2513)
				::String tmp9 = prop;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2513)
				::String _switch_39 = (tmp9);
				if (  ( _switch_39==HX_HCSTRING("top","\x95","\x66","\x58","\x00")) ||  ( _switch_39==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) ||  ( _switch_39==HX_HCSTRING("y","\x79","\x00","\x00","\x00"))){
					HX_STACK_LINE(2514)
					return_val = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
				}
				else if (  ( _switch_39==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")) ||  ( _switch_39==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"))){
					HX_STACK_LINE(2515)
					Float tmp10 = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2515)
					Float tmp11 = other->get_height();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2515)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2515)
					return_val = tmp12;
				}
				else if (  ( _switch_39==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(2516)
					Float tmp10 = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2516)
					Float tmp11 = other->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2516)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2516)
					return_val = tmp12;
				}
				else if (  ( _switch_39==HX_HCSTRING("left","\x07","\x08","\xb0","\x47")) ||  ( _switch_39==HX_HCSTRING("x","\x78","\x00","\x00","\x00"))){
					HX_STACK_LINE(2517)
					return_val = other->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
				}
				else if (  ( _switch_39==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(2518)
					Float tmp10 = other->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2518)
					Float tmp11 = other->get_height();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2518)
					Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2518)
					Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2518)
					return_val = tmp13;
				}
				else if (  ( _switch_39==HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"))){
					HX_STACK_LINE(2519)
					Float tmp10 = other->get_height();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2519)
					return_val = tmp10;
				}
				else if (  ( _switch_39==HX_HCSTRING("width","\x06","\xb6","\x62","\xca"))){
					HX_STACK_LINE(2520)
					Float tmp10 = other->get_width();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2520)
					return_val = tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(2526)
	Float tmp7 = return_val;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2526)
	int tmp8 = (int)-1;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2526)
	bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2526)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2526)
	if ((tmp9)){
		HX_STACK_LINE(2526)
		tmp10 = (_operator != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(2526)
		tmp10 = false;
	}
	HX_STACK_LINE(2526)
	if ((tmp10)){
		HX_STACK_LINE(2527)
		Float tmp11 = return_val;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2527)
		::String tmp12 = _operator;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2527)
		Float tmp13 = operand;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2527)
		Float tmp14 = this->_doOperation(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2527)
		return_val = tmp14;
	}
	HX_STACK_LINE(2530)
	Float tmp11 = return_val;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(2530)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getStretch,return )

Void FlxUI_obj::_loadPosition( ::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IFlxUIWidget thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadPosition",0xfb522df5,"flixel.addons.ui.FlxUI._loadPosition","flixel/addons/ui/FlxUI.hx",2533,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(2534)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2534)
		{
			HX_STACK_LINE(2534)
			Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
			HX_STACK_LINE(2534)
			::haxe::xml::Fast tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2534)
			Float tmp2 = default_;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2534)
			tmp = this->_loadWidth(tmp1,tmp2,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(2534)
		Float X = tmp;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(2535)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2535)
		{
			HX_STACK_LINE(2535)
			Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
			HX_STACK_LINE(2535)
			::haxe::xml::Fast tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2535)
			Float tmp3 = default_;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2535)
			tmp1 = this->_loadHeight(tmp2,tmp3,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(2535)
		Float Y = tmp1;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(2537)
		::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2537)
		bool tmp3 = ::flixel::addons::ui::U_obj::xml_bool(tmp2,HX_HCSTRING("center_x","\x4e","\x58","\x50","\x8f"),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2537)
		bool ctrX = tmp3;		HX_STACK_VAR(ctrX,"ctrX");
		HX_STACK_LINE(2538)
		::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2538)
		bool tmp5 = ::flixel::addons::ui::U_obj::xml_bool(tmp4,HX_HCSTRING("center_y","\x4f","\x58","\x50","\x8f"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2538)
		bool ctrY = tmp5;		HX_STACK_VAR(ctrY,"ctrY");
		HX_STACK_LINE(2540)
		::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2540)
		::String tmp7 = ::flixel::addons::ui::U_obj::xml_str(tmp6,HX_HCSTRING("center_on","\x89","\xe4","\xfc","\xd6"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(2540)
		::String center_on = tmp7;		HX_STACK_VAR(center_on,"center_on");
		HX_STACK_LINE(2541)
		::Xml tmp8 = data->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2541)
		::String tmp9 = ::flixel::addons::ui::U_obj::xml_str(tmp8,HX_HCSTRING("center_on_x","\x02","\x2c","\x66","\x3b"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(2541)
		::String center_on_x = tmp9;		HX_STACK_VAR(center_on_x,"center_on_x");
		HX_STACK_LINE(2542)
		::Xml tmp10 = data->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2542)
		::String tmp11 = ::flixel::addons::ui::U_obj::xml_str(tmp10,HX_HCSTRING("center_on_y","\x03","\x2c","\x66","\x3b"),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2542)
		::String center_on_y = tmp11;		HX_STACK_VAR(center_on_y,"center_on_y");
		HX_STACK_LINE(2544)
		::String anchor_x_str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(anchor_x_str,"anchor_x_str");
		HX_STACK_LINE(2545)
		::String anchor_y_str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(anchor_y_str,"anchor_y_str");
		HX_STACK_LINE(2546)
		Float anchor_x = (int)0;		HX_STACK_VAR(anchor_x,"anchor_x");
		HX_STACK_LINE(2547)
		Float anchor_y = (int)0;		HX_STACK_VAR(anchor_y,"anchor_y");
		HX_STACK_LINE(2548)
		::String anchor_x_flush = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(anchor_x_flush,"anchor_x_flush");
		HX_STACK_LINE(2549)
		::String anchor_y_flush = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(anchor_y_flush,"anchor_y_flush");
		HX_STACK_LINE(2551)
		bool tmp12 = data->hasNode->resolve(HX_HCSTRING("anchor","\x75","\x3a","\x71","\x60"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2551)
		if ((tmp12)){
			HX_STACK_LINE(2552)
			::haxe::xml::Fast tmp13 = data->node->resolve(HX_HCSTRING("anchor","\x75","\x3a","\x71","\x60"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2552)
			::Xml tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2552)
			::String tmp15 = ::flixel::addons::ui::U_obj::xml_str(tmp14,HX_HCSTRING("x","\x78","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2552)
			anchor_x_str = tmp15;
			HX_STACK_LINE(2553)
			::haxe::xml::Fast tmp16 = data->node->resolve(HX_HCSTRING("anchor","\x75","\x3a","\x71","\x60"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2553)
			::Xml tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2553)
			::String tmp18 = ::flixel::addons::ui::U_obj::xml_str(tmp17,HX_HCSTRING("y","\x79","\x00","\x00","\x00"),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2553)
			anchor_y_str = tmp18;
			HX_STACK_LINE(2555)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp19 = thing;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2555)
			::String tmp20 = anchor_x_str;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2555)
			Float tmp21 = this->_getAnchorPos(tmp19,HX_HCSTRING("x","\x78","\x00","\x00","\x00"),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2555)
			anchor_x = tmp21;
			HX_STACK_LINE(2556)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp22 = thing;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2556)
			::String tmp23 = anchor_y_str;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2556)
			Float tmp24 = this->_getAnchorPos(tmp22,HX_HCSTRING("y","\x79","\x00","\x00","\x00"),tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2556)
			anchor_y = tmp24;
			HX_STACK_LINE(2557)
			::haxe::xml::Fast tmp25 = data->node->resolve(HX_HCSTRING("anchor","\x75","\x3a","\x71","\x60"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2557)
			::Xml tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2557)
			::String tmp27 = ::flixel::addons::ui::U_obj::xml_str(tmp26,HX_HCSTRING("x-flush","\xef","\x49","\xba","\x7e"),true,null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2557)
			anchor_x_flush = tmp27;
			HX_STACK_LINE(2558)
			::haxe::xml::Fast tmp28 = data->node->resolve(HX_HCSTRING("anchor","\x75","\x3a","\x71","\x60"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2558)
			::Xml tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2558)
			::String tmp30 = ::flixel::addons::ui::U_obj::xml_str(tmp29,HX_HCSTRING("y-flush","\xb0","\xc0","\x4f","\xa8"),true,null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2558)
			anchor_y_flush = tmp30;
		}
		HX_STACK_LINE(2562)
		bool tmp13 = (anchor_x_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(2562)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2562)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(2562)
		if ((tmp14)){
			HX_STACK_LINE(2562)
			tmp15 = (anchor_y_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(2562)
			tmp15 = true;
		}
		HX_STACK_LINE(2562)
		if ((tmp15)){
			HX_STACK_LINE(2563)
			::String tmp16 = anchor_x_flush;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2563)
			::String _switch_40 = (tmp16);
			if (  ( _switch_40==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
			}
			else if (  ( _switch_40==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
				HX_STACK_LINE(2565)
				Float tmp17 = anchor_x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2565)
				Float tmp18 = thing->get_width();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2565)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2565)
				anchor_x = tmp19;
			}
			else if (  ( _switch_40==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
				HX_STACK_LINE(2566)
				Float tmp17 = anchor_x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2566)
				Float tmp18 = thing->get_width();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2566)
				Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2566)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2566)
				anchor_x = tmp20;
			}
			HX_STACK_LINE(2568)
			::String tmp17 = anchor_y_flush;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2568)
			::String _switch_41 = (tmp17);
			if (  ( _switch_41==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) ||  ( _switch_41==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
			}
			else if (  ( _switch_41==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) ||  ( _switch_41==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
				HX_STACK_LINE(2570)
				Float tmp18 = anchor_y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2570)
				Float tmp19 = thing->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2570)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2570)
				anchor_y = tmp20;
			}
			else if (  ( _switch_41==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
				HX_STACK_LINE(2571)
				Float tmp18 = anchor_y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2571)
				Float tmp19 = thing->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2571)
				Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2571)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2571)
				anchor_y = tmp21;
			}
			HX_STACK_LINE(2574)
			bool tmp18 = (anchor_x_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2574)
			if ((tmp18)){
				HX_STACK_LINE(2575)
				Float tmp19 = anchor_x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(2575)
				thing->set_x(tmp19);
			}
			HX_STACK_LINE(2577)
			bool tmp19 = (anchor_y_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2577)
			if ((tmp19)){
				HX_STACK_LINE(2578)
				Float tmp20 = anchor_y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2578)
				thing->set_y(tmp20);
			}
		}
		HX_STACK_LINE(2584)
		bool tmp16 = ctrX;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(2584)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(2584)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(2584)
		if ((tmp17)){
			HX_STACK_LINE(2584)
			tmp18 = ctrY;
		}
		else{
			HX_STACK_LINE(2584)
			tmp18 = true;
		}
		HX_STACK_LINE(2584)
		if ((tmp18)){
			HX_STACK_LINE(2585)
			bool tmp19 = ctrX;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2585)
			if ((tmp19)){
				HX_STACK_LINE(2585)
				int tmp20 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2585)
				Float tmp21 = thing->get_width();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2585)
				Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2585)
				Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2585)
				thing->set_x(tmp23);
			}
			HX_STACK_LINE(2585)
			bool tmp20 = ctrY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2585)
			if ((tmp20)){
				HX_STACK_LINE(2585)
				int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2585)
				Float tmp22 = thing->get_height();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2585)
				Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2585)
				Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2585)
				thing->set_y(tmp24);
			}
			HX_STACK_LINE(2585)
			thing;
		}
		HX_STACK_LINE(2589)
		bool tmp19 = (center_on != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(2589)
		if ((tmp19)){
			HX_STACK_LINE(2590)
			::String tmp20 = center_on;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2590)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp21 = this->getAsset(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2590)
			::flixel::addons::ui::interfaces::IFlxUIWidget other = tmp21;		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(2591)
			bool tmp22 = (other != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2591)
			if ((tmp22)){
				HX_STACK_LINE(2592)
				::flixel::FlxObject tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2592)
				tmp23 = hx::TCast< ::flixel::FlxObject >::cast(other);
				HX_STACK_LINE(2592)
				::flixel::FlxObject fb1 = tmp23;		HX_STACK_VAR(fb1,"fb1");
				HX_STACK_LINE(2592)
				::flixel::FlxObject tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2592)
				tmp24 = hx::TCast< ::flixel::FlxObject >::cast(thing);
				HX_STACK_LINE(2592)
				::flixel::FlxObject fb2 = tmp24;		HX_STACK_VAR(fb2,"fb2");
				HX_STACK_LINE(2592)
				bool centerX = true;		HX_STACK_VAR(centerX,"centerX");
				HX_STACK_LINE(2592)
				bool centerY = true;		HX_STACK_VAR(centerY,"centerY");
				HX_STACK_LINE(2592)
				bool tmp25 = centerX;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(2592)
				if ((tmp25)){
					HX_STACK_LINE(2592)
					Float tmp26 = fb1->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2592)
					Float tmp27 = fb1->get_width();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2592)
					Float tmp28 = fb2->get_width();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2592)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2592)
					Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2592)
					Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2592)
					fb2->set_x(tmp31);
				}
				HX_STACK_LINE(2592)
				bool tmp26 = centerY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(2592)
				if ((tmp26)){
					HX_STACK_LINE(2592)
					Float tmp27 = fb1->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(2592)
					Float tmp28 = fb1->get_height();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(2592)
					Float tmp29 = fb2->get_height();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(2592)
					Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(2592)
					Float tmp31 = (Float(tmp30) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2592)
					Float tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2592)
					fb2->set_y(tmp32);
				}
			}
		}
		else{
			HX_STACK_LINE(2595)
			bool tmp20 = (center_on_x != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2595)
			if ((tmp20)){
				HX_STACK_LINE(2596)
				::String tmp21 = center_on;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(2596)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp22 = this->getAsset(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2596)
				::flixel::addons::ui::interfaces::IFlxUIWidget other = tmp22;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(2597)
				bool tmp23 = (other != null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2597)
				if ((tmp23)){
					HX_STACK_LINE(2598)
					::flixel::FlxObject tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(2598)
					tmp24 = hx::TCast< ::flixel::FlxObject >::cast(other);
					HX_STACK_LINE(2598)
					::flixel::FlxObject fb1 = tmp24;		HX_STACK_VAR(fb1,"fb1");
					HX_STACK_LINE(2598)
					::flixel::FlxObject tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2598)
					tmp25 = hx::TCast< ::flixel::FlxObject >::cast(thing);
					HX_STACK_LINE(2598)
					::flixel::FlxObject fb2 = tmp25;		HX_STACK_VAR(fb2,"fb2");
					HX_STACK_LINE(2598)
					{
						HX_STACK_LINE(2598)
						Float tmp26 = fb1->x;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(2598)
						Float tmp27 = fb1->get_width();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2598)
						Float tmp28 = fb2->get_width();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2598)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2598)
						Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2598)
						Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2598)
						fb2->set_x(tmp31);
					}
					HX_STACK_LINE(2598)
					{
					}
				}
			}
			HX_STACK_LINE(2601)
			bool tmp21 = (center_on_y != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2601)
			if ((tmp21)){
				HX_STACK_LINE(2602)
				::String tmp22 = center_on;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(2602)
				::flixel::addons::ui::interfaces::IFlxUIWidget tmp23 = this->getAsset(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(2602)
				::flixel::addons::ui::interfaces::IFlxUIWidget other = tmp23;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(2603)
				bool tmp24 = (other != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(2603)
				if ((tmp24)){
					HX_STACK_LINE(2604)
					::flixel::FlxObject tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(2604)
					tmp25 = hx::TCast< ::flixel::FlxObject >::cast(other);
					HX_STACK_LINE(2604)
					::flixel::FlxObject fb1 = tmp25;		HX_STACK_VAR(fb1,"fb1");
					HX_STACK_LINE(2604)
					::flixel::FlxObject tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(2604)
					tmp26 = hx::TCast< ::flixel::FlxObject >::cast(thing);
					HX_STACK_LINE(2604)
					::flixel::FlxObject fb2 = tmp26;		HX_STACK_VAR(fb2,"fb2");
					HX_STACK_LINE(2604)
					{
						HX_STACK_LINE(2604)
						Float tmp27 = fb1->y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(2604)
						Float tmp28 = fb1->get_height();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(2604)
						Float tmp29 = fb2->get_height();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(2604)
						Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(2604)
						Float tmp31 = (Float(tmp30) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(2604)
						Float tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(2604)
						fb2->set_y(tmp32);
					}
				}
			}
		}
		HX_STACK_LINE(2610)
		{
			HX_STACK_LINE(2610)
			{
				HX_STACK_LINE(2610)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2610)
				Float tmp20 = (_g->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + X);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2610)
				_g->set_x(tmp20);
			}
			HX_STACK_LINE(2610)
			{
				HX_STACK_LINE(2610)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2610)
				Float tmp20 = (_g->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + Y);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(2610)
				_g->set_y(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadPosition,(void))

::flixel::addons::ui::BorderDef FlxUI_obj::_loadBorder( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadBorder",0xa79baf38,"flixel.addons.ui.FlxUI._loadBorder","flixel/addons/ui/FlxUI.hx",2614,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2615)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2615)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2615)
	::String border_str = tmp1;		HX_STACK_VAR(border_str,"border_str");
	HX_STACK_LINE(2616)
	int border_style = (int)0;		HX_STACK_VAR(border_style,"border_style");
	HX_STACK_LINE(2617)
	::haxe::xml::Fast tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2617)
	int tmp3 = this->_loadColor(tmp2,HX_HCSTRING("border_color","\x90","\x7e","\xe8","\x6e"),(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2617)
	int border_color = tmp3;		HX_STACK_VAR(border_color,"border_color");
	HX_STACK_LINE(2618)
	::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2618)
	int tmp5 = ::flixel::addons::ui::U_obj::xml_i(tmp4,HX_HCSTRING("border_size","\x34","\x18","\xb0","\xf8"),(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2618)
	int border_size = tmp5;		HX_STACK_VAR(border_size,"border_size");
	HX_STACK_LINE(2619)
	::Xml tmp6 = data->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2619)
	Float tmp7 = ::flixel::addons::ui::U_obj::xml_f(tmp6,HX_HCSTRING("border_quality","\x2c","\x77","\xd7","\xad"),(int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2619)
	Float border_quality = tmp7;		HX_STACK_VAR(border_quality,"border_quality");
	HX_STACK_LINE(2621)
	::flixel::addons::ui::BorderDef tmp8 = ::flixel::addons::ui::BorderDef_obj::__new(border_style,border_color,border_size,border_quality);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2621)
	::flixel::addons::ui::BorderDef borderDef = tmp8;		HX_STACK_VAR(borderDef,"borderDef");
	HX_STACK_LINE(2623)
	::String tmp9 = border_str;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2623)
	::String _switch_42 = (tmp9);
	if (  ( _switch_42==HX_HCSTRING("shadow","\xe0","\xc7","\x20","\x1d"))){
		HX_STACK_LINE(2624)
		borderDef->style = (int)1;
	}
	else if (  ( _switch_42==HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"))){
		HX_STACK_LINE(2625)
		borderDef->style = (int)2;
	}
	else if (  ( _switch_42==HX_HCSTRING("outline_fast","\xb9","\x4f","\xfa","\x33"))){
		HX_STACK_LINE(2626)
		borderDef->style = (int)3;
	}
	else if (  ( _switch_42==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
		HX_STACK_LINE(2630)
		::Xml tmp10 = data->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2630)
		::String tmp11 = ::flixel::addons::ui::U_obj::xml_str(tmp10,HX_HCSTRING("shadow","\xe0","\xc7","\x20","\x1d"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(2630)
		border_str = tmp11;
		HX_STACK_LINE(2631)
		bool tmp12 = (border_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2631)
		if ((tmp12)){
			HX_STACK_LINE(2632)
			borderDef->style = (int)1;
			HX_STACK_LINE(2633)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2633)
			{
				HX_STACK_LINE(2633)
				::String str = border_str;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(2633)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2633)
				int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2633)
				int tmp14 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(2633)
				bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(2633)
				if ((tmp15)){
					HX_STACK_LINE(2633)
					bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(2633)
					if ((tmp16)){
						HX_STACK_LINE(2633)
						::String tmp17 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(2633)
						::String tmp18 = (tmp17 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(2633)
						HX_STACK_DO_THROW(tmp18);
					}
					else{
						HX_STACK_LINE(2633)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2633)
				bool tmp16 = (str.length != (int)8);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2633)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2633)
				if ((tmp16)){
					HX_STACK_LINE(2633)
					tmp17 = (str.length != (int)10);
				}
				else{
					HX_STACK_LINE(2633)
					tmp17 = false;
				}
				HX_STACK_LINE(2633)
				if ((tmp17)){
					HX_STACK_LINE(2633)
					bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2633)
					if ((tmp18)){
						HX_STACK_LINE(2633)
						::String tmp19 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2633)
						::String tmp20 = (tmp19 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2633)
						HX_STACK_DO_THROW(tmp20);
					}
					else{
						HX_STACK_LINE(2633)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2633)
				bool tmp18 = (return_val == (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2633)
				if ((tmp18)){
					HX_STACK_LINE(2633)
					int tmp19 = (str.length - (int)2);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2633)
					::String tmp20 = str.substr((int)2,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2633)
					str = tmp20;
					HX_STACK_LINE(2633)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2633)
					tmp21 = false;
					HX_STACK_LINE(2633)
					if ((tmp21)){
						HX_STACK_LINE(2633)
						::String tmp22 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2633)
						str = tmp22;
					}
					HX_STACK_LINE(2633)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(2633)
					{
						HX_STACK_LINE(2633)
						int length = str.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2633)
						int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
						HX_STACK_LINE(2633)
						int sum = (int)0;		HX_STACK_VAR(sum,"sum");
						HX_STACK_LINE(2633)
						int tmp23 = (length - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2633)
						int i = tmp23;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2633)
						while((true)){
							HX_STACK_LINE(2633)
							bool tmp24 = (i >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2633)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2633)
							if ((tmp25)){
								HX_STACK_LINE(2633)
								break;
							}
							HX_STACK_LINE(2633)
							int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2633)
							::String tmp27 = str.substr(tmp26,(int)1);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2633)
							::String char_hex = tmp27;		HX_STACK_VAR(char_hex,"char_hex");
							HX_STACK_LINE(2633)
							int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2633)
							{
								HX_STACK_LINE(2633)
								int val = (int)-1;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2633)
								::String tmp29 = char_hex;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2633)
								::String _switch_43 = (tmp29);
								if (  ( _switch_43==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
									HX_STACK_LINE(2633)
									::String tmp30 = char_hex;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2633)
									Dynamic tmp31 = ::Std_obj::parseInt(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2633)
									val = tmp31;
								}
								else if (  ( _switch_43==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
									HX_STACK_LINE(2633)
									val = (int)10;
								}
								else if (  ( _switch_43==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
									HX_STACK_LINE(2633)
									val = (int)11;
								}
								else if (  ( _switch_43==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
									HX_STACK_LINE(2633)
									val = (int)12;
								}
								else if (  ( _switch_43==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
									HX_STACK_LINE(2633)
									val = (int)13;
								}
								else if (  ( _switch_43==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
									HX_STACK_LINE(2633)
									val = (int)14;
								}
								else if (  ( _switch_43==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_43==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
									HX_STACK_LINE(2633)
									val = (int)15;
								}
								HX_STACK_LINE(2633)
								bool tmp30 = (val == (int)-1);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2633)
								if ((tmp30)){
									HX_STACK_LINE(2633)
									::String tmp31 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2633)
									::String tmp32 = (tmp31 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2633)
									HX_STACK_DO_THROW(tmp32);
								}
								HX_STACK_LINE(2633)
								tmp28 = val;
							}
							HX_STACK_LINE(2633)
							int char_int = tmp28;		HX_STACK_VAR(char_int,"char_int");
							HX_STACK_LINE(2633)
							int tmp29 = (char_int * place_mult);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(2633)
							hx::AddEq(sum,tmp29);
							HX_STACK_LINE(2633)
							hx::MultEq(place_mult,(int)16);
							HX_STACK_LINE(2633)
							(i)--;
						}
						HX_STACK_LINE(2633)
						tmp22 = sum;
					}
					HX_STACK_LINE(2633)
					return_val = tmp22;
				}
				HX_STACK_LINE(2633)
				tmp13 = return_val;
			}
			HX_STACK_LINE(2633)
			borderDef->color = tmp13;
		}
		else{
			HX_STACK_LINE(2635)
			::Xml tmp13 = data->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2635)
			::String tmp14 = ::flixel::addons::ui::U_obj::xml_str(tmp13,HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),true,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2635)
			border_str = tmp14;
			HX_STACK_LINE(2636)
			bool tmp15 = (border_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2636)
			if ((tmp15)){
				HX_STACK_LINE(2637)
				borderDef->style = (int)2;
				HX_STACK_LINE(2638)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2638)
				{
					HX_STACK_LINE(2638)
					::String str = border_str;		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(2638)
					int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
					HX_STACK_LINE(2638)
					int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
					HX_STACK_LINE(2638)
					int tmp17 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(2638)
					bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(2638)
					if ((tmp18)){
						HX_STACK_LINE(2638)
						bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(2638)
						if ((tmp19)){
							HX_STACK_LINE(2638)
							::String tmp20 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2638)
							::String tmp21 = (tmp20 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2638)
							HX_STACK_DO_THROW(tmp21);
						}
						else{
							HX_STACK_LINE(2638)
							return_val = default_color;
						}
					}
					HX_STACK_LINE(2638)
					bool tmp19 = (str.length != (int)8);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2638)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(2638)
					if ((tmp19)){
						HX_STACK_LINE(2638)
						tmp20 = (str.length != (int)10);
					}
					else{
						HX_STACK_LINE(2638)
						tmp20 = false;
					}
					HX_STACK_LINE(2638)
					if ((tmp20)){
						HX_STACK_LINE(2638)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2638)
						if ((tmp21)){
							HX_STACK_LINE(2638)
							::String tmp22 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2638)
							::String tmp23 = (tmp22 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(2638)
							HX_STACK_DO_THROW(tmp23);
						}
						else{
							HX_STACK_LINE(2638)
							return_val = default_color;
						}
					}
					HX_STACK_LINE(2638)
					bool tmp21 = (return_val == (int)-1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(2638)
					if ((tmp21)){
						HX_STACK_LINE(2638)
						int tmp22 = (str.length - (int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2638)
						::String tmp23 = str.substr((int)2,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2638)
						str = tmp23;
						HX_STACK_LINE(2638)
						bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2638)
						tmp24 = false;
						HX_STACK_LINE(2638)
						if ((tmp24)){
							HX_STACK_LINE(2638)
							::String tmp25 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2638)
							str = tmp25;
						}
						HX_STACK_LINE(2638)
						int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(2638)
						{
							HX_STACK_LINE(2638)
							int length = str.length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(2638)
							int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
							HX_STACK_LINE(2638)
							int sum = (int)0;		HX_STACK_VAR(sum,"sum");
							HX_STACK_LINE(2638)
							int tmp26 = (length - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2638)
							int i = tmp26;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2638)
							while((true)){
								HX_STACK_LINE(2638)
								bool tmp27 = (i >= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(2638)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2638)
								if ((tmp28)){
									HX_STACK_LINE(2638)
									break;
								}
								HX_STACK_LINE(2638)
								int tmp29 = i;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2638)
								::String tmp30 = str.substr(tmp29,(int)1);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(2638)
								::String char_hex = tmp30;		HX_STACK_VAR(char_hex,"char_hex");
								HX_STACK_LINE(2638)
								int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(2638)
								{
									HX_STACK_LINE(2638)
									int val = (int)-1;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(2638)
									::String tmp32 = char_hex;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2638)
									::String _switch_44 = (tmp32);
									if (  ( _switch_44==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
										HX_STACK_LINE(2638)
										::String tmp33 = char_hex;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(2638)
										Dynamic tmp34 = ::Std_obj::parseInt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2638)
										val = tmp34;
									}
									else if (  ( _switch_44==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
										HX_STACK_LINE(2638)
										val = (int)10;
									}
									else if (  ( _switch_44==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
										HX_STACK_LINE(2638)
										val = (int)11;
									}
									else if (  ( _switch_44==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
										HX_STACK_LINE(2638)
										val = (int)12;
									}
									else if (  ( _switch_44==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
										HX_STACK_LINE(2638)
										val = (int)13;
									}
									else if (  ( _switch_44==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
										HX_STACK_LINE(2638)
										val = (int)14;
									}
									else if (  ( _switch_44==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_44==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
										HX_STACK_LINE(2638)
										val = (int)15;
									}
									HX_STACK_LINE(2638)
									bool tmp33 = (val == (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2638)
									if ((tmp33)){
										HX_STACK_LINE(2638)
										::String tmp34 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(2638)
										::String tmp35 = (tmp34 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2638)
										HX_STACK_DO_THROW(tmp35);
									}
									HX_STACK_LINE(2638)
									tmp31 = val;
								}
								HX_STACK_LINE(2638)
								int char_int = tmp31;		HX_STACK_VAR(char_int,"char_int");
								HX_STACK_LINE(2638)
								int tmp32 = (char_int * place_mult);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(2638)
								hx::AddEq(sum,tmp32);
								HX_STACK_LINE(2638)
								hx::MultEq(place_mult,(int)16);
								HX_STACK_LINE(2638)
								(i)--;
							}
							HX_STACK_LINE(2638)
							tmp25 = sum;
						}
						HX_STACK_LINE(2638)
						return_val = tmp25;
					}
					HX_STACK_LINE(2638)
					tmp16 = return_val;
				}
				HX_STACK_LINE(2638)
				borderDef->color = tmp16;
			}
			else{
				HX_STACK_LINE(2640)
				::Xml tmp16 = data->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(2640)
				::String tmp17 = ::flixel::addons::ui::U_obj::xml_str(tmp16,HX_HCSTRING("outline_fast","\xb9","\x4f","\xfa","\x33"),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(2640)
				border_str = tmp17;
				HX_STACK_LINE(2641)
				bool tmp18 = (border_str != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(2641)
				if ((tmp18)){
					HX_STACK_LINE(2642)
					borderDef->style = (int)3;
					HX_STACK_LINE(2643)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(2643)
					{
						HX_STACK_LINE(2643)
						::String str = border_str;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(2643)
						int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
						HX_STACK_LINE(2643)
						int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
						HX_STACK_LINE(2643)
						int tmp20 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(2643)
						bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(2643)
						if ((tmp21)){
							HX_STACK_LINE(2643)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2643)
							if ((tmp22)){
								HX_STACK_LINE(2643)
								::String tmp23 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2643)
								::String tmp24 = (tmp23 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(2643)
								HX_STACK_DO_THROW(tmp24);
							}
							else{
								HX_STACK_LINE(2643)
								return_val = default_color;
							}
						}
						HX_STACK_LINE(2643)
						bool tmp22 = (str.length != (int)8);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(2643)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(2643)
						if ((tmp22)){
							HX_STACK_LINE(2643)
							tmp23 = (str.length != (int)10);
						}
						else{
							HX_STACK_LINE(2643)
							tmp23 = false;
						}
						HX_STACK_LINE(2643)
						if ((tmp23)){
							HX_STACK_LINE(2643)
							bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(2643)
							if ((tmp24)){
								HX_STACK_LINE(2643)
								::String tmp25 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(2643)
								::String tmp26 = (tmp25 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(2643)
								HX_STACK_DO_THROW(tmp26);
							}
							else{
								HX_STACK_LINE(2643)
								return_val = default_color;
							}
						}
						HX_STACK_LINE(2643)
						bool tmp24 = (return_val == (int)-1);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(2643)
						if ((tmp24)){
							HX_STACK_LINE(2643)
							int tmp25 = (str.length - (int)2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(2643)
							::String tmp26 = str.substr((int)2,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(2643)
							str = tmp26;
							HX_STACK_LINE(2643)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(2643)
							tmp27 = false;
							HX_STACK_LINE(2643)
							if ((tmp27)){
								HX_STACK_LINE(2643)
								::String tmp28 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(2643)
								str = tmp28;
							}
							HX_STACK_LINE(2643)
							int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(2643)
							{
								HX_STACK_LINE(2643)
								int length = str.length;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(2643)
								int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
								HX_STACK_LINE(2643)
								int sum = (int)0;		HX_STACK_VAR(sum,"sum");
								HX_STACK_LINE(2643)
								int tmp29 = (length - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(2643)
								int i = tmp29;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2643)
								while((true)){
									HX_STACK_LINE(2643)
									bool tmp30 = (i >= (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(2643)
									bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(2643)
									if ((tmp31)){
										HX_STACK_LINE(2643)
										break;
									}
									HX_STACK_LINE(2643)
									int tmp32 = i;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(2643)
									::String tmp33 = str.substr(tmp32,(int)1);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(2643)
									::String char_hex = tmp33;		HX_STACK_VAR(char_hex,"char_hex");
									HX_STACK_LINE(2643)
									int tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(2643)
									{
										HX_STACK_LINE(2643)
										int val = (int)-1;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(2643)
										::String tmp35 = char_hex;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(2643)
										::String _switch_45 = (tmp35);
										if (  ( _switch_45==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
											HX_STACK_LINE(2643)
											::String tmp36 = char_hex;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(2643)
											Dynamic tmp37 = ::Std_obj::parseInt(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2643)
											val = tmp37;
										}
										else if (  ( _switch_45==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
											HX_STACK_LINE(2643)
											val = (int)10;
										}
										else if (  ( _switch_45==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
											HX_STACK_LINE(2643)
											val = (int)11;
										}
										else if (  ( _switch_45==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
											HX_STACK_LINE(2643)
											val = (int)12;
										}
										else if (  ( _switch_45==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
											HX_STACK_LINE(2643)
											val = (int)13;
										}
										else if (  ( _switch_45==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
											HX_STACK_LINE(2643)
											val = (int)14;
										}
										else if (  ( _switch_45==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_45==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
											HX_STACK_LINE(2643)
											val = (int)15;
										}
										HX_STACK_LINE(2643)
										bool tmp36 = (val == (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(2643)
										if ((tmp36)){
											HX_STACK_LINE(2643)
											::String tmp37 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(2643)
											::String tmp38 = (tmp37 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(2643)
											HX_STACK_DO_THROW(tmp38);
										}
										HX_STACK_LINE(2643)
										tmp34 = val;
									}
									HX_STACK_LINE(2643)
									int char_int = tmp34;		HX_STACK_VAR(char_int,"char_int");
									HX_STACK_LINE(2643)
									int tmp35 = (char_int * place_mult);		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(2643)
									hx::AddEq(sum,tmp35);
									HX_STACK_LINE(2643)
									hx::MultEq(place_mult,(int)16);
									HX_STACK_LINE(2643)
									(i)--;
								}
								HX_STACK_LINE(2643)
								tmp28 = sum;
							}
							HX_STACK_LINE(2643)
							return_val = tmp28;
						}
						HX_STACK_LINE(2643)
						tmp19 = return_val;
					}
					HX_STACK_LINE(2643)
					borderDef->color = tmp19;
				}
			}
		}
	}
	HX_STACK_LINE(2649)
	::flixel::addons::ui::BorderDef tmp10 = borderDef;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2649)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadBorder,return )

int FlxUI_obj::_loadColor( ::haxe::xml::Fast data,::String __o_colorName,hx::Null< int >  __o__default){
::String colorName = __o_colorName.Default(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
int _default = __o__default.Default(-1);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadColor",0xb7b8dc97,"flixel.addons.ui.FlxUI._loadColor","flixel/addons/ui/FlxUI.hx",2652,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(colorName,"colorName")
	HX_STACK_ARG(_default,"_default")
{
		HX_STACK_LINE(2653)
		::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2653)
		::String tmp1 = colorName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2653)
		::String tmp2 = ::flixel::addons::ui::U_obj::xml_str(tmp,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2653)
		::String colorStr = tmp2;		HX_STACK_VAR(colorStr,"colorStr");
		HX_STACK_LINE(2654)
		bool tmp3 = (colorStr == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(2654)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2654)
		if ((tmp3)){
			HX_STACK_LINE(2654)
			::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2654)
			{
				HX_STACK_LINE(2654)
				::Xml _this = data->x;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2654)
				int tmp6 = _this->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2654)
				int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2654)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2654)
				bool tmp9 = (tmp6 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2654)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2654)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2654)
				if ((tmp11)){
					HX_STACK_LINE(2654)
					::String tmp12 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + _this->nodeType);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2654)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2654)
					::String tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2654)
					HX_STACK_DO_THROW(tmp14);
				}
				HX_STACK_LINE(2654)
				tmp5 = _this->nodeName;
			}
			HX_STACK_LINE(2654)
			::String tmp6 = colorName;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2654)
			tmp4 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(2654)
			tmp4 = false;
		}
		HX_STACK_LINE(2654)
		if ((tmp4)){
			HX_STACK_LINE(2655)
			::Xml tmp5 = data->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2655)
			::String tmp6 = ::flixel::addons::ui::U_obj::xml_str(tmp5,HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2655)
			colorStr = tmp6;
		}
		HX_STACK_LINE(2657)
		int color = _default;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(2658)
		bool tmp5 = (colorStr != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2658)
		if ((tmp5)){
			HX_STACK_LINE(2658)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2658)
			{
				HX_STACK_LINE(2658)
				::String str = colorStr;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(2658)
				bool safe = false;		HX_STACK_VAR(safe,"safe");
				HX_STACK_LINE(2658)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2658)
				int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2658)
				int tmp7 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2658)
				bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2658)
				if ((tmp8)){
					HX_STACK_LINE(2658)
					bool tmp9 = safe;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2658)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(2658)
					if ((tmp10)){
						HX_STACK_LINE(2658)
						::String tmp11 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2658)
						::String tmp12 = (tmp11 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(2658)
						HX_STACK_DO_THROW(tmp12);
					}
					else{
						HX_STACK_LINE(2658)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2658)
				bool tmp9 = (str.length != (int)8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2658)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2658)
				if ((tmp9)){
					HX_STACK_LINE(2658)
					tmp10 = (str.length != (int)10);
				}
				else{
					HX_STACK_LINE(2658)
					tmp10 = false;
				}
				HX_STACK_LINE(2658)
				if ((tmp10)){
					HX_STACK_LINE(2658)
					bool tmp11 = safe;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(2658)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2658)
					if ((tmp12)){
						HX_STACK_LINE(2658)
						::String tmp13 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(2658)
						::String tmp14 = (tmp13 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(2658)
						HX_STACK_DO_THROW(tmp14);
					}
					else{
						HX_STACK_LINE(2658)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2658)
				bool tmp11 = (return_val == (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2658)
				if ((tmp11)){
					HX_STACK_LINE(2658)
					int tmp12 = (str.length - (int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(2658)
					::String tmp13 = str.substr((int)2,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(2658)
					str = tmp13;
					HX_STACK_LINE(2658)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(2658)
					tmp14 = (str.length == (int)6);
					HX_STACK_LINE(2658)
					if ((tmp14)){
						HX_STACK_LINE(2658)
						::String tmp15 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(2658)
						str = tmp15;
					}
					HX_STACK_LINE(2658)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(2658)
					{
						HX_STACK_LINE(2658)
						int length = str.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2658)
						int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
						HX_STACK_LINE(2658)
						int sum = (int)0;		HX_STACK_VAR(sum,"sum");
						HX_STACK_LINE(2658)
						int tmp16 = (length - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(2658)
						int i = tmp16;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2658)
						while((true)){
							HX_STACK_LINE(2658)
							bool tmp17 = (i >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(2658)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(2658)
							if ((tmp18)){
								HX_STACK_LINE(2658)
								break;
							}
							HX_STACK_LINE(2658)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(2658)
							::String tmp20 = str.substr(tmp19,(int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(2658)
							::String char_hex = tmp20;		HX_STACK_VAR(char_hex,"char_hex");
							HX_STACK_LINE(2658)
							int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(2658)
							{
								HX_STACK_LINE(2658)
								int val = (int)-1;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2658)
								::String tmp22 = char_hex;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(2658)
								::String _switch_46 = (tmp22);
								if (  ( _switch_46==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
									HX_STACK_LINE(2658)
									::String tmp23 = char_hex;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(2658)
									Dynamic tmp24 = ::Std_obj::parseInt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2658)
									val = tmp24;
								}
								else if (  ( _switch_46==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
									HX_STACK_LINE(2658)
									val = (int)10;
								}
								else if (  ( _switch_46==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
									HX_STACK_LINE(2658)
									val = (int)11;
								}
								else if (  ( _switch_46==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
									HX_STACK_LINE(2658)
									val = (int)12;
								}
								else if (  ( _switch_46==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
									HX_STACK_LINE(2658)
									val = (int)13;
								}
								else if (  ( _switch_46==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
									HX_STACK_LINE(2658)
									val = (int)14;
								}
								else if (  ( _switch_46==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_46==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
									HX_STACK_LINE(2658)
									val = (int)15;
								}
								HX_STACK_LINE(2658)
								bool tmp23 = (val == (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(2658)
								if ((tmp23)){
									HX_STACK_LINE(2658)
									::String tmp24 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(2658)
									::String tmp25 = (tmp24 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(2658)
									HX_STACK_DO_THROW(tmp25);
								}
								HX_STACK_LINE(2658)
								tmp21 = val;
							}
							HX_STACK_LINE(2658)
							int char_int = tmp21;		HX_STACK_VAR(char_int,"char_int");
							HX_STACK_LINE(2658)
							int tmp22 = (char_int * place_mult);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(2658)
							hx::AddEq(sum,tmp22);
							HX_STACK_LINE(2658)
							hx::MultEq(place_mult,(int)16);
							HX_STACK_LINE(2658)
							(i)--;
						}
						HX_STACK_LINE(2658)
						tmp15 = sum;
					}
					HX_STACK_LINE(2658)
					return_val = tmp15;
				}
				HX_STACK_LINE(2658)
				tmp6 = return_val;
			}
			HX_STACK_LINE(2658)
			color = tmp6;
		}
		HX_STACK_LINE(2659)
		int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2659)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadColor,return )

::flixel::addons::ui::FontDef FlxUI_obj::_loadFontDef( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadFontDef",0x63d37f6a,"flixel.addons.ui.FlxUI._loadFontDef","flixel/addons/ui/FlxUI.hx",2662,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2663)
	::haxe::xml::Fast tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2663)
	::String tmp1 = this->_loadFontFace(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2663)
	::String fontFace = tmp1;		HX_STACK_VAR(fontFace,"fontFace");
	HX_STACK_LINE(2664)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2664)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2664)
	::String fontStyle = tmp3;		HX_STACK_VAR(fontStyle,"fontStyle");
	HX_STACK_LINE(2665)
	::Xml tmp4 = data->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2665)
	int tmp5 = ::flixel::addons::ui::U_obj::xml_i(tmp4,HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),(int)8);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2665)
	int fontSize = tmp5;		HX_STACK_VAR(fontSize,"fontSize");
	HX_STACK_LINE(2666)
	::flixel::addons::ui::FontDef tmp6 = ::flixel::addons::ui::FontDef_obj::__new(fontFace,fontSize,fontStyle);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2666)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadFontDef,return )

::String FlxUI_obj::_loadFontFace( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadFontFace",0xf68b5f58,"flixel.addons.ui.FlxUI._loadFontFace","flixel/addons/ui/FlxUI.hx",2669,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2670)
	::Xml tmp = data->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2670)
	::String tmp1 = ::flixel::addons::ui::U_obj::xml_str(tmp,HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2670)
	::String fontFace = tmp1;		HX_STACK_VAR(fontFace,"fontFace");
	HX_STACK_LINE(2671)
	::Xml tmp2 = data->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2671)
	::String tmp3 = ::flixel::addons::ui::U_obj::xml_str(tmp2,HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2671)
	::String fontStyle = tmp3;		HX_STACK_VAR(fontStyle,"fontStyle");
	HX_STACK_LINE(2672)
	::String the_font = null();		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(2673)
	bool tmp4 = (fontFace != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2673)
	if ((tmp4)){
		HX_STACK_LINE(2673)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2673)
		{
			HX_STACK_LINE(2673)
			::String style = fontStyle;		HX_STACK_VAR(style,"style");
			HX_STACK_LINE(2673)
			::String tmp6 = style.toLowerCase();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2673)
			style = tmp6;
			HX_STACK_LINE(2673)
			::String suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(suffix,"suffix");
			HX_STACK_LINE(2673)
			::String tmp7 = style;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2673)
			::String _switch_47 = (tmp7);
			if (  ( _switch_47==HX_HCSTRING("normal","\x27","\x72","\x69","\x30")) ||  ( _switch_47==HX_HCSTRING("regular","\x5c","\x52","\x88","\x82")) ||  ( _switch_47==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49")) ||  ( _switch_47==HX_HCSTRING("","\x00","\x00","\x00","\x00"))){
				HX_STACK_LINE(2673)
				suffix = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			else if (  ( _switch_47==HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")) ||  ( _switch_47==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
				HX_STACK_LINE(2673)
				suffix = HX_HCSTRING("b","\x62","\x00","\x00","\x00");
			}
			else if (  ( _switch_47==HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")) ||  ( _switch_47==HX_HCSTRING("i","\x69","\x00","\x00","\x00"))){
				HX_STACK_LINE(2673)
				suffix = HX_HCSTRING("i","\x69","\x00","\x00","\x00");
			}
			else if (  ( _switch_47==HX_HCSTRING("bold-italic","\xf8","\xf7","\xa5","\x60")) ||  ( _switch_47==HX_HCSTRING("bolditalic","\x35","\x22","\x3d","\x79")) ||  ( _switch_47==HX_HCSTRING("italic-bold","\x42","\x47","\x7f","\xd9")) ||  ( _switch_47==HX_HCSTRING("italicbold","\x75","\xe8","\x59","\xe8")) ||  ( _switch_47==HX_HCSTRING("ibold","\x6e","\x6a","\x2e","\xb6")) ||  ( _switch_47==HX_HCSTRING("boldi","\x44","\xd3","\xf5","\xb6")) ||  ( _switch_47==HX_HCSTRING("ib","\xd9","\x5b","\x00","\x00")) ||  ( _switch_47==HX_HCSTRING("bi","\xc7","\x55","\x00","\x00")) ||  ( _switch_47==HX_HCSTRING("z","\x7a","\x00","\x00","\x00"))){
				HX_STACK_LINE(2673)
				suffix = HX_HCSTRING("z","\x7a","\x00","\x00","\x00");
			}
			HX_STACK_LINE(2673)
			int tmp8 = fontFace.indexOf(HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c"),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2673)
			bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2673)
			if ((tmp9)){
				HX_STACK_LINE(2673)
				::String tmp10 = (HX_HCSTRING("assets/fonts/","\x37","\xff","\xa5","\x9c") + fontFace);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2673)
				::String tmp11 = suffix;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(2673)
				tmp5 = (tmp10 + tmp11);
			}
			else{
				HX_STACK_LINE(2673)
				tmp5 = (fontFace + suffix);
			}
		}
		HX_STACK_LINE(2673)
		::String tmp6 = (tmp5 + HX_HCSTRING(".ttf","\x78","\x3b","\xc0","\x1e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2673)
		the_font = tmp6;
	}
	HX_STACK_LINE(2675)
	::String tmp5 = the_font;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2675)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadFontFace,return )

Void FlxUI_obj::_onFinishLoad( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_onFinishLoad",0x23246f1e,"flixel.addons.ui.FlxUI._onFinishLoad","flixel/addons/ui/FlxUI.hx",2678,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2679)
		::flixel::addons::ui::interfaces::IEventGetter tmp = this->_ptr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2679)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2679)
		if ((tmp1)){
			HX_STACK_LINE(2680)
			::flixel::addons::ui::interfaces::IEventGetter tmp2 = this->_ptr;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2680)
			tmp2->getEvent(HX_HCSTRING("finish_load","\xd2","\x68","\xa0","\x8e"),hx::ObjectPtr<OBJ_>(this),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,_onFinishLoad,(void))

::String FlxUI_obj::getText( ::String flag,::String __o_context,hx::Null< bool >  __o_safe,::String __o_code){
::String context = __o_context.Default(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
bool safe = __o_safe.Default(true);
::String code = __o_code.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getText",0xde0de34a,"flixel.addons.ui.FlxUI.getText","flixel/addons/ui/FlxUI.hx",2695,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flag,"flag")
	HX_STACK_ARG(context,"context")
	HX_STACK_ARG(safe,"safe")
	HX_STACK_ARG(code,"code")
{
		HX_STACK_LINE(2696)
		::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(2697)
		::flixel::addons::ui::interfaces::IFireTongue tmp = this->_ptr_tongue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2697)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2697)
		if ((tmp1)){
			HX_STACK_LINE(2698)
			::flixel::addons::ui::interfaces::IFireTongue tmp2 = this->_ptr_tongue;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2698)
			::String tmp3 = flag;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2698)
			::String tmp4 = context;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2698)
			bool tmp5 = safe;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2698)
			::String tmp6 = tmp2->get(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2698)
			str = tmp6;
			HX_STACK_LINE(2699)
			::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2699)
			::String tmp8 = code;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2699)
			::String tmp9 = this->formatFromCode(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2699)
			return tmp9;
		}
		else{
			HX_STACK_LINE(2700)
			Dynamic tmp2 = this->getTextFallback_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2700)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2700)
			if ((tmp3)){
				HX_STACK_LINE(2701)
				::String tmp4 = flag;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2701)
				::String tmp5 = context;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2701)
				bool tmp6 = safe;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2701)
				::String tmp7 = this->getTextFallback(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2701)
				str = tmp7;
				HX_STACK_LINE(2702)
				::String tmp8 = str;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(2702)
				::String tmp9 = code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(2702)
				::String tmp10 = this->formatFromCode(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(2702)
				return tmp10;
			}
		}
		HX_STACK_LINE(2705)
		::String tmp2 = flag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2705)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getText,return )

::String FlxUI_obj::formatFromCode( ::String str,::String code){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","formatFromCode",0x3be1ae07,"flixel.addons.ui.FlxUI.formatFromCode","flixel/addons/ui/FlxUI.hx",2708,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(2709)
	::String tmp = code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2709)
	::String _switch_48 = (tmp);
	if (  ( _switch_48==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
		HX_STACK_LINE(2710)
		::String tmp1 = str.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2710)
		return tmp1;
	}
	else if (  ( _switch_48==HX_HCSTRING("l","\x6c","\x00","\x00","\x00"))){
		HX_STACK_LINE(2711)
		::String tmp1 = str.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2711)
		return tmp1;
	}
	else if (  ( _switch_48==HX_HCSTRING("fu","\x4f","\x59","\x00","\x00"))){
		HX_STACK_LINE(2712)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2712)
		::String tmp2 = ::flixel::addons::ui::U_obj::FU(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2712)
		return tmp2;
	}
	else if (  ( _switch_48==HX_HCSTRING("fu_","\x30","\xcc","\x4d","\x00"))){
		HX_STACK_LINE(2713)
		::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2713)
		::String tmp2 = ::flixel::addons::ui::U_obj::FU_(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2713)
		return tmp2;
	}
	HX_STACK_LINE(2715)
	::String tmp1 = str;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2715)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,formatFromCode,return )

Void FlxUI_obj::formatButtonText( ::haxe::xml::Fast data,Dynamic button){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","formatButtonText",0xeca59e0f,"flixel.addons.ui.FlxUI.formatButtonText","flixel/addons/ui/FlxUI.hx",2743,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(2744)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2744)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2744)
		if ((tmp)){
			HX_STACK_LINE(2744)
			tmp1 = data->hasNode->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
		}
		else{
			HX_STACK_LINE(2744)
			tmp1 = false;
		}
		HX_STACK_LINE(2744)
		if ((tmp1)){
			HX_STACK_LINE(2745)
			::haxe::xml::Fast tmp2 = data->node->resolve(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2745)
			::haxe::xml::Fast textNode = tmp2;		HX_STACK_VAR(textNode,"textNode");
			HX_STACK_LINE(2746)
			::Xml tmp3 = textNode->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2746)
			::String tmp4 = ::flixel::addons::ui::U_obj::xml_str(tmp3,HX_HCSTRING("use_def","\x8d","\xda","\xe9","\x62"),true,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(2746)
			::String use_def = tmp4;		HX_STACK_VAR(use_def,"use_def");
			HX_STACK_LINE(2747)
			::haxe::xml::Fast text_def = null();		HX_STACK_VAR(text_def,"text_def");
			HX_STACK_LINE(2749)
			bool tmp5 = (use_def != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(2749)
			if ((tmp5)){
				HX_STACK_LINE(2750)
				::String tmp6 = use_def;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2750)
				::haxe::xml::Fast tmp7 = this->getDefinition(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(2750)
				text_def = tmp7;
			}
			HX_STACK_LINE(2753)
			::haxe::xml::Fast tmp6 = textNode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2753)
			::haxe::xml::Fast tmp7 = text_def;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2753)
			::haxe::xml::Fast tmp8 = ::flixel::addons::ui::FlxUI_obj::consolidateData(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2753)
			::haxe::xml::Fast info = tmp8;		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(2755)
			::Xml tmp9 = info->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2755)
			::String tmp10 = ::flixel::addons::ui::U_obj::xml_str(tmp9,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2755)
			::String case_id = tmp10;		HX_STACK_VAR(case_id,"case_id");
			HX_STACK_LINE(2756)
			::haxe::xml::Fast tmp11 = info;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2756)
			::String tmp12 = this->_loadFontFace(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2756)
			::String the_font = tmp12;		HX_STACK_VAR(the_font,"the_font");
			HX_STACK_LINE(2757)
			::Xml tmp13 = info->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2757)
			int tmp14 = ::flixel::addons::ui::U_obj::xml_i(tmp13,HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2757)
			int size = tmp14;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(2757)
			bool tmp15 = (size == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(2757)
			if ((tmp15)){
				HX_STACK_LINE(2757)
				size = (int)8;
			}
			HX_STACK_LINE(2758)
			::haxe::xml::Fast tmp16 = info;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(2758)
			int tmp17 = this->_loadColor(tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(2758)
			int color = tmp17;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(2760)
			::Xml tmp18 = info->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(2760)
			Float tmp19 = ::flixel::addons::ui::U_obj::xml_f(tmp18,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(2760)
			Float labelWidth = tmp19;		HX_STACK_VAR(labelWidth,"labelWidth");
			HX_STACK_LINE(2762)
			::haxe::xml::Fast tmp20 = info;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(2762)
			::flixel::addons::ui::BorderDef tmp21 = this->_loadBorder(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(2762)
			::flixel::addons::ui::BorderDef border = tmp21;		HX_STACK_VAR(border,"border");
			HX_STACK_LINE(2764)
			::Xml tmp22 = info->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(2764)
			::String tmp23 = ::flixel::addons::ui::U_obj::xml_str(tmp22,HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),true,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(2764)
			::String align = tmp23;		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(2764)
			bool tmp24 = (align == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(2764)
			if ((tmp24)){
				HX_STACK_LINE(2764)
				align = null();
			}
			HX_STACK_LINE(2766)
			::flixel::text::FlxText the_label = null();		HX_STACK_VAR(the_label,"the_label");
			HX_STACK_LINE(2767)
			::flixel::addons::ui::FlxUIButton fb = null();		HX_STACK_VAR(fb,"fb");
			HX_STACK_LINE(2768)
			::flixel::addons::ui::FlxUISpriteButton fsb = null();		HX_STACK_VAR(fsb,"fsb");
			HX_STACK_LINE(2769)
			::flixel::addons::ui::FlxUICheckBox cb = null();		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(2770)
			::flixel::addons::ui::interfaces::IFlxUIButton ifb = null();		HX_STACK_VAR(ifb,"ifb");
			HX_STACK_LINE(2772)
			Dynamic tmp25 = button;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(2772)
			bool tmp26 = ::Std_obj::is(tmp25,hx::ClassOf< ::flixel::addons::ui::FlxUICheckBox >());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(2772)
			bool tmp27 = (tmp26 == false);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(2772)
			if ((tmp27)){
				HX_STACK_LINE(2773)
				ifb = ((::flixel::addons::ui::interfaces::IFlxUIButton)(button));
				HX_STACK_LINE(2774)
				bool tmp28 = (align == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(2774)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2774)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2774)
				if ((tmp29)){
					HX_STACK_LINE(2774)
					tmp30 = (align == null());
				}
				else{
					HX_STACK_LINE(2774)
					tmp30 = true;
				}
				HX_STACK_LINE(2774)
				if ((tmp30)){
					HX_STACK_LINE(2775)
					align = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
				}
			}
			else{
				HX_STACK_LINE(2778)
				::flixel::addons::ui::FlxUICheckBox cb1 = ((::flixel::addons::ui::FlxUICheckBox)(button));		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(2779)
				ifb = cb1->button;
				HX_STACK_LINE(2780)
				align = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
			}
			HX_STACK_LINE(2783)
			bool tmp28 = (ifb != null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(2783)
			if ((tmp28)){
				HX_STACK_LINE(2784)
				::flixel::addons::ui::interfaces::IFlxUIButton tmp29 = ifb;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(2784)
				bool tmp30 = ::Std_obj::is(tmp29,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2784)
				if ((tmp30)){
					HX_STACK_LINE(2786)
					fb = ((::flixel::addons::ui::FlxUIButton)(ifb));
					HX_STACK_LINE(2787)
					the_label = fb->label;
				}
				else{
					HX_STACK_LINE(2789)
					::flixel::addons::ui::interfaces::IFlxUIButton tmp31 = ifb;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2789)
					bool tmp32 = ::Std_obj::is(tmp31,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2789)
					if ((tmp32)){
						HX_STACK_LINE(2790)
						fsb = ((::flixel::addons::ui::FlxUISpriteButton)(ifb));
						HX_STACK_LINE(2791)
						::flixel::FlxSprite tmp33 = fsb->label;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(2791)
						bool tmp34 = ::Std_obj::is(tmp33,hx::ClassOf< ::flixel::text::FlxText >());		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2791)
						if ((tmp34)){
							HX_STACK_LINE(2793)
							the_label = ((::flixel::text::FlxText)(fsb->label));
						}
						else{
							HX_STACK_LINE(2795)
							::flixel::FlxSprite tmp35 = fsb->label;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(2795)
							bool tmp36 = ::Std_obj::is(tmp35,hx::ClassOf< ::flixel::group::FlxSpriteGroup >());		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(2795)
							if ((tmp36)){
								HX_STACK_LINE(2797)
								::flixel::group::FlxSpriteGroup fsg = ((::flixel::group::FlxSpriteGroup)(fsb->label));		HX_STACK_VAR(fsg,"fsg");
								HX_STACK_LINE(2798)
								{
									HX_STACK_LINE(2798)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2798)
									Array< ::Dynamic > _g1 = fsg->group->members;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(2798)
									while((true)){
										HX_STACK_LINE(2798)
										bool tmp37 = (_g < _g1->length);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(2798)
										bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(2798)
										if ((tmp38)){
											HX_STACK_LINE(2798)
											break;
										}
										HX_STACK_LINE(2798)
										::flixel::FlxSprite tmp39 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(2798)
										::flixel::FlxSprite fs = tmp39;		HX_STACK_VAR(fs,"fs");
										HX_STACK_LINE(2798)
										++(_g);
										HX_STACK_LINE(2799)
										::flixel::FlxSprite tmp40 = fs;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(2799)
										bool tmp41 = ::Std_obj::is(tmp40,hx::ClassOf< ::flixel::text::FlxText >());		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(2799)
										if ((tmp41)){
											HX_STACK_LINE(2800)
											the_label = ((::flixel::text::FlxText)(fs));
											HX_STACK_LINE(2801)
											break;
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(2807)
				ifb->__FieldRef(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b")) = color;
				HX_STACK_LINE(2808)
				ifb->__FieldRef(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e")) = (int)0;
				HX_STACK_LINE(2809)
				ifb->__FieldRef(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7")) = (int)0;
			}
			HX_STACK_LINE(2812)
			bool tmp29 = (the_label != null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(2812)
			if ((tmp29)){
				HX_STACK_LINE(2813)
				bool tmp30 = (labelWidth != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2813)
				if ((tmp30)){
					HX_STACK_LINE(2814)
					Float tmp31 = labelWidth;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2814)
					the_label->set_width(tmp31);
				}
				HX_STACK_LINE(2817)
				::String tmp31 = the_font;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(2817)
				int tmp32 = size;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(2817)
				int tmp33 = color;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(2817)
				::String tmp34 = align;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(2817)
				the_label->setFormat(tmp31,tmp32,tmp33,tmp34,null(),null(),null());
				HX_STACK_LINE(2819)
				int tmp35 = border->style;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(2819)
				the_label->set_borderStyle(tmp35);
				HX_STACK_LINE(2820)
				int tmp36 = border->color;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2820)
				the_label->set_borderColor(tmp36);
				HX_STACK_LINE(2821)
				int tmp37 = border->size;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(2821)
				the_label->set_borderSize(tmp37);
				HX_STACK_LINE(2822)
				Float tmp38 = border->quality;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(2822)
				the_label->set_borderQuality(tmp38);
				HX_STACK_LINE(2824)
				::flixel::text::FlxText tmp39 = the_label;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(2824)
				bool tmp40 = ::Std_obj::is(tmp39,hx::ClassOf< ::flixel::addons::ui::FlxUIText >());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(2824)
				if ((tmp40)){
					HX_STACK_LINE(2825)
					::flixel::addons::ui::FlxUIText ftu = ((::flixel::addons::ui::FlxUIText)(the_label));		HX_STACK_VAR(ftu,"ftu");
					HX_STACK_LINE(2826)
					{
						HX_STACK_LINE(2826)
						bool Force = false;		HX_STACK_VAR(Force,"Force");
						HX_STACK_LINE(2826)
						ftu->calcFrame(true);
					}
				}
				HX_STACK_LINE(2829)
				bool tmp41 = (fb != null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(2829)
				if ((tmp41)){
					HX_STACK_LINE(2830)
					fb->autoCenterLabel();
				}
				HX_STACK_LINE(2832)
				bool tmp42 = (fsb != null());		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(2832)
				if ((tmp42)){
					HX_STACK_LINE(2833)
					fsb->autoCenterLabel();
				}
			}
			HX_STACK_LINE(2837)
			{
				HX_STACK_LINE(2837)
				::_List::ListIterator tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(2837)
				{
					HX_STACK_LINE(2837)
					::List tmp31 = info->nodes->resolve(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2837)
					::List _this = tmp31;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(2837)
					tmp30 = ::_List::ListIterator_obj::__new(_this->h);
				}
				HX_STACK_LINE(2837)
				::_List::ListIterator _g = tmp30;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2837)
				while((true)){
					HX_STACK_LINE(2837)
					bool tmp31 = (_g->head != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(2837)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(2837)
					if ((tmp32)){
						HX_STACK_LINE(2837)
						break;
					}
					HX_STACK_LINE(2837)
					Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(2837)
					{
						HX_STACK_LINE(2837)
						Dynamic tmp34 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(2837)
						_g->val = tmp34;
						HX_STACK_LINE(2837)
						Dynamic tmp35 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(2837)
						_g->head = tmp35;
						HX_STACK_LINE(2837)
						tmp33 = _g->val;
					}
					HX_STACK_LINE(2837)
					::haxe::xml::Fast textColorNode = ((::haxe::xml::Fast)(tmp33));		HX_STACK_VAR(textColorNode,"textColorNode");
					HX_STACK_LINE(2838)
					::haxe::xml::Fast tmp34 = textColorNode;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(2838)
					int tmp35 = this->_loadColor(tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(2838)
					int color1 = tmp35;		HX_STACK_VAR(color1,"color1");
					HX_STACK_LINE(2839)
					::Xml tmp36 = textColorNode->x;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(2839)
					bool tmp37 = ::flixel::addons::ui::U_obj::xml_bool(tmp36,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),true);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(2839)
					bool vis = tmp37;		HX_STACK_VAR(vis,"vis");
					HX_STACK_LINE(2840)
					::Xml tmp38 = textColorNode->x;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(2840)
					::String tmp39 = ::flixel::addons::ui::U_obj::xml_str(tmp38,HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),true,null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(2840)
					::String state_id = tmp39;		HX_STACK_VAR(state_id,"state_id");
					HX_STACK_LINE(2841)
					::Xml tmp40 = textColorNode->x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(2841)
					bool tmp41 = ::flixel::addons::ui::U_obj::xml_bool(tmp40,HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"),null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(2841)
					bool toggle = tmp41;		HX_STACK_VAR(toggle,"toggle");
					HX_STACK_LINE(2842)
					::String tmp42 = state_id;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(2842)
					::String _switch_49 = (tmp42);
					if (  ( _switch_49==HX_HCSTRING("up","\x5b","\x66","\x00","\x00")) ||  ( _switch_49==HX_HCSTRING("inactive","\x6b","\x17","\x30","\x6a")) ||  ( _switch_49==HX_HCSTRING("","\x00","\x00","\x00","\x00")) ||  ( _switch_49==HX_HCSTRING("normal","\x27","\x72","\x69","\x30"))){
						HX_STACK_LINE(2844)
						bool tmp43 = toggle;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(2844)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(2844)
						if ((tmp44)){
							HX_STACK_LINE(2845)
							ifb->__FieldRef(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b")) = color1;
							HX_STACK_LINE(2846)
							ifb->__FieldRef(HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08")) = vis;
						}
						else{
							HX_STACK_LINE(2848)
							ifb->__FieldRef(HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd")) = color1;
							HX_STACK_LINE(2849)
							ifb->__FieldRef(HX_HCSTRING("up_toggle_visible","\x2b","\x86","\xe9","\x3f")) = vis;
						}
					}
					else if (  ( _switch_49==HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) ||  ( _switch_49==HX_HCSTRING("hilight","\x35","\xb2","\x2d","\x55")) ||  ( _switch_49==HX_HCSTRING("over","\x54","\x91","\xb8","\x49")) ||  ( _switch_49==HX_HCSTRING("hover","\xbc","\xe5","\x64","\x2b"))){
						HX_STACK_LINE(2852)
						bool tmp43 = toggle;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(2852)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(2852)
						if ((tmp44)){
							HX_STACK_LINE(2853)
							ifb->__FieldRef(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7")) = color1;
							HX_STACK_LINE(2854)
							ifb->__FieldRef(HX_HCSTRING("over_visible","\x47","\xd7","\x44","\x92")) = vis;
						}
						else{
							HX_STACK_LINE(2856)
							ifb->__FieldRef(HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa")) = color1;
							HX_STACK_LINE(2857)
							ifb->__FieldRef(HX_HCSTRING("over_toggle_visible","\x52","\x9b","\xc8","\x49")) = vis;
						}
					}
					else if (  ( _switch_49==HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")) ||  ( _switch_49==HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")) ||  ( _switch_49==HX_HCSTRING("pushed","\xb9","\x14","\x2d","\x72"))){
						HX_STACK_LINE(2860)
						bool tmp43 = toggle;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(2860)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(2860)
						if ((tmp44)){
							HX_STACK_LINE(2861)
							ifb->__FieldRef(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e")) = color1;
							HX_STACK_LINE(2862)
							ifb->__FieldRef(HX_HCSTRING("down_visible","\x55","\xfc","\x6c","\x72")) = vis;
						}
						else{
							HX_STACK_LINE(2864)
							ifb->__FieldRef(HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06")) = color1;
							HX_STACK_LINE(2865)
							ifb->__FieldRef(HX_HCSTRING("down_toggle_visible","\x04","\x54","\xe1","\xa9")) = vis;
						}
					}
				}
			}
			HX_STACK_LINE(2870)
			bool tmp30 = (ifb->__Field(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(2870)
			if ((tmp30)){
				HX_STACK_LINE(2871)
				ifb->__FieldRef(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7")) = ifb->__Field(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"), hx::paccDynamic );
			}
			HX_STACK_LINE(2873)
			bool tmp31 = (ifb->__Field(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(2873)
			if ((tmp31)){
				HX_STACK_LINE(2874)
				ifb->__FieldRef(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e")) = ifb->__Field(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"), hx::paccDynamic );
			}
			HX_STACK_LINE(2878)
			bool tmp32 = (ifb->__Field(HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(2878)
			if ((tmp32)){
				HX_STACK_LINE(2879)
				ifb->__FieldRef(HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd")) = ifb->__Field(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"), hx::paccDynamic );
			}
			HX_STACK_LINE(2881)
			bool tmp33 = (ifb->__Field(HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(2881)
			if ((tmp33)){
				HX_STACK_LINE(2882)
				ifb->__FieldRef(HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa")) = ifb->__Field(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"), hx::paccDynamic );
			}
			HX_STACK_LINE(2884)
			bool tmp34 = (ifb->__Field(HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(2884)
			if ((tmp34)){
				HX_STACK_LINE(2885)
				ifb->__FieldRef(HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06")) = ifb->__Field(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e"), hx::paccDynamic );
			}
			HX_STACK_LINE(2888)
			bool tmp35 = (the_label != null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(2888)
			if ((tmp35)){
				HX_STACK_LINE(2889)
				bool tmp36 = ifb->__Field(HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(2889)
				the_label->set_visible(tmp36);
				HX_STACK_LINE(2890)
				int tmp37 = ifb->__Field(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(2890)
				the_label->set_color(tmp37);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,formatButtonText,(void))

Void FlxUI_obj::event( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","event",0xe056d741,"flixel.addons.ui.FlxUI.event","flixel/addons/ui/FlxUI.hx",107,0xf354486a)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(108)
		::flixel::addons::ui::interfaces::IFlxUIState tmp = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::flixel::addons::ui::interfaces::IEventGetter currState = tmp;		HX_STACK_VAR(currState,"currState");
		HX_STACK_LINE(110)
		bool tmp1 = (currState != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		if ((tmp1)){
			HX_STACK_LINE(111)
			::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = sender;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			Dynamic tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			currState->getEvent(tmp2,tmp3,tmp4,params);
		}
		else{
			HX_STACK_LINE(113)
			Dynamic();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,event,(void))

Void FlxUI_obj::forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","forceFocus",0x91e0ed66,"flixel.addons.ui.FlxUI.forceFocus","flixel/addons/ui/FlxUI.hx",123,0xf354486a)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(124)
		::flixel::addons::ui::interfaces::IFlxUIState tmp = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		::flixel::addons::ui::interfaces::IFlxUIState currState = tmp;		HX_STACK_VAR(currState,"currState");
		HX_STACK_LINE(125)
		bool tmp1 = (currState != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(126)
			bool tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = thing;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			currState->forceFocus(tmp2,tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,forceFocus,(void))

::flixel::addons::ui::interfaces::IFlxUIState FlxUI_obj::getLeafUIState( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLeafUIState",0xebda1e42,"flixel.addons.ui.FlxUI.getLeafUIState","flixel/addons/ui/FlxUI.hx",135,0xf354486a)
	HX_STACK_LINE(136)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	::flixel::FlxState state = tmp->_state;		HX_STACK_VAR(state,"state");
	HX_STACK_LINE(137)
	bool tmp1 = (state != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp1)){
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			bool tmp2 = (state->subState != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			if ((tmp3)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(141)
			state = state->subState;
		}
	}
	HX_STACK_LINE(144)
	::flixel::FlxState tmp2 = state;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIState >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	if ((tmp3)){
		HX_STACK_LINE(146)
		::flixel::addons::ui::interfaces::IFlxUIState tmp4 = ((::flixel::addons::ui::interfaces::IFlxUIState)(state));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		return tmp4;
	}
	HX_STACK_LINE(148)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,getLeafUIState,return )

Dynamic FlxUI_obj::request( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","request",0x03164636,"flixel.addons.ui.FlxUI.request","flixel/addons/ui/FlxUI.hx",160,0xf354486a)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(161)
	::flixel::addons::ui::interfaces::IFlxUIState tmp = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	::flixel::addons::ui::interfaces::IEventGetter currState = tmp;		HX_STACK_VAR(currState,"currState");
	HX_STACK_LINE(162)
	bool tmp1 = (currState != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	if ((tmp1)){
		HX_STACK_LINE(163)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp3 = sender;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		Dynamic tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		Dynamic tmp5 = currState->getRequest(tmp2,tmp3,tmp4,params);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		return tmp5;
	}
	else{
		HX_STACK_LINE(165)
		Dynamic();
	}
	HX_STACK_LINE(167)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,request,return )

Void FlxUI_obj::_delta( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_delta",0xa8496232,"flixel.addons.ui.FlxUI._delta","flixel/addons/ui/FlxUI.hx",705,0xf354486a)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(706)
			Float tmp = (_g->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + X);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(706)
			_g->set_x(tmp);
		}
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(707)
			Float tmp = (_g->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + Y);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(707)
			_g->set_y(tmp);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_delta,(void))

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_center( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< bool >  __o_X,hx::Null< bool >  __o_Y){
bool X = __o_X.Default(true);
bool Y = __o_Y.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_center",0x32e39e5b,"flixel.addons.ui.FlxUI._center","flixel/addons/ui/FlxUI.hx",716,0xf354486a)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(717)
		bool tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		if ((tmp)){
			HX_STACK_LINE(717)
			int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(717)
			Float tmp2 = thing->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(717)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(717)
			Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(717)
			thing->set_x(tmp4);
		}
		HX_STACK_LINE(718)
		bool tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(718)
		if ((tmp1)){
			HX_STACK_LINE(718)
			int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(718)
			Float tmp3 = thing->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(718)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(718)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(718)
			thing->set_y(tmp5);
		}
		HX_STACK_LINE(719)
		::flixel::addons::ui::interfaces::IFlxUIWidget tmp2 = thing;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(719)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_center,return )

::haxe::xml::Fast FlxUI_obj::consolidateData( ::haxe::xml::Fast data,::haxe::xml::Fast definition){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","consolidateData",0x9bb7ebba,"flixel.addons.ui.FlxUI.consolidateData","flixel/addons/ui/FlxUI.hx",1342,0xf354486a)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(definition,"definition")
	HX_STACK_LINE(1343)
	bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1343)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1343)
	if ((tmp)){
		HX_STACK_LINE(1343)
		tmp1 = (definition != null());
	}
	else{
		HX_STACK_LINE(1343)
		tmp1 = false;
	}
	HX_STACK_LINE(1343)
	if ((tmp1)){
		HX_STACK_LINE(1344)
		::haxe::xml::Fast tmp2 = definition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1344)
		return tmp2;
	}
	HX_STACK_LINE(1346)
	bool tmp2 = (definition == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1346)
	if ((tmp2)){
		HX_STACK_LINE(1347)
		::haxe::xml::Fast tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1347)
		return tmp3;
	}
	else{
		HX_STACK_LINE(1352)
		::Xml tmp3 = definition->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1352)
		::String tmp4 = ::haxe::xml::Printer_obj::print(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1352)
		::Xml tmp5 = ::Xml_obj::parse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1352)
		::Xml tmp6 = tmp5->firstElement();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1352)
		::Xml new_data = tmp6;		HX_STACK_VAR(new_data,"new_data");
		HX_STACK_LINE(1354)
		Dynamic tmp7 = data->x->attributes();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1354)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String att = __it->next();
			{
				HX_STACK_LINE(1355)
				::String tmp8 = att;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1355)
				::String tmp9 = data->att->resolve(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1355)
				::String val = tmp9;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(1356)
				::String tmp10 = att;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1356)
				::String tmp11 = val;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1356)
				new_data->set(tmp10,tmp11);
			}
;
		}
		HX_STACK_LINE(1360)
		{
			HX_STACK_LINE(1360)
			::String tmp8 = data->get_name();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1360)
			::String v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1360)
			int tmp9 = new_data->nodeType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1360)
			int tmp10 = ::Xml_obj::Element;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1360)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1360)
			if ((tmp11)){
				HX_STACK_LINE(1360)
				::String tmp12 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + new_data->nodeType);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1360)
				HX_STACK_DO_THROW(tmp12);
			}
			HX_STACK_LINE(1360)
			new_data->nodeName = v;
		}
		HX_STACK_LINE(1361)
		bool tmp8 = data->has->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1361)
		if ((tmp8)){
			HX_STACK_LINE(1362)
			::String tmp9 = data->att->resolve(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1362)
			new_data->set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),tmp9);
		}
		else{
			HX_STACK_LINE(1364)
			new_data->set(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(1369)
		Dynamic tmp9 = data->x->elements();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1369)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp9);  __it->hasNext(); ){
			::Xml element = __it->next();
			{
				HX_STACK_LINE(1370)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1370)
				{
					HX_STACK_LINE(1370)
					int tmp11 = element->nodeType;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1370)
					int tmp12 = ::Xml_obj::Element;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1370)
					bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1370)
					if ((tmp13)){
						HX_STACK_LINE(1370)
						::String tmp14 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + element->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1370)
						HX_STACK_DO_THROW(tmp14);
					}
					HX_STACK_LINE(1370)
					tmp10 = element->nodeName;
				}
				HX_STACK_LINE(1370)
				::String nodeName = tmp10;		HX_STACK_VAR(nodeName,"nodeName");
				HX_STACK_LINE(1371)
				::Xml tmp11 = element;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1371)
				::String tmp12 = ::haxe::xml::Printer_obj::print(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1371)
				::Xml tmp13 = ::Xml_obj::parse(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1371)
				::Xml tmp14 = tmp13->firstElement();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1371)
				new_data->insertChild(tmp14,(int)0);
			}
;
		}
		HX_STACK_LINE(1374)
		::haxe::xml::Fast tmp10 = ::haxe::xml::Fast_obj::__new(new_data);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1374)
		return tmp10;
	}
	HX_STACK_LINE(1376)
	::haxe::xml::Fast tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1376)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,consolidateData,return )

::openfl::_legacy::display::BitmapData FlxUI_obj::_loadBitmapRect( ::String source,::String rect_str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadBitmapRect",0xdc5324ff,"flixel.addons.ui.FlxUI._loadBitmapRect","flixel/addons/ui/FlxUI.hx",2085,0xf354486a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(rect_str,"rect_str")
	HX_STACK_LINE(2086)
	::String tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2086)
	::String tmp1 = ::flixel::addons::ui::U_obj::gfx(tmp,null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2086)
	::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2086)
	::openfl::_legacy::display::BitmapData b1 = tmp2;		HX_STACK_VAR(b1,"b1");
	HX_STACK_LINE(2087)
	::openfl::_legacy::geom::Rectangle tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2087)
	{
		HX_STACK_LINE(2087)
		Array< ::String > coords = rect_str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(coords,"coords");
		HX_STACK_LINE(2087)
		::openfl::_legacy::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(2087)
		bool tmp4 = (coords != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2087)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(2087)
		if ((tmp4)){
			HX_STACK_LINE(2087)
			tmp5 = (coords->length == (int)4);
		}
		else{
			HX_STACK_LINE(2087)
			tmp5 = false;
		}
		HX_STACK_LINE(2087)
		if ((tmp5)){
			HX_STACK_LINE(2087)
			::String tmp6 = coords->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(2087)
			Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(2087)
			int x_ = tmp7;		HX_STACK_VAR(x_,"x_");
			HX_STACK_LINE(2087)
			::String tmp8 = coords->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(2087)
			Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(2087)
			int y_ = tmp9;		HX_STACK_VAR(y_,"y_");
			HX_STACK_LINE(2087)
			::String tmp10 = coords->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(2087)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(2087)
			int w_ = tmp11;		HX_STACK_VAR(w_,"w_");
			HX_STACK_LINE(2087)
			::String tmp12 = coords->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(2087)
			Dynamic tmp13 = ::Std_obj::parseInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(2087)
			int h_ = tmp13;		HX_STACK_VAR(h_,"h_");
			HX_STACK_LINE(2087)
			::openfl::_legacy::geom::Rectangle tmp14 = ::openfl::_legacy::geom::Rectangle_obj::__new(x_,y_,w_,h_);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(2087)
			rect = tmp14;
		}
		HX_STACK_LINE(2087)
		tmp3 = rect;
	}
	HX_STACK_LINE(2087)
	::openfl::_legacy::geom::Rectangle r = tmp3;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(2088)
	Float tmp4 = r->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2088)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2088)
	Float tmp6 = r->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(2088)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(2088)
	::openfl::_legacy::display::BitmapData tmp8 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp5,tmp7,true,(int)16777215,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(2088)
	::openfl::_legacy::display::BitmapData b2 = tmp8;		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(2089)
	::openfl::_legacy::display::BitmapData tmp9 = b1;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(2089)
	::openfl::_legacy::geom::Rectangle tmp10 = r;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(2089)
	::openfl::_legacy::geom::Point tmp11 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(2089)
	b2->copyPixels(tmp9,tmp10,tmp11,null(),null(),null());
	HX_STACK_LINE(2090)
	::openfl::_legacy::display::BitmapData tmp12 = b2;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(2090)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadBitmapRect,return )

cpp::ArrayBase FlxUI_obj::getParams( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getParams",0xfcb7b323,"flixel.addons.ui.FlxUI.getParams","flixel/addons/ui/FlxUI.hx",2723,0xf354486a)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2724)
	cpp::ArrayBase params = null();		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(2725)
	bool tmp = data->hasNode->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2725)
	if ((tmp)){
		HX_STACK_LINE(2726)
		params = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(2727)
		{
			HX_STACK_LINE(2727)
			::_List::ListIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2727)
			{
				HX_STACK_LINE(2727)
				::List tmp2 = data->nodes->resolve(HX_HCSTRING("param","\x8d","\x80","\x55","\xbd"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2727)
				::List _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2727)
				tmp1 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(2727)
			::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2727)
			while((true)){
				HX_STACK_LINE(2727)
				bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2727)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(2727)
				if ((tmp3)){
					HX_STACK_LINE(2727)
					break;
				}
				HX_STACK_LINE(2727)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(2727)
				{
					HX_STACK_LINE(2727)
					Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2727)
					_g->val = tmp5;
					HX_STACK_LINE(2727)
					Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2727)
					_g->head = tmp6;
					HX_STACK_LINE(2727)
					tmp4 = _g->val;
				}
				HX_STACK_LINE(2727)
				::haxe::xml::Fast param = ((::haxe::xml::Fast)(tmp4));		HX_STACK_VAR(param,"param");
				HX_STACK_LINE(2728)
				bool tmp5 = param->has->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(2728)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(2728)
				if ((tmp5)){
					HX_STACK_LINE(2728)
					tmp6 = param->has->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
				}
				else{
					HX_STACK_LINE(2728)
					tmp6 = false;
				}
				HX_STACK_LINE(2728)
				if ((tmp6)){
					HX_STACK_LINE(2729)
					::String tmp7 = param->att->resolve(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(2729)
					::String type = tmp7;		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(2730)
					::String tmp8 = type.toLowerCase();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(2730)
					type = tmp8;
					HX_STACK_LINE(2731)
					::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(2731)
					::String _switch_50 = (tmp9);
					if (  ( _switch_50==HX_HCSTRING("string","\xd1","\x28","\x30","\x11"))){
						HX_STACK_LINE(2732)
						::String tmp10 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2732)
						::String tmp11 = ::String(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2732)
						params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
					}
					else if (  ( _switch_50==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
						HX_STACK_LINE(2733)
						::String tmp10 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2733)
						Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2733)
						params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
					}
					else if (  ( _switch_50==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
						HX_STACK_LINE(2734)
						::String tmp10 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2734)
						Float tmp11 = ::Std_obj::parseFloat(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(2734)
						params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
					}
					else if (  ( _switch_50==HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) ||  ( _switch_50==HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"))){
						HX_STACK_LINE(2735)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(2735)
						{
							HX_STACK_LINE(2735)
							::String tmp11 = param->att->resolve(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(2735)
							::String str = tmp11;		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(2735)
							bool safe = false;		HX_STACK_VAR(safe,"safe");
							HX_STACK_LINE(2735)
							int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
							HX_STACK_LINE(2735)
							int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
							HX_STACK_LINE(2735)
							int tmp12 = str.indexOf(HX_HCSTRING("0x","\x48","\x2a","\x00","\x00"),null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(2735)
							bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(2735)
							if ((tmp13)){
								HX_STACK_LINE(2735)
								bool tmp14 = safe;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(2735)
								bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(2735)
								if ((tmp15)){
									HX_STACK_LINE(2735)
									::String tmp16 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(2735)
									::String tmp17 = (tmp16 + HX_HCSTRING(") does not start with \"0x\"!","\x4a","\x8c","\x8a","\xcb"));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(2735)
									HX_STACK_DO_THROW(tmp17);
								}
								else{
									HX_STACK_LINE(2735)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(2735)
							bool tmp14 = (str.length != (int)8);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(2735)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(2735)
							if ((tmp14)){
								HX_STACK_LINE(2735)
								tmp15 = (str.length != (int)10);
							}
							else{
								HX_STACK_LINE(2735)
								tmp15 = false;
							}
							HX_STACK_LINE(2735)
							if ((tmp15)){
								HX_STACK_LINE(2735)
								bool tmp16 = safe;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(2735)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2735)
								if ((tmp17)){
									HX_STACK_LINE(2735)
									::String tmp18 = (HX_HCSTRING("U.parseHex() string(","\xf9","\x88","\x36","\xeb") + str);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(2735)
									::String tmp19 = (tmp18 + HX_HCSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!","\x26","\x4a","\xa8","\x05"));		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(2735)
									HX_STACK_DO_THROW(tmp19);
								}
								else{
									HX_STACK_LINE(2735)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(2735)
							bool tmp16 = (return_val == (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(2735)
							if ((tmp16)){
								HX_STACK_LINE(2735)
								int tmp17 = (str.length - (int)2);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(2735)
								::String tmp18 = str.substr((int)2,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(2735)
								str = tmp18;
								HX_STACK_LINE(2735)
								bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(2735)
								tmp19 = (str.length == (int)6);
								HX_STACK_LINE(2735)
								if ((tmp19)){
									HX_STACK_LINE(2735)
									::String tmp20 = (HX_HCSTRING("FF","\x40","\x3d","\x00","\x00") + str);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(2735)
									str = tmp20;
								}
								HX_STACK_LINE(2735)
								int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(2735)
								{
									HX_STACK_LINE(2735)
									int length = str.length;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(2735)
									int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
									HX_STACK_LINE(2735)
									int sum = (int)0;		HX_STACK_VAR(sum,"sum");
									HX_STACK_LINE(2735)
									int tmp21 = (length - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(2735)
									int i = tmp21;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(2735)
									while((true)){
										HX_STACK_LINE(2735)
										bool tmp22 = (i >= (int)0);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(2735)
										bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(2735)
										if ((tmp23)){
											HX_STACK_LINE(2735)
											break;
										}
										HX_STACK_LINE(2735)
										int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(2735)
										::String tmp25 = str.substr(tmp24,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(2735)
										::String char_hex = tmp25;		HX_STACK_VAR(char_hex,"char_hex");
										HX_STACK_LINE(2735)
										int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(2735)
										{
											HX_STACK_LINE(2735)
											int val = (int)-1;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(2735)
											::String tmp27 = char_hex;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(2735)
											::String _switch_51 = (tmp27);
											if (  ( _switch_51==HX_HCSTRING("0","\x30","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("1","\x31","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("2","\x32","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("3","\x33","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("4","\x34","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("5","\x35","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("6","\x36","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("7","\x37","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("8","\x38","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("9","\x39","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("10","\xdf","\x2a","\x00","\x00"))){
												HX_STACK_LINE(2735)
												::String tmp28 = char_hex;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(2735)
												Dynamic tmp29 = ::Std_obj::parseInt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(2735)
												val = tmp29;
											}
											else if (  ( _switch_51==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("a","\x61","\x00","\x00","\x00"))){
												HX_STACK_LINE(2735)
												val = (int)10;
											}
											else if (  ( _switch_51==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("b","\x62","\x00","\x00","\x00"))){
												HX_STACK_LINE(2735)
												val = (int)11;
											}
											else if (  ( _switch_51==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("c","\x63","\x00","\x00","\x00"))){
												HX_STACK_LINE(2735)
												val = (int)12;
											}
											else if (  ( _switch_51==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
												HX_STACK_LINE(2735)
												val = (int)13;
											}
											else if (  ( _switch_51==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
												HX_STACK_LINE(2735)
												val = (int)14;
											}
											else if (  ( _switch_51==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) ||  ( _switch_51==HX_HCSTRING("f","\x66","\x00","\x00","\x00"))){
												HX_STACK_LINE(2735)
												val = (int)15;
											}
											HX_STACK_LINE(2735)
											bool tmp28 = (val == (int)-1);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(2735)
											if ((tmp28)){
												HX_STACK_LINE(2735)
												::String tmp29 = (HX_HCSTRING("U.hexChar2dec() illegal char(","\x11","\x98","\x18","\xde") + char_hex);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(2735)
												::String tmp30 = (tmp29 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(2735)
												HX_STACK_DO_THROW(tmp30);
											}
											HX_STACK_LINE(2735)
											tmp26 = val;
										}
										HX_STACK_LINE(2735)
										int char_int = tmp26;		HX_STACK_VAR(char_int,"char_int");
										HX_STACK_LINE(2735)
										int tmp27 = (char_int * place_mult);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(2735)
										hx::AddEq(sum,tmp27);
										HX_STACK_LINE(2735)
										hx::MultEq(place_mult,(int)16);
										HX_STACK_LINE(2735)
										(i)--;
									}
									HX_STACK_LINE(2735)
									tmp20 = sum;
								}
								HX_STACK_LINE(2735)
								return_val = tmp20;
							}
							HX_STACK_LINE(2735)
							tmp10 = return_val;
						}
						HX_STACK_LINE(2735)
						params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2740)
	return params;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,getParams,return )


FlxUI_obj::FlxUI_obj()
{
}

void FlxUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI);
	HX_MARK_MEMBER_NAME(do_safe_input_delay,"do_safe_input_delay");
	HX_MARK_MEMBER_NAME(safe_input_delay_time,"safe_input_delay_time");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(failed_by,"failed_by");
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(getTextFallback,"getTextFallback");
	HX_MARK_MEMBER_NAME(_ptr_tongue,"_ptr_tongue");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_group_index,"_group_index");
	HX_MARK_MEMBER_NAME(_asset_index,"_asset_index");
	HX_MARK_MEMBER_NAME(_definition_index,"_definition_index");
	HX_MARK_MEMBER_NAME(_mode_index,"_mode_index");
	HX_MARK_MEMBER_NAME(_curr_mode,"_curr_mode");
	HX_MARK_MEMBER_NAME(_ptr,"_ptr");
	HX_MARK_MEMBER_NAME(_superIndexUI,"_superIndexUI");
	HX_MARK_MEMBER_NAME(_safe_input_delay_elapsed,"_safe_input_delay_elapsed");
	HX_MARK_MEMBER_NAME(_failure_checks,"_failure_checks");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(do_safe_input_delay,"do_safe_input_delay");
	HX_VISIT_MEMBER_NAME(safe_input_delay_time,"safe_input_delay_time");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(failed_by,"failed_by");
	HX_VISIT_MEMBER_NAME(focus,"focus");
	HX_VISIT_MEMBER_NAME(getTextFallback,"getTextFallback");
	HX_VISIT_MEMBER_NAME(_ptr_tongue,"_ptr_tongue");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_group_index,"_group_index");
	HX_VISIT_MEMBER_NAME(_asset_index,"_asset_index");
	HX_VISIT_MEMBER_NAME(_definition_index,"_definition_index");
	HX_VISIT_MEMBER_NAME(_mode_index,"_mode_index");
	HX_VISIT_MEMBER_NAME(_curr_mode,"_curr_mode");
	HX_VISIT_MEMBER_NAME(_ptr,"_ptr");
	HX_VISIT_MEMBER_NAME(_superIndexUI,"_superIndexUI");
	HX_VISIT_MEMBER_NAME(_safe_input_delay_elapsed,"_safe_input_delay_elapsed");
	HX_VISIT_MEMBER_NAME(_failure_checks,"_failure_checks");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUI_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"_ptr") ) { return _ptr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		if (HX_FIELD_EQ(inName,"tongue") ) { if (inCallProp == hx::paccAlways) return get_tongue(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadX") ) { return _loadX_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadY") ) { return _loadY_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setMode") ) { return setMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getMode") ) { return getMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return getEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addAsset") ) { return addAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"currMode") ) { if (inCallProp == hx::paccAlways) return get_currMode(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAsset") ) { return hasAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_doAlign") ) { return _doAlign_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"failed_by") ) { return failed_by; }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"callEvent") ) { return callEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"_postLoad") ) { return _postLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"showThing") ) { return showThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadText") ) { return _loadText_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTest") ) { return _loadTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadLine") ) { return _loadLine_dyn(); }
		if (HX_FIELD_EQ(inName,"thisWidth") ) { return thisWidth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_tongue") ) { return get_tongue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tongue") ) { return set_tongue_dyn(); }
		if (HX_FIELD_EQ(inName,"_tongueSet") ) { return _tongueSet_dyn(); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return getRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxText") ) { return getFlxText_dyn(); }
		if (HX_FIELD_EQ(inName,"_curr_mode") ) { return _curr_mode; }
		if (HX_FIELD_EQ(inName,"_loadThing") ) { return _loadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadWidth") ) { return _loadWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"thisHeight") ) { return thisHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadColor") ) { return _loadColor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ptr_tongue") ) { return _ptr_tongue; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAsset") ) { return removeAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_mode_index") ) { return _mode_index; }
		if (HX_FIELD_EQ(inName,"_loadHeight") ) { return _loadHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_alignThing") ) { return _alignThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadLayout") ) { return _loadLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadButton") ) { return _loadButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadRegion") ) { return _loadRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadSprite") ) { return _loadSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"_getStretch") ) { return _getStretch_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadBorder") ) { return _loadBorder_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceAsset") ) { return replaceAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currMode") ) { return get_currMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currMode") ) { return set_currMode_dyn(); }
		if (HX_FIELD_EQ(inName,"_group_index") ) { return _group_index; }
		if (HX_FIELD_EQ(inName,"_asset_index") ) { return _asset_index; }
		if (HX_FIELD_EQ(inName,"_loadCompass") ) { return _loadCompass_dyn(); }
		if (HX_FIELD_EQ(inName,"_changeThing") ) { return _changeThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizeThing") ) { return _resizeThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTabMenu") ) { return _loadTabMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"_getDataSize") ) { return _getDataSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_doOperation") ) { return _doOperation_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFontDef") ) { return _loadFontDef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSuperIndex") ) { return setSuperIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"_superIndexUI") ) { return _superIndexUI; }
		if (HX_FIELD_EQ(inName,"_checkFailure") ) { return _checkFailure_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTileTest") ) { return _loadTileTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadCheckBox") ) { return _loadCheckBox_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTileRule") ) { return _loadTileRule_dyn(); }
		if (HX_FIELD_EQ(inName,"_getAnchorPos") ) { return _getAnchorPos_dyn(); }
		if (HX_FIELD_EQ(inName,"_getOperation") ) { return _getOperation_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadPosition") ) { return _loadPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFontFace") ) { return _loadFontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFinishLoad") ) { return _onFinishLoad_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"replaceInGroup") ) { return replaceInGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_postLoadThing") ) { return _postLoadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"calcMaxMinSize") ) { return calcMaxMinSize_dyn(); }
		if (HX_FIELD_EQ(inName,"formatFromCode") ) { return formatFromCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { return getTextFallback; }
		if (HX_FIELD_EQ(inName,"_failure_checks") ) { return _failure_checks; }
		if (HX_FIELD_EQ(inName,"_loadRadioGroup") ) { return _loadRadioGroup_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyNodeChanges") ) { return applyNodeChanges_dyn(); }
		if (HX_FIELD_EQ(inName,"formatButtonText") ) { return formatButtonText_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_definition_index") ) { return _definition_index; }
		if (HX_FIELD_EQ(inName,"_loadDropDownMenu") ) { return _loadDropDownMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"_load9SliceSprite") ) { return _load9SliceSprite_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_changeParamsThing") ) { return _changeParamsThing_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"do_safe_input_delay") ) { return do_safe_input_delay; }
		if (HX_FIELD_EQ(inName,"_loadNumericStepper") ) { return _loadNumericStepper_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setWidgetSuppression") ) { return setWidgetSuppression_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"safe_input_delay_time") ) { return safe_input_delay_time; }
		if (HX_FIELD_EQ(inName,"applyNodeConditionals") ) { return applyNodeConditionals_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_safe_input_delay_elapsed") ) { return _safe_input_delay_elapsed; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getLabelStyleFromDefinition") ) { return getLabelStyleFromDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxUI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { outValue = event_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { outValue = _delta_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { outValue = request_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_center") ) { outValue = _center_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParams") ) { outValue = getParams_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceFocus") ) { outValue = forceFocus_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLeafUIState") ) { outValue = getLeafUIState_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"consolidateData") ) { outValue = consolidateData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_loadBitmapRect") ) { outValue = _loadBitmapRect_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxUI_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ptr") ) { _ptr=inValue.Cast< ::flixel::addons::ui::interfaces::IEventGetter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return set_focus(inValue);focus=inValue.Cast< ::flixel::addons::ui::interfaces::IFlxUIWidget >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tongue") ) { if (inCallProp == hx::paccAlways) return set_tongue(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currMode") ) { if (inCallProp == hx::paccAlways) return set_currMode(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"failed_by") ) { failed_by=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curr_mode") ) { _curr_mode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ptr_tongue") ) { _ptr_tongue=inValue.Cast< ::flixel::addons::ui::interfaces::IFireTongue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode_index") ) { _mode_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_group_index") ) { _group_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_asset_index") ) { _asset_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_superIndexUI") ) { _superIndexUI=inValue.Cast< ::flixel::addons::ui::FlxUI >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { getTextFallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_failure_checks") ) { _failure_checks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_definition_index") ) { _definition_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"do_safe_input_delay") ) { do_safe_input_delay=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"safe_input_delay_time") ) { safe_input_delay_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_safe_input_delay_elapsed") ) { _safe_input_delay_elapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("do_safe_input_delay","\x90","\x5b","\x9d","\x88"));
	outFields->push(HX_HCSTRING("safe_input_delay_time","\x50","\x71","\xb0","\xf4"));
	outFields->push(HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"));
	outFields->push(HX_HCSTRING("failed_by","\x59","\x1a","\x00","\x5f"));
	outFields->push(HX_HCSTRING("tongue","\xc4","\x45","\xe4","\x93"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("_ptr_tongue","\x54","\xfc","\x53","\x03"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("currMode","\x75","\xab","\x68","\x8b"));
	outFields->push(HX_HCSTRING("_group_index","\xd3","\xbc","\xca","\x66"));
	outFields->push(HX_HCSTRING("_asset_index","\x44","\x0e","\xd3","\x80"));
	outFields->push(HX_HCSTRING("_definition_index","\x85","\x96","\xe5","\x82"));
	outFields->push(HX_HCSTRING("_mode_index","\x15","\xaf","\x93","\xa2"));
	outFields->push(HX_HCSTRING("_curr_mode","\xd1","\x32","\xbc","\x27"));
	outFields->push(HX_HCSTRING("_ptr","\xef","\xa6","\x20","\x3f"));
	outFields->push(HX_HCSTRING("_superIndexUI","\x8a","\xfc","\x6d","\xd1"));
	outFields->push(HX_HCSTRING("_safe_input_delay_elapsed","\x38","\x44","\x1a","\x3b"));
	outFields->push(HX_HCSTRING("_failure_checks","\xdf","\xfd","\xae","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUI_obj,do_safe_input_delay),HX_HCSTRING("do_safe_input_delay","\x90","\x5b","\x9d","\x88")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,safe_input_delay_time),HX_HCSTRING("safe_input_delay_time","\x50","\x71","\xb0","\xf4")},
	{hx::fsBool,(int)offsetof(FlxUI_obj,failed),HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,failed_by),HX_HCSTRING("failed_by","\x59","\x1a","\x00","\x5f")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFlxUIWidget*/ ,(int)offsetof(FlxUI_obj,focus),HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUI_obj,getTextFallback),HX_HCSTRING("getTextFallback","\xa5","\xc3","\x03","\x82")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFireTongue*/ ,(int)offsetof(FlxUI_obj,_ptr_tongue),HX_HCSTRING("_ptr_tongue","\x54","\xfc","\x53","\x03")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(FlxUI_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_group_index),HX_HCSTRING("_group_index","\xd3","\xbc","\xca","\x66")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_asset_index),HX_HCSTRING("_asset_index","\x44","\x0e","\xd3","\x80")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_definition_index),HX_HCSTRING("_definition_index","\x85","\x96","\xe5","\x82")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_mode_index),HX_HCSTRING("_mode_index","\x15","\xaf","\x93","\xa2")},
	{hx::fsString,(int)offsetof(FlxUI_obj,_curr_mode),HX_HCSTRING("_curr_mode","\xd1","\x32","\xbc","\x27")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IEventGetter*/ ,(int)offsetof(FlxUI_obj,_ptr),HX_HCSTRING("_ptr","\xef","\xa6","\x20","\x3f")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI*/ ,(int)offsetof(FlxUI_obj,_superIndexUI),HX_HCSTRING("_superIndexUI","\x8a","\xfc","\x6d","\xd1")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,_safe_input_delay_elapsed),HX_HCSTRING("_safe_input_delay_elapsed","\x38","\x44","\x1a","\x3b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUI_obj,_failure_checks),HX_HCSTRING("_failure_checks","\xdf","\xfd","\xae","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("do_safe_input_delay","\x90","\x5b","\x9d","\x88"),
	HX_HCSTRING("safe_input_delay_time","\x50","\x71","\xb0","\xf4"),
	HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"),
	HX_HCSTRING("failed_by","\x59","\x1a","\x00","\x5f"),
	HX_HCSTRING("get_tongue","\x8d","\xb5","\x6b","\x84"),
	HX_HCSTRING("set_tongue","\x01","\x54","\xe9","\x87"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("getTextFallback","\xa5","\xc3","\x03","\x82"),
	HX_HCSTRING("_ptr_tongue","\x54","\xfc","\x53","\x03"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("_tongueSet","\xff","\x7b","\xc4","\x6b"),
	HX_HCSTRING("callEvent","\x9c","\x22","\x04","\x02"),
	HX_HCSTRING("getEvent","\xa4","\xd7","\x9b","\xd5"),
	HX_HCSTRING("getRequest","\x59","\x65","\xe6","\x93"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("setWidgetSuppression","\x4d","\x9a","\xd2","\xbf"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("setSuperIndex","\xd9","\x09","\x3c","\xbf"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("removeAsset","\x0c","\x47","\x6d","\x24"),
	HX_HCSTRING("addAsset","\x0f","\x90","\x96","\x9f"),
	HX_HCSTRING("replaceAsset","\x1c","\x55","\xc8","\x19"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("_postLoad","\x05","\xf2","\x8c","\x4d"),
	HX_HCSTRING("get_currMode","\x7e","\x5f","\x82","\x40"),
	HX_HCSTRING("set_currMode","\xf2","\x82","\x7b","\x55"),
	HX_HCSTRING("setMode","\x25","\x14","\xe5","\x0d"),
	HX_HCSTRING("showThing","\xb1","\xed","\xed","\x3d"),
	HX_HCSTRING("getGroup","\xc9","\xc2","\xcb","\xf9"),
	HX_HCSTRING("getFlxText","\x49","\x64","\x62","\x5f"),
	HX_HCSTRING("hasAsset","\x36","\xb4","\x91","\xb2"),
	HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"),
	HX_HCSTRING("getMode","\x19","\x83","\xe3","\x1a"),
	HX_HCSTRING("getLabelStyleFromDefinition","\xd0","\x35","\x54","\xc4"),
	HX_HCSTRING("getDefinition","\xc9","\x31","\x80","\x48"),
	HX_HCSTRING("_group_index","\xd3","\xbc","\xca","\x66"),
	HX_HCSTRING("_asset_index","\x44","\x0e","\xd3","\x80"),
	HX_HCSTRING("_definition_index","\x85","\x96","\xe5","\x82"),
	HX_HCSTRING("_mode_index","\x15","\xaf","\x93","\xa2"),
	HX_HCSTRING("_curr_mode","\xd1","\x32","\xbc","\x27"),
	HX_HCSTRING("_ptr","\xef","\xa6","\x20","\x3f"),
	HX_HCSTRING("_superIndexUI","\x8a","\xfc","\x6d","\xd1"),
	HX_HCSTRING("_safe_input_delay_elapsed","\x38","\x44","\x1a","\x3b"),
	HX_HCSTRING("_failure_checks","\xdf","\xfd","\xae","\x28"),
	HX_HCSTRING("replaceInGroup","\x46","\x97","\x32","\x5c"),
	HX_HCSTRING("applyNodeConditionals","\x1d","\xb1","\xba","\xec"),
	HX_HCSTRING("applyNodeChanges","\x53","\x40","\x3a","\x89"),
	HX_HCSTRING("_loadThing","\xa9","\x4f","\x63","\x86"),
	HX_HCSTRING("_loadX","\xb3","\x8e","\xd6","\x74"),
	HX_HCSTRING("_loadY","\xb4","\x8e","\xd6","\x74"),
	HX_HCSTRING("_loadWidth","\xc1","\x7d","\x3c","\x41"),
	HX_HCSTRING("_loadHeight","\xcc","\x03","\x01","\x8a"),
	HX_HCSTRING("_loadCompass","\x0d","\x86","\x10","\xba"),
	HX_HCSTRING("_changeParamsThing","\xf9","\x9f","\x76","\x8d"),
	HX_HCSTRING("_changeThing","\x5f","\xde","\x58","\x9b"),
	HX_HCSTRING("_alignThing","\x08","\xc4","\x65","\x7b"),
	HX_HCSTRING("_doAlign","\xbb","\x90","\x76","\x8e"),
	HX_HCSTRING("_checkFailure","\x41","\xbb","\xef","\xe6"),
	HX_HCSTRING("_resizeThing","\x5b","\xb7","\x96","\xb4"),
	HX_HCSTRING("_postLoadThing","\xa9","\x93","\xc5","\x16"),
	HX_HCSTRING("_loadTileTest","\xc5","\x6d","\xd7","\x22"),
	HX_HCSTRING("_loadText","\x52","\x95","\x2f","\x05"),
	HX_HCSTRING("_loadRadioGroup","\xa9","\xf6","\x74","\x63"),
	HX_HCSTRING("_loadCheckBox","\x48","\x09","\xb5","\x48"),
	HX_HCSTRING("_loadDropDownMenu","\x15","\xf4","\x83","\x17"),
	HX_HCSTRING("_loadTest","\xf7","\x90","\x2f","\x05"),
	HX_HCSTRING("_loadLayout","\x8f","\xaa","\x6d","\xe0"),
	HX_HCSTRING("_loadTabMenu","\x0f","\x87","\x76","\x77"),
	HX_HCSTRING("_loadNumericStepper","\xa9","\xd6","\xb0","\xb0"),
	HX_HCSTRING("_loadButton","\xd7","\x5d","\x95","\x61"),
	HX_HCSTRING("_loadRegion","\xd9","\xbc","\x41","\x88"),
	HX_HCSTRING("_load9SliceSprite","\xc3","\x47","\x93","\xcb"),
	HX_HCSTRING("_loadTileRule","\x6f","\x1e","\x91","\x21"),
	HX_HCSTRING("_loadLine","\x99","\xe0","\xe8","\xff"),
	HX_HCSTRING("_loadSprite","\xea","\xd7","\x4a","\x4b"),
	HX_HCSTRING("thisWidth","\xc8","\x4a","\xca","\x38"),
	HX_HCSTRING("thisHeight","\xe5","\x9c","\x86","\x2e"),
	HX_HCSTRING("_getAnchorPos","\x88","\x41","\xe7","\x51"),
	HX_HCSTRING("calcMaxMinSize","\x24","\x12","\xef","\xe7"),
	HX_HCSTRING("_getDataSize","\xc2","\xf0","\xc4","\x17"),
	HX_HCSTRING("_getOperation","\x90","\xb3","\x05","\x92"),
	HX_HCSTRING("_doOperation","\x1d","\xf1","\x48","\x5f"),
	HX_HCSTRING("_getStretch","\x2e","\x91","\x3e","\x18"),
	HX_HCSTRING("_loadPosition","\xce","\x1f","\xd2","\x66"),
	HX_HCSTRING("_loadBorder","\xd1","\x48","\xcf","\xeb"),
	HX_HCSTRING("_loadColor","\x1e","\x39","\x36","\xc1"),
	HX_HCSTRING("_loadFontDef","\xb1","\x4b","\xc6","\xcc"),
	HX_HCSTRING("_loadFontFace","\x31","\x51","\x0b","\x62"),
	HX_HCSTRING("_onFinishLoad","\xf7","\x60","\xa4","\x8e"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("formatFromCode","\x0e","\x5a","\x55","\xe0"),
	HX_HCSTRING("formatButtonText","\xd6","\x99","\x61","\x56"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"),
	HX_HCSTRING("forceFocus","\xed","\x49","\x5e","\x9b"),
	HX_HCSTRING("getLeafUIState","\x49","\xca","\x4d","\x90"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"),
	HX_HCSTRING("_center","\x74","\x37","\x52","\x74"),
	HX_HCSTRING("consolidateData","\xd3","\xc5","\x7a","\xdc"),
	HX_HCSTRING("_loadBitmapRect","\x18","\xff","\x15","\x1d"),
	HX_HCSTRING("getParams","\x7c","\x84","\xd1","\x69"),
	::String(null()) };

void FlxUI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUI","\x55","\x08","\x11","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUI_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxUI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUI_obj >;
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
