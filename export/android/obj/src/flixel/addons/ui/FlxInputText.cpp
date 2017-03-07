#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextLineMetrics
#include <openfl/_legacy/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxInputText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxInputText","new",0xf37b21c8,"flixel.addons.ui.FlxInputText.new","flixel/addons/ui/FlxInputText.hx",30,0x19fbd1e7)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_TextColor,"TextColor")
HX_STACK_ARG(__o_BackgroundColor,"BackgroundColor")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Width = __o_Width.Default(150);
int size = __o_size.Default(8);
int TextColor = __o_TextColor.Default(-16777216);
int BackgroundColor = __o_BackgroundColor.Default(-1);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(140)
	this->backgroundColor = (int)-1;
	HX_STACK_LINE(135)
	this->fieldBorderThickness = (int)1;
	HX_STACK_LINE(130)
	this->fieldBorderColor = (int)-16777216;
	HX_STACK_LINE(125)
	this->filterMode = (int)0;
	HX_STACK_LINE(114)
	this->maxLength = (int)0;
	HX_STACK_LINE(108)
	this->forceCase = (int)0;
	HX_STACK_LINE(103)
	this->caretIndex = (int)0;
	HX_STACK_LINE(98)
	this->hasFocus = false;
	HX_STACK_LINE(80)
	this->caretWidth = (int)1;
	HX_STACK_LINE(67)
	this->background = false;
	HX_STACK_LINE(179)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	::String tmp3 = Text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	int tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	bool tmp5 = EmbeddedFont;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(179)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	HX_STACK_LINE(181)
	int tmp6 = BackgroundColor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(181)
	this->set_backgroundColor(tmp6);
	HX_STACK_LINE(183)
	bool tmp7 = (BackgroundColor != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	if ((tmp7)){
		HX_STACK_LINE(185)
		this->background = true;
	}
	HX_STACK_LINE(188)
	int tmp8 = TextColor;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(188)
	this->set_color(tmp8);
	HX_STACK_LINE(189)
	int tmp9 = TextColor;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(189)
	this->set_caretColor(tmp9);
	HX_STACK_LINE(191)
	::flixel::FlxSprite tmp10 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(191)
	this->caret = tmp10;
	HX_STACK_LINE(192)
	::flixel::FlxSprite tmp11 = this->caret;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(192)
	int tmp12 = this->caretWidth;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(192)
	int tmp13 = (size + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(192)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(192)
	tmp11->makeGraphic(tmp12,tmp14,null(),null(),null());
	HX_STACK_LINE(193)
	this->set_caretIndex((int)0);
	HX_STACK_LINE(194)
	::flixel::util::FlxTimer tmp15 = ::flixel::util::FlxTimer_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(194)
	this->_caretTimer = tmp15;
	HX_STACK_LINE(196)
	this->set_hasFocus(false);
	HX_STACK_LINE(197)
	bool tmp16 = this->background;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(197)
	if ((tmp16)){
		HX_STACK_LINE(198)
		::flixel::FlxSprite tmp17 = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(198)
		this->fieldBorderSprite = tmp17;
		HX_STACK_LINE(199)
		::flixel::FlxSprite tmp18 = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(199)
		this->backgroundSprite = tmp18;
	}
	HX_STACK_LINE(202)
	this->set_lines((int)1);
	HX_STACK_LINE(203)
	::openfl::_legacy::display::MovieClip tmp17 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(203)
	::openfl::_legacy::display::Stage tmp18 = tmp17->get_stage();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(203)
	::String tmp19 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(203)
	Dynamic tmp20 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(203)
	tmp18->addEventListener(tmp19,tmp20,null(),null(),null());
	HX_STACK_LINE(205)
	this->calcFrame(null());
}
;
	return null();
}

//FlxInputText_obj::~FlxInputText_obj() { }

Dynamic FlxInputText_obj::__CreateEmpty() { return  new FlxInputText_obj; }
hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxInputText_obj > _result_ = new FlxInputText_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return _result_;}

Dynamic FlxInputText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInputText_obj > _result_ = new FlxInputText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

::EReg FlxInputText_obj::set_customFilterPattern( ::EReg cfp){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_customFilterPattern",0x8ca18812,"flixel.addons.ui.FlxInputText.set_customFilterPattern","flixel/addons/ui/FlxInputText.hx",53,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cfp,"cfp")
	HX_STACK_LINE(54)
	this->customFilterPattern = cfp;
	HX_STACK_LINE(55)
	this->set_filterMode((int)4);
	HX_STACK_LINE(56)
	::EReg tmp = this->customFilterPattern;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_customFilterPattern,return )

int FlxInputText_obj::set_caretColor( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretColor",0xe765d535,"flixel.addons.ui.FlxInputText.set_caretColor","flixel/addons/ui/FlxInputText.hx",74,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(75)
	this->caretColor = i;
	HX_STACK_LINE(76)
	this->dirty = true;
	HX_STACK_LINE(77)
	int tmp = this->caretColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretColor,return )

int FlxInputText_obj::set_caretWidth( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretWidth",0x676c19d8,"flixel.addons.ui.FlxInputText.set_caretWidth","flixel/addons/ui/FlxInputText.hx",82,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(83)
	this->caretWidth = i;
	HX_STACK_LINE(84)
	this->dirty = true;
	HX_STACK_LINE(85)
	int tmp = this->caretWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretWidth,return )

Void FlxInputText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","destroy",0x8dd65262,"flixel.addons.ui.FlxInputText.destroy","flixel/addons/ui/FlxInputText.hx",212,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		::String tmp2 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		Dynamic tmp3 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		tmp1->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(215)
		::flixel::FlxSprite tmp4 = this->backgroundSprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		::flixel::FlxSprite tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		this->backgroundSprite = tmp5;
		HX_STACK_LINE(216)
		::flixel::FlxSprite tmp6 = this->fieldBorderSprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		::flixel::FlxSprite tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		this->fieldBorderSprite = tmp7;
		HX_STACK_LINE(217)
		this->callback = null();
		HX_STACK_LINE(220)
		bool tmp8 = (this->_charBoundaries != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(220)
		if ((tmp8)){
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				int tmp9 = this->_charBoundaries->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(222)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(222)
				if ((tmp11)){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(224)
				this->_charBoundaries->pop().StaticCast< ::flixel::util::FlxRect >();
			}
			HX_STACK_LINE(226)
			this->_charBoundaries = null();
		}
		HX_STACK_LINE(230)
		this->super::destroy();
	}
return null();
}


Void FlxInputText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","draw",0x11b0159c,"flixel.addons.ui.FlxInputText.draw","flixel/addons/ui/FlxInputText.hx",237,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		::flixel::FlxSprite tmp = this->fieldBorderSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		this->drawSprite(tmp);
		HX_STACK_LINE(239)
		::flixel::FlxSprite tmp1 = this->backgroundSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		this->drawSprite(tmp1);
		HX_STACK_LINE(241)
		this->super::draw();
		HX_STACK_LINE(244)
		int tmp2 = this->caretColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		::flixel::FlxSprite tmp3 = this->caret;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		int tmp4 = tmp3->color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(244)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(244)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		if ((tmp6)){
			HX_STACK_LINE(244)
			::flixel::FlxSprite tmp8 = this->caret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(244)
			::flixel::FlxSprite tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(244)
			Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(244)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(244)
			Float tmp12 = this->get_size();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(244)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(244)
			Float tmp14 = (tmp13 + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(244)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(244)
			tmp7 = (tmp11 != tmp15);
		}
		else{
			HX_STACK_LINE(244)
			tmp7 = true;
		}
		HX_STACK_LINE(244)
		if ((tmp7)){
			HX_STACK_LINE(246)
			::flixel::FlxSprite tmp8 = this->caret;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(246)
			int tmp9 = this->caretColor;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(246)
			tmp8->set_color(tmp9);
		}
		HX_STACK_LINE(249)
		::flixel::FlxSprite tmp8 = this->caret;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(249)
		this->drawSprite(tmp8);
	}
return null();
}


