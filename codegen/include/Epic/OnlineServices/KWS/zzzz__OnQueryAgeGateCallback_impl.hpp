#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnQueryAgeGateCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryAgeGateCallback_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__QueryAgeGateCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::*)(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>)>(&::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::*)(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::*)(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnQueryAgeGateCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::KWS::OnQueryAgeGateCallback::Invoke(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::KWS::OnQueryAgeGateCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::KWS::OnQueryAgeGateCallback::EndInvoke(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback* Epic::OnlineServices::KWS::OnQueryAgeGateCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::KWS::OnQueryAgeGateCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnQueryAgeGateCallback::OnQueryAgeGateCallback()   {
}
