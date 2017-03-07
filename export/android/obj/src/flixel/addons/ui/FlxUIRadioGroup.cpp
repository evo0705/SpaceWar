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
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
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
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIRadioGroup_obj::__construct(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","new",0xb1b15e6b,"flixel.addons.ui.FlxUIRadioGroup.new","flixel/addons/ui/FlxUIRadioGroup.hx",12,0x807a4586)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(ids_,"ids_")
HX_STACK_ARG(labels_,"labels_")
HX_STACK_ARG(callback_,"callback_")
HX_STACK_ARG(__o_y_space_,"y_space_")
HX_STACK_ARG(__o_width_,"width_")
HX_STACK_ARG(__o_height_,"height_")
HX_STACK_ARG(__o_label_width_,"label_width_")
Float y_space_ = __o_y_space_.Default(25);
int width_ = __o_width_.Default(100);
int height_ = __o_height_.Default(20);
int label_width_ = __o_label_width_.Default(100);
{
	HX_STACK_LINE(230)
	this->_clickable = true;
	HX_STACK_LINE(228)
	this->_selected = (int)0;
	HX_STACK_LINE(227)
	this->_y_space = ((Float)25);
	HX_STACK_LINE(225)
	this->_height = (int)20;
	HX_STACK_LINE(224)
	this->_width = (int)100;
	HX_STACK_LINE(223)
	this->_label_width = (int)100;
	HX_STACK_LINE(53)
	super::__construct(null(),null());
	HX_STACK_LINE(54)
	this->_y_space = y_space_;
	HX_STACK_LINE(55)
	this->_width = width_;
	HX_STACK_LINE(56)
	this->_height = height_;
	HX_STACK_LINE(57)
	this->_label_width = label_width_;
	HX_STACK_LINE(58)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	this->set_x(tmp);
	HX_STACK_LINE(59)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	this->set_y(tmp1);
	HX_STACK_LINE(60)
	this->callback = callback_;
	HX_STACK_LINE(61)
	this->_list_radios = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(62)
	this->updateRadios(ids_,labels_);
	HX_STACK_LINE(63)
	this->loadGraphics(null(),null());
}
;
	return null();
}

//FlxUIRadioGroup_obj::~FlxUIRadioGroup_obj() { }

Dynamic FlxUIRadioGroup_obj::__CreateEmpty() { return  new FlxUIRadioGroup_obj; }
hx::ObjectPtr< FlxUIRadioGroup_obj > FlxUIRadioGroup_obj::__new(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_)
{  hx::ObjectPtr< FlxUIRadioGroup_obj > _result_ = new FlxUIRadioGroup_obj();
	_result_->__construct(X,Y,ids_,labels_,callback_,__o_y_space_,__o_width_,__o_height_,__o_label_width_);
	return _result_;}

Dynamic FlxUIRadioGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIRadioGroup_obj > _result_ = new FlxUIRadioGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

hx::Object *FlxUIRadioGroup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

FlxUIRadioGroup_obj::operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUIRadioGroup_obj >(this); }
FlxUIRadioGroup_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIRadioGroup_obj >(this); }
bool FlxUIRadioGroup_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_skipButtonUpdate",0x2de214cc,"flixel.addons.ui.FlxUIRadioGroup.set_skipButtonUpdate","flixel/addons/ui/FlxUIRadioGroup.hx",22,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(24)
	::flixel::addons::ui::FlxUICheckBox fcb;		HX_STACK_VAR(fcb,"fcb");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(25)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			if ((tmp1)){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(25)
			::flixel::addons::ui::FlxUICheckBox tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(25)
			::flixel::addons::ui::FlxUICheckBox fcb1 = tmp2;		HX_STACK_VAR(fcb1,"fcb1");
			HX_STACK_LINE(25)
			++(_g);
			HX_STACK_LINE(26)
			bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			fcb1->set_skipButtonUpdate(tmp3);
		}
	}
	HX_STACK_LINE(28)
	bool tmp = this->skipButtonUpdate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_skipButtonUpdate,return )

