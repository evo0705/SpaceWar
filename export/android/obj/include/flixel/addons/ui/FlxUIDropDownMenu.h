#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#define INCLUDED_flixel_addons_ui_FlxUIDropDownMenu

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
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownHeader)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS3(flixel,addons,ui,StrIdLabel)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
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
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUIDropDownMenu_obj : public ::flixel::addons::ui::FlxUIGroup_obj{
	public:
		typedef ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIDropDownMenu_obj OBJ_;
		FlxUIDropDownMenu_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIDropDownMenu")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxUIDropDownMenu_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUIDropDownMenu_obj();

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
		operator ::flixel::interfaces::IFlxSprite_obj *();
		operator ::flixel::interfaces::IFlxBasic_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
		operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
		operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxUIDropDownMenu","\xb6","\xea","\x1f","\x0f"); }

		static void __boot();
		bool skipButtonUpdate;
		virtual bool set_skipButtonUpdate( bool b);
		Dynamic set_skipButtonUpdate_dyn();

		::String _selectedId;
		::String _selectedLabel;
		virtual ::String get_selectedId( );
		Dynamic get_selectedId_dyn();

		virtual ::String set_selectedId( ::String str);
		Dynamic set_selectedId_dyn();

		virtual ::String get_selectedLabel( );
		Dynamic get_selectedLabel_dyn();

		virtual ::String set_selectedLabel( ::String str);
		Dynamic set_selectedLabel_dyn();

		::flixel::addons::ui::FlxUIDropDownHeader header;
		Array< ::Dynamic > list;
		::flixel::addons::ui::FlxUI9SliceSprite dropPanel;
		cpp::ArrayBase params;
		virtual cpp::ArrayBase set_params( cpp::ArrayBase p);
		Dynamic set_params_dyn();

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		virtual Void setData( Array< ::Dynamic > DataList);
		Dynamic setData_dyn();

		virtual Void selectSomething( ::String id,::String label);
		Dynamic selectSomething_dyn();

		virtual ::flixel::addons::ui::FlxUIButton makeListButton( int i,::String Label,::String Name);
		Dynamic makeListButton_dyn();

		virtual Void changeLabelByIndex( int i,::String NewLabel);
		Dynamic changeLabelByIndex_dyn();

		virtual Void changeLabelById( ::String id,::String NewLabel);
		Dynamic changeLabelById_dyn();

		virtual ::flixel::addons::ui::FlxUIButton getBtnByIndex( int i);
		Dynamic getBtnByIndex_dyn();

		virtual ::flixel::addons::ui::FlxUIButton getBtnById( ::String id);
		Dynamic getBtnById_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void showList( bool b);
		Dynamic showList_dyn();

		virtual Void onDropdown( );
		Dynamic onDropdown_dyn();

		virtual Void onClickItem( int i);
		Dynamic onClickItem_dyn();

		static ::String CLICK_EVENT;
		static Array< ::Dynamic > makeStrIdLabelArray( Array< ::String > StringArray,hx::Null< bool >  UseIndexID);
		static Dynamic makeStrIdLabelArray_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIDropDownMenu */ 
