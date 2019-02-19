// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#include <massive/munit/client/ExternalPrintClientJS.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_client_RichPrintClient
#include <massive/munit/client/RichPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5212cc92d246457c_46_new,"massive.munit.client.RichPrintClient","new",0x0bcb7cf2,"massive.munit.client.RichPrintClient.new","massive/munit/client/RichPrintClient.hx",46,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_52_init,"massive.munit.client.RichPrintClient","init",0x42fa8e3e,"massive.munit.client.RichPrintClient.init","massive/munit/client/RichPrintClient.hx",52,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_60_initializeTestClass,"massive.munit.client.RichPrintClient","initializeTestClass",0x58e72ba8,"massive.munit.client.RichPrintClient.initializeTestClass","massive/munit/client/RichPrintClient.hx",60,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_67_updateTestClass,"massive.munit.client.RichPrintClient","updateTestClass",0x5ef6c6cf,"massive.munit.client.RichPrintClient.updateTestClass","massive/munit/client/RichPrintClient.hx",67,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_90_serializeTestResult,"massive.munit.client.RichPrintClient","serializeTestResult",0x28cd9961,"massive.munit.client.RichPrintClient.serializeTestResult","massive/munit/client/RichPrintClient.hx",90,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_108_finalizeTestClass,"massive.munit.client.RichPrintClient","finalizeTestClass",0x9b86751a,"massive.munit.client.RichPrintClient.finalizeTestClass","massive/munit/client/RichPrintClient.hx",108,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_126_getTestClassResultType,"massive.munit.client.RichPrintClient","getTestClassResultType",0x86813c15,"massive.munit.client.RichPrintClient.getTestClassResultType","massive/munit/client/RichPrintClient.hx",126,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_134_setCurrentTestClassCoverage,"massive.munit.client.RichPrintClient","setCurrentTestClassCoverage",0x02ef8e69,"massive.munit.client.RichPrintClient.setCurrentTestClassCoverage","massive/munit/client/RichPrintClient.hx",134,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_150_reportFinalCoverage,"massive.munit.client.RichPrintClient","reportFinalCoverage",0xc70636bc,"massive.munit.client.RichPrintClient.reportFinalCoverage","massive/munit/client/RichPrintClient.hx",150,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_178_trim,"massive.munit.client.RichPrintClient","trim",0x4a42f010,"massive.munit.client.RichPrintClient.trim","massive/munit/client/RichPrintClient.hx",178,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_185_printMissingCoverage,"massive.munit.client.RichPrintClient","printMissingCoverage",0xe0675cef,"massive.munit.client.RichPrintClient.printMissingCoverage","massive/munit/client/RichPrintClient.hx",185,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_199_printFinalStatistics,"massive.munit.client.RichPrintClient","printFinalStatistics",0x247663ba,"massive.munit.client.RichPrintClient.printFinalStatistics","massive/munit/client/RichPrintClient.hx",199,0xd074f7fd)
static const ::String _hx_array_data_f8f1dc00_19[] = {
	HX_("\nTests: ",dd,c9,27,c7),
};
static const ::String _hx_array_data_f8f1dc00_20[] = {
	HX_("  Passed: ",36,9a,0f,7e),
};
static const ::String _hx_array_data_f8f1dc00_21[] = {
	HX_("  Failed: ",c3,79,b7,3a),
};
static const ::String _hx_array_data_f8f1dc00_22[] = {
	HX_(" Errors: ",51,13,30,17),
};
static const ::String _hx_array_data_f8f1dc00_23[] = {
	HX_(" Ignored: ",f8,ad,04,5a),
};
static const ::String _hx_array_data_f8f1dc00_24[] = {
	HX_(" Time: ",33,28,15,86),
};
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_213_printOverallResult,"massive.munit.client.RichPrintClient","printOverallResult",0xd5ab704b,"massive.munit.client.RichPrintClient.printOverallResult","massive/munit/client/RichPrintClient.hx",213,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_219_customTrace,"massive.munit.client.RichPrintClient","customTrace",0x060d83a6,"massive.munit.client.RichPrintClient.customTrace","massive/munit/client/RichPrintClient.hx",219,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_227_print,"massive.munit.client.RichPrintClient","print",0x62b4cd3f,"massive.munit.client.RichPrintClient.print","massive/munit/client/RichPrintClient.hx",227,0xd074f7fd)
HX_LOCAL_STACK_FRAME(_hx_pos_5212cc92d246457c_40_boot,"massive.munit.client.RichPrintClient","boot",0x3e5ad760,"massive.munit.client.RichPrintClient.boot","massive/munit/client/RichPrintClient.hx",40,0xd074f7fd)
namespace massive{
namespace munit{
namespace client{

void RichPrintClient_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_46_new)
HXLINE(  47)		super::__construct(null());
HXLINE(  48)		this->id = HX_("RichPrintClient",7c,7d,df,56);
            	}

Dynamic RichPrintClient_obj::__CreateEmpty() { return new RichPrintClient_obj; }

void *RichPrintClient_obj::_hx_vtable = 0;

Dynamic RichPrintClient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RichPrintClient_obj > _hx_result = new RichPrintClient_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RichPrintClient_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a16c1e4) {
		if (inClassId<=(int)0x0097fcd8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0097fcd8;
		} else {
			return inClassId==(int)0x0a16c1e4;
		}
	} else {
		return inClassId==(int)0x54aae2d1;
	}
}

