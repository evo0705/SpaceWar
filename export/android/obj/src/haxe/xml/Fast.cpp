#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace xml{

Void Fast_obj::__construct(::Xml x)
{
HX_STACK_FRAME("haxe.xml.Fast","new",0xda21546d,"haxe.xml.Fast.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",122,0x60a2153a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
{
	HX_STACK_LINE(123)
	int tmp = x->nodeType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = ::Xml_obj::Document;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		int tmp4 = x->nodeType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		int tmp5 = ::Xml_obj::Element;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		tmp3 = (tmp4 != tmp6);
	}
	else{
		HX_STACK_LINE(123)
		tmp3 = false;
	}
	HX_STACK_LINE(123)
	if ((tmp3)){
		HX_STACK_LINE(124)
		::String tmp4 = (HX_HCSTRING("Invalid nodeType ","\x3b","\xe0","\xcb","\xe1") + x->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(125)
	this->x = x;
	HX_STACK_LINE(126)
	::haxe::xml::_Fast::NodeAccess tmp4 = ::haxe::xml::_Fast::NodeAccess_obj::__new(x);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	this->node = tmp4;
	HX_STACK_LINE(127)
	::haxe::xml::_Fast::NodeListAccess tmp5 = ::haxe::xml::_Fast::NodeListAccess_obj::__new(x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	this->nodes = tmp5;
	HX_STACK_LINE(128)
	::haxe::xml::_Fast::AttribAccess tmp6 = ::haxe::xml::_Fast::AttribAccess_obj::__new(x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(128)
	this->att = tmp6;
	HX_STACK_LINE(129)
	::haxe::xml::_Fast::HasAttribAccess tmp7 = ::haxe::xml::_Fast::HasAttribAccess_obj::__new(x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(129)
	this->has = tmp7;
	HX_STACK_LINE(130)
	::haxe::xml::_Fast::HasNodeAccess tmp8 = ::haxe::xml::_Fast::HasNodeAccess_obj::__new(x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(130)
	this->hasNode = tmp8;
}
;
	return null();
}

//Fast_obj::~Fast_obj() { }

Dynamic Fast_obj::__CreateEmpty() { return  new Fast_obj; }
hx::ObjectPtr< Fast_obj > Fast_obj::__new(::Xml x)
{  hx::ObjectPtr< Fast_obj > _result_ = new Fast_obj();
	_result_->__construct(x);
	return _result_;}

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fast_obj > _result_ = new Fast_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String Fast_obj::get_name( ){
	HX_STACK_FRAME("haxe.xml.Fast","get_name",0x9611daa7,"haxe.xml.Fast.get_name","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",133,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::Xml tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	int tmp1 = tmp->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	int tmp2 = ::Xml_obj::Document;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	if ((tmp3)){
		HX_STACK_LINE(134)
		tmp4 = HX_HCSTRING("Document","\x3b","\xab","\xc4","\x74");
	}
	else{
		HX_STACK_LINE(134)
		::Xml tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		::Xml _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(134)
		int tmp6 = _this->nodeType;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		int tmp7 = ::Xml_obj::Element;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(134)
		if ((tmp8)){
			HX_STACK_LINE(134)
			::String tmp9 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + _this->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(134)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(134)
		tmp4 = _this->nodeName;
	}
	HX_STACK_LINE(134)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_name,return )

Dynamic Fast_obj::get_elements( ){
	HX_STACK_FRAME("haxe.xml.Fast","get_elements",0x6707fc93,"haxe.xml.Fast.get_elements","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",164,0x60a2153a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::Xml tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	Dynamic tmp1 = tmp->elements();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	Dynamic it = tmp1;		HX_STACK_VAR(it,"it");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &it){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",166,0x60a2153a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18") , it->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic ),false);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,it)
				int __ArgCount() const { return 0; }
				::haxe::xml::Fast run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",168,0x60a2153a)
					{
						HX_STACK_LINE(169)
						::Xml tmp2 = it->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(169)
						::Xml x = tmp2;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(170)
						bool tmp3 = (x == null());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(170)
						if ((tmp3)){
							HX_STACK_LINE(171)
							return null();
						}
						HX_STACK_LINE(172)
						::haxe::xml::Fast tmp4 = ::haxe::xml::Fast_obj::__new(x);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(172)
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_HCSTRING("next","\xf3","\x84","\x02","\x49") ,  Dynamic(new _Function_2_1(it)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(166)
	Dynamic tmp2 = _Function_1_1::Block(it);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,get_elements,return )


Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
}

Dynamic Fast_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return att; }
		if (HX_FIELD_EQ(inName,"has") ) { return has; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hasNode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_elements") ) { return get_elements_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fast_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast< ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast< ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast< ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Fast_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("att","\x21","\x00","\x4a","\x00"));
	outFields->push(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fast_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeAccess*/ ,(int)offsetof(Fast_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeListAccess*/ ,(int)offsetof(Fast_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::haxe::xml::_Fast::AttribAccess*/ ,(int)offsetof(Fast_obj,att),HX_HCSTRING("att","\x21","\x00","\x4a","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasAttribAccess*/ ,(int)offsetof(Fast_obj,has),HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasNodeAccess*/ ,(int)offsetof(Fast_obj,hasNode),HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("att","\x21","\x00","\x4a","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_elements","\x40","\xea","\xdd","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#endif

hx::Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Fast","\xfb","\x99","\x91","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Fast_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fast_obj >;
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

} // end namespace haxe
} // end namespace xml
