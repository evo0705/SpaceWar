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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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

Void FlxUITypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","new",0xdcfb6819,"flixel.addons.ui.FlxUITypedButton.new","flixel/addons/ui/FlxUITypedButton.hx",22,0x55608c36)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(743)
	this->_centerLabelOffset = null();
	HX_STACK_LINE(735)
	this->_src_h = (int)0;
	HX_STACK_LINE(734)
	this->_src_w = (int)0;
	HX_STACK_LINE(732)
	this->_no_graphic = false;
	HX_STACK_LINE(61)
	this->skipButtonUpdate = false;
	HX_STACK_LINE(54)
	this->round_labels = true;
	HX_STACK_LINE(50)
	this->down_toggle_visible = true;
	HX_STACK_LINE(49)
	this->over_toggle_visible = true;
	HX_STACK_LINE(48)
	this->up_toggle_visible = true;
	HX_STACK_LINE(46)
	this->down_visible = true;
	HX_STACK_LINE(45)
	this->over_visible = true;
	HX_STACK_LINE(44)
	this->up_visible = true;
	HX_STACK_LINE(42)
	this->down_toggle_color = (int)0;
	HX_STACK_LINE(41)
	this->over_toggle_color = (int)0;
	HX_STACK_LINE(40)
	this->up_toggle_color = (int)0;
	HX_STACK_LINE(38)
	this->down_color = (int)0;
	HX_STACK_LINE(37)
	this->over_color = (int)0;
	HX_STACK_LINE(36)
	this->up_color = (int)0;
	HX_STACK_LINE(32)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(30)
	this->toggled = false;
	HX_STACK_LINE(29)
	this->has_toggle = false;
	HX_STACK_LINE(27)
	this->tile = (int)0;
	HX_STACK_LINE(26)
	this->resize_point = null();
	HX_STACK_LINE(25)
	this->resize_ratio = ((Float)-1);
	HX_STACK_LINE(87)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	Dynamic tmp2 = OnClick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(89)
	::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		::flixel::util::FlxPoint tmp6 = tmp5->set((int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(89)
		point->_inPool = false;
		HX_STACK_LINE(89)
		tmp3 = point;
	}
	HX_STACK_LINE(89)
	this->_centerLabelOffset = tmp3;
	HX_STACK_LINE(92)
	::flixel::util::FlxPoint tmp4 = this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	tmp4->set_x((int)0);
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint tmp5 = this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	tmp5->set_y((int)0);
	HX_STACK_LINE(95)
	::flixel::util::FlxPoint tmp6 = this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	tmp6->set_x((int)0);
	HX_STACK_LINE(96)
	::flixel::util::FlxPoint tmp7 = this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	tmp7->set_y((int)1);
	HX_STACK_LINE(98)
	::flixel::util::FlxPoint tmp8 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	tmp8->set_x((int)0);
	HX_STACK_LINE(99)
	::flixel::util::FlxPoint tmp9 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(99)
	tmp9->set_y((int)0);
	HX_STACK_LINE(101)
	this->labelAlphas[(int)1] = (int)1;
	HX_STACK_LINE(102)
	this->labelAlphas[(int)2] = (int)1;
	HX_STACK_LINE(103)
	this->labelAlphas[(int)0] = (int)1;
}
;
	return null();
}

//FlxUITypedButton_obj::~FlxUITypedButton_obj() { }

Dynamic FlxUITypedButton_obj::__CreateEmpty() { return  new FlxUITypedButton_obj; }
hx::ObjectPtr< FlxUITypedButton_obj > FlxUITypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxUITypedButton_obj > _result_ = new FlxUITypedButton_obj();
	_result_->__construct(__o_X,__o_Y,OnClick);
	return _result_;}

Dynamic FlxUITypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITypedButton_obj > _result_ = new FlxUITypedButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxUITypedButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ICursorPointable_obj)) return operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *();
	return super::__ToInterface(inType);
}

FlxUITypedButton_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUITypedButton_obj >(this); }
FlxUITypedButton_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUITypedButton_obj >(this); }
FlxUITypedButton_obj::operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUITypedButton_obj >(this); }
FlxUITypedButton_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUITypedButton_obj >(this); }
FlxUITypedButton_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUITypedButton_obj >(this); }
FlxUITypedButton_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUITypedButton_obj >(this); }
FlxUITypedButton_obj::operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *()
	{ return new ::flixel::addons::ui::interfaces::ICursorPointable_delegate_< FlxUITypedButton_obj >(this); }
bool FlxUITypedButton_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_skipButtonUpdate",0xb2aa475e,"flixel.addons.ui.FlxUITypedButton.set_skipButtonUpdate","flixel/addons/ui/FlxUITypedButton.hx",62,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(63)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(64)
	bool tmp = this->skipButtonUpdate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_skipButtonUpdate,return )

cpp::ArrayBase FlxUITypedButton_obj::set_params( cpp::ArrayBase p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_params",0x0e7dcaea,"flixel.addons.ui.FlxUITypedButton.set_params","flixel/addons/ui/FlxUITypedButton.hx",68,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(69)
	this->params = p;
	HX_STACK_LINE(70)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_params,return )

Void FlxUITypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","destroy",0xe7669533,"flixel.addons.ui.FlxUITypedButton.destroy","flixel/addons/ui/FlxUITypedButton.hx",73,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::flixel::util::FlxPoint tmp = this->resize_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::flixel::util::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		this->resize_point = tmp1;
		HX_STACK_LINE(75)
		this->super::destroy();
	}
return null();
}


