// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
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
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_35_new,"massive.munit.client.PrintClientBase","new",0x78e7185f,"massive.munit.client.PrintClientBase.new","massive/munit/client/PrintClientBase.hx",35,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_57_initializeTestClass,"massive.munit.client.PrintClientBase","initializeTestClass",0x4df93115,"massive.munit.client.PrintClientBase.initializeTestClass","massive/munit/client/PrintClientBase.hx",57,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_63_updateTestClass,"massive.munit.client.PrintClientBase","updateTestClass",0xc78451bc,"massive.munit.client.PrintClientBase.updateTestClass","massive/munit/client/PrintClientBase.hx",63,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_80_finalizeTestClass,"massive.munit.client.PrintClientBase","finalizeTestClass",0x6abe5547,"massive.munit.client.PrintClientBase.finalizeTestClass","massive/munit/client/PrintClientBase.hx",80,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_104_setCurrentTestClassCoverage,"massive.munit.client.PrintClientBase","setCurrentTestClassCoverage",0xe1d848d6,"massive.munit.client.PrintClientBase.setCurrentTestClassCoverage","massive/munit/client/PrintClientBase.hx",104,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_114_reportFinalCoverage,"massive.munit.client.PrintClientBase","reportFinalCoverage",0xbc183c29,"massive.munit.client.PrintClientBase.reportFinalCoverage","massive/munit/client/PrintClientBase.hx",114,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_149_printIndentedLines,"massive.munit.client.PrintClientBase","printIndentedLines",0x85b904a8,"massive.munit.client.PrintClientBase.printIndentedLines","massive/munit/client/PrintClientBase.hx",149,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_159_printReports,"massive.munit.client.PrintClientBase","printReports",0x9ce900b3,"massive.munit.client.PrintClientBase.printReports","massive/munit/client/PrintClientBase.hx",159,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_163_printFinalIgnoredStatistics,"massive.munit.client.PrintClientBase","printFinalIgnoredStatistics",0x09275b8b,"massive.munit.client.PrintClientBase.printFinalIgnoredStatistics","massive/munit/client/PrintClientBase.hx",163,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_185_filterIngored,"massive.munit.client.PrintClientBase","filterIngored",0x7df97a0b,"massive.munit.client.PrintClientBase.filterIngored","massive/munit/client/PrintClientBase.hx",185,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_189_printFinalStatistics,"massive.munit.client.PrintClientBase","printFinalStatistics",0x9f291dad,"massive.munit.client.PrintClientBase.printFinalStatistics","massive/munit/client/PrintClientBase.hx",189,0x1ddc6930)
static const ::String _hx_array_data_4385fced_19[] = {
	HX_("\nTests: ",dd,c9,27,c7),
};
static const ::String _hx_array_data_4385fced_20[] = {
	HX_("  Passed: ",36,9a,0f,7e),
};
static const ::String _hx_array_data_4385fced_21[] = {
	HX_("  Failed: ",c3,79,b7,3a),
};
static const ::String _hx_array_data_4385fced_22[] = {
	HX_(" Errors: ",51,13,30,17),
};
static const ::String _hx_array_data_4385fced_23[] = {
	HX_(" Ignored: ",f8,ad,04,5a),
};
static const ::String _hx_array_data_4385fced_24[] = {
	HX_(" Time: ",33,28,15,86),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_205_printOverallResult,"massive.munit.client.PrintClientBase","printOverallResult",0x5757b77e,"massive.munit.client.PrintClientBase.printOverallResult","massive/munit/client/PrintClientBase.hx",205,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_210_print,"massive.munit.client.PrintClientBase","print",0x027fddec,"massive.munit.client.PrintClientBase.print","massive/munit/client/PrintClientBase.hx",210,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_214_printLine,"massive.munit.client.PrintClientBase","printLine",0x514f8800,"massive.munit.client.PrintClientBase.printLine","massive/munit/client/PrintClientBase.hx",214,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_221_indentString,"massive.munit.client.PrintClientBase","indentString",0xed10027e,"massive.munit.client.PrintClientBase.indentString","massive/munit/client/PrintClientBase.hx",221,0x1ddc6930)
