// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_HTTPClient
#include <massive/munit/client/HTTPClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_URLRequest
#include <massive/munit/client/URLRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc0f7bb91c661971_96_new,"massive.munit.client.HTTPClient","new",0x4380ec61,"massive.munit.client.HTTPClient.new","massive/munit/client/HTTPClient.hx",96,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_77_get_completionHandler,"massive.munit.client.HTTPClient","get_completionHandler",0xe0121b26,"massive.munit.client.HTTPClient.get_completionHandler","massive/munit/client/HTTPClient.hx",77,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_81_set_completionHandler,"massive.munit.client.HTTPClient","set_completionHandler",0x341ae932,"massive.munit.client.HTTPClient.set_completionHandler","massive/munit/client/HTTPClient.hx",81,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_110_setCurrentTestClass,"massive.munit.client.HTTPClient","setCurrentTestClass",0x566774d0,"massive.munit.client.HTTPClient.setCurrentTestClass","massive/munit/client/HTTPClient.hx",110,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_123_addPass,"massive.munit.client.HTTPClient","addPass",0x2fe0d813,"massive.munit.client.HTTPClient.addPass","massive/munit/client/HTTPClient.hx",123,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_133_addFail,"massive.munit.client.HTTPClient","addFail",0x2944ad20,"massive.munit.client.HTTPClient.addFail","massive/munit/client/HTTPClient.hx",133,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_143_addError,"massive.munit.client.HTTPClient","addError",0x6aafb246,"massive.munit.client.HTTPClient.addError","massive/munit/client/HTTPClient.hx",143,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_153_addIgnore,"massive.munit.client.HTTPClient","addIgnore",0x306c80d4,"massive.munit.client.HTTPClient.addIgnore","massive/munit/client/HTTPClient.hx",153,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_168_reportFinalStatistics,"massive.munit.client.HTTPClient","reportFinalStatistics",0x120fd026,"massive.munit.client.HTTPClient.reportFinalStatistics","massive/munit/client/HTTPClient.hx",168,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_175_sendResult,"massive.munit.client.HTTPClient","sendResult",0x93fb6664,"massive.munit.client.HTTPClient.sendResult","massive/munit/client/HTTPClient.hx",175,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_198_platform,"massive.munit.client.HTTPClient","platform",0xe6227312,"massive.munit.client.HTTPClient.platform","massive/munit/client/HTTPClient.hx",198,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_210_onData,"massive.munit.client.HTTPClient","onData",0x9e82f988,"massive.munit.client.HTTPClient.onData","massive/munit/client/HTTPClient.hx",210,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_221_onError,"massive.munit.client.HTTPClient","onError",0xb2b91aaa,"massive.munit.client.HTTPClient.onError","massive/munit/client/HTTPClient.hx",221,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_232_dispatchNextRequest,"massive.munit.client.HTTPClient","dispatchNextRequest",0x2fe27403,"massive.munit.client.HTTPClient.dispatchNextRequest","massive/munit/client/HTTPClient.hx",232,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_61_boot,"massive.munit.client.HTTPClient","boot",0xc566e911,"massive.munit.client.HTTPClient.boot","massive/munit/client/HTTPClient.hx",61,0xff13f150)
HX_LOCAL_STACK_FRAME(_hx_pos_cc0f7bb91c661971_62_boot,"massive.munit.client.HTTPClient","boot",0xc566e911,"massive.munit.client.HTTPClient.boot","massive/munit/client/HTTPClient.hx",62,0xff13f150)
namespace massive{
namespace munit{
namespace client{

void HTTPClient_obj::__construct(::Dynamic client,::String __o_url, ::Dynamic __o_queueRequest){
::String url = __o_url.Default(HX_HCSTRING("http://localhost:2000","\x17","\xd0","\x62","\x55"));
 ::Dynamic queueRequest = __o_queueRequest.Default(true);
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_96_new)
HXLINE(  97)		this->id = HX_("HTTPClient",f3,f7,4e,4e);
HXLINE(  98)		this->client = client;
HXLINE(  99)		this->url = url;
HXLINE( 100)		this->queueRequest = queueRequest;
            	}

Dynamic HTTPClient_obj::__CreateEmpty() { return new HTTPClient_obj; }

void *HTTPClient_obj::_hx_vtable = 0;

Dynamic HTTPClient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTTPClient_obj > _hx_result = new HTTPClient_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HTTPClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ca9fdef;
}

static ::massive::munit::IAdvancedTestResultClient_obj _hx_massive_munit_client_HTTPClient__hx_massive_munit_IAdvancedTestResultClient= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::massive::munit::client::HTTPClient_obj::set_completionHandler,
	(  ::Dynamic (hx::Object::*)())&::massive::munit::client::HTTPClient_obj::get_completionHandler,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addPass,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addFail,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addError,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addIgnore,
	(  ::Dynamic (hx::Object::*)(int,int,int,int,int,Float))&::massive::munit::client::HTTPClient_obj::reportFinalStatistics,
	( void (hx::Object::*)(::String))&::massive::munit::client::HTTPClient_obj::setCurrentTestClass,
};

