#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowMapPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowMapPass)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowMapPass;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowMapPass);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadowMapPass, "UnityEngine.Rendering", "ShadowMapPass");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadowMapPass
struct CORDL_TYPE ShadowMapPass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShadowMapPass_Unwrapped
enum struct __ShadowMapPass_Unwrapped : int32_t {
__E_PointlightPositiveX = static_cast<int32_t>(0x1),
__E_PointlightNegativeX = static_cast<int32_t>(0x2),
__E_PointlightPositiveY = static_cast<int32_t>(0x4),
__E_PointlightNegativeY = static_cast<int32_t>(0x8),
__E_PointlightPositiveZ = static_cast<int32_t>(0x10),
__E_PointlightNegativeZ = static_cast<int32_t>(0x20),
__E_DirectionalCascade0 = static_cast<int32_t>(0x40),
__E_DirectionalCascade1 = static_cast<int32_t>(0x80),
__E_DirectionalCascade2 = static_cast<int32_t>(0x100),
__E_DirectionalCascade3 = static_cast<int32_t>(0x200),
__E_Spotlight = static_cast<int32_t>(0x400),
__E_AreaLight = static_cast<int32_t>(0x800),
__E_Pointlight = static_cast<int32_t>(0x3f),
__E_Directional = static_cast<int32_t>(0x3c0),
__E_All = static_cast<int32_t>(0x7ff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowMapPass_Unwrapped () const noexcept {
return static_cast<__ShadowMapPass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShadowMapPass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShadowMapPass(int32_t  value__) noexcept;

/// @brief Field All value: I32(2047)
static ::UnityEngine::Rendering::ShadowMapPass const All;

/// @brief Field AreaLight value: I32(2048)
static ::UnityEngine::Rendering::ShadowMapPass const AreaLight;

/// @brief Field Directional value: I32(960)
static ::UnityEngine::Rendering::ShadowMapPass const Directional;

/// @brief Field DirectionalCascade0 value: I32(64)
static ::UnityEngine::Rendering::ShadowMapPass const DirectionalCascade0;

/// @brief Field DirectionalCascade1 value: I32(128)
static ::UnityEngine::Rendering::ShadowMapPass const DirectionalCascade1;

/// @brief Field DirectionalCascade2 value: I32(256)
static ::UnityEngine::Rendering::ShadowMapPass const DirectionalCascade2;

/// @brief Field DirectionalCascade3 value: I32(512)
static ::UnityEngine::Rendering::ShadowMapPass const DirectionalCascade3;

/// @brief Field Pointlight value: I32(63)
static ::UnityEngine::Rendering::ShadowMapPass const Pointlight;

/// @brief Field PointlightNegativeX value: I32(2)
static ::UnityEngine::Rendering::ShadowMapPass const PointlightNegativeX;

/// @brief Field PointlightNegativeY value: I32(8)
static ::UnityEngine::Rendering::ShadowMapPass const PointlightNegativeY;

/// @brief Field PointlightNegativeZ value: I32(32)
static ::UnityEngine::Rendering::ShadowMapPass const PointlightNegativeZ;

/// @brief Field PointlightPositiveX value: I32(1)
static ::UnityEngine::Rendering::ShadowMapPass const PointlightPositiveX;

/// @brief Field PointlightPositiveY value: I32(4)
static ::UnityEngine::Rendering::ShadowMapPass const PointlightPositiveY;

/// @brief Field PointlightPositiveZ value: I32(16)
static ::UnityEngine::Rendering::ShadowMapPass const PointlightPositiveZ;

/// @brief Field Spotlight value: I32(1024)
static ::UnityEngine::Rendering::ShadowMapPass const Spotlight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadowMapPass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShadowMapPass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
