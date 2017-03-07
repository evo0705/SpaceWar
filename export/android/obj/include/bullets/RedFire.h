#ifndef INCLUDED_bullets_RedFire
#define INCLUDED_bullets_RedFire

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(bullets,RedFire)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace bullets{


class HXCPP_CLASS_ATTRIBUTES  RedFire_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef RedFire_obj OBJ_;
		RedFire_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="bullets.RedFire")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RedFire_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RedFire_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("RedFire","\x87","\x7d","\x92","\x76"); }

		Float movingSpeed;
		Float numOfBullets;
		virtual Void update( );

		virtual Void destroy( );

};

} // end namespace bullets

#endif /* INCLUDED_bullets_RedFire */ 
