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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
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
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
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
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
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
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
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
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","new",0x9a0e8c99,"flixel.addons.ui.FlxUIButton.new","flixel/addons/ui/FlxUIButton.hx",26,0xbb6c9298)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Label,"Label")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(36)
	this->down_toggle_style = null();
	HX_STACK_LINE(35)
	this->over_toggle_style = null();
	HX_STACK_LINE(34)
	this->up_toggle_style = null();
	HX_STACK_LINE(32)
	this->down_style = null();
	HX_STACK_LINE(31)
	this->over_style = null();
	HX_STACK_LINE(30)
	this->up_style = null();
	HX_STACK_LINE(47)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Dynamic tmp2 = OnClick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(48)
	bool tmp3 = (Label != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	if ((tmp3)){
		HX_STACK_LINE(50)
		::flixel::addons::ui::FlxUIText tmp4 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)80,Label,(int)8,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		this->set_label(tmp4);
		HX_STACK_LINE(51)
		::flixel::addons::ui::FlxUIText tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		tmp5->setFormat(null(),(int)8,(int)3355443,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
	}
	HX_STACK_LINE(53)
	Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	this->resize(tmp4,tmp5);
	HX_STACK_LINE(54)
	this->autoCenterLabel();
}
;
	return null();
}

//FlxUIButton_obj::~FlxUIButton_obj() { }

Dynamic FlxUIButton_obj::__CreateEmpty() { return  new FlxUIButton_obj; }
hx::ObjectPtr< FlxUIButton_obj > FlxUIButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxUIButton_obj > _result_ = new FlxUIButton_obj();
	_result_->__construct(__o_X,__o_Y,Label,OnClick);
	return _result_;}

Dynamic FlxUIButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIButton_obj > _result_ = new FlxUIButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxUIButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ILabeled_obj)) return operator ::flixel::addons::ui::interfaces::ILabeled_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIButton_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

FlxUIButton_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUIButton_obj >(this); }
FlxUIButton_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxUIButton_obj >(this); }
FlxUIButton_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUIButton_obj >(this); }
FlxUIButton_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIButton_obj >(this); }
FlxUIButton_obj::operator ::flixel::addons::ui::interfaces::ILabeled_obj *()
	{ return new ::flixel::addons::ui::interfaces::ILabeled_delegate_< FlxUIButton_obj >(this); }
FlxUIButton_obj::operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIButton_delegate_< FlxUIButton_obj >(this); }
FlxUIButton_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUIButton_obj >(this); }
::flixel::addons::ui::FlxUIText FlxUIButton_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","setLabel",0x4416cc19,"flixel.addons.ui.FlxUIButton.setLabel","flixel/addons/ui/FlxUIButton.hx",59,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(59)
	::flixel::addons::ui::FlxUIText tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	this->set_label(tmp);
	HX_STACK_LINE(59)
	::flixel::addons::ui::FlxUIText tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,setLabel,return )

::flixel::addons::ui::FlxUIText FlxUIButton_obj::getLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","getLabel",0x95b972a5,"flixel.addons.ui.FlxUIButton.getLabel","flixel/addons/ui/FlxUIButton.hx",60,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	::flixel::addons::ui::FlxUIText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,getLabel,return )

Void FlxUIButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","resize",0x28cb475b,"flixel.addons.ui.FlxUIButton.resize","flixel/addons/ui/FlxUIButton.hx",64,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(65)
		Float tmp = W;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		Float tmp1 = H;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(66)
		::flixel::addons::ui::FlxUIText tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		if ((tmp3)){
			HX_STACK_LINE(67)
			::flixel::addons::ui::FlxUIText tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			Float tmp5 = W;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			tmp4->set_width(tmp5);
			HX_STACK_LINE(68)
			::flixel::addons::ui::FlxUIText tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(68)
			Float tmp7 = W;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			tmp6->set_fieldWidth(tmp7);
		}
	}
return null();
}


