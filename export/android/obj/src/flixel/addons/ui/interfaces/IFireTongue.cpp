#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("locale","\x9a","\x74","\xbf","\x59"),
	HX_HCSTRING("get_locale","\x63","\xe4","\x46","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFireTongue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFireTongue_obj::__mClass,"__mClass");
};

#endif

hx::Class IFireTongue_obj::__mClass;

void IFireTongue_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.interfaces.IFireTongue","\xe0","\x07","\x68","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFireTongue_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
