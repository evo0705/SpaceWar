#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_FlxUIAssets
#include <flixel/addons/ui/FlxUIAssets.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIAssets_obj::__construct()
{
	return null();
}

//FlxUIAssets_obj::~FlxUIAssets_obj() { }

Dynamic FlxUIAssets_obj::__CreateEmpty() { return  new FlxUIAssets_obj; }
hx::ObjectPtr< FlxUIAssets_obj > FlxUIAssets_obj::__new()
{  hx::ObjectPtr< FlxUIAssets_obj > _result_ = new FlxUIAssets_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxUIAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIAssets_obj > _result_ = new FlxUIAssets_obj();
	_result_->__construct();
	return _result_;}

::String FlxUIAssets_obj::IMG_BUTTON;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT;

::String FlxUIAssets_obj::IMG_BUTTON_ARROW_UP;

::String FlxUIAssets_obj::IMG_BUTTON_THIN;

::String FlxUIAssets_obj::IMG_BUTTON_TOGGLE;

int FlxUIAssets_obj::IMG_BUTTON_SIZE;

::String FlxUIAssets_obj::IMG_CHECK_MARK;

::String FlxUIAssets_obj::IMG_CHECK_BOX;

::String FlxUIAssets_obj::IMG_CHROME;

::String FlxUIAssets_obj::IMG_CHROME_LIGHT;

::String FlxUIAssets_obj::IMG_CHROME_FLAT;

::String FlxUIAssets_obj::IMG_CHROME_INSET;

::String FlxUIAssets_obj::IMG_RADIO;

::String FlxUIAssets_obj::IMG_RADIO_DOT;

::String FlxUIAssets_obj::IMG_TAB;

::String FlxUIAssets_obj::IMG_TAB_BACK;

::String FlxUIAssets_obj::IMG_BOX;

::String FlxUIAssets_obj::IMG_DROPDOWN;

::String FlxUIAssets_obj::IMG_PLUS;

::String FlxUIAssets_obj::IMG_MINUS;

::String FlxUIAssets_obj::IMG_HILIGHT;

::String FlxUIAssets_obj::IMG_INVIS;

::String FlxUIAssets_obj::IMG_SWATCH;

::String FlxUIAssets_obj::IMG_FINGER_SMALL;

::String FlxUIAssets_obj::IMG_FINGER_BIG;

::String FlxUIAssets_obj::SLICE9_BUTTON;

::String FlxUIAssets_obj::SLICE9_BUTTON_THIN;

::String FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE;

::String FlxUIAssets_obj::SLICE9_TAB;

::String FlxUIAssets_obj::XML_DEFAULTS_ID;

::String FlxUIAssets_obj::XML_DEFAULT_POPUP_ID;

::String FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID;

::haxe::ds::StringMap FlxUIAssets_obj::index_size;


FlxUIAssets_obj::FlxUIAssets_obj()
{
}

