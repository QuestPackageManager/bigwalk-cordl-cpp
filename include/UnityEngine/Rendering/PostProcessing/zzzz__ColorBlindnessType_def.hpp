#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorBlindnessType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorBlindnessType)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct ColorBlindnessType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::ColorBlindnessType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ColorBlindnessType, "UnityEngine.Rendering.PostProcessing", "ColorBlindnessType");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.ColorBlindnessType
struct CORDL_TYPE ColorBlindnessType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorBlindnessType_Unwrapped
enum struct __ColorBlindnessType_Unwrapped : int32_t {
__E_Deuteranopia = static_cast<int32_t>(0x0),
__E_Protanopia = static_cast<int32_t>(0x1),
__E_Tritanopia = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorBlindnessType_Unwrapped () const noexcept {
return static_cast<__ColorBlindnessType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorBlindnessType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorBlindnessType(int32_t  value__) noexcept;

/// @brief Field Deuteranopia value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType const Deuteranopia;

/// @brief Field Protanopia value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType const Protanopia;

/// @brief Field Tritanopia value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType const Tritanopia;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorBlindnessType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ColorBlindnessType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
