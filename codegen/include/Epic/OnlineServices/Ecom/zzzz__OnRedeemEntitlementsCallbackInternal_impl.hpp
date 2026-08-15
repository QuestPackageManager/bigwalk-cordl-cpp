#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnRedeemEntitlementsCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnRedeemEntitlementsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal* Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal::OnRedeemEntitlementsCallbackInternal()   {
}
