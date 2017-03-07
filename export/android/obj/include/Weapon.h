#ifndef INCLUDED_Weapon
#define INCLUDED_Weapon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS0(BulletProperties)
HX_DECLARE_CLASS0(Particle)
HX_DECLARE_CLASS0(Weapon)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)


class HXCPP_CLASS_ATTRIBUTES  Weapon_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Weapon_obj OBJ_;
		Weapon_obj();
		Void __construct(::String Name,::flixel::FlxSprite ParentRef,::hx::Class BulletType,Dynamic __o_BulletID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Weapon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Weapon_obj > __new(::String Name,::flixel::FlxSprite ParentRef,::hx::Class BulletType,Dynamic __o_BulletID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Weapon_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Weapon","\xfc","\x0a","\xf8","\x30"); }

		static void __boot();
		::String name;
		::flixel::group::FlxTypedGroup group;
		::flixel::group::FlxTypedGroup groupParticle;
		::hx::Class bulletType;
		int bulletID;
		int nextFire;
		int fireRate;
		::flixel::util::FlxRect bounds;
		::flixel::FlxSprite parent;
		::BulletProperties bulletProperties;
		Float bulletLifeSpan;
		Float bulletDamage;
		Float bulletElasticity;
		int rndFactorAngle;
		int rndFactorSpeed;
		Float rndFactorLifeSpan;
		::flixel::util::FlxPoint rndFactorPosition;
		::Bullet currentBullet;
		Dynamic onPreFireCallback;
		Dynamic &onPreFireCallback_dyn() { return onPreFireCallback;}
		Dynamic onFireCallback;
		Dynamic &onFireCallback_dyn() { return onFireCallback;}
		Dynamic onPostFireCallback;
		Dynamic &onPostFireCallback_dyn() { return onPostFireCallback;}
		::flixel::_system::FlxSound onPreFireSound;
		::flixel::_system::FlxSound onFireSound;
		::flixel::_system::FlxSound onPostFireSound;
		bool _rotateToAngle;
		::flixel::util::FlxPoint _velocity;
		bool _fireFromPosition;
		int _fireX;
		int _fireY;
		int _lastFired;
		::flixel::input::touch::FlxTouch _touchTarget;
		bool _fireFromParent;
		::flixel::util::FlxPoint _positionOffset;
		bool _directionFromParent;
		bool _angleFromParent;
		int _bulletsFired;
		int _currentMagazine;
		int _magazineCount;
		int _bulletsPerMagazine;
		int _magazineSwapDelay;
		bool _skipParentCollision;
		Dynamic _magazineSwapCallback;
		::flixel::_system::FlxSound _magazineSwapSound;
		virtual Void makeBullet( int Quantity,::BulletProperties BulletProp,bool Looped,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY);
		Dynamic makeBullet_dyn();

		virtual bool runFire( int Method,hx::Null< int >  X,hx::Null< int >  Y,::flixel::FlxSprite Target,hx::Null< int >  Angle);
		Dynamic runFire_dyn();

		virtual bool fire( );
		Dynamic fire_dyn();

		virtual bool fireAtMouse( );
		Dynamic fireAtMouse_dyn();

		virtual bool fireAtTouch( ::flixel::input::touch::FlxTouch Touch);
		Dynamic fireAtTouch_dyn();

		virtual bool fireAtPosition( int X,int Y);
		Dynamic fireAtPosition_dyn();

		virtual bool fireAtTarget( ::flixel::FlxSprite Target);
		Dynamic fireAtTarget_dyn();

		virtual bool fireFromAngle( int Angle);
		Dynamic fireFromAngle_dyn();

		virtual bool fireFromParentAngle( );
		Dynamic fireFromParentAngle_dyn();

		virtual Void setParent( ::flixel::FlxSprite ParentRef,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY,hx::Null< bool >  UseDirection);
		Dynamic setParent_dyn();

		virtual Void setFiringPosition( int X,int Y,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY);
		Dynamic setFiringPosition_dyn();

		virtual Void setBulletSpeed( int Speed);
		Dynamic setBulletSpeed_dyn();

		virtual int getBulletSpeed( );
		Dynamic getBulletSpeed_dyn();

		virtual Void setFireRate( int Rate);
		Dynamic setFireRate_dyn();

		virtual Void setBulletBounds( ::flixel::util::FlxRect Bounds);
		Dynamic setBulletBounds_dyn();

		virtual Void setBulletDirection( int Angle,int Speed);
		Dynamic setBulletDirection_dyn();

		virtual Void setBulletGravity( int ForceX,int ForceY);
		Dynamic setBulletGravity_dyn();

		virtual Void setBulletAcceleration( int AccelerationX,int AccelerationY,int SpeedMaxX,int SpeedMaxY);
		Dynamic setBulletAcceleration_dyn();

		virtual Void setBulletOffset( Float OffsetX,Float OffsetY);
		Dynamic setBulletOffset_dyn();

		virtual Void setBulletRandomFactor( hx::Null< int >  RandomAngle,hx::Null< int >  RandomSpeed,::flixel::util::FlxPoint RandomPosition,hx::Null< Float >  RandomLifeSpan);
		Dynamic setBulletRandomFactor_dyn();

		virtual Void setBulletLifeSpan( Float Lifespan);
		Dynamic setBulletLifeSpan_dyn();

		virtual Void setBulletElasticity( Float Elasticity);
		Dynamic setBulletElasticity_dyn();

		virtual ::Bullet getFreeBullet( );
		Dynamic getFreeBullet_dyn();

		virtual ::Particle getFreeParticle( );
		Dynamic getFreeParticle_dyn();

		virtual Void setPreFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound);
		Dynamic setPreFireCallback_dyn();

		virtual Void setFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound);
		Dynamic setFireCallback_dyn();

		virtual Void setPostFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound);
		Dynamic setPostFireCallback_dyn();

		virtual Void bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  SkipParent);
		Dynamic bulletsOverlap_dyn();

		virtual bool shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet);
		Dynamic shouldBulletHit_dyn();

		virtual Void onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet);
		Dynamic onBulletHit_dyn();

		static int BULLET_UP;
		static int BULLET_DOWN;
		static int BULLET_LEFT;
		static int BULLET_RIGHT;
		static int BULLET_NORTH_EAST;
		static int BULLET_NORTH_WEST;
		static int BULLET_SOUTH_EAST;
		static int BULLET_SOUTH_WEST;
		static int FIRE;
		static int FIRE_AT_MOUSE;
		static int FIRE_AT_POSITION;
		static int FIRE_AT_TARGET;
		static int FIRE_FROM_ANGLE;
		static int FIRE_FROM_PARENT_ANGLE;
		static int FIRE_AT_TOUCH;
};


#endif /* INCLUDED_Weapon */ 
