#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsInternal.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountIdInternal_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__UserControllerType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180504530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805044e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>"
constexpr  Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>* Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Metrics__BeginPlayerSessionOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::Metrics::MetricsAccountIdType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ControllerType", ty: "::Epic::OnlineServices::Metrics::UserControllerType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ServerIp", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GameSessionId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::BeginPlayerSessionOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType, ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal  m_AccountId, ::System::IntPtr  m_DisplayName, ::Epic::OnlineServices::Metrics::UserControllerType  m_ControllerType, ::System::IntPtr  m_ServerIp, ::System::IntPtr  m_GameSessionId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AccountIdType = m_AccountIdType;
this->m_AccountId = m_AccountId;
this->m_DisplayName = m_DisplayName;
this->m_ControllerType = m_ControllerType;
this->m_ServerIp = m_ServerIp;
this->m_GameSessionId = m_GameSessionId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsInternal::BeginPlayerSessionOptionsInternal()   {
}