static ::massive::munit::ITestResultClient_obj _hx_massive_munit_client_HTTPClient__hx_massive_munit_ITestResultClient= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::massive::munit::client::HTTPClient_obj::set_completionHandler,
	(  ::Dynamic (hx::Object::*)())&::massive::munit::client::HTTPClient_obj::get_completionHandler,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addPass,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addFail,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addError,
	( void (hx::Object::*)( ::massive::munit::TestResult))&::massive::munit::client::HTTPClient_obj::addIgnore,
	(  ::Dynamic (hx::Object::*)(int,int,int,int,int,Float))&::massive::munit::client::HTTPClient_obj::reportFinalStatistics,
};

void *HTTPClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xce173438: return &_hx_massive_munit_client_HTTPClient__hx_massive_munit_IAdvancedTestResultClient;
		case (int)0xe35dae76: return &_hx_massive_munit_client_HTTPClient__hx_massive_munit_ITestResultClient;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic HTTPClient_obj::get_completionHandler(){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_77_get_completionHandler)
HXDLIN(  77)		return this->completionHandler;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,get_completionHandler,return )

 ::Dynamic HTTPClient_obj::set_completionHandler( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_81_set_completionHandler)
HXDLIN(  81)		return (this->completionHandler = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,set_completionHandler,return )

void HTTPClient_obj::setCurrentTestClass(::String className){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_110_setCurrentTestClass)
HXDLIN( 110)		if (::Std_obj::is(this->client,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >())) {
HXLINE( 112)			::massive::munit::IAdvancedTestResultClient_obj::setCurrentTestClass(this->client,className);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,setCurrentTestClass,(void))

void HTTPClient_obj::addPass( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_123_addPass)
HXDLIN( 123)		::massive::munit::ITestResultClient_obj::addPass(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addPass,(void))

void HTTPClient_obj::addFail( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_133_addFail)
HXDLIN( 133)		::massive::munit::ITestResultClient_obj::addFail(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addFail,(void))

void HTTPClient_obj::addError( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_143_addError)
HXDLIN( 143)		::massive::munit::ITestResultClient_obj::addError(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addError,(void))

void HTTPClient_obj::addIgnore( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_153_addIgnore)
HXDLIN( 153)		::massive::munit::ITestResultClient_obj::addIgnore(this->client,result);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,addIgnore,(void))

 ::Dynamic HTTPClient_obj::reportFinalStatistics(int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_168_reportFinalStatistics)
HXLINE( 169)		 ::Dynamic result = ::massive::munit::ITestResultClient_obj::reportFinalStatistics(this->client,testCount,passCount,failCount,errorCount,ignoreCount,time);
HXLINE( 170)		this->sendResult(result);
HXLINE( 171)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC6(HTTPClient_obj,reportFinalStatistics,return )

