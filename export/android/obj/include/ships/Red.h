#ifndef INCLUDED_ships_Red
#define INCLUDED_ships_Red

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS1(ships,Red)
namespace ships{


class HXCPP_CLASS_ATTRIBUTES  Red_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Red_obj OBJ_;
		Red_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ships.Red")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Red_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Red_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Red","\x31","\x91","\x3e","\x00"); }

		Float movingSpeed;
		Float bodyWeight;
		Float fireRate;
		bool autoFire;
		Float _fireRateDelay;
		bool _keyUp;
		bool _keyDown;
		bool _keyLeft;
		bool _keyRight;
		bool _keyShoot;
		virtual Void update( );

		virtual Void movements( );
		Dynamic movements_dyn();

		virtual Void shootings( );
		Dynamic shootings_dyn();

		virtual Void destroy( );

};

} // end namespace ships

#endif /* INCLUDED_ships_Red */ 
