#pragma once
// IWYU pragma private; include "Enviro/EnviroAurora.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroAurora)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Enviro {
class EnviroAurora;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroAurora*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAurora*, "Enviro", "EnviroAurora");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector4
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAurora
class CORDL_TYPE EnviroAurora : public ::System::Object {
public:
// Declarations
/// @brief Field auroraBrightness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraBrightness, put=__cordl_internal_set_auroraBrightness)) float_t  auroraBrightness;

/// @brief Field auroraColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_auroraColor, put=__cordl_internal_set_auroraColor)) ::UnityEngine::Color  auroraColor;

/// @brief Field auroraColorshiftSettings, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_auroraColorshiftSettings, put=__cordl_internal_set_auroraColorshiftSettings)) ::UnityEngine::Vector4  auroraColorshiftSettings;

/// @brief Field auroraContrast, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraContrast, put=__cordl_internal_set_auroraContrast)) float_t  auroraContrast;

/// @brief Field auroraHeight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraHeight, put=__cordl_internal_set_auroraHeight)) float_t  auroraHeight;

/// @brief Field auroraIntensity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_auroraIntensity, put=__cordl_internal_set_auroraIntensity)) ::UnityEngine::AnimationCurve*  auroraIntensity;

/// @brief Field auroraIntensityModifier, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraIntensityModifier, put=__cordl_internal_set_auroraIntensityModifier)) float_t  auroraIntensityModifier;

/// @brief Field auroraLayer1Settings, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_auroraLayer1Settings, put=__cordl_internal_set_auroraLayer1Settings)) ::UnityEngine::Vector4  auroraLayer1Settings;

/// @brief Field auroraLayer2Settings, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_auroraLayer2Settings, put=__cordl_internal_set_auroraLayer2Settings)) ::UnityEngine::Vector4  auroraLayer2Settings;

/// @brief Field auroraScale, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraScale, put=__cordl_internal_set_auroraScale)) float_t  auroraScale;

/// @brief Field auroraSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraSpeed, put=__cordl_internal_set_auroraSpeed)) float_t  auroraSpeed;

/// @brief Field auroraSteps, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraSteps, put=__cordl_internal_set_auroraSteps)) int32_t  auroraSteps;

/// @brief Field aurora_colorshift, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_aurora_colorshift, put=__cordl_internal_set_aurora_colorshift)) ::UnityW<::UnityEngine::Texture2D>  aurora_colorshift;

/// @brief Field aurora_layer_1, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_aurora_layer_1, put=__cordl_internal_set_aurora_layer_1)) ::UnityW<::UnityEngine::Texture2D>  aurora_layer_1;

/// @brief Field aurora_layer_2, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_aurora_layer_2, put=__cordl_internal_set_aurora_layer_2)) ::UnityW<::UnityEngine::Texture2D>  aurora_layer_2;

/// @brief Field useAurora, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_useAurora, put=__cordl_internal_set_useAurora)) bool  useAurora;

static inline ::Enviro::EnviroAurora* New_ctor() ;

constexpr float_t const& __cordl_internal_get_auroraBrightness() const;

constexpr float_t& __cordl_internal_get_auroraBrightness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_auroraColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_auroraColor() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_auroraColorshiftSettings() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_auroraColorshiftSettings() ;

constexpr float_t const& __cordl_internal_get_auroraContrast() const;

constexpr float_t& __cordl_internal_get_auroraContrast() ;

constexpr float_t const& __cordl_internal_get_auroraHeight() const;

constexpr float_t& __cordl_internal_get_auroraHeight() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_auroraIntensity() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_auroraIntensity() ;

constexpr float_t const& __cordl_internal_get_auroraIntensityModifier() const;

constexpr float_t& __cordl_internal_get_auroraIntensityModifier() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_auroraLayer1Settings() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_auroraLayer1Settings() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_auroraLayer2Settings() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_auroraLayer2Settings() ;

constexpr float_t const& __cordl_internal_get_auroraScale() const;

constexpr float_t& __cordl_internal_get_auroraScale() ;

constexpr float_t const& __cordl_internal_get_auroraSpeed() const;

constexpr float_t& __cordl_internal_get_auroraSpeed() ;

constexpr int32_t const& __cordl_internal_get_auroraSteps() const;

constexpr int32_t& __cordl_internal_get_auroraSteps() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_aurora_colorshift() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_aurora_colorshift() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_aurora_layer_1() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_aurora_layer_1() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_aurora_layer_2() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_aurora_layer_2() ;

constexpr bool const& __cordl_internal_get_useAurora() const;

constexpr bool& __cordl_internal_get_useAurora() ;

constexpr void __cordl_internal_set_auroraBrightness(float_t  value) ;

constexpr void __cordl_internal_set_auroraColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_auroraColorshiftSettings(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_auroraContrast(float_t  value) ;

constexpr void __cordl_internal_set_auroraHeight(float_t  value) ;

constexpr void __cordl_internal_set_auroraIntensity(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_auroraIntensityModifier(float_t  value) ;

constexpr void __cordl_internal_set_auroraLayer1Settings(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_auroraLayer2Settings(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_auroraScale(float_t  value) ;

constexpr void __cordl_internal_set_auroraSpeed(float_t  value) ;

constexpr void __cordl_internal_set_auroraSteps(int32_t  value) ;

constexpr void __cordl_internal_set_aurora_colorshift(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_aurora_layer_1(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_aurora_layer_2(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_useAurora(bool  value) ;

/// @brief Method .ctor, addr 0x1805fdf50, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAurora() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAurora", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAurora(EnviroAurora && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAurora", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAurora(EnviroAurora const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18438};

/// @brief Field useAurora, offset: 0x10, size: 0x1, def value: None
 bool  ___useAurora;

/// @brief Field auroraIntensityModifier, offset: 0x14, size: 0x4, def value: None
 float_t  ___auroraIntensityModifier;

/// @brief Field auroraIntensity, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___auroraIntensity;

/// @brief Field auroraColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___auroraColor;

/// @brief Field auroraBrightness, offset: 0x30, size: 0x4, def value: None
 float_t  ___auroraBrightness;

/// @brief Field auroraContrast, offset: 0x34, size: 0x4, def value: None
 float_t  ___auroraContrast;

/// @brief Field auroraHeight, offset: 0x38, size: 0x4, def value: None
 float_t  ___auroraHeight;

/// @brief Field auroraScale, offset: 0x3c, size: 0x4, def value: None
 float_t  ___auroraScale;

/// @brief Field auroraSteps, offset: 0x40, size: 0x4, def value: None
 int32_t  ___auroraSteps;

/// @brief Field auroraLayer1Settings, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___auroraLayer1Settings;

/// @brief Field auroraLayer2Settings, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___auroraLayer2Settings;

/// @brief Field auroraColorshiftSettings, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___auroraColorshiftSettings;

/// @brief Field auroraSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___auroraSpeed;

/// @brief Field aurora_layer_1, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___aurora_layer_1;

/// @brief Field aurora_layer_2, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___aurora_layer_2;

/// @brief Field aurora_colorshift, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___aurora_colorshift;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAurora, ___useAurora) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraIntensityModifier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraBrightness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraContrast) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraSteps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraLayer1Settings) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraLayer2Settings) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraColorshiftSettings) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___auroraSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___aurora_layer_1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___aurora_layer_2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAurora, ___aurora_colorshift) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAurora) == 0x90, "Size mismatch!");

} // namespace end def Enviro
