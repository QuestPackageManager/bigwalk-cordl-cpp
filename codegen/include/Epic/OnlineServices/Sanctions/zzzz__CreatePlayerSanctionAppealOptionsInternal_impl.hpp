#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CreatePlayerSanctionAppealOptionsInternal.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__SanctionAppealReason_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804e7660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::*)()>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>"
constexpr  Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sanctions__CreatePlayerSanctionAppealOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reason", ty: "::Epic::OnlineServices::Sanctions::SanctionAppealReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReferenceId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::CreatePlayerSanctionAppealOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::Sanctions::SanctionAppealReason  m_Reason, ::System::IntPtr  m_ReferenceId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Reason = m_Reason;
this->m_ReferenceId = m_ReferenceId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealOptionsInternal::CreatePlayerSanctionAppealOptionsInternal()   {
}
