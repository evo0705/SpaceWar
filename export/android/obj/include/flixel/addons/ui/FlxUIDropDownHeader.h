#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#define INCLUDED_flixel_addons_ui_FlxUIDropDownHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownHeader)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISpriteButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIDropDownHeader_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIDropDownHeader_obj OBJ_;
		FlxUIDropDownHeader_obj();
		Void __construct(hx::Null< int >  __o_Width,::flixel::FlxSprite Background,::flixel::addons::ui::FlxUIText Text,::flixel::addons::ui::FlxUISpriteButton Button);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIDropDownHeader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUIDropDownHeader_obj > __new(hx::Null< int >  __o_Width,::flixel::FlxSprite Background,::flixel::addons::ui::FlxUIText Text,::flixel::addons::ui::FlxUISpriteButton Button);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIDropDownHeader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxUIDropDownHeader","\x64","\x62","\x8b","\xfe"); }

		::flixel::FlxSprite background;
		::flixel::addons::ui::FlxUIText text;
		::flixel::addons::ui::FlxUISpriteButton button;
		virtual Void destroy( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIDropDownHeader */ 
