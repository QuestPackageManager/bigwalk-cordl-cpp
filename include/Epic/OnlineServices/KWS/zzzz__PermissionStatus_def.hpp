#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/PermissionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PermissionStatus)
namespace Epic::OnlineServices::KWS {
struct KWSPermissionStatus;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
struct PermissionStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::PermissionStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::PermissionStatus, "Epic.OnlineServices.KWS", "PermissionStatus");
// Dependencies Epic.OnlineServices.KWS.KWSPermissionStatus
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.PermissionStatus
struct CORDL_TYPE PermissionStatus {
public:
// Declarations
 __declspec(property(get=get_Name, put=set_Name)) ::Epic::OnlineServices::Utf8String*  Name;

 __declspec(property(get=get_Status, put=set_Status)) ::Epic::OnlineServices::KWS::KWSPermissionStatus  Status;

/// @brief Method get_Name, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Name() ;

/// @brief Method get_Status, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::KWS::KWSPermissionStatus get_Status() ;

/// @brief Method set_Name, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Name(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Status, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Status(::Epic::OnlineServices::KWS::KWSPermissionStatus  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PermissionStatus() ;

// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Status_k__BackingField", ty: "::Epic::OnlineServices::KWS::KWSPermissionStatus", modifiers: "", def_value: None }]
constexpr PermissionStatus(::Epic::OnlineServices::Utf8String*  _Name_k__BackingField, ::Epic::OnlineServices::KWS::KWSPermissionStatus  _Status_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8777};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Name>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Name_k__BackingField;

/// @brief Field <Status>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::KWS::KWSPermissionStatus  _Status_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionStatus, _Name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionStatus, _Status_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::PermissionStatus) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
