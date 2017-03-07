#ifndef INCLUDED_Particle
#define INCLUDED_Particle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Particle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Particle_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Particle_obj OBJ_;
		Particle_obj();
		Void __construct(Dynamic SimpleGraphic,int Width,int Height,Array< int > Frames,hx::Null< int >  __o_FrameRate,Dynamic __o_Alpha);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Particle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Particle_obj > __new(Dynamic SimpleGraphic,int Width,int Height,Array< int > Frames,hx::Null< int >  __o_FrameRate,Dynamic __o_Alpha);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Particle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Particle","\x66","\xfa","\x42","\x46"); }

		Float duration;
		virtual Void start( Float X,Float Y);
		Dynamic start_dyn();

		virtual Void update( );

};


#endif /* INCLUDED_Particle */ 