void HTTPClient_obj::sendResult( ::Dynamic result){
            	HX_GC_STACKFRAME(&_hx_pos_cc0f7bb91c661971_175_sendResult)
HXLINE( 176)		this->request =  ::massive::munit::client::URLRequest_obj::__alloc( HX_CTX ,this->url);
HXLINE( 177)		this->request->setHeader(HX_("munit-clientId",a2,2c,fe,2b),( (::String)(this->client->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) ));
HXLINE( 178)		 ::massive::munit::client::URLRequest _hx_tmp = this->request;
HXDLIN( 178)		_hx_tmp->setHeader(HX_("munit-platformId",0a,9e,97,3a),this->platform());
HXLINE( 179)		this->request->onData = this->onData_dyn();
HXLINE( 180)		this->request->onError = this->onError_dyn();
HXLINE( 181)		this->request->data = result;
HXLINE( 182)		if (this->queueRequest) {
HXLINE( 184)			::massive::munit::client::HTTPClient_obj::queue->unshift(this->request);
HXLINE( 185)			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
            		}
            		else {
HXLINE( 189)			this->request->send();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,sendResult,(void))

::String HTTPClient_obj::platform(){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_198_platform)
HXDLIN( 198)		return HX_("cpp",23,81,4b,00);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,platform,return )

void HTTPClient_obj::onData(::String data){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_210_onData)
HXLINE( 211)		if (this->queueRequest) {
HXLINE( 213)			::massive::munit::client::HTTPClient_obj::responsePending = false;
HXLINE( 214)			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
            		}
HXLINE( 216)		if (hx::IsNotNull( this->get_completionHandler() )) {
HXLINE( 217)			this->get_completionHandler()(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onData,(void))

void HTTPClient_obj::onError(::String msg){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_221_onError)
HXLINE( 222)		if (this->queueRequest) {
HXLINE( 224)			::massive::munit::client::HTTPClient_obj::responsePending = false;
HXLINE( 225)			::massive::munit::client::HTTPClient_obj::dispatchNextRequest();
            		}
HXLINE( 227)		if (hx::IsNotNull( this->get_completionHandler() )) {
HXLINE( 228)			this->get_completionHandler()(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(HTTPClient_obj,onError,(void))

::Array< ::Dynamic> HTTPClient_obj::queue;

bool HTTPClient_obj::responsePending;

void HTTPClient_obj::dispatchNextRequest(){
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_232_dispatchNextRequest)
HXLINE( 233)		bool _hx_tmp;
HXDLIN( 233)		if (!(::massive::munit::client::HTTPClient_obj::responsePending)) {
HXLINE( 233)			_hx_tmp = (::massive::munit::client::HTTPClient_obj::queue->length == (int)0);
            		}
            		else {
HXLINE( 233)			_hx_tmp = true;
            		}
HXDLIN( 233)		if (_hx_tmp) {
HXLINE( 234)			return;
            		}
HXLINE( 236)		::massive::munit::client::HTTPClient_obj::responsePending = true;
HXLINE( 238)		 ::massive::munit::client::URLRequest request = ::massive::munit::client::HTTPClient_obj::queue->pop().StaticCast<  ::massive::munit::client::URLRequest >();
HXLINE( 239)		request->send();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HTTPClient_obj,dispatchNextRequest,(void))


hx::ObjectPtr< HTTPClient_obj > HTTPClient_obj::__new(::Dynamic client,::String __o_url, ::Dynamic __o_queueRequest) {
	hx::ObjectPtr< HTTPClient_obj > __this = new HTTPClient_obj();
	__this->__construct(client,__o_url,__o_queueRequest);
	return __this;
}

hx::ObjectPtr< HTTPClient_obj > HTTPClient_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic client,::String __o_url, ::Dynamic __o_queueRequest) {
	HTTPClient_obj *__this = (HTTPClient_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HTTPClient_obj), true, "massive.munit.client.HTTPClient"));
	*(void **)__this = HTTPClient_obj::_hx_vtable;
	__this->__construct(client,__o_url,__o_queueRequest);
	return __this;
}

HTTPClient_obj::HTTPClient_obj()
{
}

void HTTPClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(queueRequest,"queueRequest");
	HX_MARK_END_CLASS();
}

void HTTPClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(queueRequest,"queueRequest");
}

