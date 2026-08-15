#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CreateLobbyOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateLobbyOptions)
namespace Epic::OnlineServices::Lobby {
struct LobbyPermissionLevel;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyRTCRoomJoinActionType;
}
namespace Epic::OnlineServices::Lobby {
struct LocalRTCOptions;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::CreateLobbyOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::CreateLobbyOptions, "Epic.OnlineServices.Lobby", "CreateLobbyOptions");
// Dependencies Epic.OnlineServices.Lobby.LobbyPermissionLevel, Epic.OnlineServices.Lobby.LobbyRTCRoomJoinActionType, Epic.OnlineServices.Lobby.LocalRTCOptions, System.Nullable`1<T>
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.CreateLobbyOptions
struct CORDL_TYPE CreateLobbyOptions {
public:
// Declarations
 __declspec(property(get=get_AllowInvites, put=set_AllowInvites)) bool  AllowInvites;

 __declspec(property(get=get_AllowedPlatformIds, put=set_AllowedPlatformIds)) ::ArrayW<uint32_t>  AllowedPlatformIds;

 __declspec(property(get=get_BucketId, put=set_BucketId)) ::Epic::OnlineServices::Utf8String*  BucketId;

 __declspec(property(get=get_CrossplayOptOut, put=set_CrossplayOptOut)) bool  CrossplayOptOut;

 __declspec(property(get=get_DisableHostMigration, put=set_DisableHostMigration)) bool  DisableHostMigration;

 __declspec(property(get=get_EnableJoinById, put=set_EnableJoinById)) bool  EnableJoinById;

 __declspec(property(get=get_EnableRTCRoom, put=set_EnableRTCRoom)) bool  EnableRTCRoom;

 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_LocalRTCOptions, put=set_LocalRTCOptions)) ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  LocalRTCOptions;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_MaxLobbyMembers, put=set_MaxLobbyMembers)) uint32_t  MaxLobbyMembers;

 __declspec(property(get=get_PermissionLevel, put=set_PermissionLevel)) ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  PermissionLevel;

 __declspec(property(get=get_PresenceEnabled, put=set_PresenceEnabled)) bool  PresenceEnabled;

 __declspec(property(get=get_RTCRoomJoinActionType, put=set_RTCRoomJoinActionType)) ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  RTCRoomJoinActionType;

 __declspec(property(get=get_RejoinAfterKickRequiresInvite, put=set_RejoinAfterKickRequiresInvite)) bool  RejoinAfterKickRequiresInvite;

/// @brief Method get_AllowInvites, addr 0x180503b10, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowInvites() ;

/// @brief Method get_AllowedPlatformIds, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_AllowedPlatformIds() ;

/// @brief Method get_BucketId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_BucketId() ;

/// @brief Method get_CrossplayOptOut, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_CrossplayOptOut() ;

/// @brief Method get_DisableHostMigration, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableHostMigration() ;

/// @brief Method get_EnableJoinById, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableJoinById() ;

/// @brief Method get_EnableRTCRoom, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableRTCRoom() ;

/// @brief Method get_LobbyId, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_LocalRTCOptions, addr 0x180503b20, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> get_LocalRTCOptions() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_MaxLobbyMembers, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxLobbyMembers() ;

/// @brief Method get_PermissionLevel, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel() ;

/// @brief Method get_PresenceEnabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_PresenceEnabled() ;

/// @brief Method get_RTCRoomJoinActionType, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType get_RTCRoomJoinActionType() ;

/// @brief Method get_RejoinAfterKickRequiresInvite, addr 0x180503b50, size 0x10, virtual false, abstract: false, final false
inline bool get_RejoinAfterKickRequiresInvite() ;

/// @brief Method set_AllowInvites, addr 0x180503b60, size 0x10, virtual false, abstract: false, final false
inline void set_AllowInvites(bool  value) ;

/// @brief Method set_AllowedPlatformIds, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedPlatformIds(::ArrayW<uint32_t>  value) ;

