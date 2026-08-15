#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsSettingsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetailsSettingsInternal)
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsSettings;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsSettingsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, "Epic.OnlineServices.Sessions", "SessionDetailsSettingsInternal");
// Dependencies Epic.OnlineServices.Sessions.OnlineSessionPermissionLevel, System.IntPtr
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsSettingsInternal
struct CORDL_TYPE SessionDetailsSettingsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>*() ;

/// @brief Method Get, addr 0x1804f2270, size 0x170, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionDetailsSettings_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsSettingsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NumPublicConnections", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowJoinInProgress", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel", modifiers: "", def_value: None }, CppParam { name: "m_InvitesAllowed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SanctionsEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SessionDetailsSettingsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_BucketId, uint32_t  m_NumPublicConnections, int32_t  m_AllowJoinInProgress, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  m_PermissionLevel, int32_t  m_InvitesAllowed, int32_t  m_SanctionsEnabled, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_BucketId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_BucketId;

/// @brief Field m_NumPublicConnections, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_NumPublicConnections;

/// @brief Field m_AllowJoinInProgress, offset: 0x14, size: 0x4, def value: None
 int32_t  m_AllowJoinInProgress;

/// @brief Field m_PermissionLevel, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  m_PermissionLevel;

/// @brief Field m_InvitesAllowed, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_InvitesAllowed;

/// @brief Field m_SanctionsEnabled, offset: 0x20, size: 0x4, def value: None
 int32_t  m_SanctionsEnabled;

/// @brief Field m_AllowedPlatformIds, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_AllowedPlatformIds;

/// @brief Field m_AllowedPlatformIdsCount, offset: 0x30, size: 0x4, def value: None
 uint32_t  m_AllowedPlatformIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_BucketId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_NumPublicConnections) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_AllowJoinInProgress) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_PermissionLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_InvitesAllowed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_SanctionsEnabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_AllowedPlatformIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal, m_AllowedPlatformIdsCount) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
