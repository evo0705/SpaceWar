#ifndef INCLUDED_store_BulletStore
#define INCLUDED_store_BulletStore

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BulletProperties)
HX_DECLARE_CLASS1(store,BulletStore)
namespace store{


class HXCPP_CLASS_ATTRIBUTES  BulletStore_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BulletStore_obj OBJ_;
		BulletStore_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="store.BulletStore")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BulletStore_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BulletStore_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BulletStore","\x1f","\x1a","\x22","\x1b"); }

		static ::BulletProperties Blaster( );
		static Dynamic Blaster_dyn();

		static ::BulletProperties TurboBlaster( );
		static Dynamic TurboBlaster_dyn();

		static ::BulletProperties Shocker( );
		static Dynamic Shocker_dyn();

		static ::BulletProperties TurboShocker( );
		static Dynamic TurboShocker_dyn();

		static ::BulletProperties Nova( );
		static Dynamic Nova_dyn();

		static ::BulletProperties UltraNova( );
		static Dynamic UltraNova_dyn();

		static ::BulletProperties MachineGunClockwise( );
		static Dynamic MachineGunClockwise_dyn();

		static ::BulletProperties MachineGunAntiClockwise( );
		static Dynamic MachineGunAntiClockwise_dyn();

};

} // end namespace store

#endif /* INCLUDED_store_BulletStore */ 
