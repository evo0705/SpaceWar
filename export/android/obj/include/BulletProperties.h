#ifndef INCLUDED_BulletProperties
#define INCLUDED_BulletProperties

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BulletProperties)
HX_DECLARE_CLASS0(ShotPattern)


class HXCPP_CLASS_ATTRIBUTES  BulletProperties_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BulletProperties_obj OBJ_;
		BulletProperties_obj();
		Void __construct(::String Name,Dynamic SimpleGraphic,Array< ::Dynamic > ShotPatt,hx::Null< Float >  __o_MinDamage,hx::Null< Float >  __o_MaxDamage,hx::Null< int >  __o_Speed,hx::Null< int >  __o_FireRate,hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,int FrameWidth,int FrameHeight,hx::Null< Float >  __o_Alpha,Array< int > Frames,Dynamic __o_FrameRate,Dynamic __o_Rotation);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="BulletProperties")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BulletProperties_obj > __new(::String Name,Dynamic SimpleGraphic,Array< ::Dynamic > ShotPatt,hx::Null< Float >  __o_MinDamage,hx::Null< Float >  __o_MaxDamage,hx::Null< int >  __o_Speed,hx::Null< int >  __o_FireRate,hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,int FrameWidth,int FrameHeight,hx::Null< Float >  __o_Alpha,Array< int > Frames,Dynamic __o_FrameRate,Dynamic __o_Rotation);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BulletProperties_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BulletProperties","\xf5","\x94","\xcd","\xac"); }

		::String name;
		Dynamic simpleGraphic;
		Array< ::Dynamic > shotPattern;
		Float minDamage;
		Float maxDamage;
		int speed;
		int fireRate;
		int frameWidth;
		int frameHeight;
		Array< int > frames;
		int frameRate;
		int randomAngle;
		int randomSpeed;
		Float alpha;
		Float rotation;
};


#endif /* INCLUDED_BulletProperties */ 
