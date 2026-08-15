#pragma once
// IWYU pragma private; include "UnityEngine/UnityConsent/EndUserConsent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UnityConsent/zzzz__EndUserConsent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UnityConsent/zzzz__ConsentState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnityConsent::EndUserConsent.GetConsentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UnityConsent::ConsentState (*)()>(&::UnityEngine::UnityConsent::EndUserConsent::GetConsentState)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182548fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::EndUserConsent*>(),
                        {"GetConsentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnityConsent::EndUserConsent.OnConsentStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UnityConsent::EndUserConsent::OnConsentStateChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182548ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::EndUserConsent*>(),
                        {"OnConsentStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnityConsent::EndUserConsent.GetConsentState_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::UnityConsent::ConsentState>)>(&::UnityEngine::UnityConsent::EndUserConsent::GetConsentState_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182548fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::EndUserConsent*>(),
                        {"GetConsentState_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::UnityConsent::ConsentState>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UnityConsent::EndUserConsent::setStaticF_consentStateChanged(::System::Action_1<::UnityEngine::UnityConsent::ConsentState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UnityConsent::ConsentState>*, "consentStateChanged", ::UnityEngine::UnityConsent::EndUserConsent*>(std::forward<::System::Action_1<::UnityEngine::UnityConsent::ConsentState>*>(value));
}
inline ::System::Action_1<::UnityEngine::UnityConsent::ConsentState>* UnityEngine::UnityConsent::EndUserConsent::getStaticF_consentStateChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UnityConsent::ConsentState>*, "consentStateChanged", ::UnityEngine::UnityConsent::EndUserConsent*>();
}
inline ::UnityEngine::UnityConsent::ConsentState UnityEngine::UnityConsent::EndUserConsent::GetConsentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::EndUserConsent*>(),
                        {"GetConsentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UnityConsent::ConsentState>(nullptr, ___internal_method);
}
inline void UnityEngine::UnityConsent::EndUserConsent::OnConsentStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::EndUserConsent*>(),
                        {"OnConsentStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UnityConsent::EndUserConsent::GetConsentState_Injected(::by_ref<::UnityEngine::UnityConsent::ConsentState>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::EndUserConsent*>(),
                        {"GetConsentState_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::UnityConsent::ConsentState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UnityConsent::EndUserConsent::EndUserConsent()   {
}