hx::Val HTTPClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return hx::Val( client ); }
		if (HX_FIELD_EQ(inName,"onData") ) { return hx::Val( onData_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return hx::Val( request ); }
		if (HX_FIELD_EQ(inName,"addPass") ) { return hx::Val( addPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return hx::Val( addFail_dyn() ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return hx::Val( addError_dyn() ); }
		if (HX_FIELD_EQ(inName,"platform") ) { return hx::Val( platform_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return hx::Val( addIgnore_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sendResult") ) { return hx::Val( sendResult_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { return hx::Val( queueRequest ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return hx::Val( inCallProp == hx::paccAlways ? get_completionHandler() : completionHandler ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return hx::Val( setCurrentTestClass_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return hx::Val( get_completionHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return hx::Val( set_completionHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return hx::Val( reportFinalStatistics_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPClient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = ( queue ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { outValue = ( responsePending ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatchNextRequest") ) { outValue = dispatchNextRequest_dyn(); return true; }
	}
	return false;
}

hx::Val HTTPClient_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast<  ::massive::munit::client::URLRequest >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queueRequest") ) { queueRequest=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_completionHandler(inValue.Cast<  ::Dynamic >()) );completionHandler=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPClient_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responsePending") ) { responsePending=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void HTTPClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"));
	outFields->push(HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HTTPClient_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HTTPClient_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HTTPClient_obj,completionHandler),HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b")},
	{hx::fsObject /*::massive::munit::ITestResultClient*/ ,(int)offsetof(HTTPClient_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsString,(int)offsetof(HTTPClient_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::massive::munit::client::URLRequest*/ ,(int)offsetof(HTTPClient_obj,request),HX_HCSTRING("request","\x4f","\xdf","\x84","\x44")},
	{hx::fsBool,(int)offsetof(HTTPClient_obj,queueRequest),HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo HTTPClient_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &HTTPClient_obj::queue,HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d")},
	{hx::fsBool,(void *) &HTTPClient_obj::responsePending,HX_HCSTRING("responsePending","\xd6","\x53","\xae","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String HTTPClient_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b"),
	HX_HCSTRING("get_completionHandler","\xe5","\xea","\x60","\xda"),
	HX_HCSTRING("set_completionHandler","\xf1","\xb8","\x69","\x2e"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"),
	HX_HCSTRING("queueRequest","\xbe","\xbd","\x99","\xd3"),
	HX_HCSTRING("setCurrentTestClass","\xcf","\x86","\x4e","\xfb"),
	HX_HCSTRING("addPass","\x92","\x27","\x8f","\x86"),
	HX_HCSTRING("addFail","\x9f","\xfc","\xf2","\x7f"),
	HX_HCSTRING("addError","\xe7","\xf1","\x86","\xec"),
	HX_HCSTRING("addIgnore","\x13","\xee","\xec","\x4a"),
	HX_HCSTRING("reportFinalStatistics","\xe5","\x9f","\x5e","\x0c"),
	HX_HCSTRING("sendResult","\x45","\x90","\xda","\xa9"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	::String(null()) };

static void HTTPClient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_MARK_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPClient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::queue,"queue");
	HX_VISIT_MEMBER_NAME(HTTPClient_obj::responsePending,"responsePending");
};

#endif

hx::Class HTTPClient_obj::__mClass;

static ::String HTTPClient_obj_sStaticFields[] = {
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("responsePending","\xd6","\x53","\xae","\x0c"),
	HX_HCSTRING("dispatchNextRequest","\x02","\x86","\xc9","\xd4"),
	::String(null())
};

void HTTPClient_obj::__register()
{
	hx::Object *dummy = new HTTPClient_obj;
	HTTPClient_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.HTTPClient","\xef","\x27","\xe1","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPClient_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPClient_obj::__SetStatic;
	__mClass->mMarkFunc = HTTPClient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HTTPClient_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HTTPClient_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPClient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPClient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTTPClient_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_61_boot)
HXDLIN(  61)		queue = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_cc0f7bb91c661971_62_boot)
HXDLIN(  62)		responsePending = false;
            	}
}

} // end namespace massive
} // end namespace munit
} // end namespace client