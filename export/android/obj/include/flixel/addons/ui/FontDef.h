#ifndef INCLUDED_flixel_addons_ui_FontDef
#define INCLUDED_flixel_addons_ui_FontDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FontDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FontDef_obj OBJ_;
		FontDef_obj();
		Void __construct(::String Name,Dynamic Size,::String Style);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FontDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FontDef_obj > __new(::String Name,Dynamic Size,::String Style);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontDef_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FontDef","\x16","\x07","\x70","\x63"); }

		::String name;
		Dynamic size;
		::String style;
		virtual Void apply( ::flixel::text::FlxText f);
		Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FontDef */ 
