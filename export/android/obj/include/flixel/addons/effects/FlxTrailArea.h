#ifndef INCLUDED_flixel_addons_effects_FlxTrailArea
#define INCLUDED_flixel_addons_effects_FlxTrailArea

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrailArea)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
namespace flixel{
namespace addons{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES  FlxTrailArea_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxTrailArea_obj OBJ_;
		FlxTrailArea_obj();
		Void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_AlphaMultiplier,hx::Null< int >  __o_Delay,hx::Null< bool >  __o_SimpleRender,hx::Null< bool >  __o_Antialiasing,::openfl::_legacy::display::BlendMode TrailBlendMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.FlxTrailArea")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTrailArea_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_AlphaMultiplier,hx::Null< int >  __o_Delay,hx::Null< bool >  __o_SimpleRender,hx::Null< bool >  __o_Antialiasing,::openfl::_legacy::display::BlendMode TrailBlendMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTrailArea_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTrailArea","\xc1","\xef","\x71","\x42"); }

		int delay;
		bool simpleRender;
		::openfl::_legacy::display::BlendMode blendMode;
		::flixel::group::FlxTypedGroup group;
		Float redMultiplier;
		Float greenMultiplier;
		Float blueMultiplier;
		Float alphaMultiplier;
		Float redOffset;
		Float greenOffset;
		Float blueOffset;
		Float alphaOffset;
		int _counter;
		Float _width;
		Float _height;
		virtual Void setSize( Float Width,Float Height);

		virtual Void destroy( );

		virtual Void draw( );

		virtual Void resetTrail( );
		Dynamic resetTrail_dyn();

		virtual ::flixel::FlxSprite add( ::flixel::FlxSprite Sprite);
		Dynamic add_dyn();

		virtual Float get_width( );

		virtual Float set_width( Float Width);

		virtual Float get_height( );

		virtual Float set_height( Float Height);

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects

#endif /* INCLUDED_flixel_addons_effects_FlxTrailArea */ 
