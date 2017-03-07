#ifndef INCLUDED__StarField_ClsStar
#define INCLUDED__StarField_ClsStar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_StarField,ClsStar)
namespace _StarField{


class HXCPP_CLASS_ATTRIBUTES  ClsStar_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClsStar_obj OBJ_;
		ClsStar_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="_StarField.ClsStar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClsStar_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClsStar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ClsStar","\x7c","\xd2","\xf2","\x7e"); }

		int index;
		Float x;
		Float y;
		Float d;
		Float r;
		Float speed;
};

} // end namespace _StarField

#endif /* INCLUDED__StarField_ClsStar */ 
