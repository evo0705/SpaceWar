#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIGroup_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","new",0x7ddf049c,"flixel.addons.ui.FlxUIGroup.new","flixel/addons/ui/FlxUIGroup.hx",12,0xd49587d3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(26)
	this->autoBounds = true;
	HX_STACK_LINE(19)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(32)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	super::__construct(tmp,tmp1,null());
}
;
	return null();
}

//FlxUIGroup_obj::~FlxUIGroup_obj() { }

Dynamic FlxUIGroup_obj::__CreateEmpty() { return  new FlxUIGroup_obj; }
hx::ObjectPtr< FlxUIGroup_obj > FlxUIGroup_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxUIGroup_obj > _result_ = new FlxUIGroup_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic FlxUIGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIGroup_obj > _result_ = new FlxUIGroup_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxUIGroup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	return super::__ToInterface(inType);
}

FlxUIGroup_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUIGroup_obj >(this); }
FlxUIGroup_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUIGroup_obj >(this); }
FlxUIGroup_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUIGroup_obj >(this); }
Void FlxUIGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","destroy",0x25c62f36,"flixel.addons.ui.FlxUIGroup.destroy","flixel/addons/ui/FlxUIGroup.hx",36,0xd49587d3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::destroy();
	}
return null();
}


Dynamic FlxUIGroup_obj::add( Dynamic _tmp_Object){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","add",0x7dd5265d,"flixel.addons.ui.FlxUIGroup.add","flixel/addons/ui/FlxUIGroup.hx",39,0xd49587d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Object,"_tmp_Object")
	HX_STACK_LINE(40)
	::flixel::FlxSprite Object = ((::flixel::FlxSprite)(_tmp_Object));		HX_STACK_VAR(Object,"Object");
	HX_STACK_LINE(40)
	::flixel::FlxSprite tmp = Object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::flixel::FlxSprite tmp1 = this->super::add(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	::flixel::FlxSprite obj = tmp1;		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(41)
	bool tmp2 = this->autoBounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	if ((tmp2)){
		HX_STACK_LINE(42)
		this->calcBounds();
	}
	HX_STACK_LINE(44)
	::flixel::FlxSprite tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	return tmp3;
}


Dynamic FlxUIGroup_obj::remove( Dynamic _tmp_Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","remove",0xd69eb588,"flixel.addons.ui.FlxUIGroup.remove","flixel/addons/ui/FlxUIGroup.hx",47,0xd49587d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tmp_Object,"_tmp_Object")
	HX_STACK_ARG(Splice,"Splice")
{
		HX_STACK_LINE(48)
		::flixel::FlxSprite Object = ((::flixel::FlxSprite)(_tmp_Object));		HX_STACK_VAR(Object,"Object");
		HX_STACK_LINE(48)
		::flixel::FlxSprite tmp = Object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		bool tmp1 = Splice;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::flixel::FlxSprite tmp2 = this->super::remove(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		::flixel::FlxSprite obj = tmp2;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(49)
		bool tmp3 = this->autoBounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		if ((tmp3)){
			HX_STACK_LINE(50)
			this->calcBounds();
		}
		HX_STACK_LINE(52)
		::flixel::FlxSprite tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		return tmp4;
	}
}


bool FlxUIGroup_obj::hasThis( ::flixel::FlxSprite Object){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","hasThis",0x1d802914,"flixel.addons.ui.FlxUIGroup.hasThis","flixel/addons/ui/FlxUIGroup.hx",55,0xd49587d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		Array< ::Dynamic > _g1 = tmp->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			if ((tmp2)){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(56)
			::flixel::FlxSprite tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			::flixel::FlxSprite obj = tmp3;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(56)
			++(_g);
			HX_STACK_LINE(57)
			bool tmp4 = (obj == Object);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			if ((tmp4)){
				HX_STACK_LINE(58)
				return true;
			}
		}
	}
	HX_STACK_LINE(61)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIGroup_obj,hasThis,return )

