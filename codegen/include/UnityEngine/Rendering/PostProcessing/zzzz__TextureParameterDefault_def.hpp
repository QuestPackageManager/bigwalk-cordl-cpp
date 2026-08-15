#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureParameterDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureParameterDefault)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct TextureParameterDefault;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::TextureParameterDefault);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TextureParameterDefault, "UnityEngine.Rendering.PostProcessing", "TextureParameterDefault");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.TextureParameterDefault
struct CORDL_TYPE TextureParameterDefault {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TextureParameterDefault_Unwrapped
enum struct __TextureParameterDefault_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Black = static_cast<int32_t>(0x1),
__E_White = static_cast<int32_t>(0x2),
__E_Transparent = static_cast<int32_t>(0x3),
__E_Lut2D = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureParameterDefault_Unwrapped () const noexcept {
return static_cast<__TextureParameterDefault_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TextureParameterDefault() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureParameterDefault(int32_t  value__) noexcept;

/// @brief Field Black value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const Black;

/// @brief Field Lut2D value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const Lut2D;

/// @brief Field None value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const None;

/// @brief Field Transparent value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const Transparent;

/// @brief Field White value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault const White;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureParameterDefault, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TextureParameterDefault) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