void RichPrintClient_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_5212cc92d246457c_52_init)
HXLINE(  53)		this->super::init();
HXLINE(  54)		this->originalTrace = ::haxe::Log_obj::trace;
HXLINE(  55)		::haxe::Log_obj::trace = this->customTrace_dyn();
HXLINE(  56)		this->external =  ::massive::munit::client::ExternalPrintClientJS_obj::__alloc( HX_CTX );
            	}


void RichPrintClient_obj::initializeTestClass(){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_60_initializeTestClass)
HXLINE(  61)		this->super::initializeTestClass();
HXLINE(  62)		::massive::munit::client::ExternalPrintClient_obj::createTestClass(this->external,this->currentTestClass);
HXLINE(  63)		::Dynamic _hx_tmp = this->external;
HXDLIN(  63)		::massive::munit::client::ExternalPrintClient_obj::printToTestClassSummary(_hx_tmp,((HX_("Class: ",be,50,e2,36) + this->currentTestClass) + HX_(" ",20,00,00,00)));
            	}


void RichPrintClient_obj::updateTestClass( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_67_updateTestClass)
HXLINE(  68)		this->super::updateTestClass(result);
HXLINE(  70)		::String value = this->serializeTestResult(result);
HXLINE(  71)		{
HXLINE(  71)			::String _g = result->get_type();
HXDLIN(  71)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("ERROR",a8,03,18,f1)) ){
HXLINE(  80)				::massive::munit::client::ExternalPrintClient_obj::printToTestClassSummary(this->external,HX_("x",78,00,00,00));
HXLINE(  81)				::massive::munit::client::ExternalPrintClient_obj::addTestError(this->external,value);
HXLINE(  79)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("FAIL",de,81,76,2e)) ){
HXLINE(  77)				::massive::munit::client::ExternalPrintClient_obj::printToTestClassSummary(this->external,HX_("!",21,00,00,00));
HXLINE(  78)				::massive::munit::client::ExternalPrintClient_obj::addTestFail(this->external,value);
HXLINE(  76)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("IGNORE",12,65,4b,45)) ){
HXLINE(  83)				::massive::munit::client::ExternalPrintClient_obj::printToTestClassSummary(this->external,HX_(",",2c,00,00,00));
HXLINE(  84)				::massive::munit::client::ExternalPrintClient_obj::addTestIgnore(this->external,value);
HXLINE(  82)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("PASS",d1,ac,12,35)) ){
HXLINE(  74)				::massive::munit::client::ExternalPrintClient_obj::printToTestClassSummary(this->external,HX_(".",2e,00,00,00));
HXLINE(  75)				::massive::munit::client::ExternalPrintClient_obj::addTestPass(this->external,value);
HXLINE(  73)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("UNKNOWN",6a,f7,4e,61)) ){
HXLINE(  85)				goto _hx_goto_3;
            			}
            			_hx_goto_3:;
            		}
            	}


