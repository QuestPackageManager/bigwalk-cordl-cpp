#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOwnershipBySandboxIdsCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipBySandboxIdsCallback_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipBySandboxIdsCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfo>)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::Invoke(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback* Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallback::OnQueryOwnershipBySandboxIdsCallback()   {
}
