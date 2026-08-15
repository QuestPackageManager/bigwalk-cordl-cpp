#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BuiltinShaderType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuiltinShaderType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BuiltinShaderType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BuiltinShaderType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::BuiltinShaderType, "UnityEngine.Rendering", "BuiltinShaderType");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BuiltinShaderType
struct CORDL_TYPE BuiltinShaderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuiltinShaderType_Unwrapped
enum struct __BuiltinShaderType_Unwrapped : int32_t {
__E_DeferredShading = static_cast<int32_t>(0x0),
__E_DeferredReflections = static_cast<int32_t>(0x1),
__E_LegacyDeferredLighting = static_cast<int32_t>(0x2),
__E_ScreenSpaceShadows = static_cast<int32_t>(0x3),
__E_DepthNormals = static_cast<int32_t>(0x4),
__E_MotionVectors = static_cast<int32_t>(0x5),
__E_LightHalo = static_cast<int32_t>(0x6),
__E_LensFlare = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuiltinShaderType_Unwrapped () const noexcept {
return static_cast<__BuiltinShaderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuiltinShaderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BuiltinShaderType(int32_t  value__) noexcept;

/// @brief Field DeferredReflections value: I32(1)
static ::UnityEngine::Rendering::BuiltinShaderType const DeferredReflections;

/// @brief Field DeferredShading value: I32(0)
static ::UnityEngine::Rendering::BuiltinShaderType const DeferredShading;

/// @brief Field DepthNormals value: I32(4)
static ::UnityEngine::Rendering::BuiltinShaderType const DepthNormals;

/// @brief Field LegacyDeferredLighting value: I32(2)
static ::UnityEngine::Rendering::BuiltinShaderType const LegacyDeferredLighting;

/// @brief Field LensFlare value: I32(7)
static ::UnityEngine::Rendering::BuiltinShaderType const LensFlare;

/// @brief Field LightHalo value: I32(6)
static ::UnityEngine::Rendering::BuiltinShaderType const LightHalo;

/// @brief Field MotionVectors value: I32(5)
static ::UnityEngine::Rendering::BuiltinShaderType const MotionVectors;

/// @brief Field ScreenSpaceShadows value: I32(3)
static ::UnityEngine::Rendering::BuiltinShaderType const ScreenSpaceShadows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11131};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BuiltinShaderType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::BuiltinShaderType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
