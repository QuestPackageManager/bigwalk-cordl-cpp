#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CreateLobbyOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateLobbyOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, "Epic.OnlineServices.Lobby", "CreateLobbyOptionsInternal");
// Dependencies Epic.OnlineServices.Lobby.LobbyPermissionLevel, Epic.OnlineServices.Lobby.LobbyRTCRoomJoinActionType, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.CreateLobbyOptionsInternal
struct CORDL_TYPE CreateLobbyOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180504880, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1805048e0, size 0x290, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CreateLobbyOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__CreateLobbyOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateLobbyOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_MaxLobbyMembers", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_PermissionLevel", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: None }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowInvites", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DisableHostMigration", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EnableRTCRoom", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalRTCOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EnableJoinById", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RejoinAfterKickRequiresInvite", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_CrossplayOptOut", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RTCRoomJoinActionType", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: None }]
constexpr CreateLobbyOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, uint32_t  m_MaxLobbyMembers, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel, int32_t  m_PresenceEnabled, int32_t  m_AllowInvites, ::System::IntPtr  m_BucketId, int32_t  m_DisableHostMigration, int32_t  m_EnableRTCRoom, ::System::IntPtr  m_LocalRTCOptions, ::System::IntPtr  m_LobbyId, int32_t  m_EnableJoinById, int32_t  m_RejoinAfterKickRequiresInvite, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount, int32_t  m_CrossplayOptOut, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  m_RTCRoomJoinActionType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8460};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_MaxLobbyMembers, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_MaxLobbyMembers;

/// @brief Field m_PermissionLevel, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  m_PermissionLevel;

/// @brief Field m_PresenceEnabled, offset: 0x18, size: 0x4, def value: None
 int32_t  m_PresenceEnabled;

/// @brief Field m_AllowInvites, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_AllowInvites;

/// @brief Field m_BucketId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_BucketId;

/// @brief Field m_DisableHostMigration, offset: 0x28, size: 0x4, def value: None
 int32_t  m_DisableHostMigration;

/// @brief Field m_EnableRTCRoom, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_EnableRTCRoom;

/// @brief Field m_LocalRTCOptions, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_LocalRTCOptions;

/// @brief Field m_LobbyId, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

/// @brief Field m_EnableJoinById, offset: 0x40, size: 0x4, def value: None
 int32_t  m_EnableJoinById;

/// @brief Field m_RejoinAfterKickRequiresInvite, offset: 0x44, size: 0x4, def value: None
 int32_t  m_RejoinAfterKickRequiresInvite;

/// @brief Field m_AllowedPlatformIds, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  m_AllowedPlatformIds;

/// @brief Field m_AllowedPlatformIdsCount, offset: 0x50, size: 0x4, def value: None
 uint32_t  m_AllowedPlatformIdsCount;

/// @brief Field m_CrossplayOptOut, offset: 0x54, size: 0x4, def value: None
 int32_t  m_CrossplayOptOut;

/// @brief Field m_RTCRoomJoinActionType, offset: 0x58, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  m_RTCRoomJoinActionType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_MaxLobbyMembers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_PermissionLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_PresenceEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_AllowInvites) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_BucketId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_DisableHostMigration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_EnableRTCRoom) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_LocalRTCOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_LobbyId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_EnableJoinById) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_RejoinAfterKickRequiresInvite) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_AllowedPlatformIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_AllowedPlatformIdsCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_CrossplayOptOut) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal, m_RTCRoomJoinActionType) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::CreateLobbyOptionsInternal) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
