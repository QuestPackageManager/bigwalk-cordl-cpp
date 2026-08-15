#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModEnumerationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModEnumerationType)
// Forward declare root types
namespace Epic::OnlineServices::Mods {
struct ModEnumerationType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Mods::ModEnumerationType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::ModEnumerationType, "Epic.OnlineServices.Mods", "ModEnumerationType");
// Dependencies 
namespace Epic::OnlineServices::Mods {
// Is value type: true
// CS Name: Epic.OnlineServices.Mods.ModEnumerationType
struct CORDL_TYPE ModEnumerationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModEnumerationType_Unwrapped
enum struct __ModEnumerationType_Unwrapped : int32_t {
__E_Installed = static_cast<int32_t>(0x0),
__E_AllAvailable = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModEnumerationType_Unwrapped () const noexcept {
return static_cast<__ModEnumerationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModEnumerationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ModEnumerationType(int32_t  value__) noexcept;

/// @brief Field AllAvailable value: I32(1)
static ::Epic::OnlineServices::Mods::ModEnumerationType const AllAvailable;

/// @brief Field Installed value: I32(0)
static ::Epic::OnlineServices::Mods::ModEnumerationType const Installed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Mods::ModEnumerationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Mods::ModEnumerationType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
