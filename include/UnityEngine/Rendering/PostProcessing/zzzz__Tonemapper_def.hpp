#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Tonemapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tonemapper)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct Tonemapper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::Tonemapper);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Tonemapper, "UnityEngine.Rendering.PostProcessing", "Tonemapper");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.Tonemapper
struct CORDL_TYPE Tonemapper {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Tonemapper_Unwrapped
enum struct __Tonemapper_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Neutral = static_cast<int32_t>(0x1),
__E_ACES = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Tonemapper_Unwrapped () const noexcept {
return static_cast<__Tonemapper_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Tonemapper() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Tonemapper(int32_t  value__) noexcept;

/// @brief Field ACES value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::Tonemapper const ACES;

/// @brief Field Custom value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::Tonemapper const Custom;

/// @brief Field Neutral value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::Tonemapper const Neutral;

/// @brief Field None value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::Tonemapper const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Tonemapper, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Tonemapper) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
