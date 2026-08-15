#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDetailsInfoInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, "Epic.OnlineServices.Lobby", "LobbyDetailsInfoInternal");
// Dependencies Epic.OnlineServices.Lobby.LobbyPermissionLevel, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsInfoInternal
struct CORDL_TYPE LobbyDetailsInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>*() ;

/// @brief Method Get, addr 0x180506490, size 0x230, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyDetailsInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LobbyOwnerUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: None }, CppParam { name: "m_AvailableSlots", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxMembers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowInvites", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllowHostMigration", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RTCRoomEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowJoinById", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RejoinAfterKickRequiresInvite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbyDetailsInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LobbyOwnerUserId, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel, uint32_t  m_AvailableSlots, uint32_t  m_MaxMembers, int32_t  m_AllowInvites, ::System::IntPtr  m_BucketId, int32_t  m_AllowHostMigration, int32_t  m_RTCRoomEnabled, int32_t  m_AllowJoinById, int32_t  m_RejoinAfterKickRequiresInvite, int32_t  m_PresenceEnabled, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8534};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

/// @brief Field m_LobbyOwnerUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyOwnerUserId;

/// @brief Field m_PermissionLevel, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel;

/// @brief Field m_AvailableSlots, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_AvailableSlots;

/// @brief Field m_MaxMembers, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_MaxMembers;

/// @brief Field m_AllowInvites, offset: 0x24, size: 0x4, def value: None
 int32_t  m_AllowInvites;

/// @brief Field m_BucketId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_BucketId;

/// @brief Field m_AllowHostMigration, offset: 0x30, size: 0x4, def value: None
 int32_t  m_AllowHostMigration;

/// @brief Field m_RTCRoomEnabled, offset: 0x34, size: 0x4, def value: None
 int32_t  m_RTCRoomEnabled;

/// @brief Field m_AllowJoinById, offset: 0x38, size: 0x4, def value: None
 int32_t  m_AllowJoinById;

/// @brief Field m_RejoinAfterKickRequiresInvite, offset: 0x3c, size: 0x4, def value: None
 int32_t  m_RejoinAfterKickRequiresInvite;

/// @brief Field m_PresenceEnabled, offset: 0x40, size: 0x4, def value: None
 int32_t  m_PresenceEnabled;

/// @brief Field m_AllowedPlatformIds, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_AllowedPlatformIds;

/// @brief Field m_AllowedPlatformIdsCount, offset: 0x50, size: 0x4, def value: None
 uint32_t  m_AllowedPlatformIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_LobbyId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_LobbyOwnerUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_PermissionLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_AvailableSlots) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_MaxMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_AllowInvites) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_BucketId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_AllowHostMigration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_RTCRoomEnabled) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_AllowJoinById) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_RejoinAfterKickRequiresInvite) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_PresenceEnabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_AllowedPlatformIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal, m_AllowedPlatformIdsCount) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsInfoInternal) == 0x58, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
