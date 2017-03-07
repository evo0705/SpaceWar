#ifndef INCLUDED_ClsStarField3D
#define INCLUDED_ClsStarField3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED__StarField_StarField
#include <_StarField/StarField.h>
#endif
HX_DECLARE_CLASS0(ClsStarField3D)
HX_DECLARE_CLASS1(_StarField,StarField)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  ClsStarField3D_obj : public ::_StarField::StarField_obj{
	public:
		typedef ::_StarField::StarField_obj super;
		typedef ClsStarField3D_obj OBJ_;
		ClsStarField3D_obj();
		Void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ClsStarField3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClsStarField3D_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_StarAmount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClsStarField3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ClsStarField3D","\xcf","\xc0","\xd9","\x02"); }

		::flixel::util::FlxPoint center;
		virtual Void destroy( );

		virtual Void update( );

};


#endif /* INCLUDED_ClsStarField3D */ 
