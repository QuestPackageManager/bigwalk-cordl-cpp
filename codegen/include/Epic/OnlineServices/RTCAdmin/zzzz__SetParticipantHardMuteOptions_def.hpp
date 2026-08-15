#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/SetParticipantHardMuteOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SetParticipantHardMuteOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct SetParticipantHardMuteOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions, "Epic.OnlineServices.RTCAdmin", "SetParticipantHardMuteOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.SetParticipantHardMuteOptions
struct CORDL_TYPE SetParticipantHardMuteOptions {
public:
// Declarations
 __declspec(property(get=get_Mute, put=set_Mute)) bool  Mute;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_Mute, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_Mute() ;

/// @brief Method get_RoomName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method get_TargetUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_Mute, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_Mute(bool  value) ;

/// @brief Method set_RoomName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetParticipantHardMuteOptions() ;

// Ctor Parameters [CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Mute_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SetParticipantHardMuteOptions(::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, bool  _Mute_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <RoomName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <Mute>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _Mute_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions, _RoomName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions, _TargetUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions, _Mute_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