bool FlxUIAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"index_size") ) { outValue = index_size; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON,HX_HCSTRING("IMG_BUTTON","\x0e","\x8a","\xb0","\x1f")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN,HX_HCSTRING("IMG_BUTTON_ARROW_DOWN","\xc9","\x07","\x3a","\x6f")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT,HX_HCSTRING("IMG_BUTTON_ARROW_LEFT","\x6e","\x17","\x7c","\x74")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT,HX_HCSTRING("IMG_BUTTON_ARROW_RIGHT","\x75","\x76","\x25","\xef")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON_ARROW_UP,HX_HCSTRING("IMG_BUTTON_ARROW_UP","\x02","\x1a","\xfb","\xb1")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON_THIN,HX_HCSTRING("IMG_BUTTON_THIN","\x6a","\x2d","\xe8","\xc5")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BUTTON_TOGGLE,HX_HCSTRING("IMG_BUTTON_TOGGLE","\xe5","\x70","\xd4","\x38")},
	{hx::fsInt,(void *) &FlxUIAssets_obj::IMG_BUTTON_SIZE,HX_HCSTRING("IMG_BUTTON_SIZE","\xd2","\xc7","\x3f","\xc5")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_CHECK_MARK,HX_HCSTRING("IMG_CHECK_MARK","\x60","\xac","\xf9","\x63")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_CHECK_BOX,HX_HCSTRING("IMG_CHECK_BOX","\xf8","\xe0","\x65","\x7c")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_CHROME,HX_HCSTRING("IMG_CHROME","\x96","\x21","\x80","\x08")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_CHROME_LIGHT,HX_HCSTRING("IMG_CHROME_LIGHT","\x0d","\x86","\x34","\xf9")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_CHROME_FLAT,HX_HCSTRING("IMG_CHROME_FLAT","\x42","\x4e","\x80","\xc9")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_CHROME_INSET,HX_HCSTRING("IMG_CHROME_INSET","\x14","\xf2","\x57","\x42")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_RADIO,HX_HCSTRING("IMG_RADIO","\x3f","\xc4","\x64","\x41")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_RADIO_DOT,HX_HCSTRING("IMG_RADIO_DOT","\x29","\x73","\x54","\xd2")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_TAB,HX_HCSTRING("IMG_TAB","\x99","\x10","\x98","\xc5")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_TAB_BACK,HX_HCSTRING("IMG_TAB_BACK","\xcd","\xe2","\xaa","\xb4")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_BOX,HX_HCSTRING("IMG_BOX","\x4f","\x74","\x8a","\xc5")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_DROPDOWN,HX_HCSTRING("IMG_DROPDOWN","\x2d","\xbf","\x6e","\x75")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_PLUS,HX_HCSTRING("IMG_PLUS","\x76","\x04","\xda","\x1c")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_MINUS,HX_HCSTRING("IMG_MINUS","\xb4","\x33","\xb5","\x65")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_HILIGHT,HX_HCSTRING("IMG_HILIGHT","\x79","\xa2","\x80","\x25")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_INVIS,HX_HCSTRING("IMG_INVIS","\x5f","\xfa","\x6e","\x1b")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_SWATCH,HX_HCSTRING("IMG_SWATCH","\x18","\xbd","\xff","\x05")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_FINGER_SMALL,HX_HCSTRING("IMG_FINGER_SMALL","\x6d","\xe9","\x0d","\x04")},
	{hx::fsString,(void *) &FlxUIAssets_obj::IMG_FINGER_BIG,HX_HCSTRING("IMG_FINGER_BIG","\xe6","\x37","\x73","\x4a")},
	{hx::fsString,(void *) &FlxUIAssets_obj::SLICE9_BUTTON,HX_HCSTRING("SLICE9_BUTTON","\xaa","\x06","\x4e","\xc7")},
	{hx::fsString,(void *) &FlxUIAssets_obj::SLICE9_BUTTON_THIN,HX_HCSTRING("SLICE9_BUTTON_THIN","\x4e","\x7b","\x95","\x05")},
	{hx::fsString,(void *) &FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE,HX_HCSTRING("SLICE9_BUTTON_TOGGLE","\xc9","\xff","\xdb","\xb8")},
	{hx::fsString,(void *) &FlxUIAssets_obj::SLICE9_TAB,HX_HCSTRING("SLICE9_TAB","\x7d","\xda","\xd2","\xd0")},
	{hx::fsString,(void *) &FlxUIAssets_obj::XML_DEFAULTS_ID,HX_HCSTRING("XML_DEFAULTS_ID","\xe0","\x0a","\x56","\xe9")},
	{hx::fsString,(void *) &FlxUIAssets_obj::XML_DEFAULT_POPUP_ID,HX_HCSTRING("XML_DEFAULT_POPUP_ID","\xd4","\x98","\xd4","\x15")},
	{hx::fsString,(void *) &FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID,HX_HCSTRING("XML_DEFAULT_LOADING_SCREEN_ID","\x05","\x71","\x0d","\x84")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxUIAssets_obj::index_size,HX_HCSTRING("index_size","\x4e","\xc0","\x2a","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON,"IMG_BUTTON");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN,"IMG_BUTTON_ARROW_DOWN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT,"IMG_BUTTON_ARROW_LEFT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT,"IMG_BUTTON_ARROW_RIGHT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_UP,"IMG_BUTTON_ARROW_UP");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_THIN,"IMG_BUTTON_THIN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_TOGGLE,"IMG_BUTTON_TOGGLE");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_SIZE,"IMG_BUTTON_SIZE");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_MARK,"IMG_CHECK_MARK");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_BOX,"IMG_CHECK_BOX");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME,"IMG_CHROME");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_LIGHT,"IMG_CHROME_LIGHT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_FLAT,"IMG_CHROME_FLAT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_INSET,"IMG_CHROME_INSET");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO,"IMG_RADIO");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO_DOT,"IMG_RADIO_DOT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB,"IMG_TAB");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB_BACK,"IMG_TAB_BACK");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_BOX,"IMG_BOX");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_DROPDOWN,"IMG_DROPDOWN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_PLUS,"IMG_PLUS");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_MINUS,"IMG_MINUS");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_HILIGHT,"IMG_HILIGHT");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_INVIS,"IMG_INVIS");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_SWATCH,"IMG_SWATCH");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_SMALL,"IMG_FINGER_SMALL");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_BIG,"IMG_FINGER_BIG");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON,"SLICE9_BUTTON");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_THIN,"SLICE9_BUTTON_THIN");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE,"SLICE9_BUTTON_TOGGLE");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::SLICE9_TAB,"SLICE9_TAB");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULTS_ID,"XML_DEFAULTS_ID");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_POPUP_ID,"XML_DEFAULT_POPUP_ID");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID,"XML_DEFAULT_LOADING_SCREEN_ID");
	HX_MARK_MEMBER_NAME(FlxUIAssets_obj::index_size,"index_size");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON,"IMG_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_DOWN,"IMG_BUTTON_ARROW_DOWN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_LEFT,"IMG_BUTTON_ARROW_LEFT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_RIGHT,"IMG_BUTTON_ARROW_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_ARROW_UP,"IMG_BUTTON_ARROW_UP");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_THIN,"IMG_BUTTON_THIN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_TOGGLE,"IMG_BUTTON_TOGGLE");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BUTTON_SIZE,"IMG_BUTTON_SIZE");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_MARK,"IMG_CHECK_MARK");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHECK_BOX,"IMG_CHECK_BOX");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME,"IMG_CHROME");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_LIGHT,"IMG_CHROME_LIGHT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_FLAT,"IMG_CHROME_FLAT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_CHROME_INSET,"IMG_CHROME_INSET");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO,"IMG_RADIO");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_RADIO_DOT,"IMG_RADIO_DOT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB,"IMG_TAB");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_TAB_BACK,"IMG_TAB_BACK");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_BOX,"IMG_BOX");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_DROPDOWN,"IMG_DROPDOWN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_PLUS,"IMG_PLUS");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_MINUS,"IMG_MINUS");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_HILIGHT,"IMG_HILIGHT");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_INVIS,"IMG_INVIS");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_SWATCH,"IMG_SWATCH");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_SMALL,"IMG_FINGER_SMALL");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::IMG_FINGER_BIG,"IMG_FINGER_BIG");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON,"SLICE9_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_THIN,"SLICE9_BUTTON_THIN");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_BUTTON_TOGGLE,"SLICE9_BUTTON_TOGGLE");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::SLICE9_TAB,"SLICE9_TAB");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULTS_ID,"XML_DEFAULTS_ID");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_POPUP_ID,"XML_DEFAULT_POPUP_ID");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::XML_DEFAULT_LOADING_SCREEN_ID,"XML_DEFAULT_LOADING_SCREEN_ID");
	HX_VISIT_MEMBER_NAME(FlxUIAssets_obj::index_size,"index_size");
};

