// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl_Certificate
#include <sys/ssl/Certificate.h>
#endif
#ifndef INCLUDED_sys_ssl_Key
#include <sys/ssl/Key.h>
#endif
#ifndef INCLUDED_sys_ssl_Socket
#include <sys/ssl/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketInput
#include <sys/ssl/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketOutput
#include <sys/ssl/_Socket/SocketOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_96_new,"sys.ssl.Socket","new",0xb0189de8,"sys.ssl.Socket.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",96,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_c3275aecf8a0935b_266___init__,"::sys::ssl::Socket_obj","__init__",0xb5703314,"::sys::ssl::Socket_obj.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",266,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_115_init,"sys.ssl.Socket","init",0x622a4488,"sys.ssl.Socket.init","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",115,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_129_connect,"sys.ssl.Socket","connect",0x6aae6d72,"sys.ssl.Socket.connect","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",129,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_151_handshake,"sys.ssl.Socket","handshake",0x5679847f,"sys.ssl.Socket.handshake","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",151,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_185_write,"sys.ssl.Socket","write",0x9512ac67,"sys.ssl.Socket.write","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",185,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_190_close,"sys.ssl.Socket","close",0x0d1c5740,"sys.ssl.Socket.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",190,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_235_buildSSLConfig,"sys.ssl.Socket","buildSSLConfig",0xf55ff618,"sys.ssl.Socket.buildSSLConfig","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",235,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_242_buildSSLConfig,"sys.ssl.Socket","buildSSLConfig",0xf55ff618,"sys.ssl.Socket.buildSSLConfig","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",242,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_98_boot,"sys.ssl.Socket","boot",0x5d8a8daa,"sys.ssl.Socket.boot","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",98,0x91bd0920)
namespace sys{
namespace ssl{

void Socket_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_96_new)
HXDLIN(  96)		super::__construct();
            	}

Dynamic Socket_obj::__CreateEmpty() { return new Socket_obj; }

void *Socket_obj::_hx_vtable = 0;

Dynamic Socket_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Socket_obj > _hx_result = new Socket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Socket_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0bc4ca72) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0bc4ca72;
	} else {
		return inClassId==(int)0x109f852f;
	}
}

void Socket_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_c3275aecf8a0935b_266___init__)
HXDLIN( 266)		_hx_ssl_init();
            	}


void Socket_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_115_init)
HXLINE( 116)		this->__s = _hx_std_socket_new(false);
HXLINE( 117)		this->input =  ::sys::ssl::_Socket::SocketInput_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE( 118)		this->output =  ::sys::ssl::_Socket::SocketOutput_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE( 119)		bool _hx_tmp;
HXDLIN( 119)		if (::sys::ssl::Socket_obj::DEFAULT_VERIFY_CERT) {
HXLINE( 119)			_hx_tmp = hx::IsNull( ::sys::ssl::Socket_obj::DEFAULT_CA );
            		}
            		else {
HXLINE( 119)			_hx_tmp = false;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 120)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 121)				::sys::ssl::Socket_obj::DEFAULT_CA = ::sys::ssl::Certificate_obj::loadDefaults();
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 124)		this->caCert = ::sys::ssl::Socket_obj::DEFAULT_CA;
HXLINE( 125)		this->verifyCert = ::sys::ssl::Socket_obj::DEFAULT_VERIFY_CERT;
            	}


