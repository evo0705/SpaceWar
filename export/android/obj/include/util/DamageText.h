#ifndef INCLUDED_util_DamageText
#define INCLUDED_util_DamageText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS1(util,DamageText)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  DamageText_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef DamageText_obj OBJ_;
		DamageText_obj();
		Void __construct(::flixel::FlxSprite Object,::String __o_Label,int Damage,Dynamic __o_Color,Dynamic __o_BorderColor);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="util.DamageText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DamageText_obj > __new(::flixel::FlxSprite Object,::String __o_Label,int Damage,Dynamic __o_Color,Dynamic __o_BorderColor);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DamageText_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DamageText","\xdc","\xf0","\x6a","\xab"); }

		::flixel::text::FlxText damageText;
		::flixel::FlxSprite target;
		int frames;
		int color;
		int borderColor;
		virtual Void showDamage( ::String Label,int Damage,Float X,Float Y);
		Dynamic showDamage_dyn();

		virtual int getCountDown( );
		Dynamic getCountDown_dyn();

		virtual Void update( );

		virtual Void destroy( );

};

} // end namespace util

#endif /* INCLUDED_util_DamageText */ 
