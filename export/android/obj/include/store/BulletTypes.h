#ifndef INCLUDED_store_BulletTypes
#define INCLUDED_store_BulletTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(store,BulletTypes)
namespace store{


class BulletTypes_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BulletTypes_obj OBJ_;

	public:
		BulletTypes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("store.BulletTypes","\xaa","\x0a","\xd2","\x66"); }
		::String __ToString() const { return HX_HCSTRING("BulletTypes.","\x97","\x69","\xb0","\xea") + tag; }

		static ::store::BulletTypes Nova;
		static inline ::store::BulletTypes Nova_dyn() { return Nova; }
		static ::store::BulletTypes RedLaser;
		static inline ::store::BulletTypes RedLaser_dyn() { return RedLaser; }
		static ::store::BulletTypes RedLaserTurbo;
		static inline ::store::BulletTypes RedLaserTurbo_dyn() { return RedLaserTurbo; }
		static ::store::BulletTypes RedLaserTurboPlusOne;
		static inline ::store::BulletTypes RedLaserTurboPlusOne_dyn() { return RedLaserTurboPlusOne; }
		static ::store::BulletTypes RedLaserTurboPlusTwo;
		static inline ::store::BulletTypes RedLaserTurboPlusTwo_dyn() { return RedLaserTurboPlusTwo; }
		static ::store::BulletTypes Shocker;
		static inline ::store::BulletTypes Shocker_dyn() { return Shocker; }
		static ::store::BulletTypes ShockerTurbo;
		static inline ::store::BulletTypes ShockerTurbo_dyn() { return ShockerTurbo; }
		static ::store::BulletTypes ShockerTurboPlusOne;
		static inline ::store::BulletTypes ShockerTurboPlusOne_dyn() { return ShockerTurboPlusOne; }
		static ::store::BulletTypes ShockerTurboPlusTwo;
		static inline ::store::BulletTypes ShockerTurboPlusTwo_dyn() { return ShockerTurboPlusTwo; }
};

} // end namespace store

#endif /* INCLUDED_store_BulletTypes */ 
