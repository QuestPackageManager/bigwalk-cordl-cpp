#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/BeginPlayerSessionOptionsAccountIdInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountIdInternal_def.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__BeginPlayerSessionOptionsAccountId_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::*)(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>)>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::Set)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805042e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::*)()>(&::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805042b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::__cordl_internal_get_m_Epic()  {
return this->___m_Epic;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::__cordl_internal_get_m_Epic() const {
return this->___m_Epic;
}
constexpr void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::__cordl_internal_set_m_Epic(::System::IntPtr  value)  {
this->___m_Epic = value;
}
constexpr ::System::IntPtr& Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::__cordl_internal_get_m_External()  {
return this->___m_External;
}
constexpr ::System::IntPtr const& Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::__cordl_internal_get_m_External() const {
return this->___m_External;
}
constexpr void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::__cordl_internal_set_m_External(::System::IntPtr  value)  {
this->___m_External = value;
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::Set(::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>"
constexpr  Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>* Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Metrics__BeginPlayerSessionOptionsAccountId_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Epic", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_External", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::BeginPlayerSessionOptionsAccountIdInternal(::System::IntPtr  m_Epic, ::System::IntPtr  m_External) noexcept  {
this->m_Epic = m_Epic;
this->m_External = m_External;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::BeginPlayerSessionOptionsAccountIdInternal::BeginPlayerSessionOptionsAccountIdInternal()   {
}
