#ifndef INCLUDED_WeaponHost
#define INCLUDED_WeaponHost

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(BulletProperties)
HX_DECLARE_CLASS0(Ship)
HX_DECLARE_CLASS0(Weapon)
HX_DECLARE_CLASS0(WeaponHost)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  WeaponHost_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef WeaponHost_obj OBJ_;
		WeaponHost_obj();
		Void __construct(::String Name,::Ship ParentRef,Dynamic SimpleGraphic,::flixel::util::FlxPoint Offset,Dynamic __o_AutoFire);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="WeaponHost")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeaponHost_obj > __new(::String Name,::Ship ParentRef,Dynamic SimpleGraphic,::flixel::util::FlxPoint Offset,Dynamic __o_AutoFire);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeaponHost_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WeaponHost","\x84","\x34","\xab","\x57"); }

		::Weapon weapon;
		bool autoFire;
		::Ship _parent;
		::BulletProperties _bulletProp;
		Float _minDamage;
		Float _maxDamage;
		virtual ::Ship getParent( );
		Dynamic getParent_dyn();

		virtual Void setWeaponBullet( ::BulletProperties BulletProp);
		Dynamic setWeaponBullet_dyn();

		virtual Void setAngle( hx::Null< Float >  Angle);
		Dynamic setAngle_dyn();

		virtual Void hurt( Float Damage);

		virtual Void update( );

		virtual Void fire( );
		Dynamic fire_dyn();

};


#endif /* INCLUDED_WeaponHost */ 
