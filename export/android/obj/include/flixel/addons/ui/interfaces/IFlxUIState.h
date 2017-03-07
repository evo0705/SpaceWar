#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIState_obj : public ::flixel::addons::ui::interfaces::IEventGetter_obj{
	public:
		typedef ::flixel::addons::ui::interfaces::IEventGetter_obj super;
		typedef IFlxUIState_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing)=0;
		virtual Dynamic forceFocus_dyn()=0;
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIState \
virtual Void forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing) { return mDelegate->forceFocus(b,thing);}  \
virtual Dynamic forceFocus_dyn() { return mDelegate->forceFocus_dyn();}  \


template<typename IMPL>
class IFlxUIState_delegate_ : public IFlxUIState_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIState_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIState
		DELEGATE_flixel_addons_ui_interfaces_IEventGetter
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIState */ 
