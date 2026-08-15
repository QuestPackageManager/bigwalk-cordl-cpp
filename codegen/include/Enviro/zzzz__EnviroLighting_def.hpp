#pragma once
// IWYU pragma private; include "Enviro/EnviroLighting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__AmbientMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroLighting)
namespace Enviro {
struct EnviroLighting_LightingMode;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Gradient;
}
// Forward declare root types
namespace Enviro {
struct EnviroLighting_LightingMode;
}
namespace Enviro {
class EnviroLighting;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroLighting_LightingMode);
MARK_REF_T(::Enviro::EnviroLighting*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLighting_LightingMode, "Enviro", "EnviroLighting/LightingMode");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLighting*, "Enviro", "EnviroLighting");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroLighting/LightingMode
struct CORDL_TYPE EnviroLighting_LightingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroLighting_LightingMode_Unwrapped
enum struct __EnviroLighting_LightingMode_Unwrapped : int32_t {
__E_Single = static_cast<int32_t>(0x0),
__E_Dual = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroLighting_LightingMode_Unwrapped () const noexcept {
return static_cast<__EnviroLighting_LightingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroLighting_LightingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroLighting_LightingMode(int32_t  value__) noexcept;

/// @brief Field Dual value: I32(1)
static ::Enviro::EnviroLighting_LightingMode const Dual;

/// @brief Field Single value: I32(0)
static ::Enviro::EnviroLighting_LightingMode const Single;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18460};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLighting_LightingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLighting_LightingMode) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroLighting::LightingMode, System.Object, UnityEngine.Rendering.AmbientMode
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLighting
class CORDL_TYPE EnviroLighting : public ::System::Object {
public:
// Declarations
using LightingMode = ::Enviro::EnviroLighting_LightingMode;

/// @brief Field ambientColorTintHDRP, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientColorTintHDRP, put=__cordl_internal_set_ambientColorTintHDRP)) ::UnityEngine::Gradient*  ambientColorTintHDRP;

/// @brief Field ambientEquatorColorGradient, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientEquatorColorGradient, put=__cordl_internal_set_ambientEquatorColorGradient)) ::UnityEngine::Gradient*  ambientEquatorColorGradient;

/// @brief Field ambientGroundColorGradient, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientGroundColorGradient, put=__cordl_internal_set_ambientGroundColorGradient)) ::UnityEngine::Gradient*  ambientGroundColorGradient;

/// @brief Field ambientIntensityCurve, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientIntensityCurve, put=__cordl_internal_set_ambientIntensityCurve)) ::UnityEngine::AnimationCurve*  ambientIntensityCurve;

/// @brief Field ambientIntensityModifier, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientIntensityModifier, put=__cordl_internal_set_ambientIntensityModifier)) float_t  ambientIntensityModifier;

/// @brief Field ambientMode, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientMode, put=__cordl_internal_set_ambientMode)) ::UnityEngine::Rendering::AmbientMode  ambientMode;

/// @brief Field ambientSkyColorGradient, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientSkyColorGradient, put=__cordl_internal_set_ambientSkyColorGradient)) ::UnityEngine::Gradient*  ambientSkyColorGradient;

/// @brief Field ambientUpdateEveryFrame, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_ambientUpdateEveryFrame, put=__cordl_internal_set_ambientUpdateEveryFrame)) bool  ambientUpdateEveryFrame;

/// @brief Field ambientUpdateIntervall, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientUpdateIntervall, put=__cordl_internal_set_ambientUpdateIntervall)) float_t  ambientUpdateIntervall;

/// @brief Field controlExposure, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_controlExposure, put=__cordl_internal_set_controlExposure)) bool  controlExposure;

/// @brief Field controlIndirectLighting, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_controlIndirectLighting, put=__cordl_internal_set_controlIndirectLighting)) bool  controlIndirectLighting;

/// @brief Field diffuseIndirectIntensity, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_diffuseIndirectIntensity, put=__cordl_internal_set_diffuseIndirectIntensity)) ::UnityEngine::AnimationCurve*  diffuseIndirectIntensity;

/// @brief Field directLightIntensityModifier, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_directLightIntensityModifier, put=__cordl_internal_set_directLightIntensityModifier)) float_t  directLightIntensityModifier;

/// @brief Field lightColorTemperatureHDRP, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightColorTemperatureHDRP, put=__cordl_internal_set_lightColorTemperatureHDRP)) ::UnityEngine::AnimationCurve*  lightColorTemperatureHDRP;

/// @brief Field lightIntensityHDRP, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightIntensityHDRP, put=__cordl_internal_set_lightIntensityHDRP)) float_t  lightIntensityHDRP;

/// @brief Field lightingMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightingMode, put=__cordl_internal_set_lightingMode)) ::Enviro::EnviroLighting_LightingMode  lightingMode;

/// @brief Field moonColorGradient, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonColorGradient, put=__cordl_internal_set_moonColorGradient)) ::UnityEngine::Gradient*  moonColorGradient;

/// @brief Field moonIntensityCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonIntensityCurve, put=__cordl_internal_set_moonIntensityCurve)) ::UnityEngine::AnimationCurve*  moonIntensityCurve;

/// @brief Field moonIntensityCurveHDRP, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonIntensityCurveHDRP, put=__cordl_internal_set_moonIntensityCurveHDRP)) ::UnityEngine::AnimationCurve*  moonIntensityCurveHDRP;

/// @brief Field reflectionIndirectIntensity, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_reflectionIndirectIntensity, put=__cordl_internal_set_reflectionIndirectIntensity)) ::UnityEngine::AnimationCurve*  reflectionIndirectIntensity;

/// @brief Field sceneExposure, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneExposure, put=__cordl_internal_set_sceneExposure)) ::UnityEngine::AnimationCurve*  sceneExposure;

/// @brief Field setAmbientLighting, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_setAmbientLighting, put=__cordl_internal_set_setAmbientLighting)) bool  setAmbientLighting;

/// @brief Field setDirectLighting, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_setDirectLighting, put=__cordl_internal_set_setDirectLighting)) bool  setDirectLighting;

/// @brief Field shadowIntensity, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowIntensity, put=__cordl_internal_set_shadowIntensity)) float_t  shadowIntensity;

/// @brief Field sunColorGradient, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunColorGradient, put=__cordl_internal_set_sunColorGradient)) ::UnityEngine::Gradient*  sunColorGradient;

/// @brief Field sunIntensityCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunIntensityCurve, put=__cordl_internal_set_sunIntensityCurve)) ::UnityEngine::AnimationCurve*  sunIntensityCurve;

/// @brief Field sunIntensityCurveHDRP, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunIntensityCurveHDRP, put=__cordl_internal_set_sunIntensityCurveHDRP)) ::UnityEngine::AnimationCurve*  sunIntensityCurveHDRP;

/// @brief Field updateIntervallFrames, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateIntervallFrames, put=__cordl_internal_set_updateIntervallFrames)) int32_t  updateIntervallFrames;

static inline ::Enviro::EnviroLighting* New_ctor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientColorTintHDRP() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientColorTintHDRP() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientEquatorColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientEquatorColorGradient() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientGroundColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientGroundColorGradient() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_ambientIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_ambientIntensityCurve() ;

constexpr float_t const& __cordl_internal_get_ambientIntensityModifier() const;

constexpr float_t& __cordl_internal_get_ambientIntensityModifier() ;

constexpr ::UnityEngine::Rendering::AmbientMode const& __cordl_internal_get_ambientMode() const;

constexpr ::UnityEngine::Rendering::AmbientMode& __cordl_internal_get_ambientMode() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientSkyColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientSkyColorGradient() ;

constexpr bool const& __cordl_internal_get_ambientUpdateEveryFrame() const;

constexpr bool& __cordl_internal_get_ambientUpdateEveryFrame() ;

constexpr float_t const& __cordl_internal_get_ambientUpdateIntervall() const;

constexpr float_t& __cordl_internal_get_ambientUpdateIntervall() ;

constexpr bool const& __cordl_internal_get_controlExposure() const;

constexpr bool& __cordl_internal_get_controlExposure() ;

constexpr bool const& __cordl_internal_get_controlIndirectLighting() const;

constexpr bool& __cordl_internal_get_controlIndirectLighting() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_diffuseIndirectIntensity() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_diffuseIndirectIntensity() ;

constexpr float_t const& __cordl_internal_get_directLightIntensityModifier() const;

constexpr float_t& __cordl_internal_get_directLightIntensityModifier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lightColorTemperatureHDRP() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lightColorTemperatureHDRP() ;

constexpr float_t const& __cordl_internal_get_lightIntensityHDRP() const;

constexpr float_t& __cordl_internal_get_lightIntensityHDRP() ;

constexpr ::Enviro::EnviroLighting_LightingMode const& __cordl_internal_get_lightingMode() const;

constexpr ::Enviro::EnviroLighting_LightingMode& __cordl_internal_get_lightingMode() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_moonColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_moonColorGradient() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_moonIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_moonIntensityCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_moonIntensityCurveHDRP() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_moonIntensityCurveHDRP() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_reflectionIndirectIntensity() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_reflectionIndirectIntensity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_sceneExposure() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_sceneExposure() ;

constexpr bool const& __cordl_internal_get_setAmbientLighting() const;

constexpr bool& __cordl_internal_get_setAmbientLighting() ;

constexpr bool const& __cordl_internal_get_setDirectLighting() const;

constexpr bool& __cordl_internal_get_setDirectLighting() ;

constexpr float_t const& __cordl_internal_get_shadowIntensity() const;

constexpr float_t& __cordl_internal_get_shadowIntensity() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_sunColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_sunColorGradient() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_sunIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_sunIntensityCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_sunIntensityCurveHDRP() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_sunIntensityCurveHDRP() ;

constexpr int32_t const& __cordl_internal_get_updateIntervallFrames() const;

constexpr int32_t& __cordl_internal_get_updateIntervallFrames() ;

constexpr void __cordl_internal_set_ambientColorTintHDRP(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_ambientEquatorColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_ambientGroundColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_ambientIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_ambientIntensityModifier(float_t  value) ;

constexpr void __cordl_internal_set_ambientMode(::UnityEngine::Rendering::AmbientMode  value) ;

constexpr void __cordl_internal_set_ambientSkyColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_ambientUpdateEveryFrame(bool  value) ;

constexpr void __cordl_internal_set_ambientUpdateIntervall(float_t  value) ;

constexpr void __cordl_internal_set_controlExposure(bool  value) ;

constexpr void __cordl_internal_set_controlIndirectLighting(bool  value) ;

constexpr void __cordl_internal_set_diffuseIndirectIntensity(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_directLightIntensityModifier(float_t  value) ;

constexpr void __cordl_internal_set_lightColorTemperatureHDRP(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lightIntensityHDRP(float_t  value) ;

constexpr void __cordl_internal_set_lightingMode(::Enviro::EnviroLighting_LightingMode  value) ;

constexpr void __cordl_internal_set_moonColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_moonIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_moonIntensityCurveHDRP(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_reflectionIndirectIntensity(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_sceneExposure(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_setAmbientLighting(bool  value) ;

constexpr void __cordl_internal_set_setDirectLighting(bool  value) ;

constexpr void __cordl_internal_set_shadowIntensity(float_t  value) ;

constexpr void __cordl_internal_set_sunColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_sunIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_sunIntensityCurveHDRP(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_updateIntervallFrames(int32_t  value) ;

/// @brief Method .ctor, addr 0x180615200, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroLighting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLighting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLighting(EnviroLighting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLighting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLighting(EnviroLighting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18461};

/// @brief Field lightingMode, offset: 0x10, size: 0x4, def value: None
 ::Enviro::EnviroLighting_LightingMode  ___lightingMode;

/// @brief Field setDirectLighting, offset: 0x14, size: 0x1, def value: None
 bool  ___setDirectLighting;

/// @brief Field updateIntervallFrames, offset: 0x18, size: 0x4, def value: None
 int32_t  ___updateIntervallFrames;

/// @brief Field sunIntensityCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___sunIntensityCurve;

/// @brief Field moonIntensityCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___moonIntensityCurve;

/// @brief Field sunColorGradient, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___sunColorGradient;

/// @brief Field moonColorGradient, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___moonColorGradient;

/// @brief Field sunIntensityCurveHDRP, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___sunIntensityCurveHDRP;

/// @brief Field moonIntensityCurveHDRP, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___moonIntensityCurveHDRP;

/// @brief Field lightColorTemperatureHDRP, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lightColorTemperatureHDRP;

/// @brief Field ambientColorTintHDRP, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientColorTintHDRP;

/// @brief Field lightIntensityHDRP, offset: 0x60, size: 0x4, def value: None
 float_t  ___lightIntensityHDRP;

/// @brief Field controlExposure, offset: 0x64, size: 0x1, def value: None
 bool  ___controlExposure;

/// @brief Field sceneExposure, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___sceneExposure;

/// @brief Field controlIndirectLighting, offset: 0x70, size: 0x1, def value: None
 bool  ___controlIndirectLighting;

/// @brief Field diffuseIndirectIntensity, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___diffuseIndirectIntensity;

/// @brief Field reflectionIndirectIntensity, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___reflectionIndirectIntensity;

/// @brief Field directLightIntensityModifier, offset: 0x88, size: 0x4, def value: None
 float_t  ___directLightIntensityModifier;

/// @brief Field setAmbientLighting, offset: 0x8c, size: 0x1, def value: None
 bool  ___setAmbientLighting;

/// @brief Field ambientMode, offset: 0x90, size: 0x4, def value: None
 ::UnityEngine::Rendering::AmbientMode  ___ambientMode;

/// @brief Field ambientSkyColorGradient, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientSkyColorGradient;

/// @brief Field ambientEquatorColorGradient, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientEquatorColorGradient;

/// @brief Field ambientGroundColorGradient, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientGroundColorGradient;

/// @brief Field ambientIntensityCurve, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___ambientIntensityCurve;

/// @brief Field ambientIntensityModifier, offset: 0xb8, size: 0x4, def value: None
 float_t  ___ambientIntensityModifier;

/// @brief Field ambientUpdateEveryFrame, offset: 0xbc, size: 0x1, def value: None
 bool  ___ambientUpdateEveryFrame;

/// @brief Field ambientUpdateIntervall, offset: 0xc0, size: 0x4, def value: None
 float_t  ___ambientUpdateIntervall;

/// @brief Field shadowIntensity, offset: 0xc4, size: 0x4, def value: None
 float_t  ___shadowIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLighting, ___lightingMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___setDirectLighting) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___updateIntervallFrames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___sunIntensityCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___moonIntensityCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___sunColorGradient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___moonColorGradient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___sunIntensityCurveHDRP) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___moonIntensityCurveHDRP) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___lightColorTemperatureHDRP) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientColorTintHDRP) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___lightIntensityHDRP) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___controlExposure) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___sceneExposure) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___controlIndirectLighting) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___diffuseIndirectIntensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___reflectionIndirectIntensity) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___directLightIntensityModifier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___setAmbientLighting) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientMode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientSkyColorGradient) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientEquatorColorGradient) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientGroundColorGradient) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientIntensityCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientIntensityModifier) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientUpdateEveryFrame) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___ambientUpdateIntervall) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLighting, ___shadowIntensity) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLighting) == 0xc8, "Size mismatch!");

} // namespace end def Enviro