void Socket_obj::connect( ::sys::net::Host host,int port){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_129_connect)
HXDLIN( 129)		try {
            			HX_STACK_CATCHABLE(::String, 0);
            			HX_STACK_CATCHABLE( ::Dynamic, 1);
HXLINE( 130)			this->conf = this->buildSSLConfig(false);
HXLINE( 131)			this->ssl = _hx_ssl_new(this->conf);
HXLINE( 132)			this->handshakeDone = false;
HXLINE( 133)			_hx_ssl_set_socket(this->ssl,this->__s);
HXLINE( 134)			if (hx::IsNull( this->hostname )) {
HXLINE( 135)				this->hostname = host->host;
            			}
HXLINE( 136)			if (hx::IsNotNull( this->hostname )) {
HXLINE( 137)				_hx_ssl_set_hostname(this->ssl,this->hostname);
            			}
HXLINE( 138)			_hx_std_socket_connect(this->__s,host->ip,port);
HXLINE( 139)			this->handshake();
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass< ::String >() ){
            				HX_STACK_BEGIN_CATCH
            				::String s = _hx_e;
HXLINE( 141)				if ((s == HX_("Invalid socket handle",6c,15,f9,09))) {
HXLINE( 142)					HX_STACK_DO_THROW((((HX_("Failed to connect on ",a9,2b,e3,45) + host->host) + HX_(":",3a,00,00,00)) + port));
            				}
            				else {
HXLINE( 144)					HX_STACK_DO_RETHROW(s);
            				}
            			}
            			else if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 146)				HX_STACK_DO_RETHROW(e);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


void Socket_obj::handshake(){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_151_handshake)
HXDLIN( 151)		if (!(this->handshakeDone)) {
HXLINE( 152)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 153)				_hx_ssl_handshake(this->ssl);
HXLINE( 154)				this->handshakeDone = true;
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE( 156)					if (hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE( 157)						HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            					}
            					else {
HXLINE( 159)						HX_STACK_DO_RETHROW(e);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,handshake,(void))

void Socket_obj::write(::String content){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_185_write)
HXLINE( 186)		this->handshake();
HXLINE( 187)		_hx_ssl_write(this->ssl,::haxe::io::Bytes_obj::ofString(content)->b);
            	}


void Socket_obj::close(){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_190_close)
HXLINE( 191)		if (hx::IsNotNull( this->ssl )) {
HXLINE( 191)			_hx_ssl_close(this->ssl);
            		}
HXLINE( 192)		if (hx::IsNotNull( this->conf )) {
HXLINE( 192)			_hx_ssl_conf_close(this->conf);
            		}
HXLINE( 193)		if (hx::IsNotNull( this->altSNIContexts )) {
HXLINE( 194)			this->sniCallback = null();
            		}
HXLINE( 195)		_hx_std_socket_close(this->__s);
HXLINE( 196)		 ::sys::ssl::_Socket::SocketInput input = ( ( ::sys::ssl::_Socket::SocketInput)(this->input) );
HXLINE( 197)		 ::sys::ssl::_Socket::SocketOutput output = ( ( ::sys::ssl::_Socket::SocketOutput)(this->output) );
HXLINE( 198)		input->__s = (output->__s = null());
HXLINE( 199)		input->close();
HXLINE( 200)		output->close();
            	}


 ::Dynamic Socket_obj::buildSSLConfig(bool server){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_235_buildSSLConfig)
HXDLIN( 235)		 ::sys::ssl::Socket _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 236)		 ::Dynamic conf = _hx_ssl_conf_new(server);
HXLINE( 238)		bool _hx_tmp;
HXDLIN( 238)		if (hx::IsNotNull( this->ownCert )) {
HXLINE( 238)			_hx_tmp = hx::IsNotNull( this->ownKey );
            		}
            		else {
HXLINE( 238)			_hx_tmp = false;
            		}
HXDLIN( 238)		if (_hx_tmp) {
HXLINE( 239)			_hx_ssl_conf_set_cert(conf,this->ownCert->_hx___x,this->ownKey->_hx___k);
            		}
HXLINE( 241)		if (hx::IsNotNull( this->altSNIContexts )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::sys::ssl::Socket,_gthis) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic servername){
            				HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_242_buildSSLConfig)
