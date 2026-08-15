#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/EndPlayerSessionOptionsInternal.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptionsAccountIdInternal_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__MetricsAccountIdType_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__EndPlayerSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>)>(&::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180504db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::*)()>(&::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180504d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>"
constexpr  Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>* Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Metrics__EndPlayerSessionOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::EndPlayerSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountIdType", ty: "::Epic::OnlineServices::Metrics::MetricsAccountIdType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::EndPlayerSessionOptionsInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Metrics::MetricsAccountIdType  m_AccountIdType, ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsAccountIdInternal  m_AccountId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AccountIdType = m_AccountIdType;
this->m_AccountId = m_AccountId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::EndPlayerSessionOptionsInternal::EndPlayerSessionOptionsInternal()   {
}