Void FlxUIButton_obj::addIcon( ::flixel::FlxSprite icon,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,Dynamic __o_center){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
Dynamic center = __o_center.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","addIcon",0xa78ff6f3,"flixel.addons.ui.FlxUIButton.addIcon","flixel/addons/ui/FlxUIButton.hx",73,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(icon,"icon")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(center,"center")
{
		HX_STACK_LINE(75)
		::flixel::util::loaders::CachedGraphics tmp = this->cachedGraphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap->clone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		this->_noIconGraphicsBkup = tmp1;
		HX_STACK_LINE(77)
		int sx = X;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(78)
		int sy = Y;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(80)
		Dynamic tmp2 = center;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(81)
			Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			Float tmp4 = icon->get_width();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			sx = tmp7;
			HX_STACK_LINE(82)
			Float tmp8 = this->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Float tmp9 = icon->get_height();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			sy = tmp12;
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			int tmp3 = this->frames;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				if ((tmp5)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(86)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(88)
				::flixel::FlxSprite tmp7 = icon;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(88)
				int tmp8 = sx;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(88)
				int tmp9 = sy;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(88)
				Float tmp11 = this->get_height();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(88)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(88)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(88)
				int tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				this->stamp(tmp7,tmp8,tmp14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUIButton_obj,addIcon,(void))

Void FlxUIButton_obj::removeIcon( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","removeIcon",0xfc624ec4,"flixel.addons.ui.FlxUIButton.removeIcon","flixel/addons/ui/FlxUIButton.hx",93,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::openfl::_legacy::display::BitmapData tmp = this->_noIconGraphicsBkup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(97)
			::flixel::util::loaders::CachedGraphics tmp2 = this->cachedGraphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::flixel::util::loaders::CachedGraphics tmp3 = this->cachedGraphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			::openfl::_legacy::geom::Rectangle tmp4 = tmp3->bitmap->get_rect();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			tmp2->bitmap->fillRect(tmp4,(int)0);
			HX_STACK_LINE(98)
			::flixel::util::loaders::CachedGraphics tmp5 = this->cachedGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			::openfl::_legacy::display::BitmapData tmp6 = this->_noIconGraphicsBkup;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			::openfl::_legacy::display::BitmapData tmp7 = this->_noIconGraphicsBkup;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			::openfl::_legacy::display::BitmapData tmp9 = this->_noIconGraphicsBkup;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			int tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			::openfl::_legacy::geom::Point tmp12 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(98)
			tmp5->bitmap->copyPixels(tmp6,tmp11,tmp12,null(),null(),null());
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::flixel::util::loaders::CachedGraphics tmp13 = this->cachedGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(99)
				::flixel::_system::layer::TileSheetData tmp14 = tmp13->get_tilesheet();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(99)
				tmp14->__Field(HX_HCSTRING("destroyFrameBitmapDatas","\x87","\xce","\x2a","\x0a"), hx::paccDynamic )();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,removeIcon,(void))

Void FlxUIButton_obj::changeIcon( ::flixel::FlxSprite newIcon){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","changeIcon",0x598c49f0,"flixel.addons.ui.FlxUIButton.changeIcon","flixel/addons/ui/FlxUIButton.hx",108,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newIcon,"newIcon")
		HX_STACK_LINE(109)
		this->removeIcon();
		HX_STACK_LINE(110)
		::flixel::FlxSprite tmp = newIcon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		this->addIcon(tmp,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,changeIcon,(void))

Void FlxUIButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","destroy",0x4a25f9b3,"flixel.addons.ui.FlxUIButton.destroy","flixel/addons/ui/FlxUIButton.hx",114,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		::openfl::_legacy::display::BitmapData tmp = this->_noIconGraphicsBkup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		::openfl::_legacy::display::BitmapData tmp1 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		this->_noIconGraphicsBkup = tmp1;
		HX_STACK_LINE(116)
		this->super::destroy();
	}
return null();
}


Void FlxUIButton_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","resetHelpers",0x11dffddd,"flixel.addons.ui.FlxUIButton.resetHelpers","flixel/addons/ui/FlxUIButton.hx",125,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		this->super::resetHelpers();
		HX_STACK_LINE(128)
		::flixel::addons::ui::FlxUIText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		if ((tmp1)){
			HX_STACK_LINE(130)
			::flixel::addons::ui::FlxUIText tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(130)
			Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			::flixel::addons::ui::FlxUIText tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			int tmp6 = tmp5->frameWidth = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			tmp2->set_width(tmp6);
			HX_STACK_LINE(131)
			::flixel::addons::ui::FlxUIText tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			::flixel::addons::ui::FlxUIText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			Float tmp9 = tmp8->get_width();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			tmp7->set_fieldWidth(tmp9);
			HX_STACK_LINE(132)
			::flixel::addons::ui::FlxUIText tmp10 = this->label;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			::flixel::addons::ui::FlxUIText tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(132)
			Float tmp12 = tmp11->get_size();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			tmp10->set_size(tmp12);
		}
	}
return null();
}


