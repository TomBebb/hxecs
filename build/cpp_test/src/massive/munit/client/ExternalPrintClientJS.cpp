// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#include <massive/munit/client/ExternalPrintClientJS.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0163371e8c342d6_254_new,"massive.munit.client.ExternalPrintClientJS","new",0x5bc6472c,"massive.munit.client.ExternalPrintClientJS.new","massive/munit/client/PrintClientBase.hx",254,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_307_print,"massive.munit.client.ExternalPrintClientJS","print",0xbea219f9,"massive.munit.client.ExternalPrintClientJS.print","massive/munit/client/PrintClientBase.hx",307,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_312_printLine,"massive.munit.client.ExternalPrintClientJS","printLine",0x4d754e8d,"massive.munit.client.ExternalPrintClientJS.printLine","massive/munit/client/PrintClientBase.hx",312,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_317_setResult,"massive.munit.client.ExternalPrintClientJS","setResult",0xecf575eb,"massive.munit.client.ExternalPrintClientJS.setResult","massive/munit/client/PrintClientBase.hx",317,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_322_setResultBackground,"massive.munit.client.ExternalPrintClientJS","setResultBackground",0xa134c1b9,"massive.munit.client.ExternalPrintClientJS.setResultBackground","massive/munit/client/PrintClientBase.hx",322,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_327_trace,"massive.munit.client.ExternalPrintClientJS","trace",0x0c365051,"massive.munit.client.ExternalPrintClientJS.trace","massive/munit/client/PrintClientBase.hx",327,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_332_createTestClass,"massive.munit.client.ExternalPrintClientJS","createTestClass",0xbffee8b6,"massive.munit.client.ExternalPrintClientJS.createTestClass","massive/munit/client/PrintClientBase.hx",332,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_337_printToTestClassSummary,"massive.munit.client.ExternalPrintClientJS","printToTestClassSummary",0x73fc5134,"massive.munit.client.ExternalPrintClientJS.printToTestClassSummary","massive/munit/client/PrintClientBase.hx",337,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_342_setTestClassResult,"massive.munit.client.ExternalPrintClientJS","setTestClassResult",0xa6341d35,"massive.munit.client.ExternalPrintClientJS.setTestClassResult","massive/munit/client/PrintClientBase.hx",342,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_346_addTestPass,"massive.munit.client.ExternalPrintClientJS","addTestPass",0xfb18c450,"massive.munit.client.ExternalPrintClientJS.addTestPass","massive/munit/client/PrintClientBase.hx",346,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_353_addTestFail,"massive.munit.client.ExternalPrintClientJS","addTestFail",0xf47c995d,"massive.munit.client.ExternalPrintClientJS.addTestFail","massive/munit/client/PrintClientBase.hx",353,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_358_addTestError,"massive.munit.client.ExternalPrintClientJS","addTestError",0x70667b69,"massive.munit.client.ExternalPrintClientJS.addTestError","massive/munit/client/PrintClientBase.hx",358,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_363_addTestIgnore,"massive.munit.client.ExternalPrintClientJS","addTestIgnore",0x2aa5b651,"massive.munit.client.ExternalPrintClientJS.addTestIgnore","massive/munit/client/PrintClientBase.hx",363,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_368_addTestClassCoverage,"massive.munit.client.ExternalPrintClientJS","addTestClassCoverage",0x9971f6e1,"massive.munit.client.ExternalPrintClientJS.addTestClassCoverage","massive/munit/client/PrintClientBase.hx",368,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_373_addTestClassCoverageItem,"massive.munit.client.ExternalPrintClientJS","addTestClassCoverageItem",0xf6666c94,"massive.munit.client.ExternalPrintClientJS.addTestClassCoverageItem","massive/munit/client/PrintClientBase.hx",373,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_378_createCoverageReport,"massive.munit.client.ExternalPrintClientJS","createCoverageReport",0xaa81008c,"massive.munit.client.ExternalPrintClientJS.createCoverageReport","massive/munit/client/PrintClientBase.hx",378,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_383_addMissingCoverageClass,"massive.munit.client.ExternalPrintClientJS","addMissingCoverageClass",0x5a530f77,"massive.munit.client.ExternalPrintClientJS.addMissingCoverageClass","massive/munit/client/PrintClientBase.hx",383,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_388_addCoverageReportSection,"massive.munit.client.ExternalPrintClientJS","addCoverageReportSection",0x01287e5c,"massive.munit.client.ExternalPrintClientJS.addCoverageReportSection","massive/munit/client/PrintClientBase.hx",388,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_393_addCoverageSummary,"massive.munit.client.ExternalPrintClientJS","addCoverageSummary",0xabd65fb1,"massive.munit.client.ExternalPrintClientJS.addCoverageSummary","massive/munit/client/PrintClientBase.hx",393,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_398_printSummary,"massive.munit.client.ExternalPrintClientJS","printSummary",0x170e3a2d,"massive.munit.client.ExternalPrintClientJS.printSummary","massive/munit/client/PrintClientBase.hx",398,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_405_queue,"massive.munit.client.ExternalPrintClientJS","queue",0x54014f5d,"massive.munit.client.ExternalPrintClientJS.queue","massive/munit/client/PrintClientBase.hx",405,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_421_convertToJavaScript,"massive.munit.client.ExternalPrintClientJS","convertToJavaScript",0x43a9b207,"massive.munit.client.ExternalPrintClientJS.convertToJavaScript","massive/munit/client/PrintClientBase.hx",421,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_b0163371e8c342d6_431_serialiseToHTML,"massive.munit.client.ExternalPrintClientJS","serialiseToHTML",0x11f87059,"massive.munit.client.ExternalPrintClientJS.serialiseToHTML","massive/munit/client/PrintClientBase.hx",431,0x1ddc6930)
namespace massive{
namespace munit{
namespace client{

void ExternalPrintClientJS_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_254_new)
            	}

Dynamic ExternalPrintClientJS_obj::__CreateEmpty() { return new ExternalPrintClientJS_obj; }

void *ExternalPrintClientJS_obj::_hx_vtable = 0;

Dynamic ExternalPrintClientJS_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ExternalPrintClientJS_obj > _hx_result = new ExternalPrintClientJS_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ExternalPrintClientJS_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c31ec56;
}

