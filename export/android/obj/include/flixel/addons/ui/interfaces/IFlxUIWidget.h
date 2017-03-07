#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIWidget_obj : public ::flixel::interfaces::IFlxSprite_obj{
	public:
		typedef ::flixel::interfaces::IFlxSprite_obj super;
		typedef IFlxUIWidget_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float get_width( )=0;
		virtual Dynamic get_width_dyn()=0;
		virtual Float set_width( Float value)=0;
		virtual Dynamic set_width_dyn()=0;
		virtual Float get_height( )=0;
		virtual Dynamic get_height_dyn()=0;
		virtual Float set_height( Float value)=0;
		virtual Dynamic set_height_dyn()=0;
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIWidget \
virtual Float get_width( ) { return mDelegate->get_width();}  \
virtual Dynamic get_width_dyn() { return mDelegate->get_width_dyn();}  \
virtual Float set_width( Float value) { return mDelegate->set_width(value);}  \
virtual Dynamic set_width_dyn() { return mDelegate->set_width_dyn();}  \
virtual Float get_height( ) { return mDelegate->get_height();}  \
virtual Dynamic get_height_dyn() { return mDelegate->get_height_dyn();}  \
virtual Float set_height( Float value) { return mDelegate->set_height(value);}  \
virtual Dynamic set_height_dyn() { return mDelegate->set_height_dyn();}  \


template<typename IMPL>
class IFlxUIWidget_delegate_ : public IFlxUIWidget_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIWidget_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIWidget
		DELEGATE_flixel_interfaces_IFlxSprite
		DELEGATE_flixel_interfaces_IFlxBasic
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget */ 
