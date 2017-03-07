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
#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#include <flixel/addons/ui/FlxUIRegion.h>
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
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIRegion_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIRegion","new",0xbea3949b,"flixel.addons.ui.FlxUIRegion.new","flixel/addons/ui/FlxUIRegion.hx",13,0xd4d800d6)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_W,"W")
HX_STACK_ARG(__o_H,"H")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float W = __o_W.Default(16);
Float H = __o_H.Default(16);
{
	HX_STACK_LINE(15)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(20)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(26)
	Float tmp2 = W;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float tmp3 = H;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	this->resize(tmp2,tmp3);
}
;
	return null();
}

//FlxUIRegion_obj::~FlxUIRegion_obj() { }

Dynamic FlxUIRegion_obj::__CreateEmpty() { return  new FlxUIRegion_obj; }
hx::ObjectPtr< FlxUIRegion_obj > FlxUIRegion_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H)
{  hx::ObjectPtr< FlxUIRegion_obj > _result_ = new FlxUIRegion_obj();
	_result_->__construct(__o_X,__o_Y,__o_W,__o_H);
	return _result_;}

Dynamic FlxUIRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIRegion_obj > _result_ = new FlxUIRegion_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxUIRegion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

FlxUIRegion_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUIRegion_obj >(this); }
FlxUIRegion_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUIRegion_obj >(this); }
FlxUIRegion_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIRegion_obj >(this); }
FlxUIRegion_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUIRegion_obj >(this); }
Void FlxUIRegion_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRegion","destroy",0x38ac2ab5,"flixel.addons.ui.FlxUIRegion.destroy","flixel/addons/ui/FlxUIRegion.hx",30,0xd4d800d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::destroy();
	}
return null();
}


Void FlxUIRegion_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRegion","resize",0x9a5dac99,"flixel.addons.ui.FlxUIRegion.resize","flixel/addons/ui/FlxUIRegion.hx",33,0xd4d800d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(34)
		Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		this->set_width(tmp);
		HX_STACK_LINE(35)
		Float tmp1 = h;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRegion_obj,resize,(void))


FlxUIRegion_obj::FlxUIRegion_obj()
{
}

void FlxUIRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRegion);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIRegion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

bool FlxUIRegion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIRegion_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{hx::fsString,(int)offsetof(FlxUIRegion_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRegion_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUIRegion_obj::__mClass;

void FlxUIRegion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIRegion","\x29","\xab","\x48","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIRegion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIRegion_obj >;
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
