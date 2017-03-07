#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
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
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIInputText_obj::__construct(Dynamic X,Dynamic Y,Dynamic Width,::String Text,Dynamic size,Dynamic TextColor,Dynamic BackgroundColor,Dynamic EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIInputText","new",0x1be658b4,"flixel.addons.ui.FlxUIInputText.new","flixel/addons/ui/FlxUIInputText.hx",11,0x43f86a3b)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(TextColor,"TextColor")
HX_STACK_ARG(BackgroundColor,"BackgroundColor")
HX_STACK_ARG(EmbeddedFont,"EmbeddedFont")
{
	HX_STACK_LINE(15)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(11)
	Dynamic tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	Dynamic tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	::String tmp3 = Text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11)
	Dynamic tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(11)
	Dynamic tmp5 = TextColor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(11)
	Dynamic tmp6 = BackgroundColor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(11)
	Dynamic tmp7 = EmbeddedFont;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
}
;
	return null();
}

//FlxUIInputText_obj::~FlxUIInputText_obj() { }

Dynamic FlxUIInputText_obj::__CreateEmpty() { return  new FlxUIInputText_obj; }
hx::ObjectPtr< FlxUIInputText_obj > FlxUIInputText_obj::__new(Dynamic X,Dynamic Y,Dynamic Width,::String Text,Dynamic size,Dynamic TextColor,Dynamic BackgroundColor,Dynamic EmbeddedFont)
{  hx::ObjectPtr< FlxUIInputText_obj > _result_ = new FlxUIInputText_obj();
	_result_->__construct(X,Y,Width,Text,size,TextColor,BackgroundColor,EmbeddedFont);
	return _result_;}

Dynamic FlxUIInputText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIInputText_obj > _result_ = new FlxUIInputText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

hx::Object *FlxUIInputText_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

FlxUIInputText_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUIInputText_obj >(this); }
FlxUIInputText_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUIInputText_obj >(this); }
FlxUIInputText_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIInputText_obj >(this); }
FlxUIInputText_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUIInputText_obj >(this); }
Void FlxUIInputText_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIInputText","resize",0x10b3be20,"flixel.addons.ui.FlxUIInputText.resize","flixel/addons/ui/FlxUIInputText.hx",23,0x43f86a3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(24)
		Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->set_width(tmp);
		HX_STACK_LINE(25)
		Float tmp1 = h;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		this->set_height(tmp1);
		HX_STACK_LINE(26)
		this->calcFrame(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIInputText_obj,resize,(void))

Void FlxUIInputText_obj::onChange( ::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIInputText","onChange",0x695a4f1b,"flixel.addons.ui.FlxUIInputText.onChange","flixel/addons/ui/FlxUIInputText.hx",29,0x43f86a3b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(30)
		::String tmp = action;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		this->super::onChange(tmp);
		HX_STACK_LINE(31)
		bool tmp1 = this->broadcastToFlxUI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(32)
			::String tmp2 = action;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			::String _switch_1 = (tmp2);
			if (  ( _switch_1==HX_HCSTRING("enter","\x18","\x6d","\x86","\x70"))){
				HX_STACK_LINE(34)
				::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("enter_input_text","\x49","\x07","\x7b","\x5a"),hx::ObjectPtr<OBJ_>(this),tmp3,null());
			}
			else if (  ( _switch_1==HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a")) ||  ( _switch_1==HX_HCSTRING("backspace","\x3f","\x85","\xea","\xca"))){
				HX_STACK_LINE(37)
				::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("delete_input_text","\x16","\xb7","\x28","\xaf"),hx::ObjectPtr<OBJ_>(this),tmp3,null());
				HX_STACK_LINE(38)
				::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("change_input_text","\xf1","\x11","\x47","\x68"),hx::ObjectPtr<OBJ_>(this),tmp4,null());
			}
			else if (  ( _switch_1==HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"))){
				HX_STACK_LINE(40)
				::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(40)
				::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("input_input_text","\x97","\x11","\x0d","\x4c"),hx::ObjectPtr<OBJ_>(this),tmp3,null());
				HX_STACK_LINE(41)
				::String tmp4 = this->get_text();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				::flixel::addons::ui::FlxUI_obj::event(HX_HCSTRING("change_input_text","\xf1","\x11","\x47","\x68"),hx::ObjectPtr<OBJ_>(this),tmp4,null());
			}
		}
	}
return null();
}


::String FlxUIInputText_obj::CHANGE_EVENT;

::String FlxUIInputText_obj::ENTER_EVENT;

::String FlxUIInputText_obj::DELETE_EVENT;

::String FlxUIInputText_obj::INPUT_EVENT;


FlxUIInputText_obj::FlxUIInputText_obj()
{
}

void FlxUIInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIInputText);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	::flixel::addons::ui::FlxInputText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	::flixel::addons::ui::FlxInputText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIInputText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIInputText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIInputText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUIInputText_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxUIInputText_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUIInputText_obj::CHANGE_EVENT,HX_HCSTRING("CHANGE_EVENT","\xab","\x38","\xff","\x8d")},
	{hx::fsString,(void *) &FlxUIInputText_obj::ENTER_EVENT,HX_HCSTRING("ENTER_EVENT","\x33","\xf6","\xec","\x35")},
	{hx::fsString,(void *) &FlxUIInputText_obj::DELETE_EVENT,HX_HCSTRING("DELETE_EVENT","\xa6","\xa5","\x69","\x0d")},
	{hx::fsString,(void *) &FlxUIInputText_obj::INPUT_EVENT,HX_HCSTRING("INPUT_EVENT","\xa5","\x0e","\xf3","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::CHANGE_EVENT,"CHANGE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::ENTER_EVENT,"ENTER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::DELETE_EVENT,"DELETE_EVENT");
	HX_MARK_MEMBER_NAME(FlxUIInputText_obj::INPUT_EVENT,"INPUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::CHANGE_EVENT,"CHANGE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::ENTER_EVENT,"ENTER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::DELETE_EVENT,"DELETE_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUIInputText_obj::INPUT_EVENT,"INPUT_EVENT");
};

#endif

hx::Class FlxUIInputText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CHANGE_EVENT","\xab","\x38","\xff","\x8d"),
	HX_HCSTRING("ENTER_EVENT","\x33","\xf6","\xec","\x35"),
	HX_HCSTRING("DELETE_EVENT","\xa6","\xa5","\x69","\x0d"),
	HX_HCSTRING("INPUT_EVENT","\xa5","\x0e","\xf3","\xd3"),
	::String(null()) };

void FlxUIInputText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIInputText","\xc2","\x2e","\x3f","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIInputText_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIInputText_obj >;
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

void FlxUIInputText_obj::__boot()
{
	CHANGE_EVENT= HX_HCSTRING("change_input_text","\xf1","\x11","\x47","\x68");
	ENTER_EVENT= HX_HCSTRING("enter_input_text","\x49","\x07","\x7b","\x5a");
	DELETE_EVENT= HX_HCSTRING("delete_input_text","\x16","\xb7","\x28","\xaf");
	INPUT_EVENT= HX_HCSTRING("input_input_text","\x97","\x11","\x0d","\x4c");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
