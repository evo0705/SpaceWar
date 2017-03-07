#ifndef INCLUDED_ShotPattern
#define INCLUDED_ShotPattern

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ShotPattern)


class HXCPP_CLASS_ATTRIBUTES  ShotPattern_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ShotPattern_obj OBJ_;
		ShotPattern_obj();
		Void __construct(Float OffsetX,Float OffsetY,int OffsetAngle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ShotPattern")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ShotPattern_obj > __new(Float OffsetX,Float OffsetY,int OffsetAngle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShotPattern_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ShotPattern","\x56","\xe4","\xad","\x26"); }

		Float offsetX;
		Float offsetY;
		int offsetAngle;
};


#endif /* INCLUDED_ShotPattern */ 