static ::massive::munit::client::ExternalPrintClient_obj _hx_massive_munit_client_ExternalPrintClientJS__hx_massive_munit_client_ExternalPrintClient= {
	( bool (hx::Object::*)(::String, ::Dynamic))&::massive::munit::client::ExternalPrintClientJS_obj::queue,
	( void (hx::Object::*)(bool))&::massive::munit::client::ExternalPrintClientJS_obj::setResult,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::print,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::printLine,
	( void (hx::Object::*)(bool))&::massive::munit::client::ExternalPrintClientJS_obj::setResultBackground,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::createTestClass,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::printToTestClassSummary,
	( void (hx::Object::*)(int))&::massive::munit::client::ExternalPrintClientJS_obj::setTestClassResult,
	( void (hx::Object::*)( ::Dynamic))&::massive::munit::client::ExternalPrintClientJS_obj::trace,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::addTestPass,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::addTestFail,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::addTestError,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::addTestIgnore,
	( void (hx::Object::*)(::String,hx::Null< Float > ))&::massive::munit::client::ExternalPrintClientJS_obj::addTestClassCoverage,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::addTestClassCoverageItem,
	( void (hx::Object::*)(hx::Null< Float > ))&::massive::munit::client::ExternalPrintClientJS_obj::createCoverageReport,
	( void (hx::Object::*)(::String,hx::Null< Float > ))&::massive::munit::client::ExternalPrintClientJS_obj::addMissingCoverageClass,
	( void (hx::Object::*)(::String,::String))&::massive::munit::client::ExternalPrintClientJS_obj::addCoverageReportSection,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::addCoverageSummary,
	( void (hx::Object::*)(::String))&::massive::munit::client::ExternalPrintClientJS_obj::printSummary,
};

void *ExternalPrintClientJS_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x62e23a15: return &_hx_massive_munit_client_ExternalPrintClientJS__hx_massive_munit_client_ExternalPrintClient;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ExternalPrintClientJS_obj::print(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_307_print)
HXDLIN( 307)		this->queue(HX_("munitPrint",fc,68,23,a7),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,print,(void))