cpp::ArrayBase FlxUIRadioGroup_obj::set_params( cpp::ArrayBase p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_params",0x363b22d8,"flixel.addons.ui.FlxUIRadioGroup.set_params","flixel/addons/ui/FlxUIRadioGroup.hx",34,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(35)
	this->params = p;
	HX_STACK_LINE(36)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_params,return )

Void FlxUIRadioGroup_obj::loadGraphics( Dynamic Box,Dynamic Dot){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","loadGraphics",0x1884bda6,"flixel.addons.ui.FlxUIRadioGroup.loadGraphics","flixel/addons/ui/FlxUIRadioGroup.hx",66,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Box,"Box")
		HX_STACK_ARG(Dot,"Dot")
		HX_STACK_LINE(67)
		bool tmp = (Box != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		if ((tmp)){
			HX_STACK_LINE(68)
			this->_box_asset = Box;
		}
		else{
			HX_STACK_LINE(70)
			this->_box_asset = HX_HCSTRING("flixel/flixel-ui/img/radio.png","\x8d","\xa3","\xb0","\x52");
		}
		HX_STACK_LINE(72)
		bool tmp1 = (Dot != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(73)
			this->_dot_asset = Dot;
		}
		else{
			HX_STACK_LINE(75)
			this->_dot_asset = HX_HCSTRING("flixel/flixel-ui/img/radio_dot.png","\x17","\x49","\xb2","\xeb");
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				if ((tmp3)){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(78)
				::flixel::addons::ui::FlxUICheckBox tmp4 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				::flixel::addons::ui::FlxUICheckBox c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(78)
				++(_g);
				HX_STACK_LINE(79)
				Dynamic tmp5 = this->_box_asset;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				c->box->loadGraphic(tmp5,true,null(),null(),null(),null());
				HX_STACK_LINE(80)
				Dynamic tmp6 = this->_dot_asset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				c->mark->loadGraphic(tmp6,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(82)
		this->_refreshRadios();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,loadGraphics,(void))

Void FlxUIRadioGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","destroy",0x842b1c85,"flixel.addons.ui.FlxUIRadioGroup.destroy","flixel/addons/ui/FlxUIRadioGroup.hx",85,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		bool tmp = (this->_list_radios != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		if ((tmp)){
			HX_STACK_LINE(87)
			::flixel::addons::ui::U_obj::clearArray(this->_list_radios);
		}
		HX_STACK_LINE(89)
		this->_ids = null();
		HX_STACK_LINE(90)
		this->_labels = null();
		HX_STACK_LINE(91)
		this->super::destroy();
	}
return null();
}


bool FlxUIRadioGroup_obj::updateLabel( int i,::String label_){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateLabel",0x24428836,"flixel.addons.ui.FlxUIRadioGroup.updateLabel","flixel/addons/ui/FlxUIRadioGroup.hx",94,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(label_,"label_")
	HX_STACK_LINE(95)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = this->_list_radios->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	if ((tmp2)){
		HX_STACK_LINE(95)
		return false;
	}
	HX_STACK_LINE(96)
	::String tmp3 = label_;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	this->_labels[i] = tmp3;
	HX_STACK_LINE(97)
	::flixel::addons::ui::FlxUICheckBox tmp4 = this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	::flixel::addons::ui::FlxUICheckBox c = tmp4;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(98)
	bool tmp5 = (c != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	if ((tmp5)){
		HX_STACK_LINE(99)
		int tmp6 = this->_label_width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		c->button->set_width(tmp6);
		HX_STACK_LINE(100)
		::String tmp7 = label_;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		c->set_text(tmp7);
	}
	HX_STACK_LINE(102)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateLabel,return )

bool FlxUIRadioGroup_obj::updateId( int i,::String id_){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateId",0xc8a6c459,"flixel.addons.ui.FlxUIRadioGroup.updateId","flixel/addons/ui/FlxUIRadioGroup.hx",105,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(id_,"id_")
	HX_STACK_LINE(106)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = this->_list_radios->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	if ((tmp2)){
		HX_STACK_LINE(106)
		return false;
	}
	HX_STACK_LINE(107)
	::String tmp3 = id_;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	this->_ids[i] = tmp3;
	HX_STACK_LINE(108)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateId,return )

Void FlxUIRadioGroup_obj::show( bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","show",0xccd19092,"flixel.addons.ui.FlxUIRadioGroup.show","flixel/addons/ui/FlxUIRadioGroup.hx",112,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(112)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		Array< ::Dynamic > _g1 = tmp->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			if ((tmp2)){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			::flixel::FlxSprite tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			::flixel::FlxSprite fo = tmp3;		HX_STACK_VAR(fo,"fo");
			HX_STACK_LINE(112)
			++(_g);
			HX_STACK_LINE(113)
			bool tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			fo->set_visible(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,show,(void))

Void FlxUIRadioGroup_obj::updateRadios( Array< ::String > ids_,Array< ::String > labels_){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateRadios",0xfd6e4a96,"flixel.addons.ui.FlxUIRadioGroup.updateRadios","flixel/addons/ui/FlxUIRadioGroup.hx",117,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ids_,"ids_")
		HX_STACK_ARG(labels_,"labels_")
		HX_STACK_LINE(118)
		this->_ids = ids_;
		HX_STACK_LINE(119)
		this->_labels = labels_;
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(120)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(120)
				if ((tmp1)){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				::flixel::addons::ui::FlxUICheckBox tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(120)
				::flixel::addons::ui::FlxUICheckBox c = tmp2;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(121)
				c->set_visible(false);
			}
		}
		HX_STACK_LINE(123)
		this->_refreshRadios();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateRadios,(void))

bool FlxUIRadioGroup_obj::get_clickable( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_clickable",0xc69c2b84,"flixel.addons.ui.FlxUIRadioGroup.get_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",128,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	bool tmp = this->_clickable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_clickable,return )

bool FlxUIRadioGroup_obj::set_clickable( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_clickable",0x0ba20d90,"flixel.addons.ui.FlxUIRadioGroup.set_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",129,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(130)
	this->_clickable = b;
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			if ((tmp1)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			::flixel::addons::ui::FlxUICheckBox tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			::flixel::addons::ui::FlxUICheckBox c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(131)
			++(_g);
			HX_STACK_LINE(132)
			bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			c->set_active(tmp3);
		}
	}
	HX_STACK_LINE(134)
	bool tmp = this->_clickable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_clickable,return )

int FlxUIRadioGroup_obj::get_selectedIndex( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedIndex",0x2e506d59,"flixel.addons.ui.FlxUIRadioGroup.get_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",137,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	int tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedIndex,return )

int FlxUIRadioGroup_obj::set_selectedIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedIndex",0x51be4565,"flixel.addons.ui.FlxUIRadioGroup.set_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",138,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(139)
	this->_selected = i;
	HX_STACK_LINE(140)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(141)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			if ((tmp1)){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			::flixel::addons::ui::FlxUICheckBox tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			::flixel::addons::ui::FlxUICheckBox c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(141)
			++(_g);
			HX_STACK_LINE(142)
			c->set_checked(false);
			HX_STACK_LINE(143)
			bool tmp3 = (j == i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			if ((tmp3)){
				HX_STACK_LINE(144)
				c->set_checked(true);
			}
			HX_STACK_LINE(146)
			(j)++;
		}
	}
	HX_STACK_LINE(148)
	int tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedIndex,return )

::String FlxUIRadioGroup_obj::get_selectedLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedLabel",0xdfeae03b,"flixel.addons.ui.FlxUIRadioGroup.get_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",151,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	int tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	::String tmp1 = this->_labels->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedLabel,return )

::String FlxUIRadioGroup_obj::set_selectedLabel( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedLabel",0x0358b847,"flixel.addons.ui.FlxUIRadioGroup.set_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",152,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(153)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(154)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			if ((tmp1)){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(154)
			::flixel::addons::ui::FlxUICheckBox tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			::flixel::addons::ui::FlxUICheckBox c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(155)
			c->set_checked(false);
			HX_STACK_LINE(156)
			::String tmp3 = this->_labels->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			if ((tmp5)){
				HX_STACK_LINE(157)
				this->_selected = i;
				HX_STACK_LINE(158)
				c->set_checked(true);
			}
			HX_STACK_LINE(160)
			(i)++;
		}
	}
	HX_STACK_LINE(162)
	int tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	::String tmp1 = this->_labels->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedLabel,return )

