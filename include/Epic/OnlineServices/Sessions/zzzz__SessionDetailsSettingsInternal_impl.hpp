#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsSettingsInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsSettingsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsSettings_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsSettings>)>(&::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::Get)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804f2270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsSettings>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::Get(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>"
constexpr  Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>* Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionDetailsSettings_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumPublicConnections", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowJoinInProgress", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InvitesAllowed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SanctionsEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::SessionDetailsSettingsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_BucketId, uint32_t  m_NumPublicConnections, int32_t  m_AllowJoinInProgress, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  m_PermissionLevel, int32_t  m_InvitesAllowed, int32_t  m_SanctionsEnabled, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_BucketId = m_BucketId;
this->m_NumPublicConnections = m_NumPublicConnections;
this->m_AllowJoinInProgress = m_AllowJoinInProgress;
this->m_PermissionLevel = m_PermissionLevel;
this->m_InvitesAllowed = m_InvitesAllowed;
this->m_SanctionsEnabled = m_SanctionsEnabled;
this->m_AllowedPlatformIds = m_AllowedPlatformIds;
this->m_AllowedPlatformIdsCount = m_AllowedPlatformIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal::SessionDetailsSettingsInternal()   {
}
