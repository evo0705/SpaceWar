#ifndef INCLUDED_store_EnemyStore
#define INCLUDED_store_EnemyStore

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Ship)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS1(store,EnemyStore)
namespace store{


class HXCPP_CLASS_ATTRIBUTES  EnemyStore_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EnemyStore_obj OBJ_;
		EnemyStore_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="store.EnemyStore")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EnemyStore_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnemyStore_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EnemyStore","\x99","\x30","\xca","\x35"); }

		static ::Ship Wolf( );
		static Dynamic Wolf_dyn();

		static ::Ship Rhino( );
		static Dynamic Rhino_dyn();

};

} // end namespace store

#endif /* INCLUDED_store_EnemyStore */ 
