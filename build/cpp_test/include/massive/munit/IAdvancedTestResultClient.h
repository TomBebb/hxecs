// Generated by Haxe 3.4.7
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#define INCLUDED_massive_munit_IAdvancedTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)

namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES IAdvancedTestResultClient_obj {
	public:
		typedef  ::massive::munit::ITestResultClient_obj super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (hx::Object :: *_hx_set_completionHandler)( ::Dynamic value); 
		static inline  ::Dynamic set_completionHandler( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_set_completionHandler)(value);
		}
		 ::Dynamic (hx::Object :: *_hx_get_completionHandler)(); 
		static inline  ::Dynamic get_completionHandler( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_get_completionHandler)();
		}
		void (hx::Object :: *_hx_addPass)( ::massive::munit::TestResult result); 
		static inline void addPass( ::Dynamic _hx_, ::massive::munit::TestResult result) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_addPass)(result);
		}
		void (hx::Object :: *_hx_addFail)( ::massive::munit::TestResult result); 
		static inline void addFail( ::Dynamic _hx_, ::massive::munit::TestResult result) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_addFail)(result);
		}
		void (hx::Object :: *_hx_addError)( ::massive::munit::TestResult result); 
		static inline void addError( ::Dynamic _hx_, ::massive::munit::TestResult result) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_addError)(result);
		}
		void (hx::Object :: *_hx_addIgnore)( ::massive::munit::TestResult result); 
		static inline void addIgnore( ::Dynamic _hx_, ::massive::munit::TestResult result) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_addIgnore)(result);
		}
		 ::Dynamic (hx::Object :: *_hx_reportFinalStatistics)(int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time); 
		static inline  ::Dynamic reportFinalStatistics( ::Dynamic _hx_,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time) {
			return (_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_reportFinalStatistics)(testCount,passCount,failCount,errorCount,ignoreCount,time);
		}
		void (hx::Object :: *_hx_setCurrentTestClass)(::String className); 
		static inline void setCurrentTestClass( ::Dynamic _hx_,::String className) {
			(_hx_.mPtr->*( static_cast< ::massive::munit::IAdvancedTestResultClient_obj *>(_hx_.mPtr->_hx_getInterface(0xce173438)))->_hx_setCurrentTestClass)(className);
		}
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_IAdvancedTestResultClient */ 
