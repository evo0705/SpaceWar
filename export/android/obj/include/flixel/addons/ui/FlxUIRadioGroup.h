#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#define INCLUDED_flixel_addons_ui_FlxUIRadioGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIRadioGroup)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIRadioGroup_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIRadioGroup_obj OBJ_;
		FlxUIRadioGroup_obj();
		Void __construct(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIRadioGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUIRadioGroup_obj > __new(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIRadioGroup_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
		operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUIRadioGroup","\x0a","\x53","\x38","\x9e"); }

		static void __boot();
		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		cpp::ArrayBase params;
		virtual cpp::ArrayBase set_params( cpp::ArrayBase p);
		Dynamic set_params_dyn();

		virtual Void loadGraphics( Dynamic Box,Dynamic Dot);
		Dynamic loadGraphics_dyn();

		virtual Void destroy( );

		virtual bool updateLabel( int i,::String label_);
		Dynamic updateLabel_dyn();

		virtual bool updateId( int i,::String id_);
		Dynamic updateId_dyn();

		virtual Void show( bool b);
		Dynamic show_dyn();

		virtual Void updateRadios( Array< ::String > ids_,Array< ::String > labels_);
		Dynamic updateRadios_dyn();

		virtual bool get_clickable( );
		Dynamic get_clickable_dyn();

		virtual bool set_clickable( bool b);
		Dynamic set_clickable_dyn();

		virtual int get_selectedIndex( );
		Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex( int i);
		Dynamic set_selectedIndex_dyn();

		virtual ::String get_selectedLabel( );
		Dynamic get_selectedLabel_dyn();

		virtual ::String set_selectedLabel( ::String str);
		Dynamic set_selectedLabel_dyn();

		virtual ::String get_selectedId( );
		Dynamic get_selectedId_dyn();

		virtual ::String set_selectedId( ::String str);
		Dynamic set_selectedId_dyn();

		virtual ::flixel::util::FlxPoint setLineScroll( int scroll,int max_items);
		Dynamic setLineScroll_dyn();

		Dynamic _box_asset;
		Dynamic _dot_asset;
		Array< ::String > _labels;
		Array< ::String > _ids;
		int _label_width;
		int _width;
		int _height;
		Float _y_space;
		int _selected;
		bool _clickable;
		Array< ::Dynamic > _list_radios;
		virtual Void _refreshRadios( );
		Dynamic _refreshRadios_dyn();

		virtual Void _onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox);
		Dynamic _onCheckBoxEvent_dyn();

		virtual bool _onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback);
		Dynamic _onClick_dyn();

		static ::String CLICK_EVENT;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIRadioGroup */ 