::String RichPrintClient_obj::serializeTestResult( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_90_serializeTestResult)
HXLINE(  91)		::String summary = result->name;
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (hx::IsNotNull( result->description )) {
HXLINE(  92)			_hx_tmp = (result->description != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  92)			_hx_tmp = false;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  94)			summary = (summary + ((HX_(" - ",73,6f,18,00) + result->description) + HX_(" -",0d,1c,00,00)));
            		}
HXLINE(  96)		summary = (summary + ((HX_(" (",08,1c,00,00) + ::massive::munit::util::MathUtil_obj::round(result->executionTime,(int)4)) + HX_("s)",56,64,00,00)));
HXLINE(  97)		if (hx::IsNotNull( result->error )) {
HXLINE(  97)			return (((HX_("Error: ",4e,a8,5b,b7) + summary) + HX_("\n",0a,00,00,00)) + ::Std_obj::string(result->error));
            		}
HXLINE(  98)		if (hx::IsNotNull( result->failure )) {
HXLINE(  98)			return (((HX_("Failure: ",50,a9,81,40) + summary) + HX_("\n",0a,00,00,00)) + ::Std_obj::string(result->failure));
            		}
HXLINE(  99)		if (result->ignore) {
HXLINE(  99)			return (HX_("Ignore: ",58,90,e8,3a) + summary);
            		}
HXLINE( 100)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,serializeTestResult,return )

void RichPrintClient_obj::finalizeTestClass(){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_108_finalizeTestClass)
HXLINE( 109)		this->super::finalizeTestClass();
HXLINE( 110)		this->testClassResultType = this->getTestClassResultType();
HXLINE( 111)		int code;
HXDLIN( 111)		::String _g = this->testClassResultType;
HXDLIN( 111)		::String _hx_switch_0 = _g;
            		if (  (_hx_switch_0==HX_("ERROR",a8,03,18,f1)) ){
HXLINE( 111)			code = (int)2;
HXDLIN( 111)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("FAIL",de,81,76,2e)) ){
HXLINE( 111)			code = (int)1;
HXDLIN( 111)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("IGNORE",12,65,4b,45)) ){
HXLINE( 111)			code = (int)3;
HXDLIN( 111)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("PASS",d1,ac,12,35)) ){
HXLINE( 111)			code = (int)0;
HXDLIN( 111)			goto _hx_goto_6;
            		}
            		/* default */{
HXLINE( 111)			code = (int)-1;
            		}
            		_hx_goto_6:;
HXLINE( 119)		if ((code == (int)-1)) {
HXLINE( 119)			return;
            		}
HXLINE( 120)		::massive::munit::client::ExternalPrintClient_obj::setTestClassResult(this->external,code);
            	}


::String RichPrintClient_obj::getTestClassResultType(){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_126_getTestClassResultType)
HXLINE( 127)		if ((this->errorCount > (int)0)) {
HXLINE( 127)			return HX_("ERROR",a8,03,18,f1);
            		}
HXLINE( 128)		if ((this->failCount > (int)0)) {
HXLINE( 128)			return HX_("FAIL",de,81,76,2e);
            		}
HXLINE( 129)		if ((this->ignoreCount > (int)0)) {
HXLINE( 129)			return HX_("IGNORE",12,65,4b,45);
            		}
HXLINE( 130)		return HX_("PASS",d1,ac,12,35);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RichPrintClient_obj,getTestClassResultType,return )

void RichPrintClient_obj::setCurrentTestClassCoverage( ::Dynamic result){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_134_setCurrentTestClassCoverage)
HXLINE( 135)		this->super::setCurrentTestClassCoverage(result);
HXLINE( 136)		::Dynamic _hx_tmp = this->external;
HXDLIN( 136)		::massive::munit::client::ExternalPrintClient_obj::printToTestClassSummary(_hx_tmp,((HX_(" [",3b,1c,00,00) + ( (Float)(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)) )) + HX_("%]",98,20,00,00)));
HXLINE( 137)		if ((( (Float)(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)) ) == (int)100)) {
HXLINE( 137)			return;
            		}