Void FlxUITypedButton_obj::setAllLabelOffsets( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","setAllLabelOffsets",0x57424f92,"flixel.addons.ui.FlxUITypedButton.setAllLabelOffsets","flixel/addons/ui/FlxUITypedButton.hx",112,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(113)
		::flixel::util::FlxPoint tmp = this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		::flixel::util::FlxPoint tmp1 = this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		::flixel::util::FlxPoint tmp2 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		Float tmp4 = tmp2->set_x(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		Float tmp5 = tmp1->set_x(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		tmp->set_x(tmp5);
		HX_STACK_LINE(114)
		::flixel::util::FlxPoint tmp6 = this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		::flixel::util::FlxPoint tmp7 = this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		::flixel::util::FlxPoint tmp8 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(114)
		Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(114)
		Float tmp10 = tmp8->set_y(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(114)
		Float tmp11 = tmp7->set_y(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(114)
		tmp6->set_y(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setAllLabelOffsets,(void))

Void FlxUITypedButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","update",0x163ec7f0,"flixel.addons.ui.FlxUITypedButton.update","flixel/addons/ui/FlxUITypedButton.hx",117,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->super::update();
		HX_STACK_LINE(121)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		if ((tmp1)){
			HX_STACK_LINE(123)
			Dynamic tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			::flixel::util::FlxPoint tmp4 = this->_centerLabelOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			int tmp7 = this->status;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			::flixel::util::FlxPoint tmp8 = this->labelOffsets->__get(tmp7).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			tmp2->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp10);
			HX_STACK_LINE(124)
			Dynamic tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(124)
			::flixel::util::FlxPoint tmp13 = this->_centerLabelOffset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(124)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(124)
			Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(124)
			int tmp16 = this->status;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(124)
			::flixel::util::FlxPoint tmp17 = this->labelOffsets->__get(tmp16).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(124)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(124)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(124)
			tmp11->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp19);
			HX_STACK_LINE(126)
			bool tmp20 = this->round_labels;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(126)
			if ((tmp20)){
				HX_STACK_LINE(127)
				Dynamic tmp21 = this->label;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(127)
				Dynamic tmp22 = this->label;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(127)
				Float tmp23 = tmp22->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(127)
				Float tmp24 = (tmp23 + ((Float)0.5));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(127)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(127)
				tmp21->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp25);
				HX_STACK_LINE(128)
				Dynamic tmp26 = this->label;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(128)
				Dynamic tmp27 = this->label;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(128)
				Float tmp28 = tmp27->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(128)
				Float tmp29 = (tmp28 + ((Float)0.5));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(128)
				int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(128)
				tmp26->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp30);
			}
			HX_STACK_LINE(131)
			::flixel::util::FlxPoint tmp21 = this->scrollFactor;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			Dynamic tmp22 = this->label;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(131)
			tmp22->__FieldRef(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")) = tmp21;
		}
		HX_STACK_LINE(134)
		::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		if ((tmp3)){
			HX_STACK_LINE(136)
			bool tmp4 = this->toggled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			if ((tmp4)){
				HX_STACK_LINE(137)
				::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(137)
				int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				int tmp7 = ((int)3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				tmp5->set_frameIndex(tmp7);
			}
			else{
				HX_STACK_LINE(139)
				::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				tmp5->set_frameIndex(tmp6);
			}
		}
	}
return null();
}


Void FlxUITypedButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","resize",0x97b49bdb,"flixel.addons.ui.FlxUITypedButton.resize","flixel/addons/ui/FlxUITypedButton.hx",144,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(145)
		Float tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		Float old_width = tmp;		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(146)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		Float old_height = tmp1;		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(148)
		Float old_offx = (int)0;		HX_STACK_VAR(old_offx,"old_offx");
		HX_STACK_LINE(149)
		Float old_offy = (int)0;		HX_STACK_VAR(old_offy,"old_offy");
		HX_STACK_LINE(150)
		Dynamic tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(151)
			this->autoCenterLabel();
		}
		HX_STACK_LINE(154)
		bool tmp4 = (W == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		if ((tmp4)){
			HX_STACK_LINE(154)
			W = (int)80;
		}
		HX_STACK_LINE(155)
		bool tmp5 = (H == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		if ((tmp5)){
			HX_STACK_LINE(155)
			H = (int)20;
		}
		HX_STACK_LINE(157)
		bool tmp6 = (this->_slice9_assets != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		if ((tmp6)){
			HX_STACK_LINE(158)
			Float tmp7 = W;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(158)
			Float tmp9 = H;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			int tmp11 = this->tile;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			Float tmp12 = this->resize_ratio;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(158)
			bool tmp13 = this->has_toggle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(158)
			int tmp14 = this->_src_w;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(158)
			int tmp15 = this->_src_h;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			this->loadGraphicSlice9(this->_slice9_assets,tmp8,tmp10,this->_slice9_arrays,tmp11,tmp12,tmp13,tmp14,tmp15,this->_frame_indeces);
		}
		else{
			HX_STACK_LINE(160)
			bool tmp7 = this->_no_graphic;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			if ((tmp7)){
				HX_STACK_LINE(161)
				::openfl::_legacy::display::BitmapData upB;		HX_STACK_VAR(upB,"upB");
				HX_STACK_LINE(162)
				bool tmp8 = this->has_toggle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(162)
				if ((tmp9)){
					HX_STACK_LINE(163)
					Float tmp10 = W;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(163)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(163)
					Float tmp12 = (H * (int)3);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(163)
					int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(163)
					::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp13,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(163)
					upB = tmp14;
				}
				else{
					HX_STACK_LINE(165)
					Float tmp10 = W;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(165)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(165)
					Float tmp12 = (H * (int)6);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(165)
					int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(165)
					::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp13,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(165)
					upB = tmp14;
				}
				HX_STACK_LINE(167)
				::openfl::_legacy::display::BitmapData tmp10 = upB;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(167)
				this->loadGraphicsUpOverDown(tmp10,null(),null());
			}
			else{
				HX_STACK_LINE(170)
				Float tmp8 = W;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(170)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(170)
				Float tmp10 = H;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(170)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(170)
				int tmp12 = this->tile;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(170)
				this->loadGraphicSlice9(null(),tmp9,tmp11,null(),tmp12,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(174)
		this->autoCenterLabel();
		HX_STACK_LINE(176)
		Float tmp7 = this->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		Float tmp8 = old_width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(176)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(176)
		Float diff_w = tmp9;		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(177)
		Float tmp10 = this->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		Float tmp11 = old_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(177)
		Float diff_h = tmp12;		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(179)
		::flixel::util::FlxPoint tmp13 = this->resize_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(179)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(179)
		if ((tmp14)){
			HX_STACK_LINE(180)
			Float tmp15 = diff_w;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(180)
			::flixel::util::FlxPoint tmp16 = this->resize_point;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(180)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(180)
			Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(180)
			Float delta_x = tmp18;		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(181)
			Float tmp19 = diff_h;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(181)
			::flixel::util::FlxPoint tmp20 = this->resize_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(181)
			Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(181)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(181)
			Float delta_y = tmp22;		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::flixel::addons::ui::FlxUITypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				Float tmp23 = (_g->x - delta_x);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(182)
				_g->set_x(tmp23);
			}
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::flixel::addons::ui::FlxUITypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(183)
				Float tmp23 = (_g->y - delta_y);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(183)
				_g->set_y(tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,resize,(void))

Void FlxUITypedButton_obj::loadGraphicsMultiple( Array< ::String > assets,::String __o_Key){
::String Key = __o_Key.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicsMultiple",0x389aa468,"flixel.addons.ui.FlxUITypedButton.loadGraphicsMultiple","flixel/addons/ui/FlxUITypedButton.hx",193,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assets,"assets")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(194)
		::String key = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(196)
		bool tmp = (assets->length <= (int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		if ((tmp)){
			HX_STACK_LINE(197)
			while((true)){
				HX_STACK_LINE(197)
				bool tmp1 = (assets->length < (int)3);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(197)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(197)
				if ((tmp2)){
					HX_STACK_LINE(197)
					break;
				}
				HX_STACK_LINE(197)
				assets->push(null());
			}
			HX_STACK_LINE(198)
			::String tmp1 = assets->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(198)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			if ((tmp2)){
				HX_STACK_LINE(198)
				::String tmp3 = assets->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(198)
				assets[(int)1] = tmp3;
			}
			HX_STACK_LINE(199)
			::String tmp3 = assets->__get((int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			if ((tmp4)){
				HX_STACK_LINE(199)
				::String tmp5 = assets->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				assets[(int)2] = tmp5;
			}
			HX_STACK_LINE(200)
			::String tmp5 = assets->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(200)
			key = tmp5;
			HX_STACK_LINE(201)
			::String tmp6 = assets->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData tmp7 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			::String tmp8 = assets->__get((int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(201)
			::String tmp10 = assets->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData tmp12 = this->assembleButtonFrames(tmp7,tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(201)
			::openfl::_legacy::display::BitmapData pixels = tmp12;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(202)
			bool tmp13 = (Key != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(202)
			if ((tmp13)){
				HX_STACK_LINE(204)
				key = Key;
			}
			HX_STACK_LINE(206)
			::openfl::_legacy::display::BitmapData tmp14 = pixels;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			this->loadGraphicsUpOverDown(tmp14,false,tmp15);
		}
		else{
			HX_STACK_LINE(207)
			bool tmp1 = (assets->length <= (int)6);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(207)
			if ((tmp1)){
				HX_STACK_LINE(208)
				while((true)){
					HX_STACK_LINE(208)
					bool tmp2 = (assets->length < (int)6);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(208)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(208)
					if ((tmp3)){
						HX_STACK_LINE(208)
						break;
					}
					HX_STACK_LINE(208)
					assets->push(null());
				}
				HX_STACK_LINE(209)
				::String tmp2 = assets->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				if ((tmp3)){
					HX_STACK_LINE(209)
					::String tmp4 = assets->__get((int)3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(209)
					assets[(int)4] = tmp4;
				}
				HX_STACK_LINE(210)
				::String tmp4 = assets->__get((int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(210)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(210)
				if ((tmp5)){
					HX_STACK_LINE(210)
					::String tmp6 = assets->__get((int)4);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(210)
					assets[(int)5] = tmp6;
				}
				HX_STACK_LINE(211)
				::String tmp6 = assets->join(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(211)
				key = tmp6;
				HX_STACK_LINE(212)
				bool tmp7 = (Key != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(212)
				if ((tmp7)){
					HX_STACK_LINE(214)
					key = Key;
				}
				HX_STACK_LINE(216)
				::String tmp8 = assets->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(216)
				::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(216)
				::String tmp10 = assets->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(216)
				::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(216)
				::String tmp12 = assets->__get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(216)
				::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(216)
				::openfl::_legacy::display::BitmapData tmp14 = this->assembleButtonFrames(tmp9,tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(216)
				::openfl::_legacy::display::BitmapData pixels_normal = tmp14;		HX_STACK_VAR(pixels_normal,"pixels_normal");
				HX_STACK_LINE(217)
				::String tmp15 = assets->__get((int)3);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(217)
				::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(217)
				::String tmp17 = assets->__get((int)4);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(217)
				::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(217)
				::String tmp19 = assets->__get((int)5);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(217)
				::openfl::_legacy::display::BitmapData tmp20 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(217)
				::openfl::_legacy::display::BitmapData tmp21 = this->assembleButtonFrames(tmp16,tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(217)
				::openfl::_legacy::display::BitmapData pixels_toggle = tmp21;		HX_STACK_VAR(pixels_toggle,"pixels_toggle");
				HX_STACK_LINE(218)
				::openfl::_legacy::display::BitmapData tmp22 = pixels_normal;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(218)
				::openfl::_legacy::display::BitmapData tmp23 = pixels_toggle;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(218)
				::openfl::_legacy::display::BitmapData tmp24 = this->combineToggleBitmaps(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(218)
				::openfl::_legacy::display::BitmapData pixels = tmp24;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(219)
				::openfl::_legacy::display::BitmapData tmp25 = pixels;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(219)
				::String tmp26 = key;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(219)
				this->loadGraphicsUpOverDown(tmp25,false,tmp26);
				HX_STACK_LINE(220)
				pixels_normal->dispose();
				HX_STACK_LINE(221)
				pixels_toggle->dispose();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,loadGraphicsMultiple,(void))

Void FlxUITypedButton_obj::loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  __o_for_toggle,::String key){
bool for_toggle = __o_for_toggle.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicsUpOverDown",0xbee26da9,"flixel.addons.ui.FlxUITypedButton.loadGraphicsUpOverDown","flixel/addons/ui/FlxUITypedButton.hx",232,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(for_toggle,"for_toggle")
	HX_STACK_ARG(key,"key")
{
		HX_STACK_LINE(233)
		this->_slice9_assets = null();
		HX_STACK_LINE(234)
		this->_slice9_arrays = null();
		HX_STACK_LINE(235)
		this->resize_ratio = (int)-1;
		HX_STACK_LINE(237)
		bool tmp = for_toggle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		if ((tmp)){
			HX_STACK_LINE(238)
			this->has_toggle = true;
		}
		HX_STACK_LINE(241)
		::openfl::_legacy::display::BitmapData upB = null();		HX_STACK_VAR(upB,"upB");
		HX_STACK_LINE(242)
		::openfl::_legacy::display::BitmapData overB = null();		HX_STACK_VAR(overB,"overB");
		HX_STACK_LINE(243)
		::openfl::_legacy::display::BitmapData downB = null();		HX_STACK_VAR(downB,"downB");
		HX_STACK_LINE(245)
		::openfl::_legacy::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(247)
		Dynamic tmp1 = asset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		if ((tmp2)){
			HX_STACK_LINE(248)
			bd = ((::openfl::_legacy::display::BitmapData)(asset));
		}
		else{
			HX_STACK_LINE(249)
			Dynamic tmp3 = asset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			if ((tmp4)){
				HX_STACK_LINE(250)
				Dynamic tmp5 = asset;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(250)
				::openfl::_legacy::display::BitmapData tmp6 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(250)
				bd = tmp6;
			}
		}
		HX_STACK_LINE(253)
		::openfl::_legacy::display::BitmapData tmp3 = bd;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		bool tmp4 = this->has_toggle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		::openfl::_legacy::display::BitmapData tmp5 = this->grabButtonFrame(tmp3,(int)0,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		upB = tmp5;
		HX_STACK_LINE(254)
		::openfl::_legacy::display::BitmapData tmp6 = bd;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(254)
		bool tmp7 = this->has_toggle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		::openfl::_legacy::display::BitmapData tmp8 = this->grabButtonFrame(tmp6,(int)1,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(254)
		overB = tmp8;
		HX_STACK_LINE(255)
		::openfl::_legacy::display::BitmapData tmp9 = bd;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(255)
		bool tmp10 = this->has_toggle;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(255)
		::openfl::_legacy::display::BitmapData tmp11 = this->grabButtonFrame(tmp9,(int)2,tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(255)
		downB = tmp11;
		HX_STACK_LINE(257)
		::openfl::_legacy::display::BitmapData tmp12 = upB;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::BitmapData tmp13 = overB;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::BitmapData tmp14 = downB;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::BitmapData tmp15 = this->assembleButtonFrames(tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::BitmapData normalPixels = tmp15;		HX_STACK_VAR(normalPixels,"normalPixels");
		HX_STACK_LINE(259)
		bool tmp16 = this->has_toggle;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(259)
		if ((tmp16)){
			HX_STACK_LINE(260)
			::openfl::_legacy::display::BitmapData tmp17 = bd;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(260)
			int tmp18 = (int)3;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(260)
			::openfl::_legacy::display::BitmapData tmp19 = this->grabButtonFrame(tmp17,tmp18,true,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(260)
			upB = tmp19;
			HX_STACK_LINE(261)
			::openfl::_legacy::display::BitmapData tmp20 = bd;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(261)
			int tmp21 = (int)4;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(261)
			::openfl::_legacy::display::BitmapData tmp22 = this->grabButtonFrame(tmp20,tmp21,true,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(261)
			overB = tmp22;
			HX_STACK_LINE(262)
			::openfl::_legacy::display::BitmapData tmp23 = bd;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(262)
			int tmp24 = (int)5;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(262)
			::openfl::_legacy::display::BitmapData tmp25 = this->grabButtonFrame(tmp23,tmp24,true,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(262)
			downB = tmp25;
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData tmp26 = upB;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData tmp27 = overB;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData tmp28 = downB;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData tmp29 = this->assembleButtonFrames(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(264)
			::openfl::_legacy::display::BitmapData togglePixels = tmp29;		HX_STACK_VAR(togglePixels,"togglePixels");
			HX_STACK_LINE(265)
			::openfl::_legacy::display::BitmapData tmp30 = normalPixels;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(265)
			::openfl::_legacy::display::BitmapData tmp31 = togglePixels;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(265)
			::openfl::_legacy::display::BitmapData tmp32 = this->combineToggleBitmaps(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(265)
			::openfl::_legacy::display::BitmapData combinedPixels = tmp32;		HX_STACK_VAR(combinedPixels,"combinedPixels");
			HX_STACK_LINE(267)
			::openfl::_legacy::display::BitmapData tmp33 = normalPixels;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(267)
			::openfl::_legacy::display::BitmapData tmp34 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(267)
			normalPixels = tmp34;
			HX_STACK_LINE(268)
			::openfl::_legacy::display::BitmapData tmp35 = togglePixels;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(268)
			::openfl::_legacy::display::BitmapData tmp36 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(268)
			togglePixels = tmp36;
			HX_STACK_LINE(270)
			::openfl::_legacy::display::BitmapData tmp37 = combinedPixels;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(270)
			int tmp38 = upB->get_width();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(270)
			int tmp39 = upB->get_height();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(270)
			::String tmp40 = key;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(270)
			this->loadGraphic(tmp37,true,tmp38,tmp39,false,tmp40);
		}
		else{
			HX_STACK_LINE(272)
			::openfl::_legacy::display::BitmapData tmp17 = normalPixels;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(272)
			int tmp18 = upB->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(272)
			int tmp19 = upB->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(272)
			::String tmp20 = key;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(272)
			this->loadGraphic(tmp17,true,tmp18,tmp19,false,tmp20);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,loadGraphicsUpOverDown,(void))

Void FlxUITypedButton_obj::loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  __o_W,hx::Null< int >  __o_H,Array< ::Dynamic > slice9,hx::Null< int >  __o_Tile,hx::Null< Float >  __o_Resize_Ratio,hx::Null< bool >  __o_isToggle,hx::Null< int >  __o_src_w,hx::Null< int >  __o_src_h,Array< int > frame_indeces){
int W = __o_W.Default(80);
int H = __o_H.Default(20);
int Tile = __o_Tile.Default(0);
Float Resize_Ratio = __o_Resize_Ratio.Default(-1);
bool isToggle = __o_isToggle.Default(false);
int src_w = __o_src_w.Default(0);
int src_h = __o_src_h.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicSlice9",0xb9685fe2,"flixel.addons.ui.FlxUITypedButton.loadGraphicSlice9","flixel/addons/ui/FlxUITypedButton.hx",293,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assets,"assets")
	HX_STACK_ARG(W,"W")
	HX_STACK_ARG(H,"H")
	HX_STACK_ARG(slice9,"slice9")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(Resize_Ratio,"Resize_Ratio")
	HX_STACK_ARG(isToggle,"isToggle")
	HX_STACK_ARG(src_w,"src_w")
	HX_STACK_ARG(src_h,"src_h")
	HX_STACK_ARG(frame_indeces,"frame_indeces")
{
		HX_STACK_LINE(295)
		bool tmp = (src_w != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		if ((tmp)){
			HX_STACK_LINE(296)
			this->_src_w = src_w;
		}
		HX_STACK_LINE(298)
		bool tmp1 = (src_h != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		if ((tmp1)){
			HX_STACK_LINE(299)
			this->_src_h = src_h;
		}
		HX_STACK_LINE(302)
		this->tile = Tile;
		HX_STACK_LINE(304)
		this->has_toggle = isToggle;
		HX_STACK_LINE(306)
		this->resize_ratio = Resize_Ratio;
		HX_STACK_LINE(308)
		this->_slice9_assets = assets;
		HX_STACK_LINE(309)
		this->_slice9_arrays = slice9;
		HX_STACK_LINE(311)
		::String key = null();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(313)
		Array< ::Dynamic > arr_bmpData = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr_bmpData,"arr_bmpData");
		HX_STACK_LINE(314)
		Array< ::Dynamic > arr_flx9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr_flx9,"arr_flx9");
		HX_STACK_LINE(317)
		bool tmp2 = (frame_indeces == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		if ((tmp2)){
			HX_STACK_LINE(319)
			bool tmp3 = this->has_toggle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(319)
			if ((tmp3)){
				HX_STACK_LINE(319)
				frame_indeces = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5);
			}
			else{
				HX_STACK_LINE(320)
				frame_indeces = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2);
			}
		}
		else{
			HX_STACK_LINE(322)
			int max_index = (int)2;		HX_STACK_VAR(max_index,"max_index");
			HX_STACK_LINE(323)
			bool tmp3 = this->has_toggle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(323)
			if ((tmp3)){
				HX_STACK_LINE(323)
				max_index = (int)5;
			}
			HX_STACK_LINE(328)
			while((true)){
				HX_STACK_LINE(328)
				int tmp4 = frame_indeces->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				int tmp5 = (max_index + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(328)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(328)
				if ((tmp7)){
					HX_STACK_LINE(328)
					break;
				}
				HX_STACK_LINE(329)
				int tmp8 = (frame_indeces->length - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(329)
				frame_indeces->push(tmp8);
			}
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(333)
				int _g = frame_indeces->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(333)
				while((true)){
					HX_STACK_LINE(333)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(333)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(333)
					if ((tmp5)){
						HX_STACK_LINE(333)
						break;
					}
					HX_STACK_LINE(333)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(333)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(334)
					int tmp7 = frame_indeces->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(334)
					bool tmp8 = (tmp7 > (int)5);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(334)
					if ((tmp8)){
						HX_STACK_LINE(335)
						frame_indeces[i] = (int)5;
					}
					else{
						HX_STACK_LINE(336)
						int tmp9 = frame_indeces->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(336)
						bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(336)
						if ((tmp10)){
							HX_STACK_LINE(337)
							frame_indeces[i] = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(342)
		this->_frame_indeces = frame_indeces;
		HX_STACK_LINE(344)
		bool tmp3 = (W == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(344)
		if ((tmp3)){
			HX_STACK_LINE(345)
			W = (int)80;
		}
		HX_STACK_LINE(347)
		bool tmp4 = (H == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(347)
		if ((tmp4)){
			HX_STACK_LINE(348)
			H = (int)20;
		}
		HX_STACK_LINE(351)
		bool tmp5 = (assets == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(351)
		if ((tmp5)){
			HX_STACK_LINE(352)
			::openfl::_legacy::display::BitmapData temp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(355)
			bool tmp6 = isToggle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(355)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(355)
			if ((tmp7)){
				HX_STACK_LINE(356)
				assets = Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/button.png","\x76","\x00","\xad","\x88"));
				HX_STACK_LINE(357)
				slice9 = Array_obj< ::Dynamic >::__new().Add(::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07")));
				HX_STACK_LINE(358)
				::String tmp8 = assets->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(358)
				::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				temp = tmp9;
				HX_STACK_LINE(359)
				int tmp10 = temp->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(359)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(359)
				this->_src_w = tmp11;
				HX_STACK_LINE(360)
				int tmp12 = temp->get_height();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(360)
				Float tmp13 = (Float(tmp12) / Float((int)3));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(360)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(360)
				this->_src_h = tmp14;
			}
			else{
				HX_STACK_LINE(362)
				assets = Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/button_toggle.png","\x13","\xee","\xc4","\xa2"));
				HX_STACK_LINE(363)
				slice9 = Array_obj< ::Dynamic >::__new().Add(::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07")));
				HX_STACK_LINE(364)
				::String tmp8 = assets->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(364)
				::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(364)
				temp = tmp9;
				HX_STACK_LINE(365)
				int tmp10 = temp->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(365)
				this->_src_w = tmp11;
				HX_STACK_LINE(366)
				int tmp12 = temp->get_height();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(366)
				Float tmp13 = (Float(tmp12) / Float((int)6));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(366)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(366)
				this->_src_h = tmp14;
			}
			HX_STACK_LINE(369)
			temp = null();
		}
		HX_STACK_LINE(372)
		bool tmp6 = this->has_toggle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(372)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(372)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(372)
		if ((tmp8)){
			HX_STACK_LINE(372)
			tmp9 = (assets->length <= (int)3);
		}
		else{
			HX_STACK_LINE(372)
			tmp9 = false;
		}
		HX_STACK_LINE(372)
		if ((tmp9)){
			HX_STACK_LINE(374)
			arr_bmpData = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
			HX_STACK_LINE(375)
			arr_flx9 = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
		}
		else{
			HX_STACK_LINE(378)
			this->has_toggle = true;
			HX_STACK_LINE(379)
			arr_bmpData = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
			HX_STACK_LINE(380)
			arr_flx9 = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
		}
		HX_STACK_LINE(383)
		::openfl::_legacy::geom::Rectangle tmp10 = this->_flashRect2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(383)
		tmp10->width = W;
		HX_STACK_LINE(384)
		::openfl::_legacy::geom::Rectangle tmp11 = this->_flashRect2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		tmp11->height = H;
		HX_STACK_LINE(386)
		bool tmp12 = (assets->length == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(386)
		if ((tmp12)){
			HX_STACK_LINE(387)
			::String tmp13 = assets->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(387)
			::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(387)
			::openfl::_legacy::display::BitmapData all = tmp14;		HX_STACK_VAR(all,"all");
			HX_STACK_LINE(389)
			int tmp15 = this->_src_w;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(389)
			bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(389)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(389)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(389)
			if ((tmp17)){
				HX_STACK_LINE(389)
				int tmp19 = this->_src_h;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(389)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(389)
				tmp18 = (tmp20 == (int)0);
			}
			else{
				HX_STACK_LINE(389)
				tmp18 = true;
			}
			HX_STACK_LINE(389)
			if ((tmp18)){
				HX_STACK_LINE(390)
				::openfl::errors::Error tmp19 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Ambiguous situation! If you only provide one asset, you MUST provide src_w and src_h. Otherwise I can't tell if it's a stacked set of frames or a single frame.","\x64","\x36","\xb2","\x2f"),null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				HX_STACK_DO_THROW(tmp19);
			}
			else{
				HX_STACK_LINE(393)
				int tmp19 = all->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(393)
				int tmp20 = this->_src_h;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(393)
				bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(393)
				if ((tmp21)){
					HX_STACK_LINE(394)
					{
						HX_STACK_LINE(394)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(394)
						int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(394)
						while((true)){
							HX_STACK_LINE(394)
							bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(394)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(394)
							if ((tmp23)){
								HX_STACK_LINE(394)
								break;
							}
							HX_STACK_LINE(394)
							int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(394)
							int i = tmp24;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(395)
							::openfl::_legacy::display::BitmapData tmp25 = all;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(395)
							int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(395)
							bool tmp27 = this->has_toggle;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(395)
							int tmp28 = this->_src_w;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(395)
							int tmp29 = this->_src_h;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(395)
							::openfl::_legacy::display::BitmapData tmp30 = this->grabButtonFrame(tmp25,tmp26,tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(395)
							arr_bmpData[i] = tmp30;
						}
					}
					HX_STACK_LINE(398)
					bool tmp22 = (slice9 != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(398)
					bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(398)
					if ((tmp22)){
						HX_STACK_LINE(398)
						tmp23 = (slice9->__get((int)0).StaticCast< Array< int > >() != Array_obj< int >::__new());
					}
					else{
						HX_STACK_LINE(398)
						tmp23 = false;
					}
					HX_STACK_LINE(398)
					if ((tmp23)){
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(401)
							int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(401)
							while((true)){
								HX_STACK_LINE(401)
								bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(401)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(401)
								if ((tmp25)){
									HX_STACK_LINE(401)
									break;
								}
								HX_STACK_LINE(401)
								int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(401)
								int i = tmp26;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(402)
								::openfl::_legacy::display::BitmapData tmp27 = arr_bmpData->__get(i).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(402)
								::openfl::_legacy::geom::Rectangle tmp28 = this->_flashRect2;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(402)
								int tmp29 = this->tile;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(402)
								::String tmp30 = assets->__get((int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(402)
								::String tmp31 = (tmp30 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(402)
								int tmp32 = i;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(402)
								::String tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(402)
								Float tmp34 = this->resize_ratio;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(402)
								::flixel::addons::ui::FlxUI9SliceSprite tmp35 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,tmp27,tmp28,slice9->__get((int)0).StaticCast< Array< int > >(),tmp29,false,tmp33,tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(402)
								arr_flx9[i] = tmp35;
								HX_STACK_LINE(403)
								::flixel::addons::ui::FlxUI9SliceSprite tmp36 = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(403)
								::flixel::util::FlxPoint tmp37 = this->resize_point;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(403)
								tmp36->set_resize_point(tmp37);
							}
						}
						HX_STACK_LINE(407)
						{
							HX_STACK_LINE(407)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(407)
							int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(407)
							while((true)){
								HX_STACK_LINE(407)
								bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(407)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(407)
								if ((tmp25)){
									HX_STACK_LINE(407)
									break;
								}
								HX_STACK_LINE(407)
								int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(407)
								int i = tmp26;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(408)
								::flixel::addons::ui::FlxUI9SliceSprite tmp27 = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(408)
								::openfl::_legacy::display::BitmapData tmp28 = tmp27->get_pixels();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(408)
								arr_bmpData[i] = tmp28;
							}
						}
						HX_STACK_LINE(412)
						::openfl::_legacy::display::BitmapData tmp24 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(412)
						int tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(412)
						W = tmp25;
						HX_STACK_LINE(413)
						::openfl::_legacy::display::BitmapData tmp26 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(413)
						int tmp27 = tmp26->get_height();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(413)
						H = tmp27;
					}
				}
				else{
					HX_STACK_LINE(416)
					::openfl::_legacy::display::BitmapData tmp22 = all;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(416)
					arr_bmpData[(int)0] = tmp22;
				}
			}
		}
		else{
			HX_STACK_LINE(422)
			bool tmp13 = this->has_toggle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(422)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(422)
			if ((tmp14)){
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(423)
					bool tmp15 = (assets->length < (int)3);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(423)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(423)
					if ((tmp16)){
						HX_STACK_LINE(423)
						break;
					}
					HX_STACK_LINE(424)
					assets->push(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
			}
			else{
				HX_STACK_LINE(427)
				while((true)){
					HX_STACK_LINE(427)
					bool tmp15 = (assets->length < (int)6);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(427)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(427)
					if ((tmp16)){
						HX_STACK_LINE(427)
						break;
					}
					HX_STACK_LINE(428)
					assets->push(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
			}
			HX_STACK_LINE(432)
			::String tmp15 = assets->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			bool tmp16 = (tmp15 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(432)
			if ((tmp16)){
				HX_STACK_LINE(433)
				bool tmp17 = (slice9 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(433)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(433)
				if ((tmp17)){
					HX_STACK_LINE(433)
					tmp18 = (slice9->__get((int)0).StaticCast< Array< int > >() != Array_obj< int >::__new());
				}
				else{
					HX_STACK_LINE(433)
					tmp18 = false;
				}
				HX_STACK_LINE(433)
				if ((tmp18)){
					HX_STACK_LINE(436)
					while((true)){
						HX_STACK_LINE(436)
						bool tmp19 = (slice9->length < assets->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(436)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(436)
						if ((tmp20)){
							HX_STACK_LINE(436)
							break;
						}
						HX_STACK_LINE(437)
						slice9->push(null());
					}
					HX_STACK_LINE(440)
					::String tmp19 = assets->__get((int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(440)
					::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect2;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(440)
					int tmp21 = this->tile;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(440)
					Float tmp22 = this->resize_ratio;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(440)
					::flixel::addons::ui::FlxUI9SliceSprite tmp23 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,tmp19,tmp20,slice9->__get((int)0).StaticCast< Array< int > >(),tmp21,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(440)
					arr_flx9[(int)0] = tmp23;
					HX_STACK_LINE(441)
					::flixel::addons::ui::FlxUI9SliceSprite tmp24 = arr_flx9->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(441)
					::openfl::_legacy::display::BitmapData tmp25 = tmp24->get_pixels();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(441)
					arr_bmpData[(int)0] = tmp25;
					HX_STACK_LINE(443)
					{
						HX_STACK_LINE(443)
						int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(443)
						int _g = assets->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(443)
						while((true)){
							HX_STACK_LINE(443)
							bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(443)
							bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(443)
							if ((tmp27)){
								HX_STACK_LINE(443)
								break;
							}
							HX_STACK_LINE(443)
							int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(443)
							int i = tmp28;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(444)
							::String tmp29 = assets->__get(i);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(444)
							bool tmp30 = (tmp29 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(444)
							if ((tmp30)){
								HX_STACK_LINE(445)
								::String tmp31 = assets->__get(i);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(445)
								::openfl::_legacy::geom::Rectangle tmp32 = this->_flashRect2;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(445)
								int tmp33 = this->tile;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(445)
								Float tmp34 = this->resize_ratio;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(445)
								::flixel::addons::ui::FlxUI9SliceSprite tmp35 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,tmp31,tmp32,slice9->__get(i).StaticCast< Array< int > >(),tmp33,false,HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(445)
								arr_flx9[i] = tmp35;
								HX_STACK_LINE(446)
								::flixel::addons::ui::FlxUI9SliceSprite tmp36 = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(446)
								::openfl::_legacy::display::BitmapData tmp37 = tmp36->get_pixels();		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(446)
								arr_bmpData[i] = tmp37;
							}
						}
					}
					HX_STACK_LINE(451)
					::openfl::_legacy::display::BitmapData tmp26 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(451)
					int tmp27 = tmp26->get_width();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(451)
					W = tmp27;
					HX_STACK_LINE(452)
					::openfl::_legacy::display::BitmapData tmp28 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(452)
					int tmp29 = tmp28->get_height();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(452)
					H = tmp29;
				}
				else{
					HX_STACK_LINE(456)
					key = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					HX_STACK_LINE(457)
					{
						HX_STACK_LINE(457)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(457)
						int _g = assets->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(457)
						while((true)){
							HX_STACK_LINE(457)
							bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(457)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(457)
							if ((tmp20)){
								HX_STACK_LINE(457)
								break;
							}
							HX_STACK_LINE(457)
							int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(457)
							int i = tmp21;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(458)
							::String tmp22 = assets->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(458)
							::openfl::_legacy::display::BitmapData tmp23 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(458)
							arr_bmpData[i] = tmp23;
							HX_STACK_LINE(459)
							::String tmp24 = assets->__get(i);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(459)
							hx::AddEq(key,tmp24);
							HX_STACK_LINE(460)
							int tmp25 = i;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(460)
							int tmp26 = (assets->length - (int)1);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(460)
							bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(460)
							if ((tmp27)){
								HX_STACK_LINE(461)
								hx::AddEq(key,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
							}
						}
					}
					HX_STACK_LINE(464)
					::openfl::_legacy::display::BitmapData tmp19 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(464)
					int tmp20 = tmp19->get_width();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(464)
					W = tmp20;
					HX_STACK_LINE(465)
					::openfl::_legacy::display::BitmapData tmp21 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(465)
					int tmp22 = tmp21->get_height();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(465)
					H = tmp22;
				}
			}
			else{
				HX_STACK_LINE(468)
				bool tmp17 = (W == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(468)
				if ((tmp17)){
					HX_STACK_LINE(468)
					W = (int)80;
				}
				HX_STACK_LINE(469)
				bool tmp18 = (H == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(469)
				if ((tmp18)){
					HX_STACK_LINE(469)
					H = (int)20;
				}
				HX_STACK_LINE(470)
				int tmp19 = W;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(470)
				int tmp20 = (H * (int)3);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(470)
				::openfl::_legacy::display::BitmapData tmp21 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp19,tmp20,true,(int)0,null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(470)
				arr_bmpData[(int)0] = tmp21;
				HX_STACK_LINE(471)
				::String tmp22 = (HX_HCSTRING("Blank_","\xab","\xfe","\x45","\xd3") + W);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(471)
				::String tmp23 = (tmp22 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(471)
				int tmp24 = (H * (int)3);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(471)
				::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(471)
				key = tmp25;
				HX_STACK_LINE(472)
				this->_no_graphic = true;
			}
		}
		HX_STACK_LINE(476)
		int tmp13 = frame_indeces->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(476)
		::openfl::_legacy::display::BitmapData tmp14 = arr_bmpData->__get(tmp13).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(477)
		int tmp15 = frame_indeces->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(477)
		::openfl::_legacy::display::BitmapData tmp16 = arr_bmpData->__get(tmp15).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(478)
		int tmp17 = frame_indeces->__get((int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(478)
		::openfl::_legacy::display::BitmapData tmp18 = arr_bmpData->__get(tmp17).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(476)
		::openfl::_legacy::display::BitmapData tmp19 = this->assembleButtonFrames(tmp14,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(476)
		::openfl::_legacy::display::BitmapData normalPixels = tmp19;		HX_STACK_VAR(normalPixels,"normalPixels");
		HX_STACK_LINE(480)
		bool tmp20 = this->has_toggle;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(480)
		bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(480)
		if ((tmp21)){
			HX_STACK_LINE(481)
			::openfl::_legacy::display::BitmapData tmp22 = normalPixels;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(481)
			int tmp23 = W;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(481)
			int tmp24 = H;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(481)
			::String tmp25 = key;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(481)
			this->loadGraphic(tmp22,true,tmp23,tmp24,false,tmp25);
		}
		else{
			HX_STACK_LINE(483)
			int tmp22 = frame_indeces->__get((int)3);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(483)
			::openfl::_legacy::display::BitmapData tmp23 = arr_bmpData->__get(tmp22).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(484)
			int tmp24 = frame_indeces->__get((int)4);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(484)
			::openfl::_legacy::display::BitmapData tmp25 = arr_bmpData->__get(tmp24).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(485)
			int tmp26 = frame_indeces->__get((int)5);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(485)
			::openfl::_legacy::display::BitmapData tmp27 = arr_bmpData->__get(tmp26).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(483)
			::openfl::_legacy::display::BitmapData tmp28 = this->assembleButtonFrames(tmp23,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(483)
			::openfl::_legacy::display::BitmapData togglePixels = tmp28;		HX_STACK_VAR(togglePixels,"togglePixels");
			HX_STACK_LINE(487)
			::openfl::_legacy::display::BitmapData tmp29 = normalPixels;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(487)
			::openfl::_legacy::display::BitmapData tmp30 = togglePixels;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(487)
			::openfl::_legacy::display::BitmapData tmp31 = this->combineToggleBitmaps(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(487)
			::openfl::_legacy::display::BitmapData combinedPixels = tmp31;		HX_STACK_VAR(combinedPixels,"combinedPixels");
			HX_STACK_LINE(490)
			::openfl::_legacy::display::BitmapData tmp32 = normalPixels;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(490)
			::openfl::_legacy::display::BitmapData tmp33 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(490)
			normalPixels = tmp33;
			HX_STACK_LINE(491)
			::openfl::_legacy::display::BitmapData tmp34 = togglePixels;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(491)
			::openfl::_legacy::display::BitmapData tmp35 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(491)
			togglePixels = tmp35;
			HX_STACK_LINE(493)
			::openfl::_legacy::display::BitmapData tmp36 = combinedPixels;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(493)
			int tmp37 = W;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(493)
			int tmp38 = H;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(493)
			this->loadGraphic(tmp36,true,tmp37,tmp38,null(),null());
		}
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			int _g = arr_flx9->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			while((true)){
				HX_STACK_LINE(497)
				bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(497)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(497)
				if ((tmp23)){
					HX_STACK_LINE(497)
					break;
				}
				HX_STACK_LINE(497)
				int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(497)
				int i = tmp24;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(498)
				::flixel::addons::ui::FlxUI9SliceSprite tmp25 = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(498)
				bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(498)
				if ((tmp26)){
					HX_STACK_LINE(499)
					::flixel::addons::ui::FlxUI9SliceSprite tmp27 = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(499)
					tmp27->destroy();
					HX_STACK_LINE(500)
					arr_flx9[i] = null();
				}
			}
		}
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			bool tmp22 = (arr_flx9->length > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(503)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(503)
			if ((tmp23)){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(503)
			arr_flx9->pop().StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();
		}
		HX_STACK_LINE(503)
		arr_flx9 = null();
		HX_STACK_LINE(504)
		while((true)){
			HX_STACK_LINE(504)
			bool tmp22 = (arr_bmpData->length > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(504)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(504)
			if ((tmp23)){
				HX_STACK_LINE(504)
				break;
			}
			HX_STACK_LINE(504)
			arr_bmpData->pop().StaticCast< ::openfl::_legacy::display::BitmapData >();
		}
		HX_STACK_LINE(504)
		arr_bmpData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(FlxUITypedButton_obj,loadGraphicSlice9,(void))

Void FlxUITypedButton_obj::autoCenterLabel( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","autoCenterLabel",0x5cc27de9,"flixel.addons.ui.FlxUITypedButton.autoCenterLabel","flixel/addons/ui/FlxUITypedButton.hx",511,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(512)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(512)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		if ((tmp1)){
			HX_STACK_LINE(513)
			Float offX = (int)0;		HX_STACK_VAR(offX,"offX");
			HX_STACK_LINE(514)
			Float offY = (int)0;		HX_STACK_VAR(offY,"offY");
			HX_STACK_LINE(516)
			Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(516)
			Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(516)
			Float tmp4 = tmp3->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(516)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(516)
			offX = tmp5;
			HX_STACK_LINE(518)
			Dynamic tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(518)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::flixel::addons::ui::FlxUIText >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(518)
			if ((tmp7)){
				HX_STACK_LINE(519)
				Dynamic tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(519)
				::flixel::addons::ui::FlxUIText tlabel = ((::flixel::addons::ui::FlxUIText)(tmp8));		HX_STACK_VAR(tlabel,"tlabel");
				HX_STACK_LINE(520)
				Float tmp9 = this->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(520)
				Float tmp10 = tlabel->get_fieldWidth();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(520)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(520)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(520)
				offX = tmp12;
				HX_STACK_LINE(521)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(521)
				Float tmp14 = tlabel->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(521)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(521)
				Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(521)
				offY = tmp16;
			}
			else{
				HX_STACK_LINE(523)
				Float tmp8 = this->get_width();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(523)
				Dynamic tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(523)
				Float tmp10 = tmp9->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(523)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(523)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(523)
				offX = tmp12;
				HX_STACK_LINE(524)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(524)
				Dynamic tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(524)
				Float tmp15 = tmp14->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(524)
				Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(524)
				Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(524)
				offY = tmp17;
			}
			HX_STACK_LINE(527)
			::flixel::util::FlxPoint tmp8 = this->_centerLabelOffset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			Float tmp9 = offX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(527)
			tmp8->set_x(tmp9);
			HX_STACK_LINE(528)
			::flixel::util::FlxPoint tmp10 = this->_centerLabelOffset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(528)
			Float tmp11 = offY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(528)
			tmp10->set_y(tmp11);
			HX_STACK_LINE(530)
			Dynamic tmp12 = this->label;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(530)
			bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::flixel::addons::ui::FlxUIText >());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(530)
			if ((tmp13)){
				HX_STACK_LINE(531)
				Dynamic tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(531)
				::flixel::addons::ui::FlxUIText t = ((::flixel::addons::ui::FlxUIText)(tmp14));		HX_STACK_VAR(t,"t");
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,autoCenterLabel,(void))

Void FlxUITypedButton_obj::setCenterLabelOffset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","setCenterLabelOffset",0x7858e6f7,"flixel.addons.ui.FlxUITypedButton.setCenterLabelOffset","flixel/addons/ui/FlxUITypedButton.hx",536,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(537)
		::flixel::util::FlxPoint tmp = this->_centerLabelOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(537)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(537)
		tmp->set_x(tmp1);
		HX_STACK_LINE(538)
		::flixel::util::FlxPoint tmp2 = this->_centerLabelOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(538)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(538)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setCenterLabelOffset,(void))

Void FlxUITypedButton_obj::forceStateHandler( ::String event){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","forceStateHandler",0xa487b1bd,"flixel.addons.ui.FlxUITypedButton.forceStateHandler","flixel/addons/ui/FlxUITypedButton.hx",541,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(542)
		::String tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(542)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("out_button","\xc3","\x20","\xd2","\xfb"))){
			HX_STACK_LINE(543)
			this->onOutHandler();
		}
		else if (  ( _switch_1==HX_HCSTRING("over_button","\xbd","\x74","\xd0","\x7c"))){
			HX_STACK_LINE(544)
			this->onOverHandler();
		}
		else if (  ( _switch_1==HX_HCSTRING("down_button","\x6f","\x2b","\x68","\xa1"))){
			HX_STACK_LINE(545)
			this->onDownHandler();
		}
		else if (  ( _switch_1==HX_HCSTRING("click_button","\x49","\x90","\x30","\x6d"))){
			HX_STACK_LINE(546)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,forceStateHandler,(void))

::openfl::_legacy::display::BitmapData FlxUITypedButton_obj::grabButtonFrame( ::openfl::_legacy::display::BitmapData all_frames,int button_state,hx::Null< bool >  __o_for_toggle,hx::Null< int >  __o_src_w,hx::Null< int >  __o_src_h){
bool for_toggle = __o_for_toggle.Default(false);
int src_w = __o_src_w.Default(0);
int src_h = __o_src_h.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","grabButtonFrame",0x214d85a8,"flixel.addons.ui.FlxUITypedButton.grabButtonFrame","flixel/addons/ui/FlxUITypedButton.hx",566,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(all_frames,"all_frames")
	HX_STACK_ARG(button_state,"button_state")
	HX_STACK_ARG(for_toggle,"for_toggle")
	HX_STACK_ARG(src_w,"src_w")
	HX_STACK_ARG(src_h,"src_h")
{
		HX_STACK_LINE(567)
		int h = src_h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(568)
		bool tmp = (h == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		if ((tmp)){
			HX_STACK_LINE(569)
			bool tmp1 = for_toggle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(569)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(569)
			if ((tmp2)){
				HX_STACK_LINE(570)
				int tmp3 = all_frames->get_height();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(570)
				Float tmp4 = (Float(tmp3) / Float((int)3));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(570)
				int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(570)
				h = tmp5;
			}
			else{
				HX_STACK_LINE(572)
				int tmp3 = all_frames->get_height();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(572)
				Float tmp4 = (Float(tmp3) / Float((int)6));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(572)
				int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(572)
				h = tmp5;
			}
		}
		HX_STACK_LINE(575)
		int w = src_w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(576)
		bool tmp1 = (w == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		if ((tmp1)){
			HX_STACK_LINE(577)
			int tmp2 = all_frames->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(577)
			w = tmp2;
		}
		HX_STACK_LINE(579)
		::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(579)
		::openfl::_legacy::display::BitmapData pixels = tmp2;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(580)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		tmp3->x = (int)0;
		HX_STACK_LINE(581)
		int tmp4 = (button_state * h);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_flashRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		tmp5->y = tmp4;
		HX_STACK_LINE(582)
		::openfl::_legacy::geom::Rectangle tmp6 = this->_flashRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(582)
		tmp6->width = w;
		HX_STACK_LINE(583)
		::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(583)
		tmp7->height = h;
		HX_STACK_LINE(584)
		::openfl::_legacy::display::BitmapData tmp8 = all_frames;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(584)
		::openfl::_legacy::geom::Rectangle tmp9 = this->_flashRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(584)
		::openfl::_legacy::geom::Point tmp10 = this->_flashPointZero;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(584)
		pixels->copyPixels(tmp8,tmp9,tmp10,null(),null(),null());
		HX_STACK_LINE(585)
		::openfl::_legacy::display::BitmapData tmp11 = pixels;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(585)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUITypedButton_obj,grabButtonFrame,return )

::openfl::_legacy::display::BitmapData FlxUITypedButton_obj::combineToggleBitmaps( ::openfl::_legacy::display::BitmapData normal,::openfl::_legacy::display::BitmapData toggle){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","combineToggleBitmaps",0xea818e98,"flixel.addons.ui.FlxUITypedButton.combineToggleBitmaps","flixel/addons/ui/FlxUITypedButton.hx",595,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(toggle,"toggle")
	HX_STACK_LINE(596)
	int tmp = normal->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	int tmp1 = normal->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	int tmp2 = toggle->get_height();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(596)
	::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp,tmp3,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(596)
	::openfl::_legacy::display::BitmapData combined = tmp4;		HX_STACK_VAR(combined,"combined");
	HX_STACK_LINE(598)
	::openfl::_legacy::display::BitmapData tmp5 = normal;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(598)
	::openfl::_legacy::geom::Rectangle tmp6 = normal->get_rect();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(598)
	::openfl::_legacy::geom::Point tmp7 = this->_flashPointZero;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(598)
	combined->copyPixels(tmp5,tmp6,tmp7,null(),null(),null());
	HX_STACK_LINE(599)
	::openfl::_legacy::geom::Point tmp8 = this->_flashPoint;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(599)
	tmp8->x = (int)0;
	HX_STACK_LINE(600)
	int tmp9 = normal->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(600)
	::openfl::_legacy::geom::Point tmp10 = this->_flashPoint;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(600)
	tmp10->y = tmp9;
	HX_STACK_LINE(601)
	::openfl::_legacy::display::BitmapData tmp11 = toggle;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(601)
	::openfl::_legacy::geom::Rectangle tmp12 = toggle->get_rect();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(601)
	::openfl::_legacy::geom::Point tmp13 = this->_flashPoint;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(601)
	combined->copyPixels(tmp11,tmp12,tmp13,null(),null(),null());
	HX_STACK_LINE(603)
	::openfl::_legacy::display::BitmapData tmp14 = combined;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(603)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,combineToggleBitmaps,return )

::openfl::_legacy::display::BitmapData FlxUITypedButton_obj::assembleButtonFrames( ::openfl::_legacy::display::BitmapData upB,::openfl::_legacy::display::BitmapData overB,::openfl::_legacy::display::BitmapData downB){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","assembleButtonFrames",0x4be9f791,"flixel.addons.ui.FlxUITypedButton.assembleButtonFrames","flixel/addons/ui/FlxUITypedButton.hx",615,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(upB,"upB")
	HX_STACK_ARG(overB,"overB")
	HX_STACK_ARG(downB,"downB")
	HX_STACK_LINE(616)
	::openfl::_legacy::display::BitmapData pixels;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(618)
	bool tmp = (overB != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(618)
	if ((tmp)){
		HX_STACK_LINE(619)
		bool tmp1 = (downB != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(619)
		if ((tmp1)){
			HX_STACK_LINE(620)
			int tmp2 = upB->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(620)
			int tmp3 = upB->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(620)
			int tmp4 = (tmp3 * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(620)
			::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp4,null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(620)
			pixels = tmp5;
		}
		else{
			HX_STACK_LINE(622)
			int tmp2 = upB->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(622)
			int tmp3 = upB->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(622)
			int tmp4 = (tmp3 * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(622)
			::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp4,null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(622)
			pixels = tmp5;
		}
	}
	else{
		HX_STACK_LINE(625)
		int tmp1 = upB->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(625)
		int tmp2 = upB->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(625)
		pixels = tmp3;
	}
	HX_STACK_LINE(628)
	::openfl::_legacy::display::BitmapData tmp1 = upB;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	::openfl::_legacy::geom::Rectangle tmp2 = upB->get_rect();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	::openfl::_legacy::geom::Point tmp3 = this->_flashPointZero;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(628)
	pixels->copyPixels(tmp1,tmp2,tmp3,null(),null(),null());
	HX_STACK_LINE(630)
	bool tmp4 = (overB != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(630)
	if ((tmp4)){
		HX_STACK_LINE(631)
		::openfl::_legacy::geom::Point tmp5 = this->_flashPoint;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(631)
		tmp5->x = (int)0;
		HX_STACK_LINE(632)
		int tmp6 = upB->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(632)
		::openfl::_legacy::geom::Point tmp7 = this->_flashPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(632)
		tmp7->y = tmp6;
		HX_STACK_LINE(633)
		::openfl::_legacy::display::BitmapData tmp8 = overB;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(633)
		::openfl::_legacy::geom::Rectangle tmp9 = overB->get_rect();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(633)
		::openfl::_legacy::geom::Point tmp10 = this->_flashPoint;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(633)
		pixels->copyPixels(tmp8,tmp9,tmp10,null(),null(),null());
		HX_STACK_LINE(634)
		bool tmp11 = (downB != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(634)
		if ((tmp11)){
			HX_STACK_LINE(635)
			int tmp12 = upB->get_height();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(635)
			int tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(635)
			::openfl::_legacy::geom::Point tmp14 = this->_flashPoint;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(635)
			tmp14->y = tmp13;
			HX_STACK_LINE(636)
			::openfl::_legacy::display::BitmapData tmp15 = downB;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(636)
			::openfl::_legacy::geom::Rectangle tmp16 = downB->get_rect();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(636)
			::openfl::_legacy::geom::Point tmp17 = this->_flashPoint;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(636)
			pixels->copyPixels(tmp15,tmp16,tmp17,null(),null(),null());
		}
	}
	HX_STACK_LINE(640)
	::openfl::_legacy::display::BitmapData tmp5 = pixels;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(640)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,assembleButtonFrames,return )

Void FlxUITypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","updateButton",0x92a23202,"flixel.addons.ui.FlxUITypedButton.updateButton","flixel/addons/ui/FlxUITypedButton.hx",643,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(644)
		bool tmp = this->skipButtonUpdate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(644)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		if ((tmp1)){
			HX_STACK_LINE(645)
			this->super::updateButton();
		}
	}
return null();
}


Void FlxUITypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onUpHandler",0xd4dc1e49,"flixel.addons.ui.FlxUITypedButton.onUpHandler","flixel/addons/ui/FlxUITypedButton.hx",650,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(651)
		bool tmp = this->has_toggle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		if ((tmp)){
			HX_STACK_LINE(652)
			bool tmp1 = this->toggled;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(652)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(652)
			this->toggled = tmp2;
		}
		HX_STACK_LINE(654)
		this->super::onUpHandler();
		HX_STACK_LINE(655)
		Dynamic tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(655)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(655)
		if ((tmp2)){
			HX_STACK_LINE(656)
			Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(656)
			bool tmp4 = this->toggled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(656)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(656)
			if ((tmp4)){
				HX_STACK_LINE(656)
				tmp5 = this->up_toggle_color;
			}
			else{
				HX_STACK_LINE(656)
				tmp5 = this->up_color;
			}
			HX_STACK_LINE(656)
			tmp3->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp5);
			HX_STACK_LINE(657)
			Dynamic tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(657)
			bool tmp7 = this->toggled;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(657)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(657)
			if ((tmp7)){
				HX_STACK_LINE(657)
				tmp8 = this->up_toggle_visible;
			}
			else{
				HX_STACK_LINE(657)
				tmp8 = this->up_visible;
			}
			HX_STACK_LINE(657)
			tmp6->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp8);
		}
		HX_STACK_LINE(659)
		bool tmp3 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(659)
		if ((tmp3)){
			HX_STACK_LINE(660)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("click_button","\x49","\x90","\x30","\x6d"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onDownHandler",0xf48785a2,"flixel.addons.ui.FlxUITypedButton.onDownHandler","flixel/addons/ui/FlxUITypedButton.hx",665,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(666)
		this->super::onDownHandler();
		HX_STACK_LINE(667)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(667)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(667)
		if ((tmp1)){
			HX_STACK_LINE(668)
			Dynamic tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(668)
			bool tmp3 = this->toggled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(668)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(668)
			if ((tmp3)){
				HX_STACK_LINE(668)
				tmp4 = this->down_toggle_color;
			}
			else{
				HX_STACK_LINE(668)
				tmp4 = this->down_color;
			}
			HX_STACK_LINE(668)
			tmp2->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp4);
			HX_STACK_LINE(669)
			Dynamic tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(669)
			bool tmp6 = this->toggled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(669)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(669)
			if ((tmp6)){
				HX_STACK_LINE(669)
				tmp7 = this->down_toggle_visible;
			}
			else{
				HX_STACK_LINE(669)
				tmp7 = this->down_visible;
			}
			HX_STACK_LINE(669)
			tmp5->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(671)
		bool tmp2 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(671)
		if ((tmp2)){
			HX_STACK_LINE(672)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("down_button","\x6f","\x2b","\x68","\xa1"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onOverHandler",0xcfefcef0,"flixel.addons.ui.FlxUITypedButton.onOverHandler","flixel/addons/ui/FlxUITypedButton.hx",677,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(678)
		this->super::onOverHandler();
		HX_STACK_LINE(679)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		if ((tmp1)){
			HX_STACK_LINE(680)
			Dynamic tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(680)
			bool tmp3 = this->toggled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(680)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(680)
			if ((tmp3)){
				HX_STACK_LINE(680)
				tmp4 = this->over_toggle_color;
			}
			else{
				HX_STACK_LINE(680)
				tmp4 = this->over_color;
			}
			HX_STACK_LINE(680)
			tmp2->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp4);
			HX_STACK_LINE(681)
			Dynamic tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(681)
			bool tmp6 = this->toggled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(681)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(681)
			if ((tmp6)){
				HX_STACK_LINE(681)
				tmp7 = this->over_toggle_visible;
			}
			else{
				HX_STACK_LINE(681)
				tmp7 = this->over_visible;
			}
			HX_STACK_LINE(681)
			tmp5->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(683)
		bool tmp2 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(683)
		if ((tmp2)){
			HX_STACK_LINE(684)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("over_button","\xbd","\x74","\xd0","\x7c"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onOutHandler",0x57e35002,"flixel.addons.ui.FlxUITypedButton.onOutHandler","flixel/addons/ui/FlxUITypedButton.hx",689,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(690)
		this->super::onOutHandler();
		HX_STACK_LINE(691)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(691)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(691)
		if ((tmp1)){
			HX_STACK_LINE(692)
			Dynamic tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(692)
			bool tmp3 = this->toggled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(692)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(692)
			if ((tmp3)){
				HX_STACK_LINE(692)
				tmp4 = this->up_toggle_color;
			}
			else{
				HX_STACK_LINE(692)
				tmp4 = this->up_color;
			}
			HX_STACK_LINE(692)
			tmp2->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp4);
			HX_STACK_LINE(693)
			Dynamic tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(693)
			bool tmp6 = this->toggled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(693)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(693)
			if ((tmp6)){
				HX_STACK_LINE(693)
				tmp7 = this->up_toggle_visible;
			}
			else{
				HX_STACK_LINE(693)
				tmp7 = this->up_visible;
			}
			HX_STACK_LINE(693)
			tmp5->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(695)
		bool tmp2 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		if ((tmp2)){
			HX_STACK_LINE(696)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("out_button","\xc3","\x20","\xd2","\xfb"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Float FlxUITypedButton_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_x",0x81b75354,"flixel.addons.ui.FlxUITypedButton.set_x","flixel/addons/ui/FlxUITypedButton.hx",701,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(702)
	Float tmp = NewX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	this->super::set_x(tmp);
	HX_STACK_LINE(704)
	Dynamic tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(704)
	if ((tmp2)){
		HX_STACK_LINE(706)
		Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(706)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(706)
		::flixel::util::FlxPoint tmp5 = this->_centerLabelOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(706)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(706)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(706)
		int tmp8 = this->status;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(706)
		::flixel::util::FlxPoint tmp9 = this->labelOffsets->__get(tmp8).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(706)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(706)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(706)
		tmp3->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(708)
		bool tmp12 = this->round_labels;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(708)
		if ((tmp12)){
			HX_STACK_LINE(709)
			Dynamic tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(709)
			Dynamic tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(709)
			Float tmp15 = tmp14->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(709)
			Float tmp16 = (tmp15 + ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(709)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(709)
			tmp13->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp17);
		}
	}
	HX_STACK_LINE(713)
	Float tmp3 = NewX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(713)
	return tmp3;
}


Float FlxUITypedButton_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_y",0x81b75355,"flixel.addons.ui.FlxUITypedButton.set_y","flixel/addons/ui/FlxUITypedButton.hx",717,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(718)
	Float tmp = NewY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(718)
	this->super::set_y(tmp);
	HX_STACK_LINE(720)
	Dynamic tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(720)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(720)
	if ((tmp2)){
		HX_STACK_LINE(722)
		Dynamic tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(722)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(722)
		::flixel::util::FlxPoint tmp5 = this->_centerLabelOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(722)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(722)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(722)
		int tmp8 = this->status;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(722)
		::flixel::util::FlxPoint tmp9 = this->labelOffsets->__get(tmp8).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(722)
		Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(722)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(722)
		tmp3->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp11);
		HX_STACK_LINE(724)
		bool tmp12 = this->round_labels;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(724)
		if ((tmp12)){
			HX_STACK_LINE(725)
			Dynamic tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(725)
			Dynamic tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(725)
			Float tmp15 = tmp14->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(725)
			Float tmp16 = (tmp15 + ((Float)0.5));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(725)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(725)
			tmp13->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp17);
		}
	}
	HX_STACK_LINE(728)
	Float tmp3 = NewY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(728)
	return tmp3;
}


::String FlxUITypedButton_obj::CLICK_EVENT;

::String FlxUITypedButton_obj::OVER_EVENT;

::String FlxUITypedButton_obj::DOWN_EVENT;

::String FlxUITypedButton_obj::OUT_EVENT;


FlxUITypedButton_obj::FlxUITypedButton_obj()
{
}

void FlxUITypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITypedButton);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(has_toggle,"has_toggle");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(up_color,"up_color");
	HX_MARK_MEMBER_NAME(over_color,"over_color");
	HX_MARK_MEMBER_NAME(down_color,"down_color");
	HX_MARK_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_MARK_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_MARK_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_MARK_MEMBER_NAME(up_visible,"up_visible");
	HX_MARK_MEMBER_NAME(over_visible,"over_visible");
	HX_MARK_MEMBER_NAME(down_visible,"down_visible");
	HX_MARK_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_MARK_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_MARK_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_MARK_MEMBER_NAME(round_labels,"round_labels");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_MARK_MEMBER_NAME(_src_w,"_src_w");
	HX_MARK_MEMBER_NAME(_src_h,"_src_h");
	HX_MARK_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_MARK_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_MARK_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_MARK_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	::flixel::ui::FlxTypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(has_toggle,"has_toggle");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(up_color,"up_color");
	HX_VISIT_MEMBER_NAME(over_color,"over_color");
	HX_VISIT_MEMBER_NAME(down_color,"down_color");
	HX_VISIT_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_VISIT_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_VISIT_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_VISIT_MEMBER_NAME(up_visible,"up_visible");
	HX_VISIT_MEMBER_NAME(over_visible,"over_visible");
	HX_VISIT_MEMBER_NAME(down_visible,"down_visible");
	HX_VISIT_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_VISIT_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_VISIT_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_VISIT_MEMBER_NAME(round_labels,"round_labels");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_VISIT_MEMBER_NAME(_src_w,"_src_w");
	HX_VISIT_MEMBER_NAME(_src_h,"_src_h");
	HX_VISIT_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_VISIT_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_VISIT_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_VISIT_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	::flixel::ui::FlxTypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUITypedButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return tile; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"_src_w") ) { return _src_w; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { return _src_h; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { return toggled; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { return up_color; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { return has_toggle; }
		if (HX_FIELD_EQ(inName,"over_color") ) { return over_color; }
		if (HX_FIELD_EQ(inName,"down_color") ) { return down_color; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { return up_visible; }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { return _no_graphic; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return resize_ratio; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return resize_point; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { return over_visible; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { return down_visible; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { return round_labels; }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { return _frame_indeces; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { return _slice9_arrays; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { return _slice9_assets; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { return up_toggle_color; }
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return autoCenterLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"grabButtonFrame") ) { return grabButtonFrame_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { return over_toggle_color; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { return down_toggle_color; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { return up_toggle_visible; }
		if (HX_FIELD_EQ(inName,"loadGraphicSlice9") ) { return loadGraphicSlice9_dyn(); }
		if (HX_FIELD_EQ(inName,"forceStateHandler") ) { return forceStateHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setAllLabelOffsets") ) { return setAllLabelOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { return _centerLabelOffset; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { return over_toggle_visible; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { return down_toggle_visible; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphicsMultiple") ) { return loadGraphicsMultiple_dyn(); }
		if (HX_FIELD_EQ(inName,"setCenterLabelOffset") ) { return setCenterLabelOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"combineToggleBitmaps") ) { return combineToggleBitmaps_dyn(); }
		if (HX_FIELD_EQ(inName,"assembleButtonFrames") ) { return assembleButtonFrames_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadGraphicsUpOverDown") ) { return loadGraphicsUpOverDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return set_params(inValue);params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_w") ) { _src_w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { _src_h=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { up_color=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { has_toggle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_color") ) { over_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_color") ) { down_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { up_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { _no_graphic=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { resize_point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { over_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { down_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { round_labels=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { _frame_indeces=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { _slice9_arrays=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { _slice9_assets=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { up_toggle_color=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { over_toggle_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { down_toggle_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { up_toggle_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { _centerLabelOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { over_toggle_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { down_toggle_visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUITypedButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUITypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"));
	outFields->push(HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"));
	outFields->push(HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("has_toggle","\x19","\x91","\x1d","\xbb"));
	outFields->push(HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"));
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	outFields->push(HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"));
	outFields->push(HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"));
	outFields->push(HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e"));
	outFields->push(HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd"));
	outFields->push(HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa"));
	outFields->push(HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06"));
	outFields->push(HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08"));
	outFields->push(HX_HCSTRING("over_visible","\x47","\xd7","\x44","\x92"));
	outFields->push(HX_HCSTRING("down_visible","\x55","\xfc","\x6c","\x72"));
	outFields->push(HX_HCSTRING("up_toggle_visible","\x2b","\x86","\xe9","\x3f"));
	outFields->push(HX_HCSTRING("over_toggle_visible","\x52","\x9b","\xc8","\x49"));
	outFields->push(HX_HCSTRING("down_toggle_visible","\x04","\x54","\xe1","\xa9"));
	outFields->push(HX_HCSTRING("round_labels","\x10","\x07","\x1c","\xbd"));
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("_no_graphic","\x89","\x8a","\xf5","\x96"));
	outFields->push(HX_HCSTRING("_src_w","\x5d","\xc2","\xa1","\x7e"));
	outFields->push(HX_HCSTRING("_src_h","\x4e","\xc2","\xa1","\x7e"));
	outFields->push(HX_HCSTRING("_frame_indeces","\x9a","\xa3","\xe4","\x57"));
	outFields->push(HX_HCSTRING("_slice9_arrays","\xd3","\x49","\x74","\xa4"));
	outFields->push(HX_HCSTRING("_slice9_assets","\x9c","\x19","\x87","\x38"));
	outFields->push(HX_HCSTRING("_centerLabelOffset","\x93","\x75","\xab","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUITypedButton_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxUITypedButton_obj,resize_ratio),HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUITypedButton_obj,resize_point),HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,tile),HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,has_toggle),HX_HCSTRING("has_toggle","\x19","\x91","\x1d","\xbb")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,toggled),HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,up_color),HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,over_color),HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,down_color),HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,up_toggle_color),HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,over_toggle_color),HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,down_toggle_color),HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_visible),HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_visible),HX_HCSTRING("over_visible","\x47","\xd7","\x44","\x92")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_visible),HX_HCSTRING("down_visible","\x55","\xfc","\x6c","\x72")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_toggle_visible),HX_HCSTRING("up_toggle_visible","\x2b","\x86","\xe9","\x3f")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_toggle_visible),HX_HCSTRING("over_toggle_visible","\x52","\x9b","\xc8","\x49")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_toggle_visible),HX_HCSTRING("down_toggle_visible","\x04","\x54","\xe1","\xa9")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,round_labels),HX_HCSTRING("round_labels","\x10","\x07","\x1c","\xbd")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxUITypedButton_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,_no_graphic),HX_HCSTRING("_no_graphic","\x89","\x8a","\xf5","\x96")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_w),HX_HCSTRING("_src_w","\x5d","\xc2","\xa1","\x7e")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_h),HX_HCSTRING("_src_h","\x4e","\xc2","\xa1","\x7e")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxUITypedButton_obj,_frame_indeces),HX_HCSTRING("_frame_indeces","\x9a","\xa3","\xe4","\x57")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITypedButton_obj,_slice9_arrays),HX_HCSTRING("_slice9_arrays","\xd3","\x49","\x74","\xa4")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUITypedButton_obj,_slice9_assets),HX_HCSTRING("_slice9_assets","\x9c","\x19","\x87","\x38")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUITypedButton_obj,_centerLabelOffset),HX_HCSTRING("_centerLabelOffset","\x93","\x75","\xab","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUITypedButton_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{hx::fsString,(void *) &FlxUITypedButton_obj::OVER_EVENT,HX_HCSTRING("OVER_EVENT","\x8f","\x57","\x27","\xe0")},
	{hx::fsString,(void *) &FlxUITypedButton_obj::DOWN_EVENT,HX_HCSTRING("DOWN_EVENT","\x1d","\x7d","\x90","\x37")},
	{hx::fsString,(void *) &FlxUITypedButton_obj::OUT_EVENT,HX_HCSTRING("OUT_EVENT","\x29","\x8a","\xe4","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"),
	HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"),
	HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),
	HX_HCSTRING("has_toggle","\x19","\x91","\x1d","\xbb"),
	HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"),
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"),
	HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"),
	HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e"),
	HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd"),
	HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa"),
	HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06"),
	HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08"),
	HX_HCSTRING("over_visible","\x47","\xd7","\x44","\x92"),
	HX_HCSTRING("down_visible","\x55","\xfc","\x6c","\x72"),
	HX_HCSTRING("up_toggle_visible","\x2b","\x86","\xe9","\x3f"),
	HX_HCSTRING("over_toggle_visible","\x52","\x9b","\xc8","\x49"),
	HX_HCSTRING("down_toggle_visible","\x04","\x54","\xe1","\xa9"),
	HX_HCSTRING("round_labels","\x10","\x07","\x1c","\xbd"),
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setAllLabelOffsets","\x2b","\x4f","\xfa","\x85"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("loadGraphicsMultiple","\x41","\x7c","\x04","\x85"),
	HX_HCSTRING("loadGraphicsUpOverDown","\xc2","\xad","\x54","\x5b"),
	HX_HCSTRING("loadGraphicSlice9","\x69","\x16","\x70","\x91"),
	HX_HCSTRING("autoCenterLabel","\xb0","\xb4","\x79","\xaf"),
	HX_HCSTRING("setCenterLabelOffset","\xd0","\xbe","\xc2","\xc4"),
	HX_HCSTRING("forceStateHandler","\x44","\x68","\x8f","\x7c"),
	HX_HCSTRING("grabButtonFrame","\x6f","\xbc","\x04","\x74"),
	HX_HCSTRING("combineToggleBitmaps","\x71","\x66","\xeb","\x36"),
	HX_HCSTRING("assembleButtonFrames","\x6a","\xcf","\x53","\x98"),
	HX_HCSTRING("updateButton","\xdb","\x08","\xa4","\xd9"),
	HX_HCSTRING("onUpHandler","\x90","\xa5","\xd0","\xa3"),
	HX_HCSTRING("onDownHandler","\xa9","\xac","\x21","\xcf"),
	HX_HCSTRING("onOverHandler","\xf7","\xf5","\x89","\xaa"),
	HX_HCSTRING("onOutHandler","\xdb","\x26","\xe5","\x9e"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("_no_graphic","\x89","\x8a","\xf5","\x96"),
	HX_HCSTRING("_src_w","\x5d","\xc2","\xa1","\x7e"),
	HX_HCSTRING("_src_h","\x4e","\xc2","\xa1","\x7e"),
	HX_HCSTRING("_frame_indeces","\x9a","\xa3","\xe4","\x57"),
	HX_HCSTRING("_slice9_arrays","\xd3","\x49","\x74","\xa4"),
	HX_HCSTRING("_slice9_assets","\x9c","\x19","\x87","\x38"),
	HX_HCSTRING("_centerLabelOffset","\x93","\x75","\xab","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#endif

hx::Class FlxUITypedButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	HX_HCSTRING("OVER_EVENT","\x8f","\x57","\x27","\xe0"),
	HX_HCSTRING("DOWN_EVENT","\x1d","\x7d","\x90","\x37"),
	HX_HCSTRING("OUT_EVENT","\x29","\x8a","\xe4","\xaa"),
	::String(null()) };

void FlxUITypedButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUITypedButton","\xa7","\x67","\x15","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUITypedButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUITypedButton_obj >;
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

void FlxUITypedButton_obj::__boot()
{
	CLICK_EVENT= HX_HCSTRING("click_button","\x49","\x90","\x30","\x6d");
	OVER_EVENT= HX_HCSTRING("over_button","\xbd","\x74","\xd0","\x7c");
	DOWN_EVENT= HX_HCSTRING("down_button","\x6f","\x2b","\x68","\xa1");
	OUT_EVENT= HX_HCSTRING("out_button","\xc3","\x20","\xd2","\xfb");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
