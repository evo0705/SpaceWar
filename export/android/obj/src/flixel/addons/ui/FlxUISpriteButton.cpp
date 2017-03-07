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
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUISpriteButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUISpriteButton","new",0x3b737abe,"flixel.addons.ui.FlxUISpriteButton.new","flixel/addons/ui/FlxUISpriteButton.hx",26,0xcd05ded3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Asset,"Asset")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(27)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	Dynamic tmp2 = OnClick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(32)
	int tmp3 = this->down_toggle_color = (int)-1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	int tmp4 = this->over_toggle_color = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5 = this->up_toggle_color = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	int tmp6 = this->down_color = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	int tmp7 = this->over_color = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	this->up_color = tmp7;
	HX_STACK_LINE(34)
	bool tmp8 = (Asset != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	if ((tmp8)){
		HX_STACK_LINE(35)
		::flixel::FlxSprite tmp9 = Asset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		this->set_label(tmp9);
	}
}
;
	return null();
}

//FlxUISpriteButton_obj::~FlxUISpriteButton_obj() { }

Dynamic FlxUISpriteButton_obj::__CreateEmpty() { return  new FlxUISpriteButton_obj; }
hx::ObjectPtr< FlxUISpriteButton_obj > FlxUISpriteButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick)
{  hx::ObjectPtr< FlxUISpriteButton_obj > _result_ = new FlxUISpriteButton_obj();
	_result_->__construct(__o_X,__o_Y,Asset,OnClick);
	return _result_;}

Dynamic FlxUISpriteButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUISpriteButton_obj > _result_ = new FlxUISpriteButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxUISpriteButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIButton_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

FlxUISpriteButton_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUISpriteButton_obj >(this); }
FlxUISpriteButton_obj::operator ::flixel::interfaces::IFlxDestroyable_obj *()
	{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxUISpriteButton_obj >(this); }
FlxUISpriteButton_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUISpriteButton_obj >(this); }
FlxUISpriteButton_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUISpriteButton_obj >(this); }
FlxUISpriteButton_obj::operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIButton_delegate_< FlxUISpriteButton_obj >(this); }
FlxUISpriteButton_obj::operator ::flixel::addons::ui::interfaces::IHasParams_obj *()
	{ return new ::flixel::addons::ui::interfaces::IHasParams_delegate_< FlxUISpriteButton_obj >(this); }
Void FlxUISpriteButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISpriteButton","resize",0xe723fe56,"flixel.addons.ui.FlxUISpriteButton.resize","flixel/addons/ui/FlxUISpriteButton.hx",42,0xcd05ded3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(43)
		Float tmp = W;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Float tmp1 = H;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(44)
		this->autoCenterLabel();
	}
return null();
}


Void FlxUISpriteButton_obj::autoCenterLabel( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISpriteButton","autoCenterLabel",0x0d1e740e,"flixel.addons.ui.FlxUISpriteButton.autoCenterLabel","flixel/addons/ui/FlxUISpriteButton.hx",47,0xcd05ded3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::flixel::FlxSprite tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::flixel::FlxSprite tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::flixel::group::FlxSpriteGroup >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			if ((tmp3)){
				HX_STACK_LINE(50)
				::flixel::FlxSprite tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(50)
				::flixel::group::FlxSpriteGroup g = ((::flixel::group::FlxSpriteGroup)(tmp4));		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(51)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(51)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(51)
					while((true)){
						HX_STACK_LINE(51)
						bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(51)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(51)
						if ((tmp6)){
							HX_STACK_LINE(51)
							break;
						}
						HX_STACK_LINE(51)
						::flixel::FlxSprite tmp7 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(51)
						::flixel::FlxSprite sprite = tmp7;		HX_STACK_VAR(sprite,"sprite");
						HX_STACK_LINE(51)
						++(_g);
						HX_STACK_LINE(52)
						Float tmp8 = sprite->get_width();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(52)
						Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(52)
						Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(52)
						sprite->set_x(tmp10);
						HX_STACK_LINE(53)
						Float tmp11 = sprite->get_height();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(53)
						Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(53)
						Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(53)
						sprite->set_y(tmp13);
					}
				}
				HX_STACK_LINE(58)
				Float tmp5 = g->get_width();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				Float W = tmp5;		HX_STACK_VAR(W,"W");
				HX_STACK_LINE(59)
				Float tmp6 = g->get_height();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(59)
				Float H = tmp6;		HX_STACK_VAR(H,"H");
				HX_STACK_LINE(61)
				{
					HX_STACK_LINE(61)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(61)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(61)
					while((true)){
						HX_STACK_LINE(61)
						bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(61)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(61)
						if ((tmp8)){
							HX_STACK_LINE(61)
							break;
						}
						HX_STACK_LINE(61)
						::flixel::FlxSprite tmp9 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(61)
						::flixel::FlxSprite sprite = tmp9;		HX_STACK_VAR(sprite,"sprite");
						HX_STACK_LINE(61)
						++(_g);
						HX_STACK_LINE(62)
						Float tmp10 = W;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(62)
						Float tmp11 = sprite->get_width();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(62)
						Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(62)
						sprite->set_x(tmp13);
						HX_STACK_LINE(63)
						Float tmp14 = H;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(63)
						Float tmp15 = sprite->get_height();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(63)
						Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(63)
						Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(63)
						sprite->set_y(tmp17);
					}
				}
			}
			HX_STACK_LINE(66)
			this->super::autoCenterLabel();
		}
	}
return null();
}



FlxUISpriteButton_obj::FlxUISpriteButton_obj()
{
}

Dynamic FlxUISpriteButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return autoCenterLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("autoCenterLabel","\xb0","\xb4","\x79","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISpriteButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISpriteButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUISpriteButton_obj::__mClass;

void FlxUISpriteButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUISpriteButton","\xcc","\x03","\x3c","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUISpriteButton_obj >;
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
