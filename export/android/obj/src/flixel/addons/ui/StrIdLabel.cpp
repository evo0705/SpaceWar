#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void StrIdLabel_obj::__construct(::String __o_Id,::String __o_Label)
{
HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","new",0xc417916b,"flixel.addons.ui.StrIdLabel.new","flixel/addons/ui/StrIdLabel.hx",13,0x9376c9e4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Id,"Id")
HX_STACK_ARG(__o_Label,"Label")
::String Id = __o_Id.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String Label = __o_Label.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(14)
	this->id = Id;
	HX_STACK_LINE(15)
	this->label = Label;
}
;
	return null();
}

//StrIdLabel_obj::~StrIdLabel_obj() { }

Dynamic StrIdLabel_obj::__CreateEmpty() { return  new StrIdLabel_obj; }
hx::ObjectPtr< StrIdLabel_obj > StrIdLabel_obj::__new(::String __o_Id,::String __o_Label)
{  hx::ObjectPtr< StrIdLabel_obj > _result_ = new StrIdLabel_obj();
	_result_->__construct(__o_Id,__o_Label);
	return _result_;}

Dynamic StrIdLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StrIdLabel_obj > _result_ = new StrIdLabel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::addons::ui::StrIdLabel StrIdLabel_obj::copy( ){
	HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","copy",0xc949e44a,"flixel.addons.ui.StrIdLabel.copy","flixel/addons/ui/StrIdLabel.hx",18,0x9376c9e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::String tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::String tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	::flixel::addons::ui::StrIdLabel tmp2 = ::flixel::addons::ui::StrIdLabel_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StrIdLabel_obj,copy,return )

int StrIdLabel_obj::sortByLabel( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b){
	HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","sortByLabel",0x0a70a8ea,"flixel.addons.ui.StrIdLabel.sortByLabel","flixel/addons/ui/StrIdLabel.hx",22,0x9376c9e4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	bool tmp = (a->label < b->label);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(23)
		return (int)-1;
	}
	HX_STACK_LINE(24)
	bool tmp1 = (a->label > b->label);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(24)
		return (int)1;
	}
	HX_STACK_LINE(25)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrIdLabel_obj,sortByLabel,return )

int StrIdLabel_obj::sortById( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b){
	HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","sortById",0x448beb25,"flixel.addons.ui.StrIdLabel.sortById","flixel/addons/ui/StrIdLabel.hx",28,0x9376c9e4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(29)
	bool tmp = (a->id < b->id);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		return (int)-1;
	}
	HX_STACK_LINE(30)
	bool tmp1 = (a->id > b->id);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(30)
		return (int)1;
	}
	HX_STACK_LINE(31)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrIdLabel_obj,sortById,return )


StrIdLabel_obj::StrIdLabel_obj()
{
}

void StrIdLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StrIdLabel);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_END_CLASS();
}

void StrIdLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(label,"label");
}

Dynamic StrIdLabel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
	}
	return super::__Field(inName,inCallProp);
}

bool StrIdLabel_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sortById") ) { outValue = sortById_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortByLabel") ) { outValue = sortByLabel_dyn(); return true;  }
	}
	return false;
}

Dynamic StrIdLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StrIdLabel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StrIdLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StrIdLabel_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(StrIdLabel_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StrIdLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StrIdLabel_obj::__mClass,"__mClass");
};

#endif

hx::Class StrIdLabel_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sortByLabel","\xdf","\x64","\x24","\x3b"),
	HX_HCSTRING("sortById","\x10","\x54","\x9e","\x44"),
	::String(null()) };

void StrIdLabel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.StrIdLabel","\xf9","\xff","\x29","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StrIdLabel_obj::__GetStatic;
	__mClass->mSetStaticField = &StrIdLabel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StrIdLabel_obj >;
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