Void FlxInputText_obj::drawSprite( ::flixel::FlxSprite Sprite){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","drawSprite",0x07ac82c1,"flixel.addons.ui.FlxInputText.drawSprite","flixel/addons/ui/FlxInputText.hx",257,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_LINE(258)
		bool tmp = (Sprite != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		if ((tmp)){
			HX_STACK_LINE(258)
			tmp1 = Sprite->visible;
		}
		else{
			HX_STACK_LINE(258)
			tmp1 = false;
		}
		HX_STACK_LINE(258)
		if ((tmp1)){
			HX_STACK_LINE(260)
			::flixel::util::FlxPoint tmp2 = this->scrollFactor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			Sprite->scrollFactor = tmp2;
			HX_STACK_LINE(261)
			Sprite->set_cameras(this->get_cameras());
			HX_STACK_LINE(262)
			Sprite->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,drawSprite,(void))

Void FlxInputText_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","update",0x954505a1,"flixel.addons.ui.FlxInputText.update","flixel/addons/ui/FlxInputText.hx",270,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		this->super::update();
		HX_STACK_LINE(275)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(275)
			::flixel::input::mouse::FlxMouseButton _this = tmp1->_leftButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(275)
			bool tmp2 = (_this->current == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			if ((tmp3)){
				HX_STACK_LINE(275)
				tmp = (_this->current == (int)-2);
			}
			else{
				HX_STACK_LINE(275)
				tmp = true;
			}
		}
		HX_STACK_LINE(275)
		if ((tmp)){
			HX_STACK_LINE(277)
			::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			bool tmp2 = this->overlapsPoint(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			if ((tmp2)){
				HX_STACK_LINE(279)
				::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				int tmp4 = this->getCaretIndexFromPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				this->set_caretIndex(tmp4);
				HX_STACK_LINE(280)
				this->set_hasFocus(true);
			}
			else{
				HX_STACK_LINE(284)
				this->set_hasFocus(false);
			}
		}
	}
return null();
}


Void FlxInputText_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onKeyDown",0xeda471aa,"flixel.addons.ui.FlxInputText.onKeyDown","flixel/addons/ui/FlxInputText.hx",294,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(295)
		int key = e->keyCode;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(297)
		bool tmp = this->hasFocus;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(297)
		if ((tmp)){
			HX_STACK_LINE(300)
			bool tmp1 = (key == (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(300)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(300)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			if ((tmp3)){
				HX_STACK_LINE(300)
				tmp4 = (key == (int)17);
			}
			else{
				HX_STACK_LINE(300)
				tmp4 = true;
			}
			HX_STACK_LINE(300)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(300)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(300)
			if ((tmp5)){
				HX_STACK_LINE(300)
				tmp6 = (key == (int)220);
			}
			else{
				HX_STACK_LINE(300)
				tmp6 = true;
			}
			HX_STACK_LINE(300)
			if ((tmp6)){
				HX_STACK_LINE(302)
				return null();
			}
			else{
				HX_STACK_LINE(305)
				bool tmp7 = (key == (int)37);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(305)
				if ((tmp7)){
					HX_STACK_LINE(307)
					int tmp8 = this->caretIndex;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(307)
					bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(307)
					if ((tmp9)){
						HX_STACK_LINE(307)
						::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(307)
						int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(307)
						int tmp10 = (_g1 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(307)
						_g->set_caretIndex(tmp10);
						HX_STACK_LINE(307)
						_g1;
					}
				}
				else{
					HX_STACK_LINE(310)
					bool tmp8 = (key == (int)39);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(310)
					if ((tmp8)){
						HX_STACK_LINE(312)
						int tmp9 = this->caretIndex;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(312)
						::String tmp10 = this->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(312)
						int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(312)
						bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(312)
						if ((tmp12)){
							HX_STACK_LINE(312)
							::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(312)
							int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(312)
							int tmp13 = (_g1 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(312)
							_g->set_caretIndex(tmp13);
							HX_STACK_LINE(312)
							_g1;
						}
					}
					else{
						HX_STACK_LINE(315)
						bool tmp9 = (key == (int)8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(315)
						if ((tmp9)){
							HX_STACK_LINE(317)
							int tmp10 = this->caretIndex;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(317)
							bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(317)
							if ((tmp11)){
								HX_STACK_LINE(319)
								::String s;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(320)
								::String tmp12 = this->get_text();		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(320)
								int tmp13 = this->caretIndex;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(320)
								int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(320)
								::String tmp15 = tmp12.substring((int)0,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(320)
								::String tmp16 = this->get_text();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(320)
								int tmp17 = this->caretIndex;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(320)
								::String tmp18 = tmp16.substring(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(320)
								::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(320)
								this->set_text(tmp19);
								HX_STACK_LINE(321)
								{
									HX_STACK_LINE(321)
									::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(321)
									int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(321)
									int tmp20 = (_g1 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(321)
									_g->set_caretIndex(tmp20);
									HX_STACK_LINE(321)
									_g1;
								}
								HX_STACK_LINE(322)
								this->dirty = true;
								HX_STACK_LINE(323)
								this->onChange(HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca"));
							}
						}
						else{
							HX_STACK_LINE(327)
							bool tmp10 = (key == (int)46);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(327)
							if ((tmp10)){
								HX_STACK_LINE(329)
								::String tmp11 = this->get_text();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(329)
								int tmp12 = tmp11.length;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(329)
								bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(329)
								bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(329)
								if ((tmp13)){
									HX_STACK_LINE(329)
									int tmp15 = this->caretIndex;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(329)
									int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(329)
									::String tmp17 = this->get_text();		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(329)
									::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(329)
									int tmp19 = tmp18.length;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(329)
									tmp14 = (tmp16 < tmp19);
								}
								else{
									HX_STACK_LINE(329)
									tmp14 = false;
								}
								HX_STACK_LINE(329)
								if ((tmp14)){
									HX_STACK_LINE(331)
									::String tmp15 = this->get_text();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(331)
									int tmp16 = this->caretIndex;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(331)
									::String tmp17 = tmp15.substring((int)0,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(331)
									::String tmp18 = this->get_text();		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(331)
									int tmp19 = this->caretIndex;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(331)
									int tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(331)
									::String tmp21 = tmp18.substring(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(331)
									::String tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(331)
									this->set_text(tmp22);
									HX_STACK_LINE(332)
									this->onChange(HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"));
								}
							}
							else{
								HX_STACK_LINE(336)
								bool tmp11 = (key == (int)13);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(336)
								if ((tmp11)){
									HX_STACK_LINE(338)
									this->onChange(HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"));
								}
								else{
									HX_STACK_LINE(343)
									bool tmp12 = (e->charCode == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(343)
									if ((tmp12)){
										HX_STACK_LINE(345)
										return null();
									}
									HX_STACK_LINE(347)
									int tmp13 = e->charCode;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(347)
									::String tmp14 = ::String::fromCharCode(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(347)
									::String tmp15 = this->filter(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(347)
									::String newText = tmp15;		HX_STACK_VAR(newText,"newText");
									HX_STACK_LINE(349)
									bool tmp16 = (newText.length > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(349)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(349)
									if ((tmp16)){
										HX_STACK_LINE(349)
										int tmp18 = this->maxLength;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(349)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(349)
										bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(349)
										bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(349)
										bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(349)
										bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(349)
										bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(349)
										bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(349)
										if ((tmp25)){
											HX_STACK_LINE(349)
											::String tmp26 = this->get_text();		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(349)
											::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(349)
											::String tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(349)
											int tmp29 = tmp28.length;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(349)
											int tmp30 = newText.length;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(349)
											int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(349)
											int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(349)
											int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(349)
											int tmp34 = this->maxLength;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(349)
											int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(349)
											int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(349)
											tmp17 = (tmp33 < tmp36);
										}
										else{
											HX_STACK_LINE(349)
											tmp17 = true;
										}
									}
									else{
										HX_STACK_LINE(349)
										tmp17 = false;
									}
									HX_STACK_LINE(349)
									if ((tmp17)){
										HX_STACK_LINE(351)
										::String tmp18 = this->get_text();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(351)
										::String tmp19 = newText;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(351)
										int tmp20 = this->caretIndex;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(351)
										::String tmp21 = this->insertSubstring(tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(351)
										this->set_text(tmp21);
										HX_STACK_LINE(352)
										{
											HX_STACK_LINE(352)
											::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(352)
											int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(352)
											int tmp22 = (_g1 + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(352)
											_g->set_caretIndex(tmp22);
											HX_STACK_LINE(352)
											_g1;
										}
										HX_STACK_LINE(353)
										this->onChange(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onKeyDown,(void))

Void FlxInputText_obj::onChange( ::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onChange",0x53f01d87,"flixel.addons.ui.FlxInputText.onChange","flixel/addons/ui/FlxInputText.hx",360,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(361)
		Dynamic tmp = this->callback_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(361)
		if ((tmp1)){
			HX_STACK_LINE(363)
			::String tmp2 = this->get_text();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(363)
			::String tmp3 = action;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(363)
			this->callback(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onChange,(void))

::String FlxInputText_obj::insertSubstring( ::String Original,::String Insert,int Index){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","insertSubstring",0xe0c1ad40,"flixel.addons.ui.FlxInputText.insertSubstring","flixel/addons/ui/FlxInputText.hx",376,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Original,"Original")
	HX_STACK_ARG(Insert,"Insert")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(377)
	bool tmp = (Index != Original.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(377)
	if ((tmp)){
		HX_STACK_LINE(379)
		int tmp1 = Index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		::String tmp2 = Original.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(379)
		::String tmp3 = Insert;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(379)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(379)
		int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(379)
		::String tmp6 = Original.substring(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(379)
		Original = tmp7;
	}
	else{
		HX_STACK_LINE(383)
		::String tmp1 = (Original + Insert);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		Original = tmp1;
	}
	HX_STACK_LINE(385)
	::String tmp1 = Original;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(385)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxInputText_obj,insertSubstring,return )

int FlxInputText_obj::getCaretIndexFromPoint( ::flixel::util::FlxPoint Landing){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCaretIndexFromPoint",0xe14b9a99,"flixel.addons.ui.FlxInputText.getCaretIndexFromPoint","flixel/addons/ui/FlxInputText.hx",395,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Landing,"Landing")
	HX_STACK_LINE(397)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	{
		HX_STACK_LINE(397)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(397)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		::flixel::input::mouse::FlxMouse tmp7 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(397)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(397)
		::flixel::util::FlxPoint tmp11 = tmp2->set(tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(397)
		::flixel::util::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(397)
		point->_inPool = false;
		HX_STACK_LINE(397)
		tmp = point;
	}
	HX_STACK_LINE(397)
	::flixel::util::FlxPoint hit = tmp;		HX_STACK_VAR(hit,"hit");
	HX_STACK_LINE(398)
	bool caretRightOfText = false;		HX_STACK_VAR(caretRightOfText,"caretRightOfText");
	HX_STACK_LINE(400)
	bool tmp1 = (hit->y < (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(400)
	if ((tmp1)){
		HX_STACK_LINE(400)
		hit->set_y((int)2);
	}
	else{
		HX_STACK_LINE(401)
		Float tmp2 = hit->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(401)
		Float tmp4 = tmp3->get_textHeight();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		Float tmp5 = (tmp4 + (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(401)
		bool tmp6 = (tmp2 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(401)
		if ((tmp6)){
			HX_STACK_LINE(401)
			::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(401)
			Float tmp8 = tmp7->get_textHeight();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(401)
			Float tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(401)
			hit->set_y(tmp9);
		}
	}
	HX_STACK_LINE(402)
	bool tmp2 = (hit->x < (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(402)
	if ((tmp2)){
		HX_STACK_LINE(402)
		hit->set_x((int)2);
	}
	else{
		HX_STACK_LINE(403)
		Float tmp3 = hit->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		::openfl::_legacy::text::TextLineMetrics tmp5 = tmp4->getLineMetrics((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		bool tmp7 = (tmp3 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		if ((tmp7)){
			HX_STACK_LINE(404)
			::openfl::_legacy::text::TextField tmp8 = this->_textField;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(404)
			::openfl::_legacy::text::TextLineMetrics tmp9 = tmp8->getLineMetrics((int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(404)
			Float tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(404)
			hit->set_x(tmp10);
			HX_STACK_LINE(405)
			caretRightOfText = true;
		}
		else{
			HX_STACK_LINE(407)
			Float tmp8 = hit->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(407)
			::openfl::_legacy::text::TextField tmp9 = this->_textField;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(407)
			::openfl::_legacy::text::TextField tmp10 = this->_textField;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(407)
			int tmp11 = tmp10->get_numLines();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(407)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(407)
			::openfl::_legacy::text::TextLineMetrics tmp13 = tmp9->getLineMetrics(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(407)
			Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(407)
			bool tmp15 = (tmp8 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(407)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(407)
			if ((tmp15)){
				HX_STACK_LINE(407)
				Float tmp17 = hit->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextField tmp18 = this->_textField;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextField tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(407)
				Float tmp20 = tmp19->get_textHeight();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(407)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextField tmp22 = this->_textField;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextField tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextField tmp24 = this->_textField;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextField tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(407)
				int tmp26 = tmp25->get_numLines();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(407)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(407)
				int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(407)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(407)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextLineMetrics tmp31 = tmp23->getLineMetrics(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(407)
				::openfl::_legacy::text::TextLineMetrics tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(407)
				Float tmp33 = tmp32->ascent;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(407)
				Float tmp34 = (tmp21 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(407)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(407)
				tmp16 = (tmp17 > tmp35);
			}
			else{
				HX_STACK_LINE(407)
				tmp16 = false;
			}
			HX_STACK_LINE(407)
			if ((tmp16)){
				HX_STACK_LINE(408)
				::openfl::_legacy::text::TextField tmp17 = this->_textField;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(408)
				::openfl::_legacy::text::TextField tmp18 = this->_textField;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(408)
				int tmp19 = tmp18->get_numLines();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(408)
				int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(408)
				::openfl::_legacy::text::TextLineMetrics tmp21 = tmp17->getLineMetrics(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(408)
				Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(408)
				hit->set_x(tmp22);
				HX_STACK_LINE(409)
				caretRightOfText = true;
			}
		}
	}
	HX_STACK_LINE(412)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(414)
	bool tmp3 = caretRightOfText;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(414)
	if ((tmp3)){
		HX_STACK_LINE(418)
		Float tmp4 = hit->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		Float tmp5 = hit->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		int tmp6 = this->getCharIndexAtPoint(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(418)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(418)
		index = tmp7;
	}
	else{
		HX_STACK_LINE(425)
		Float tmp4 = hit->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(425)
		Float tmp5 = hit->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(425)
		int tmp6 = this->getCharIndexAtPoint(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(425)
		index = tmp6;
	}
	HX_STACK_LINE(429)
	int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(429)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCaretIndexFromPoint,return )

int FlxInputText_obj::getCharIndexAtPoint( Float X,Float Y){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCharIndexAtPoint",0xf4438f7f,"flixel.addons.ui.FlxInputText.getCharIndexAtPoint","flixel/addons/ui/FlxInputText.hx",438,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(439)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(440)
	bool tmp = (this->_charBoundaries != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	if ((tmp)){
		HX_STACK_LINE(442)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(442)
		Array< ::Dynamic > _g1 = this->_charBoundaries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(442)
		while((true)){
			HX_STACK_LINE(442)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(442)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(442)
			if ((tmp2)){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(442)
			::flixel::util::FlxRect tmp3 = _g1->__get(_g).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(442)
			::flixel::util::FlxRect r = tmp3;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(442)
			++(_g);
			HX_STACK_LINE(444)
			bool tmp4 = (X >= r->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(444)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(444)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			if ((tmp5)){
				HX_STACK_LINE(444)
				Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				Float tmp8 = (r->x + r->width);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(444)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(444)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(444)
				tmp6 = (tmp7 <= tmp10);
			}
			else{
				HX_STACK_LINE(444)
				tmp6 = false;
			}
			HX_STACK_LINE(444)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(444)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(444)
			if ((tmp7)){
				HX_STACK_LINE(444)
				tmp8 = (Y >= r->y);
			}
			else{
				HX_STACK_LINE(444)
				tmp8 = false;
			}
			HX_STACK_LINE(444)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(444)
			if ((tmp8)){
				HX_STACK_LINE(444)
				Float tmp10 = Y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(444)
				Float tmp11 = (r->y + r->height);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(444)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(444)
				tmp9 = (tmp10 <= tmp12);
			}
			else{
				HX_STACK_LINE(444)
				tmp9 = false;
			}
			HX_STACK_LINE(444)
			if ((tmp9)){
				HX_STACK_LINE(446)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(446)
				return tmp10;
			}
			HX_STACK_LINE(448)
			(i)++;
		}
	}
	HX_STACK_LINE(452)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputText_obj,getCharIndexAtPoint,return )

::openfl::_legacy::geom::Rectangle FlxInputText_obj::getCharBoundaries( int charIndex){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCharBoundaries",0x38cd7cdc,"flixel.addons.ui.FlxInputText.getCharBoundaries","flixel/addons/ui/FlxInputText.hx",456,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(457)
	bool tmp = (this->_charBoundaries != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(457)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(457)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(457)
	if ((tmp1)){
		HX_STACK_LINE(457)
		tmp2 = (charIndex > (int)0);
	}
	else{
		HX_STACK_LINE(457)
		tmp2 = false;
	}
	HX_STACK_LINE(457)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(457)
	if ((tmp2)){
		HX_STACK_LINE(457)
		int tmp4 = charIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(457)
		int tmp5 = this->_charBoundaries->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(457)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(457)
		tmp3 = (tmp4 < tmp6);
	}
	else{
		HX_STACK_LINE(457)
		tmp3 = false;
	}
	HX_STACK_LINE(457)
	if ((tmp3)){
		HX_STACK_LINE(459)
		::openfl::_legacy::geom::Rectangle tmp4 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(459)
		::openfl::_legacy::geom::Rectangle r = tmp4;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(460)
		::openfl::_legacy::geom::Rectangle tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			::flixel::util::FlxRect tmp6 = this->_charBoundaries->__get(charIndex).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(460)
			::flixel::util::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(460)
			r->x = _this->x;
			HX_STACK_LINE(460)
			r->y = _this->y;
			HX_STACK_LINE(460)
			r->width = _this->width;
			HX_STACK_LINE(460)
			r->height = _this->height;
			HX_STACK_LINE(460)
			tmp5 = r;
		}
		HX_STACK_LINE(460)
		return tmp5;
	}
	HX_STACK_LINE(462)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCharBoundaries,return )

::String FlxInputText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_text",0x37e27742,"flixel.addons.ui.FlxInputText.set_text","flixel/addons/ui/FlxInputText.hx",466,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(467)
	::String tmp = Text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(467)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	::String return_text = tmp1;		HX_STACK_VAR(return_text,"return_text");
	HX_STACK_LINE(468)
	int numChars = Text.length;		HX_STACK_VAR(numChars,"numChars");
	HX_STACK_LINE(469)
	int tmp2 = numChars;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(469)
	this->prepareCharBoundaries(tmp2);
	HX_STACK_LINE(470)
	::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(470)
	tmp3->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_LINE(471)
	Float textH = (int)0;		HX_STACK_VAR(textH,"textH");
	HX_STACK_LINE(472)
	Float textW = (int)0;		HX_STACK_VAR(textW,"textW");
	HX_STACK_LINE(473)
	Float lastW = (int)0;		HX_STACK_VAR(lastW,"lastW");
	HX_STACK_LINE(474)
	{
		HX_STACK_LINE(474)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(474)
		while((true)){
			HX_STACK_LINE(474)
			bool tmp4 = (_g < numChars);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(474)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(474)
			if ((tmp5)){
				HX_STACK_LINE(474)
				break;
			}
			HX_STACK_LINE(474)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(474)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(476)
			::openfl::_legacy::text::TextField tmp7 = this->_textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(476)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(476)
			::String tmp9 = Text.substr(tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(476)
			tmp7->appendText(tmp9);
			HX_STACK_LINE(477)
			::openfl::_legacy::text::TextField tmp10 = this->_textField;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(477)
			Float tmp11 = tmp10->get_textWidth();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(477)
			textW = tmp11;
			HX_STACK_LINE(478)
			bool tmp12 = (i == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(478)
			if ((tmp12)){
				HX_STACK_LINE(480)
				::openfl::_legacy::text::TextField tmp13 = this->_textField;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(480)
				Float tmp14 = tmp13->get_textHeight();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(480)
				textH = tmp14;
			}
			HX_STACK_LINE(482)
			::flixel::util::FlxRect tmp13 = this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(482)
			tmp13->x = lastW;
			HX_STACK_LINE(483)
			::flixel::util::FlxRect tmp14 = this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(483)
			tmp14->y = (int)0;
			HX_STACK_LINE(484)
			Float tmp15 = (textW - lastW);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(484)
			::flixel::util::FlxRect tmp16 = this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(484)
			tmp16->width = tmp15;
			HX_STACK_LINE(485)
			::flixel::util::FlxRect tmp17 = this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(485)
			tmp17->height = textH;
			HX_STACK_LINE(486)
			lastW = textW;
		}
	}
	HX_STACK_LINE(488)
	::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	::String tmp5 = Text;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	tmp4->set_text(tmp5);
	HX_STACK_LINE(489)
	::String tmp6 = return_text;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(489)
	return tmp6;
}


Void FlxInputText_obj::prepareCharBoundaries( int numChars){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","prepareCharBoundaries",0x33edc58d,"flixel.addons.ui.FlxInputText.prepareCharBoundaries","flixel/addons/ui/FlxInputText.hx",493,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numChars,"numChars")
		HX_STACK_LINE(494)
		bool tmp = (this->_charBoundaries == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(494)
		if ((tmp)){
			HX_STACK_LINE(496)
			this->_charBoundaries = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(499)
		int tmp1 = this->_charBoundaries->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(499)
		int tmp2 = numChars;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(499)
		bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(499)
		if ((tmp3)){
			HX_STACK_LINE(501)
			int tmp4 = this->_charBoundaries->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(501)
			int tmp5 = numChars;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			int tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			int diff = tmp6;		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(502)
				while((true)){
					HX_STACK_LINE(502)
					bool tmp7 = (_g < diff);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(502)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(502)
					if ((tmp8)){
						HX_STACK_LINE(502)
						break;
					}
					HX_STACK_LINE(502)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(502)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(504)
					this->_charBoundaries->pop().StaticCast< ::flixel::util::FlxRect >();
				}
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(508)
			while((true)){
				HX_STACK_LINE(508)
				bool tmp4 = (_g < numChars);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(508)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(508)
				if ((tmp5)){
					HX_STACK_LINE(508)
					break;
				}
				HX_STACK_LINE(508)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(508)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(510)
				int tmp7 = this->_charBoundaries->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(510)
				int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(510)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(510)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(510)
				if ((tmp10)){
					HX_STACK_LINE(512)
					::flixel::util::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(512)
					{
						HX_STACK_LINE(512)
						::flixel::util::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::flixel::util::FlxPool tmp13 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(512)
							::flixel::util::FlxRect tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(512)
							::flixel::util::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(512)
							_this->x = (int)0;
							HX_STACK_LINE(512)
							_this->y = (int)0;
							HX_STACK_LINE(512)
							_this->width = (int)0;
							HX_STACK_LINE(512)
							_this->height = (int)0;
							HX_STACK_LINE(512)
							tmp12 = _this;
						}
						HX_STACK_LINE(512)
						::flixel::util::FlxRect rect = tmp12;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(512)
						rect->_inPool = false;
						HX_STACK_LINE(512)
						tmp11 = rect;
					}
					HX_STACK_LINE(512)
					this->_charBoundaries->push(tmp11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,prepareCharBoundaries,(void))

Void FlxInputText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","calcFrame",0x733ee2c0,"flixel.addons.ui.FlxInputText.calcFrame","flixel/addons/ui/FlxInputText.hx",524,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(525)
		bool tmp = RunOnCpp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		this->super::calcFrame(tmp);
		HX_STACK_LINE(527)
		::flixel::FlxSprite tmp1 = this->fieldBorderSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(527)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(527)
		if ((tmp2)){
			HX_STACK_LINE(529)
			int tmp3 = this->fieldBorderThickness;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(529)
			if ((tmp4)){
				HX_STACK_LINE(531)
				::flixel::FlxSprite tmp5 = this->fieldBorderSprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(531)
				Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(531)
				int tmp7 = this->fieldBorderThickness;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(531)
				int tmp8 = (tmp7 * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(531)
				Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(531)
				int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(531)
				Float tmp11 = this->get_height();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(531)
				int tmp12 = this->fieldBorderThickness;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(531)
				int tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(531)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(531)
				int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(531)
				int tmp16 = this->fieldBorderColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(531)
				tmp5->makeGraphic(tmp10,tmp15,tmp16,null(),null());
				HX_STACK_LINE(532)
				::flixel::FlxSprite tmp17 = this->fieldBorderSprite;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(532)
				Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(532)
				int tmp19 = this->fieldBorderThickness;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(532)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(532)
				tmp17->set_x(tmp20);
				HX_STACK_LINE(533)
				::flixel::FlxSprite tmp21 = this->fieldBorderSprite;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(533)
				Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(533)
				int tmp23 = this->fieldBorderThickness;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(533)
				Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(533)
				tmp21->set_y(tmp24);
			}
			else{
				HX_STACK_LINE(535)
				int tmp5 = this->fieldBorderThickness;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(535)
				bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(535)
				if ((tmp6)){
					HX_STACK_LINE(537)
					::flixel::FlxSprite tmp7 = this->fieldBorderSprite;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(537)
					tmp7->set_visible(false);
				}
			}
		}
		HX_STACK_LINE(541)
		::flixel::FlxSprite tmp3 = this->backgroundSprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(541)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(541)
		if ((tmp4)){
			HX_STACK_LINE(543)
			bool tmp5 = this->background;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(543)
			if ((tmp5)){
				HX_STACK_LINE(545)
				::flixel::FlxSprite tmp6 = this->backgroundSprite;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(545)
				Float tmp7 = this->get_width();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(545)
				int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(545)
				Float tmp9 = this->get_height();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(545)
				int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(545)
				int tmp11 = this->backgroundColor;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(545)
				tmp6->makeGraphic(tmp8,tmp10,tmp11,null(),null());
				HX_STACK_LINE(546)
				::flixel::FlxSprite tmp12 = this->backgroundSprite;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(546)
				Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(546)
				tmp12->set_x(tmp13);
				HX_STACK_LINE(547)
				::flixel::FlxSprite tmp14 = this->backgroundSprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(547)
				Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(547)
				tmp14->set_y(tmp15);
			}
			else{
				HX_STACK_LINE(551)
				::flixel::FlxSprite tmp6 = this->backgroundSprite;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(551)
				tmp6->set_visible(false);
			}
		}
		HX_STACK_LINE(555)
		::flixel::FlxSprite tmp5 = this->caret;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(555)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(555)
		if ((tmp6)){
			HX_STACK_LINE(560)
			int tmp7 = this->caretWidth;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(560)
			int cw = tmp7;		HX_STACK_VAR(cw,"cw");
			HX_STACK_LINE(561)
			Float tmp8 = this->get_size();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(561)
			Float tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(561)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(561)
			int ch = tmp10;		HX_STACK_VAR(ch,"ch");
			HX_STACK_LINE(564)
			int tmp11 = this->borderColor;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(564)
			int tmp12 = (int(tmp11) & int((int)16777215));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(564)
			int tmp13 = (int((int)-16777216) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(564)
			int borderC = tmp13;		HX_STACK_VAR(borderC,"borderC");
			HX_STACK_LINE(565)
			int tmp14 = this->caretColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(565)
			int tmp15 = (int(tmp14) & int((int)16777215));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(565)
			int tmp16 = (int((int)-16777216) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(565)
			int caretC = tmp16;		HX_STACK_VAR(caretC,"caretC");
			HX_STACK_LINE(568)
			::String tmp17 = (HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41") + cw);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(568)
			::String tmp18 = (tmp17 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(568)
			int tmp19 = ch;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(568)
			::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(568)
			::String tmp21 = (tmp20 + HX_HCSTRING("c:","\x77","\x56","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(568)
			int tmp22 = caretC;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(568)
			::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(568)
			::String tmp24 = (tmp23 + HX_HCSTRING("b:","\x98","\x55","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(568)
			int tmp25 = this->borderStyle;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(568)
			::String tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(568)
			::String tmp27 = (tmp26 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(568)
			Float tmp28 = this->borderSize;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(568)
			::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(568)
			::String tmp30 = (tmp29 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(568)
			int tmp31 = borderC;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(568)
			::String tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(568)
			::String caretKey = tmp32;		HX_STACK_VAR(caretKey,"caretKey");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				int tmp33 = this->borderStyle;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(569)
				int _g = tmp33;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(569)
				int tmp34 = _g;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(569)
				switch( (int)(tmp34)){
					case (int)0: {
						HX_STACK_LINE(573)
						::flixel::FlxSprite tmp35 = this->caret;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(573)
						int tmp36 = cw;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(573)
						int tmp37 = ch;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(573)
						int tmp38 = caretC;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(573)
						::String tmp39 = caretKey;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(573)
						tmp35->makeGraphic(tmp36,tmp37,tmp38,false,tmp39);
						HX_STACK_LINE(574)
						::flixel::FlxSprite tmp40 = this->caret;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(574)
						::flixel::FlxSprite tmp41 = this->caret;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(574)
						Float tmp42 = tmp41->offset->set_y((int)0);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(574)
						tmp40->offset->set_x(tmp42);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(577)
						Float tmp35 = this->borderSize;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(577)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(577)
						hx::AddEq(cw,tmp36);
						HX_STACK_LINE(578)
						Float tmp37 = this->borderSize;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(578)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(578)
						hx::AddEq(ch,tmp38);
						HX_STACK_LINE(579)
						::flixel::FlxSprite tmp39 = this->caret;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(579)
						int tmp40 = cw;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(579)
						int tmp41 = ch;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(579)
						::String tmp42 = caretKey;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(579)
						tmp39->makeGraphic(tmp40,tmp41,(int)0,false,tmp42);
						HX_STACK_LINE(580)
						Float tmp43 = this->borderSize;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(580)
						Float tmp44 = this->borderSize;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(580)
						int tmp45 = this->caretWidth;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(580)
						Float tmp46 = this->get_size();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(580)
						Float tmp47 = (tmp46 + (int)2);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(580)
						int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(580)
						::openfl::_legacy::geom::Rectangle tmp49 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp43,tmp44,tmp45,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(580)
						::openfl::_legacy::geom::Rectangle r = tmp49;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(581)
						::flixel::FlxSprite tmp50 = this->caret;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(581)
						::openfl::_legacy::display::BitmapData tmp51 = tmp50->get_pixels();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(581)
						::openfl::_legacy::geom::Rectangle tmp52 = r;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(581)
						int tmp53 = borderC;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(581)
						tmp51->fillRect(tmp52,tmp53);
						HX_STACK_LINE(582)
						Float tmp54 = r->y = (int)0;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(582)
						r->x = tmp54;
						HX_STACK_LINE(583)
						::flixel::FlxSprite tmp55 = this->caret;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(583)
						::openfl::_legacy::display::BitmapData tmp56 = tmp55->get_pixels();		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(583)
						::openfl::_legacy::geom::Rectangle tmp57 = r;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(583)
						int tmp58 = caretC;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(583)
						tmp56->fillRect(tmp57,tmp58);
						HX_STACK_LINE(584)
						::flixel::FlxSprite tmp59 = this->caret;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(584)
						::flixel::FlxSprite tmp60 = this->caret;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(584)
						Float tmp61 = tmp60->offset->set_y((int)0);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(584)
						tmp59->offset->set_x(tmp61);
					}
					;break;
					case (int)3: case (int)2: {
						HX_STACK_LINE(587)
						Float tmp35 = this->borderSize;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(587)
						Float tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(587)
						int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(587)
						hx::AddEq(cw,tmp37);
						HX_STACK_LINE(588)
						Float tmp38 = this->borderSize;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(588)
						Float tmp39 = (tmp38 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(588)
						int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(588)
						hx::AddEq(ch,tmp40);
						HX_STACK_LINE(589)
						::flixel::FlxSprite tmp41 = this->caret;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(589)
						int tmp42 = cw;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(589)
						int tmp43 = ch;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(589)
						int tmp44 = borderC;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(589)
						::String tmp45 = caretKey;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(589)
						tmp41->makeGraphic(tmp42,tmp43,tmp44,false,tmp45);
						HX_STACK_LINE(590)
						Float tmp46 = this->borderSize;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(590)
						Float tmp47 = this->borderSize;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(590)
						int tmp48 = this->caretWidth;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(590)
						Float tmp49 = this->get_size();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(590)
						Float tmp50 = (tmp49 + (int)2);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(590)
						int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(590)
						::openfl::_legacy::geom::Rectangle tmp52 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp46,tmp47,tmp48,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(590)
						::openfl::_legacy::geom::Rectangle r = tmp52;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(591)
						Float tmp53 = this->borderSize;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(591)
						Float tmp54 = this->borderSize;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(591)
						int tmp55 = this->caretWidth;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(591)
						Float tmp56 = this->get_size();		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(591)
						Float tmp57 = (tmp56 + (int)2);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(591)
						int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(591)
						r->setTo(tmp53,tmp54,tmp55,tmp58);
						HX_STACK_LINE(592)
						::flixel::FlxSprite tmp59 = this->caret;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(592)
						::openfl::_legacy::display::BitmapData tmp60 = tmp59->get_pixels();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(592)
						::openfl::_legacy::geom::Rectangle tmp61 = r;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(592)
						int tmp62 = caretC;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(592)
						tmp60->fillRect(tmp61,tmp62);
						HX_STACK_LINE(594)
						::flixel::FlxSprite tmp63 = this->caret;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(594)
						::flixel::FlxSprite tmp64 = this->caret;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(594)
						Float tmp65 = this->borderSize;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(594)
						Float tmp66 = tmp64->offset->set_y(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(594)
						tmp63->offset->set_x(tmp66);
					}
					;break;
				}
			}
			HX_STACK_LINE(597)
			::flixel::FlxSprite tmp33 = this->caret;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(597)
			int tmp34 = cw;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(597)
			tmp33->set_width(tmp34);
			HX_STACK_LINE(598)
			::flixel::FlxSprite tmp35 = this->caret;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(598)
			int tmp36 = ch;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(598)
			tmp35->set_height(tmp36);
			HX_STACK_LINE(600)
			int tmp37 = this->caretIndex;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(600)
			this->set_caretIndex(tmp37);
		}
	}
return null();
}


Void FlxInputText_obj::toggleCaret( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","toggleCaret",0x6f59aab7,"flixel.addons.ui.FlxInputText.toggleCaret","flixel/addons/ui/FlxInputText.hx",608,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(609)
		::flixel::FlxSprite tmp = this->caret;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		::flixel::FlxSprite tmp1 = this->caret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		bool tmp2 = tmp1->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		tmp->set_visible(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,toggleCaret,(void))

::String FlxInputText_obj::filter( ::String text){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","filter",0x93749f50,"flixel.addons.ui.FlxInputText.filter","flixel/addons/ui/FlxInputText.hx",617,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(618)
	int tmp = this->forceCase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(618)
	if ((tmp1)){
		HX_STACK_LINE(620)
		::String tmp2 = text.toUpperCase();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		text = tmp2;
	}
	else{
		HX_STACK_LINE(622)
		int tmp2 = this->forceCase;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(622)
		bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(622)
		if ((tmp3)){
			HX_STACK_LINE(624)
			::String tmp4 = text.toLowerCase();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(624)
			text = tmp4;
		}
	}
	HX_STACK_LINE(627)
	int tmp2 = this->filterMode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(627)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(627)
	if ((tmp3)){
		HX_STACK_LINE(629)
		::EReg pattern;		HX_STACK_VAR(pattern,"pattern");
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(630)
			int tmp4 = this->filterMode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(630)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			switch( (int)(tmp5)){
				case (int)1: {
					HX_STACK_LINE(632)
					::EReg tmp6 = ::EReg_obj::__new(HX_HCSTRING("[^a-zA-Z]*","\x50","\x38","\x19","\x1d"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(632)
					pattern = tmp6;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(633)
					::EReg tmp6 = ::EReg_obj::__new(HX_HCSTRING("[^0-9]*","\x46","\x25","\xd3","\x1e"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(633)
					pattern = tmp6;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(634)
					::EReg tmp6 = ::EReg_obj::__new(HX_HCSTRING("[^a-zA-Z0-9]*","\x86","\xf4","\x79","\xaa"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(634)
					pattern = tmp6;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(635)
					::EReg tmp6 = this->customFilterPattern;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(635)
					pattern = tmp6;
				}
				;break;
				default: {
					HX_STACK_LINE(637)
					int tmp6 = this->filterMode;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(637)
					::String tmp7 = (HX_HCSTRING("FlxInputText: Unknown filterMode (","\x04","\xc7","\x17","\x56") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(637)
					::String tmp8 = (tmp7 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(637)
					::openfl::errors::Error tmp9 = ::openfl::errors::Error_obj::__new(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(637)
					HX_STACK_DO_THROW(tmp9);
				}
			}
		}
		HX_STACK_LINE(639)
		::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(639)
		pattern->replace(tmp4,HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(641)
	::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(641)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,filter,return )

cpp::ArrayBase FlxInputText_obj::set_params( cpp::ArrayBase p){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_params",0xe3d3351b,"flixel.addons.ui.FlxInputText.set_params","flixel/addons/ui/FlxInputText.hx",645,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(646)
	this->params = p;
	HX_STACK_LINE(647)
	bool tmp = (this->params == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	if ((tmp)){
		HX_STACK_LINE(649)
		this->params = cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(651)
	::String tmp1 = this->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",651,0x19fbd1e7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),false);
				__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , tmp1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(651)
	Dynamic tmp2 = _Function_1_1::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(651)
	Dynamic namedValue = tmp2;		HX_STACK_VAR(namedValue,"namedValue");
	HX_STACK_LINE(652)
	Dynamic tmp3 = namedValue;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(652)
	this->params->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	HX_STACK_LINE(653)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_params,return )

Float FlxInputText_obj::set_x( Float X){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_x",0x02dc16c3,"flixel.addons.ui.FlxInputText.set_x","flixel/addons/ui/FlxInputText.hx",657,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_LINE(658)
	::flixel::FlxSprite tmp = this->fieldBorderSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(658)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(658)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(658)
	if ((tmp1)){
		HX_STACK_LINE(658)
		int tmp3 = this->fieldBorderThickness;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(658)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(658)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(658)
		tmp2 = false;
	}
	HX_STACK_LINE(658)
	if ((tmp2)){
		HX_STACK_LINE(660)
		::flixel::FlxSprite tmp3 = this->fieldBorderSprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(660)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(660)
		int tmp5 = this->fieldBorderThickness;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(660)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(660)
		tmp3->set_x(tmp6);
	}
	HX_STACK_LINE(662)
	::flixel::FlxSprite tmp3 = this->backgroundSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(662)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(662)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(662)
	if ((tmp4)){
		HX_STACK_LINE(662)
		tmp5 = this->background;
	}
	else{
		HX_STACK_LINE(662)
		tmp5 = false;
	}
	HX_STACK_LINE(662)
	if ((tmp5)){
		HX_STACK_LINE(664)
		::flixel::FlxSprite tmp6 = this->backgroundSprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(664)
		Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(664)
		tmp6->set_x(tmp7);
	}
	HX_STACK_LINE(666)
	Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(666)
	Float tmp7 = this->super::set_x(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(666)
	return tmp7;
}


Float FlxInputText_obj::set_y( Float Y){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_y",0x02dc16c4,"flixel.addons.ui.FlxInputText.set_y","flixel/addons/ui/FlxInputText.hx",670,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(671)
	::flixel::FlxSprite tmp = this->fieldBorderSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(671)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(671)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(671)
	if ((tmp1)){
		HX_STACK_LINE(671)
		int tmp3 = this->fieldBorderThickness;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(671)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(671)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(671)
		tmp2 = false;
	}
	HX_STACK_LINE(671)
	if ((tmp2)){
		HX_STACK_LINE(673)
		::flixel::FlxSprite tmp3 = this->fieldBorderSprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(673)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(673)
		int tmp5 = this->fieldBorderThickness;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(673)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(673)
		tmp3->set_y(tmp6);
	}
	HX_STACK_LINE(675)
	::flixel::FlxSprite tmp3 = this->backgroundSprite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(675)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(675)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(675)
	if ((tmp4)){
		HX_STACK_LINE(675)
		tmp5 = this->background;
	}
	else{
		HX_STACK_LINE(675)
		tmp5 = false;
	}
	HX_STACK_LINE(675)
	if ((tmp5)){
		HX_STACK_LINE(677)
		::flixel::FlxSprite tmp6 = this->backgroundSprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(677)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(677)
		tmp6->set_y(tmp7);
	}
	HX_STACK_LINE(679)
	Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(679)
	Float tmp7 = this->super::set_y(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(679)
	return tmp7;
}


bool FlxInputText_obj::set_hasFocus( bool newFocus){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_hasFocus",0xf91bc333,"flixel.addons.ui.FlxInputText.set_hasFocus","flixel/addons/ui/FlxInputText.hx",683,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newFocus,"newFocus")
	HX_STACK_LINE(684)
	bool tmp = newFocus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	if ((tmp)){
		HX_STACK_LINE(686)
		bool tmp1 = this->hasFocus;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		bool tmp2 = newFocus;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(686)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(686)
		if ((tmp3)){
			HX_STACK_LINE(688)
			::flixel::util::FlxTimer tmp4 = this->_caretTimer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(688)
			Dynamic tmp5 = this->toggleCaret_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			tmp4->start(((Float)0.5),tmp5,(int)0);
			HX_STACK_LINE(689)
			::flixel::FlxSprite tmp6 = this->caret;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(689)
			tmp6->set_visible(true);
			HX_STACK_LINE(690)
			::String tmp7 = this->get_text();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(690)
			int tmp8 = tmp7.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(690)
			this->set_caretIndex(tmp8);
		}
	}
	else{
		HX_STACK_LINE(696)
		::flixel::FlxSprite tmp1 = this->caret;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		tmp1->set_visible(false);
		HX_STACK_LINE(697)
		::flixel::util::FlxTimer tmp2 = this->_caretTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(697)
		if ((tmp3)){
			HX_STACK_LINE(699)
			::flixel::util::FlxTimer tmp4 = this->_caretTimer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(699)
			tmp4->cancel();
		}
	}
	HX_STACK_LINE(703)
	bool tmp1 = newFocus;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(703)
	bool tmp2 = this->hasFocus;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(703)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(703)
	if ((tmp3)){
		HX_STACK_LINE(705)
		this->calcFrame(null());
	}
	HX_STACK_LINE(707)
	bool tmp4 = this->hasFocus = newFocus;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(707)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_hasFocus,return )

int FlxInputText_obj::set_caretIndex( int newCaretIndex){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretIndex",0x5b1dfee4,"flixel.addons.ui.FlxInputText.set_caretIndex","flixel/addons/ui/FlxInputText.hx",711,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newCaretIndex,"newCaretIndex")
	HX_STACK_LINE(712)
	Float offx = (int)0;		HX_STACK_VAR(offx,"offx");
	HX_STACK_LINE(714)
	::String alignStr = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");		HX_STACK_VAR(alignStr,"alignStr");
	HX_STACK_LINE(715)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(715)
	if ((tmp1)){
		HX_STACK_LINE(715)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(715)
		::openfl::_legacy::text::TextFormat tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(715)
		::String tmp5 = tmp4->align;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(715)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(715)
		tmp2 = false;
	}
	HX_STACK_LINE(715)
	if ((tmp2)){
		HX_STACK_LINE(716)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(716)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(716)
		tmp4 = hx::TCast< ::String >::cast(tmp3->align);
		HX_STACK_LINE(716)
		alignStr = tmp4;
	}
	HX_STACK_LINE(719)
	::String tmp3 = alignStr;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(719)
	::String _switch_1 = (tmp3);
	if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(720)
		offx = (int)0;
	}
	else if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(721)
		::openfl::_legacy::text::TextField tmp4 = this->_textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(721)
		Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(721)
		::openfl::_legacy::text::TextField tmp6 = this->_textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(721)
		Float tmp7 = tmp6->get_textWidth();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(721)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(721)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(721)
		offx = tmp9;
	}
	else  {
		HX_STACK_LINE(722)
		offx = (int)0;
	}
;
;
	HX_STACK_LINE(725)
	this->caretIndex = newCaretIndex;
	HX_STACK_LINE(728)
	int tmp4 = this->caretIndex;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(728)
	::String tmp5 = this->get_text();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(728)
	int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(728)
	int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(728)
	bool tmp8 = (tmp4 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(728)
	if ((tmp8)){
		HX_STACK_LINE(730)
		this->caretIndex = (int)-1;
	}
	HX_STACK_LINE(734)
	int tmp9 = this->caretIndex;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(734)
	bool tmp10 = (tmp9 != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(734)
	if ((tmp10)){
		HX_STACK_LINE(736)
		::openfl::_legacy::geom::Rectangle boundaries = null();		HX_STACK_VAR(boundaries,"boundaries");
		HX_STACK_LINE(739)
		int tmp11 = this->caretIndex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(739)
		::String tmp12 = this->get_text();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(739)
		int tmp13 = tmp12.length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(739)
		bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(739)
		if ((tmp14)){
			HX_STACK_LINE(743)
			int tmp15 = this->caretIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(743)
			::openfl::_legacy::geom::Rectangle tmp16 = this->getCharBoundaries(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(743)
			boundaries = tmp16;
			HX_STACK_LINE(745)
			bool tmp17 = (boundaries != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(745)
			if ((tmp17)){
				HX_STACK_LINE(747)
				::flixel::FlxSprite tmp18 = this->caret;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(747)
				Float tmp19 = offx;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(747)
				Float tmp20 = boundaries->get_left();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(747)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(747)
				Float tmp22 = this->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(747)
				Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(747)
				tmp18->set_x(tmp23);
				HX_STACK_LINE(748)
				::flixel::FlxSprite tmp24 = this->caret;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(748)
				Float tmp25 = boundaries->get_top();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(748)
				Float tmp26 = this->y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(748)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(748)
				tmp24->set_y(tmp27);
			}
		}
		else{
			HX_STACK_LINE(756)
			int tmp15 = this->caretIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(756)
			int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(756)
			::openfl::_legacy::geom::Rectangle tmp17 = this->getCharBoundaries(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(756)
			boundaries = tmp17;
			HX_STACK_LINE(758)
			bool tmp18 = (boundaries != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(758)
			if ((tmp18)){
				HX_STACK_LINE(760)
				::flixel::FlxSprite tmp19 = this->caret;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(760)
				Float tmp20 = offx;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(760)
				Float tmp21 = boundaries->get_right();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(760)
				Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(760)
				Float tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(760)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(760)
				tmp19->set_x(tmp24);
				HX_STACK_LINE(761)
				::flixel::FlxSprite tmp25 = this->caret;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(761)
				Float tmp26 = boundaries->get_top();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(761)
				Float tmp27 = this->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(761)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(761)
				tmp25->set_y(tmp28);
			}
			else{
				HX_STACK_LINE(764)
				::String tmp19 = this->get_text();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(764)
				int tmp20 = tmp19.length;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(764)
				bool tmp21 = (tmp20 == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(764)
				if ((tmp21)){
					HX_STACK_LINE(767)
					::flixel::FlxSprite tmp22 = this->caret;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(767)
					Float tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(767)
					Float tmp24 = offx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(767)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(767)
					Float tmp26 = (tmp25 + (int)2);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(767)
					tmp22->set_x(tmp26);
					HX_STACK_LINE(768)
					::flixel::FlxSprite tmp27 = this->caret;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(768)
					Float tmp28 = this->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(768)
					Float tmp29 = (tmp28 + (int)2);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(768)
					tmp27->set_y(tmp29);
					HX_STACK_LINE(769)
					bool tmp30 = (alignStr == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(769)
					if ((tmp30)){
						HX_STACK_LINE(770)
						::flixel::FlxSprite tmp31 = this->caret;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(770)
						Float tmp32 = this->x;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(770)
						::openfl::_legacy::text::TextField tmp33 = this->_textField;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(770)
						Float tmp34 = tmp33->get_width();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(770)
						Float tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(770)
						Float tmp36 = (tmp35 - (int)2);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(770)
						tmp31->set_x(tmp36);
					}
				}
			}
		}
	}
	HX_STACK_LINE(777)
	int tmp11 = this->lines;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(777)
	bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(777)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(777)
	if ((tmp12)){
		HX_STACK_LINE(777)
		::flixel::FlxSprite tmp14 = this->caret;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(777)
		::flixel::FlxSprite tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(777)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(777)
		::flixel::FlxSprite tmp17 = this->caret;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(777)
		::flixel::FlxSprite tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(777)
		Float tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(777)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(777)
		Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(777)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(777)
		Float tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(777)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(777)
		Float tmp25 = this->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(777)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(777)
		Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(777)
		Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(777)
		tmp13 = (tmp22 > tmp28);
	}
	else{
		HX_STACK_LINE(777)
		tmp13 = false;
	}
	HX_STACK_LINE(777)
	if ((tmp13)){
		HX_STACK_LINE(779)
		::flixel::FlxSprite tmp14 = this->caret;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(779)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(779)
		Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(779)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(779)
		Float tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(779)
		tmp14->set_x(tmp18);
	}
	HX_STACK_LINE(782)
	int tmp14 = this->caretIndex;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(782)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretIndex,return )

int FlxInputText_obj::set_forceCase( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_forceCase",0x119aa786,"flixel.addons.ui.FlxInputText.set_forceCase","flixel/addons/ui/FlxInputText.hx",786,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(787)
	this->forceCase = Value;
	HX_STACK_LINE(788)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	::String tmp1 = this->filter(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(788)
	this->set_text(tmp1);
	HX_STACK_LINE(789)
	int tmp2 = this->forceCase;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(789)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_forceCase,return )

Float FlxInputText_obj::set_size( Float Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_size",0x373c4b56,"flixel.addons.ui.FlxInputText.set_size","flixel/addons/ui/FlxInputText.hx",793,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(794)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	this->super::set_size(tmp);
	HX_STACK_LINE(795)
	::flixel::FlxSprite tmp1 = this->caret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(795)
	Float tmp2 = this->get_size();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(795)
	Float tmp3 = (tmp2 + (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(795)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(795)
	tmp1->makeGraphic((int)1,tmp4,null(),null(),null());
	HX_STACK_LINE(796)
	Float tmp5 = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(796)
	return tmp5;
}


int FlxInputText_obj::set_maxLength( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_maxLength",0x992e7ff5,"flixel.addons.ui.FlxInputText.set_maxLength","flixel/addons/ui/FlxInputText.hx",800,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(801)
	this->maxLength = Value;
	HX_STACK_LINE(802)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(802)
	int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(802)
	int tmp2 = this->maxLength;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(802)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(802)
	if ((tmp3)){
		HX_STACK_LINE(804)
		::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(804)
		int tmp5 = this->maxLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(804)
		::String tmp6 = tmp4.substring((int)0,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(804)
		this->set_text(tmp6);
	}
	HX_STACK_LINE(806)
	int tmp4 = this->maxLength;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(806)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_maxLength,return )

int FlxInputText_obj::set_lines( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_lines",0x15ae75ca,"flixel.addons.ui.FlxInputText.set_lines","flixel/addons/ui/FlxInputText.hx",810,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(811)
	bool tmp = (Value == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	if ((tmp)){
		HX_STACK_LINE(811)
		return (int)0;
	}
	HX_STACK_LINE(813)
	bool tmp1 = (Value > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(813)
	if ((tmp1)){
		HX_STACK_LINE(814)
		::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(814)
		tmp2->set_wordWrap(true);
		HX_STACK_LINE(815)
		::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(815)
		tmp3->set_multiline(true);
	}
	else{
		HX_STACK_LINE(818)
		::openfl::_legacy::text::TextField tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(818)
		tmp2->set_wordWrap(false);
		HX_STACK_LINE(819)
		::openfl::_legacy::text::TextField tmp3 = this->_textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(819)
		tmp3->set_multiline(false);
	}
	HX_STACK_LINE(822)
	this->lines = Value;
	HX_STACK_LINE(823)
	this->calcFrame(null());
	HX_STACK_LINE(824)
	int tmp2 = this->lines;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(824)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_lines,return )

bool FlxInputText_obj::get_passwordMode( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","get_passwordMode",0x890c263f,"flixel.addons.ui.FlxInputText.get_passwordMode","flixel/addons/ui/FlxInputText.hx",828,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(829)
	bool tmp1 = tmp->get_displayAsPassword();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(829)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,get_passwordMode,return )

bool FlxInputText_obj::set_passwordMode( bool value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_passwordMode",0xdf4e13b3,"flixel.addons.ui.FlxInputText.set_passwordMode","flixel/addons/ui/FlxInputText.hx",833,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(834)
	::openfl::_legacy::text::TextField tmp = this->_textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(834)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(834)
	tmp->set_displayAsPassword(tmp1);
	HX_STACK_LINE(835)
	this->calcFrame(null());
	HX_STACK_LINE(836)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(836)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_passwordMode,return )

int FlxInputText_obj::set_filterMode( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_filterMode",0xd267a390,"flixel.addons.ui.FlxInputText.set_filterMode","flixel/addons/ui/FlxInputText.hx",840,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(841)
	this->filterMode = Value;
	HX_STACK_LINE(842)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(842)
	::String tmp1 = this->filter(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(842)
	this->set_text(tmp1);
	HX_STACK_LINE(843)
	int tmp2 = this->filterMode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(843)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_filterMode,return )

int FlxInputText_obj::set_fieldBorderColor( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_fieldBorderColor",0x31131c52,"flixel.addons.ui.FlxInputText.set_fieldBorderColor","flixel/addons/ui/FlxInputText.hx",847,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(848)
	this->fieldBorderColor = Value;
	HX_STACK_LINE(849)
	this->calcFrame(null());
	HX_STACK_LINE(850)
	int tmp = this->fieldBorderColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(850)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderColor,return )

int FlxInputText_obj::set_fieldBorderThickness( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_fieldBorderThickness",0x8f7f3fe3,"flixel.addons.ui.FlxInputText.set_fieldBorderThickness","flixel/addons/ui/FlxInputText.hx",854,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(855)
	this->fieldBorderThickness = Value;
	HX_STACK_LINE(856)
	this->calcFrame(null());
	HX_STACK_LINE(857)
	int tmp = this->fieldBorderThickness;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(857)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderThickness,return )

int FlxInputText_obj::set_backgroundColor( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_backgroundColor",0x1e95b220,"flixel.addons.ui.FlxInputText.set_backgroundColor","flixel/addons/ui/FlxInputText.hx",861,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(862)
	this->backgroundColor = Value;
	HX_STACK_LINE(863)
	this->calcFrame(null());
	HX_STACK_LINE(864)
	int tmp = this->backgroundColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(864)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_backgroundColor,return )

int FlxInputText_obj::NO_FILTER;

int FlxInputText_obj::ONLY_ALPHA;

int FlxInputText_obj::ONLY_NUMERIC;

int FlxInputText_obj::ONLY_ALPHANUMERIC;

int FlxInputText_obj::CUSTOM_FILTER;

int FlxInputText_obj::ALL_CASES;

int FlxInputText_obj::UPPER_CASE;

int FlxInputText_obj::LOWER_CASE;

::String FlxInputText_obj::BACKSPACE_ACTION;

::String FlxInputText_obj::DELETE_ACTION;

::String FlxInputText_obj::ENTER_ACTION;

::String FlxInputText_obj::INPUT_ACTION;


FlxInputText_obj::FlxInputText_obj()
{
}

void FlxInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputText);
	HX_MARK_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(caretColor,"caretColor");
	HX_MARK_MEMBER_NAME(caretWidth,"caretWidth");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(hasFocus,"hasFocus");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(forceCase,"forceCase");
	HX_MARK_MEMBER_NAME(maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(filterMode,"filterMode");
	HX_MARK_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_MARK_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_MARK_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_MARK_MEMBER_NAME(caret,"caret");
	HX_MARK_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_MARK_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(caretColor,"caretColor");
	HX_VISIT_MEMBER_NAME(caretWidth,"caretWidth");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(hasFocus,"hasFocus");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(forceCase,"forceCase");
	HX_VISIT_MEMBER_NAME(maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(filterMode,"filterMode");
	HX_VISIT_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_VISIT_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_VISIT_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_VISIT_MEMBER_NAME(caret,"caret");
	HX_VISIT_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_VISIT_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxInputText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"caret") ) { return caret; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return hasFocus; }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"forceCase") ) { return forceCase; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { return maxLength; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lines") ) { return set_lines_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { return caretColor; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { return caretWidth; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { return filterMode; }
		if (HX_FIELD_EQ(inName,"drawSprite") ) { return drawSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { return _caretTimer; }
		if (HX_FIELD_EQ(inName,"toggleCaret") ) { return toggleCaret_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == hx::paccAlways) return get_passwordMode(); }
		if (HX_FIELD_EQ(inName,"set_hasFocus") ) { return set_hasFocus_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_forceCase") ) { return set_forceCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return set_maxLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_caretColor") ) { return set_caretColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_caretWidth") ) { return set_caretWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return set_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filterMode") ) { return set_filterMode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { return _charBoundaries; }
		if (HX_FIELD_EQ(inName,"insertSubstring") ) { return insertSubstring_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { return fieldBorderColor; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { return backgroundSprite; }
		if (HX_FIELD_EQ(inName,"get_passwordMode") ) { return get_passwordMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_passwordMode") ) { return set_passwordMode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { return fieldBorderSprite; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { return customFilterPattern; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { return fieldBorderThickness; }
		if (HX_FIELD_EQ(inName,"set_fieldBorderColor") ) { return set_fieldBorderColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"prepareCharBoundaries") ) { return prepareCharBoundaries_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCaretIndexFromPoint") ) { return getCaretIndexFromPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_customFilterPattern") ) { return set_customFilterPattern_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_fieldBorderThickness") ) { return set_fieldBorderThickness_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInputText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { if (inCallProp == hx::paccAlways) return set_lines(inValue);lines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return set_params(inValue);params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { if (inCallProp == hx::paccAlways) return set_hasFocus(inValue);hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"forceCase") ) { if (inCallProp == hx::paccAlways) return set_forceCase(inValue);forceCase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp == hx::paccAlways) return set_maxLength(inValue);maxLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { if (inCallProp == hx::paccAlways) return set_caretColor(inValue);caretColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { if (inCallProp == hx::paccAlways) return set_caretWidth(inValue);caretWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == hx::paccAlways) return set_caretIndex(inValue);caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { if (inCallProp == hx::paccAlways) return set_filterMode(inValue);filterMode=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { _caretTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == hx::paccAlways) return set_passwordMode(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { _charBoundaries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { if (inCallProp == hx::paccAlways) return set_fieldBorderColor(inValue);fieldBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { backgroundSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { fieldBorderSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { if (inCallProp == hx::paccAlways) return set_customFilterPattern(inValue);customFilterPattern=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { if (inCallProp == hx::paccAlways) return set_fieldBorderThickness(inValue);fieldBorderThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxInputText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("customFilterPattern","\x07","\x03","\x33","\x08"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("caretColor","\xe0","\x8c","\xa3","\x69"));
	outFields->push(HX_HCSTRING("caretWidth","\x83","\xd1","\xa9","\xe9"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("passwordMode","\x1e","\x4c","\x29","\xb6"));
	outFields->push(HX_HCSTRING("hasFocus","\x1e","\xaa","\xe1","\x90"));
	outFields->push(HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"));
	outFields->push(HX_HCSTRING("forceCase","\x3b","\xce","\xfe","\x46"));
	outFields->push(HX_HCSTRING("maxLength","\xaa","\xa6","\x92","\xce"));
	outFields->push(HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"));
	outFields->push(HX_HCSTRING("filterMode","\x3b","\x5b","\xa5","\x54"));
	outFields->push(HX_HCSTRING("fieldBorderColor","\x3d","\x66","\xca","\x1d"));
	outFields->push(HX_HCSTRING("fieldBorderThickness","\x4e","\x5b","\x39","\x33"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("backgroundSprite","\x93","\x8a","\x2c","\x8e"));
	outFields->push(HX_HCSTRING("_caretTimer","\x61","\xa8","\x06","\x02"));
	outFields->push(HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41"));
	outFields->push(HX_HCSTRING("fieldBorderSprite","\xeb","\x25","\x5e","\xf0"));
	outFields->push(HX_HCSTRING("_charBoundaries","\xdd","\x1e","\x8e","\x62"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(int)offsetof(FlxInputText_obj,customFilterPattern),HX_HCSTRING("customFilterPattern","\x07","\x03","\x33","\x08")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInputText_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsBool,(int)offsetof(FlxInputText_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretColor),HX_HCSTRING("caretColor","\xe0","\x8c","\xa3","\x69")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretWidth),HX_HCSTRING("caretWidth","\x83","\xd1","\xa9","\xe9")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxInputText_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsBool,(int)offsetof(FlxInputText_obj,hasFocus),HX_HCSTRING("hasFocus","\x1e","\xaa","\xe1","\x90")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretIndex),HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,forceCase),HX_HCSTRING("forceCase","\x3b","\xce","\xfe","\x46")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,maxLength),HX_HCSTRING("maxLength","\xaa","\xa6","\x92","\xce")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,lines),HX_HCSTRING("lines","\xff","\xdd","\x01","\x75")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,filterMode),HX_HCSTRING("filterMode","\x3b","\x5b","\xa5","\x54")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderColor),HX_HCSTRING("fieldBorderColor","\x3d","\x66","\xca","\x1d")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderThickness),HX_HCSTRING("fieldBorderThickness","\x4e","\x5b","\x39","\x33")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,backgroundColor),HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,backgroundSprite),HX_HCSTRING("backgroundSprite","\x93","\x8a","\x2c","\x8e")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(FlxInputText_obj,_caretTimer),HX_HCSTRING("_caretTimer","\x61","\xa8","\x06","\x02")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,caret),HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,fieldBorderSprite),HX_HCSTRING("fieldBorderSprite","\xeb","\x25","\x5e","\xf0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxInputText_obj,_charBoundaries),HX_HCSTRING("_charBoundaries","\xdd","\x1e","\x8e","\x62")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxInputText_obj::NO_FILTER,HX_HCSTRING("NO_FILTER","\x36","\x13","\x4e","\x92")},
	{hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHA,HX_HCSTRING("ONLY_ALPHA","\xeb","\x4c","\xe5","\xa7")},
	{hx::fsInt,(void *) &FlxInputText_obj::ONLY_NUMERIC,HX_HCSTRING("ONLY_NUMERIC","\x9a","\xa9","\x2d","\x5f")},
	{hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHANUMERIC,HX_HCSTRING("ONLY_ALPHANUMERIC","\x22","\xad","\x7f","\xf5")},
	{hx::fsInt,(void *) &FlxInputText_obj::CUSTOM_FILTER,HX_HCSTRING("CUSTOM_FILTER","\xc6","\xf1","\x56","\xe9")},
	{hx::fsInt,(void *) &FlxInputText_obj::ALL_CASES,HX_HCSTRING("ALL_CASES","\xa5","\x06","\x9b","\x9d")},
	{hx::fsInt,(void *) &FlxInputText_obj::UPPER_CASE,HX_HCSTRING("UPPER_CASE","\x0d","\xe2","\x06","\x82")},
	{hx::fsInt,(void *) &FlxInputText_obj::LOWER_CASE,HX_HCSTRING("LOWER_CASE","\x0e","\x61","\xd8","\x7c")},
	{hx::fsString,(void *) &FlxInputText_obj::BACKSPACE_ACTION,HX_HCSTRING("BACKSPACE_ACTION","\x16","\x76","\x91","\xd1")},
	{hx::fsString,(void *) &FlxInputText_obj::DELETE_ACTION,HX_HCSTRING("DELETE_ACTION","\x8a","\x38","\xe3","\x2e")},
	{hx::fsString,(void *) &FlxInputText_obj::ENTER_ACTION,HX_HCSTRING("ENTER_ACTION","\x5d","\x63","\x46","\x79")},
	{hx::fsString,(void *) &FlxInputText_obj::INPUT_ACTION,HX_HCSTRING("INPUT_ACTION","\xab","\xae","\x95","\x20")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("customFilterPattern","\x07","\x03","\x33","\x08"),
	HX_HCSTRING("set_customFilterPattern","\xaa","\x12","\xea","\x12"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("caretColor","\xe0","\x8c","\xa3","\x69"),
	HX_HCSTRING("set_caretColor","\x9d","\xfd","\xb8","\xff"),
	HX_HCSTRING("caretWidth","\x83","\xd1","\xa9","\xe9"),
	HX_HCSTRING("set_caretWidth","\x40","\x42","\xbf","\x7f"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("hasFocus","\x1e","\xaa","\xe1","\x90"),
	HX_HCSTRING("caretIndex","\x8f","\xb6","\x5b","\xdd"),
	HX_HCSTRING("forceCase","\x3b","\xce","\xfe","\x46"),
	HX_HCSTRING("maxLength","\xaa","\xa6","\x92","\xce"),
	HX_HCSTRING("lines","\xff","\xdd","\x01","\x75"),
	HX_HCSTRING("filterMode","\x3b","\x5b","\xa5","\x54"),
	HX_HCSTRING("fieldBorderColor","\x3d","\x66","\xca","\x1d"),
	HX_HCSTRING("fieldBorderThickness","\x4e","\x5b","\x39","\x33"),
	HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"),
	HX_HCSTRING("backgroundSprite","\x93","\x8a","\x2c","\x8e"),
	HX_HCSTRING("_caretTimer","\x61","\xa8","\x06","\x02"),
	HX_HCSTRING("caret","\x83","\xf9","\x1f","\x41"),
	HX_HCSTRING("fieldBorderSprite","\xeb","\x25","\x5e","\xf0"),
	HX_HCSTRING("_charBoundaries","\xdd","\x1e","\x8e","\x62"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawSprite","\x29","\x57","\x59","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("insertSubstring","\xd8","\xdf","\x31","\x11"),
	HX_HCSTRING("getCaretIndexFromPoint","\x01","\x6b","\x19","\x6f"),
	HX_HCSTRING("getCharIndexAtPoint","\x17","\xee","\x9c","\xaa"),
	HX_HCSTRING("getCharBoundaries","\x74","\x85","\xa1","\x8b"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("prepareCharBoundaries","\x25","\xfa","\x4d","\x3a"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("toggleCaret","\x4f","\xb1","\xe6","\x68"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_hasFocus","\x9b","\x81","\xf4","\x5a"),
	HX_HCSTRING("set_caretIndex","\x4c","\x27","\x71","\x73"),
	HX_HCSTRING("set_forceCase","\x1e","\x84","\x68","\x4d"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_maxLength","\x8d","\x5c","\xfc","\xd4"),
	HX_HCSTRING("set_lines","\x62","\x26","\xfc","\x9b"),
	HX_HCSTRING("get_passwordMode","\xa7","\x38","\xc8","\xba"),
	HX_HCSTRING("set_passwordMode","\x1b","\x26","\x0a","\x11"),
	HX_HCSTRING("set_filterMode","\xf8","\xcb","\xba","\xea"),
	HX_HCSTRING("set_fieldBorderColor","\xba","\x82","\xec","\x08"),
	HX_HCSTRING("set_fieldBorderThickness","\x4b","\xfa","\xaf","\x88"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
};

#endif

hx::Class FlxInputText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NO_FILTER","\x36","\x13","\x4e","\x92"),
	HX_HCSTRING("ONLY_ALPHA","\xeb","\x4c","\xe5","\xa7"),
	HX_HCSTRING("ONLY_NUMERIC","\x9a","\xa9","\x2d","\x5f"),
	HX_HCSTRING("ONLY_ALPHANUMERIC","\x22","\xad","\x7f","\xf5"),
	HX_HCSTRING("CUSTOM_FILTER","\xc6","\xf1","\x56","\xe9"),
	HX_HCSTRING("ALL_CASES","\xa5","\x06","\x9b","\x9d"),
	HX_HCSTRING("UPPER_CASE","\x0d","\xe2","\x06","\x82"),
	HX_HCSTRING("LOWER_CASE","\x0e","\x61","\xd8","\x7c"),
	HX_HCSTRING("BACKSPACE_ACTION","\x16","\x76","\x91","\xd1"),
	HX_HCSTRING("DELETE_ACTION","\x8a","\x38","\xe3","\x2e"),
	HX_HCSTRING("ENTER_ACTION","\x5d","\x63","\x46","\x79"),
	HX_HCSTRING("INPUT_ACTION","\xab","\xae","\x95","\x20"),
	::String(null()) };

void FlxInputText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxInputText","\xd6","\xdd","\xcc","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxInputText_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxInputText_obj >;
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

void FlxInputText_obj::__boot()
{
	NO_FILTER= (int)0;
	ONLY_ALPHA= (int)1;
	ONLY_NUMERIC= (int)2;
	ONLY_ALPHANUMERIC= (int)3;
	CUSTOM_FILTER= (int)4;
	ALL_CASES= (int)0;
	UPPER_CASE= (int)1;
	LOWER_CASE= (int)2;
	BACKSPACE_ACTION= HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca");
	DELETE_ACTION= HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a");
	ENTER_ACTION= HX_HCSTRING("enter","\x18","\x6d","\x86","\x70");
	INPUT_ACTION= HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
