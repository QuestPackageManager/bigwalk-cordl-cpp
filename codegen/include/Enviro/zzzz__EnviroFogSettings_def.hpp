#pragma once
// IWYU pragma private; include "Enviro/EnviroFogSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FogMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroFogSettings)
namespace Enviro {
struct EnviroFogSettings_FogQualityMode;
}
namespace Enviro {
struct EnviroFogSettings_Quality;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture3D;
}
// Forward declare root types
namespace Enviro {
struct EnviroFogSettings_FogQualityMode;
}
namespace Enviro {
struct EnviroFogSettings_Quality;
}
namespace Enviro {
class EnviroFogSettings;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroFogSettings_FogQualityMode);
MARK_VAL_T(::Enviro::EnviroFogSettings_Quality);
MARK_REF_T(::Enviro::EnviroFogSettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogSettings_FogQualityMode, "Enviro", "EnviroFogSettings/FogQualityMode");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogSettings_Quality, "Enviro", "EnviroFogSettings/Quality");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogSettings*, "Enviro", "EnviroFogSettings");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroFogSettings/Quality
struct CORDL_TYPE EnviroFogSettings_Quality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroFogSettings_Quality_Unwrapped
enum struct __EnviroFogSettings_Quality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroFogSettings_Quality_Unwrapped () const noexcept {
return static_cast<__EnviroFogSettings_Quality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogSettings_Quality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroFogSettings_Quality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::Enviro::EnviroFogSettings_Quality const High;

/// @brief Field Low value: I32(0)
static ::Enviro::EnviroFogSettings_Quality const Low;

/// @brief Field Medium value: I32(1)
static ::Enviro::EnviroFogSettings_Quality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18453};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogSettings_Quality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogSettings_Quality) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroFogSettings/FogQualityMode
struct CORDL_TYPE EnviroFogSettings_FogQualityMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroFogSettings_FogQualityMode_Unwrapped
enum struct __EnviroFogSettings_FogQualityMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroFogSettings_FogQualityMode_Unwrapped () const noexcept {
return static_cast<__EnviroFogSettings_FogQualityMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogSettings_FogQualityMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroFogSettings_FogQualityMode(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::Enviro::EnviroFogSettings_FogQualityMode const Normal;

/// @brief Field Simple value: I32(1)
static ::Enviro::EnviroFogSettings_FogQualityMode const Simple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogSettings_FogQualityMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogSettings_FogQualityMode) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroFogSettings::FogQualityMode, Enviro.EnviroFogSettings::Quality, System.Object, UnityEngine.Color, UnityEngine.FogMode, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroFogSettings
class CORDL_TYPE EnviroFogSettings : public ::System::Object {
public:
// Declarations
using FogQualityMode = ::Enviro::EnviroFogSettings_FogQualityMode;

using Quality = ::Enviro::EnviroFogSettings_Quality;

/// @brief Field ambientColorGradient, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientColorGradient, put=__cordl_internal_set_ambientColorGradient)) ::UnityEngine::Gradient*  ambientColorGradient;

/// @brief Field anistropy, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_anistropy, put=__cordl_internal_set_anistropy)) float_t  anistropy;

/// @brief Field blockScattering, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockScattering, put=__cordl_internal_set_blockScattering)) bool  blockScattering;

/// @brief Field ditheringTex, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ditheringTex, put=__cordl_internal_set_ditheringTex)) ::UnityW<::UnityEngine::Texture2D>  ditheringTex;

/// @brief Field extinction, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_extinction, put=__cordl_internal_set_extinction)) float_t  extinction;

/// @brief Field floatingPointOriginMod, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_floatingPointOriginMod, put=__cordl_internal_set_floatingPointOriginMod)) ::UnityEngine::Vector3  floatingPointOriginMod;

/// @brief Field fog, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_fog, put=__cordl_internal_set_fog)) bool  fog;

/// @brief Field fogColorBlend, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogColorBlend, put=__cordl_internal_set_fogColorBlend)) float_t  fogColorBlend;

/// @brief Field fogColorMod, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get_fogColorMod, put=__cordl_internal_set_fogColorMod)) ::UnityEngine::Color  fogColorMod;

/// @brief Field fogDensity, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogDensity, put=__cordl_internal_set_fogDensity)) float_t  fogDensity;

/// @brief Field fogDensity2, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogDensity2, put=__cordl_internal_set_fogDensity2)) float_t  fogDensity2;

/// @brief Field fogHeight, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeight, put=__cordl_internal_set_fogHeight)) float_t  fogHeight;

/// @brief Field fogHeight2, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeight2, put=__cordl_internal_set_fogHeight2)) float_t  fogHeight2;

/// @brief Field fogHeightFalloff, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeightFalloff, put=__cordl_internal_set_fogHeightFalloff)) float_t  fogHeightFalloff;

/// @brief Field fogHeightFalloff2, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogHeightFalloff2, put=__cordl_internal_set_fogHeightFalloff2)) float_t  fogHeightFalloff2;

/// @brief Field fogMaxOpacity, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogMaxOpacity, put=__cordl_internal_set_fogMaxOpacity)) float_t  fogMaxOpacity;

/// @brief Field fogQualityMode, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogQualityMode, put=__cordl_internal_set_fogQualityMode)) ::Enviro::EnviroFogSettings_FogQualityMode  fogQualityMode;

/// @brief Field globalFogHeight, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalFogHeight, put=__cordl_internal_set_globalFogHeight)) float_t  globalFogHeight;

/// @brief Field maxRange, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRange, put=__cordl_internal_set_maxRange)) float_t  maxRange;

/// @brief Field maxRangePointSpot, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRangePointSpot, put=__cordl_internal_set_maxRangePointSpot)) float_t  maxRangePointSpot;

/// @brief Field noise, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_noise, put=__cordl_internal_set_noise)) ::UnityW<::UnityEngine::Texture3D>  noise;

/// @brief Field noiseIntensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseIntensity, put=__cordl_internal_set_noiseIntensity)) float_t  noiseIntensity;

/// @brief Field noiseScale, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_noiseScale, put=__cordl_internal_set_noiseScale)) float_t  noiseScale;

/// @brief Field quality, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::Enviro::EnviroFogSettings_Quality  quality;

/// @brief Field scattering, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scattering, put=__cordl_internal_set_scattering)) float_t  scattering;

/// @brief Field scatteringMultiplier, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scatteringMultiplier, put=__cordl_internal_set_scatteringMultiplier)) ::UnityEngine::AnimationCurve*  scatteringMultiplier;

/// @brief Field startDistance, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_startDistance, put=__cordl_internal_set_startDistance)) float_t  startDistance;

/// @brief Field steps, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_steps, put=__cordl_internal_set_steps)) int32_t  steps;

/// @brief Field unityFog, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_unityFog, put=__cordl_internal_set_unityFog)) bool  unityFog;

/// @brief Field unityFogColor, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityFogColor, put=__cordl_internal_set_unityFogColor)) ::UnityEngine::Gradient*  unityFogColor;

/// @brief Field unityFogDensity, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogDensity, put=__cordl_internal_set_unityFogDensity)) float_t  unityFogDensity;

/// @brief Field unityFogEndDistance, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogEndDistance, put=__cordl_internal_set_unityFogEndDistance)) float_t  unityFogEndDistance;

/// @brief Field unityFogMode, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogMode, put=__cordl_internal_set_unityFogMode)) ::UnityEngine::FogMode  unityFogMode;

/// @brief Field unityFogStartDistance, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_unityFogStartDistance, put=__cordl_internal_set_unityFogStartDistance)) float_t  unityFogStartDistance;

/// @brief Field volumetrics, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_volumetrics, put=__cordl_internal_set_volumetrics)) bool  volumetrics;

/// @brief Field windDirection, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_windDirection, put=__cordl_internal_set_windDirection)) ::UnityEngine::Vector3  windDirection;

static inline ::Enviro::EnviroFogSettings* New_ctor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientColorGradient() ;

constexpr float_t const& __cordl_internal_get_anistropy() const;

constexpr float_t& __cordl_internal_get_anistropy() ;

constexpr bool const& __cordl_internal_get_blockScattering() const;

constexpr bool& __cordl_internal_get_blockScattering() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_ditheringTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_ditheringTex() ;

constexpr float_t const& __cordl_internal_get_extinction() const;

constexpr float_t& __cordl_internal_get_extinction() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floatingPointOriginMod() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floatingPointOriginMod() ;

constexpr bool const& __cordl_internal_get_fog() const;

constexpr bool& __cordl_internal_get_fog() ;

constexpr float_t const& __cordl_internal_get_fogColorBlend() const;

constexpr float_t& __cordl_internal_get_fogColorBlend() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_fogColorMod() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_fogColorMod() ;

constexpr float_t const& __cordl_internal_get_fogDensity() const;

constexpr float_t& __cordl_internal_get_fogDensity() ;

constexpr float_t const& __cordl_internal_get_fogDensity2() const;

constexpr float_t& __cordl_internal_get_fogDensity2() ;

constexpr float_t const& __cordl_internal_get_fogHeight() const;

constexpr float_t& __cordl_internal_get_fogHeight() ;

constexpr float_t const& __cordl_internal_get_fogHeight2() const;

constexpr float_t& __cordl_internal_get_fogHeight2() ;

constexpr float_t const& __cordl_internal_get_fogHeightFalloff() const;

constexpr float_t& __cordl_internal_get_fogHeightFalloff() ;

constexpr float_t const& __cordl_internal_get_fogHeightFalloff2() const;

constexpr float_t& __cordl_internal_get_fogHeightFalloff2() ;

constexpr float_t const& __cordl_internal_get_fogMaxOpacity() const;

constexpr float_t& __cordl_internal_get_fogMaxOpacity() ;

constexpr ::Enviro::EnviroFogSettings_FogQualityMode const& __cordl_internal_get_fogQualityMode() const;

constexpr ::Enviro::EnviroFogSettings_FogQualityMode& __cordl_internal_get_fogQualityMode() ;

constexpr float_t const& __cordl_internal_get_globalFogHeight() const;

constexpr float_t& __cordl_internal_get_globalFogHeight() ;

constexpr float_t const& __cordl_internal_get_maxRange() const;

constexpr float_t& __cordl_internal_get_maxRange() ;

constexpr float_t const& __cordl_internal_get_maxRangePointSpot() const;

constexpr float_t& __cordl_internal_get_maxRangePointSpot() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_noise() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_noise() ;

constexpr float_t const& __cordl_internal_get_noiseIntensity() const;

constexpr float_t& __cordl_internal_get_noiseIntensity() ;

constexpr float_t const& __cordl_internal_get_noiseScale() const;

constexpr float_t& __cordl_internal_get_noiseScale() ;

constexpr ::Enviro::EnviroFogSettings_Quality const& __cordl_internal_get_quality() const;

constexpr ::Enviro::EnviroFogSettings_Quality& __cordl_internal_get_quality() ;

constexpr float_t const& __cordl_internal_get_scattering() const;

constexpr float_t& __cordl_internal_get_scattering() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_scatteringMultiplier() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_scatteringMultiplier() ;

constexpr float_t const& __cordl_internal_get_startDistance() const;

constexpr float_t& __cordl_internal_get_startDistance() ;

constexpr int32_t const& __cordl_internal_get_steps() const;

constexpr int32_t& __cordl_internal_get_steps() ;

constexpr bool const& __cordl_internal_get_unityFog() const;

constexpr bool& __cordl_internal_get_unityFog() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_unityFogColor() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_unityFogColor() ;

constexpr float_t const& __cordl_internal_get_unityFogDensity() const;

constexpr float_t& __cordl_internal_get_unityFogDensity() ;

constexpr float_t const& __cordl_internal_get_unityFogEndDistance() const;

constexpr float_t& __cordl_internal_get_unityFogEndDistance() ;

constexpr ::UnityEngine::FogMode const& __cordl_internal_get_unityFogMode() const;

constexpr ::UnityEngine::FogMode& __cordl_internal_get_unityFogMode() ;

constexpr float_t const& __cordl_internal_get_unityFogStartDistance() const;

constexpr float_t& __cordl_internal_get_unityFogStartDistance() ;

constexpr bool const& __cordl_internal_get_volumetrics() const;

constexpr bool& __cordl_internal_get_volumetrics() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_windDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_windDirection() ;

constexpr void __cordl_internal_set_ambientColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_anistropy(float_t  value) ;

constexpr void __cordl_internal_set_blockScattering(bool  value) ;

constexpr void __cordl_internal_set_ditheringTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_extinction(float_t  value) ;

constexpr void __cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fog(bool  value) ;

constexpr void __cordl_internal_set_fogColorBlend(float_t  value) ;

constexpr void __cordl_internal_set_fogColorMod(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fogDensity(float_t  value) ;

constexpr void __cordl_internal_set_fogDensity2(float_t  value) ;

constexpr void __cordl_internal_set_fogHeight(float_t  value) ;

constexpr void __cordl_internal_set_fogHeight2(float_t  value) ;

constexpr void __cordl_internal_set_fogHeightFalloff(float_t  value) ;

constexpr void __cordl_internal_set_fogHeightFalloff2(float_t  value) ;

constexpr void __cordl_internal_set_fogMaxOpacity(float_t  value) ;

constexpr void __cordl_internal_set_fogQualityMode(::Enviro::EnviroFogSettings_FogQualityMode  value) ;

constexpr void __cordl_internal_set_globalFogHeight(float_t  value) ;

constexpr void __cordl_internal_set_maxRange(float_t  value) ;

constexpr void __cordl_internal_set_maxRangePointSpot(float_t  value) ;

constexpr void __cordl_internal_set_noise(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_noiseIntensity(float_t  value) ;

constexpr void __cordl_internal_set_noiseScale(float_t  value) ;

constexpr void __cordl_internal_set_quality(::Enviro::EnviroFogSettings_Quality  value) ;

constexpr void __cordl_internal_set_scattering(float_t  value) ;

constexpr void __cordl_internal_set_scatteringMultiplier(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_startDistance(float_t  value) ;

constexpr void __cordl_internal_set_steps(int32_t  value) ;

constexpr void __cordl_internal_set_unityFog(bool  value) ;

constexpr void __cordl_internal_set_unityFogColor(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_unityFogDensity(float_t  value) ;

constexpr void __cordl_internal_set_unityFogEndDistance(float_t  value) ;

constexpr void __cordl_internal_set_unityFogMode(::UnityEngine::FogMode  value) ;

constexpr void __cordl_internal_set_unityFogStartDistance(float_t  value) ;

constexpr void __cordl_internal_set_volumetrics(bool  value) ;

constexpr void __cordl_internal_set_windDirection(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x180613c60, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroFogSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroFogSettings(EnviroFogSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroFogSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroFogSettings(EnviroFogSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18455};

/// @brief Field volumetrics, offset: 0x10, size: 0x1, def value: None
 bool  ___volumetrics;

/// @brief Field steps, offset: 0x14, size: 0x4, def value: None
 int32_t  ___steps;

/// @brief Field quality, offset: 0x18, size: 0x4, def value: None
 ::Enviro::EnviroFogSettings_Quality  ___quality;

/// @brief Field scattering, offset: 0x1c, size: 0x4, def value: None
 float_t  ___scattering;

/// @brief Field scatteringMultiplier, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___scatteringMultiplier;

/// @brief Field extinction, offset: 0x28, size: 0x4, def value: None
 float_t  ___extinction;

/// @brief Field anistropy, offset: 0x2c, size: 0x4, def value: None
 float_t  ___anistropy;

/// @brief Field maxRange, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxRange;

/// @brief Field maxRangePointSpot, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxRangePointSpot;

/// @brief Field noiseIntensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___noiseIntensity;

/// @brief Field noiseScale, offset: 0x3c, size: 0x4, def value: None
 float_t  ___noiseScale;

/// @brief Field windDirection, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___windDirection;

/// @brief Field noise, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___noise;

/// @brief Field ditheringTex, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___ditheringTex;

/// @brief Field fog, offset: 0x60, size: 0x1, def value: None
 bool  ___fog;

/// @brief Field fogQualityMode, offset: 0x64, size: 0x4, def value: None
 ::Enviro::EnviroFogSettings_FogQualityMode  ___fogQualityMode;

/// @brief Field floatingPointOriginMod, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floatingPointOriginMod;

/// @brief Field globalFogHeight, offset: 0x74, size: 0x4, def value: None
 float_t  ___globalFogHeight;

/// @brief Field fogDensity, offset: 0x78, size: 0x4, def value: None
 float_t  ___fogDensity;

/// @brief Field fogHeightFalloff, offset: 0x7c, size: 0x4, def value: None
 float_t  ___fogHeightFalloff;

/// @brief Field fogHeight, offset: 0x80, size: 0x4, def value: None
 float_t  ___fogHeight;

/// @brief Field fogDensity2, offset: 0x84, size: 0x4, def value: None
 float_t  ___fogDensity2;

/// @brief Field fogHeightFalloff2, offset: 0x88, size: 0x4, def value: None
 float_t  ___fogHeightFalloff2;

/// @brief Field fogHeight2, offset: 0x8c, size: 0x4, def value: None
 float_t  ___fogHeight2;

/// @brief Field fogMaxOpacity, offset: 0x90, size: 0x4, def value: None
 float_t  ___fogMaxOpacity;

/// @brief Field startDistance, offset: 0x94, size: 0x4, def value: None
 float_t  ___startDistance;

/// @brief Field fogColorBlend, offset: 0x98, size: 0x4, def value: None
 float_t  ___fogColorBlend;

/// @brief Field fogColorMod, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ___fogColorMod;

/// @brief Field blockScattering, offset: 0xac, size: 0x1, def value: None
 bool  ___blockScattering;

/// @brief Field ambientColorGradient, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientColorGradient;

/// @brief Field unityFog, offset: 0xb8, size: 0x1, def value: None
 bool  ___unityFog;

/// @brief Field unityFogMode, offset: 0xbc, size: 0x4, def value: None
 ::UnityEngine::FogMode  ___unityFogMode;

/// @brief Field unityFogDensity, offset: 0xc0, size: 0x4, def value: None
 float_t  ___unityFogDensity;

/// @brief Field unityFogStartDistance, offset: 0xc4, size: 0x4, def value: None
 float_t  ___unityFogStartDistance;

/// @brief Field unityFogEndDistance, offset: 0xc8, size: 0x4, def value: None
 float_t  ___unityFogEndDistance;

/// @brief Field unityFogColor, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___unityFogColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogSettings, ___volumetrics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___steps) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___quality) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___scattering) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___scatteringMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___extinction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___anistropy) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___maxRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___maxRangePointSpot) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___noiseIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___noiseScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___windDirection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___noise) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___ditheringTex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fog) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogQualityMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___floatingPointOriginMod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___globalFogHeight) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogDensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogHeightFalloff) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogHeight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogDensity2) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogHeightFalloff2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogHeight2) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogMaxOpacity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___startDistance) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogColorBlend) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___fogColorMod) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___blockScattering) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___ambientColorGradient) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___unityFog) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___unityFogMode) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___unityFogDensity) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___unityFogStartDistance) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___unityFogEndDistance) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogSettings, ___unityFogColor) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogSettings) == 0xd8, "Size mismatch!");

} // namespace end def Enviro
