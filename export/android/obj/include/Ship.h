#ifndef INCLUDED_Ship
#define INCLUDED_Ship

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(Ship)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS1(util,DamageText)
HX_DECLARE_CLASS1(util,EnemyHealthBar)
HX_DECLARE_CLASS1(util,PlayerHUD)


class HXCPP_CLASS_ATTRIBUTES  Ship_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Ship_obj OBJ_;
		Ship_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_IsPlayer,hx::Null< bool >  __o_IsEnemy,hx::Null< bool >  __o_IsBoss,hx::Null< Float >  __o_MaxHealth);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Ship")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Ship_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_IsPlayer,hx::Null< bool >  __o_IsEnemy,hx::Null< bool >  __o_IsBoss,hx::Null< Float >  __o_MaxHealth);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ship_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Ship","\xdc","\xfb","\x2b","\x37"); }

		::List weapons;
		Float movingSpeed;
		bool isPlayer;
		bool isEnemy;
		bool isBoss;
		bool isDamagable;
		Float maxHealth;
		::util::PlayerHUD playerHud;
		::util::EnemyHealthBar enemyHealthBar;
		bool _keyUp;
		bool _keyDown;
		bool _keyLeft;
		bool _keyRight;
		bool _keyShoot;
		Float _keyUpElapsed;
		Float _keyDownElapsed;
		Float _keyLeftElapsed;
		Float _keyRightElapsed;
		Float _keyMouseElapsed;
		Float _aiMovementDelay;
		Array< ::Dynamic > damageText;
		virtual Void update( );

		virtual Void movements( );
		Dynamic movements_dyn();

		virtual Void hit( Float Damage,Dynamic DisplayDamage);
		Dynamic hit_dyn();

		virtual Void ai( );
		Dynamic ai_dyn();

		virtual Void kill( );

};


#endif /* INCLUDED_Ship */ 