HX_LOCAL_STACK_FRAME(_hx_pos_ff06a10c772ba8ce_40_boot,"massive.munit.client.PrintClientBase","boot",0x49673b53,"massive.munit.client.PrintClientBase.boot","massive/munit/client/PrintClientBase.hx",40,0x1ddc6930)
namespace massive{
namespace munit{
namespace client{

void PrintClientBase_obj::__construct(hx::Null< bool >  __o_includeIgnoredReport){
bool includeIgnoredReport = __o_includeIgnoredReport.Default(true);
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_35_new)
HXLINE(  42)		this->divider2 = HX_("==============================",a0,f8,06,d2);
HXLINE(  41)		this->divider1 = HX_("------------------------------",a0,a6,7a,e6);
HXLINE(  48)		super::__construct();
HXLINE(  49)		this->id = HX_("simple",32,04,7f,b8);
HXLINE(  50)		this->verbose = false;
HXLINE(  51)		this->includeIgnoredReport = includeIgnoredReport;
HXLINE(  52)		this->printLine(HX_("MUnit Results",27,bf,ec,01),null());
HXLINE(  53)		this->printLine(this->divider1,null());
            	}

Dynamic PrintClientBase_obj::__CreateEmpty() { return new PrintClientBase_obj; }

void *PrintClientBase_obj::_hx_vtable = 0;

Dynamic PrintClientBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PrintClientBase_obj > _hx_result = new PrintClientBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PrintClientBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0097fcd8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0097fcd8;
	} else {
		return inClassId==(int)0x54aae2d1;
	}
}

void PrintClientBase_obj::initializeTestClass(){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_57_initializeTestClass)
HXLINE(  58)		this->super::initializeTestClass();
HXLINE(  59)		this->printLine(((HX_("Class: ",be,50,e2,36) + this->currentTestClass) + HX_(" ",20,00,00,00)),null());
            	}


void PrintClientBase_obj::updateTestClass( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_63_updateTestClass)
HXLINE(  64)		this->super::updateTestClass(result);
HXLINE(  65)		if (this->verbose) {
HXLINE(  65)			::String _hx_tmp = ((HX_(" ",20,00,00,00) + result->name) + HX_(": ",a6,32,00,00));
HXDLIN(  65)			this->printLine(((_hx_tmp + result->get_type()) + HX_(" ",20,00,00,00)),null());
            		}
            		else {
HXLINE(  68)			::String _g = result->get_type();
HXDLIN(  68)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("ERROR",a8,03,18,f1)) ){
HXLINE(  72)				this->print(HX_("x",78,00,00,00));
HXDLIN(  72)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("FAIL",de,81,76,2e)) ){
HXLINE(  71)				this->print(HX_("!",21,00,00,00));
HXDLIN(  71)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("IGNORE",12,65,4b,45)) ){
HXLINE(  73)				this->print(HX_(",",2c,00,00,00));
HXDLIN(  73)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("PASS",d1,ac,12,35)) ){
HXLINE(  70)				this->print(HX_(".",2e,00,00,00));
HXDLIN(  70)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("UNKNOWN",6a,f7,4e,61)) ){
HXLINE(  74)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            	}


void PrintClientBase_obj::finalizeTestClass(){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_80_finalizeTestClass)
HXLINE(  81)		this->super::finalizeTestClass();
HXLINE(  83)		{
HXLINE(  83)			int _g = (int)0;
HXDLIN(  83)			::Array< ::String > _g1 = this->getTraces();
HXDLIN(  83)			while((_g < _g1->length)){
HXLINE(  83)				::String item = _g1->__get(_g);
HXDLIN(  83)				_g = (_g + (int)1);
HXLINE(  85)				this->printLine((HX_("TRACE: ",4b,1c,d8,07) + item),(int)1);
            			}
            		}
