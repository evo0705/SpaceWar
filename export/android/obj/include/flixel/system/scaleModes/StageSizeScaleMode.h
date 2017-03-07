#ifndef INCLUDED_flixel_system_scaleModes_StageSizeScaleMode
#define INCLUDED_flixel_system_scaleModes_StageSizeScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS3(flixel,_system,scaleModes,StageSizeScaleMode)
namespace flixel{
namespace _system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES  StageSizeScaleMode_obj : public ::flixel::_system::scaleModes::BaseScaleMode_obj{
	public:
		typedef ::flixel::_system::scaleModes::BaseScaleMode_obj super;
		typedef StageSizeScaleMode_obj OBJ_;
		StageSizeScaleMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.StageSizeScaleMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StageSizeScaleMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageSizeScaleMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StageSizeScaleMode","\x8e","\x24","\xb4","\x2f"); }

		virtual Void onMeasure( int Width,int Height);

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_StageSizeScaleMode */ 
