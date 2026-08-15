#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightUnitUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightUnitUtils)
namespace UnityEngine::Rendering {
struct LightUnit;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LightUnitUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LightUnitUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LightUnitUtils*, "UnityEngine.Rendering", "LightUnitUtils");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LightUnitUtils
class CORDL_TYPE LightUnitUtils : public ::System::Object {
public:
// Declarations
/// @brief Method CandelaToEv100, addr 0x18204a730, size 0x70, virtual false, abstract: false, final false
static inline float_t CandelaToEv100(float_t  candela) ;

/// @brief Method CandelaToLumen, addr 0x181ee5f90, size 0x10, virtual false, abstract: false, final false
static inline float_t CandelaToLumen(float_t  candela, float_t  solidAngle) ;

/// @brief Method CandelaToLux, addr 0x18204a7a0, size 0x10, virtual false, abstract: false, final false
static inline float_t CandelaToLux(float_t  candela, float_t  distance) ;

/// @brief Method ConvertIntensity, addr 0x18204ae90, size 0x1e0, virtual false, abstract: false, final false
static inline float_t ConvertIntensity(::UnityEngine::Light*  light, float_t  intensity, ::UnityEngine::Rendering::LightUnit  fromUnit, ::UnityEngine::Rendering::LightUnit  toUnit) ;

/// @brief Method ConvertIntensityInternal, addr 0x18204a7b0, size 0x6e0, virtual false, abstract: false, final false
static inline float_t ConvertIntensityInternal(float_t  intensity, ::UnityEngine::Rendering::LightUnit  fromUnit, ::UnityEngine::Rendering::LightUnit  toUnit, ::UnityEngine::LightType  lightType, float_t  area, float_t  luxAtDistance, float_t  solidAngle) ;

/// @brief Method Ev100ToCandela, addr 0x18204b070, size 0x70, virtual false, abstract: false, final false
static inline float_t Ev100ToCandela(float_t  ev100) ;

/// @brief Method Ev100ToNits, addr 0x18204b070, size 0x70, virtual false, abstract: false, final false
static inline float_t Ev100ToNits(float_t  ev100) ;

/// @brief Method GetAreaFromDiscLight, addr 0x18204b0e0, size 0x20, virtual false, abstract: false, final false
static inline float_t GetAreaFromDiscLight(float_t  discRadius) ;

/// @brief Method GetAreaFromRectangleLight, addr 0x18204b120, size 0x30, virtual false, abstract: false, final false
static inline float_t GetAreaFromRectangleLight(::UnityEngine::Vector2  rectSize) ;

/// @brief Method GetAreaFromRectangleLight, addr 0x18204b100, size 0x20, virtual false, abstract: false, final false
static inline float_t GetAreaFromRectangleLight(float_t  rectSizeX, float_t  rectSizeY) ;

/// @brief Method GetAreaFromTubeLight, addr 0x18204b150, size 0x20, virtual false, abstract: false, final false
static inline float_t GetAreaFromTubeLight(float_t  tubeLength) ;

/// @brief Method GetNativeLightUnit, addr 0x18204b170, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LightUnit GetNativeLightUnit(::UnityEngine::LightType  lightType) ;

/// @brief Method GetSolidAngle, addr 0x18204b300, size 0x1a0, virtual false, abstract: false, final false
static inline float_t GetSolidAngle(::UnityEngine::LightType  lightType, bool  spotReflector, float_t  spotAngle, float_t  aspectRatio) ;

/// @brief Method GetSolidAngleFromPointLight, addr 0x18204b1e0, size 0x10, virtual false, abstract: false, final false
static inline float_t GetSolidAngleFromPointLight() ;

/// @brief Method GetSolidAngleFromPyramidLight, addr 0x18204b1f0, size 0xc0, virtual false, abstract: false, final false
static inline float_t GetSolidAngleFromPyramidLight(float_t  spotAngle, float_t  aspectRatio) ;

/// @brief Method GetSolidAngleFromSpotLight, addr 0x18204b2b0, size 0x50, virtual false, abstract: false, final false
static inline float_t GetSolidAngleFromSpotLight(float_t  spotAngle) ;

/// @brief Method IsLightUnitSupported, addr 0x18204b4a0, size 0x70, virtual false, abstract: false, final false
static inline bool IsLightUnitSupported(::UnityEngine::LightType  lightType, ::UnityEngine::Rendering::LightUnit  lightUnit) ;

/// @brief Method LumenToCandela, addr 0x18204b510, size 0x10, virtual false, abstract: false, final false
static inline float_t LumenToCandela(float_t  lumen, float_t  solidAngle) ;

/// @brief Method LumenToNits, addr 0x18204b510, size 0x10, virtual false, abstract: false, final false
static inline float_t LumenToNits(float_t  lumen, float_t  area) ;

/// @brief Method LuxToCandela, addr 0x18204b520, size 0x10, virtual false, abstract: false, final false
static inline float_t LuxToCandela(float_t  lux, float_t  distance) ;

/// @brief Method NitsToEv100, addr 0x18204a730, size 0x70, virtual false, abstract: false, final false
static inline float_t NitsToEv100(float_t  nits) ;

/// @brief Method NitsToLumen, addr 0x181ee5f90, size 0x10, virtual false, abstract: false, final false
static inline float_t NitsToLumen(float_t  nits, float_t  area) ;

/// @brief Method get_k_EvToLuminanceFactor, addr 0x18204b530, size 0x50, virtual false, abstract: false, final false
static inline float_t get_k_EvToLuminanceFactor() ;

/// @brief Method get_k_LuminanceToEvFactor, addr 0x18204b580, size 0x40, virtual false, abstract: false, final false
static inline float_t get_k_LuminanceToEvFactor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightUnitUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightUnitUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightUnitUtils(LightUnitUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightUnitUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightUnitUtils(LightUnitUtils const& ) = delete;

/// @brief Field SphereSolidAngle offset 0xffffffff size 0x4
static constexpr float_t  SphereSolidAngle{static_cast<float_t>(12.566371f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7124};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LightUnitUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