HXLINE(  88)		{
HXLINE(  88)			int _g2 = (int)0;
HXDLIN(  88)			::Array< ::Dynamic> _g11 = this->currentClassResults;
HXDLIN(  88)			while((_g2 < _g11->length)){
HXLINE(  88)				 ::massive::munit::TestResult result = _g11->__get(_g2).StaticCast<  ::massive::munit::TestResult >();
HXDLIN(  88)				_g2 = (_g2 + (int)1);
HXLINE(  90)				{
HXLINE(  90)					::String _g21 = result->get_type();
HXDLIN(  90)					::String _hx_switch_0 = _g21;
            					if (  (_hx_switch_0==HX_("ERROR",a8,03,18,f1)) ){
HXLINE(  92)						this->printLine((HX_("ERROR: ",4e,70,de,69) + ::Std_obj::string(result->error)),(int)1);
HXDLIN(  92)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("FAIL",de,81,76,2e)) ){
HXLINE(  93)						this->printLine((HX_("FAIL: ",04,68,81,9a) + ::Std_obj::string(result->failure)),(int)1);
HXDLIN(  93)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("IGNORE",12,65,4b,45)) ){
HXLINE(  95)						::String ingoredString = result->get_location();
HXLINE(  96)						if (hx::IsNotNull( result->description )) {
HXLINE(  96)							ingoredString = (ingoredString + (HX_(" - ",73,6f,18,00) + result->description));
            						}
HXLINE(  97)						this->printLine((HX_("IGNORE: ",38,80,bc,ba) + ingoredString),(int)1);
HXLINE(  94)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==HX_("PASS",d1,ac,12,35)) ||  (_hx_switch_0==HX_("UNKNOWN",6a,f7,4e,61)) ){
HXLINE(  98)						goto _hx_goto_6;
            					}
            					_hx_goto_6:;
            				}
            			}
            		}
            	}


void PrintClientBase_obj::setCurrentTestClassCoverage( ::Dynamic result){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_104_setCurrentTestClassCoverage)
HXLINE( 105)		this->super::setCurrentTestClassCoverage(result);
HXLINE( 106)		this->print(((HX_(" [",3b,1c,00,00) + ( (Float)(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)) )) + HX_("%]",98,20,00,00)));
            	}


void PrintClientBase_obj::reportFinalCoverage( ::Dynamic __o_percent,::Array< ::Dynamic> missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
 ::Dynamic percent = __o_percent.Default(0);
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_114_reportFinalCoverage)
HXLINE( 115)		this->super::reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);
HXLINE( 117)		this->printLine(HX_("",00,00,00,00),null());
HXLINE( 118)		this->printLine(this->divider1,null());
HXLINE( 119)		this->printLine(HX_("COVERAGE REPORT",ec,ab,03,2a),null());
HXLINE( 120)		this->printLine(this->divider1,null());
HXLINE( 122)		bool _hx_tmp;
HXDLIN( 122)		if (hx::IsNotNull( missingCoverageResults )) {
HXLINE( 122)			_hx_tmp = (missingCoverageResults->length > (int)0);
            		}
            		else {
HXLINE( 122)			_hx_tmp = false;
            		}
HXDLIN( 122)		if (_hx_tmp) {
HXLINE( 124)			this->printLine(HX_("MISSING CODE BLOCKS:",1b,96,b2,63),null());
HXLINE( 125)			{
HXLINE( 125)				int _g = (int)0;
HXDLIN( 125)				while((_g < missingCoverageResults->length)){
HXLINE( 125)					 ::Dynamic result = missingCoverageResults->__get(_g);
HXDLIN( 125)					_g = (_g + (int)1);
HXLINE( 127)					this->printLine((((( (::String)(result->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) ) + HX_(" [",3b,1c,00,00)) + ( (Float)(result->__Field(HX_("percent",c5,aa,da,78),hx::paccDynamic)) )) + HX_("%]",98,20,00,00)),(int)1);
HXLINE( 128)					{
HXLINE( 128)						int _g1 = (int)0;
HXDLIN( 128)						::Array< ::String > _g2 = ( (::Array< ::String >)(result->__Field(HX_("blocks",86,2e,ea,a7),hx::paccDynamic)) );
HXDLIN( 128)						while((_g1 < _g2->length)){
HXLINE( 128)							::String item = _g2->__get(_g1);
HXDLIN( 128)							_g1 = (_g1 + (int)1);
HXLINE( 130)							this->printIndentedLines(item,(int)2);
            						}
            					}
HXLINE( 132)					this->printLine(HX_("",00,00,00,00),null());
            				}
            			}
            		}
