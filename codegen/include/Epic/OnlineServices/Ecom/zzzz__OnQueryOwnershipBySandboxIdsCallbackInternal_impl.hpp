#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOwnershipBySandboxIdsCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipBySandboxIdsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipBySandboxIdsCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal::OnQueryOwnershipBySandboxIdsCallbackInternal()   {
}