void ExternalPrintClientJS_obj::printLine(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_312_printLine)
HXDLIN( 312)		this->queue(HX_("munitPrintLine",10,db,7d,6c),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printLine,(void))

void ExternalPrintClientJS_obj::setResult(bool value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_317_setResult)
HXDLIN( 317)		this->queue(HX_("setResult",1f,de,2b,68),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setResult,(void))

void ExternalPrintClientJS_obj::setResultBackground(bool value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_322_setResultBackground)
HXDLIN( 322)		this->queue(HX_("setResultBackground",ed,f2,aa,04),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setResultBackground,(void))

void ExternalPrintClientJS_obj::trace( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_327_trace)
HXDLIN( 327)		this->queue(HX_("munitTrace",54,9f,b7,f4),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,trace,(void))

void ExternalPrintClientJS_obj::createTestClass(::String className){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_332_createTestClass)
HXDLIN( 332)		this->queue(HX_("createTestClass",ea,6f,4f,b2),className);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,createTestClass,(void))

void ExternalPrintClientJS_obj::printToTestClassSummary(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_337_printToTestClassSummary)
HXDLIN( 337)		this->queue(HX_("updateTestSummary",6b,a5,1b,a2),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printToTestClassSummary,(void))

void ExternalPrintClientJS_obj::setTestClassResult(int resultType){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_342_setTestClassResult)
HXDLIN( 342)		this->queue(HX_("setTestClassResult",81,0e,11,64),resultType);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setTestClassResult,(void))

void ExternalPrintClientJS_obj::addTestPass(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_346_addTestPass)
HXLINE( 347)		if (hx::IsNull( value )) {
HXLINE( 347)			return;
            		}
HXLINE( 348)		this->queue(HX_("addTestPass",84,a1,e0,7e),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestPass,(void))

void ExternalPrintClientJS_obj::addTestFail(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_353_addTestFail)
HXDLIN( 353)		this->queue(HX_("addTestFail",91,76,44,78),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestFail,(void))

void ExternalPrintClientJS_obj::addTestError(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_358_addTestError)
HXDLIN( 358)		this->queue(HX_("addTestError",b5,2b,80,3b),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestError,(void))

void ExternalPrintClientJS_obj::addTestIgnore(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_363_addTestIgnore)
HXDLIN( 363)		this->queue(HX_("addTestIgnore",85,48,06,16),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestIgnore,(void))

void ExternalPrintClientJS_obj::addTestClassCoverage(::String className,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_368_addTestClassCoverage)
HXDLIN( 368)		this->queue(HX_("addTestCoverageClass",1d,82,75,41),::cpp::VirtualArray_obj::__new(2)->init(0,className)->init(1,percent));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addTestClassCoverage,(void))

void ExternalPrintClientJS_obj::addTestClassCoverageItem(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_373_addTestClassCoverageItem)
HXDLIN( 373)		this->queue(HX_("addTestCoverageItem",ce,3e,6d,24),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestClassCoverageItem,(void))

void ExternalPrintClientJS_obj::createCoverageReport(hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_378_createCoverageReport)
HXDLIN( 378)		this->queue(HX_("createCoverageReport",d8,dc,75,4e),percent);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,createCoverageReport,(void))

void ExternalPrintClientJS_obj::addMissingCoverageClass(::String className,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_383_addMissingCoverageClass)
HXDLIN( 383)		this->queue(HX_("addMissingCoverageClass",ab,ea,0b,44),::cpp::VirtualArray_obj::__new(2)->init(0,className)->init(1,percent));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addMissingCoverageClass,(void))

void ExternalPrintClientJS_obj::addCoverageReportSection(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_388_addCoverageReportSection)
HXDLIN( 388)		this->queue(HX_("addCoverageReportSection",a8,70,2f,99),::cpp::VirtualArray_obj::__new(2)->init(0,name)->init(1,value));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addCoverageReportSection,(void))

void ExternalPrintClientJS_obj::addCoverageSummary(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_393_addCoverageSummary)
HXDLIN( 393)		this->queue(HX_("addCoverageSummary",fd,50,b3,69),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addCoverageSummary,(void))

