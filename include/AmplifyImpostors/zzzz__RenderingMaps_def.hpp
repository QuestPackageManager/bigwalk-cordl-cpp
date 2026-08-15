#pragma once
// IWYU pragma private; include "AmplifyImpostors/RenderingMaps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingMaps)
// Forward declare root types
namespace AmplifyImpostors {
struct RenderingMaps;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::RenderingMaps);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::RenderingMaps, "AmplifyImpostors", "RenderingMaps");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.RenderingMaps
struct CORDL_TYPE RenderingMaps {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderingMaps_Unwrapped
enum struct __RenderingMaps_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x0),
__E_Custom = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingMaps_Unwrapped () const noexcept {
return static_cast<__RenderingMaps_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderingMaps() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderingMaps(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(1)
static ::AmplifyImpostors::RenderingMaps const Custom;

/// @brief Field Standard value: I32(0)
static ::AmplifyImpostors::RenderingMaps const Standard;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::RenderingMaps, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::RenderingMaps) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
