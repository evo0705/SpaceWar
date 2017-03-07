#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#define INCLUDED_flixel_addons_ui_FlxUIRegion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRegion)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIRegion_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxUIRegion_obj OBJ_;
		FlxUIRegion_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIRegion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUIRegion_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIRegion_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxUIRegion","\xba","\x14","\xe5","\x4b"); }

		bool broadcastToFlxUI;
		::String id;
		virtual Void destroy( );

		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIRegion */ 
