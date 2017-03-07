#ifndef INCLUDED_util_PlayerHUD
#define INCLUDED_util_PlayerHUD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
HX_DECLARE_CLASS0(Ship)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS1(util,PlayerHUD)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  PlayerHUD_obj : public ::flixel::group::FlxGroup_obj{
	public:
		typedef ::flixel::group::FlxGroup_obj super;
		typedef PlayerHUD_obj OBJ_;
		PlayerHUD_obj();
		Void __construct(::Ship Parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="util.PlayerHUD")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerHUD_obj > __new(::Ship Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerHUD_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayerHUD","\xb6","\x73","\x93","\xa2"); }

		::flixel::ui::FlxBar healthBar;
		::flixel::text::FlxText health;
		::Ship _parent;
		virtual Void update( );

};

} // end namespace util

#endif /* INCLUDED_util_PlayerHUD */ 
