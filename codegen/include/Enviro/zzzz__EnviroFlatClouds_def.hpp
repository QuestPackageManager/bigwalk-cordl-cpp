#pragma once
// IWYU pragma private; include "Enviro/EnviroFlatClouds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroFlatClouds)
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Enviro {
class EnviroFlatClouds;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroFlatClouds*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFlatClouds*, "Enviro", "EnviroFlatClouds");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroFlatClouds
class CORDL_TYPE EnviroFlatClouds : public ::System::Object {
public:
// Declarations
/// @brief Field cirrusCloudsAlpha, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsAlpha, put=__cordl_internal_set_cirrusCloudsAlpha)) float_t  cirrusCloudsAlpha;

/// @brief Field cirrusCloudsColor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsColor, put=__cordl_internal_set_cirrusCloudsColor)) ::UnityEngine::Gradient*  cirrusCloudsColor;

/// @brief Field cirrusCloudsColorPower, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsColorPower, put=__cordl_internal_set_cirrusCloudsColorPower)) float_t  cirrusCloudsColorPower;

/// @brief Field cirrusCloudsCoverage, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsCoverage, put=__cordl_internal_set_cirrusCloudsCoverage)) float_t  cirrusCloudsCoverage;

/// @brief Field cirrusCloudsTex, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsTex, put=__cordl_internal_set_cirrusCloudsTex)) ::UnityW<::UnityEngine::Texture2D>  cirrusCloudsTex;

/// @brief Field cirrusCloudsWindIntensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsWindIntensity, put=__cordl_internal_set_cirrusCloudsWindIntensity)) float_t  cirrusCloudsWindIntensity;

/// @brief Field flatCloudsAltitude, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsAltitude, put=__cordl_internal_set_flatCloudsAltitude)) float_t  flatCloudsAltitude;

/// @brief Field flatCloudsAmbientColor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudsAmbientColor, put=__cordl_internal_set_flatCloudsAmbientColor)) ::UnityEngine::Gradient*  flatCloudsAmbientColor;

/// @brief Field flatCloudsAmbientIntensity, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsAmbientIntensity, put=__cordl_internal_set_flatCloudsAmbientIntensity)) float_t  flatCloudsAmbientIntensity;

/// @brief Field flatCloudsBaseTex, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudsBaseTex, put=__cordl_internal_set_flatCloudsBaseTex)) ::UnityW<::UnityEngine::Texture2D>  flatCloudsBaseTex;

/// @brief Field flatCloudsBaseTiling, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsBaseTiling, put=__cordl_internal_set_flatCloudsBaseTiling)) float_t  flatCloudsBaseTiling;

/// @brief Field flatCloudsCoverage, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsCoverage, put=__cordl_internal_set_flatCloudsCoverage)) float_t  flatCloudsCoverage;

/// @brief Field flatCloudsDensity, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsDensity, put=__cordl_internal_set_flatCloudsDensity)) float_t  flatCloudsDensity;

/// @brief Field flatCloudsDetailTex, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudsDetailTex, put=__cordl_internal_set_flatCloudsDetailTex)) ::UnityW<::UnityEngine::Texture2D>  flatCloudsDetailTex;

/// @brief Field flatCloudsDetailTiling, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsDetailTiling, put=__cordl_internal_set_flatCloudsDetailTiling)) float_t  flatCloudsDetailTiling;

/// @brief Field flatCloudsDetailWindIntensity, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsDetailWindIntensity, put=__cordl_internal_set_flatCloudsDetailWindIntensity)) float_t  flatCloudsDetailWindIntensity;

/// @brief Field flatCloudsHGPhase, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsHGPhase, put=__cordl_internal_set_flatCloudsHGPhase)) float_t  flatCloudsHGPhase;

/// @brief Field flatCloudsLightColor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudsLightColor, put=__cordl_internal_set_flatCloudsLightColor)) ::UnityEngine::Gradient*  flatCloudsLightColor;

/// @brief Field flatCloudsLightIntensity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsLightIntensity, put=__cordl_internal_set_flatCloudsLightIntensity)) float_t  flatCloudsLightIntensity;

/// @brief Field flatCloudsShadowIntensity, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsShadowIntensity, put=__cordl_internal_set_flatCloudsShadowIntensity)) float_t  flatCloudsShadowIntensity;

/// @brief Field flatCloudsShadowSteps, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsShadowSteps, put=__cordl_internal_set_flatCloudsShadowSteps)) float_t  flatCloudsShadowSteps;

/// @brief Field flatCloudsTonemapping, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_flatCloudsTonemapping, put=__cordl_internal_set_flatCloudsTonemapping)) bool  flatCloudsTonemapping;

/// @brief Field flatCloudsWindIntensity, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsWindIntensity, put=__cordl_internal_set_flatCloudsWindIntensity)) float_t  flatCloudsWindIntensity;

/// @brief Field useCirrusClouds, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCirrusClouds, put=__cordl_internal_set_useCirrusClouds)) bool  useCirrusClouds;

/// @brief Field useFlatClouds, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useFlatClouds, put=__cordl_internal_set_useFlatClouds)) bool  useFlatClouds;

static inline ::Enviro::EnviroFlatClouds* New_ctor() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsAlpha() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsAlpha() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_cirrusCloudsColor() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_cirrusCloudsColor() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsColorPower() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsColorPower() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsCoverage() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsCoverage() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_cirrusCloudsTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_cirrusCloudsTex() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsWindIntensity() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsWindIntensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsAltitude() const;

constexpr float_t& __cordl_internal_get_flatCloudsAltitude() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_flatCloudsAmbientColor() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_flatCloudsAmbientColor() ;

constexpr float_t const& __cordl_internal_get_flatCloudsAmbientIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsAmbientIntensity() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_flatCloudsBaseTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_flatCloudsBaseTex() ;

constexpr float_t const& __cordl_internal_get_flatCloudsBaseTiling() const;

constexpr float_t& __cordl_internal_get_flatCloudsBaseTiling() ;

constexpr float_t const& __cordl_internal_get_flatCloudsCoverage() const;

constexpr float_t& __cordl_internal_get_flatCloudsCoverage() ;

constexpr float_t const& __cordl_internal_get_flatCloudsDensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsDensity() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_flatCloudsDetailTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_flatCloudsDetailTex() ;

constexpr float_t const& __cordl_internal_get_flatCloudsDetailTiling() const;

constexpr float_t& __cordl_internal_get_flatCloudsDetailTiling() ;

constexpr float_t const& __cordl_internal_get_flatCloudsDetailWindIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsDetailWindIntensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsHGPhase() const;

constexpr float_t& __cordl_internal_get_flatCloudsHGPhase() ;

constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_flatCloudsLightColor() const;

constexpr ::UnityEngine::Gradient*& __cordl_internal_get_flatCloudsLightColor() ;

constexpr float_t const& __cordl_internal_get_flatCloudsLightIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsLightIntensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsShadowIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsShadowIntensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsShadowSteps() const;

constexpr float_t& __cordl_internal_get_flatCloudsShadowSteps() ;

constexpr bool const& __cordl_internal_get_flatCloudsTonemapping() const;

constexpr bool& __cordl_internal_get_flatCloudsTonemapping() ;

constexpr float_t const& __cordl_internal_get_flatCloudsWindIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsWindIntensity() ;

constexpr bool const& __cordl_internal_get_useCirrusClouds() const;

constexpr bool& __cordl_internal_get_useCirrusClouds() ;

constexpr bool const& __cordl_internal_get_useFlatClouds() const;

constexpr bool& __cordl_internal_get_useFlatClouds() ;

constexpr void __cordl_internal_set_cirrusCloudsAlpha(float_t  value) ;

constexpr void __cordl_internal_set_cirrusCloudsColor(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_cirrusCloudsColorPower(float_t  value) ;

constexpr void __cordl_internal_set_cirrusCloudsCoverage(float_t  value) ;

constexpr void __cordl_internal_set_cirrusCloudsTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_cirrusCloudsWindIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsAltitude(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsAmbientColor(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_flatCloudsAmbientIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsBaseTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_flatCloudsBaseTiling(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsCoverage(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsDensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsDetailTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_flatCloudsDetailTiling(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsDetailWindIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsHGPhase(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsLightColor(::UnityEngine::Gradient*  value) ;

constexpr void __cordl_internal_set_flatCloudsLightIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsShadowIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsShadowSteps(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsTonemapping(bool  value) ;

constexpr void __cordl_internal_set_flatCloudsWindIntensity(float_t  value) ;

constexpr void __cordl_internal_set_useCirrusClouds(bool  value) ;

constexpr void __cordl_internal_set_useFlatClouds(bool  value) ;

/// @brief Method .ctor, addr 0x18060eb80, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFlatClouds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroFlatClouds", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroFlatClouds(EnviroFlatClouds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroFlatClouds", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroFlatClouds(EnviroFlatClouds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18451};

/// @brief Field useCirrusClouds, offset: 0x10, size: 0x1, def value: None
 bool  ___useCirrusClouds;

/// @brief Field cirrusCloudsTex, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___cirrusCloudsTex;

/// @brief Field cirrusCloudsAlpha, offset: 0x20, size: 0x4, def value: None
 float_t  ___cirrusCloudsAlpha;

/// @brief Field cirrusCloudsColorPower, offset: 0x24, size: 0x4, def value: None
 float_t  ___cirrusCloudsColorPower;

/// @brief Field cirrusCloudsCoverage, offset: 0x28, size: 0x4, def value: None
 float_t  ___cirrusCloudsCoverage;

/// @brief Field cirrusCloudsColor, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___cirrusCloudsColor;

/// @brief Field cirrusCloudsWindIntensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___cirrusCloudsWindIntensity;

/// @brief Field useFlatClouds, offset: 0x3c, size: 0x1, def value: None
 bool  ___useFlatClouds;

/// @brief Field flatCloudsBaseTex, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___flatCloudsBaseTex;

/// @brief Field flatCloudsDetailTex, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___flatCloudsDetailTex;

/// @brief Field flatCloudsLightColor, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___flatCloudsLightColor;

/// @brief Field flatCloudsAmbientColor, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Gradient*  ___flatCloudsAmbientColor;

/// @brief Field flatCloudsLightIntensity, offset: 0x60, size: 0x4, def value: None
 float_t  ___flatCloudsLightIntensity;

/// @brief Field flatCloudsAmbientIntensity, offset: 0x64, size: 0x4, def value: None
 float_t  ___flatCloudsAmbientIntensity;

/// @brief Field flatCloudsShadowIntensity, offset: 0x68, size: 0x4, def value: None
 float_t  ___flatCloudsShadowIntensity;

/// @brief Field flatCloudsShadowSteps, offset: 0x6c, size: 0x4, def value: None
 float_t  ___flatCloudsShadowSteps;

/// @brief Field flatCloudsHGPhase, offset: 0x70, size: 0x4, def value: None
 float_t  ___flatCloudsHGPhase;

/// @brief Field flatCloudsCoverage, offset: 0x74, size: 0x4, def value: None
 float_t  ___flatCloudsCoverage;

/// @brief Field flatCloudsDensity, offset: 0x78, size: 0x4, def value: None
 float_t  ___flatCloudsDensity;

/// @brief Field flatCloudsAltitude, offset: 0x7c, size: 0x4, def value: None
 float_t  ___flatCloudsAltitude;

/// @brief Field flatCloudsTonemapping, offset: 0x80, size: 0x1, def value: None
 bool  ___flatCloudsTonemapping;

/// @brief Field flatCloudsBaseTiling, offset: 0x84, size: 0x4, def value: None
 float_t  ___flatCloudsBaseTiling;

/// @brief Field flatCloudsDetailTiling, offset: 0x88, size: 0x4, def value: None
 float_t  ___flatCloudsDetailTiling;

/// @brief Field flatCloudsWindIntensity, offset: 0x8c, size: 0x4, def value: None
 float_t  ___flatCloudsWindIntensity;

/// @brief Field flatCloudsDetailWindIntensity, offset: 0x90, size: 0x4, def value: None
 float_t  ___flatCloudsDetailWindIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFlatClouds, ___useCirrusClouds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___cirrusCloudsTex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___cirrusCloudsAlpha) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___cirrusCloudsColorPower) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___cirrusCloudsCoverage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___cirrusCloudsColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___cirrusCloudsWindIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___useFlatClouds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsBaseTex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsDetailTex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsLightColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsAmbientColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsLightIntensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsAmbientIntensity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsShadowIntensity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsShadowSteps) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsHGPhase) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsCoverage) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsDensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsAltitude) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsTonemapping) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsBaseTiling) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsDetailTiling) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsWindIntensity) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatClouds, ___flatCloudsDetailWindIntensity) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFlatClouds) == 0x98, "Size mismatch!");

} // namespace end def Enviro
