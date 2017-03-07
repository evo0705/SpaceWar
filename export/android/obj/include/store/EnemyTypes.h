#ifndef INCLUDED_store_EnemyTypes
#define INCLUDED_store_EnemyTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(store,EnemyTypes)
namespace store{


class EnemyTypes_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnemyTypes_obj OBJ_;

	public:
		EnemyTypes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("store.EnemyTypes","\x9e","\xf8","\x82","\x5a"); }
		::String __ToString() const { return HX_HCSTRING("EnemyTypes.","\xdd","\xfd","\x1b","\x23") + tag; }

		static ::store::EnemyTypes Wolf;
		static inline ::store::EnemyTypes Wolf_dyn() { return Wolf; }
};

} // end namespace store

#endif /* INCLUDED_store_EnemyTypes */ 