Void FlxUIGroup_obj::calcBounds( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","calcBounds",0xdbe23c2e,"flixel.addons.ui.FlxUIGroup.calcBounds","flixel/addons/ui/FlxUIGroup.hx",65,0xd49587d3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp->members != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(66)
			::flixel::group::FlxTypedGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::flixel::group::FlxTypedGroup tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			int tmp5 = tmp4->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			tmp2 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(66)
			tmp2 = false;
		}
		HX_STACK_LINE(66)
		if ((tmp2)){
			HX_STACK_LINE(67)
			Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			Float left = tmp3;		HX_STACK_VAR(left,"left");
			HX_STACK_LINE(68)
			Float tmp4 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			Float right = tmp4;		HX_STACK_VAR(right,"right");
			HX_STACK_LINE(69)
			Float tmp5 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			Float top = tmp5;		HX_STACK_VAR(top,"top");
			HX_STACK_LINE(70)
			Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			Float bottom = tmp6;		HX_STACK_VAR(bottom,"bottom");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(71)
				::flixel::group::FlxTypedGroup tmp7 = this->group;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				Array< ::Dynamic > _g1 = tmp7->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(71)
				while((true)){
					HX_STACK_LINE(71)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(71)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(71)
					if ((tmp9)){
						HX_STACK_LINE(71)
						break;
					}
					HX_STACK_LINE(71)
					::flixel::FlxSprite tmp10 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(71)
					::flixel::FlxSprite fb = tmp10;		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(71)
					++(_g);
					HX_STACK_LINE(72)
					bool tmp11 = (fb != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(72)
					if ((tmp11)){
						HX_STACK_LINE(73)
						::flixel::FlxSprite tmp12 = fb;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(73)
						bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIWidget >());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(73)
						if ((tmp13)){
							HX_STACK_LINE(74)
							::flixel::FlxSprite flui = fb;		HX_STACK_VAR(flui,"flui");
							HX_STACK_LINE(75)
							bool tmp14 = (flui->x < left);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(75)
							if ((tmp14)){
								HX_STACK_LINE(75)
								left = flui->x;
							}
							HX_STACK_LINE(76)
							Float tmp15 = flui->x;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(76)
							Float tmp16 = flui->get_width();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(76)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(76)
							Float tmp18 = right;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(76)
							bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(76)
							if ((tmp19)){
								HX_STACK_LINE(76)
								Float tmp20 = flui->x;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(76)
								Float tmp21 = flui->get_width();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(76)
								Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(76)
								right = tmp22;
							}
							HX_STACK_LINE(77)
							bool tmp20 = (flui->y < top);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(77)
							if ((tmp20)){
								HX_STACK_LINE(77)
								top = flui->y;
							}
							HX_STACK_LINE(78)
							Float tmp21 = flui->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(78)
							Float tmp22 = flui->get_height();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(78)
							Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(78)
							Float tmp24 = bottom;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(78)
							bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(78)
							if ((tmp25)){
								HX_STACK_LINE(78)
								Float tmp26 = flui->y;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(78)
								Float tmp27 = flui->get_height();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(78)
								Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(78)
								bottom = tmp28;
							}
						}
						else{
							HX_STACK_LINE(79)
							::flixel::FlxSprite tmp14 = fb;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(79)
							bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(79)
							if ((tmp15)){
								HX_STACK_LINE(80)
								::flixel::FlxSprite flxi = fb;		HX_STACK_VAR(flxi,"flxi");
								HX_STACK_LINE(81)
								bool tmp16 = (flxi->x < left);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(81)
								if ((tmp16)){
									HX_STACK_LINE(81)
									left = flxi->x;
								}
								HX_STACK_LINE(82)
								bool tmp17 = (flxi->x > right);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(82)
								if ((tmp17)){
									HX_STACK_LINE(82)
									right = flxi->x;
								}
								HX_STACK_LINE(83)
								bool tmp18 = (flxi->y < top);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(83)
								if ((tmp18)){
									HX_STACK_LINE(83)
									top = flxi->y;
								}
								HX_STACK_LINE(84)
								bool tmp19 = (flxi->y > bottom);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(84)
								if ((tmp19)){
									HX_STACK_LINE(84)
									bottom = flxi->y;
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(88)
			Float tmp7 = (right - left);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			this->set_width(tmp7);
			HX_STACK_LINE(89)
			Float tmp8 = (bottom - top);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(89)
			this->set_height(tmp8);
		}
		else{
			HX_STACK_LINE(91)
			Float tmp3 = this->set_height((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			this->set_width(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIGroup_obj,calcBounds,(void))

Void FlxUIGroup_obj::floorAll( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIGroup","floorAll",0x028cf8f9,"flixel.addons.ui.FlxUIGroup.floorAll","flixel/addons/ui/FlxUIGroup.hx",99,0xd49587d3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::flixel::FlxSprite fs = null();		HX_STACK_VAR(fs,"fs");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(101)
			Array< ::Dynamic > _g1 = tmp->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(101)
				if ((tmp2)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				::flixel::FlxSprite tmp3 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				::flixel::FlxSprite fb = tmp3;		HX_STACK_VAR(fb,"fb");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(102)
				fs = fb;
				HX_STACK_LINE(103)
				Float tmp4 = fs->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(103)
				int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(103)
				fs->set_x(tmp5);
				HX_STACK_LINE(104)
				Float tmp6 = fs->y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				fs->set_y(tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIGroup_obj,floorAll,(void))


FlxUIGroup_obj::FlxUIGroup_obj()
{
}

void FlxUIGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIGroup);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(autoBounds,"autoBounds");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(autoBounds,"autoBounds");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"hasThis") ) { return hasThis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"floorAll") ) { return floorAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { return autoBounds; }
		if (HX_FIELD_EQ(inName,"calcBounds") ) { return calcBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { autoBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUIGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	outFields->push(HX_HCSTRING("autoBounds","\x44","\x97","\xe8","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUIGroup_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxUIGroup_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{hx::fsBool,(int)offsetof(FlxUIGroup_obj,autoBounds),HX_HCSTRING("autoBounds","\x44","\x97","\xe8","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("autoBounds","\x44","\x97","\xe8","\xd1"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("hasThis","\xd8","\x26","\x40","\x1c"),
	HX_HCSTRING("calcBounds","\xea","\x30","\x0c","\x1b"),
	HX_HCSTRING("floorAll","\xb5","\x06","\xcb","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUIGroup_obj::__mClass;

void FlxUIGroup_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIGroup","\xaa","\xc6","\xa9","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUIGroup_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
