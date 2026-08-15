#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/QueryJoinRoomTokenOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(QueryJoinRoomTokenOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions, "Epic.OnlineServices.RTCAdmin", "QueryJoinRoomTokenOptions");
// Dependencies Epic.OnlineServices.ProductUserId
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAdmin.QueryJoinRoomTokenOptions
struct CORDL_TYPE QueryJoinRoomTokenOptions {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

 __declspec(property(get=get_TargetUserIds, put=set_TargetUserIds)) ::ArrayW<::Epic::OnlineServices::ProductUserId*>  TargetUserIds;

 __declspec(property(get=get_TargetUserIpAddresses, put=set_TargetUserIpAddresses)) ::Epic::OnlineServices::Utf8String*  TargetUserIpAddresses;

/// @brief Method get_LocalUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_RoomName, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Method get_TargetUserIds, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::ProductUserId*> get_TargetUserIds() ;

/// @brief Method get_TargetUserIpAddresses, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TargetUserIpAddresses() ;

/// @brief Method set_LocalUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TargetUserIds, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_TargetUserIds(::ArrayW<::Epic::OnlineServices::ProductUserId*>  value) ;

/// @brief Method set_TargetUserIpAddresses, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserIpAddresses(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryJoinRoomTokenOptions() ;

// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::ProductUserId*>", modifiers: "", def_value: None }, CppParam { name: "_TargetUserIpAddresses_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr QueryJoinRoomTokenOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _TargetUserIds_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TargetUserIpAddresses_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <LocalUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <TargetUserIds>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::ProductUserId*>  _TargetUserIds_k__BackingField;

/// @brief Field <TargetUserIpAddresses>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TargetUserIpAddresses_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions, _LocalUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions, _RoomName_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions, _TargetUserIds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions, _TargetUserIpAddresses_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
