#pragma once
// IWYU pragma private; include "UnityEngine/UnityConsent/ConsentState.hpp"
#include "UnityEngine/UnityConsent/zzzz__ConsentStatus_impl.hpp"
#include "UnityEngine/UnityConsent/zzzz__ConsentState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UnityConsent::ConsentState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UnityConsent::ConsentState::*)()>(&::UnityEngine::UnityConsent::ConsentState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822ba900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::ConsentState>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UnityConsent::ConsentState.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UnityConsent::ConsentState::*)()>(&::UnityEngine::UnityConsent::ConsentState::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182548ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UnityConsent::ConsentState>(),
                    {::i2c::class_of<::UnityEngine::UnityConsent::ConsentState>(), 3}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::UnityConsent::ConsentState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UnityConsent::ConsentState>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UnityConsent::ConsentState::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UnityConsent::ConsentState>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AdsIntent", ty: "::UnityEngine::UnityConsent::ConsentStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "AnalyticsIntent", ty: "::UnityEngine::UnityConsent::ConsentStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UnityConsent::ConsentState::ConsentState(::UnityEngine::UnityConsent::ConsentStatus  AdsIntent, ::UnityEngine::UnityConsent::ConsentStatus  AnalyticsIntent) noexcept  {
this->AdsIntent = AdsIntent;
this->AnalyticsIntent = AnalyticsIntent;
}
// Ctor Parameters []
constexpr ::UnityEngine::UnityConsent::ConsentState::ConsentState()   {
}