void ExternalPrintClientJS_obj::printSummary(::String value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_398_printSummary)
HXDLIN( 398)		this->queue(HX_("printSummary",79,ea,27,e2),value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printSummary,(void))

bool ExternalPrintClientJS_obj::queue(::String method, ::Dynamic args){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_405_queue)
HXDLIN( 405)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,queue,return )

::String ExternalPrintClientJS_obj::convertToJavaScript(::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_421_convertToJavaScript)
HXLINE( 422)		::Array< ::String > htmlArgs;
HXDLIN( 422)		bool htmlArgs1;
HXDLIN( 422)		if (hx::IsNotNull( args )) {
HXLINE( 422)			htmlArgs1 = (args->get_length() > (int)0);
            		}
            		else {
HXLINE( 422)			htmlArgs1 = false;
            		}
HXDLIN( 422)		if (htmlArgs1) {
HXLINE( 422)			::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 422)			{
HXLINE( 422)				int _g1 = (int)0;
HXDLIN( 422)				while((_g1 < args->get_length())){
HXLINE( 422)					 ::Dynamic arg = args->__get(_g1);
HXDLIN( 422)					_g1 = (_g1 + (int)1);
HXDLIN( 422)					_g->push(this->serialiseToHTML(::Std_obj::string(arg)));
            				}
            			}
HXDLIN( 422)			htmlArgs = _g;
            		}
            		else {
HXLINE( 422)			htmlArgs = null();
            		}
HXLINE( 423)		if (hx::IsNull( htmlArgs )) {
HXLINE( 423)			return ((HX_("addToQueue(\"",2f,50,be,c6) + method) + HX_("\")",c7,1d,00,00));
            		}
HXLINE( 424)		::String result = ((HX_("addToQueue(\"",2f,50,be,c6) + method) + HX_("\"",22,00,00,00));
HXLINE( 425)		{
HXLINE( 425)			int _g2 = (int)0;
HXDLIN( 425)			while((_g2 < htmlArgs->length)){
HXLINE( 425)				::String arg1 = htmlArgs->__get(_g2);
HXDLIN( 425)				_g2 = (_g2 + (int)1);
HXDLIN( 425)				result = (result + ((HX_(",\"",76,26,00,00) + arg1) + HX_("\"",22,00,00,00)));
            			}
            		}
HXLINE( 426)		result = (result + HX_(")",29,00,00,00));
HXLINE( 427)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,convertToJavaScript,return )

::String ExternalPrintClientJS_obj::serialiseToHTML( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b0163371e8c342d6_431_serialiseToHTML)
HXLINE( 435)		::String result = ::StringTools_obj::htmlEscape(( (::String)(value) ),null());
HXLINE( 436)		result = result.split(HX_("\n",0a,00,00,00))->join(HX_("<br/>",3b,61,28,cd));
HXLINE( 437)		result = result.split(HX_(" ",20,00,00,00))->join(HX_("&nbsp;",64,13,c2,c8));
HXLINE( 438)		result = result.split(HX_("\"",22,00,00,00))->join(HX_("\\'",4b,50,00,00));
HXLINE( 439)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,serialiseToHTML,return )


hx::ObjectPtr< ExternalPrintClientJS_obj > ExternalPrintClientJS_obj::__new() {
	hx::ObjectPtr< ExternalPrintClientJS_obj > __this = new ExternalPrintClientJS_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ExternalPrintClientJS_obj > ExternalPrintClientJS_obj::__alloc(hx::Ctx *_hx_ctx) {
	ExternalPrintClientJS_obj *__this = (ExternalPrintClientJS_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ExternalPrintClientJS_obj), false, "massive.munit.client.ExternalPrintClientJS"));
	*(void **)__this = ExternalPrintClientJS_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ExternalPrintClientJS_obj::ExternalPrintClientJS_obj()
{
}

