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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
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
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
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

Void FlxUITabMenu_obj::__construct(::flixel::FlxSprite back_,Array< ::Dynamic > tabs_,cpp::ArrayBase tab_ids_and_labels_,::flixel::util::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","new",0xc82b8b31,"flixel.addons.ui.FlxUITabMenu.new","flixel/addons/ui/FlxUITabMenu.hx",19,0x21d3489e)
HX_STACK_THIS(this)
HX_STACK_ARG(back_,"back_")
HX_STACK_ARG(tabs_,"tabs_")
HX_STACK_ARG(tab_ids_and_labels_,"tab_ids_and_labels_")
HX_STACK_ARG(tab_offset,"tab_offset")
HX_STACK_ARG(__o_stretch_tabs,"stretch_tabs")
HX_STACK_ARG(tab_spacing,"tab_spacing")
HX_STACK_ARG(tab_stacking,"tab_stacking")
Dynamic stretch_tabs = __o_stretch_tabs.Default(false);
{
	HX_STACK_LINE(275)
	this->_selected_tab = (int)-1;
	HX_STACK_LINE(274)
	this->_selected_tab_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(272)
	this->_tab_offset = null();
	HX_STACK_LINE(271)
	this->_tab_stacking = null();
	HX_STACK_LINE(270)
	this->_tab_spacing = null();
	HX_STACK_LINE(269)
	this->_stretch_tabs = false;
	HX_STACK_LINE(105)
	super::__construct(null(),null());
	HX_STACK_LINE(107)
	bool tmp = (back_ == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	if ((tmp)){
		HX_STACK_LINE(109)
		::openfl::_legacy::geom::Rectangle tmp1 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,(int)200,(int)200);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::flixel::addons::ui::FlxUI9SliceSprite tmp2 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_HCSTRING("flixel/flixel-ui/img/chrome_flat.png","\x30","\xcf","\x0a","\x80"),tmp1,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		back_ = tmp2;
	}
	HX_STACK_LINE(112)
	this->_back = back_;
	HX_STACK_LINE(113)
	::flixel::FlxSprite tmp1 = this->_back;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	this->add(tmp1);
	HX_STACK_LINE(115)
	bool tmp2 = (tabs_ == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	if ((tmp2)){
		HX_STACK_LINE(116)
		bool tmp3 = (tab_ids_and_labels_ != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		if ((tmp3)){
			HX_STACK_LINE(117)
			tabs_ = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				while((true)){
					HX_STACK_LINE(120)
					bool tmp4 = (_g < tab_ids_and_labels_->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(120)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(120)
					if ((tmp5)){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(120)
					Dynamic tmp6 = tab_ids_and_labels_->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(120)
					Dynamic tdata = tmp6;		HX_STACK_VAR(tdata,"tdata");
					HX_STACK_LINE(120)
					++(_g);
					HX_STACK_LINE(122)
					::flixel::addons::ui::FlxUIButton tmp7 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,tdata->__Field(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(122)
					::flixel::addons::ui::FlxUIButton fb = tmp7;		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(125)
					fb->up_color = (int)16777215;
					HX_STACK_LINE(126)
					fb->down_color = (int)16777215;
					HX_STACK_LINE(127)
					fb->over_color = (int)16777215;
					HX_STACK_LINE(128)
					fb->up_toggle_color = (int)16777215;
					HX_STACK_LINE(129)
					fb->down_toggle_color = (int)16777215;
					HX_STACK_LINE(130)
					fb->over_toggle_color = (int)16777215;
					HX_STACK_LINE(132)
					fb->label->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )((int)16777215);
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						::flixel::addons::ui::FlxUIText _this = fb->label;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(133)
						int Color = (int)0;		HX_STACK_VAR(Color,"Color");
						HX_STACK_LINE(133)
						Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
						HX_STACK_LINE(133)
						Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
						HX_STACK_LINE(133)
						_this->set_borderStyle((int)2);
						HX_STACK_LINE(133)
						int tmp8 = Color;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(133)
						_this->set_borderColor(tmp8);
						HX_STACK_LINE(133)
						Float tmp9 = Size;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(133)
						_this->set_borderSize(tmp9);
						HX_STACK_LINE(133)
						Float tmp10 = Quality;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(133)
						_this->set_borderQuality(tmp10);
					}
					HX_STACK_LINE(135)
					fb->id = tdata->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
					HX_STACK_LINE(138)
					Array< ::String > graphic_ids = Array_obj< ::String >::__new().Add(HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04")).Add(HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04"));		HX_STACK_VAR(graphic_ids,"graphic_ids");
					HX_STACK_LINE(139)
					Array< int > slice9tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07"));		HX_STACK_VAR(slice9tab,"slice9tab");
					HX_STACK_LINE(140)
					Array< ::Dynamic > slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab);		HX_STACK_VAR(slice9_ids,"slice9_ids");
					HX_STACK_LINE(141)
					fb->loadGraphicSlice9(graphic_ids,(int)0,(int)0,slice9_ids,(int)0,(int)-1,true,null(),null(),null());
					HX_STACK_LINE(142)
					::flixel::addons::ui::FlxUIButton tmp8 = fb;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(142)
					tabs_->push(tmp8);
				}
			}
		}
	}
	HX_STACK_LINE(147)
	this->_tabs = tabs_;
	HX_STACK_LINE(148)
	this->_stretch_tabs = stretch_tabs;
	HX_STACK_LINE(149)
	this->_tab_spacing = tab_spacing;
	HX_STACK_LINE(150)
	this->_tab_stacking = tab_stacking;
	HX_STACK_LINE(151)
	bool tmp3 = (this->_tab_stacking == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	if ((tmp3)){
		HX_STACK_LINE(152)
		this->_tab_stacking = Array_obj< ::String >::__new().Add(HX_HCSTRING("front","\xa9","\x18","\x8e","\x06")).Add(HX_HCSTRING("back","\x27","\xda","\x10","\x41"));
	}
	HX_STACK_LINE(154)
	this->_tab_offset = tab_offset;
	HX_STACK_LINE(156)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(157)
	::flixel::addons::ui::FlxUIButton tab;		HX_STACK_VAR(tab,"tab");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		while((true)){
			HX_STACK_LINE(158)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			if ((tmp5)){
				HX_STACK_LINE(158)
				break;
			}
			HX_STACK_LINE(158)
			::flixel::addons::ui::FlxUIButton tmp6 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			::flixel::addons::ui::FlxUIButton tab1 = tmp6;		HX_STACK_VAR(tab1,"tab1");
			HX_STACK_LINE(158)
			++(_g);
			HX_STACK_LINE(159)
			::flixel::addons::ui::FlxUIButton tmp7 = tab1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			this->add(tmp7);
			HX_STACK_LINE(160)
			Dynamic tmp8 = this->_onTabEvent_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			::String tmp9 = tab1->id;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				Dynamic f = tmp8;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(160)
				::String id = tmp9;		HX_STACK_VAR(id,"id");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,f,::String,id)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","flixel/addons/ui/FlxUITabMenu.hx",160,0x21d3489e)
					{
						HX_STACK_LINE(160)
						::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(160)
						f(tmp11).Cast< Void >();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(160)
				tmp10 =  Dynamic(new _Function_4_1(f,id));
			}
			HX_STACK_LINE(160)
			tab1->onUp->callback = tmp10;
			HX_STACK_LINE(161)
			(i)++;
		}
	}
	HX_STACK_LINE(164)
	this->distributeTabs();
	HX_STACK_LINE(166)
	this->_tab_groups = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//FlxUITabMenu_obj::~FlxUITabMenu_obj() { }

Dynamic FlxUITabMenu_obj::__CreateEmpty() { return  new FlxUITabMenu_obj; }
hx::ObjectPtr< FlxUITabMenu_obj > FlxUITabMenu_obj::__new(::flixel::FlxSprite back_,Array< ::Dynamic > tabs_,cpp::ArrayBase tab_ids_and_labels_,::flixel::util::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking)
{  hx::ObjectPtr< FlxUITabMenu_obj > _result_ = new FlxUITabMenu_obj();
	_result_->__construct(back_,tabs_,tab_ids_and_labels_,tab_offset,__o_stretch_tabs,tab_spacing,tab_stacking);
	return _result_;}

Dynamic FlxUITabMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITabMenu_obj > _result_ = new FlxUITabMenu_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

hx::Object *FlxUITabMenu_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IEventGetter_obj)) return operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