HXLINE( 136)		if (hx::IsNotNull( executionFrequency )) {
HXLINE( 138)			this->printLine(HX_("CODE EXECUTION FREQUENCY:",b9,13,e4,96),null());
HXLINE( 139)			this->printIndentedLines(executionFrequency,(int)1);
HXLINE( 140)			this->printLine(HX_("",00,00,00,00),null());
            		}
HXLINE( 143)		if (hx::IsNotNull( classBreakdown )) {
HXLINE( 143)			this->printIndentedLines(classBreakdown,(int)0);
            		}
HXLINE( 144)		if (hx::IsNotNull( packageBreakdown )) {
HXLINE( 144)			this->printIndentedLines(packageBreakdown,(int)0);
            		}
HXLINE( 145)		if (hx::IsNotNull( summary )) {
HXLINE( 145)			this->printIndentedLines(summary,(int)0);
            		}
            	}


void PrintClientBase_obj::printIndentedLines(::String value,hx::Null< int >  __o_indent){
int indent = __o_indent.Default(1);
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_149_printIndentedLines)
HXLINE( 150)		::Array< ::String > lines = value.split(HX_("\n",0a,00,00,00));
HXLINE( 151)		{
HXLINE( 151)			int _g = (int)0;
HXDLIN( 151)			while((_g < lines->length)){
HXLINE( 151)				::String line = lines->__get(_g);
HXDLIN( 151)				_g = (_g + (int)1);
HXLINE( 153)				this->printLine(line,indent);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printIndentedLines,(void))

void PrintClientBase_obj::printReports(){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_159_printReports)
HXDLIN( 159)		this->printFinalIgnoredStatistics(this->ignoreCount);
            	}


void PrintClientBase_obj::printFinalIgnoredStatistics(int count){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_163_printFinalIgnoredStatistics)
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (!(!(this->includeIgnoredReport))) {
HXLINE( 164)			_hx_tmp = (count == (int)0);
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 164)			return;
            		}
HXLINE( 166)		 ::List items = ::Lambda_obj::filter(this->totalResults,this->filterIngored_dyn());
HXLINE( 168)		if ((items->length == (int)0)) {
HXLINE( 168)			return;
            		}
HXLINE( 170)		this->printLine(HX_("",00,00,00,00),null());
HXLINE( 171)		this->printLine(((HX_("Ignored (",7a,9b,b5,50) + count) + HX_("):",f1,23,00,00)),null());
HXLINE( 172)		this->printLine(this->divider1,null());
HXLINE( 174)		{
HXLINE( 174)			 ::_List::ListNode _g_head = items->h;
HXDLIN( 174)			while(hx::IsNotNull( _g_head )){
HXLINE( 174)				 ::massive::munit::TestResult val = ( ( ::massive::munit::TestResult)(_g_head->item) );
HXDLIN( 174)				_g_head = _g_head->next;
HXDLIN( 174)				 ::massive::munit::TestResult result = val;
HXLINE( 176)				::String ingoredString = result->get_location();
HXLINE( 177)				if (hx::IsNotNull( result->description )) {
HXLINE( 177)					ingoredString = (ingoredString + (HX_(" - ",73,6f,18,00) + result->description));
            				}
HXLINE( 178)				this->printLine((HX_("IGNORE: ",38,80,bc,ba) + ingoredString),(int)1);
            			}
            		}
HXLINE( 180)		this->printLine(HX_("",00,00,00,00),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,printFinalIgnoredStatistics,(void))

bool PrintClientBase_obj::filterIngored( ::massive::munit::TestResult result){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_185_filterIngored)
HXDLIN( 185)		return (result->get_type() == HX_("IGNORE",12,65,4b,45));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,filterIngored,return )

