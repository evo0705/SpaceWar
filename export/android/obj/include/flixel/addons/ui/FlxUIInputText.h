#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#define INCLUDED_flixel_addons_ui_FlxUIInputText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIInputText_obj : public ::flixel::addons::ui::FlxInputText_obj{
	public:
		typedef ::flixel::addons::ui::FlxInputText_obj super;
		typedef FlxUIInputText_obj OBJ_;
		FlxUIInputText_obj();
		Void __construct(Dynamic X,Dynamic Y,Dynamic Width,::String Text,Dynamic size,Dynamic TextColor,Dynamic BackgroundColor,Dynamic EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIInputText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUIInputText_obj > __new(Dynamic X,Dynamic Y,Dynamic Width,::String Text,Dynamic size,Dynamic TextColor,Dynamic BackgroundColor,Dynamic EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIInputText_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxSprite_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::IResizable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUIInputText","\xd1","\x55","\x62","\xcf"); }

		static void __boot();
		::String id;
		bool broadcastToFlxUI;
		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

		virtual Void onChange( ::String action);

		static ::String CHANGE_EVENT;
		static ::String ENTER_EVENT;
		static ::String DELETE_EVENT;
		static ::String INPUT_EVENT;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIInputText */ 
