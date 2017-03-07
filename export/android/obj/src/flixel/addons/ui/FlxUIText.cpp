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
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIText_obj::__construct(Dynamic X,Dynamic Y,Dynamic FieldWidth,::String Text,Dynamic Size,Dynamic EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIText","new",0x88106994,"flixel.addons.ui.FlxUIText.new","flixel/addons/ui/FlxUIText.hx",12,0x557f53bd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(Size,"Size")
HX_STACK_ARG(EmbeddedFont,"EmbeddedFont")
{
	HX_STACK_LINE(14)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(12)
	Dynamic tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	Dynamic tmp2 = FieldWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	::String tmp3 = Text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12)
	Dynamic tmp4 = Size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(12)
	Dynamic tmp5 = EmbeddedFont;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
}
;
	return null();
}

//FlxUIText_obj::~FlxUIText_obj() { }

Dynamic FlxUIText_obj::__CreateEmpty() { return  new FlxUIText_obj; }
hx::ObjectPtr< FlxUIText_obj > FlxUIText_obj::__new(Dynamic X,Dynamic Y,Dynamic FieldWidth,::String Text,Dynamic Size,Dynamic EmbeddedFont)
{  hx::ObjectPtr< FlxUIText_obj > _result_ = new FlxUIText_obj();
	_result_->__construct(X,Y,FieldWidth,Text,Size,EmbeddedFont);
	return _result_;}

Dynamic FlxUIText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIText_obj > _result_ = new FlxUIText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *FlxUIText_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

FlxUIText_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUIText_obj >(this); }
FlxUIText_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUIText_obj >(this); }
FlxUIText_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIText_obj >(this); }
FlxUIText_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUIText_obj >(this); }
Void FlxUIText_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIText","resize",0x42437940,"flixel.addons.ui.FlxUIText.resize","flixel/addons/ui/FlxUIText.hx",18,0x557f53bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(19)
		Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		this->set_width(tmp);
		HX_STACK_LINE(20)
		Float tmp1 = h;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		this->set_height(tmp1);
		HX_STACK_LINE(21)
		this->calcFrame(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIText_obj,resize,(void))


FlxUIText_obj::FlxUIText_obj()
{
}

void FlxUIText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIText);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

bool FlxUIText_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIText_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{hx::fsString,(int)offsetof(FlxUIText_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIText_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUIText_obj::__mClass;

void FlxUIText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIText","\xa2","\x4f","\x17","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIText_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIText_obj >;
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
