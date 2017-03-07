#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#define INCLUDED_flixel_addons_ui_FlxUISpriteButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISpriteButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUISpriteButton_obj : public ::flixel::addons::ui::FlxUITypedButton_obj{
	public:
		typedef ::flixel::addons::ui::FlxUITypedButton_obj super;
		typedef FlxUISpriteButton_obj OBJ_;
		FlxUISpriteButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUISpriteButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUISpriteButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::flixel::FlxSprite Asset,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUISpriteButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxSprite_obj *();
		operator ::flixel::interfaces::IFlxDestroyable_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
		operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUISpriteButton","\x1d","\x70","\x35","\x6e"); }

		virtual Void resize( Float W,Float H);

		virtual Void autoCenterLabel( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUISpriteButton */ 
