#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/UpdateSendingOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateSendingOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCData {
struct UpdateSendingOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCData::UpdateSendingOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::UpdateSendingOptions, "Epic.OnlineServices.RTCData", "UpdateSendingOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCData {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCData.UpdateSendingOptions
struct CORDL_TYPE UpdateSendingOptions {
public:
// Declarations
 __declspec(property(get=get_DataEnabled, put=set_DataEnabled)) bool  DataEnabled;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Method get_DataEnabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_DataEnabled() ;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method set_DataEnabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_DataEnabled(bool  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateSendingOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DataEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr UpdateSendingOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, bool  _DataEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7933};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <DataEnabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _DataEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateSendingOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateSendingOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateSendingOptions, _DataEnabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCData::UpdateSendingOptions) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
