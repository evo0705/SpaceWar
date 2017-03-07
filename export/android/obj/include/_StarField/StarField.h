#ifndef INCLUDED__StarField_StarField
#define INCLUDED__StarField_StarField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(_StarField,ClsStar)
HX_DECLARE_CLASS1(_StarField,StarField)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace _StarField{


class HXCPP_CLASS_ATTRIBUTES  StarField_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef StarField_obj OBJ_;
		StarField_obj();
		Void __construct(int X,int Y,int Width,int Height,int StarAmount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="_StarField.StarField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StarField_obj > __new(int X,int Y,int Width,int Height,int StarAmount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StarField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StarField","\x68","\xe7","\x32","\x39"); }

		int bgColor;
		Array< ::Dynamic > _stars;
		Array< int > _depthColors;
		Float _minSpeed;
		Float _maxSpeed;
		virtual Void destroy( );

		virtual Void draw( );

		virtual Void setStarDepthColors( int Depth,hx::Null< int >  LowestColor,hx::Null< int >  HighestColor);
		Dynamic setStarDepthColors_dyn();

		virtual Void setStarSpeed( int Min,int Max);
		Dynamic setStarSpeed_dyn();

};

} // end namespace _StarField

#endif /* INCLUDED__StarField_StarField */ 