void PrintClientBase_obj::printFinalStatistics(bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
            	HX_GC_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_189_printFinalStatistics)
HXLINE( 190)		this->printLine(this->divider2,null());
HXLINE( 191)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 192)		{
HXLINE( 192)			::String x;
HXDLIN( 192)			if (result) {
HXLINE( 192)				x = HX_("PASSED",70,7f,b4,a0);
            			}
            			else {
HXLINE( 192)				x = HX_("FAILED",bd,71,81,9a);
            			}
HXDLIN( 192)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 192)				sb->flush();
            			}
HXDLIN( 192)			if (hx::IsNull( sb->b )) {
HXLINE( 192)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 192)				::Array< ::String > sb1 = sb->b;
HXDLIN( 192)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 193)		{
HXLINE( 193)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 193)				sb->flush();
            			}
HXDLIN( 193)			if (hx::IsNull( sb->b )) {
HXLINE( 193)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_4385fced_19,1);
            			}
            			else {
HXLINE( 193)				sb->b->push(HX_("\nTests: ",dd,c9,27,c7));
            			}
            		}
HXDLIN( 193)		{
HXLINE( 193)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 193)				sb->flush();
            			}
HXDLIN( 193)			if (hx::IsNull( sb->b )) {
HXLINE( 193)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(testCount));
            			}
            			else {
HXLINE( 193)				::Array< ::String > sb2 = sb->b;
HXDLIN( 193)				sb2->push(::Std_obj::string(testCount));
            			}
            		}
HXLINE( 194)		{
HXLINE( 194)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 194)				sb->flush();
            			}
HXDLIN( 194)			if (hx::IsNull( sb->b )) {
HXLINE( 194)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_4385fced_20,1);
            			}
            			else {
HXLINE( 194)				sb->b->push(HX_("  Passed: ",36,9a,0f,7e));
            			}
            		}
HXDLIN( 194)		{
HXLINE( 194)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 194)				sb->flush();
            			}
HXDLIN( 194)			if (hx::IsNull( sb->b )) {
HXLINE( 194)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(passCount));
            			}
            			else {
HXLINE( 194)				::Array< ::String > sb3 = sb->b;
HXDLIN( 194)				sb3->push(::Std_obj::string(passCount));
            			}
            		}
HXLINE( 195)		{
HXLINE( 195)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 195)				sb->flush();
            			}
HXDLIN( 195)			if (hx::IsNull( sb->b )) {
HXLINE( 195)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_4385fced_21,1);
            			}
            			else {
HXLINE( 195)				sb->b->push(HX_("  Failed: ",c3,79,b7,3a));
            			}
            		}
HXDLIN( 195)		{
HXLINE( 195)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 195)				sb->flush();
            			}
HXDLIN( 195)			if (hx::IsNull( sb->b )) {
HXLINE( 195)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(failCount));
            			}
            			else {
HXLINE( 195)				::Array< ::String > sb4 = sb->b;
HXDLIN( 195)				sb4->push(::Std_obj::string(failCount));
            			}
            		}
HXLINE( 196)		{
HXLINE( 196)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 196)				sb->flush();
            			}
HXDLIN( 196)			if (hx::IsNull( sb->b )) {
HXLINE( 196)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_4385fced_22,1);
            			}
            			else {
HXLINE( 196)				sb->b->push(HX_(" Errors: ",51,13,30,17));
            			}
            		}
HXDLIN( 196)		{
HXLINE( 196)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 196)				sb->flush();
            			}
HXDLIN( 196)			if (hx::IsNull( sb->b )) {
HXLINE( 196)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(errorCount));
            			}
            			else {
HXLINE( 196)				::Array< ::String > sb5 = sb->b;
HXDLIN( 196)				sb5->push(::Std_obj::string(errorCount));
            			}
            		}
HXLINE( 197)		{
HXLINE( 197)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 197)				sb->flush();
            			}
