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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void BorderDef_obj::__construct(int Style,int Color,hx::Null< int >  __o_Size,hx::Null< Float >  __o_Quality)
{
HX_STACK_FRAME("flixel.addons.ui.BorderDef","new",0x371bd1ba,"flixel.addons.ui.BorderDef.new","flixel/addons/ui/FlxUIText.hx",50,0x557f53bd)
HX_STACK_THIS(this)
HX_STACK_ARG(Style,"Style")
HX_STACK_ARG(Color,"Color")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_Quality,"Quality")
int Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
{
	HX_STACK_LINE(51)
	this->style = Style;
	HX_STACK_LINE(52)
	this->color = Color;
	HX_STACK_LINE(53)
	this->size = Size;
	HX_STACK_LINE(54)
	this->quality = Quality;
}
;
	return null();
}

//BorderDef_obj::~BorderDef_obj() { }

Dynamic BorderDef_obj::__CreateEmpty() { return  new BorderDef_obj; }
hx::ObjectPtr< BorderDef_obj > BorderDef_obj::__new(int Style,int Color,hx::Null< int >  __o_Size,hx::Null< Float >  __o_Quality)
{  hx::ObjectPtr< BorderDef_obj > _result_ = new BorderDef_obj();
	_result_->__construct(Style,Color,__o_Size,__o_Quality);
	return _result_;}

Dynamic BorderDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BorderDef_obj > _result_ = new BorderDef_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void BorderDef_obj::apply( ::flixel::text::FlxText f){
{
		HX_STACK_FRAME("flixel.addons.ui.BorderDef","apply",0x9e0a1148,"flixel.addons.ui.BorderDef.apply","flixel/addons/ui/FlxUIText.hx",58,0x557f53bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(58)
		int tmp = this->style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		f->set_borderStyle(tmp);
		HX_STACK_LINE(58)
		int tmp1 = this->color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		f->set_borderColor(tmp1);
		HX_STACK_LINE(58)
		int tmp2 = this->size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		f->set_borderSize(tmp2);
		HX_STACK_LINE(58)
		Float tmp3 = this->quality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		f->set_borderQuality(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BorderDef_obj,apply,(void))


BorderDef_obj::BorderDef_obj()
{
}

Dynamic BorderDef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BorderDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BorderDef_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BorderDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BorderDef_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsInt,(int)offsetof(BorderDef_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsInt,(int)offsetof(BorderDef_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsFloat,(int)offsetof(BorderDef_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BorderDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BorderDef_obj::__mClass,"__mClass");
};

#endif

hx::Class BorderDef_obj::__mClass;

void BorderDef_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.BorderDef","\xc8","\x2c","\xb6","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BorderDef_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BorderDef_obj >;
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