FlxUITabMenu_obj::operator ::flixel::addons::ui::interfaces::IEventGetter_obj *()
	{ return new ::flixel::addons::ui::interfaces::IEventGetter_delegate_< FlxUITabMenu_obj >(this); }
FlxUITabMenu_obj::operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIClickable_delegate_< FlxUITabMenu_obj >(this); }
FlxUITabMenu_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUITabMenu_obj >(this); }
Void FlxUITabMenu_obj::getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getEvent",0x34184733,"flixel.addons.ui.FlxUITabMenu.getEvent","flixel/addons/ui/FlxUITabMenu.hx",28,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getEvent,(void))

Dynamic FlxUITabMenu_obj::getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getRequest",0xde0916a8,"flixel.addons.ui.FlxUITabMenu.getRequest","flixel/addons/ui/FlxUITabMenu.hx",34,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getRequest,return )

bool FlxUITabMenu_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_skipButtonUpdate",0x94812946,"flixel.addons.ui.FlxUITabMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUITabMenu.hx",40,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(41)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(42)
	::flixel::addons::ui::FlxUIButton tab;		HX_STACK_VAR(tab,"tab");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			if ((tmp1)){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			::flixel::addons::ui::FlxUIButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			::flixel::addons::ui::FlxUIButton tab1 = tmp2;		HX_STACK_VAR(tab1,"tab1");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(44)
			bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			tab1->set_skipButtonUpdate(tmp3);
		}
	}
	HX_STACK_LINE(46)
	::flixel::addons::ui::FlxUIGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(47)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			if ((tmp1)){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			::flixel::addons::ui::FlxUIGroup tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(47)
			::flixel::addons::ui::FlxUIGroup group1 = tmp2;		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(47)
			++(_g);
			HX_STACK_LINE(48)
			::flixel::FlxSprite sprite;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(49)
				Array< ::Dynamic > _g3 = group1->group->members;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(49)
				while((true)){
					HX_STACK_LINE(49)
					bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(49)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(49)
					if ((tmp4)){
						HX_STACK_LINE(49)
						break;
					}
					HX_STACK_LINE(49)
					::flixel::FlxSprite tmp5 = _g3->__get(_g2).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(49)
					::flixel::FlxSprite sprite1 = tmp5;		HX_STACK_VAR(sprite1,"sprite1");
					HX_STACK_LINE(49)
					++(_g2);
					HX_STACK_LINE(50)
					::flixel::FlxSprite tmp6 = sprite1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(50)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(50)
					if ((tmp7)){
						HX_STACK_LINE(51)
						::flixel::addons::ui::interfaces::IFlxUIClickable widget = ((::flixel::addons::ui::interfaces::IFlxUIClickable)(sprite1));		HX_STACK_VAR(widget,"widget");
						HX_STACK_LINE(52)
						bool tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(52)
						widget->set_skipButtonUpdate(tmp8);
					}
				}
			}
		}
	}
	HX_STACK_LINE(56)
	bool tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_skipButtonUpdate,return )