::String FlxUIRadioGroup_obj::get_selectedId( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedId",0x00916734,"flixel.addons.ui.FlxUIRadioGroup.get_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",165,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	int tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::String tmp1 = this->_ids->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedId,return )

::String FlxUIRadioGroup_obj::set_selectedId( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedId",0x20b14fa8,"flixel.addons.ui.FlxUIRadioGroup.set_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",166,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(167)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(168)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(168)
			if ((tmp1)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::flixel::addons::ui::FlxUICheckBox tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(168)
			::flixel::addons::ui::FlxUICheckBox c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(169)
			c->set_checked(false);
			HX_STACK_LINE(170)
			::String tmp3 = this->_ids->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			if ((tmp5)){
				HX_STACK_LINE(171)
				this->_selected = i;
				HX_STACK_LINE(172)
				c->set_checked(true);
			}
			HX_STACK_LINE(174)
			(i)++;
		}
	}
	HX_STACK_LINE(176)
	int tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	::String tmp1 = this->_ids->__get(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedId,return )

::flixel::util::FlxPoint FlxUIRadioGroup_obj::setLineScroll( int scroll,int max_items){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","setLineScroll",0x8e2ebb2e,"flixel.addons.ui.FlxUIRadioGroup.setLineScroll","flixel/addons/ui/FlxUIRadioGroup.hx",188,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scroll,"scroll")
	HX_STACK_ARG(max_items,"max_items")
	HX_STACK_LINE(189)
	int i = (int)1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(190)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	Float yy = tmp;		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(191)
	int more_above = (int)0;		HX_STACK_VAR(more_above,"more_above");
	HX_STACK_LINE(192)
	int more_below = (int)0;		HX_STACK_VAR(more_below,"more_below");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			if ((tmp2)){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::flixel::addons::ui::FlxUICheckBox tmp3 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::flixel::addons::ui::FlxUICheckBox c = tmp3;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(194)
			bool tmp4 = (i <= scroll);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			if ((tmp4)){
				HX_STACK_LINE(195)
				c->set_visible(false);
				HX_STACK_LINE(196)
				(more_above)++;
			}
			else{
				HX_STACK_LINE(197)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(197)
				int tmp6 = (scroll + max_items);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(197)
				bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(197)
				if ((tmp7)){
					HX_STACK_LINE(198)
					c->set_visible(false);
					HX_STACK_LINE(199)
					(more_below)++;
				}
				else{
					HX_STACK_LINE(201)
					Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(201)
					int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(201)
					c->set_x(tmp9);
					HX_STACK_LINE(202)
					Float tmp10 = yy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(202)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(202)
					c->set_y(tmp11);
					HX_STACK_LINE(203)
					Float tmp12 = this->_y_space;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(203)
					hx::AddEq(yy,tmp12);
					HX_STACK_LINE(204)
					c->set_visible(true);
				}
			}
			HX_STACK_LINE(206)
			(i)++;
		}
	}
	HX_STACK_LINE(208)
	::flixel::util::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		::flixel::util::FlxPool tmp2 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		::flixel::util::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		int tmp4 = more_above;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		int tmp5 = more_below;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		::flixel::util::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		::flixel::util::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(208)
		point->_inPool = false;
		HX_STACK_LINE(208)
		tmp1 = point;
	}
	HX_STACK_LINE(208)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,setLineScroll,return )

