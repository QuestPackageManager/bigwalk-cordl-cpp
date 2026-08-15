#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionPermissionLevel_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetailsSettings)
namespace Epic::OnlineServices::Sessions {
struct OnlineSessionPermissionLevel;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsSettings;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsSettings);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsSettings, "Epic.OnlineServices.Sessions", "SessionDetailsSettings");
// Dependencies Epic.OnlineServices.Sessions.OnlineSessionPermissionLevel
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsSettings
struct CORDL_TYPE SessionDetailsSettings {
public:
// Declarations
 __declspec(property(get=get_AllowJoinInProgress, put=set_AllowJoinInProgress)) bool  AllowJoinInProgress;

 __declspec(property(get=get_AllowedPlatformIds, put=set_AllowedPlatformIds)) ::ArrayW<uint32_t>  AllowedPlatformIds;

 __declspec(property(get=get_BucketId, put=set_BucketId)) ::Epic::OnlineServices::Utf8String*  BucketId;

 __declspec(property(get=get_InvitesAllowed, put=set_InvitesAllowed)) bool  InvitesAllowed;

 __declspec(property(get=get_NumPublicConnections, put=set_NumPublicConnections)) uint32_t  NumPublicConnections;

 __declspec(property(get=get_PermissionLevel, put=set_PermissionLevel)) ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  PermissionLevel;

 __declspec(property(get=get_SanctionsEnabled, put=set_SanctionsEnabled)) bool  SanctionsEnabled;

/// @brief Method get_AllowJoinInProgress, addr 0x1804e67e0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowJoinInProgress() ;

/// @brief Method get_AllowedPlatformIds, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_AllowedPlatformIds() ;

/// @brief Method get_BucketId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_BucketId() ;

/// @brief Method get_InvitesAllowed, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool get_InvitesAllowed() ;

/// @brief Method get_NumPublicConnections, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_NumPublicConnections() ;

/// @brief Method get_PermissionLevel, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel() ;

/// @brief Method get_SanctionsEnabled, addr 0x1804e67f0, size 0x10, virtual false, abstract: false, final false
inline bool get_SanctionsEnabled() ;

/// @brief Method set_AllowJoinInProgress, addr 0x1804e6800, size 0x10, virtual false, abstract: false, final false
inline void set_AllowJoinInProgress(bool  value) ;

/// @brief Method set_AllowedPlatformIds, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedPlatformIds(::ArrayW<uint32_t>  value) ;

/// @brief Method set_BucketId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_BucketId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_InvitesAllowed, addr 0x18039e7c0, size 0x10, virtual false, abstract: false, final false
inline void set_InvitesAllowed(bool  value) ;

/// @brief Method set_NumPublicConnections, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_NumPublicConnections(uint32_t  value) ;

/// @brief Method set_PermissionLevel, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  value) ;

/// @brief Method set_SanctionsEnabled, addr 0x1804e6810, size 0x10, virtual false, abstract: false, final false
inline void set_SanctionsEnabled(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsSettings() ;

// Ctor Parameters [CppParam { name: "_BucketId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_NumPublicConnections_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_AllowJoinInProgress_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel", modifiers: "", def_value: None }, CppParam { name: "_InvitesAllowed_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_SanctionsEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr SessionDetailsSettings(::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField, uint32_t  _NumPublicConnections_k__BackingField, bool  _AllowJoinInProgress_k__BackingField, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  _PermissionLevel_k__BackingField, bool  _InvitesAllowed_k__BackingField, bool  _SanctionsEnabled_k__BackingField, ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <BucketId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField;

/// @brief Field <NumPublicConnections>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _NumPublicConnections_k__BackingField;

/// @brief Field <AllowJoinInProgress>k__BackingField, offset: 0xc, size: 0x1, def value: None
 bool  _AllowJoinInProgress_k__BackingField;

/// @brief Field <PermissionLevel>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel  _PermissionLevel_k__BackingField;

/// @brief Field <InvitesAllowed>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  _InvitesAllowed_k__BackingField;

/// @brief Field <SanctionsEnabled>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  _SanctionsEnabled_k__BackingField;

/// @brief Field <AllowedPlatformIds>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _BucketId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _NumPublicConnections_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _AllowJoinInProgress_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _PermissionLevel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _InvitesAllowed_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _SanctionsEnabled_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsSettings, _AllowedPlatformIds_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsSettings) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