HXLINE( 138)		::massive::munit::client::ExternalPrintClient_obj::addTestClassCoverage(this->external, ::Dynamic(result->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)), ::Dynamic(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)));
HXLINE( 139)		{
HXLINE( 139)			int _g = (int)0;
HXDLIN( 139)			::Array< ::String > _g1 = ( (::Array< ::String >)(result->__Field(HX_("blocks",86,2e,ea,a7),hx::paccDynamic)) );
HXDLIN( 139)			while((_g < _g1->length)){
HXLINE( 139)				::String item = _g1->__get(_g);
HXDLIN( 139)				_g = (_g + (int)1);
HXLINE( 141)				::massive::munit::client::ExternalPrintClient_obj::addTestClassCoverageItem(this->external,item);
            			}
            		}
            	}


void RichPrintClient_obj::reportFinalCoverage( ::Dynamic __o_percent,::Array< ::Dynamic> missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
 ::Dynamic percent = __o_percent.Default(0);
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_150_reportFinalCoverage)
HXLINE( 151)		this->super::reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
HXLINE( 153)		::massive::munit::client::ExternalPrintClient_obj::createCoverageReport(this->external,percent);
HXLINE( 154)		this->printMissingCoverage(missingCoverageResults);
HXLINE( 156)		if (hx::IsNotNull( executionFrequency )) {
HXLINE( 158)			::Dynamic _hx_tmp = this->external;
HXDLIN( 158)			::massive::munit::client::ExternalPrintClient_obj::addCoverageReportSection(_hx_tmp,HX_("Code Execution Frequency",81,35,09,9d),this->trim(executionFrequency));
            		}
HXLINE( 161)		if (hx::IsNotNull( classBreakdown )) {
HXLINE( 163)			::Dynamic _hx_tmp1 = this->external;
HXDLIN( 163)			::massive::munit::client::ExternalPrintClient_obj::addCoverageReportSection(_hx_tmp1,HX_("Class Breakdown",79,ba,b8,ec),this->trim(classBreakdown));
            		}
HXLINE( 166)		if (hx::IsNotNull( packageBreakdown )) {
HXLINE( 168)			::Dynamic _hx_tmp2 = this->external;
HXDLIN( 168)			::massive::munit::client::ExternalPrintClient_obj::addCoverageReportSection(_hx_tmp2,HX_("Package Breakdown",47,93,cd,0d),this->trim(packageBreakdown));
            		}
HXLINE( 171)		if (hx::IsNotNull( packageBreakdown )) {
HXLINE( 173)			::Dynamic _hx_tmp3 = this->external;
HXDLIN( 173)			::massive::munit::client::ExternalPrintClient_obj::addCoverageReportSection(_hx_tmp3,HX_("Summary",06,33,3a,4e),this->trim(summary));
            		}
            	}


::String RichPrintClient_obj::trim(::String output){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_178_trim)
HXLINE( 179)		while((output.indexOf(HX_("\n",0a,00,00,00),null()) == (int)0)){
HXLINE( 179)			output = output.substr((int)1,null());
            		}
HXLINE( 180)		while(true){
HXLINE( 180)			int _hx_tmp = output.lastIndexOf(HX_("\n",0a,00,00,00),null());
HXDLIN( 180)			if (!((_hx_tmp == (output.length - (int)2)))) {
HXLINE( 180)				goto _hx_goto_13;
            			}
HXDLIN( 180)			output = output.substr((int)0,(output.length - (int)2));
            		}
            		_hx_goto_13:;
HXLINE( 181)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,trim,return )

void RichPrintClient_obj::printMissingCoverage(::Array< ::Dynamic> missingCoverageResults){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_185_printMissingCoverage)
HXLINE( 186)		bool _hx_tmp;
HXDLIN( 186)		if (hx::IsNotNull( missingCoverageResults )) {
HXLINE( 186)			_hx_tmp = (missingCoverageResults->length == (int)0);
            		}
            		else {
HXLINE( 186)			_hx_tmp = true;
            		}
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 186)			return;
            		}
