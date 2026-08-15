#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/QueryActivePlayerSanctionsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__QueryActivePlayerSanctionsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__QueryActivePlayerSanctionsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>)>(&::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804edad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::*)()>(&::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>"
constexpr  Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>* Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sanctions__QueryActivePlayerSanctionsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::QueryActivePlayerSanctionsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_TargetUserId = m_TargetUserId;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptionsInternal::QueryActivePlayerSanctionsOptionsInternal()   {
}
