// Generated by Haxe 3.4.7
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#define INCLUDED_massive_munit_client_ExternalPrintClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(massive,munit,client,ExternalPrintClient)

namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES ExternalPrintClient_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (hx::Object :: *_hx_queue)(::String methodName, ::Dynamic args); 
		static inline bool queue( ::Dynamic _hx_,::String methodName, ::Dynamic args) {
			return (_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_queue)(methodName,args);
		}
		void (hx::Object :: *_hx_setResult)(bool value); 
		static inline void setResult( ::Dynamic _hx_,bool value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_setResult)(value);
		}
		void (hx::Object :: *_hx_print)(::String value); 
		static inline void print( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_print)(value);
		}
		void (hx::Object :: *_hx_printLine)(::String value); 
		static inline void printLine( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_printLine)(value);
		}
		void (hx::Object :: *_hx_setResultBackground)(bool value); 
		static inline void setResultBackground( ::Dynamic _hx_,bool value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_setResultBackground)(value);
		}
		void (hx::Object :: *_hx_createTestClass)(::String className); 
		static inline void createTestClass( ::Dynamic _hx_,::String className) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_createTestClass)(className);
		}
		void (hx::Object :: *_hx_printToTestClassSummary)(::String value); 
		static inline void printToTestClassSummary( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_printToTestClassSummary)(value);
		}
		void (hx::Object :: *_hx_setTestClassResult)(int resultType); 
		static inline void setTestClassResult( ::Dynamic _hx_,int resultType) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_setTestClassResult)(resultType);
		}
		void (hx::Object :: *_hx_trace)( ::Dynamic value); 
		static inline void trace( ::Dynamic _hx_, ::Dynamic value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_trace)(value);
		}
		void (hx::Object :: *_hx_addTestPass)(::String value); 
		static inline void addTestPass( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addTestPass)(value);
		}
		void (hx::Object :: *_hx_addTestFail)(::String value); 
		static inline void addTestFail( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addTestFail)(value);
		}
		void (hx::Object :: *_hx_addTestError)(::String value); 
		static inline void addTestError( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addTestError)(value);
		}
		void (hx::Object :: *_hx_addTestIgnore)(::String value); 
		static inline void addTestIgnore( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addTestIgnore)(value);
		}
		void (hx::Object :: *_hx_addTestClassCoverage)(::String className,hx::Null< Float >  percent); 
		static inline void addTestClassCoverage( ::Dynamic _hx_,::String className,hx::Null< Float >  percent) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addTestClassCoverage)(className,percent);
		}
		void (hx::Object :: *_hx_addTestClassCoverageItem)(::String value); 
		static inline void addTestClassCoverageItem( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addTestClassCoverageItem)(value);
		}
		void (hx::Object :: *_hx_createCoverageReport)(hx::Null< Float >  percent); 
		static inline void createCoverageReport( ::Dynamic _hx_,hx::Null< Float >  percent) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_createCoverageReport)(percent);
		}
		void (hx::Object :: *_hx_addMissingCoverageClass)(::String className,hx::Null< Float >  percent); 
		static inline void addMissingCoverageClass( ::Dynamic _hx_,::String className,hx::Null< Float >  percent) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addMissingCoverageClass)(className,percent);
		}
		void (hx::Object :: *_hx_addCoverageReportSection)(::String name,::String value); 
		static inline void addCoverageReportSection( ::Dynamic _hx_,::String name,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addCoverageReportSection)(name,value);
		}
		void (hx::Object :: *_hx_addCoverageSummary)(::String value); 
		static inline void addCoverageSummary( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_addCoverageSummary)(value);
		}
		void (hx::Object :: *_hx_printSummary)(::String value); 
		static inline void printSummary( ::Dynamic _hx_,::String value) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::client::ExternalPrintClient_obj *>(_hx_.mPtr->_hx_getInterface(0x62e23a15)))->_hx_printSummary)(value);
		}
};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_ExternalPrintClient */ 