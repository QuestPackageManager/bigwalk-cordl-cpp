#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OwnershipStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnershipStatus)
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
struct OwnershipStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::OwnershipStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::OwnershipStatus, "Epic.OnlineServices.Ecom", "OwnershipStatus");
// Dependencies 
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.OwnershipStatus
struct CORDL_TYPE OwnershipStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OwnershipStatus_Unwrapped
enum struct __OwnershipStatus_Unwrapped : int32_t {
__E_NotOwned = static_cast<int32_t>(0x0),
__E_Owned = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OwnershipStatus_Unwrapped () const noexcept {
return static_cast<__OwnershipStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OwnershipStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OwnershipStatus(int32_t  value__) noexcept;

/// @brief Field NotOwned value: I32(0)
static ::Epic::OnlineServices::Ecom::OwnershipStatus const NotOwned;

/// @brief Field Owned value: I32(1)
static ::Epic::OnlineServices::Ecom::OwnershipStatus const Owned;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::OwnershipStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::OwnershipStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