#endif

hx::Class FlxUIAssets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("IMG_BUTTON","\x0e","\x8a","\xb0","\x1f"),
	HX_HCSTRING("IMG_BUTTON_ARROW_DOWN","\xc9","\x07","\x3a","\x6f"),
	HX_HCSTRING("IMG_BUTTON_ARROW_LEFT","\x6e","\x17","\x7c","\x74"),
	HX_HCSTRING("IMG_BUTTON_ARROW_RIGHT","\x75","\x76","\x25","\xef"),
	HX_HCSTRING("IMG_BUTTON_ARROW_UP","\x02","\x1a","\xfb","\xb1"),
	HX_HCSTRING("IMG_BUTTON_THIN","\x6a","\x2d","\xe8","\xc5"),
	HX_HCSTRING("IMG_BUTTON_TOGGLE","\xe5","\x70","\xd4","\x38"),
	HX_HCSTRING("IMG_BUTTON_SIZE","\xd2","\xc7","\x3f","\xc5"),
	HX_HCSTRING("IMG_CHECK_MARK","\x60","\xac","\xf9","\x63"),
	HX_HCSTRING("IMG_CHECK_BOX","\xf8","\xe0","\x65","\x7c"),
	HX_HCSTRING("IMG_CHROME","\x96","\x21","\x80","\x08"),
	HX_HCSTRING("IMG_CHROME_LIGHT","\x0d","\x86","\x34","\xf9"),
	HX_HCSTRING("IMG_CHROME_FLAT","\x42","\x4e","\x80","\xc9"),
	HX_HCSTRING("IMG_CHROME_INSET","\x14","\xf2","\x57","\x42"),
	HX_HCSTRING("IMG_RADIO","\x3f","\xc4","\x64","\x41"),
	HX_HCSTRING("IMG_RADIO_DOT","\x29","\x73","\x54","\xd2"),
	HX_HCSTRING("IMG_TAB","\x99","\x10","\x98","\xc5"),
	HX_HCSTRING("IMG_TAB_BACK","\xcd","\xe2","\xaa","\xb4"),
	HX_HCSTRING("IMG_BOX","\x4f","\x74","\x8a","\xc5"),
	HX_HCSTRING("IMG_DROPDOWN","\x2d","\xbf","\x6e","\x75"),
	HX_HCSTRING("IMG_PLUS","\x76","\x04","\xda","\x1c"),
	HX_HCSTRING("IMG_MINUS","\xb4","\x33","\xb5","\x65"),
	HX_HCSTRING("IMG_HILIGHT","\x79","\xa2","\x80","\x25"),
	HX_HCSTRING("IMG_INVIS","\x5f","\xfa","\x6e","\x1b"),
	HX_HCSTRING("IMG_SWATCH","\x18","\xbd","\xff","\x05"),
	HX_HCSTRING("IMG_FINGER_SMALL","\x6d","\xe9","\x0d","\x04"),
	HX_HCSTRING("IMG_FINGER_BIG","\xe6","\x37","\x73","\x4a"),
	HX_HCSTRING("SLICE9_BUTTON","\xaa","\x06","\x4e","\xc7"),
	HX_HCSTRING("SLICE9_BUTTON_THIN","\x4e","\x7b","\x95","\x05"),
	HX_HCSTRING("SLICE9_BUTTON_TOGGLE","\xc9","\xff","\xdb","\xb8"),
	HX_HCSTRING("SLICE9_TAB","\x7d","\xda","\xd2","\xd0"),
	HX_HCSTRING("XML_DEFAULTS_ID","\xe0","\x0a","\x56","\xe9"),
	HX_HCSTRING("XML_DEFAULT_POPUP_ID","\xd4","\x98","\xd4","\x15"),
	HX_HCSTRING("XML_DEFAULT_LOADING_SCREEN_ID","\x05","\x71","\x0d","\x84"),
	HX_HCSTRING("index_size","\x4e","\xc0","\x2a","\x3c"),
	::String(null()) };