HXLINE( 188)		{
HXLINE( 188)			int _g = (int)0;
HXDLIN( 188)			while((_g < missingCoverageResults->length)){
HXLINE( 188)				 ::Dynamic result = missingCoverageResults->__get(_g);
HXDLIN( 188)				_g = (_g + (int)1);
HXLINE( 190)				::massive::munit::client::ExternalPrintClient_obj::addMissingCoverageClass(this->external, ::Dynamic(result->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)), ::Dynamic(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)));
HXLINE( 191)				{
HXLINE( 191)					int _g1 = (int)0;
HXDLIN( 191)					::Array< ::String > _g2 = ( (::Array< ::String >)(result->__Field(HX_("blocks",86,2e,ea,a7),hx::paccDynamic)) );
HXDLIN( 191)					while((_g1 < _g2->length)){
HXLINE( 191)						::String item = _g2->__get(_g1);
HXDLIN( 191)						_g1 = (_g1 + (int)1);
HXLINE( 193)						::massive::munit::client::ExternalPrintClient_obj::addTestClassCoverageItem(this->external,item);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,printMissingCoverage,(void))

void RichPrintClient_obj::printFinalStatistics(bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
            	HX_GC_STACKFRAME(&_hx_pos_5212cc92d246457c_199_printFinalStatistics)
HXLINE( 200)		this->super::printFinalStatistics(result,testCount,passCount,failCount,errorCount,ignoreCount,time);
HXLINE( 201)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 202)		{
HXLINE( 202)			::String x;
HXDLIN( 202)			if (result) {
HXLINE( 202)				x = HX_("PASSED",70,7f,b4,a0);
            			}
            			else {
HXLINE( 202)				x = HX_("FAILED",bd,71,81,9a);
            			}
HXDLIN( 202)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 202)				sb->flush();
            			}
HXDLIN( 202)			if (hx::IsNull( sb->b )) {
HXLINE( 202)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 202)				::Array< ::String > sb1 = sb->b;
HXDLIN( 202)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 203)		{
HXLINE( 203)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 203)				sb->flush();
            			}
HXDLIN( 203)			if (hx::IsNull( sb->b )) {
HXLINE( 203)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_f8f1dc00_19,1);
            			}
            			else {
HXLINE( 203)				sb->b->push(HX_("\nTests: ",dd,c9,27,c7));
            			}
            		}
HXDLIN( 203)		{
HXLINE( 203)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 203)				sb->flush();
            			}
HXDLIN( 203)			if (hx::IsNull( sb->b )) {
HXLINE( 203)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(testCount));
            			}
            			else {
HXLINE( 203)				::Array< ::String > sb2 = sb->b;
HXDLIN( 203)				sb2->push(::Std_obj::string(testCount));
            			}
            		}
HXLINE( 204)		{
HXLINE( 204)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 204)				sb->flush();
            			}
HXDLIN( 204)			if (hx::IsNull( sb->b )) {
HXLINE( 204)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_f8f1dc00_20,1);
            			}
            			else {
HXLINE( 204)				sb->b->push(HX_("  Passed: ",36,9a,0f,7e));
            			}
            		}
HXDLIN( 204)		{
HXLINE( 204)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 204)				sb->flush();
            			}
HXDLIN( 204)			if (hx::IsNull( sb->b )) {
HXLINE( 204)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(passCount));
            			}
            			else {
HXLINE( 204)				::Array< ::String > sb3 = sb->b;
HXDLIN( 204)				sb3->push(::Std_obj::string(passCount));
            			}
            		}
HXLINE( 205)		{
HXLINE( 205)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 205)				sb->flush();
            			}
HXDLIN( 205)			if (hx::IsNull( sb->b )) {
HXLINE( 205)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_f8f1dc00_21,1);
            			}
            			else {
HXLINE( 205)				sb->b->push(HX_("  Failed: ",c3,79,b7,3a));
            			}
            		}
