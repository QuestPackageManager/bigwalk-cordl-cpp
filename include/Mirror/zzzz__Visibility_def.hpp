#pragma once
// IWYU pragma private; include "Mirror/Visibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Visibility)
// Forward declare root types
namespace Mirror {
struct Visibility;
}
// Write type traits
MARK_VAL_T(::Mirror::Visibility);
DEFINE_IL2CPP_CLASS(::Mirror::Visibility, "Mirror", "Visibility");
// Dependencies 
namespace Mirror {
// Is value type: true
// CS Name: Mirror.Visibility
struct CORDL_TYPE Visibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Visibility_Unwrapped
enum struct __Visibility_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_ForceHidden = static_cast<int32_t>(0x1),
__E_ForceShown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Visibility_Unwrapped () const noexcept {
return static_cast<__Visibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Visibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Visibility(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::Mirror::Visibility const Default;

/// @brief Field ForceHidden value: I32(1)
static ::Mirror::Visibility const ForceHidden;

/// @brief Field ForceShown value: I32(2)
static ::Mirror::Visibility const ForceShown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Visibility, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mirror::Visibility) == 0x4, "Size mismatch!");

} // namespace end def Mirror
