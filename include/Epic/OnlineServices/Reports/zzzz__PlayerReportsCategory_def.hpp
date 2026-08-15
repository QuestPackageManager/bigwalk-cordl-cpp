#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/PlayerReportsCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerReportsCategory)
// Forward declare root types
namespace Epic::OnlineServices::Reports {
struct PlayerReportsCategory;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Reports::PlayerReportsCategory);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Reports::PlayerReportsCategory, "Epic.OnlineServices.Reports", "PlayerReportsCategory");
// Dependencies 
namespace Epic::OnlineServices::Reports {
// Is value type: true
// CS Name: Epic.OnlineServices.Reports.PlayerReportsCategory
struct CORDL_TYPE PlayerReportsCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerReportsCategory_Unwrapped
enum struct __PlayerReportsCategory_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Cheating = static_cast<int32_t>(0x1),
__E_Exploiting = static_cast<int32_t>(0x2),
__E_OffensiveProfile = static_cast<int32_t>(0x3),
__E_VerbalAbuse = static_cast<int32_t>(0x4),
__E_Scamming = static_cast<int32_t>(0x5),
__E_Spamming = static_cast<int32_t>(0x6),
__E_Other = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerReportsCategory_Unwrapped () const noexcept {
return static_cast<__PlayerReportsCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerReportsCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerReportsCategory(int32_t  value__) noexcept;

/// @brief Field Cheating value: I32(1)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const Cheating;

/// @brief Field Exploiting value: I32(2)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const Exploiting;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const Invalid;

/// @brief Field OffensiveProfile value: I32(3)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const OffensiveProfile;

/// @brief Field Other value: I32(7)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const Other;

/// @brief Field Scamming value: I32(5)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const Scamming;

/// @brief Field Spamming value: I32(6)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const Spamming;

/// @brief Field VerbalAbuse value: I32(4)
static ::Epic::OnlineServices::Reports::PlayerReportsCategory const VerbalAbuse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7897};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Reports::PlayerReportsCategory, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Reports::PlayerReportsCategory) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Reports
