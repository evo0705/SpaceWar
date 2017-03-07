#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#define INCLUDED_flixel_addons_ui_interfaces_IFireTongue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFireTongue_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFireTongue_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get( ::String flag,::String context,hx::Null< bool >  safe)=0;
		virtual Dynamic get_dyn()=0;
		virtual ::String get_locale( )=0;
		virtual Dynamic get_locale_dyn()=0;
};

#define DELEGATE_flixel_addons_ui_interfaces_IFireTongue \
virtual ::String get( ::String flag,::String context,hx::Null< bool >  safe) { return mDelegate->get(flag,context,safe);}  \
virtual Dynamic get_dyn() { return mDelegate->get_dyn();}  \
virtual ::String get_locale( ) { return mDelegate->get_locale();}  \
virtual Dynamic get_locale_dyn() { return mDelegate->get_locale_dyn();}  \


template<typename IMPL>
class IFireTongue_delegate_ : public IFireTongue_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFireTongue_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFireTongue
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFireTongue */ 
