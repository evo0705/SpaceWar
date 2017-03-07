#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#define INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxUIButton_obj : public ::flixel::interfaces::IFlxDestroyable_obj{
	public:
		typedef ::flixel::interfaces::IFlxDestroyable_obj super;
		typedef IFlxUIButton_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void autoCenterLabel( )=0;
		virtual Dynamic autoCenterLabel_dyn()=0;
		virtual Void loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  W,hx::Null< int >  H,Array< ::Dynamic > slice9,hx::Null< int >  Tile,hx::Null< Float >  Resize_Ratio,hx::Null< bool >  isToggle,hx::Null< int >  src_w,hx::Null< int >  src_h,Array< int > frame_indeces)=0;
		virtual Dynamic loadGraphicSlice9_dyn()=0;
		virtual Void loadGraphicsMultiple( Array< ::String > assets,::String Key)=0;
		virtual Dynamic loadGraphicsMultiple_dyn()=0;
		virtual Void loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  for_toggle,::String key)=0;
		virtual Dynamic loadGraphicsUpOverDown_dyn()=0;
		virtual Void forceStateHandler( ::String event)=0;
		virtual Dynamic forceStateHandler_dyn()=0;
};

#define DELEGATE_flixel_addons_ui_interfaces_IFlxUIButton \
virtual Void autoCenterLabel( ) { return mDelegate->autoCenterLabel();}  \
virtual Dynamic autoCenterLabel_dyn() { return mDelegate->autoCenterLabel_dyn();}  \
virtual Void loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  W,hx::Null< int >  H,Array< ::Dynamic > slice9,hx::Null< int >  Tile,hx::Null< Float >  Resize_Ratio,hx::Null< bool >  isToggle,hx::Null< int >  src_w,hx::Null< int >  src_h,Array< int > frame_indeces) { return mDelegate->loadGraphicSlice9(assets,W,H,slice9,Tile,Resize_Ratio,isToggle,src_w,src_h,frame_indeces);}  \
virtual Dynamic loadGraphicSlice9_dyn() { return mDelegate->loadGraphicSlice9_dyn();}  \
virtual Void loadGraphicsMultiple( Array< ::String > assets,::String Key) { return mDelegate->loadGraphicsMultiple(assets,Key);}  \
virtual Dynamic loadGraphicsMultiple_dyn() { return mDelegate->loadGraphicsMultiple_dyn();}  \
virtual Void loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  for_toggle,::String key) { return mDelegate->loadGraphicsUpOverDown(asset,for_toggle,key);}  \
virtual Dynamic loadGraphicsUpOverDown_dyn() { return mDelegate->loadGraphicsUpOverDown_dyn();}  \
virtual Void forceStateHandler( ::String event) { return mDelegate->forceStateHandler(event);}  \
virtual Dynamic forceStateHandler_dyn() { return mDelegate->forceStateHandler_dyn();}  \


template<typename IMPL>
class IFlxUIButton_delegate_ : public IFlxUIButton_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxUIButton_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_addons_ui_interfaces_IFlxUIButton
		DELEGATE_flixel_interfaces_IFlxDestroyable
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton */ 
