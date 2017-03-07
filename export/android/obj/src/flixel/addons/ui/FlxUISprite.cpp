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
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
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

Void FlxUISprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","new",0xd5a60c2c,"flixel.addons.ui.FlxUISprite.new","flixel/addons/ui/FlxUISprite.hx",11,0xc16e6665)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(22)
	this->recycled = false;
	HX_STACK_LINE(19)
	this->ptr_owner = null();
	HX_STACK_LINE(13)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(26)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Dynamic tmp2 = SimpleGraphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//FlxUISprite_obj::~FlxUISprite_obj() { }

Dynamic FlxUISprite_obj::__CreateEmpty() { return  new FlxUISprite_obj; }
hx::ObjectPtr< FlxUISprite_obj > FlxUISprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxUISprite_obj > _result_ = new FlxUISprite_obj();
	_result_->__construct(__o_X,__o_Y,SimpleGraphic);
	return _result_;}

Dynamic FlxUISprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUISprite_obj > _result_ = new FlxUISprite_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxUISprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	return super::__ToInterface(inType);
}

FlxUISprite_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUISprite_obj >(this); }
FlxUISprite_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUISprite_obj >(this); }
FlxUISprite_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUISprite_obj >(this); }
Void FlxUISprite_obj::recycle( Dynamic data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","recycle",0x37d621df,"flixel.addons.ui.FlxUISprite.recycle","flixel/addons/ui/FlxUISprite.hx",30,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(30)
		this->recycled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,recycle,(void))

Void FlxUISprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","destroy",0x24d03ec6,"flixel.addons.ui.FlxUISprite.destroy","flixel/addons/ui/FlxUISprite.hx",34,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->ptr_owner = null();
		HX_STACK_LINE(36)
		this->super::destroy();
	}
return null();
}



FlxUISprite_obj::FlxUISprite_obj()
{
}

void FlxUISprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISprite);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_MARK_MEMBER_NAME(recycled,"recycled");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_VISIT_MEMBER_NAME(recycled,"recycled");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUISprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { return recycled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { return ptr_owner; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUISprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { recycled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { ptr_owner=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUISprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUISprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("ptr_owner","\xe2","\x67","\x66","\xed"));
	outFields->push(HX_HCSTRING("recycled","\xf1","\x00","\x02","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUISprite_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{hx::fsString,(int)offsetof(FlxUISprite_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUISprite_obj,ptr_owner),HX_HCSTRING("ptr_owner","\xe2","\x67","\x66","\xed")},
	{hx::fsBool,(int)offsetof(FlxUISprite_obj,recycled),HX_HCSTRING("recycled","\xf1","\x00","\x02","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("ptr_owner","\xe2","\x67","\x66","\xed"),
	HX_HCSTRING("recycled","\xf1","\x00","\x02","\x63"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUISprite_obj::__mClass;

void FlxUISprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUISprite","\x3a","\xc6","\x51","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUISprite_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUISprite_obj >;
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
