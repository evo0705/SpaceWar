#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxUIClickable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxUIClickable_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxUIClickable_obj::__mClass;

void IFlxUIClickable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.interfaces.IFlxUIClickable","\x82","\x0e","\x89","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxUIClickable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
