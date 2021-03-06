#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIClickable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxUIClickable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool set_skipButtonUpdate( bool value)=0;
		virtual Dynamic set_skipButtonUpdate_dyn()=0;
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIClickable \
virtual bool set_skipButtonUpdate( bool value) { return mDelegate->set_skipButtonUpdate(value);}  \
virtual Dynamic set_skipButtonUpdate_dyn() { return mDelegate->set_skipButtonUpdate_dyn();}  \


template<typename IMPL>
class IFlxUIClickable_delegate_ : public IFlxUIClickable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIClickable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIClickable
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable */ 