HXDLIN( 197)			if (hx::IsNull( sb->b )) {
HXLINE( 197)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_4385fced_23,1);
            			}
            			else {
HXLINE( 197)				sb->b->push(HX_(" Ignored: ",f8,ad,04,5a));
            			}
            		}
HXDLIN( 197)		{
HXLINE( 197)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 197)				sb->flush();
            			}
HXDLIN( 197)			if (hx::IsNull( sb->b )) {
HXLINE( 197)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(ignoreCount));
            			}
            			else {
HXLINE( 197)				::Array< ::String > sb6 = sb->b;
HXDLIN( 197)				sb6->push(::Std_obj::string(ignoreCount));
            			}
            		}
HXLINE( 198)		{
HXLINE( 198)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 198)				sb->flush();
            			}
HXDLIN( 198)			if (hx::IsNull( sb->b )) {
HXLINE( 198)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_4385fced_24,1);
            			}
            			else {
HXLINE( 198)				sb->b->push(HX_(" Time: ",33,28,15,86));
            			}
            		}
HXDLIN( 198)		{
HXLINE( 198)			Float x1 = ::massive::munit::util::MathUtil_obj::round(time,(int)5);
HXDLIN( 198)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE( 198)				sb->flush();
            			}
HXDLIN( 198)			if (hx::IsNull( sb->b )) {
HXLINE( 198)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 198)				::Array< ::String > sb7 = sb->b;
HXDLIN( 198)				sb7->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 199)		this->printLine(sb->toString(),null());
HXLINE( 200)		this->printLine(HX_("",00,00,00,00),null());
            	}


void PrintClientBase_obj::printOverallResult(bool result){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_205_printOverallResult)
HXDLIN( 205)		this->printLine(HX_("",00,00,00,00),null());
            	}


void PrintClientBase_obj::print( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_210_print)
HXDLIN( 210)		 ::massive::munit::client::PrintClientBase _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 210)		::String _hx_tmp1 = _hx_tmp->output;
HXDLIN( 210)		_hx_tmp->output = (_hx_tmp1 + ::Std_obj::string(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PrintClientBase_obj,print,(void))

void PrintClientBase_obj::printLine( ::Dynamic value, ::Dynamic __o_indent){
 ::Dynamic indent = __o_indent.Default(0);
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_214_printLine)
HXLINE( 215)		value = ::Std_obj::string(value);
HXLINE( 216)		value = this->indentString(( (::String)(value) ),indent);
HXLINE( 217)		this->print((HX_("\n",0a,00,00,00) + ::Std_obj::string(value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,printLine,(void))

::String PrintClientBase_obj::indentString(::String value, ::Dynamic __o_indent){
 ::Dynamic indent = __o_indent.Default(0);
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_221_indentString)
HXLINE( 222)		if (hx::IsGreater( indent,(int)0 )) {
HXLINE( 222)			value = (::StringTools_obj::lpad(HX_("",00,00,00,00),HX_(" ",20,00,00,00),(indent * (int)4)) + value);
            		}
HXLINE( 223)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(PrintClientBase_obj,indentString,return )

::String PrintClientBase_obj::DEFAULT_ID;


hx::ObjectPtr< PrintClientBase_obj > PrintClientBase_obj::__new(hx::Null< bool >  __o_includeIgnoredReport) {
	hx::ObjectPtr< PrintClientBase_obj > __this = new PrintClientBase_obj();
	__this->__construct(__o_includeIgnoredReport);
	return __this;
}

hx::ObjectPtr< PrintClientBase_obj > PrintClientBase_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_includeIgnoredReport) {
	PrintClientBase_obj *__this = (PrintClientBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PrintClientBase_obj), true, "massive.munit.client.PrintClientBase"));
	*(void **)__this = PrintClientBase_obj::_hx_vtable;
	__this->__construct(__o_includeIgnoredReport);
	return __this;
}

PrintClientBase_obj::PrintClientBase_obj()
{
}

void PrintClientBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrintClientBase);
	HX_MARK_MEMBER_NAME(divider1,"divider1");
	HX_MARK_MEMBER_NAME(divider2,"divider2");
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	 ::massive::munit::client::AbstractTestResultClient_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PrintClientBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(divider1,"divider1");
	HX_VISIT_MEMBER_NAME(divider2,"divider2");
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(includeIgnoredReport,"includeIgnoredReport");
	 ::massive::munit::client::AbstractTestResultClient_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PrintClientBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return hx::Val( print_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return hx::Val( verbose ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider1") ) { return hx::Val( divider1 ); }
		if (HX_FIELD_EQ(inName,"divider2") ) { return hx::Val( divider2 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return hx::Val( printLine_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return hx::Val( printReports_dyn() ); }
		if (HX_FIELD_EQ(inName,"indentString") ) { return hx::Val( indentString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterIngored") ) { return hx::Val( filterIngored_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return hx::Val( updateTestClass_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return hx::Val( finalizeTestClass_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printIndentedLines") ) { return hx::Val( printIndentedLines_dyn() ); }
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return hx::Val( printOverallResult_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return hx::Val( initializeTestClass_dyn() ); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return hx::Val( reportFinalCoverage_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { return hx::Val( includeIgnoredReport ); }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return hx::Val( printFinalStatistics_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return hx::Val( setCurrentTestClassCoverage_dyn() ); }
		if (HX_FIELD_EQ(inName,"printFinalIgnoredStatistics") ) { return hx::Val( printFinalIgnoredStatistics_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PrintClientBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"divider1") ) { divider1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"divider2") ) { divider2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"includeIgnoredReport") ) { includeIgnoredReport=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrintClientBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("divider1","\x38","\x23","\x98","\x4b"));
	outFields->push(HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b"));
	outFields->push(HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"));
	outFields->push(HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PrintClientBase_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider1),HX_HCSTRING("divider1","\x38","\x23","\x98","\x4b")},
	{hx::fsString,(int)offsetof(PrintClientBase_obj,divider2),HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b")},
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,verbose),HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsBool,(int)offsetof(PrintClientBase_obj,includeIgnoredReport),HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo PrintClientBase_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &PrintClientBase_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String PrintClientBase_obj_sMemberFields[] = {
	HX_HCSTRING("divider1","\x38","\x23","\x98","\x4b"),
	HX_HCSTRING("divider2","\x39","\x23","\x98","\x4b"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("includeIgnoredReport","\x1e","\x1a","\xbf","\xa1"),
	HX_HCSTRING("initializeTestClass","\x16","\xbb","\x49","\x2f"),
	HX_HCSTRING("updateTestClass","\x3d","\x87","\xe5","\x60"),
	HX_HCSTRING("finalizeTestClass","\x08","\xad","\xf8","\x06"),
	HX_HCSTRING("setCurrentTestClassCoverage","\xd7","\x3b","\xb4","\x88"),
	HX_HCSTRING("reportFinalCoverage","\x2a","\xc6","\x68","\x9d"),
	HX_HCSTRING("printIndentedLines","\xc7","\x75","\x8b","\x9c"),
	HX_HCSTRING("printReports","\x92","\xc0","\x6f","\x0e"),
	HX_HCSTRING("printFinalIgnoredStatistics","\x8c","\x4e","\x03","\xb0"),
	HX_HCSTRING("filterIngored","\x4c","\x9d","\x5a","\x62"),
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	HX_HCSTRING("indentString","\x5d","\xc2","\x96","\x5e"),
	::String(null()) };

static void PrintClientBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PrintClientBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrintClientBase_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class PrintClientBase_obj::__mClass;

static ::String PrintClientBase_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null())
};

void PrintClientBase_obj::__register()
{
	hx::Object *dummy = new PrintClientBase_obj;
	PrintClientBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.PrintClientBase","\xed","\xfc","\x85","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PrintClientBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PrintClientBase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PrintClientBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PrintClientBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PrintClientBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrintClientBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrintClientBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PrintClientBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ff06a10c772ba8ce_40_boot)
HXDLIN(  40)		DEFAULT_ID = HX_("simple",32,04,7f,b8);
            	}
}

} // end namespace massive
} // end namespace munit
} // end namespace client
