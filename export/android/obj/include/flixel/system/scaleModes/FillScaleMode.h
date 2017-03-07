#ifndef INCLUDED_flixel_system_scaleModes_FillScaleMode
#define INCLUDED_flixel_system_scaleModes_FillScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS3(flixel,_system,scaleModes,FillScaleMode)
namespace flixel{
namespace _system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES  FillScaleMode_obj : public ::flixel::_system::scaleModes::BaseScaleMode_obj{
	public:
		typedef ::flixel::_system::scaleModes::BaseScaleMode_obj super;
		typedef FillScaleMode_obj OBJ_;
		FillScaleMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.FillScaleMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FillScaleMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FillScaleMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FillScaleMode","\xea","\xd3","\x0c","\x55"); }

		virtual Void updateGamePosition( );

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_FillScaleMode */ 
