#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/JoinRoomOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JoinRoomOptions)
namespace Epic::OnlineServices::RTC {
struct JoinRoomFlags;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
struct JoinRoomOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::JoinRoomOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::JoinRoomOptions, "Epic.OnlineServices.RTC", "JoinRoomOptions");
// Dependencies Epic.OnlineServices.RTC.JoinRoomFlags
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.JoinRoomOptions
struct CORDL_TYPE JoinRoomOptions {
public:
// Declarations
 __declspec(property(get=get_ClientBaseUrl, put=set_ClientBaseUrl)) ::Epic::OnlineServices::Utf8String*  ClientBaseUrl;

 __declspec(property(get=get_Flags, put=set_Flags)) ::Epic::OnlineServices::RTC::JoinRoomFlags  Flags;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ManualAudioInputEnabled, put=set_ManualAudioInputEnabled)) bool  ManualAudioInputEnabled;

 __declspec(property(get=get_ManualAudioOutputEnabled, put=set_ManualAudioOutputEnabled)) bool  ManualAudioOutputEnabled;

 __declspec(property(get=get_ParticipantId, put=set_ParticipantId)) ::Epic::OnlineServices::ProductUserId*  ParticipantId;

 __declspec(property(get=get_ParticipantToken, put=set_ParticipantToken)) ::Epic::OnlineServices::Utf8String*  ParticipantToken;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Method get_ClientBaseUrl, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ClientBaseUrl() ;

/// @brief Method get_Flags, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTC::JoinRoomFlags get_Flags() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ManualAudioInputEnabled, addr 0x18049ec50, size 0x10, virtual false, abstract: false, final false
inline bool get_ManualAudioInputEnabled() ;

/// @brief Method get_ManualAudioOutputEnabled, addr 0x18049ec40, size 0x10, virtual false, abstract: false, final false
inline bool get_ManualAudioOutputEnabled() ;

/// @brief Method get_ParticipantId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ParticipantId() ;

/// @brief Method get_ParticipantToken, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ParticipantToken() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method set_ClientBaseUrl, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ClientBaseUrl(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Flags, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_Flags(::Epic::OnlineServices::RTC::JoinRoomFlags  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ManualAudioInputEnabled, addr 0x18049ec70, size 0x10, virtual false, abstract: false, final false
inline void set_ManualAudioInputEnabled(bool  value) ;

/// @brief Method set_ManualAudioOutputEnabled, addr 0x18049ec60, size 0x10, virtual false, abstract: false, final false
inline void set_ManualAudioOutputEnabled(bool  value) ;

/// @brief Method set_ParticipantId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantToken, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantToken(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinRoomOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ClientBaseUrl_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantToken_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::Epic::OnlineServices::RTC::JoinRoomFlags", modifiers: "", def_value: None }, CppParam { name: "_ManualAudioInputEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ManualAudioOutputEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr JoinRoomOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ClientBaseUrl_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ParticipantToken_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField, ::Epic::OnlineServices::RTC::JoinRoomFlags  _Flags_k__BackingField, bool  _ManualAudioInputEnabled_k__BackingField, bool  _ManualAudioOutputEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <ClientBaseUrl>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ClientBaseUrl_k__BackingField;

/// @brief Field <ParticipantToken>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ParticipantToken_k__BackingField;

/// @brief Field <ParticipantId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField;

/// @brief Field <Flags>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Epic::OnlineServices::RTC::JoinRoomFlags  _Flags_k__BackingField;

/// @brief Field <ManualAudioInputEnabled>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  _ManualAudioInputEnabled_k__BackingField;

/// @brief Field <ManualAudioOutputEnabled>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  _ManualAudioOutputEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _ClientBaseUrl_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _ParticipantToken_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _ParticipantId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _Flags_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _ManualAudioInputEnabled_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::JoinRoomOptions, _ManualAudioOutputEnabled_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::JoinRoomOptions) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
