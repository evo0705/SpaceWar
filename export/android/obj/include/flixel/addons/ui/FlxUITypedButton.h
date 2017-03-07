#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#define INCLUDED_flixel_addons_ui_FlxUITypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUITypedButton_obj : public ::flixel::ui::FlxTypedButton_obj{
	public:
		typedef ::flixel::ui::FlxTypedButton_obj super;
		typedef FlxUITypedButton_obj OBJ_;
		FlxUITypedButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITypedButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUITypedButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUITypedButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::interfaces::IFlxSprite_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::IResizable_obj *();
		operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
		operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUITypedButton","\x76","\xb0","\x9b","\xce"); }

		static void __boot();
		::String id;
		Float resize_ratio;
		::flixel::util::FlxPoint resize_point;
		int tile;
		bool has_toggle;
		bool toggled;
		bool broadcastToFlxUI;
		int up_color;
		int over_color;
		int down_color;
		int up_toggle_color;
		int over_toggle_color;
		int down_toggle_color;
		bool up_visible;
		bool over_visible;
		bool down_visible;
		bool up_toggle_visible;
		bool over_toggle_visible;
		bool down_toggle_visible;
		bool round_labels;
		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		cpp::ArrayBase params;
		virtual cpp::ArrayBase set_params( cpp::ArrayBase p);
		Dynamic set_params_dyn();

		virtual Void destroy( );

		virtual Void setAllLabelOffsets( Float X,Float Y);
		Dynamic setAllLabelOffsets_dyn();

		virtual Void update( );

		virtual Void resize( Float W,Float H);
		Dynamic resize_dyn();

		virtual Void loadGraphicsMultiple( Array< ::String > assets,::String Key);
		Dynamic loadGraphicsMultiple_dyn();

		virtual Void loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  for_toggle,::String key);
		Dynamic loadGraphicsUpOverDown_dyn();

		virtual Void loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  W,hx::Null< int >  H,Array< ::Dynamic > slice9,hx::Null< int >  Tile,hx::Null< Float >  Resize_Ratio,hx::Null< bool >  isToggle,hx::Null< int >  src_w,hx::Null< int >  src_h,Array< int > frame_indeces);
		Dynamic loadGraphicSlice9_dyn();

		virtual Void autoCenterLabel( );
		Dynamic autoCenterLabel_dyn();

		virtual Void setCenterLabelOffset( Float X,Float Y);
		Dynamic setCenterLabelOffset_dyn();

		virtual Void forceStateHandler( ::String event);
		Dynamic forceStateHandler_dyn();

		virtual ::openfl::_legacy::display::BitmapData grabButtonFrame( ::openfl::_legacy::display::BitmapData all_frames,int button_state,hx::Null< bool >  for_toggle,hx::Null< int >  src_w,hx::Null< int >  src_h);
		Dynamic grabButtonFrame_dyn();

		virtual ::openfl::_legacy::display::BitmapData combineToggleBitmaps( ::openfl::_legacy::display::BitmapData normal,::openfl::_legacy::display::BitmapData toggle);
		Dynamic combineToggleBitmaps_dyn();

		virtual ::openfl::_legacy::display::BitmapData assembleButtonFrames( ::openfl::_legacy::display::BitmapData upB,::openfl::_legacy::display::BitmapData overB,::openfl::_legacy::display::BitmapData downB);
		Dynamic assembleButtonFrames_dyn();

		virtual Void updateButton( );

		virtual Void onUpHandler( );

		virtual Void onDownHandler( );

		virtual Void onOverHandler( );

		virtual Void onOutHandler( );

		virtual Float set_x( Float NewX);

		virtual Float set_y( Float NewY);

		bool _no_graphic;
		int _src_w;
		int _src_h;
		Array< int > _frame_indeces;
		Array< ::Dynamic > _slice9_arrays;
		Array< ::String > _slice9_assets;
		::flixel::util::FlxPoint _centerLabelOffset;
		static ::String CLICK_EVENT;
		static ::String OVER_EVENT;
		static ::String DOWN_EVENT;
		static ::String OUT_EVENT;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITypedButton */ 