/// @brief Method set_BucketId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_BucketId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_CrossplayOptOut, addr 0x1803de5b0, size 0x10, virtual false, abstract: false, final false
inline void set_CrossplayOptOut(bool  value) ;

/// @brief Method set_DisableHostMigration, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_DisableHostMigration(bool  value) ;

/// @brief Method set_EnableJoinById, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void set_EnableJoinById(bool  value) ;

/// @brief Method set_EnableRTCRoom, addr 0x1803a7490, size 0x10, virtual false, abstract: false, final false
inline void set_EnableRTCRoom(bool  value) ;

/// @brief Method set_LobbyId, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalRTCOptions, addr 0x180503b80, size 0x20, virtual false, abstract: false, final false
inline void set_LocalRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_MaxLobbyMembers, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_MaxLobbyMembers(uint32_t  value) ;

/// @brief Method set_PermissionLevel, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  value) ;

/// @brief Method set_PresenceEnabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_PresenceEnabled(bool  value) ;

/// @brief Method set_RTCRoomJoinActionType, addr 0x180503ba0, size 0x10, virtual false, abstract: false, final false
inline void set_RTCRoomJoinActionType(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  value) ;

/// @brief Method set_RejoinAfterKickRequiresInvite, addr 0x180503bb0, size 0x10, virtual false, abstract: false, final false
inline void set_RejoinAfterKickRequiresInvite(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateLobbyOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_MaxLobbyMembers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: None }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AllowInvites_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_BucketId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DisableHostMigration_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_EnableRTCRoom_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_LocalRTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>", modifiers: "", def_value: None }, CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_EnableJoinById_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_RejoinAfterKickRequiresInvite_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_CrossplayOptOut_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_RTCRoomJoinActionType_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: None }]
constexpr CreateLobbyOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, uint32_t  _MaxLobbyMembers_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField, bool  _PresenceEnabled_k__BackingField, bool  _AllowInvites_k__BackingField, ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField, bool  _DisableHostMigration_k__BackingField, bool  _EnableRTCRoom_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, bool  _EnableJoinById_k__BackingField, bool  _RejoinAfterKickRequiresInvite_k__BackingField, ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField, bool  _CrossplayOptOut_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  _RTCRoomJoinActionType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <MaxLobbyMembers>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _MaxLobbyMembers_k__BackingField;

/// @brief Field <PermissionLevel>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField;

/// @brief Field <PresenceEnabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _PresenceEnabled_k__BackingField;

/// @brief Field <AllowInvites>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  _AllowInvites_k__BackingField;

/// @brief Field <BucketId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField;

/// @brief Field <DisableHostMigration>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  _DisableHostMigration_k__BackingField;

/// @brief Field <EnableRTCRoom>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  _EnableRTCRoom_k__BackingField;

/// @brief Field <LocalRTCOptions>k__BackingField, offset: 0x28, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField;

/// @brief Field <LobbyId>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

/// @brief Field <EnableJoinById>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  _EnableJoinById_k__BackingField;

/// @brief Field <RejoinAfterKickRequiresInvite>k__BackingField, offset: 0x49, size: 0x1, def value: None
 bool  _RejoinAfterKickRequiresInvite_k__BackingField;

/// @brief Field <AllowedPlatformIds>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField;

/// @brief Field <CrossplayOptOut>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  _CrossplayOptOut_k__BackingField;

/// @brief Field <RTCRoomJoinActionType>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  _RTCRoomJoinActionType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _MaxLobbyMembers_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _PermissionLevel_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _PresenceEnabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _AllowInvites_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _BucketId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _DisableHostMigration_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _EnableRTCRoom_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _LocalRTCOptions_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _LobbyId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _EnableJoinById_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _RejoinAfterKickRequiresInvite_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _AllowedPlatformIds_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _CrossplayOptOut_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbyOptions, _RTCRoomJoinActionType_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::CreateLobbyOptions) == 0x60, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
