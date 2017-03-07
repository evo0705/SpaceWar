#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#define INCLUDED_flixel_addons_ui_StrIdLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,StrIdLabel)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  StrIdLabel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StrIdLabel_obj OBJ_;
		StrIdLabel_obj();
		Void __construct(::String __o_Id,::String __o_Label);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.StrIdLabel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StrIdLabel_obj > __new(::String __o_Id,::String __o_Label);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StrIdLabel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StrIdLabel","\x88","\xb3","\x2a","\x40"); }

		::String id;
		::String label;
		virtual ::flixel::addons::ui::StrIdLabel copy( );
		Dynamic copy_dyn();

		static int sortByLabel( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b);
		static Dynamic sortByLabel_dyn();

		static int sortById( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b);
		static Dynamic sortById_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_StrIdLabel */ 
