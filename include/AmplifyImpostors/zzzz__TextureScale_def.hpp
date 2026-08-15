#pragma once
// IWYU pragma private; include "AmplifyImpostors/TextureScale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureScale)
// Forward declare root types
namespace AmplifyImpostors {
struct TextureScale;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::TextureScale);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::TextureScale, "AmplifyImpostors", "TextureScale");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.TextureScale
struct CORDL_TYPE TextureScale {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureScale_Unwrapped
enum struct __TextureScale_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x1),
__E_Half = static_cast<int32_t>(0x2),
__E_Quarter = static_cast<int32_t>(0x4),
__E_Eighth = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureScale_Unwrapped () const noexcept {
return static_cast<__TextureScale_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureScale() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureScale(int32_t  value__) noexcept;

/// @brief Field Eighth value: I32(8)
static ::AmplifyImpostors::TextureScale const Eighth;

/// @brief Field Full value: I32(1)
static ::AmplifyImpostors::TextureScale const Full;

/// @brief Field Half value: I32(2)
static ::AmplifyImpostors::TextureScale const Half;

/// @brief Field Quarter value: I32(4)
static ::AmplifyImpostors::TextureScale const Quarter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::TextureScale, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::TextureScale) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
