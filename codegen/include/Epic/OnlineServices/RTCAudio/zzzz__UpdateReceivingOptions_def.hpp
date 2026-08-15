#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UpdateReceivingOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateReceivingOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct UpdateReceivingOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions, "Epic.OnlineServices.RTCAudio", "UpdateReceivingOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.UpdateReceivingOptions
struct CORDL_TYPE UpdateReceivingOptions {
public:
// Declarations
 __declspec(property(get=get_AudioEnabled, put=set_AudioEnabled)) bool  AudioEnabled;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ParticipantId, put=set_ParticipantId)) ::Epic::OnlineServices::ProductUserId*  ParticipantId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Method get_AudioEnabled, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_AudioEnabled() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParticipantId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ParticipantId() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method set_AudioEnabled, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_AudioEnabled(bool  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateReceivingOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AudioEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr UpdateReceivingOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField, bool  _AudioEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <ParticipantId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField;

/// @brief Field <AudioEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  _AudioEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions, _ParticipantId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions, _AudioEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
