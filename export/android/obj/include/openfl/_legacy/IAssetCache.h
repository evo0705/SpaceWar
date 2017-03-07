#ifndef INCLUDED_openfl__legacy_IAssetCache
#define INCLUDED_openfl__legacy_IAssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  IAssetCache_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAssetCache_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool get_enabled( )=0;
		virtual Dynamic get_enabled_dyn()=0;
		virtual bool set_enabled( bool value)=0;
		virtual Dynamic set_enabled_dyn()=0;
		virtual Void clear( ::String prefix)=0;
		virtual Dynamic clear_dyn()=0;
		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id)=0;
		virtual Dynamic getBitmapData_dyn()=0;
		virtual ::openfl::_legacy::text::Font getFont( ::String id)=0;
		virtual Dynamic getFont_dyn()=0;
		virtual ::openfl::_legacy::media::Sound getSound( ::String id)=0;
		virtual Dynamic getSound_dyn()=0;
		virtual bool hasBitmapData( ::String id)=0;
		virtual Dynamic hasBitmapData_dyn()=0;
		virtual bool hasFont( ::String id)=0;
		virtual Dynamic hasFont_dyn()=0;
		virtual bool hasSound( ::String id)=0;
		virtual Dynamic hasSound_dyn()=0;
		virtual bool removeBitmapData( ::String id)=0;
		virtual Dynamic removeBitmapData_dyn()=0;
		virtual bool removeFont( ::String id)=0;
		virtual Dynamic removeFont_dyn()=0;
		virtual bool removeSound( ::String id)=0;
		virtual Dynamic removeSound_dyn()=0;
		virtual Void setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData)=0;
		virtual Dynamic setBitmapData_dyn()=0;
		virtual Void setFont( ::String id,::openfl::_legacy::text::Font font)=0;
		virtual Dynamic setFont_dyn()=0;
		virtual Void setSound( ::String id,::openfl::_legacy::media::Sound sound)=0;
		virtual Dynamic setSound_dyn()=0;
};

#define DELEGATE_openfl__legacy_IAssetCache \
virtual bool get_enabled( ) { return mDelegate->get_enabled();}  \
virtual Dynamic get_enabled_dyn() { return mDelegate->get_enabled_dyn();}  \
virtual bool set_enabled( bool value) { return mDelegate->set_enabled(value);}  \
virtual Dynamic set_enabled_dyn() { return mDelegate->set_enabled_dyn();}  \
virtual Void clear( ::String prefix) { return mDelegate->clear(prefix);}  \
virtual Dynamic clear_dyn() { return mDelegate->clear_dyn();}  \
virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id) { return mDelegate->getBitmapData(id);}  \
virtual Dynamic getBitmapData_dyn() { return mDelegate->getBitmapData_dyn();}  \
virtual ::openfl::_legacy::text::Font getFont( ::String id) { return mDelegate->getFont(id);}  \
virtual Dynamic getFont_dyn() { return mDelegate->getFont_dyn();}  \
virtual ::openfl::_legacy::media::Sound getSound( ::String id) { return mDelegate->getSound(id);}  \
virtual Dynamic getSound_dyn() { return mDelegate->getSound_dyn();}  \
virtual bool hasBitmapData( ::String id) { return mDelegate->hasBitmapData(id);}  \
virtual Dynamic hasBitmapData_dyn() { return mDelegate->hasBitmapData_dyn();}  \
virtual bool hasFont( ::String id) { return mDelegate->hasFont(id);}  \
virtual Dynamic hasFont_dyn() { return mDelegate->hasFont_dyn();}  \
virtual bool hasSound( ::String id) { return mDelegate->hasSound(id);}  \
virtual Dynamic hasSound_dyn() { return mDelegate->hasSound_dyn();}  \
virtual bool removeBitmapData( ::String id) { return mDelegate->removeBitmapData(id);}  \
virtual Dynamic removeBitmapData_dyn() { return mDelegate->removeBitmapData_dyn();}  \
virtual bool removeFont( ::String id) { return mDelegate->removeFont(id);}  \
virtual Dynamic removeFont_dyn() { return mDelegate->removeFont_dyn();}  \
virtual bool removeSound( ::String id) { return mDelegate->removeSound(id);}  \
virtual Dynamic removeSound_dyn() { return mDelegate->removeSound_dyn();}  \
virtual Void setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData) { return mDelegate->setBitmapData(id,bitmapData);}  \
virtual Dynamic setBitmapData_dyn() { return mDelegate->setBitmapData_dyn();}  \
virtual Void setFont( ::String id,::openfl::_legacy::text::Font font) { return mDelegate->setFont(id,font);}  \
virtual Dynamic setFont_dyn() { return mDelegate->setFont_dyn();}  \
virtual Void setSound( ::String id,::openfl::_legacy::media::Sound sound) { return mDelegate->setSound(id,sound);}  \
virtual Dynamic setSound_dyn() { return mDelegate->setSound_dyn();}  \


template<typename IMPL>
class IAssetCache_delegate_ : public IAssetCache_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAssetCache_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl__legacy_IAssetCache
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_IAssetCache */ 