Void FlxUIRadioGroup_obj::_refreshRadios( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_refreshRadios",0xb14e4769,"flixel.addons.ui.FlxUIRadioGroup._refreshRadios","flixel/addons/ui/FlxUIRadioGroup.hx",237,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		Float xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(239)
		Float yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(240)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			Array< ::String > _g1 = this->_ids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(241)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(241)
				if ((tmp1)){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				::String id = tmp2;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(241)
				++(_g);
				HX_STACK_LINE(242)
				::String label = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(243)
				bool tmp3 = (this->_labels != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(243)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(243)
				if ((tmp3)){
					HX_STACK_LINE(243)
					int tmp5 = this->_labels->length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(243)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(243)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(243)
					tmp4 = (tmp6 > tmp7);
				}
				else{
					HX_STACK_LINE(243)
					tmp4 = false;
				}
				HX_STACK_LINE(243)
				if ((tmp4)){
					HX_STACK_LINE(244)
					::String tmp5 = this->_labels->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(244)
					label = tmp5;
				}
				else{
					HX_STACK_LINE(246)
					::String tmp5 = (HX_HCSTRING("<","\x3c","\x00","\x00","\x00") + id);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(246)
					::String tmp6 = (tmp5 + HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(246)
					label = tmp6;
				}
				HX_STACK_LINE(248)
				::flixel::addons::ui::FlxUICheckBox c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(249)
				int tmp5 = this->_list_radios->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(249)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(249)
				bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(249)
				if ((tmp7)){
					HX_STACK_LINE(250)
					::flixel::addons::ui::FlxUICheckBox tmp8 = this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(250)
					c = tmp8;
					HX_STACK_LINE(251)
					c->set_visible(true);
					HX_STACK_LINE(252)
					::String tmp9 = label;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(252)
					c->set_text(tmp9);
					HX_STACK_LINE(253)
					bool tmp10 = (i == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(253)
					if ((tmp10)){
						HX_STACK_LINE(254)
						xx = c->x;
						HX_STACK_LINE(255)
						yy = c->y;
					}
				}
				else{
					HX_STACK_LINE(258)
					Dynamic tmp8 = this->_box_asset;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(258)
					Dynamic tmp9 = this->_dot_asset;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(258)
					::String tmp10 = label;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(258)
					int tmp11 = this->_label_width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(258)
					::flixel::addons::ui::FlxUICheckBox tmp12 = ::flixel::addons::ui::FlxUICheckBox_obj::__new((int)0,(int)0,tmp8,tmp9,tmp10,tmp11,cpp::ArrayBase_obj::__new().Add(id).Add(false),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(258)
					c = tmp12;
					HX_STACK_LINE(259)
					c->broadcastToFlxUI = false;
					HX_STACK_LINE(260)
					Dynamic tmp13 = this->_onCheckBoxEvent_dyn();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(260)
					::flixel::addons::ui::FlxUICheckBox tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(260)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						Dynamic f = tmp13;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(260)
						::flixel::addons::ui::FlxUICheckBox a1 = tmp14;		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,::flixel::addons::ui::FlxUICheckBox,a1,Dynamic,f)
						int __ArgCount() const { return 0; }
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","flixel/addons/ui/FlxUIRadioGroup.hx",260,0x807a4586)
							{
								HX_STACK_LINE(260)
								::flixel::addons::ui::FlxUICheckBox tmp16 = a1;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(260)
								f(tmp16).Cast< Void >();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(260)
						tmp15 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(260)
					c->callback = tmp15;
					HX_STACK_LINE(261)
					Float tmp16 = xx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(261)
					int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(261)
					c->set_x(tmp17);
					HX_STACK_LINE(262)
					Float tmp18 = yy;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(262)
					int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(262)
					c->set_y(tmp19);
					HX_STACK_LINE(264)
					::flixel::addons::ui::FlxUICheckBox tmp20 = c;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(264)
					this->add(tmp20);
					HX_STACK_LINE(265)
					::String tmp21 = label;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(265)
					c->set_text(tmp21);
					HX_STACK_LINE(266)
					::flixel::addons::ui::FlxUICheckBox tmp22 = c;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(266)
					this->_list_radios->push(tmp22);
				}
				HX_STACK_LINE(268)
				Float tmp8 = this->_y_space;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(268)
				hx::AddEq(yy,tmp8);
				HX_STACK_LINE(269)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,_refreshRadios,(void))

Void FlxUIRadioGroup_obj::_onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_onCheckBoxEvent",0xc5d5ffee,"flixel.addons.ui.FlxUIRadioGroup._onCheckBoxEvent","flixel/addons/ui/FlxUIRadioGroup.hx",273,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(checkBox,"checkBox")
		HX_STACK_LINE(274)
		::flixel::addons::ui::FlxUICheckBox tmp = checkBox;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		this->_onClick(tmp,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,_onCheckBoxEvent,(void))

bool FlxUIRadioGroup_obj::_onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_onClick",0x69011e3f,"flixel.addons.ui.FlxUIRadioGroup._onClick","flixel/addons/ui/FlxUIRadioGroup.hx",277,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(checkBox,"checkBox")
	HX_STACK_ARG(doCallback,"doCallback")
	HX_STACK_LINE(278)
	bool tmp = this->_clickable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	if ((tmp1)){
		HX_STACK_LINE(278)
		return false;
	}
	HX_STACK_LINE(280)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(281)
	{
		HX_STACK_LINE(281)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		while((true)){
			HX_STACK_LINE(281)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(281)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			if ((tmp3)){
				HX_STACK_LINE(281)
				break;
			}
			HX_STACK_LINE(281)
			::flixel::addons::ui::FlxUICheckBox tmp4 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			::flixel::addons::ui::FlxUICheckBox c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(281)
			++(_g);
			HX_STACK_LINE(282)
			c->set_checked(false);
			HX_STACK_LINE(283)
			bool tmp5 = (checkBox == c);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(283)
			if ((tmp5)){
				HX_STACK_LINE(284)
				this->_selected = i;
				HX_STACK_LINE(285)
				c->set_checked(true);
			}
			HX_STACK_LINE(287)
			(i)++;
		}
	}
	HX_STACK_LINE(290)
	bool tmp2 = doCallback;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(290)
	if ((tmp2)){
		HX_STACK_LINE(291)
		Dynamic tmp3 = this->callback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		if ((tmp4)){
			HX_STACK_LINE(292)
			::String tmp5 = this->get_selectedId();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(292)
			this->callback(tmp5);
		}
		HX_STACK_LINE(295)
		bool tmp5 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		if ((tmp5)){
			HX_STACK_LINE(296)
			int tmp6 = this->_selected;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			::String tmp7 = this->_ids->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(296)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("click_radio_group","\x04","\xf0","\x40","\x57"),hx::ObjectPtr<OBJ_>(this),tmp7,this->params);
		}
	}
	HX_STACK_LINE(299)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,_onClick,return )

::String FlxUIRadioGroup_obj::CLICK_EVENT;


FlxUIRadioGroup_obj::FlxUIRadioGroup_obj()
{
}

void FlxUIRadioGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRadioGroup);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(_box_asset,"_box_asset");
	HX_MARK_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_ids,"_ids");
	HX_MARK_MEMBER_NAME(_label_width,"_label_width");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_y_space,"_y_space");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_list_radios,"_list_radios");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRadioGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(_box_asset,"_box_asset");
	HX_VISIT_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_ids,"_ids");
	HX_VISIT_MEMBER_NAME(_label_width,"_label_width");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_y_space,"_y_space");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_list_radios,"_list_radios");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIRadioGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"_ids") ) { return _ids; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"updateId") ) { return updateId_dyn(); }
		if (HX_FIELD_EQ(inName,"_y_space") ) { return _y_space; }
		if (HX_FIELD_EQ(inName,"_onClick") ) { return _onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { if (inCallProp == hx::paccAlways) return get_clickable(); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == hx::paccAlways) return get_selectedId(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { return _box_asset; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { return _dot_asset; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return _clickable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateLabel") ) { return updateLabel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRadios") ) { return updateRadios_dyn(); }
		if (HX_FIELD_EQ(inName,"_label_width") ) { return _label_width; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { return _list_radios; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == hx::paccAlways) return get_selectedLabel(); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"get_clickable") ) { return get_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clickable") ) { return set_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineScroll") ) { return setLineScroll_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return get_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return set_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"_refreshRadios") ) { return _refreshRadios_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		if (HX_FIELD_EQ(inName,"_onCheckBoxEvent") ) { return _onCheckBoxEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return get_selectedLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return set_selectedLabel_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIRadioGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { _ids=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return set_params(inValue);params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y_space") ) { _y_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { if (inCallProp == hx::paccAlways) return set_clickable(inValue); }
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { if (inCallProp == hx::paccAlways) return set_selectedId(inValue); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { _box_asset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { _dot_asset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_label_width") ) { _label_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { _list_radios=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { if (inCallProp == hx::paccAlways) return set_selectedLabel(inValue); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIRadioGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIRadioGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clickable","\xe2","\xad","\x8e","\x34"));
	outFields->push(HX_HCSTRING("selectedId","\x16","\xf7","\xd0","\xc6"));
	outFields->push(HX_HCSTRING("selectedLabel","\x99","\xe9","\xf0","\x65"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("_box_asset","\x3d","\x85","\x1c","\x89"));
	outFields->push(HX_HCSTRING("_dot_asset","\x3b","\x7c","\xa9","\x88"));
	outFields->push(HX_HCSTRING("_labels","\x9e","\x39","\xf4","\xb7"));
	outFields->push(HX_HCSTRING("_ids","\x39","\x49","\x1b","\x3f"));
	outFields->push(HX_HCSTRING("_label_width","\x3c","\xa8","\xbf","\x42"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_y_space","\xc1","\x4e","\xab","\x5e"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("_clickable","\xa3","\x29","\x31","\x90"));
	outFields->push(HX_HCSTRING("_list_radios","\x1a","\xd6","\x25","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxUIRadioGroup_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,_box_asset),HX_HCSTRING("_box_asset","\x3d","\x85","\x1c","\x89")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,_dot_asset),HX_HCSTRING("_dot_asset","\x3b","\x7c","\xa9","\x88")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_labels),HX_HCSTRING("_labels","\x9e","\x39","\xf4","\xb7")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_ids),HX_HCSTRING("_ids","\x39","\x49","\x1b","\x3f")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_label_width),HX_HCSTRING("_label_width","\x3c","\xa8","\xbf","\x42")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsFloat,(int)offsetof(FlxUIRadioGroup_obj,_y_space),HX_HCSTRING("_y_space","\xc1","\x4e","\xab","\x5e")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,_clickable),HX_HCSTRING("_clickable","\xa3","\x29","\x31","\x90")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_list_radios),HX_HCSTRING("_list_radios","\x1a","\xd6","\x25","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUIRadioGroup_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("loadGraphics","\x11","\xe5","\xd0","\xcb"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateLabel","\x2b","\x77","\x47","\x55"),
	HX_HCSTRING("updateId","\x44","\x1a","\xfa","\x77"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("updateRadios","\x01","\x72","\xba","\xb0"),
	HX_HCSTRING("get_clickable","\xb9","\x81","\xf2","\xf5"),
	HX_HCSTRING("set_clickable","\xc5","\x63","\xf8","\x3a"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("get_selectedLabel","\xf0","\xf4","\x60","\x6c"),
	HX_HCSTRING("set_selectedLabel","\xfc","\xcc","\xce","\x8f"),
	HX_HCSTRING("get_selectedId","\x5f","\x7f","\xc6","\x3c"),
	HX_HCSTRING("set_selectedId","\xd3","\x67","\xe6","\x5c"),
	HX_HCSTRING("setLineScroll","\x63","\x11","\x85","\xbd"),
	HX_HCSTRING("_box_asset","\x3d","\x85","\x1c","\x89"),
	HX_HCSTRING("_dot_asset","\x3b","\x7c","\xa9","\x88"),
	HX_HCSTRING("_labels","\x9e","\x39","\xf4","\xb7"),
	HX_HCSTRING("_ids","\x39","\x49","\x1b","\x3f"),
	HX_HCSTRING("_label_width","\x3c","\xa8","\xbf","\x42"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_y_space","\xc1","\x4e","\xab","\x5e"),
	HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"),
	HX_HCSTRING("_clickable","\xa3","\x29","\x31","\x90"),
	HX_HCSTRING("_list_radios","\x1a","\xd6","\x25","\x6f"),
	HX_HCSTRING("_refreshRadios","\x94","\x5f","\x83","\xed"),
	HX_HCSTRING("_onCheckBoxEvent","\xd9","\xb8","\xa1","\x4b"),
	HX_HCSTRING("_onClick","\x2a","\x74","\x54","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

hx::Class FlxUIRadioGroup_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	::String(null()) };

void FlxUIRadioGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIRadioGroup","\xf9","\x4c","\x99","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIRadioGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIRadioGroup_obj >;
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

void FlxUIRadioGroup_obj::__boot()
{
	CLICK_EVENT= HX_HCSTRING("click_radio_group","\x04","\xf0","\x40","\x57");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
