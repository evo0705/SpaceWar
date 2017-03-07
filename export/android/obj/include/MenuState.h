#ifndef INCLUDED_MenuState
#define INCLUDED_MenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(MenuState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  MenuState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef MenuState_obj OBJ_;
		MenuState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MenuState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MenuState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0"); }

		::flixel::group::FlxGroup _playerGroup;
		::flixel::group::FlxGroup _playerBulletGroup;
		::flixel::group::FlxGroup _playerBulletParticleGroup;
		::flixel::group::FlxGroup _playerDamageGroup;
		::flixel::group::FlxGroup _playerHUDGroup;
		::flixel::group::FlxGroup _enemyGroup;
		::flixel::group::FlxGroup _enemyBulletGroup;
		::flixel::group::FlxGroup _enemyBulletParticleGroup;
		::flixel::group::FlxGroup _enemyDamageGroup;
		::flixel::group::FlxGroup _enemyBarGroup;
		::flixel::group::FlxTypedGroup _sortableGroup;
		int FramesPerHeavyProcess;
		int _framesUntilHeavyProcess;
		Float _seconds;
		::Enemy _enemies;
		Float _ticks;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual int sortByY( int order,::flixel::FlxObject o1,::flixel::FlxObject o2);
		Dynamic sortByY_dyn();

};


#endif /* INCLUDED_MenuState */ 
