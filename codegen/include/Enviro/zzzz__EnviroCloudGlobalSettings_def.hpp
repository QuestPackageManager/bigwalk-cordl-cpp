#pragma once
// IWYU pragma private; include "Enviro/EnviroCloudGlobalSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroCloudGlobalSettings)
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Enviro {
class EnviroCloudGlobalSettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroCloudGlobalSettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroCloudGlobalSettings*, "Enviro", "EnviroCloudGlobalSettings");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector3
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroCloudGlobalSettings
class CORDL_TYPE EnviroCloudGlobalSettings : public ::System::Object {
public:
// Declarations
/// @brief Field ambientColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_ambientColor, put=__cordl_internal_set_ambientColor)) ::UnityEngine::Color  ambientColor;

/// @brief Field ambientColorGradient, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientColorGradient, put=__cordl_internal_set_ambientColorGradient)) ::UnityEngine::Gradient*  ambientColorGradient;

/// @brief Field ambientLighIntensity, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientLighIntensity, put=__cordl_internal_set_ambientLighIntensity)) float_t  ambientLighIntensity;

/// @brief Field atmosphereColorSaturateDistance, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_atmosphereColorSaturateDistance, put=__cordl_internal_set_atmosphereColorSaturateDistance)) float_t  atmosphereColorSaturateDistance;

/// @brief Field blueNoise, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueNoise, put=__cordl_internal_set_blueNoise)) ::UnityW<::UnityEngine::Texture2D>  blueNoise;

/// @brief Field bottomsOffsetNoise, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_bottomsOffsetNoise, put=__cordl_internal_set_bottomsOffsetNoise)) ::UnityW<::UnityEngine::Texture2D>  bottomsOffsetNoise;

/// @brief Field cloudScrollOffset, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_cloudScrollOffset, put=__cordl_internal_set_cloudScrollOffset)) ::UnityEngine::Vector3  cloudScrollOffset;

/// @brief Field cloudShadows, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_cloudShadows, put=__cordl_internal_set_cloudShadows)) bool  cloudShadows;

/// @brief Field cloudShadowsIntensity, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudShadowsIntensity, put=__cordl_internal_set_cloudShadowsIntensity)) float_t  cloudShadowsIntensity;

/// @brief Field cloudsTravelSpeed, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsTravelSpeed, put=__cordl_internal_set_cloudsTravelSpeed)) float_t  cloudsTravelSpeed;

/// @brief Field cloudsWorldScale, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsWorldScale, put=__cordl_internal_set_cloudsWorldScale)) float_t  cloudsWorldScale;

/// @brief Field curlTex, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_curlTex, put=__cordl_internal_set_curlTex)) ::UnityW<::UnityEngine::Texture2D>  curlTex;

/// @brief Field customWeatherMap, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customWeatherMap, put=__cordl_internal_set_customWeatherMap)) ::UnityW<::UnityEngine::Texture>  customWeatherMap;

/// @brief Field depthBlending, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthBlending, put=__cordl_internal_set_depthBlending)) bool  depthBlending;

/// @brief Field depthTest, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_depthTest, put=__cordl_internal_set_depthTest)) bool  depthTest;

/// @brief Field detailNoise, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailNoise, put=__cordl_internal_set_detailNoise)) ::UnityW<::UnityEngine::Texture3D>  detailNoise;

/// @brief Field floatingPointOriginMod, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_floatingPointOriginMod, put=__cordl_internal_set_floatingPointOriginMod)) ::UnityEngine::Vector3  floatingPointOriginMod;

/// @brief Field maxRenderDistance, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRenderDistance, put=__cordl_internal_set_maxRenderDistance)) float_t  maxRenderDistance;

/// @brief Field moonLightColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_moonLightColor, put=__cordl_internal_set_moonLightColor)) ::UnityEngine::Color  moonLightColor;

/// @brief Field moonLightColorGradient, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonLightColorGradient, put=__cordl_internal_set_moonLightColorGradient)) ::UnityEngine::Gradient*  moonLightColorGradient;

/// @brief Field noise, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_noise, put=__cordl_internal_set_noise)) ::UnityW<::UnityEngine::Texture3D>  noise;

/// @brief Field sunLightColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_sunLightColor, put=__cordl_internal_set_sunLightColor)) ::UnityEngine::Color  sunLightColor;

/// @brief Field sunLightColorGradient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunLightColorGradient, put=__cordl_internal_set_sunLightColorGradient)) ::UnityEngine::Gradient*  sunLightColorGradient;

static inline ::Enviro::EnviroCloudGlobalSettings* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_ambientColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_ambientColor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_ambientColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_ambientColorGradient() ;

constexpr float_t const& __cordl_internal_get_ambientLighIntensity() const;

constexpr float_t& __cordl_internal_get_ambientLighIntensity() ;

constexpr float_t const& __cordl_internal_get_atmosphereColorSaturateDistance() const;

constexpr float_t& __cordl_internal_get_atmosphereColorSaturateDistance() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_blueNoise() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_blueNoise() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_bottomsOffsetNoise() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_bottomsOffsetNoise() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cloudScrollOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cloudScrollOffset() ;

constexpr bool const& __cordl_internal_get_cloudShadows() const;

constexpr bool& __cordl_internal_get_cloudShadows() ;

constexpr float_t const& __cordl_internal_get_cloudShadowsIntensity() const;

constexpr float_t& __cordl_internal_get_cloudShadowsIntensity() ;

constexpr float_t const& __cordl_internal_get_cloudsTravelSpeed() const;

constexpr float_t& __cordl_internal_get_cloudsTravelSpeed() ;

constexpr float_t const& __cordl_internal_get_cloudsWorldScale() const;

constexpr float_t& __cordl_internal_get_cloudsWorldScale() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_curlTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_curlTex() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_customWeatherMap() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_customWeatherMap() ;

constexpr bool const& __cordl_internal_get_depthBlending() const;

constexpr bool& __cordl_internal_get_depthBlending() ;

constexpr bool const& __cordl_internal_get_depthTest() const;

constexpr bool& __cordl_internal_get_depthTest() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_detailNoise() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_detailNoise() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floatingPointOriginMod() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floatingPointOriginMod() ;

constexpr float_t const& __cordl_internal_get_maxRenderDistance() const;

constexpr float_t& __cordl_internal_get_maxRenderDistance() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_moonLightColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_moonLightColor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_moonLightColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_moonLightColorGradient() ;

constexpr ::UnityW<::UnityEngine::Texture3D> const& __cordl_internal_get_noise() const;

constexpr ::UnityW<::UnityEngine::Texture3D>& __cordl_internal_get_noise() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_sunLightColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_sunLightColor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_sunLightColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_sunLightColorGradient() ;

constexpr void __cordl_internal_set_ambientColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_ambientColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_ambientLighIntensity(float_t  value) ;

constexpr void __cordl_internal_set_atmosphereColorSaturateDistance(float_t  value) ;

constexpr void __cordl_internal_set_blueNoise(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_bottomsOffsetNoise(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_cloudScrollOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cloudShadows(bool  value) ;

constexpr void __cordl_internal_set_cloudShadowsIntensity(float_t  value) ;

constexpr void __cordl_internal_set_cloudsTravelSpeed(float_t  value) ;

constexpr void __cordl_internal_set_cloudsWorldScale(float_t  value) ;

constexpr void __cordl_internal_set_curlTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customWeatherMap(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_depthBlending(bool  value) ;

constexpr void __cordl_internal_set_depthTest(bool  value) ;

constexpr void __cordl_internal_set_detailNoise(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxRenderDistance(float_t  value) ;

constexpr void __cordl_internal_set_moonLightColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_moonLightColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_noise(::UnityW<::UnityEngine::Texture3D>  value) ;

constexpr void __cordl_internal_set_sunLightColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sunLightColorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method .ctor, addr 0x18061bf60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroCloudGlobalSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroCloudGlobalSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroCloudGlobalSettings(EnviroCloudGlobalSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroCloudGlobalSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroCloudGlobalSettings(EnviroCloudGlobalSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18502};

/// @brief Field floatingPointOriginMod, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floatingPointOriginMod;

/// @brief Field cloudScrollOffset, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cloudScrollOffset;

/// @brief Field sunLightColorGradient, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___sunLightColorGradient;

/// @brief Field moonLightColorGradient, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___moonLightColorGradient;

/// @brief Field ambientColorGradient, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___ambientColorGradient;

/// @brief Field sunLightColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___sunLightColor;

/// @brief Field moonLightColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ___moonLightColor;

/// @brief Field ambientColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ___ambientColor;

/// @brief Field depthBlending, offset: 0x70, size: 0x1, def value: None
 bool  ___depthBlending;

/// @brief Field depthTest, offset: 0x71, size: 0x1, def value: None
 bool  ___depthTest;

/// @brief Field noise, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___noise;

/// @brief Field detailNoise, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture3D>  ___detailNoise;

/// @brief Field curlTex, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___curlTex;

/// @brief Field bottomsOffsetNoise, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___bottomsOffsetNoise;

/// @brief Field blueNoise, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___blueNoise;

/// @brief Field customWeatherMap, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___customWeatherMap;

/// @brief Field cloudsWorldScale, offset: 0xa8, size: 0x4, def value: None
 float_t  ___cloudsWorldScale;

/// @brief Field maxRenderDistance, offset: 0xac, size: 0x4, def value: None
 float_t  ___maxRenderDistance;

/// @brief Field atmosphereColorSaturateDistance, offset: 0xb0, size: 0x4, def value: None
 float_t  ___atmosphereColorSaturateDistance;

/// @brief Field ambientLighIntensity, offset: 0xb4, size: 0x4, def value: None
 float_t  ___ambientLighIntensity;

/// @brief Field cloudShadows, offset: 0xb8, size: 0x1, def value: None
 bool  ___cloudShadows;

/// @brief Field cloudShadowsIntensity, offset: 0xbc, size: 0x4, def value: None
 float_t  ___cloudShadowsIntensity;

/// @brief Field cloudsTravelSpeed, offset: 0xc0, size: 0x4, def value: None
 float_t  ___cloudsTravelSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___floatingPointOriginMod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___cloudScrollOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___sunLightColorGradient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___moonLightColorGradient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___ambientColorGradient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___sunLightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___moonLightColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___ambientColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___depthBlending) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___depthTest) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___noise) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___detailNoise) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___curlTex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___bottomsOffsetNoise) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___blueNoise) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___customWeatherMap) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___cloudsWorldScale) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___maxRenderDistance) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___atmosphereColorSaturateDistance) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___ambientLighIntensity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___cloudShadows) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___cloudShadowsIntensity) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudGlobalSettings, ___cloudsTravelSpeed) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroCloudGlobalSettings) == 0xc8, "Size mismatch!");

} // namespace end def Enviro