Void FlxUIButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onDownHandler",0x9da54a22,"flixel.addons.ui.FlxUIButton.onDownHandler","flixel/addons/ui/FlxUIButton.hx",137,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		this->super::onDownHandler();
		HX_STACK_LINE(139)
		::flixel::addons::ui::FlxUIText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		if ((tmp1)){
			HX_STACK_LINE(140)
			bool tmp2 = this->toggled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			if ((tmp2)){
				HX_STACK_LINE(140)
				::flixel::addons::ui::ButtonLabelStyle tmp4 = this->down_toggle_style;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				tmp3 = (tmp5 != null());
			}
			else{
				HX_STACK_LINE(140)
				tmp3 = false;
			}
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(141)
				::flixel::addons::ui::FlxUIText tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(141)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = this->down_toggle_style;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(141)
				Dynamic tmp6 = tmp5->color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				tmp4->set_color(tmp6);
				HX_STACK_LINE(142)
				::flixel::addons::ui::ButtonLabelStyle tmp7 = this->down_toggle_style;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				if ((tmp8)){
					HX_STACK_LINE(143)
					::flixel::addons::ui::FlxUIText tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(143)
					::flixel::addons::ui::ButtonLabelStyle tmp10 = this->down_toggle_style;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(143)
					int tmp11 = tmp10->border->style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(143)
					tmp9->set_borderStyle(tmp11);
					HX_STACK_LINE(144)
					::flixel::addons::ui::FlxUIText tmp12 = this->label;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(144)
					::flixel::addons::ui::ButtonLabelStyle tmp13 = this->down_toggle_style;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(144)
					int tmp14 = tmp13->border->color;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(144)
					tmp12->set_borderColor(tmp14);
					HX_STACK_LINE(145)
					::flixel::addons::ui::FlxUIText tmp15 = this->label;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(145)
					::flixel::addons::ui::ButtonLabelStyle tmp16 = this->down_toggle_style;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(145)
					int tmp17 = tmp16->border->size;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(145)
					tmp15->set_borderSize(tmp17);
					HX_STACK_LINE(146)
					::flixel::addons::ui::FlxUIText tmp18 = this->label;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(146)
					::flixel::addons::ui::ButtonLabelStyle tmp19 = this->down_toggle_style;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(146)
					Float tmp20 = tmp19->border->quality;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(146)
					tmp18->set_borderQuality(tmp20);
				}
			}
			else{
				HX_STACK_LINE(148)
				bool tmp4 = this->toggled;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(148)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(148)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				if ((tmp6)){
					HX_STACK_LINE(148)
					::flixel::addons::ui::ButtonLabelStyle tmp8 = this->down_style;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					tmp7 = (tmp9 != null());
				}
				else{
					HX_STACK_LINE(148)
					tmp7 = false;
				}
				HX_STACK_LINE(148)
				if ((tmp7)){
					HX_STACK_LINE(149)
					::flixel::addons::ui::FlxUIText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(149)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = this->down_style;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(149)
					Dynamic tmp10 = tmp9->color;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(149)
					tmp8->set_color(tmp10);
					HX_STACK_LINE(150)
					::flixel::addons::ui::ButtonLabelStyle tmp11 = this->down_style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(150)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(150)
					if ((tmp12)){
						HX_STACK_LINE(151)
						::flixel::addons::ui::FlxUIText tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(151)
						::flixel::addons::ui::ButtonLabelStyle tmp14 = this->down_style;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(151)
						int tmp15 = tmp14->border->style;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(151)
						tmp13->set_borderStyle(tmp15);
						HX_STACK_LINE(152)
						::flixel::addons::ui::FlxUIText tmp16 = this->label;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(152)
						::flixel::addons::ui::ButtonLabelStyle tmp17 = this->down_style;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(152)
						int tmp18 = tmp17->border->color;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(152)
						tmp16->set_borderColor(tmp18);
						HX_STACK_LINE(153)
						::flixel::addons::ui::FlxUIText tmp19 = this->label;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(153)
						::flixel::addons::ui::ButtonLabelStyle tmp20 = this->down_style;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(153)
						int tmp21 = tmp20->border->size;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(153)
						tmp19->set_borderSize(tmp21);
						HX_STACK_LINE(154)
						::flixel::addons::ui::FlxUIText tmp22 = this->label;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(154)
						::flixel::addons::ui::ButtonLabelStyle tmp23 = this->down_style;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(154)
						Float tmp24 = tmp23->border->quality;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(154)
						tmp22->set_borderQuality(tmp24);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onOverHandler",0x790d9370,"flixel.addons.ui.FlxUIButton.onOverHandler","flixel/addons/ui/FlxUIButton.hx",161,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		this->super::onOverHandler();
		HX_STACK_LINE(163)
		::flixel::addons::ui::FlxUIText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		if ((tmp1)){
			HX_STACK_LINE(164)
			bool tmp2 = this->toggled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			if ((tmp2)){
				HX_STACK_LINE(164)
				::flixel::addons::ui::ButtonLabelStyle tmp4 = this->over_toggle_style;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(164)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				tmp3 = (tmp5 != null());
			}
			else{
				HX_STACK_LINE(164)
				tmp3 = false;
			}
			HX_STACK_LINE(164)
			if ((tmp3)){
				HX_STACK_LINE(165)
				::flixel::addons::ui::FlxUIText tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(165)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = this->over_toggle_style;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				Dynamic tmp6 = tmp5->color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				tmp4->set_color(tmp6);
				HX_STACK_LINE(166)
				::flixel::addons::ui::ButtonLabelStyle tmp7 = this->over_toggle_style;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				if ((tmp8)){
					HX_STACK_LINE(167)
					::flixel::addons::ui::FlxUIText tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(167)
					::flixel::addons::ui::ButtonLabelStyle tmp10 = this->over_toggle_style;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(167)
					int tmp11 = tmp10->border->style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(167)
					tmp9->set_borderStyle(tmp11);
					HX_STACK_LINE(168)
					::flixel::addons::ui::FlxUIText tmp12 = this->label;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(168)
					::flixel::addons::ui::ButtonLabelStyle tmp13 = this->over_toggle_style;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(168)
					int tmp14 = tmp13->border->color;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(168)
					tmp12->set_borderColor(tmp14);
					HX_STACK_LINE(169)
					::flixel::addons::ui::FlxUIText tmp15 = this->label;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(169)
					::flixel::addons::ui::ButtonLabelStyle tmp16 = this->over_toggle_style;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(169)
					int tmp17 = tmp16->border->size;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(169)
					tmp15->set_borderSize(tmp17);
					HX_STACK_LINE(170)
					::flixel::addons::ui::FlxUIText tmp18 = this->label;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(170)
					::flixel::addons::ui::ButtonLabelStyle tmp19 = this->over_toggle_style;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(170)
					Float tmp20 = tmp19->border->quality;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(170)
					tmp18->set_borderQuality(tmp20);
				}
			}
			else{
				HX_STACK_LINE(172)
				bool tmp4 = this->toggled;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(172)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				if ((tmp6)){
					HX_STACK_LINE(172)
					::flixel::addons::ui::ButtonLabelStyle tmp8 = this->over_style;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(172)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(172)
					tmp7 = (tmp9 != null());
				}
				else{
					HX_STACK_LINE(172)
					tmp7 = false;
				}
				HX_STACK_LINE(172)
				if ((tmp7)){
					HX_STACK_LINE(173)
					::flixel::addons::ui::FlxUIText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(173)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = this->over_style;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(173)
					Dynamic tmp10 = tmp9->color;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(173)
					tmp8->set_color(tmp10);
					HX_STACK_LINE(174)
					::flixel::addons::ui::ButtonLabelStyle tmp11 = this->over_style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(174)
					bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(174)
					if ((tmp12)){
						HX_STACK_LINE(175)
						::flixel::addons::ui::FlxUIText tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(175)
						::flixel::addons::ui::ButtonLabelStyle tmp14 = this->over_style;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(175)
						int tmp15 = tmp14->border->style;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(175)
						tmp13->set_borderStyle(tmp15);
						HX_STACK_LINE(176)
						::flixel::addons::ui::FlxUIText tmp16 = this->label;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(176)
						::flixel::addons::ui::ButtonLabelStyle tmp17 = this->over_style;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						int tmp18 = tmp17->border->color;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(176)
						tmp16->set_borderColor(tmp18);
						HX_STACK_LINE(177)
						::flixel::addons::ui::FlxUIText tmp19 = this->label;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(177)
						::flixel::addons::ui::ButtonLabelStyle tmp20 = this->over_style;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(177)
						int tmp21 = tmp20->border->size;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(177)
						tmp19->set_borderSize(tmp21);
						HX_STACK_LINE(178)
						::flixel::addons::ui::FlxUIText tmp22 = this->label;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(178)
						::flixel::addons::ui::ButtonLabelStyle tmp23 = this->over_style;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(178)
						Float tmp24 = tmp23->border->quality;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(178)
						tmp22->set_borderQuality(tmp24);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onOutHandler",0x7e879b82,"flixel.addons.ui.FlxUIButton.onOutHandler","flixel/addons/ui/FlxUIButton.hx",185,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		this->super::onOutHandler();
		HX_STACK_LINE(187)
		::flixel::addons::ui::FlxUIText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(188)
			bool tmp2 = this->toggled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			if ((tmp2)){
				HX_STACK_LINE(188)
				::flixel::addons::ui::ButtonLabelStyle tmp4 = this->up_toggle_style;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(188)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(188)
				tmp3 = (tmp5 != null());
			}
			else{
				HX_STACK_LINE(188)
				tmp3 = false;
			}
			HX_STACK_LINE(188)
			if ((tmp3)){
				HX_STACK_LINE(189)
				::flixel::addons::ui::FlxUIText tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = this->up_toggle_style;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				Dynamic tmp6 = tmp5->color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				tmp4->set_color(tmp6);
				HX_STACK_LINE(190)
				::flixel::addons::ui::ButtonLabelStyle tmp7 = this->up_toggle_style;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(190)
				::flixel::addons::ui::BorderDef tmp8 = tmp7->border;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(190)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(190)
				if ((tmp9)){
					HX_STACK_LINE(191)
					::flixel::addons::ui::FlxUIText tmp10 = this->label;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					::flixel::addons::ui::ButtonLabelStyle tmp11 = this->up_toggle_style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(191)
					int tmp12 = tmp11->border->style;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(191)
					tmp10->set_borderStyle(tmp12);
					HX_STACK_LINE(192)
					::flixel::addons::ui::FlxUIText tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(192)
					::flixel::addons::ui::ButtonLabelStyle tmp14 = this->up_toggle_style;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(192)
					int tmp15 = tmp14->border->color;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(192)
					tmp13->set_borderColor(tmp15);
					HX_STACK_LINE(193)
					::flixel::addons::ui::FlxUIText tmp16 = this->label;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(193)
					::flixel::addons::ui::ButtonLabelStyle tmp17 = this->up_toggle_style;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(193)
					int tmp18 = tmp17->border->size;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(193)
					tmp16->set_borderSize(tmp18);
					HX_STACK_LINE(194)
					::flixel::addons::ui::FlxUIText tmp19 = this->label;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(194)
					::flixel::addons::ui::ButtonLabelStyle tmp20 = this->up_toggle_style;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(194)
					Float tmp21 = tmp20->border->quality;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(194)
					tmp19->set_borderQuality(tmp21);
				}
			}
			else{
				HX_STACK_LINE(196)
				bool tmp4 = this->toggled;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				if ((tmp6)){
					HX_STACK_LINE(196)
					::flixel::addons::ui::ButtonLabelStyle tmp8 = this->up_style;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(196)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(196)
					tmp7 = (tmp9 != null());
				}
				else{
					HX_STACK_LINE(196)
					tmp7 = false;
				}
				HX_STACK_LINE(196)
				if ((tmp7)){
					HX_STACK_LINE(197)
					::flixel::addons::ui::FlxUIText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(197)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = this->up_style;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(197)
					Dynamic tmp10 = tmp9->color;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(197)
					tmp8->set_color(tmp10);
					HX_STACK_LINE(198)
					::flixel::addons::ui::ButtonLabelStyle tmp11 = this->up_style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(198)
					::flixel::addons::ui::BorderDef tmp12 = tmp11->border;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(198)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(198)
					if ((tmp13)){
						HX_STACK_LINE(199)
						::flixel::addons::ui::FlxUIText tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(199)
						::flixel::addons::ui::ButtonLabelStyle tmp15 = this->up_style;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(199)
						int tmp16 = tmp15->border->style;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						tmp14->set_borderStyle(tmp16);
						HX_STACK_LINE(200)
						::flixel::addons::ui::FlxUIText tmp17 = this->label;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(200)
						::flixel::addons::ui::ButtonLabelStyle tmp18 = this->up_style;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(200)
						int tmp19 = tmp18->border->color;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(200)
						tmp17->set_borderColor(tmp19);
						HX_STACK_LINE(201)
						::flixel::addons::ui::FlxUIText tmp20 = this->label;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(201)
						::flixel::addons::ui::ButtonLabelStyle tmp21 = this->up_style;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(201)
						int tmp22 = tmp21->border->size;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(201)
						tmp20->set_borderSize(tmp22);
						HX_STACK_LINE(202)
						::flixel::addons::ui::FlxUIText tmp23 = this->label;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(202)
						::flixel::addons::ui::ButtonLabelStyle tmp24 = this->up_style;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(202)
						Float tmp25 = tmp24->border->quality;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(202)
						tmp23->set_borderQuality(tmp25);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onUpHandler",0xc867c2c9,"flixel.addons.ui.FlxUIButton.onUpHandler","flixel/addons/ui/FlxUIButton.hx",209,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		this->super::onUpHandler();
		HX_STACK_LINE(211)
		::flixel::addons::ui::FlxUIText tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		if ((tmp1)){
			HX_STACK_LINE(212)
			bool tmp2 = this->toggled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			if ((tmp2)){
				HX_STACK_LINE(212)
				::flixel::addons::ui::ButtonLabelStyle tmp4 = this->up_toggle_style;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(212)
				tmp3 = (tmp5 != null());
			}
			else{
				HX_STACK_LINE(212)
				tmp3 = false;
			}
			HX_STACK_LINE(212)
			if ((tmp3)){
				HX_STACK_LINE(213)
				::flixel::addons::ui::FlxUIText tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(213)
				::flixel::addons::ui::ButtonLabelStyle tmp5 = this->up_toggle_style;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				Dynamic tmp6 = tmp5->color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				tmp4->set_color(tmp6);
				HX_STACK_LINE(214)
				::flixel::addons::ui::ButtonLabelStyle tmp7 = this->up_toggle_style;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				::flixel::addons::ui::BorderDef tmp8 = tmp7->border;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(214)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(214)
				if ((tmp9)){
					HX_STACK_LINE(215)
					::flixel::addons::ui::FlxUIText tmp10 = this->label;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(215)
					::flixel::addons::ui::ButtonLabelStyle tmp11 = this->up_toggle_style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(215)
					int tmp12 = tmp11->border->style;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					tmp10->set_borderStyle(tmp12);
					HX_STACK_LINE(216)
					::flixel::addons::ui::FlxUIText tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					::flixel::addons::ui::ButtonLabelStyle tmp14 = this->up_toggle_style;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(216)
					int tmp15 = tmp14->border->color;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(216)
					tmp13->set_borderColor(tmp15);
					HX_STACK_LINE(217)
					::flixel::addons::ui::FlxUIText tmp16 = this->label;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(217)
					::flixel::addons::ui::ButtonLabelStyle tmp17 = this->up_toggle_style;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(217)
					int tmp18 = tmp17->border->size;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(217)
					tmp16->set_borderSize(tmp18);
					HX_STACK_LINE(218)
					::flixel::addons::ui::FlxUIText tmp19 = this->label;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(218)
					::flixel::addons::ui::ButtonLabelStyle tmp20 = this->up_toggle_style;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(218)
					Float tmp21 = tmp20->border->quality;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(218)
					tmp19->set_borderQuality(tmp21);
				}
			}
			else{
				HX_STACK_LINE(220)
				bool tmp4 = this->toggled;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(220)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(220)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(220)
				if ((tmp6)){
					HX_STACK_LINE(220)
					::flixel::addons::ui::ButtonLabelStyle tmp8 = this->up_style;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(220)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(220)
					tmp7 = (tmp9 != null());
				}
				else{
					HX_STACK_LINE(220)
					tmp7 = false;
				}
				HX_STACK_LINE(220)
				if ((tmp7)){
					HX_STACK_LINE(221)
					::flixel::addons::ui::FlxUIText tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(221)
					::flixel::addons::ui::ButtonLabelStyle tmp9 = this->up_style;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(221)
					Dynamic tmp10 = tmp9->color;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(221)
					tmp8->set_color(tmp10);
					HX_STACK_LINE(222)
					::flixel::addons::ui::ButtonLabelStyle tmp11 = this->up_style;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(222)
					::flixel::addons::ui::BorderDef tmp12 = tmp11->border;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(222)
					bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(222)
					if ((tmp13)){
						HX_STACK_LINE(223)
						::flixel::addons::ui::FlxUIText tmp14 = this->label;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(223)
						::flixel::addons::ui::ButtonLabelStyle tmp15 = this->up_style;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(223)
						int tmp16 = tmp15->border->style;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(223)
						tmp14->set_borderStyle(tmp16);
						HX_STACK_LINE(224)
						::flixel::addons::ui::FlxUIText tmp17 = this->label;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(224)
						::flixel::addons::ui::ButtonLabelStyle tmp18 = this->up_style;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(224)
						int tmp19 = tmp18->border->color;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(224)
						tmp17->set_borderColor(tmp19);
						HX_STACK_LINE(225)
						::flixel::addons::ui::FlxUIText tmp20 = this->label;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(225)
						::flixel::addons::ui::ButtonLabelStyle tmp21 = this->up_style;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(225)
						int tmp22 = tmp21->border->size;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(225)
						tmp20->set_borderSize(tmp22);
						HX_STACK_LINE(226)
						::flixel::addons::ui::FlxUIText tmp23 = this->label;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(226)
						::flixel::addons::ui::ButtonLabelStyle tmp24 = this->up_style;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(226)
						Float tmp25 = tmp24->border->quality;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(226)
						tmp23->set_borderQuality(tmp25);
					}
				}
			}
		}
	}
return null();
}



FlxUIButton_obj::FlxUIButton_obj()
{
}

void FlxUIButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIButton);
	HX_MARK_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_MARK_MEMBER_NAME(up_style,"up_style");
	HX_MARK_MEMBER_NAME(over_style,"over_style");
	HX_MARK_MEMBER_NAME(down_style,"down_style");
	HX_MARK_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_MARK_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_MARK_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	::flixel::addons::ui::FlxUITypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_VISIT_MEMBER_NAME(up_style,"up_style");
	HX_VISIT_MEMBER_NAME(over_style,"over_style");
	HX_VISIT_MEMBER_NAME(down_style,"down_style");
	HX_VISIT_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_VISIT_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_VISIT_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	::flixel::addons::ui::FlxUITypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addIcon") ) { return addIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { return up_style; }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return setLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return getLabel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { return over_style; }
		if (HX_FIELD_EQ(inName,"down_style") ) { return down_style; }
		if (HX_FIELD_EQ(inName,"removeIcon") ) { return removeIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return changeIcon_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { return up_toggle_style; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { return over_toggle_style; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { return down_toggle_style; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { return _noIconGraphicsBkup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { up_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { over_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_style") ) { down_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { up_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { over_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { down_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { _noIconGraphicsBkup=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_noIconGraphicsBkup","\x68","\x7e","\x8a","\x62"));
	outFields->push(HX_HCSTRING("up_style","\x0d","\x09","\x77","\xd5"));
	outFields->push(HX_HCSTRING("over_style","\xc6","\x34","\x0b","\x31"));
	outFields->push(HX_HCSTRING("down_style","\x54","\x5a","\x74","\x88"));
	outFields->push(HX_HCSTRING("up_toggle_style","\xaa","\xa2","\xcd","\x16"));
	outFields->push(HX_HCSTRING("over_toggle_style","\x11","\x50","\x59","\xe4"));
	outFields->push(HX_HCSTRING("down_toggle_style","\x43","\x18","\x8a","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxUIButton_obj,_noIconGraphicsBkup),HX_HCSTRING("_noIconGraphicsBkup","\x68","\x7e","\x8a","\x62")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,up_style),HX_HCSTRING("up_style","\x0d","\x09","\x77","\xd5")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,over_style),HX_HCSTRING("over_style","\xc6","\x34","\x0b","\x31")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,down_style),HX_HCSTRING("down_style","\x54","\x5a","\x74","\x88")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,up_toggle_style),HX_HCSTRING("up_toggle_style","\xaa","\xa2","\xcd","\x16")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,over_toggle_style),HX_HCSTRING("over_toggle_style","\x11","\x50","\x59","\xe4")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,down_toggle_style),HX_HCSTRING("down_toggle_style","\x43","\x18","\x8a","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_noIconGraphicsBkup","\x68","\x7e","\x8a","\x62"),
	HX_HCSTRING("up_style","\x0d","\x09","\x77","\xd5"),
	HX_HCSTRING("over_style","\xc6","\x34","\x0b","\x31"),
	HX_HCSTRING("down_style","\x54","\x5a","\x74","\x88"),
	HX_HCSTRING("up_toggle_style","\xaa","\xa2","\xcd","\x16"),
	HX_HCSTRING("over_toggle_style","\x11","\x50","\x59","\xe4"),
	HX_HCSTRING("down_toggle_style","\x43","\x18","\x8a","\x40"),
	HX_HCSTRING("setLabel","\xf2","\x76","\xe3","\x7d"),
	HX_HCSTRING("getLabel","\x7e","\x1d","\x86","\xcf"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("addIcon","\x3a","\x2a","\xf0","\x81"),
	HX_HCSTRING("removeIcon","\xdd","\x21","\xd2","\xc2"),
	HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resetHelpers","\x36","\x89","\x3d","\x32"),
	HX_HCSTRING("onDownHandler","\xa9","\xac","\x21","\xcf"),
	HX_HCSTRING("onOverHandler","\xf7","\xf5","\x89","\xaa"),
	HX_HCSTRING("onOutHandler","\xdb","\x26","\xe5","\x9e"),
	HX_HCSTRING("onUpHandler","\x90","\xa5","\xd0","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUIButton_obj::__mClass;

void FlxUIButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIButton","\x27","\x4c","\x9c","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIButton_obj >;
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
