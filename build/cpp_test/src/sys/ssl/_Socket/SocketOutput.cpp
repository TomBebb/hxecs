// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl_Socket
#include <sys/ssl/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketOutput
#include <sys/ssl/_Socket/SocketOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a6d7c5b5ca7c99c6_59_new,"sys.ssl._Socket.SocketOutput","new",0xc0bfe785,"sys.ssl._Socket.SocketOutput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",59,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_a6d7c5b5ca7c99c6_62_writeByte,"sys.ssl._Socket.SocketOutput","writeByte",0x9388946c,"sys.ssl._Socket.SocketOutput.writeByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",62,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_a6d7c5b5ca7c99c6_77_writeBytes,"sys.ssl._Socket.SocketOutput","writeBytes",0x83f94a87,"sys.ssl._Socket.SocketOutput.writeBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",77,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_a6d7c5b5ca7c99c6_88_close,"sys.ssl._Socket.SocketOutput","close",0x0d5f021d,"sys.ssl._Socket.SocketOutput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",88,0x91bd0920)
namespace sys{
namespace ssl{
namespace _Socket{

void SocketOutput_obj::__construct( ::sys::ssl::Socket s){
            	HX_STACKFRAME(&_hx_pos_a6d7c5b5ca7c99c6_59_new)
HXDLIN(  59)		this->__s = s;
            	}

Dynamic SocketOutput_obj::__CreateEmpty() { return new SocketOutput_obj; }

void *SocketOutput_obj::_hx_vtable = 0;

Dynamic SocketOutput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SocketOutput_obj > _hx_result = new SocketOutput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SocketOutput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3473efad) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3473efad;
	} else {
		return inClassId==(int)0x7eab037b;
	}
}

void SocketOutput_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_a6d7c5b5ca7c99c6_62_writeByte)
HXLINE(  63)		if (hx::IsNull( this->__s )) {
HXLINE(  64)			HX_STACK_DO_THROW(HX_("Invalid handle",d1,71,75,85));
            		}
HXLINE(  65)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  66)			this->__s->handshake();
HXLINE(  67)			_hx_ssl_send_char(this->__s->ssl,c);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  69)				if (hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE(  70)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            				}
            				else {
HXLINE(  72)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


int SocketOutput_obj::writeBytes( ::haxe::io::Bytes buf,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_a6d7c5b5ca7c99c6_77_writeBytes)
HXDLIN(  77)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  78)			this->__s->handshake();
HXLINE(  79)			return _hx_ssl_send(this->__s->ssl,buf->b,pos,len);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  81)				if (hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE(  82)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            				}
            				else {
HXLINE(  84)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  77)		return (int)0;
            	}


void SocketOutput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_a6d7c5b5ca7c99c6_88_close)
HXLINE(  89)		this->super::close();
HXLINE(  90)		if (hx::IsNotNull( this->__s )) {
HXLINE(  90)			this->__s->close();
            		}
            	}



hx::ObjectPtr< SocketOutput_obj > SocketOutput_obj::__new( ::sys::ssl::Socket s) {
	hx::ObjectPtr< SocketOutput_obj > __this = new SocketOutput_obj();
	__this->__construct(s);
	return __this;
}

hx::ObjectPtr< SocketOutput_obj > SocketOutput_obj::__alloc(hx::Ctx *_hx_ctx, ::sys::ssl::Socket s) {
	SocketOutput_obj *__this = (SocketOutput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SocketOutput_obj), true, "sys.ssl._Socket.SocketOutput"));
	*(void **)__this = SocketOutput_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

SocketOutput_obj::SocketOutput_obj()
{
}

void SocketOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketOutput);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void SocketOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

hx::Val SocketOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return hx::Val( __s ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SocketOutput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast<  ::sys::ssl::Socket >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SocketOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SocketOutput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::sys::ssl::Socket*/ ,(int)offsetof(SocketOutput_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SocketOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String SocketOutput_obj_sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void SocketOutput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SocketOutput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class SocketOutput_obj::__mClass;

void SocketOutput_obj::__register()
{
	hx::Object *dummy = new SocketOutput_obj;
	SocketOutput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.ssl._Socket.SocketOutput","\x13","\xc1","\x72","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SocketOutput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SocketOutput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SocketOutput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SocketOutput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SocketOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SocketOutput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace ssl
} // end namespace _Socket