Float FlxUITabMenu_obj::get_width( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_width",0x5c713fee,"flixel.addons.ui.FlxUITabMenu.get_width","flixel/addons/ui/FlxUITabMenu.hx",61,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::flixel::FlxSprite tmp = this->_back;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


Float FlxUITabMenu_obj::get_height( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_height",0x3cf628ff,"flixel.addons.ui.FlxUITabMenu.get_height","flixel/addons/ui/FlxUITabMenu.hx",65,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::flixel::addons::ui::FlxUIButton tmp = this->getFirstTab();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::flixel::addons::ui::FlxUIButton fbt = tmp;		HX_STACK_VAR(fbt,"fbt");
	HX_STACK_LINE(67)
	bool tmp1 = (fbt != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	if ((tmp1)){
		HX_STACK_LINE(68)
		::flixel::FlxSprite tmp2 = this->_back;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		::flixel::FlxSprite tmp4 = this->_back;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		Float tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		Float tmp7 = fbt->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		return tmp8;
	}
	HX_STACK_LINE(70)
	::flixel::FlxSprite tmp2 = this->_back;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	return tmp3;
}


Void FlxUITabMenu_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","resize",0xfcd977c3,"flixel.addons.ui.FlxUITabMenu.resize","flixel/addons/ui/FlxUITabMenu.hx",73,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(74)
		::flixel::addons::ui::interfaces::IResizable ir;		HX_STACK_VAR(ir,"ir");
		HX_STACK_LINE(75)
		::flixel::FlxSprite tmp = this->_back;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(76)
			::flixel::FlxSprite tmp2 = this->_back;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			ir = ((::flixel::addons::ui::interfaces::IResizable)(tmp2));
			HX_STACK_LINE(77)
			::flixel::addons::ui::FlxUIButton tmp3 = this->getFirstTab();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			::flixel::addons::ui::FlxUIButton fbt = tmp3;		HX_STACK_VAR(fbt,"fbt");
			HX_STACK_LINE(78)
			bool tmp4 = (fbt != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			if ((tmp4)){
				HX_STACK_LINE(79)
				Float tmp5 = W;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				Float tmp6 = H;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				Float tmp7 = fbt->get_height();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				ir->resize(tmp5,tmp8);
			}
			else{
				HX_STACK_LINE(81)
				Float tmp5 = W;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				Float tmp6 = H;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				ir->resize(tmp5,tmp6);
			}
		}
		HX_STACK_LINE(84)
		this->distributeTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,resize,(void))

int FlxUITabMenu_obj::get_selected_tab( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_selected_tab",0xa5609649,"flixel.addons.ui.FlxUITabMenu.get_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",88,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	int tmp = this->_selected_tab;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab,return )

int FlxUITabMenu_obj::set_selected_tab( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_selected_tab",0xfba283bd,"flixel.addons.ui.FlxUITabMenu.set_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",89,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(90)
	int tmp = i;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	this->showTabInt(tmp);
	HX_STACK_LINE(91)
	int tmp1 = this->_selected_tab;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab,return )

::String FlxUITabMenu_obj::get_selected_tab_id( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_selected_tab_id",0x4d2a2f51,"flixel.addons.ui.FlxUITabMenu.get_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",95,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	::String tmp = this->_selected_tab_id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab_id,return )

::String FlxUITabMenu_obj::set_selected_tab_id( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_selected_tab_id",0x89c7225d,"flixel.addons.ui.FlxUITabMenu.set_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",96,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(97)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	this->showTabId(tmp);
	HX_STACK_LINE(98)
	::String tmp1 = this->_selected_tab_id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab_id,return )

Void FlxUITabMenu_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","destroy",0x0282244b,"flixel.addons.ui.FlxUITabMenu.destroy","flixel/addons/ui/FlxUITabMenu.hx",169,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		this->super::destroy();
		HX_STACK_LINE(171)
		::flixel::addons::ui::U_obj::clearArray(this->_tab_groups);
		HX_STACK_LINE(172)
		::flixel::addons::ui::U_obj::clearArray(this->_tabs);
		HX_STACK_LINE(173)
		this->_back = null();
		HX_STACK_LINE(174)
		this->_tabs = null();
		HX_STACK_LINE(175)
		this->_tab_groups = null();
	}
return null();
}


::flixel::addons::ui::FlxUIButton FlxUITabMenu_obj::getTab( ::String id,Dynamic index){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getTab",0x9785b12e,"flixel.addons.ui.FlxUITabMenu.getTab","flixel/addons/ui/FlxUITabMenu.hx",178,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(179)
	bool tmp = (id != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	if ((tmp)){
		HX_STACK_LINE(180)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(180)
		while((true)){
			HX_STACK_LINE(180)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(180)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			if ((tmp2)){
				HX_STACK_LINE(180)
				break;
			}
			HX_STACK_LINE(180)
			::flixel::addons::ui::FlxUIButton tmp3 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			::flixel::addons::ui::FlxUIButton tab = tmp3;		HX_STACK_VAR(tab,"tab");
			HX_STACK_LINE(180)
			++(_g);
			HX_STACK_LINE(181)
			bool tmp4 = (tab->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			if ((tmp4)){
				HX_STACK_LINE(182)
				::flixel::addons::ui::FlxUIButton tmp5 = tab;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(182)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(186)
	bool tmp1 = (index != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	if ((tmp1)){
		HX_STACK_LINE(187)
		Dynamic tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		int tmp3 = this->_tabs->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		if ((tmp4)){
			HX_STACK_LINE(188)
			::flixel::addons::ui::FlxUIButton tmp5 = this->_tabs->__get(index).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			return tmp5;
		}
	}
	HX_STACK_LINE(191)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTab,return )

::flixel::addons::ui::FlxUIGroup FlxUITabMenu_obj::getTabGroup( ::String id,Dynamic index){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getTabGroup",0xc2c56b31,"flixel.addons.ui.FlxUITabMenu.getTabGroup","flixel/addons/ui/FlxUITabMenu.hx",194,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(195)
	::flixel::addons::ui::FlxUIGroup tabGroup;		HX_STACK_VAR(tabGroup,"tabGroup");
	HX_STACK_LINE(196)
	bool tmp = (id != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	if ((tmp)){
		HX_STACK_LINE(197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			if ((tmp2)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(197)
			::flixel::addons::ui::FlxUIGroup tmp3 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			::flixel::addons::ui::FlxUIGroup tabGroup1 = tmp3;		HX_STACK_VAR(tabGroup1,"tabGroup1");
			HX_STACK_LINE(197)
			++(_g);
			HX_STACK_LINE(198)
			bool tmp4 = (tabGroup1->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			if ((tmp4)){
				HX_STACK_LINE(199)
				::flixel::addons::ui::FlxUIGroup tmp5 = tabGroup1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(199)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(203)
	bool tmp1 = (index != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(204)
		Dynamic tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		int tmp3 = this->_tab_groups->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		if ((tmp4)){
			HX_STACK_LINE(205)
			::flixel::addons::ui::FlxUIGroup tmp5 = this->_tab_groups->__get(index).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			return tmp5;
		}
	}
	HX_STACK_LINE(208)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTabGroup,return )

Void FlxUITabMenu_obj::addGroup( ::flixel::addons::ui::FlxUIGroup g){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","addGroup",0x71ce48ed,"flixel.addons.ui.FlxUITabMenu.addGroup","flixel/addons/ui/FlxUITabMenu.hx",211,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(212)
		bool tmp = (g == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		if ((tmp)){
			HX_STACK_LINE(213)
			return null();
		}
		HX_STACK_LINE(216)
		::flixel::addons::ui::FlxUIGroup tmp1 = g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		bool tmp2 = this->hasThis(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		if ((tmp3)){
			HX_STACK_LINE(217)
			::flixel::FlxSprite tmp4 = this->_back;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			g->set_y(tmp7);
			HX_STACK_LINE(218)
			::flixel::addons::ui::FlxUIGroup tmp8 = g;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			this->add(tmp8);
			HX_STACK_LINE(219)
			::flixel::addons::ui::FlxUIGroup tmp9 = g;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			this->_tab_groups->push(tmp9);
		}
		HX_STACK_LINE(223)
		this->_showOnlyGroup(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(226)
		int tmp4 = this->_tab_groups->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		bool tmp5 = (tmp4 == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		if ((tmp5)){
			HX_STACK_LINE(227)
			this->set_selected_tab((int)0);
		}
		HX_STACK_LINE(231)
		int tmp6 = this->_selected_tab;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(231)
		bool tmp7 = (tmp6 != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(231)
		if ((tmp7)){
			HX_STACK_LINE(232)
			int tmp8 = this->_selected_tab;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(232)
			this->set_selected_tab(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,addGroup,(void))

Void FlxUITabMenu_obj::_onTabEvent( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","_onTabEvent",0x28e25eb4,"flixel.addons.ui.FlxUITabMenu._onTabEvent","flixel/addons/ui/FlxUITabMenu.hx",236,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(237)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		this->showTabId(tmp);
		HX_STACK_LINE(238)
		bool tmp1 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		if ((tmp1)){
			HX_STACK_LINE(239)
			::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("tab_menu_click","\x52","\xa3","\x80","\x94"),hx::ObjectPtr<OBJ_>(this),tmp2,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_onTabEvent,(void))

Void FlxUITabMenu_obj::showTabId( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","showTabId",0x87ad2ce4,"flixel.addons.ui.FlxUITabMenu.showTabId","flixel/addons/ui/FlxUITabMenu.hx",243,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(245)
		this->_selected_tab = (int)-1;
		HX_STACK_LINE(246)
		this->_selected_tab_id = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(248)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(249)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(249)
				if ((tmp1)){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				::flixel::addons::ui::FlxUIButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(249)
				::flixel::addons::ui::FlxUIButton tab = tmp2;		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(249)
				++(_g);
				HX_STACK_LINE(250)
				tab->toggled = false;
				HX_STACK_LINE(251)
				tab->forceStateHandler(HX_HCSTRING("out_button","\xc3","\x20","\xd2","\xfb"));
				HX_STACK_LINE(252)
				bool tmp3 = (tab->id == id);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(252)
				if ((tmp3)){
					HX_STACK_LINE(253)
					tab->toggled = true;
					HX_STACK_LINE(254)
					this->_selected_tab_id = id;
					HX_STACK_LINE(255)
					this->_selected_tab = i;
				}
				HX_STACK_LINE(257)
				(i)++;
			}
		}
		HX_STACK_LINE(260)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		this->_showOnlyGroup(tmp);
		HX_STACK_LINE(261)
		this->stackTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabId,(void))

Void FlxUITabMenu_obj::stackTabs( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","stackTabs",0x2659b577,"flixel.addons.ui.FlxUITabMenu.stackTabs","flixel/addons/ui/FlxUITabMenu.hx",277,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(278)
		::flixel::FlxSprite tmp = this->_back;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		Float _backx = tmp->x;		HX_STACK_VAR(_backx,"_backx");
		HX_STACK_LINE(279)
		::flixel::FlxSprite tmp1 = this->_back;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		Float _backy = tmp1->y;		HX_STACK_VAR(_backy,"_backy");
		HX_STACK_LINE(281)
		Array< ::Dynamic > _tabPts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_tabPts,"_tabPts");
		HX_STACK_LINE(283)
		::flixel::FlxSprite tmp2 = this->_back;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		this->remove(tmp2,true);
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				if ((tmp4)){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				::flixel::addons::ui::FlxUIButton tmp5 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				::flixel::addons::ui::FlxUIButton tab = tmp5;		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(285)
				++(_g);
				HX_STACK_LINE(286)
				bool tmp6 = tab->toggled;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(286)
				if ((tmp6)){
					HX_STACK_LINE(287)
					::flixel::util::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						::flixel::util::FlxPool tmp8 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(287)
						::flixel::util::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(287)
						Float tmp10 = tab->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(287)
						Float tmp11 = tab->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(287)
						::flixel::util::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(287)
						::flixel::util::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(287)
						point->_inPool = false;
						HX_STACK_LINE(287)
						tmp7 = point;
					}
					HX_STACK_LINE(287)
					_tabPts->push(tmp7);
					HX_STACK_LINE(288)
					::flixel::addons::ui::FlxUIButton tmp8 = tab;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(288)
					this->remove(tmp8,true);
				}
			}
		}
		HX_STACK_LINE(292)
		::flixel::FlxSprite tmp3 = this->_back;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		this->add(tmp3);
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(294)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(294)
			while((true)){
				HX_STACK_LINE(294)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(294)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(294)
				if ((tmp5)){
					HX_STACK_LINE(294)
					break;
				}
				HX_STACK_LINE(294)
				::flixel::addons::ui::FlxUIButton tmp6 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(294)
				::flixel::addons::ui::FlxUIButton tab = tmp6;		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(294)
				++(_g);
				HX_STACK_LINE(295)
				bool tmp7 = tab->toggled;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(295)
				if ((tmp7)){
					HX_STACK_LINE(296)
					::flixel::addons::ui::FlxUIButton tmp8 = tab;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(296)
					this->add(tmp8);
					HX_STACK_LINE(297)
					::flixel::util::FlxPoint tmp9 = _tabPts->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(297)
					Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(297)
					tab->set_x(tmp10);
					HX_STACK_LINE(298)
					::flixel::util::FlxPoint tmp11 = _tabPts->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(298)
					Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(298)
					tab->set_y(tmp12);
					HX_STACK_LINE(299)
					::flixel::util::FlxPoint tmp13 = _tabPts->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(299)
					tmp13->put();
					HX_STACK_LINE(300)
					_tabPts->splice((int)0,(int)1);
				}
			}
		}
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(305)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(305)
				if ((tmp5)){
					HX_STACK_LINE(305)
					break;
				}
				HX_STACK_LINE(305)
				::flixel::addons::ui::FlxUIGroup tmp6 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(305)
				::flixel::addons::ui::FlxUIGroup group = tmp6;		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(305)
				++(_g);
				HX_STACK_LINE(306)
				Float tempX = group->x;		HX_STACK_VAR(tempX,"tempX");
				HX_STACK_LINE(307)
				Float tempY = group->y;		HX_STACK_VAR(tempY,"tempY");
				HX_STACK_LINE(308)
				::flixel::addons::ui::FlxUIGroup tmp7 = group;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(308)
				this->remove(tmp7,true);
				HX_STACK_LINE(309)
				::flixel::addons::ui::FlxUIGroup tmp8 = group;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				this->add(tmp8);
				HX_STACK_LINE(310)
				Float tmp9 = tempX;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(310)
				group->set_x(tmp9);
				HX_STACK_LINE(311)
				Float tmp10 = tempY;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(311)
				group->set_y(tmp10);
			}
		}
		HX_STACK_LINE(314)
		::flixel::FlxSprite tmp4 = this->_back;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		Float tmp5 = _backx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		tmp4->set_x(tmp5);
		HX_STACK_LINE(315)
		::flixel::FlxSprite tmp6 = this->_back;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(315)
		Float tmp7 = _backy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(315)
		tmp6->set_y(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,stackTabs,(void))

int FlxUITabMenu_obj::sortTabs( ::flixel::addons::ui::FlxUIButton a,::flixel::addons::ui::FlxUIButton b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","sortTabs",0xaeee7a8b,"flixel.addons.ui.FlxUITabMenu.sortTabs","flixel/addons/ui/FlxUITabMenu.hx",318,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(319)
	bool tmp = (a->id < b->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(319)
	if ((tmp)){
		HX_STACK_LINE(320)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(321)
		bool tmp1 = (a->id > b->id);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		if ((tmp1)){
			HX_STACK_LINE(322)
			return (int)1;
		}
	}
	HX_STACK_LINE(324)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,sortTabs,return )

Void FlxUITabMenu_obj::showTabInt( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","showTabInt",0x2fda23c6,"flixel.addons.ui.FlxUITabMenu.showTabInt","flixel/addons/ui/FlxUITabMenu.hx",327,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(328)
		bool tmp = (i >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(328)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		if ((tmp1)){
			HX_STACK_LINE(328)
			tmp2 = (this->_tabs != null());
		}
		else{
			HX_STACK_LINE(328)
			tmp2 = false;
		}
		HX_STACK_LINE(328)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		if ((tmp2)){
			HX_STACK_LINE(328)
			int tmp4 = this->_tabs->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(328)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(328)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(328)
			tmp3 = (tmp5 > tmp6);
		}
		else{
			HX_STACK_LINE(328)
			tmp3 = false;
		}
		HX_STACK_LINE(328)
		if ((tmp3)){
			HX_STACK_LINE(329)
			::flixel::addons::ui::FlxUIButton tmp4 = this->_tabs->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			::flixel::addons::ui::FlxUIButton _tab = tmp4;		HX_STACK_VAR(_tab,"_tab");
			HX_STACK_LINE(330)
			::String id = _tab->id;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(331)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(331)
			this->showTabId(tmp5);
		}
		else{
			HX_STACK_LINE(333)
			this->showTabId(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabInt,(void))

Void FlxUITabMenu_obj::_showOnlyGroup( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","_showOnlyGroup",0xbe9f6e86,"flixel.addons.ui.FlxUITabMenu._showOnlyGroup","flixel/addons/ui/FlxUITabMenu.hx",338,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(338)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(338)
		while((true)){
			HX_STACK_LINE(338)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(338)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(338)
			if ((tmp1)){
				HX_STACK_LINE(338)
				break;
			}
			HX_STACK_LINE(338)
			::flixel::addons::ui::FlxUIGroup tmp2 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(338)
			::flixel::addons::ui::FlxUIGroup group = tmp2;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(338)
			++(_g);
			HX_STACK_LINE(339)
			bool tmp3 = (group->id == id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			if ((tmp3)){
				HX_STACK_LINE(340)
				bool tmp4 = group->set_active(true);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(340)
				group->set_visible(tmp4);
			}
			else{
				HX_STACK_LINE(342)
				bool tmp4 = group->set_active(false);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(342)
				group->set_visible(tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_showOnlyGroup,(void))

::flixel::addons::ui::FlxUIButton FlxUITabMenu_obj::getFirstTab( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getFirstTab",0xab440e8c,"flixel.addons.ui.FlxUITabMenu.getFirstTab","flixel/addons/ui/FlxUITabMenu.hx",347,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	::flixel::addons::ui::FlxUIButton _the_tab = null();		HX_STACK_VAR(_the_tab,"_the_tab");
	HX_STACK_LINE(349)
	bool tmp = (this->_tabs != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(349)
	if ((tmp)){
		HX_STACK_LINE(349)
		int tmp2 = this->_tabs->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(349)
		tmp1 = false;
	}
	HX_STACK_LINE(349)
	if ((tmp1)){
		HX_STACK_LINE(350)
		::flixel::addons::ui::FlxUIButton tmp2 = this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		_the_tab = tmp2;
	}
	HX_STACK_LINE(352)
	::flixel::addons::ui::FlxUIButton tmp2 = _the_tab;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(352)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,getFirstTab,return )

Void FlxUITabMenu_obj::distributeTabs( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","distributeTabs",0xcf609f0e,"flixel.addons.ui.FlxUITabMenu.distributeTabs","flixel/addons/ui/FlxUITabMenu.hx",355,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		Float xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(358)
		Float tab_width = (int)0;		HX_STACK_VAR(tab_width,"tab_width");
		HX_STACK_LINE(360)
		Float diff_size = (int)0;		HX_STACK_VAR(diff_size,"diff_size");
		HX_STACK_LINE(361)
		bool tmp = this->_stretch_tabs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		if ((tmp)){
			HX_STACK_LINE(362)
			::flixel::FlxSprite tmp1 = this->_back;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(362)
			Float tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(362)
			int tmp3 = this->_tabs->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			tab_width = tmp4;
			HX_STACK_LINE(363)
			Float tmp5 = tab_width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			int tmp7 = this->_tabs->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(363)
			int tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(363)
			Float tot_size = tmp8;		HX_STACK_VAR(tot_size,"tot_size");
			HX_STACK_LINE(364)
			Float tmp9 = tot_size;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(364)
			::flixel::FlxSprite tmp10 = this->_back;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(364)
			Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(364)
			bool tmp12 = (tmp9 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(364)
			if ((tmp12)){
				HX_STACK_LINE(365)
				::flixel::FlxSprite tmp13 = this->_back;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(365)
				Float tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(365)
				Float tmp15 = tot_size;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(365)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(365)
				diff_size = tmp16;
			}
		}
		HX_STACK_LINE(369)
		Dynamic tmp1 = this->sortTabs_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(369)
		this->_tabs->sort(tmp1);
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(371)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(371)
				if ((tmp3)){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				::flixel::addons::ui::FlxUIButton tmp4 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(371)
				::flixel::addons::ui::FlxUIButton tab = tmp4;		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(371)
				++(_g);
				HX_STACK_LINE(373)
				Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(373)
				Float tmp6 = xx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(373)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				tab->set_x(tmp7);
				HX_STACK_LINE(374)
				Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(374)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(374)
				tab->set_y(tmp9);
				HX_STACK_LINE(376)
				::flixel::util::FlxPoint tmp10 = this->_tab_offset;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(376)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(376)
				if ((tmp11)){
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::flixel::addons::ui::FlxUIButton _g2 = tab;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(377)
						Float tmp12 = _g2->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(377)
						::flixel::util::FlxPoint tmp13 = this->_tab_offset;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(377)
						Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(377)
						Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(377)
						_g2->set_x(tmp15);
					}
					HX_STACK_LINE(378)
					{
						HX_STACK_LINE(378)
						::flixel::addons::ui::FlxUIButton _g2 = tab;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(378)
						Float tmp12 = _g2->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(378)
						::flixel::util::FlxPoint tmp13 = this->_tab_offset;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(378)
						Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(378)
						Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(378)
						_g2->set_y(tmp15);
					}
				}
				HX_STACK_LINE(381)
				bool tmp12 = this->_stretch_tabs;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(381)
				if ((tmp12)){
					HX_STACK_LINE(382)
					bool tmp13 = (diff_size > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(382)
					if ((tmp13)){
						HX_STACK_LINE(383)
						Float tmp14 = (tab_width + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(383)
						Float tmp15 = tab->get_height();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(383)
						tab->resize(tmp14,tmp15);
						HX_STACK_LINE(384)
						Float tmp16 = tab_width;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(384)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(384)
						int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(384)
						hx::AddEq(xx,tmp18);
						HX_STACK_LINE(385)
						hx::SubEq(diff_size,(int)1);
					}
					else{
						HX_STACK_LINE(387)
						Float tmp14 = tab_width;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(387)
						Float tmp15 = tab->get_height();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(387)
						tab->resize(tmp14,tmp15);
						HX_STACK_LINE(388)
						Float tmp16 = tab_width;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(388)
						int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(388)
						hx::AddEq(xx,tmp17);
					}
				}
				else{
					HX_STACK_LINE(391)
					Dynamic tmp13 = this->_tab_spacing;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(391)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(391)
					if ((tmp14)){
						HX_STACK_LINE(392)
						Float tmp15 = tab->get_width();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(392)
						Dynamic tmp16 = this->_tab_spacing;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(392)
						Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(392)
						hx::AddEq(xx,tmp17);
					}
					else{
						HX_STACK_LINE(394)
						Float tmp15 = tab->get_width();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(394)
						hx::AddEq(xx,tmp15);
					}
				}
			}
		}
		HX_STACK_LINE(399)
		bool tmp2 = (this->_tabs != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		if ((tmp3)){
			HX_STACK_LINE(399)
			int tmp5 = this->_tabs->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(399)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			tmp4 = (tmp7 > (int)0);
		}
		else{
			HX_STACK_LINE(399)
			tmp4 = false;
		}
		HX_STACK_LINE(399)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(399)
		if ((tmp4)){
			HX_STACK_LINE(399)
			::flixel::addons::ui::FlxUIButton tmp6 = this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(399)
			::flixel::addons::ui::FlxUIButton tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(399)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(399)
			tmp5 = false;
		}
		HX_STACK_LINE(399)
		if ((tmp5)){
			HX_STACK_LINE(400)
			::flixel::FlxSprite tmp6 = this->_back;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(400)
			::flixel::addons::ui::FlxUIButton tmp7 = this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(400)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(400)
			::flixel::addons::ui::FlxUIButton tmp9 = this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(400)
			Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(400)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(400)
			Float tmp12 = (tmp11 - (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(400)
			tmp6->set_y(tmp12);
			HX_STACK_LINE(401)
			::flixel::util::FlxPoint tmp13 = this->_tab_offset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(401)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(401)
			if ((tmp14)){
				HX_STACK_LINE(402)
				::flixel::FlxSprite tmp15 = this->_back;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(402)
				::flixel::FlxSprite _g = tmp15;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(402)
				Float tmp16 = _g->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(402)
				::flixel::util::FlxPoint tmp17 = this->_tab_offset;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(402)
				Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(402)
				Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(402)
				_g->set_y(tmp19);
			}
		}
		HX_STACK_LINE(406)
		this->calcBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,distributeTabs,(void))

::String FlxUITabMenu_obj::CLICK_EVENT;

::String FlxUITabMenu_obj::STACK_FRONT;

::String FlxUITabMenu_obj::STACK_BACK;


FlxUITabMenu_obj::FlxUITabMenu_obj()
{
}

void FlxUITabMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITabMenu);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_MARK_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_MARK_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_MARK_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_MARK_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_MARK_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_MARK_MEMBER_NAME(_selected_tab,"_selected_tab");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITabMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_VISIT_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_VISIT_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_VISIT_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_VISIT_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_VISIT_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_VISIT_MEMBER_NAME(_selected_tab,"_selected_tab");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUITabMenu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { return _tabs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"getTab") ) { return getTab_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return getEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addGroup") ) { return addGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"sortTabs") ) { return sortTabs_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"showTabId") ) { return showTabId_dyn(); }
		if (HX_FIELD_EQ(inName,"stackTabs") ) { return stackTabs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRequest") ) { return getRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"showTabInt") ) { return showTabInt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getTabGroup") ) { return getTabGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTabEvent") ) { return _onTabEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { return _tab_groups; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { return _tab_offset; }
		if (HX_FIELD_EQ(inName,"getFirstTab") ) { return getFirstTab_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { if (inCallProp == hx::paccAlways) return get_selected_tab(); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { return _tab_spacing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { return _stretch_tabs; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { return _tab_stacking; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { return _selected_tab; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_showOnlyGroup") ) { return _showOnlyGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"distributeTabs") ) { return distributeTabs_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { if (inCallProp == hx::paccAlways) return get_selected_tab_id(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		if (HX_FIELD_EQ(inName,"get_selected_tab") ) { return get_selected_tab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected_tab") ) { return set_selected_tab_dyn(); }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { return _selected_tab_id; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_selected_tab_id") ) { return get_selected_tab_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected_tab_id") ) { return set_selected_tab_id_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITabMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { _tab_groups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { _tab_offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { if (inCallProp == hx::paccAlways) return set_selected_tab(inValue); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { _tab_spacing=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { _stretch_tabs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { _tab_stacking=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { _selected_tab=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { if (inCallProp == hx::paccAlways) return set_selected_tab_id(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { _selected_tab_id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUITabMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUITabMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	outFields->push(HX_HCSTRING("selected_tab","\x31","\x93","\xe4","\xe4"));
	outFields->push(HX_HCSTRING("selected_tab_id","\x69","\x33","\xa5","\x8c"));
	outFields->push(HX_HCSTRING("_back","\x06","\xf6","\x21","\xf4"));
	outFields->push(HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00"));
	outFields->push(HX_HCSTRING("_tab_groups","\x5d","\xcd","\xaf","\x51"));
	outFields->push(HX_HCSTRING("_stretch_tabs","\x17","\x2f","\x6b","\x3f"));
	outFields->push(HX_HCSTRING("_tab_spacing","\x5a","\x72","\xe7","\x32"));
	outFields->push(HX_HCSTRING("_tab_stacking","\xe3","\x1f","\x41","\xff"));
	outFields->push(HX_HCSTRING("_tab_offset","\x9c","\x40","\xc7","\x95"));
	outFields->push(HX_HCSTRING("_selected_tab_id","\xea","\x75","\x84","\x77"));
	outFields->push(HX_HCSTRING("_selected_tab","\x10","\x26","\x53","\xc7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUITabMenu_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUITabMenu_obj,_back),HX_HCSTRING("_back","\x06","\xf6","\x21","\xf4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITabMenu_obj,_tabs),HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_groups),HX_HCSTRING("_tab_groups","\x5d","\xcd","\xaf","\x51")},
	{hx::fsBool,(int)offsetof(FlxUITabMenu_obj,_stretch_tabs),HX_HCSTRING("_stretch_tabs","\x17","\x2f","\x6b","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_spacing),HX_HCSTRING("_tab_spacing","\x5a","\x72","\xe7","\x32")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_stacking),HX_HCSTRING("_tab_stacking","\xe3","\x1f","\x41","\xff")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_offset),HX_HCSTRING("_tab_offset","\x9c","\x40","\xc7","\x95")},
	{hx::fsString,(int)offsetof(FlxUITabMenu_obj,_selected_tab_id),HX_HCSTRING("_selected_tab_id","\xea","\x75","\x84","\x77")},
	{hx::fsInt,(int)offsetof(FlxUITabMenu_obj,_selected_tab),HX_HCSTRING("_selected_tab","\x10","\x26","\x53","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUITabMenu_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{hx::fsString,(void *) &FlxUITabMenu_obj::STACK_FRONT,HX_HCSTRING("STACK_FRONT","\xf2","\x04","\x39","\x17")},
	{hx::fsString,(void *) &FlxUITabMenu_obj::STACK_BACK,HX_HCSTRING("STACK_BACK","\xde","\x2d","\xef","\xd2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getEvent","\xa4","\xd7","\x9b","\xd5"),
	HX_HCSTRING("getRequest","\x59","\x65","\xe6","\x93"),
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get_selected_tab","\xba","\x7f","\x83","\xe9"),
	HX_HCSTRING("set_selected_tab","\x2e","\x6d","\xc5","\x3f"),
	HX_HCSTRING("get_selected_tab_id","\x80","\x02","\xb0","\x17"),
	HX_HCSTRING("set_selected_tab_id","\x8c","\xf5","\x4c","\x54"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("getTab","\x5f","\x93","\x27","\xa3"),
	HX_HCSTRING("getTabGroup","\x60","\xf7","\x8c","\x2e"),
	HX_HCSTRING("addGroup","\x5e","\xd9","\x51","\x13"),
	HX_HCSTRING("_onTabEvent","\xe3","\xea","\xa9","\x94"),
	HX_HCSTRING("showTabId","\x53","\xff","\x47","\x39"),
	HX_HCSTRING("_back","\x06","\xf6","\x21","\xf4"),
	HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00"),
	HX_HCSTRING("_tab_groups","\x5d","\xcd","\xaf","\x51"),
	HX_HCSTRING("_stretch_tabs","\x17","\x2f","\x6b","\x3f"),
	HX_HCSTRING("_tab_spacing","\x5a","\x72","\xe7","\x32"),
	HX_HCSTRING("_tab_stacking","\xe3","\x1f","\x41","\xff"),
	HX_HCSTRING("_tab_offset","\x9c","\x40","\xc7","\x95"),
	HX_HCSTRING("_selected_tab_id","\xea","\x75","\x84","\x77"),
	HX_HCSTRING("_selected_tab","\x10","\x26","\x53","\xc7"),
	HX_HCSTRING("stackTabs","\xe6","\x87","\xf4","\xd7"),
	HX_HCSTRING("sortTabs","\xfc","\x0a","\x72","\x50"),
	HX_HCSTRING("showTabInt","\x77","\x72","\xb7","\xe5"),
	HX_HCSTRING("_showOnlyGroup","\xb7","\x69","\x28","\x52"),
	HX_HCSTRING("getFirstTab","\xbb","\x9a","\x0b","\x17"),
	HX_HCSTRING("distributeTabs","\x3f","\x9a","\xe9","\x62"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#endif

hx::Class FlxUITabMenu_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	HX_HCSTRING("STACK_FRONT","\xf2","\x04","\x39","\x17"),
	HX_HCSTRING("STACK_BACK","\xde","\x2d","\xef","\xd2"),
	::String(null()) };

void FlxUITabMenu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUITabMenu","\xbf","\x1e","\x80","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUITabMenu_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUITabMenu_obj >;
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

void FlxUITabMenu_obj::__boot()
{
	CLICK_EVENT= HX_HCSTRING("tab_menu_click","\x52","\xa3","\x80","\x94");
	STACK_FRONT= HX_HCSTRING("front","\xa9","\x18","\x8e","\x06");
	STACK_BACK= HX_HCSTRING("back","\x27","\xda","\x10","\x41");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
