#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#define INCLUDED_flixel_addons_ui_interfaces_IEventGetter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IEventGetter_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IEventGetter_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params)=0;
		virtual Dynamic getEvent_dyn()=0;
		virtual Dynamic getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params)=0;
		virtual Dynamic getRequest_dyn()=0;
};

#define DELEGATE_flixel_addons_ui_interfaces_IEventGetter \
virtual Void getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params) { return mDelegate->getEvent(name,sender,data,params);}  \
virtual Dynamic getEvent_dyn() { return mDelegate->getEvent_dyn();}  \
virtual Dynamic getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params) { return mDelegate->getRequest(name,sender,data,params);}  \
virtual Dynamic getRequest_dyn() { return mDelegate->getRequest_dyn();}  \


template<typename IMPL>
class IEventGetter_delegate_ : public IEventGetter_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IEventGetter_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IEventGetter
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IEventGetter */ 
