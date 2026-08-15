#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/VignetteMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VignetteMode)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct VignetteMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::VignetteMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::VignetteMode, "UnityEngine.Rendering.PostProcessing", "VignetteMode");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.VignetteMode
struct CORDL_TYPE VignetteMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VignetteMode_Unwrapped
enum struct __VignetteMode_Unwrapped : int32_t {
__E_Classic = static_cast<int32_t>(0x0),
__E_Masked = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VignetteMode_Unwrapped () const noexcept {
return static_cast<__VignetteMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VignetteMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VignetteMode(int32_t  value__) noexcept;

/// @brief Field Classic value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::VignetteMode const Classic;

/// @brief Field Masked value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::VignetteMode const Masked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::VignetteMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::VignetteMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