hx::Val ExternalPrintClientJS_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return hx::Val( print_dyn() ); }
		if (HX_FIELD_EQ(inName,"trace") ) { return hx::Val( trace_dyn() ); }
		if (HX_FIELD_EQ(inName,"queue") ) { return hx::Val( queue_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return hx::Val( printLine_dyn() ); }
		if (HX_FIELD_EQ(inName,"setResult") ) { return hx::Val( setResult_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTestPass") ) { return hx::Val( addTestPass_dyn() ); }
		if (HX_FIELD_EQ(inName,"addTestFail") ) { return hx::Val( addTestFail_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTestError") ) { return hx::Val( addTestError_dyn() ); }
		if (HX_FIELD_EQ(inName,"printSummary") ) { return hx::Val( printSummary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTestIgnore") ) { return hx::Val( addTestIgnore_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTestClass") ) { return hx::Val( createTestClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"serialiseToHTML") ) { return hx::Val( serialiseToHTML_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setTestClassResult") ) { return hx::Val( setTestClassResult_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCoverageSummary") ) { return hx::Val( addCoverageSummary_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setResultBackground") ) { return hx::Val( setResultBackground_dyn() ); }
		if (HX_FIELD_EQ(inName,"convertToJavaScript") ) { return hx::Val( convertToJavaScript_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addTestClassCoverage") ) { return hx::Val( addTestClassCoverage_dyn() ); }
		if (HX_FIELD_EQ(inName,"createCoverageReport") ) { return hx::Val( createCoverageReport_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"printToTestClassSummary") ) { return hx::Val( printToTestClassSummary_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMissingCoverageClass") ) { return hx::Val( addMissingCoverageClass_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"addTestClassCoverageItem") ) { return hx::Val( addTestClassCoverageItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCoverageReportSection") ) { return hx::Val( addCoverageReportSection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ExternalPrintClientJS_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ExternalPrintClientJS_obj_sStaticStorageInfo = 0;
#endif

static ::String ExternalPrintClientJS_obj_sMemberFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	HX_HCSTRING("setResult","\x1f","\xde","\x2b","\x68"),
	HX_HCSTRING("setResultBackground","\xed","\xf2","\xaa","\x04"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	HX_HCSTRING("createTestClass","\xea","\x6f","\x4f","\xb2"),
	HX_HCSTRING("printToTestClassSummary","\x68","\x2c","\xb5","\x5d"),
	HX_HCSTRING("setTestClassResult","\x81","\x0e","\x11","\x64"),
	HX_HCSTRING("addTestPass","\x84","\xa1","\xe0","\x7e"),
	HX_HCSTRING("addTestFail","\x91","\x76","\x44","\x78"),
	HX_HCSTRING("addTestError","\xb5","\x2b","\x80","\x3b"),
	HX_HCSTRING("addTestIgnore","\x85","\x48","\x06","\x16"),
	HX_HCSTRING("addTestClassCoverage","\x2d","\xd3","\x66","\x3d"),
	HX_HCSTRING("addTestClassCoverageItem","\xe0","\x5e","\x6d","\x8e"),
	HX_HCSTRING("createCoverageReport","\xd8","\xdc","\x75","\x4e"),
	HX_HCSTRING("addMissingCoverageClass","\xab","\xea","\x0b","\x44"),
	HX_HCSTRING("addCoverageReportSection","\xa8","\x70","\x2f","\x99"),
	HX_HCSTRING("addCoverageSummary","\xfd","\x50","\xb3","\x69"),
	HX_HCSTRING("printSummary","\x79","\xea","\x27","\xe2"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("convertToJavaScript","\x3b","\xe3","\x1f","\xa7"),
	HX_HCSTRING("serialiseToHTML","\x8d","\xf7","\x48","\x04"),
	::String(null()) };

static void ExternalPrintClientJS_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalPrintClientJS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ExternalPrintClientJS_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalPrintClientJS_obj::__mClass,"__mClass");
};

#endif

hx::Class ExternalPrintClientJS_obj::__mClass;

void ExternalPrintClientJS_obj::__register()
{
	hx::Object *dummy = new ExternalPrintClientJS_obj;
	ExternalPrintClientJS_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.ExternalPrintClientJS","\x3a","\x81","\xf8","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ExternalPrintClientJS_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ExternalPrintClientJS_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExternalPrintClientJS_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ExternalPrintClientJS_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExternalPrintClientJS_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExternalPrintClientJS_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
} // end namespace client