void FlxUIAssets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIAssets","\xb8","\x32","\xbf","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUIAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxUIAssets_obj >;
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

void FlxUIAssets_obj::__boot()
{
	IMG_BUTTON= HX_HCSTRING("flixel/flixel-ui/img/button.png","\x76","\x00","\xad","\x88");
	IMG_BUTTON_ARROW_DOWN= HX_HCSTRING("flixel/flixel-ui/img/button_arrow_down.png","\x57","\x14","\x5d","\xd4");
	IMG_BUTTON_ARROW_LEFT= HX_HCSTRING("flixel/flixel-ui/img/button_arrow_left.png","\x7c","\x5a","\x70","\xa6");
	IMG_BUTTON_ARROW_RIGHT= HX_HCSTRING("flixel/flixel-ui/img/button_arrow_right.png","\x1d","\x44","\x0c","\x52");
	IMG_BUTTON_ARROW_UP= HX_HCSTRING("flixel/flixel-ui/img/button_arrow_up.png","\x50","\xb0","\x49","\xc1");
	IMG_BUTTON_THIN= HX_HCSTRING("flixel/flixel-ui/img/button_thin.png","\x58","\x62","\x55","\x9f");
	IMG_BUTTON_TOGGLE= HX_HCSTRING("flixel/flixel-ui/img/button_toggle.png","\x13","\xee","\xc4","\xa2");
	IMG_BUTTON_SIZE= (int)18;
	IMG_CHECK_MARK= HX_HCSTRING("flixel/flixel-ui/img/check_mark.png","\x28","\xe6","\x7d","\xef");
	IMG_CHECK_BOX= HX_HCSTRING("flixel/flixel-ui/img/check_box.png","\x66","\x4a","\x70","\x4f");
	IMG_CHROME= HX_HCSTRING("flixel/flixel-ui/img/chrome.png","\xfe","\xfb","\x12","\x55");
	IMG_CHROME_LIGHT= HX_HCSTRING("flixel/flixel-ui/img/chrome_light.png","\xd5","\x1f","\x22","\x1f");
	IMG_CHROME_FLAT= HX_HCSTRING("flixel/flixel-ui/img/chrome_flat.png","\x30","\xcf","\x0a","\x80");
	IMG_CHROME_INSET= HX_HCSTRING("flixel/flixel-ui/img/chrome_inset.png","\x5c","\x9b","\x39","\x84");
	IMG_RADIO= HX_HCSTRING("flixel/flixel-ui/img/radio.png","\x8d","\xa3","\xb0","\x52");
	IMG_RADIO_DOT= HX_HCSTRING("flixel/flixel-ui/img/radio_dot.png","\x17","\x49","\xb2","\xeb");
	IMG_TAB= HX_HCSTRING("flixel/flixel-ui/img/tab.png","\x27","\x2e","\x82","\x04");
	IMG_TAB_BACK= HX_HCSTRING("flixel/flixel-ui/img/tab_back.png","\xd5","\xc5","\xcd","\xaa");
	IMG_BOX= HX_HCSTRING("flixel/flixel-ui/img/box.png","\xdd","\xa4","\xcf","\x5b");
	IMG_DROPDOWN= HX_HCSTRING("flixel/flixel-ui/img/dropdown_mark.png","\xcd","\xeb","\x34","\x3e");
	IMG_PLUS= HX_HCSTRING("flixel/flixel-ui/img/plus_mark.png","\xe4","\xf7","\x7a","\xbe");
	IMG_MINUS= HX_HCSTRING("flixel/flixel-ui/img/minus_mark.png","\x80","\xc9","\xb5","\x31");
	IMG_HILIGHT= HX_HCSTRING("flixel/flixel-ui/img/hilight.png","\x87","\x4d","\x54","\x73");
	IMG_INVIS= HX_HCSTRING("flixel/flixel-ui/img/invis.png","\xad","\x69","\xe0","\x09");
	IMG_SWATCH= HX_HCSTRING("flixel/flixel-ui/img/swatch.png","\x80","\x80","\x13","\x74");
	IMG_FINGER_SMALL= HX_HCSTRING("flixel/flixel-ui/img/finger_small.png","\x35","\xb3","\x60","\xfc");
	IMG_FINGER_BIG= HX_HCSTRING("flixel/flixel-ui/img/finger_big.png","\xee","\x88","\xa9","\x18");
	SLICE9_BUTTON= HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07");
	SLICE9_BUTTON_THIN= HX_HCSTRING("2,2,15,15","\x38","\x7b","\x83","\x18");
	SLICE9_BUTTON_TOGGLE= HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07");
	SLICE9_TAB= HX_HCSTRING("6,6,11,11","\xc0","\x1f","\xfa","\x07");
	XML_DEFAULTS_ID= HX_HCSTRING("flixel/flixel-ui/xml/defaults","\x47","\x50","\x6a","\x96");
	XML_DEFAULT_POPUP_ID= HX_HCSTRING("flixel/flixel-ui/xml/default_popup","\x19","\x21","\xfc","\xa0");
	XML_DEFAULT_LOADING_SCREEN_ID= HX_HCSTRING("flixel/flixel-ui/xml/default_loading_screen","\x82","\xa9","\x5d","\x67");
	index_size= null();
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
