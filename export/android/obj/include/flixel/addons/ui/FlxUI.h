#ifndef INCLUDED_flixel_addons_ui_FlxUI
#define INCLUDED_flixel_addons_ui_FlxUI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRadioGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRegion)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITileTest)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFireTongue)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUI_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUI_obj OBJ_;
		FlxUI_obj();
		Void __construct(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUI_obj > __new(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUI_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUI","\x26","\xff","\xca","\x95"); }

		bool do_safe_input_delay;
		Float safe_input_delay_time;
		bool failed;
		Float failed_by;
		virtual ::flixel::addons::ui::interfaces::IFireTongue get_tongue( );
		Dynamic get_tongue_dyn();

		virtual ::flixel::addons::ui::interfaces::IFireTongue set_tongue( ::flixel::addons::ui::interfaces::IFireTongue t);
		Dynamic set_tongue_dyn();

		::flixel::addons::ui::interfaces::IFlxUIWidget focus;
		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget set_focus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget);
		Dynamic set_focus_dyn();

		Dynamic getTextFallback;
		Dynamic &getTextFallback_dyn() { return getTextFallback;}
		::flixel::addons::ui::interfaces::IFireTongue _ptr_tongue;
		::haxe::xml::Fast _data;
		virtual Void _tongueSet( Array< ::Dynamic > list,::flixel::addons::ui::interfaces::IFireTongue tongue);
		Dynamic _tongueSet_dyn();

		virtual Void callEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		Dynamic callEvent_dyn();

		virtual Void getEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		Dynamic getEvent_dyn();

		virtual Dynamic getRequest( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		Dynamic getRequest_dyn();

		virtual Void onFocus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget);
		Dynamic onFocus_dyn();

		virtual Void setWidgetSuppression( ::flixel::FlxSprite asset,::flixel::addons::ui::interfaces::IFlxUIWidget butNotThisOne,hx::Null< bool >  suppressed);
		Dynamic setWidgetSuppression_dyn();

		virtual Void onFocusLost( ::flixel::addons::ui::interfaces::IFlxUIWidget widget);
		Dynamic onFocusLost_dyn();

		virtual Void setSuperIndex( ::flixel::addons::ui::FlxUI flxUI);
		Dynamic setSuperIndex_dyn();

		virtual Void update( );

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget removeAsset( ::String key,hx::Null< bool >  destroy);
		Dynamic removeAsset_dyn();

		virtual bool addAsset( ::flixel::addons::ui::interfaces::IFlxUIWidget asset,::String key,::String group_id,hx::Null< bool >  recursive);
		Dynamic addAsset_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget replaceAsset( ::String key,::flixel::addons::ui::interfaces::IFlxUIWidget replace,hx::Null< bool >  center_x,hx::Null< bool >  center_y,hx::Null< bool >  destroy_old);
		Dynamic replaceAsset_dyn();

		virtual Void destroy( );

		virtual Void load( ::haxe::xml::Fast data);
		Dynamic load_dyn();

		virtual Void _postLoad( ::haxe::xml::Fast data);
		Dynamic _postLoad_dyn();

		virtual ::String get_currMode( );
		Dynamic get_currMode_dyn();

		virtual ::String set_currMode( ::String m);
		Dynamic set_currMode_dyn();

		virtual Void setMode( ::String mode_id,::String target_id);
		Dynamic setMode_dyn();

		virtual Void showThing( ::String id,hx::Null< bool >  b);
		Dynamic showThing_dyn();

		virtual ::flixel::addons::ui::FlxUIGroup getGroup( ::String key,hx::Null< bool >  recursive);
		Dynamic getGroup_dyn();

		virtual ::flixel::text::FlxText getFlxText( ::String key,hx::Null< bool >  recursive);
		Dynamic getFlxText_dyn();

		virtual bool hasAsset( ::String key,hx::Null< bool >  recursive);
		Dynamic hasAsset_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget getAsset( ::String key,hx::Null< bool >  recursive);
		Dynamic getAsset_dyn();

		virtual ::haxe::xml::Fast getMode( ::String key,hx::Null< bool >  recursive);
		Dynamic getMode_dyn();

		virtual ::flixel::addons::ui::ButtonLabelStyle getLabelStyleFromDefinition( ::String key,hx::Null< bool >  recursive);
		Dynamic getLabelStyleFromDefinition_dyn();

		virtual ::haxe::xml::Fast getDefinition( ::String key,hx::Null< bool >  recursive);
		Dynamic getDefinition_dyn();

		::haxe::ds::StringMap _group_index;
		::haxe::ds::StringMap _asset_index;
		::haxe::ds::StringMap _definition_index;
		::haxe::ds::StringMap _mode_index;
		::String _curr_mode;
		::flixel::addons::ui::interfaces::IEventGetter _ptr;
		::flixel::addons::ui::FlxUI _superIndexUI;
		Float _safe_input_delay_elapsed;
		Array< ::Dynamic > _failure_checks;
		virtual Void replaceInGroup( ::flixel::FlxSprite original,::flixel::FlxSprite replace,hx::Null< bool >  splice);
		Dynamic replaceInGroup_dyn();

		virtual ::haxe::xml::Fast applyNodeConditionals( ::haxe::xml::Fast info);
		Dynamic applyNodeConditionals_dyn();

		virtual ::haxe::xml::Fast applyNodeChanges( ::haxe::xml::Fast data,::String nodeName);
		Dynamic applyNodeChanges_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget _loadThing( ::String type,::haxe::xml::Fast data);
		Dynamic _loadThing_dyn();

		virtual Float _loadX( ::haxe::xml::Fast data,hx::Null< Float >  default_);
		Dynamic _loadX_dyn();

		virtual Float _loadY( ::haxe::xml::Fast data,hx::Null< Float >  default_);
		Dynamic _loadY_dyn();

		virtual Float _loadWidth( ::haxe::xml::Fast data,hx::Null< Float >  default_,::String str);
		Dynamic _loadWidth_dyn();

		virtual Float _loadHeight( ::haxe::xml::Fast data,hx::Null< Float >  default_,::String str);
		Dynamic _loadHeight_dyn();

		virtual ::flixel::util::FlxPoint _loadCompass( ::haxe::xml::Fast data,::String str);
		Dynamic _loadCompass_dyn();

		virtual Void _changeParamsThing( ::haxe::xml::Fast data);
		Dynamic _changeParamsThing_dyn();

		virtual Void _changeThing( ::haxe::xml::Fast data);
		Dynamic _changeThing_dyn();

		virtual Void _alignThing( ::haxe::xml::Fast data);
		Dynamic _alignThing_dyn();

		virtual Void _doAlign( Array< ::String > objects,::String axis,Float spacing,bool resize,::flixel::util::FlxPoint bounds);
		Dynamic _doAlign_dyn();

		virtual bool _checkFailure( ::haxe::xml::Fast data);
		Dynamic _checkFailure_dyn();

		virtual Void _resizeThing( ::flixel::addons::ui::interfaces::IResizable fo_r,Dynamic bounds);
		Dynamic _resizeThing_dyn();

		virtual Void _postLoadThing( ::String type,::haxe::xml::Fast data);
		Dynamic _postLoadThing_dyn();

		virtual ::flixel::addons::ui::FlxUITileTest _loadTileTest( ::haxe::xml::Fast data);
		Dynamic _loadTileTest_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget _loadText( ::haxe::xml::Fast data);
		Dynamic _loadText_dyn();

		virtual ::flixel::addons::ui::FlxUIRadioGroup _loadRadioGroup( ::haxe::xml::Fast data);
		Dynamic _loadRadioGroup_dyn();

		virtual ::flixel::addons::ui::FlxUICheckBox _loadCheckBox( ::haxe::xml::Fast data);
		Dynamic _loadCheckBox_dyn();

		virtual ::flixel::addons::ui::FlxUIDropDownMenu _loadDropDownMenu( ::haxe::xml::Fast data);
		Dynamic _loadDropDownMenu_dyn();

		virtual bool _loadTest( ::haxe::xml::Fast data);
		Dynamic _loadTest_dyn();

		virtual ::flixel::addons::ui::FlxUI _loadLayout( ::haxe::xml::Fast data);
		Dynamic _loadLayout_dyn();

		virtual ::flixel::addons::ui::FlxUITabMenu _loadTabMenu( ::haxe::xml::Fast data);
		Dynamic _loadTabMenu_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget _loadNumericStepper( ::haxe::xml::Fast data,hx::Null< bool >  setCallback);
		Dynamic _loadNumericStepper_dyn();

		virtual ::flixel::addons::ui::interfaces::IFlxUIWidget _loadButton( ::haxe::xml::Fast data,hx::Null< bool >  setCallback,hx::Null< bool >  isToggle,::String load_code);
		Dynamic _loadButton_dyn();

		virtual ::flixel::addons::ui::FlxUIRegion _loadRegion( ::haxe::xml::Fast data);
		Dynamic _loadRegion_dyn();

		virtual ::flixel::addons::ui::FlxUI9SliceSprite _load9SliceSprite( ::haxe::xml::Fast data,::String load_code);
		Dynamic _load9SliceSprite_dyn();

		virtual int _loadTileRule( ::haxe::xml::Fast data);
		Dynamic _loadTileRule_dyn();

		virtual ::flixel::addons::ui::FlxUISprite _loadLine( ::haxe::xml::Fast data);
		Dynamic _loadLine_dyn();

		virtual ::flixel::addons::ui::FlxUISprite _loadSprite( ::haxe::xml::Fast data);
		Dynamic _loadSprite_dyn();

		virtual int thisWidth( );
		Dynamic thisWidth_dyn();

		virtual int thisHeight( );
		Dynamic thisHeight_dyn();

		virtual Float _getAnchorPos( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,::String axis,::String str);
		Dynamic _getAnchorPos_dyn();

		virtual Dynamic calcMaxMinSize( ::haxe::xml::Fast data,Dynamic width,Dynamic height);
		Dynamic calcMaxMinSize_dyn();

		virtual Float _getDataSize( ::String target,::String str,hx::Null< Float >  default_);
		Dynamic _getDataSize_dyn();

		virtual cpp::ArrayBase _getOperation( ::String str);
		Dynamic _getOperation_dyn();

		virtual Float _doOperation( Float value,::String _operator,Float operand);
		Dynamic _doOperation_dyn();

		virtual Float _getStretch( int index,::String target,::String str);
		Dynamic _getStretch_dyn();

		virtual Void _loadPosition( ::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IFlxUIWidget thing);
		Dynamic _loadPosition_dyn();

		virtual ::flixel::addons::ui::BorderDef _loadBorder( ::haxe::xml::Fast data);
		Dynamic _loadBorder_dyn();

		virtual int _loadColor( ::haxe::xml::Fast data,::String colorName,hx::Null< int >  _default);
		Dynamic _loadColor_dyn();

		virtual ::flixel::addons::ui::FontDef _loadFontDef( ::haxe::xml::Fast data);
		Dynamic _loadFontDef_dyn();

		virtual ::String _loadFontFace( ::haxe::xml::Fast data);
		Dynamic _loadFontFace_dyn();

		virtual Void _onFinishLoad( );
		Dynamic _onFinishLoad_dyn();

		virtual ::String getText( ::String flag,::String context,hx::Null< bool >  safe,::String code);
		Dynamic getText_dyn();

		virtual ::String formatFromCode( ::String str,::String code);
		Dynamic formatFromCode_dyn();

		virtual Void formatButtonText( ::haxe::xml::Fast data,Dynamic button);
		Dynamic formatButtonText_dyn();

		static Void event( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		static Dynamic event_dyn();

		static Void forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing);
		static Dynamic forceFocus_dyn();

		static ::flixel::addons::ui::interfaces::IFlxUIState getLeafUIState( );
		static Dynamic getLeafUIState_dyn();

		static Dynamic request( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		static Dynamic request_dyn();

		static Void _delta( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic _delta_dyn();

		static ::flixel::addons::ui::interfaces::IFlxUIWidget _center( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< bool >  X,hx::Null< bool >  Y);
		static Dynamic _center_dyn();

		static ::haxe::xml::Fast consolidateData( ::haxe::xml::Fast data,::haxe::xml::Fast definition);
		static Dynamic consolidateData_dyn();

		static ::openfl::_legacy::display::BitmapData _loadBitmapRect( ::String source,::String rect_str);
		static Dynamic _loadBitmapRect_dyn();

		static cpp::ArrayBase getParams( ::haxe::xml::Fast data);
		static Dynamic getParams_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUI */ 