HXDLIN( 205)		{
HXLINE( 205)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 205)				sb->flush();
            			}
HXDLIN( 205)			if (hx::IsNull( sb->b )) {
HXLINE( 205)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(failCount));
            			}
            			else {
HXLINE( 205)				::Array< ::String > sb4 = sb->b;
HXDLIN( 205)				sb4->push(::Std_obj::string(failCount));
            			}
            		}
HXLINE( 206)		{
HXLINE( 206)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 206)				sb->flush();
            			}
HXDLIN( 206)			if (hx::IsNull( sb->b )) {
HXLINE( 206)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_f8f1dc00_22,1);
            			}
            			else {
HXLINE( 206)				sb->b->push(HX_(" Errors: ",51,13,30,17));
            			}
            		}
HXDLIN( 206)		{
HXLINE( 206)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 206)				sb->flush();
            			}
HXDLIN( 206)			if (hx::IsNull( sb->b )) {
HXLINE( 206)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(errorCount));
            			}
            			else {
HXLINE( 206)				::Array< ::String > sb5 = sb->b;
HXDLIN( 206)				sb5->push(::Std_obj::string(errorCount));
            			}
            		}
HXLINE( 207)		{
HXLINE( 207)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 207)				sb->flush();
            			}
HXDLIN( 207)			if (hx::IsNull( sb->b )) {
HXLINE( 207)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_f8f1dc00_23,1);
            			}
            			else {
HXLINE( 207)				sb->b->push(HX_(" Ignored: ",f8,ad,04,5a));
            			}
            		}
HXDLIN( 207)		{
HXLINE( 207)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 207)				sb->flush();
            			}
HXDLIN( 207)			if (hx::IsNull( sb->b )) {
HXLINE( 207)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(ignoreCount));
            			}
            			else {
HXLINE( 207)				::Array< ::String > sb6 = sb->b;
HXDLIN( 207)				sb6->push(::Std_obj::string(ignoreCount));
            			}
            		}
HXLINE( 208)		{
HXLINE( 208)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 208)				sb->flush();
            			}
HXDLIN( 208)			if (hx::IsNull( sb->b )) {
HXLINE( 208)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_f8f1dc00_24,1);
            			}
            			else {
HXLINE( 208)				sb->b->push(HX_(" Time: ",33,28,15,86));
            			}
            		}
HXDLIN( 208)		{
HXLINE( 208)			Float x1 = ::massive::munit::util::MathUtil_obj::round(time,(int)5);
HXDLIN( 208)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 208)				sb->flush();
            			}
HXDLIN( 208)			if (hx::IsNull( sb->b )) {
HXLINE( 208)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 208)				::Array< ::String > sb7 = sb->b;
HXDLIN( 208)				sb7->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 209)		::Dynamic _hx_tmp = this->external;
HXDLIN( 209)		::massive::munit::client::ExternalPrintClient_obj::printSummary(_hx_tmp,sb->toString());
            	}


void RichPrintClient_obj::printOverallResult(bool result){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_213_printOverallResult)
HXLINE( 214)		this->super::printOverallResult(result);
HXLINE( 215)		::massive::munit::client::ExternalPrintClient_obj::setResult(this->external,result);
            	}


void RichPrintClient_obj::customTrace( ::Dynamic value, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_219_customTrace)
HXLINE( 220)		this->addTrace(value,info);
HXLINE( 221)		::Array< ::String > traces = this->getTraces();
HXLINE( 222)		::String t = traces->__get((traces->length - (int)1));
HXLINE( 223)		::massive::munit::client::ExternalPrintClient_obj::trace(this->external,t);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RichPrintClient_obj,customTrace,(void))

void RichPrintClient_obj::print( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_227_print)
HXLINE( 228)		this->super::print(value);
HXLINE( 230)		::Sys_obj::print(value);
            	}


::String RichPrintClient_obj::DEFAULT_ID;


