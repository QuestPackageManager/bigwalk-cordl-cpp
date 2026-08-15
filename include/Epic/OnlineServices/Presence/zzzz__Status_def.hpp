#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Status)
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct Status;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::Status);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::Status, "Epic.OnlineServices.Presence", "Status");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.Status
struct CORDL_TYPE Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Status_Unwrapped
enum struct __Status_Unwrapped : int32_t {
__E_Offline = static_cast<int32_t>(0x0),
__E_Online = static_cast<int32_t>(0x1),
__E_Away = static_cast<int32_t>(0x2),
__E_ExtendedAway = static_cast<int32_t>(0x3),
__E_DoNotDisturb = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Status_Unwrapped () const noexcept {
return static_cast<__Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Status(int32_t  value__) noexcept;

/// @brief Field Away value: I32(2)
static ::Epic::OnlineServices::Presence::Status const Away;

/// @brief Field DoNotDisturb value: I32(4)
static ::Epic::OnlineServices::Presence::Status const DoNotDisturb;

/// @brief Field ExtendedAway value: I32(3)
static ::Epic::OnlineServices::Presence::Status const ExtendedAway;

/// @brief Field Offline value: I32(0)
static ::Epic::OnlineServices::Presence::Status const Offline;

/// @brief Field Online value: I32(1)
static ::Epic::OnlineServices::Presence::Status const Online;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8264};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::Status, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::Status) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
