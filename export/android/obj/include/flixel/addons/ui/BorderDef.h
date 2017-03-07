#ifndef INCLUDED_flixel_addons_ui_BorderDef
#define INCLUDED_flixel_addons_ui_BorderDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  BorderDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BorderDef_obj OBJ_;
		BorderDef_obj();
		Void __construct(int Style,int Color,hx::Null< int >  __o_Size,hx::Null< Float >  __o_Quality);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.addons.ui.BorderDef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BorderDef_obj > __new(int Style,int Color,hx::Null< int >  __o_Size,hx::Null< Float >  __o_Quality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BorderDef_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BorderDef","\x19","\x60","\x62","\x22"); }

		int style;
		int color;
		int size;
		Float quality;
		virtual Void apply( ::flixel::text::FlxText f);
		Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_BorderDef */ 
