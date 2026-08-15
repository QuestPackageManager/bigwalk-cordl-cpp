#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UpdateSendingOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTCAudio/zzzz__RTCAudioStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateSendingOptions)
namespace Epic::OnlineServices::RTCAudio {
struct RTCAudioStatus;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct UpdateSendingOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions, "Epic.OnlineServices.RTCAudio", "UpdateSendingOptions");
// Dependencies Epic.OnlineServices.RTCAudio.RTCAudioStatus
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.UpdateSendingOptions
struct CORDL_TYPE UpdateSendingOptions {
public:
// Declarations
 __declspec(property(get=get_AudioStatus, put=set_AudioStatus)) ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  AudioStatus;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Method get_AudioStatus, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTCAudio::RTCAudioStatus get_AudioStatus() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method set_AudioStatus, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateSendingOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_AudioStatus_k__BackingField", ty: "::Epic::OnlineServices::RTCAudio::RTCAudioStatus", modifiers: "", def_value: None }]
constexpr UpdateSendingOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  _AudioStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <AudioStatus>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::RTCAudio::RTCAudioStatus  _AudioStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions, _AudioStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
