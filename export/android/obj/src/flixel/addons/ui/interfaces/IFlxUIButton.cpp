#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("up_color","\x3f","\xd5","\xb5","\x9b"),
	HX_HCSTRING("over_color","\xf8","\x00","\x4a","\xf7"),
	HX_HCSTRING("down_color","\x86","\x26","\xb3","\x4e"),
	HX_HCSTRING("up_toggle_color","\xdc","\x6e","\x0c","\xdd"),
	HX_HCSTRING("over_toggle_color","\x43","\x1c","\x98","\xaa"),
	HX_HCSTRING("down_toggle_color","\x75","\xe4","\xc8","\x06"),
	HX_HCSTRING("up_visible","\x4e","\x8b","\x83","\x08"),
	HX_HCSTRING("over_visible","\x47","\xd7","\x44","\x92"),
	HX_HCSTRING("down_visible","\x55","\xfc","\x6c","\x72"),
	HX_HCSTRING("up_toggle_visible","\x2b","\x86","\xe9","\x3f"),
	HX_HCSTRING("over_toggle_visible","\x52","\x9b","\xc8","\x49"),
	HX_HCSTRING("down_toggle_visible","\x04","\x54","\xe1","\xa9"),
	HX_HCSTRING("resize_ratio","\x40","\xc5","\x84","\x8f"),
	HX_HCSTRING("resize_point","\x85","\x44","\xf0","\x71"),
	HX_HCSTRING("autoCenterLabel","\xb0","\xb4","\x79","\xaf"),
	HX_HCSTRING("loadGraphicSlice9","\x69","\x16","\x70","\x91"),
	HX_HCSTRING("loadGraphicsMultiple","\x41","\x7c","\x04","\x85"),
	HX_HCSTRING("loadGraphicsUpOverDown","\xc2","\xad","\x54","\x5b"),
	HX_HCSTRING("forceStateHandler","\x44","\x68","\x8f","\x7c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxUIButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxUIButton_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxUIButton_obj::__mClass;

void IFlxUIButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.interfaces.IFlxUIButton","\x52","\x5d","\xe9","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxUIButton_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
