// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_45_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",45,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_153_htmlEscape,"StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",153,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_245_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",245,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_262_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",262,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_287_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",287,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_331_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",331,0xb9dbeb2d)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_45_urlEncode)
HXDLIN(  45)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::htmlEscape(::String s, ::Dynamic quotes){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_153_htmlEscape)
HXLINE( 154)		s = s.split(HX_("&",26,00,00,00))->join(HX_("&amp;",dd,d4,aa,21)).split(HX_("<",3c,00,00,00))->join(HX_("&lt;",4d,74,70,19)).split(HX_(">",3e,00,00,00))->join(HX_("&gt;",08,a9,6c,19));
HXLINE( 155)		if (quotes) {
HXLINE( 155)			return s.split(HX_("\"",22,00,00,00))->join(HX_("&quot;",2c,d9,81,8f)).split(HX_("'",27,00,00,00))->join(HX_("&#039;",62,26,77,78));
            		}
            		else {
HXLINE( 155)			return s;
            		}
HXDLIN( 155)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_245_isSpace)
HXLINE( 249)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		if (hx::IsGreater( c,(int)8 )) {
HXLINE( 250)			_hx_tmp = hx::IsLess( c,(int)14 );
            		}
            		else {
HXLINE( 250)			_hx_tmp = false;
            		}
HXDLIN( 250)		if (!(_hx_tmp)) {
HXLINE( 250)			return hx::IsEq( c,(int)32 );
            		}
            		else {
HXLINE( 250)			return true;
            		}
HXDLIN( 250)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_262_ltrim)
HXLINE( 266)		int l = s.length;
HXLINE( 267)		int r = (int)0;
HXLINE( 268)		while(true){
HXLINE( 268)			bool _hx_tmp;
HXDLIN( 268)			if ((r < l)) {
HXLINE( 268)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 268)				_hx_tmp = false;
            			}
HXDLIN( 268)			if (!(_hx_tmp)) {
HXLINE( 268)				goto _hx_goto_3;
            			}
HXLINE( 269)			r = (r + (int)1);
            		}
            		_hx_goto_3:;
HXLINE( 271)		if ((r > (int)0)) {
HXLINE( 272)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 274)			return s;
            		}
HXLINE( 271)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_287_rtrim)
HXLINE( 291)		int l = s.length;
HXLINE( 292)		int r = (int)0;
HXLINE( 293)		while(true){
HXLINE( 293)			bool _hx_tmp;
HXDLIN( 293)			if ((r < l)) {
HXLINE( 293)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - (int)1));
            			}
            			else {
HXLINE( 293)				_hx_tmp = false;
            			}
HXDLIN( 293)			if (!(_hx_tmp)) {
HXLINE( 293)				goto _hx_goto_5;
            			}
HXLINE( 294)			r = (r + (int)1);
            		}
            		_hx_goto_5:;
HXLINE( 296)		if ((r > (int)0)) {
HXLINE( 297)			return s.substr((int)0,(l - r));
            		}
            		else {
HXLINE( 299)			return s;
            		}
HXLINE( 296)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_331_lpad)
HXLINE( 332)		if ((c.length <= (int)0)) {
HXLINE( 333)			return s;
            		}
HXLINE( 335)		while((s.length < l)){
HXLINE( 336)			s = (c + s);
            		}
HXLINE( 338)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

static void StringTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("htmlEscape","\x4c","\xaf","\x9b","\xa8"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("ltrim","\x4e","\x43","\x4a","\x7c"),
	HX_HCSTRING("rtrim","\x54","\xbe","\xb1","\xf0"),
	HX_HCSTRING("lpad","\x67","\x5c","\xb8","\x47"),
	::String(null())
};

void StringTools_obj::__register()
{
	hx::Object *dummy = new StringTools_obj;
	StringTools_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
