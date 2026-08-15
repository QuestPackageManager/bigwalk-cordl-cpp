#pragma once
// IWYU pragma private; include "Enviro/EnviroSky.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroSky)
namespace Enviro {
struct EnviroSky_MoonMode;
}
namespace Enviro {
struct EnviroSky_SkyMode;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Enviro {
struct EnviroSky_MoonMode;
}
namespace Enviro {
struct EnviroSky_SkyMode;
}
namespace Enviro {
class EnviroSky;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroSky_MoonMode);
MARK_VAL_T(::Enviro::EnviroSky_SkyMode);
MARK_REF_T(::Enviro::EnviroSky*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroSky_MoonMode, "Enviro", "EnviroSky/MoonMode");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroSky_SkyMode, "Enviro", "EnviroSky/SkyMode");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroSky*, "Enviro", "EnviroSky");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroSky/SkyMode
struct CORDL_TYPE EnviroSky_SkyMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroSky_SkyMode_Unwrapped
enum struct __EnviroSky_SkyMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroSky_SkyMode_Unwrapped () const noexcept {
return static_cast<__EnviroSky_SkyMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroSky_SkyMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroSky_SkyMode(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::Enviro::EnviroSky_SkyMode const Normal;

/// @brief Field Simple value: I32(1)
static ::Enviro::EnviroSky_SkyMode const Simple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroSky_SkyMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroSky_SkyMode) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroSky/MoonMode
struct CORDL_TYPE EnviroSky_MoonMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroSky_MoonMode_Unwrapped
enum struct __EnviroSky_MoonMode_Unwrapped : int32_t {
__E_Realistic = static_cast<int32_t>(0x0),
__E_Simple = static_cast<int32_t>(0x1),
__E_Off = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroSky_MoonMode_Unwrapped () const noexcept {
return static_cast<__EnviroSky_MoonMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroSky_MoonMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroSky_MoonMode(int32_t  value__) noexcept;

/// @brief Field Off value: I32(2)
static ::Enviro::EnviroSky_MoonMode const Off;

/// @brief Field Realistic value: I32(0)
static ::Enviro::EnviroSky_MoonMode const Realistic;

/// @brief Field Simple value: I32(1)
static ::Enviro::EnviroSky_MoonMode const Simple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18495};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroSky_MoonMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroSky_MoonMode) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroSky::MoonMode, Enviro.EnviroSky::SkyMode, System.Object, UnityEngine.Color
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroSky
class CORDL_TYPE EnviroSky : public ::System::Object {
public:
// Declarations
using MoonMode = ::Enviro::EnviroSky_MoonMode;

using SkyMode = ::Enviro::EnviroSky_SkyMode;

/// @brief Field backColorGradient0, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_backColorGradient0, put=__cordl_internal_set_backColorGradient0)) ::UnityEngine::Gradient*  backColorGradient0;

/// @brief Field backColorGradient1, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_backColorGradient1, put=__cordl_internal_set_backColorGradient1)) ::UnityEngine::Gradient*  backColorGradient1;

/// @brief Field backColorGradient2, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_backColorGradient2, put=__cordl_internal_set_backColorGradient2)) ::UnityEngine::Gradient*  backColorGradient2;

/// @brief Field backColorGradient3, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_backColorGradient3, put=__cordl_internal_set_backColorGradient3)) ::UnityEngine::Gradient*  backColorGradient3;

/// @brief Field backColorGradient4, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_backColorGradient4, put=__cordl_internal_set_backColorGradient4)) ::UnityEngine::Gradient*  backColorGradient4;

/// @brief Field backColorGradient5, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_backColorGradient5, put=__cordl_internal_set_backColorGradient5)) ::UnityEngine::Gradient*  backColorGradient5;

/// @brief Field distribution0, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_distribution0, put=__cordl_internal_set_distribution0)) float_t  distribution0;

/// @brief Field distribution1, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_distribution1, put=__cordl_internal_set_distribution1)) float_t  distribution1;

/// @brief Field distribution2, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_distribution2, put=__cordl_internal_set_distribution2)) float_t  distribution2;

/// @brief Field distribution3, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_distribution3, put=__cordl_internal_set_distribution3)) float_t  distribution3;

/// @brief Field forcedSkyboxSetup, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_forcedSkyboxSetup, put=__cordl_internal_set_forcedSkyboxSetup)) bool  forcedSkyboxSetup;

/// @brief Field frontColorGradient0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontColorGradient0, put=__cordl_internal_set_frontColorGradient0)) ::UnityEngine::Gradient*  frontColorGradient0;

/// @brief Field frontColorGradient1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontColorGradient1, put=__cordl_internal_set_frontColorGradient1)) ::UnityEngine::Gradient*  frontColorGradient1;

/// @brief Field frontColorGradient2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontColorGradient2, put=__cordl_internal_set_frontColorGradient2)) ::UnityEngine::Gradient*  frontColorGradient2;

/// @brief Field frontColorGradient3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontColorGradient3, put=__cordl_internal_set_frontColorGradient3)) ::UnityEngine::Gradient*  frontColorGradient3;

/// @brief Field frontColorGradient4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontColorGradient4, put=__cordl_internal_set_frontColorGradient4)) ::UnityEngine::Gradient*  frontColorGradient4;

/// @brief Field frontColorGradient5, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontColorGradient5, put=__cordl_internal_set_frontColorGradient5)) ::UnityEngine::Gradient*  frontColorGradient5;

/// @brief Field galaxyIntensityCurve, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_galaxyIntensityCurve, put=__cordl_internal_set_galaxyIntensityCurve)) ::UnityEngine::AnimationCurve*  galaxyIntensityCurve;

/// @brief Field galaxyTex, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_galaxyTex, put=__cordl_internal_set_galaxyTex)) ::UnityW<::UnityEngine::Cubemap>  galaxyTex;

/// @brief Field intensity, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field intensityCurve, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensityCurve, put=__cordl_internal_set_intensityCurve)) ::UnityEngine::AnimationCurve*  intensityCurve;

/// @brief Field mieScatteringIntensityCurve, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mieScatteringIntensityCurve, put=__cordl_internal_set_mieScatteringIntensityCurve)) ::UnityEngine::AnimationCurve*  mieScatteringIntensityCurve;

/// @brief Field mieScatteringMultiplier, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mieScatteringMultiplier, put=__cordl_internal_set_mieScatteringMultiplier)) float_t  mieScatteringMultiplier;

/// @brief Field moonColorGradient, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonColorGradient, put=__cordl_internal_set_moonColorGradient)) ::UnityEngine::Gradient*  moonColorGradient;

/// @brief Field moonGlowColorGradient, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonGlowColorGradient, put=__cordl_internal_set_moonGlowColorGradient)) ::UnityEngine::Gradient*  moonGlowColorGradient;

/// @brief Field moonGlowIntensityCurve, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonGlowIntensityCurve, put=__cordl_internal_set_moonGlowIntensityCurve)) ::UnityEngine::AnimationCurve*  moonGlowIntensityCurve;

/// @brief Field moonGlowTex, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonGlowTex, put=__cordl_internal_set_moonGlowTex)) ::UnityW<::UnityEngine::Texture2D>  moonGlowTex;

/// @brief Field moonMode, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_moonMode, put=__cordl_internal_set_moonMode)) ::Enviro::EnviroSky_MoonMode  moonMode;

/// @brief Field moonPhase, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_moonPhase, put=__cordl_internal_set_moonPhase)) float_t  moonPhase;

/// @brief Field moonScale, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_moonScale, put=__cordl_internal_set_moonScale)) float_t  moonScale;

/// @brief Field moonTex, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonTex, put=__cordl_internal_set_moonTex)) ::UnityW<::UnityEngine::Texture2D>  moonTex;

/// @brief Field skyColorExponent, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyColorExponent, put=__cordl_internal_set_skyColorExponent)) float_t  skyColorExponent;

/// @brief Field skyColorTint, offset 0x120, size 0x10 
 __declspec(property(get=__cordl_internal_get_skyColorTint, put=__cordl_internal_set_skyColorTint)) ::UnityEngine::Color  skyColorTint;

/// @brief Field skyExposureHDRP, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyExposureHDRP, put=__cordl_internal_set_skyExposureHDRP)) ::UnityEngine::AnimationCurve*  skyExposureHDRP;

/// @brief Field skyMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyMode, put=__cordl_internal_set_skyMode)) ::Enviro::EnviroSky_SkyMode  skyMode;

/// @brief Field starIntensityCurve, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_starIntensityCurve, put=__cordl_internal_set_starIntensityCurve)) ::UnityEngine::AnimationCurve*  starIntensityCurve;

/// @brief Field starsTex, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_starsTex, put=__cordl_internal_set_starsTex)) ::UnityW<::UnityEngine::Cubemap>  starsTex;

/// @brief Field starsTwinklingSpeed, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_starsTwinklingSpeed, put=__cordl_internal_set_starsTwinklingSpeed)) float_t  starsTwinklingSpeed;

/// @brief Field starsTwinklingTex, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_starsTwinklingTex, put=__cordl_internal_set_starsTwinklingTex)) ::UnityW<::UnityEngine::Cubemap>  starsTwinklingTex;

/// @brief Field sunDiscColorGradient, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunDiscColorGradient, put=__cordl_internal_set_sunDiscColorGradient)) ::UnityEngine::Gradient*  sunDiscColorGradient;

/// @brief Field sunScale, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_sunScale, put=__cordl_internal_set_sunScale)) float_t  sunScale;

/// @brief Field sunTex, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sunTex, put=__cordl_internal_set_sunTex)) ::UnityW<::UnityEngine::Texture2D>  sunTex;

static inline ::Enviro::EnviroSky* New_ctor() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_backColorGradient0() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_backColorGradient0() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_backColorGradient1() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_backColorGradient1() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_backColorGradient2() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_backColorGradient2() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_backColorGradient3() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_backColorGradient3() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_backColorGradient4() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_backColorGradient4() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_backColorGradient5() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_backColorGradient5() ;

constexpr float_t const& __cordl_internal_get_distribution0() const;

constexpr float_t& __cordl_internal_get_distribution0() ;

constexpr float_t const& __cordl_internal_get_distribution1() const;

constexpr float_t& __cordl_internal_get_distribution1() ;

constexpr float_t const& __cordl_internal_get_distribution2() const;

constexpr float_t& __cordl_internal_get_distribution2() ;

constexpr float_t const& __cordl_internal_get_distribution3() const;

constexpr float_t& __cordl_internal_get_distribution3() ;

constexpr bool const& __cordl_internal_get_forcedSkyboxSetup() const;

constexpr bool& __cordl_internal_get_forcedSkyboxSetup() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_frontColorGradient0() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_frontColorGradient0() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_frontColorGradient1() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_frontColorGradient1() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_frontColorGradient2() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_frontColorGradient2() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_frontColorGradient3() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_frontColorGradient3() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_frontColorGradient4() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_frontColorGradient4() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_frontColorGradient5() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_frontColorGradient5() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_galaxyIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_galaxyIntensityCurve() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_galaxyTex() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_galaxyTex() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_intensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_intensityCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_mieScatteringIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_mieScatteringIntensityCurve() ;

constexpr float_t const& __cordl_internal_get_mieScatteringMultiplier() const;

constexpr float_t& __cordl_internal_get_mieScatteringMultiplier() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_moonColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_moonColorGradient() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_moonGlowColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_moonGlowColorGradient() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_moonGlowIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_moonGlowIntensityCurve() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_moonGlowTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_moonGlowTex() ;

constexpr ::Enviro::EnviroSky_MoonMode const& __cordl_internal_get_moonMode() const;

constexpr ::Enviro::EnviroSky_MoonMode& __cordl_internal_get_moonMode() ;

constexpr float_t const& __cordl_internal_get_moonPhase() const;

constexpr float_t& __cordl_internal_get_moonPhase() ;

constexpr float_t const& __cordl_internal_get_moonScale() const;

constexpr float_t& __cordl_internal_get_moonScale() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_moonTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_moonTex() ;

constexpr float_t const& __cordl_internal_get_skyColorExponent() const;

constexpr float_t& __cordl_internal_get_skyColorExponent() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_skyColorTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_skyColorTint() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_skyExposureHDRP() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_skyExposureHDRP() ;

constexpr ::Enviro::EnviroSky_SkyMode const& __cordl_internal_get_skyMode() const;

constexpr ::Enviro::EnviroSky_SkyMode& __cordl_internal_get_skyMode() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_starIntensityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_starIntensityCurve() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_starsTex() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_starsTex() ;

constexpr float_t const& __cordl_internal_get_starsTwinklingSpeed() const;

constexpr float_t& __cordl_internal_get_starsTwinklingSpeed() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_starsTwinklingTex() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_starsTwinklingTex() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_sunDiscColorGradient() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_sunDiscColorGradient() ;

constexpr float_t const& __cordl_internal_get_sunScale() const;

constexpr float_t& __cordl_internal_get_sunScale() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_sunTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_sunTex() ;

constexpr void __cordl_internal_set_backColorGradient0(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_backColorGradient1(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_backColorGradient2(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_backColorGradient3(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_backColorGradient4(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_backColorGradient5(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_distribution0(float_t  value) ;

constexpr void __cordl_internal_set_distribution1(float_t  value) ;

constexpr void __cordl_internal_set_distribution2(float_t  value) ;

constexpr void __cordl_internal_set_distribution3(float_t  value) ;

constexpr void __cordl_internal_set_forcedSkyboxSetup(bool  value) ;

constexpr void __cordl_internal_set_frontColorGradient0(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_frontColorGradient1(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_frontColorGradient2(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_frontColorGradient3(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_frontColorGradient4(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_frontColorGradient5(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_galaxyIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_galaxyTex(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_intensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_mieScatteringIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_mieScatteringMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_moonColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_moonGlowColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_moonGlowIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_moonGlowTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_moonMode(::Enviro::EnviroSky_MoonMode  value) ;

constexpr void __cordl_internal_set_moonPhase(float_t  value) ;

constexpr void __cordl_internal_set_moonScale(float_t  value) ;

constexpr void __cordl_internal_set_moonTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_skyColorExponent(float_t  value) ;

constexpr void __cordl_internal_set_skyColorTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_skyExposureHDRP(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_skyMode(::Enviro::EnviroSky_SkyMode  value) ;

constexpr void __cordl_internal_set_starIntensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_starsTex(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_starsTwinklingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_starsTwinklingTex(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_sunDiscColorGradient(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_sunScale(float_t  value) ;

constexpr void __cordl_internal_set_sunTex(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x18061d2d0, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroSky() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroSky", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroSky(EnviroSky && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroSky", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroSky(EnviroSky const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18496};

/// @brief Field skyMode, offset: 0x10, size: 0x4, def value: None
 ::Enviro::EnviroSky_SkyMode  ___skyMode;

/// @brief Field moonMode, offset: 0x14, size: 0x4, def value: None
 ::Enviro::EnviroSky_MoonMode  ___moonMode;

/// @brief Field forcedSkyboxSetup, offset: 0x18, size: 0x1, def value: None
 bool  ___forcedSkyboxSetup;

/// @brief Field frontColorGradient0, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___frontColorGradient0;

/// @brief Field frontColorGradient1, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___frontColorGradient1;

/// @brief Field frontColorGradient2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___frontColorGradient2;

/// @brief Field frontColorGradient3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___frontColorGradient3;

/// @brief Field frontColorGradient4, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___frontColorGradient4;

/// @brief Field frontColorGradient5, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___frontColorGradient5;

/// @brief Field backColorGradient0, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___backColorGradient0;

/// @brief Field backColorGradient1, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___backColorGradient1;

/// @brief Field backColorGradient2, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___backColorGradient2;

/// @brief Field backColorGradient3, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___backColorGradient3;

/// @brief Field backColorGradient4, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___backColorGradient4;

/// @brief Field backColorGradient5, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___backColorGradient5;

/// @brief Field sunDiscColorGradient, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___sunDiscColorGradient;

/// @brief Field moonColorGradient, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___moonColorGradient;

/// @brief Field moonGlowColorGradient, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___moonGlowColorGradient;

/// @brief Field starsTex, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___starsTex;

/// @brief Field starsTwinklingTex, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___starsTwinklingTex;

/// @brief Field galaxyTex, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___galaxyTex;

/// @brief Field sunTex, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___sunTex;

/// @brief Field moonTex, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___moonTex;

/// @brief Field moonGlowTex, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___moonGlowTex;

/// @brief Field distribution0, offset: 0xc8, size: 0x4, def value: None
 float_t  ___distribution0;

/// @brief Field distribution1, offset: 0xcc, size: 0x4, def value: None
 float_t  ___distribution1;

/// @brief Field distribution2, offset: 0xd0, size: 0x4, def value: None
 float_t  ___distribution2;

/// @brief Field distribution3, offset: 0xd4, size: 0x4, def value: None
 float_t  ___distribution3;

/// @brief Field mieScatteringIntensityCurve, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___mieScatteringIntensityCurve;

/// @brief Field moonGlowIntensityCurve, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___moonGlowIntensityCurve;

/// @brief Field starIntensityCurve, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___starIntensityCurve;

/// @brief Field galaxyIntensityCurve, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___galaxyIntensityCurve;

/// @brief Field intensityCurve, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___intensityCurve;

/// @brief Field intensity, offset: 0x100, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field sunScale, offset: 0x104, size: 0x4, def value: None
 float_t  ___sunScale;

/// @brief Field moonScale, offset: 0x108, size: 0x4, def value: None
 float_t  ___moonScale;

/// @brief Field mieScatteringMultiplier, offset: 0x10c, size: 0x4, def value: None
 float_t  ___mieScatteringMultiplier;

/// @brief Field starsTwinklingSpeed, offset: 0x110, size: 0x4, def value: None
 float_t  ___starsTwinklingSpeed;

/// @brief Field moonPhase, offset: 0x114, size: 0x4, def value: None
 float_t  ___moonPhase;

/// @brief Field skyExposureHDRP, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___skyExposureHDRP;

/// @brief Field skyColorTint, offset: 0x120, size: 0x10, def value: None
 ::UnityEngine::Color  ___skyColorTint;

/// @brief Field skyColorExponent, offset: 0x130, size: 0x4, def value: None
 float_t  ___skyColorExponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroSky, ___skyMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___forcedSkyboxSetup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___frontColorGradient0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___frontColorGradient1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___frontColorGradient2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___frontColorGradient3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___frontColorGradient4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___frontColorGradient5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___backColorGradient0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___backColorGradient1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___backColorGradient2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___backColorGradient3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___backColorGradient4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___backColorGradient5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___sunDiscColorGradient) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonColorGradient) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonGlowColorGradient) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___starsTex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___starsTwinklingTex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___galaxyTex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___sunTex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonTex) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonGlowTex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___distribution0) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___distribution1) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___distribution2) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___distribution3) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___mieScatteringIntensityCurve) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonGlowIntensityCurve) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___starIntensityCurve) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___galaxyIntensityCurve) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___intensityCurve) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___intensity) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___sunScale) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonScale) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___mieScatteringMultiplier) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___starsTwinklingSpeed) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___moonPhase) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___skyExposureHDRP) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___skyColorTint) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSky, ___skyColorExponent) == 0x130, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroSky) == 0x138, "Size mismatch!");

} // namespace end def Enviro