hx::ObjectPtr< RichPrintClient_obj > RichPrintClient_obj::__new() {
	hx::ObjectPtr< RichPrintClient_obj > __this = new RichPrintClient_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< RichPrintClient_obj > RichPrintClient_obj::__alloc(hx::Ctx *_hx_ctx) {
	RichPrintClient_obj *__this = (RichPrintClient_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RichPrintClient_obj), true, "massive.munit.client.RichPrintClient"));
	*(void **)__this = RichPrintClient_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RichPrintClient_obj::RichPrintClient_obj()
{
}

void RichPrintClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RichPrintClient);
	HX_MARK_MEMBER_NAME(testClassResultType,"testClassResultType");
	HX_MARK_MEMBER_NAME(external,"external");
	 ::massive::munit::client::PrintClientBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RichPrintClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testClassResultType,"testClassResultType");
	HX_VISIT_MEMBER_NAME(external,"external");
	 ::massive::munit::client::PrintClientBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val RichPrintClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"trim") ) { return hx::Val( trim_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return hx::Val( print_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { return hx::Val( external ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { return hx::Val( customTrace_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return hx::Val( updateTestClass_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return hx::Val( finalizeTestClass_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return hx::Val( printOverallResult_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testClassResultType") ) { return hx::Val( testClassResultType ); }
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return hx::Val( initializeTestClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"serializeTestResult") ) { return hx::Val( serializeTestResult_dyn() ); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return hx::Val( reportFinalCoverage_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"printMissingCoverage") ) { return hx::Val( printMissingCoverage_dyn() ); }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return hx::Val( printFinalStatistics_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTestClassResultType") ) { return hx::Val( getTestClassResultType_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return hx::Val( setCurrentTestClassCoverage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RichPrintClient_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { external=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testClassResultType") ) { testClassResultType=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RichPrintClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("testClassResultType","\x5d","\x18","\x80","\x4f"));
	outFields->push(HX_HCSTRING("external","\x4b","\x42","\x83","\xe3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RichPrintClient_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(RichPrintClient_obj,testClassResultType),HX_HCSTRING("testClassResultType","\x5d","\x18","\x80","\x4f")},
	{hx::fsObject /*::massive::munit::client::ExternalPrintClient*/ ,(int)offsetof(RichPrintClient_obj,external),HX_HCSTRING("external","\x4b","\x42","\x83","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo RichPrintClient_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &RichPrintClient_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String RichPrintClient_obj_sMemberFields[] = {
	HX_HCSTRING("testClassResultType","\x5d","\x18","\x80","\x4f"),
	HX_HCSTRING("external","\x4b","\x42","\x83","\xe3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initializeTestClass","\x16","\xbb","\x49","\x2f"),
	HX_HCSTRING("updateTestClass","\x3d","\x87","\xe5","\x60"),
	HX_HCSTRING("serializeTestResult","\xcf","\x28","\x30","\xff"),
	HX_HCSTRING("finalizeTestClass","\x08","\xad","\xf8","\x06"),
	HX_HCSTRING("getTestClassResultType","\x67","\x85","\x97","\x27"),
	HX_HCSTRING("setCurrentTestClassCoverage","\xd7","\x3b","\xb4","\x88"),
	HX_HCSTRING("reportFinalCoverage","\x2a","\xc6","\x68","\x9d"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("printMissingCoverage","\xc1","\x4d","\x42","\xa0"),
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("customTrace","\x14","\xf5","\x5b","\xab"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	::String(null()) };

static void RichPrintClient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RichPrintClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RichPrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RichPrintClient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RichPrintClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RichPrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class RichPrintClient_obj::__mClass;

static ::String RichPrintClient_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null())
};

void RichPrintClient_obj::__register()
{
	hx::Object *dummy = new RichPrintClient_obj;
	RichPrintClient_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.RichPrintClient","\x00","\xdc","\xf1","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RichPrintClient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RichPrintClient_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RichPrintClient_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RichPrintClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RichPrintClient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RichPrintClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RichPrintClient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RichPrintClient_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5212cc92d246457c_40_boot)
HXDLIN(  40)		DEFAULT_ID = HX_("RichPrintClient",7c,7d,df,56);
            	}
}

} // end namespace massive
} // end namespace munit
} // end namespace client
