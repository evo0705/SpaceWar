#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("getEvent","\xa4","\xd7","\x9b","\xd5"),
	HX_HCSTRING("getRequest","\x59","\x65","\xe6","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IEventGetter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IEventGetter_obj::__mClass,"__mClass");
};

#endif

hx::Class IEventGetter_obj::__mClass;

void IEventGetter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.interfaces.IEventGetter","\x3f","\x6a","\x70","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IEventGetter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