HXLINE( 243)				::String servername1 = ::String(( (::String)(servername) ));
HXLINE( 244)				{
HXLINE( 244)					int _g = (int)0;
HXDLIN( 244)					::Array< ::Dynamic> _g1 = _gthis->altSNIContexts;
HXDLIN( 244)					while((_g < _g1->length)){
HXLINE( 244)						 ::Dynamic c = _g1->__get(_g);
HXDLIN( 244)						_g = (_g + (int)1);
HXLINE( 245)						if (( (bool)(c->__Field(HX_("match",45,49,23,03),hx::paccDynamic)(servername1)) )) {
HXLINE( 246)							return  ::Dynamic(hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("key",9f,89,51,00),( ( ::sys::ssl::Key)(c->__Field(HX_("key",9f,89,51,00),hx::paccDynamic)) )->_hx___k)
            								->setFixed(1,HX_("cert",e4,26,bd,41),( ( ::sys::ssl::Certificate)(c->__Field(HX_("cert",e4,26,bd,41),hx::paccDynamic)) )->_hx___x));
            						}
            					}
            				}
HXLINE( 248)				bool _hx_tmp1;
HXDLIN( 248)				if (hx::IsNotNull( _gthis->ownKey )) {
HXLINE( 248)					_hx_tmp1 = hx::IsNotNull( _gthis->ownCert );
            				}
            				else {
HXLINE( 248)					_hx_tmp1 = false;
            				}
HXDLIN( 248)				if (_hx_tmp1) {
HXLINE( 249)					return  ::Dynamic(hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("key",9f,89,51,00),_gthis->ownKey->_hx___k)
            						->setFixed(1,HX_("cert",e4,26,bd,41),_gthis->ownCert->_hx___x));
            				}
HXLINE( 250)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 242)			this->sniCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 252)			_hx_ssl_conf_set_servername_callback(conf,this->sniCallback);
            		}
HXLINE( 255)		if (hx::IsNotNull( this->caCert )) {
HXLINE( 256)			 ::Dynamic _hx_tmp2;
HXDLIN( 256)			if (hx::IsNull( this->caCert )) {
HXLINE( 256)				_hx_tmp2 = null();
            			}
            			else {
HXLINE( 256)				_hx_tmp2 = this->caCert->_hx___x;
            			}
HXDLIN( 256)			_hx_ssl_conf_set_ca(conf,_hx_tmp2);
            		}
HXLINE( 257)		if (hx::IsNull( this->verifyCert )) {
HXLINE( 258)			_hx_ssl_conf_set_verify(conf,(int)2);
            		}
            		else {
HXLINE( 260)			int _hx_tmp3;
HXDLIN( 260)			if (this->verifyCert) {
HXLINE( 260)				_hx_tmp3 = (int)1;
            			}
            			else {
HXLINE( 260)				_hx_tmp3 = (int)0;
            			}
HXDLIN( 260)			_hx_ssl_conf_set_verify(conf,_hx_tmp3);
            		}
HXLINE( 262)		return conf;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,buildSSLConfig,return )

 ::Dynamic Socket_obj::DEFAULT_VERIFY_CERT;

 ::sys::ssl::Certificate Socket_obj::DEFAULT_CA;


