#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#define INCLUDED_flixel_addons_ui_FlxUIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIButton_obj : public ::flixel::addons::ui::FlxUITypedButton_obj{
	public:
		typedef ::flixel::addons::ui::FlxUITypedButton_obj super;
		typedef FlxUIButton_obj OBJ_;
		FlxUIButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUIButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIButton_obj();

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
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::ILabeled_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
		operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUIButton","\xb8","\xb5","\x38","\x25"); }

		::openfl::_legacy::display::BitmapData _noIconGraphicsBkup;
		::flixel::addons::ui::ButtonLabelStyle up_style;
		::flixel::addons::ui::ButtonLabelStyle over_style;
		::flixel::addons::ui::ButtonLabelStyle down_style;
		::flixel::addons::ui::ButtonLabelStyle up_toggle_style;
		::flixel::addons::ui::ButtonLabelStyle over_toggle_style;
		::flixel::addons::ui::ButtonLabelStyle down_toggle_style;
		virtual ::flixel::addons::ui::FlxUIText setLabel( ::flixel::addons::ui::FlxUIText t);
		Dynamic setLabel_dyn();

		virtual ::flixel::addons::ui::FlxUIText getLabel( );
		Dynamic getLabel_dyn();

		virtual Void resize( Float W,Float H);

		virtual Void addIcon( ::flixel::FlxSprite icon,hx::Null< int >  X,hx::Null< int >  Y,Dynamic center);
		Dynamic addIcon_dyn();

		virtual Void removeIcon( );
		Dynamic removeIcon_dyn();

		virtual Void changeIcon( ::flixel::FlxSprite newIcon);
		Dynamic changeIcon_dyn();

		virtual Void destroy( );

		virtual Void resetHelpers( );

		virtual Void onDownHandler( );

		virtual Void onOverHandler( );

		virtual Void onOutHandler( );

		virtual Void onUpHandler( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIButton */ 
