#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#define INCLUDED_flixel_addons_ui_FlxInputText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxInputText_obj : public ::flixel::text::FlxText_obj{
	public:
		typedef ::flixel::text::FlxText_obj super;
		typedef FlxInputText_obj OBJ_;
		FlxInputText_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxInputText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxInputText_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxInputText_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxInputText","\x25","\xd3","\x0c","\x31"); }

		static void __boot();
		::EReg customFilterPattern;
		virtual ::EReg set_customFilterPattern( ::EReg cfp);
		Dynamic set_customFilterPattern_dyn();

		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		bool background;
		int caretColor;
		virtual int set_caretColor( int i);
		Dynamic set_caretColor_dyn();

		int caretWidth;
		virtual int set_caretWidth( int i);
		Dynamic set_caretWidth_dyn();

		cpp::ArrayBase params;
		bool hasFocus;
		int caretIndex;
		int forceCase;
		int maxLength;
		int lines;
		int filterMode;
		int fieldBorderColor;
		int fieldBorderThickness;
		int backgroundColor;
		::flixel::FlxSprite backgroundSprite;
		::flixel::util::FlxTimer _caretTimer;
		::flixel::FlxSprite caret;
		::flixel::FlxSprite fieldBorderSprite;
		Array< ::Dynamic > _charBoundaries;
		virtual Void destroy( );

		virtual Void draw( );

		virtual Void drawSprite( ::flixel::FlxSprite Sprite);
		Dynamic drawSprite_dyn();

		virtual Void update( );

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		virtual Void onChange( ::String action);
		Dynamic onChange_dyn();

		virtual ::String insertSubstring( ::String Original,::String Insert,int Index);
		Dynamic insertSubstring_dyn();

		virtual int getCaretIndexFromPoint( ::flixel::util::FlxPoint Landing);
		Dynamic getCaretIndexFromPoint_dyn();

		virtual int getCharIndexAtPoint( Float X,Float Y);
		Dynamic getCharIndexAtPoint_dyn();

		virtual ::openfl::_legacy::geom::Rectangle getCharBoundaries( int charIndex);
		Dynamic getCharBoundaries_dyn();

		virtual ::String set_text( ::String Text);

		virtual Void prepareCharBoundaries( int numChars);
		Dynamic prepareCharBoundaries_dyn();

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);

		virtual Void toggleCaret( ::flixel::util::FlxTimer timer);
		Dynamic toggleCaret_dyn();

		virtual ::String filter( ::String text);
		Dynamic filter_dyn();

		virtual cpp::ArrayBase set_params( cpp::ArrayBase p);
		Dynamic set_params_dyn();

		virtual Float set_x( Float X);

		virtual Float set_y( Float Y);

		virtual bool set_hasFocus( bool newFocus);
		Dynamic set_hasFocus_dyn();

		virtual int set_caretIndex( int newCaretIndex);
		Dynamic set_caretIndex_dyn();

		virtual int set_forceCase( int Value);
		Dynamic set_forceCase_dyn();

		virtual Float set_size( Float Value);

		virtual int set_maxLength( int Value);
		Dynamic set_maxLength_dyn();

		virtual int set_lines( int Value);
		Dynamic set_lines_dyn();

		virtual bool get_passwordMode( );
		Dynamic get_passwordMode_dyn();

		virtual bool set_passwordMode( bool value);
		Dynamic set_passwordMode_dyn();

		virtual int set_filterMode( int Value);
		Dynamic set_filterMode_dyn();

		virtual int set_fieldBorderColor( int Value);
		Dynamic set_fieldBorderColor_dyn();

		virtual int set_fieldBorderThickness( int Value);
		Dynamic set_fieldBorderThickness_dyn();

		virtual int set_backgroundColor( int Value);
		Dynamic set_backgroundColor_dyn();

		static int NO_FILTER;
		static int ONLY_ALPHA;
		static int ONLY_NUMERIC;
		static int ONLY_ALPHANUMERIC;
		static int CUSTOM_FILTER;
		static int ALL_CASES;
		static int UPPER_CASE;
		static int LOWER_CASE;
		static ::String BACKSPACE_ACTION;
		static ::String DELETE_ACTION;
		static ::String ENTER_ACTION;
		static ::String INPUT_ACTION;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxInputText */ 
