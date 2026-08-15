#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDetailsInfo)
namespace Epic::OnlineServices::Lobby {
struct LobbyPermissionLevel;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, "Epic.OnlineServices.Lobby", "LobbyDetailsInfo");
// Dependencies Epic.OnlineServices.Lobby.LobbyPermissionLevel
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsInfo
struct CORDL_TYPE LobbyDetailsInfo {
public:
// Declarations
 __declspec(property(get=get_AllowHostMigration, put=set_AllowHostMigration)) bool  AllowHostMigration;

 __declspec(property(get=get_AllowInvites, put=set_AllowInvites)) bool  AllowInvites;

 __declspec(property(get=get_AllowJoinById, put=set_AllowJoinById)) bool  AllowJoinById;

 __declspec(property(get=get_AllowedPlatformIds, put=set_AllowedPlatformIds)) ::ArrayW<uint32_t>  AllowedPlatformIds;

 __declspec(property(get=get_AvailableSlots, put=set_AvailableSlots)) uint32_t  AvailableSlots;

 __declspec(property(get=get_BucketId, put=set_BucketId)) ::Epic::OnlineServices::Utf8String*  BucketId;

 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_LobbyOwnerUserId, put=set_LobbyOwnerUserId)) ::Epic::OnlineServices::ProductUserId*  LobbyOwnerUserId;

 __declspec(property(get=get_MaxMembers, put=set_MaxMembers)) uint32_t  MaxMembers;

 __declspec(property(get=get_PermissionLevel, put=set_PermissionLevel)) ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  PermissionLevel;

 __declspec(property(get=get_PresenceEnabled, put=set_PresenceEnabled)) bool  PresenceEnabled;

 __declspec(property(get=get_RTCRoomEnabled, put=set_RTCRoomEnabled)) bool  RTCRoomEnabled;

 __declspec(property(get=get_RejoinAfterKickRequiresInvite, put=set_RejoinAfterKickRequiresInvite)) bool  RejoinAfterKickRequiresInvite;

/// @brief Method get_AllowHostMigration, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowHostMigration() ;

/// @brief Method get_AllowInvites, addr 0x1804bdaf0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowInvites() ;

/// @brief Method get_AllowJoinById, addr 0x180503cc0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowJoinById() ;

/// @brief Method get_AllowedPlatformIds, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_AllowedPlatformIds() ;

/// @brief Method get_AvailableSlots, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_AvailableSlots() ;

/// @brief Method get_BucketId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_BucketId() ;

/// @brief Method get_LobbyId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_LobbyOwnerUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LobbyOwnerUserId() ;

/// @brief Method get_MaxMembers, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxMembers() ;

/// @brief Method get_PermissionLevel, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyPermissionLevel get_PermissionLevel() ;

/// @brief Method get_PresenceEnabled, addr 0x18049ec50, size 0x10, virtual false, abstract: false, final false
inline bool get_PresenceEnabled() ;

/// @brief Method get_RTCRoomEnabled, addr 0x180503cd0, size 0x10, virtual false, abstract: false, final false
inline bool get_RTCRoomEnabled() ;

/// @brief Method get_RejoinAfterKickRequiresInvite, addr 0x180503ce0, size 0x10, virtual false, abstract: false, final false
inline bool get_RejoinAfterKickRequiresInvite() ;

/// @brief Method set_AllowHostMigration, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_AllowHostMigration(bool  value) ;

/// @brief Method set_AllowInvites, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_AllowInvites(bool  value) ;

/// @brief Method set_AllowJoinById, addr 0x180503cf0, size 0x10, virtual false, abstract: false, final false
inline void set_AllowJoinById(bool  value) ;

/// @brief Method set_AllowedPlatformIds, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedPlatformIds(::ArrayW<uint32_t>  value) ;

/// @brief Method set_AvailableSlots, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_AvailableSlots(uint32_t  value) ;

/// @brief Method set_BucketId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_BucketId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LobbyId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LobbyOwnerUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyOwnerUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_MaxMembers, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_MaxMembers(uint32_t  value) ;

/// @brief Method set_PermissionLevel, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  value) ;

/// @brief Method set_PresenceEnabled, addr 0x18049ec70, size 0x10, virtual false, abstract: false, final false
inline void set_PresenceEnabled(bool  value) ;

/// @brief Method set_RTCRoomEnabled, addr 0x180503d00, size 0x10, virtual false, abstract: false, final false
inline void set_RTCRoomEnabled(bool  value) ;

/// @brief Method set_RejoinAfterKickRequiresInvite, addr 0x180503d10, size 0x10, virtual false, abstract: false, final false
inline void set_RejoinAfterKickRequiresInvite(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsInfo() ;

// Ctor Parameters [CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LobbyOwnerUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: None }, CppParam { name: "_AvailableSlots_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_MaxMembers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_AllowInvites_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_BucketId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AllowHostMigration_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_RTCRoomEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AllowJoinById_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_RejoinAfterKickRequiresInvite_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr LobbyDetailsInfo(::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LobbyOwnerUserId_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField, uint32_t  _AvailableSlots_k__BackingField, uint32_t  _MaxMembers_k__BackingField, bool  _AllowInvites_k__BackingField, ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField, bool  _AllowHostMigration_k__BackingField, bool  _RTCRoomEnabled_k__BackingField, bool  _AllowJoinById_k__BackingField, bool  _RejoinAfterKickRequiresInvite_k__BackingField, bool  _PresenceEnabled_k__BackingField, ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8533};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <LobbyId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

/// @brief Field <LobbyOwnerUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LobbyOwnerUserId_k__BackingField;

/// @brief Field <PermissionLevel>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField;

/// @brief Field <AvailableSlots>k__BackingField, offset: 0x14, size: 0x4, def value: None
 uint32_t  _AvailableSlots_k__BackingField;

/// @brief Field <MaxMembers>k__BackingField, offset: 0x18, size: 0x4, def value: None
 uint32_t  _MaxMembers_k__BackingField;

/// @brief Field <AllowInvites>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  _AllowInvites_k__BackingField;

/// @brief Field <BucketId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _BucketId_k__BackingField;

/// @brief Field <AllowHostMigration>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  _AllowHostMigration_k__BackingField;

/// @brief Field <RTCRoomEnabled>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  _RTCRoomEnabled_k__BackingField;

/// @brief Field <AllowJoinById>k__BackingField, offset: 0x2a, size: 0x1, def value: None
 bool  _AllowJoinById_k__BackingField;

/// @brief Field <RejoinAfterKickRequiresInvite>k__BackingField, offset: 0x2b, size: 0x1, def value: None
 bool  _RejoinAfterKickRequiresInvite_k__BackingField;

/// @brief Field <PresenceEnabled>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  _PresenceEnabled_k__BackingField;

/// @brief Field <AllowedPlatformIds>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _LobbyId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _LobbyOwnerUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _PermissionLevel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _AvailableSlots_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _MaxMembers_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _AllowInvites_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _BucketId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _AllowHostMigration_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _RTCRoomEnabled_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _AllowJoinById_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _RejoinAfterKickRequiresInvite_k__BackingField) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _PresenceEnabled_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo, _AllowedPlatformIds_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsInfo) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