hx::ObjectPtr< Socket_obj > Socket_obj::__new() {
	hx::ObjectPtr< Socket_obj > __this = new Socket_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Socket_obj > Socket_obj::__alloc(hx::Ctx *_hx_ctx) {
	Socket_obj *__this = (Socket_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Socket_obj), true, "sys.ssl.Socket"));
	*(void **)__this = Socket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(conf,"conf");
	HX_MARK_MEMBER_NAME(ssl,"ssl");
	HX_MARK_MEMBER_NAME(verifyCert,"verifyCert");
	HX_MARK_MEMBER_NAME(caCert,"caCert");
	HX_MARK_MEMBER_NAME(hostname,"hostname");
	HX_MARK_MEMBER_NAME(ownCert,"ownCert");
	HX_MARK_MEMBER_NAME(ownKey,"ownKey");
	HX_MARK_MEMBER_NAME(altSNIContexts,"altSNIContexts");
	HX_MARK_MEMBER_NAME(sniCallback,"sniCallback");
	HX_MARK_MEMBER_NAME(handshakeDone,"handshakeDone");
	 ::sys::net::Socket_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(conf,"conf");
	HX_VISIT_MEMBER_NAME(ssl,"ssl");
	HX_VISIT_MEMBER_NAME(verifyCert,"verifyCert");
	HX_VISIT_MEMBER_NAME(caCert,"caCert");
	HX_VISIT_MEMBER_NAME(hostname,"hostname");
	HX_VISIT_MEMBER_NAME(ownCert,"ownCert");
	HX_VISIT_MEMBER_NAME(ownKey,"ownKey");
	HX_VISIT_MEMBER_NAME(altSNIContexts,"altSNIContexts");
	HX_VISIT_MEMBER_NAME(sniCallback,"sniCallback");
	HX_VISIT_MEMBER_NAME(handshakeDone,"handshakeDone");
	 ::sys::net::Socket_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Socket_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ssl") ) { return hx::Val( ssl ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"conf") ) { return hx::Val( conf ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return hx::Val( write_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"caCert") ) { return hx::Val( caCert ); }
		if (HX_FIELD_EQ(inName,"ownKey") ) { return hx::Val( ownKey ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ownCert") ) { return hx::Val( ownCert ); }
		if (HX_FIELD_EQ(inName,"connect") ) { return hx::Val( connect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hostname") ) { return hx::Val( hostname ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"handshake") ) { return hx::Val( handshake_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"verifyCert") ) { return hx::Val( verifyCert ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sniCallback") ) { return hx::Val( sniCallback ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handshakeDone") ) { return hx::Val( handshakeDone ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"altSNIContexts") ) { return hx::Val( altSNIContexts ); }
		if (HX_FIELD_EQ(inName,"buildSSLConfig") ) { return hx::Val( buildSSLConfig_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Socket_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"DEFAULT_CA") ) { outValue = ( DEFAULT_CA ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_VERIFY_CERT") ) { outValue = ( DEFAULT_VERIFY_CERT ); return true; }
	}
	return false;
}

hx::Val Socket_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ssl") ) { ssl=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"conf") ) { conf=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"caCert") ) { caCert=inValue.Cast<  ::sys::ssl::Certificate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ownKey") ) { ownKey=inValue.Cast<  ::sys::ssl::Key >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ownCert") ) { ownCert=inValue.Cast<  ::sys::ssl::Certificate >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hostname") ) { hostname=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"verifyCert") ) { verifyCert=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sniCallback") ) { sniCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handshakeDone") ) { handshakeDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"altSNIContexts") ) { altSNIContexts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Socket_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"DEFAULT_CA") ) { DEFAULT_CA=ioValue.Cast<  ::sys::ssl::Certificate >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_VERIFY_CERT") ) { DEFAULT_VERIFY_CERT=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("conf","\xe4","\xb9","\xc4","\x41"));
	outFields->push(HX_HCSTRING("ssl","\xcc","\xa7","\x57","\x00"));
	outFields->push(HX_HCSTRING("verifyCert","\xfd","\x86","\xcf","\x02"));
	outFields->push(HX_HCSTRING("caCert","\xa2","\x50","\xc9","\x9b"));
	outFields->push(HX_HCSTRING("hostname","\xb3","\x15","\xd2","\x52"));
	outFields->push(HX_HCSTRING("ownCert","\x4a","\x90","\xf0","\x1e"));
	outFields->push(HX_HCSTRING("ownKey","\xf9","\xce","\x3a","\x2f"));
	outFields->push(HX_HCSTRING("altSNIContexts","\x89","\xca","\x20","\x8a"));
	outFields->push(HX_HCSTRING("sniCallback","\x53","\x17","\xa6","\x61"));
	outFields->push(HX_HCSTRING("handshakeDone","\x19","\x45","\xe6","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Socket_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,conf),HX_HCSTRING("conf","\xe4","\xb9","\xc4","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,ssl),HX_HCSTRING("ssl","\xcc","\xa7","\x57","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,verifyCert),HX_HCSTRING("verifyCert","\xfd","\x86","\xcf","\x02")},
	{hx::fsObject /*::sys::ssl::Certificate*/ ,(int)offsetof(Socket_obj,caCert),HX_HCSTRING("caCert","\xa2","\x50","\xc9","\x9b")},
	{hx::fsString,(int)offsetof(Socket_obj,hostname),HX_HCSTRING("hostname","\xb3","\x15","\xd2","\x52")},
	{hx::fsObject /*::sys::ssl::Certificate*/ ,(int)offsetof(Socket_obj,ownCert),HX_HCSTRING("ownCert","\x4a","\x90","\xf0","\x1e")},
	{hx::fsObject /*::sys::ssl::Key*/ ,(int)offsetof(Socket_obj,ownKey),HX_HCSTRING("ownKey","\xf9","\xce","\x3a","\x2f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Socket_obj,altSNIContexts),HX_HCSTRING("altSNIContexts","\x89","\xca","\x20","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,sniCallback),HX_HCSTRING("sniCallback","\x53","\x17","\xa6","\x61")},
	{hx::fsBool,(int)offsetof(Socket_obj,handshakeDone),HX_HCSTRING("handshakeDone","\x19","\x45","\xe6","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Socket_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Socket_obj::DEFAULT_VERIFY_CERT,HX_HCSTRING("DEFAULT_VERIFY_CERT","\xcc","\x6c","\x33","\x0e")},
	{hx::fsObject /*::sys::ssl::Certificate*/ ,(void *) &Socket_obj::DEFAULT_CA,HX_HCSTRING("DEFAULT_CA","\xbc","\x7e","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Socket_obj_sMemberFields[] = {
	HX_HCSTRING("conf","\xe4","\xb9","\xc4","\x41"),
	HX_HCSTRING("ssl","\xcc","\xa7","\x57","\x00"),
	HX_HCSTRING("verifyCert","\xfd","\x86","\xcf","\x02"),
	HX_HCSTRING("caCert","\xa2","\x50","\xc9","\x9b"),
	HX_HCSTRING("hostname","\xb3","\x15","\xd2","\x52"),
	HX_HCSTRING("ownCert","\x4a","\x90","\xf0","\x1e"),
	HX_HCSTRING("ownKey","\xf9","\xce","\x3a","\x2f"),
	HX_HCSTRING("altSNIContexts","\x89","\xca","\x20","\x8a"),
	HX_HCSTRING("sniCallback","\x53","\x17","\xa6","\x61"),
	HX_HCSTRING("handshakeDone","\x19","\x45","\xe6","\x99"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	HX_HCSTRING("handshake","\xf7","\xe0","\x35","\xb4"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("buildSSLConfig","\xa0","\x66","\x29","\x1e"),
	::String(null()) };

static void Socket_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Socket_obj::DEFAULT_VERIFY_CERT,"DEFAULT_VERIFY_CERT");
	HX_MARK_MEMBER_NAME(Socket_obj::DEFAULT_CA,"DEFAULT_CA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Socket_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Socket_obj::DEFAULT_VERIFY_CERT,"DEFAULT_VERIFY_CERT");
	HX_VISIT_MEMBER_NAME(Socket_obj::DEFAULT_CA,"DEFAULT_CA");
};

#endif

hx::Class Socket_obj::__mClass;

static ::String Socket_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_VERIFY_CERT","\xcc","\x6c","\x33","\x0e"),
	HX_HCSTRING("DEFAULT_CA","\xbc","\x7e","\x2f","\x18"),
	::String(null())
};

void Socket_obj::__register()
{
	hx::Object *dummy = new Socket_obj;
	Socket_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.ssl.Socket","\xf6","\xc9","\xb1","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Socket_obj::__GetStatic;
	__mClass->mSetStaticField = &Socket_obj::__SetStatic;
	__mClass->mMarkFunc = Socket_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Socket_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Socket_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Socket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Socket_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Socket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Socket_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Socket_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_98_boot)
HXDLIN(  98)		DEFAULT_VERIFY_CERT = true;
            	}
}

} // end namespace sys
} // end namespace ssl