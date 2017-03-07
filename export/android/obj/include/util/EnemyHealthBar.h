#ifndef INCLUDED_util_EnemyHealthBar
#define INCLUDED_util_EnemyHealthBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Ship)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS1(util,EnemyHealthBar)
namespace util{


class HXCPP_CLASS_ATTRIBUTES  EnemyHealthBar_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EnemyHealthBar_obj OBJ_;
		EnemyHealthBar_obj();
		Void __construct(::Ship Parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="util.EnemyHealthBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyHealthBar_obj > __new(::Ship Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyHealthBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EnemyHealthBar","\x4f","\x63","\x3f","\x08"); }

		::flixel::ui::FlxBar bar;
};

} // end namespace util

#endif /* INCLUDED_util_EnemyHealthBar */ 
