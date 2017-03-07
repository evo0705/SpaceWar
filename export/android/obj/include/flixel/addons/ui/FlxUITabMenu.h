#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#define INCLUDED_flixel_addons_ui_FlxUITabMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
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
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUITabMenu_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUITabMenu_obj OBJ_;
		FlxUITabMenu_obj();
		Void __construct(::flixel::FlxSprite back_,Array< ::Dynamic > tabs_,cpp::ArrayBase tab_ids_and_labels_,::flixel::util::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITabMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUITabMenu_obj > __new(::flixel::FlxSprite back_,Array< ::Dynamic > tabs_,cpp::ArrayBase tab_ids_and_labels_,::flixel::util::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUITabMenu_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
		operator ::flixel::addons::ui::interfaces::IResizable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUITabMenu","\x0e","\x14","\xc0","\xe2"); }

		static void __boot();
		virtual Void getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		Dynamic getEvent_dyn();

		virtual Dynamic getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,cpp::ArrayBase params);
		Dynamic getRequest_dyn();

		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		virtual Float get_width( );

		virtual Float get_height( );

		virtual Void resize( Float W,Float H);
		Dynamic resize_dyn();

		virtual int get_selected_tab( );
		Dynamic get_selected_tab_dyn();

		virtual int set_selected_tab( int i);
		Dynamic set_selected_tab_dyn();

		virtual ::String get_selected_tab_id( );
		Dynamic get_selected_tab_id_dyn();

		virtual ::String set_selected_tab_id( ::String str);
		Dynamic set_selected_tab_id_dyn();

		virtual Void destroy( );

		virtual ::flixel::addons::ui::FlxUIButton getTab( ::String id,Dynamic index);
		Dynamic getTab_dyn();

		virtual ::flixel::addons::ui::FlxUIGroup getTabGroup( ::String id,Dynamic index);
		Dynamic getTabGroup_dyn();

		virtual Void addGroup( ::flixel::addons::ui::FlxUIGroup g);
		Dynamic addGroup_dyn();

		virtual Void _onTabEvent( ::String id);
		Dynamic _onTabEvent_dyn();

		virtual Void showTabId( ::String id);
		Dynamic showTabId_dyn();

		::flixel::FlxSprite _back;
		Array< ::Dynamic > _tabs;
		Array< ::Dynamic > _tab_groups;
		bool _stretch_tabs;
		Dynamic _tab_spacing;
		Array< ::String > _tab_stacking;
		::flixel::util::FlxPoint _tab_offset;
		::String _selected_tab_id;
		int _selected_tab;
		virtual Void stackTabs( );
		Dynamic stackTabs_dyn();

		virtual int sortTabs( ::flixel::addons::ui::FlxUIButton a,::flixel::addons::ui::FlxUIButton b);
		Dynamic sortTabs_dyn();

		virtual Void showTabInt( int i);
		Dynamic showTabInt_dyn();

		virtual Void _showOnlyGroup( ::String id);
		Dynamic _showOnlyGroup_dyn();

		virtual ::flixel::addons::ui::FlxUIButton getFirstTab( );
		Dynamic getFirstTab_dyn();

		virtual Void distributeTabs( );
		Dynamic distributeTabs_dyn();

		static ::String CLICK_EVENT;
		static ::String STACK_FRONT;
		static ::String STACK_BACK;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITabMenu */ 
