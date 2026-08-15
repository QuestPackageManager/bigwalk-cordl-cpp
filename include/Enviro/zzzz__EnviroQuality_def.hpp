#pragma once
// IWYU pragma private; include "Enviro/EnviroQuality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(EnviroQuality)
namespace Enviro {
class EnviroAuroraQualitySettings;
}
namespace Enviro {
class EnviroEffectsQualitySettings;
}
namespace Enviro {
class EnviroFlatCloudsQualitySettings;
}
namespace Enviro {
class EnviroFogQualitySettings;
}
namespace Enviro {
class EnviroSkyQualitySettings;
}
namespace Enviro {
class EnviroVolumetricCloudsQualitySettings;
}
// Forward declare root types
namespace Enviro {
class EnviroQuality;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroQuality*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroQuality*, "Enviro", "EnviroQuality");
// Dependencies UnityEngine.ScriptableObject
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroQuality
class CORDL_TYPE EnviroQuality : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field auroraOverride, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_auroraOverride, put=__cordl_internal_set_auroraOverride)) ::Enviro::EnviroAuroraQualitySettings*  auroraOverride;

/// @brief Field effectsOverride, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectsOverride, put=__cordl_internal_set_effectsOverride)) ::Enviro::EnviroEffectsQualitySettings*  effectsOverride;

/// @brief Field flatCloudsOverride, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudsOverride, put=__cordl_internal_set_flatCloudsOverride)) ::Enviro::EnviroFlatCloudsQualitySettings*  flatCloudsOverride;

/// @brief Field fogOverride, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fogOverride, put=__cordl_internal_set_fogOverride)) ::Enviro::EnviroFogQualitySettings*  fogOverride;

/// @brief Field showAurora, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAurora, put=__cordl_internal_set_showAurora)) bool  showAurora;

/// @brief Field showEditor, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEditor, put=__cordl_internal_set_showEditor)) bool  showEditor;

/// @brief Field showEffects, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEffects, put=__cordl_internal_set_showEffects)) bool  showEffects;

/// @brief Field showFlatClouds, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFlatClouds, put=__cordl_internal_set_showFlatClouds)) bool  showFlatClouds;

/// @brief Field showFog, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFog, put=__cordl_internal_set_showFog)) bool  showFog;

/// @brief Field showSky, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSky, put=__cordl_internal_set_showSky)) bool  showSky;

/// @brief Field showVolumeClouds, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_showVolumeClouds, put=__cordl_internal_set_showVolumeClouds)) bool  showVolumeClouds;

/// @brief Field skyOverride, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyOverride, put=__cordl_internal_set_skyOverride)) ::Enviro::EnviroSkyQualitySettings*  skyOverride;

/// @brief Field volumetricCloudsOverride, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricCloudsOverride, put=__cordl_internal_set_volumetricCloudsOverride)) ::Enviro::EnviroVolumetricCloudsQualitySettings*  volumetricCloudsOverride;

static inline ::Enviro::EnviroQuality* New_ctor() ;

constexpr ::Enviro::EnviroAuroraQualitySettings* const& __cordl_internal_get_auroraOverride() const;

constexpr ::Enviro::EnviroAuroraQualitySettings*& __cordl_internal_get_auroraOverride() ;

constexpr ::Enviro::EnviroEffectsQualitySettings* const& __cordl_internal_get_effectsOverride() const;

constexpr ::Enviro::EnviroEffectsQualitySettings*& __cordl_internal_get_effectsOverride() ;

constexpr ::Enviro::EnviroFlatCloudsQualitySettings* const& __cordl_internal_get_flatCloudsOverride() const;

constexpr ::Enviro::EnviroFlatCloudsQualitySettings*& __cordl_internal_get_flatCloudsOverride() ;

constexpr ::Enviro::EnviroFogQualitySettings* const& __cordl_internal_get_fogOverride() const;

constexpr ::Enviro::EnviroFogQualitySettings*& __cordl_internal_get_fogOverride() ;

constexpr bool const& __cordl_internal_get_showAurora() const;

constexpr bool& __cordl_internal_get_showAurora() ;

constexpr bool const& __cordl_internal_get_showEditor() const;

constexpr bool& __cordl_internal_get_showEditor() ;

constexpr bool const& __cordl_internal_get_showEffects() const;

constexpr bool& __cordl_internal_get_showEffects() ;

constexpr bool const& __cordl_internal_get_showFlatClouds() const;

constexpr bool& __cordl_internal_get_showFlatClouds() ;

constexpr bool const& __cordl_internal_get_showFog() const;

constexpr bool& __cordl_internal_get_showFog() ;

constexpr bool const& __cordl_internal_get_showSky() const;

constexpr bool& __cordl_internal_get_showSky() ;

constexpr bool const& __cordl_internal_get_showVolumeClouds() const;

constexpr bool& __cordl_internal_get_showVolumeClouds() ;

constexpr ::Enviro::EnviroSkyQualitySettings* const& __cordl_internal_get_skyOverride() const;

constexpr ::Enviro::EnviroSkyQualitySettings*& __cordl_internal_get_skyOverride() ;

constexpr ::Enviro::EnviroVolumetricCloudsQualitySettings* const& __cordl_internal_get_volumetricCloudsOverride() const;

constexpr ::Enviro::EnviroVolumetricCloudsQualitySettings*& __cordl_internal_get_volumetricCloudsOverride() ;

constexpr void __cordl_internal_set_auroraOverride(::Enviro::EnviroAuroraQualitySettings*  value) ;

constexpr void __cordl_internal_set_effectsOverride(::Enviro::EnviroEffectsQualitySettings*  value) ;

constexpr void __cordl_internal_set_flatCloudsOverride(::Enviro::EnviroFlatCloudsQualitySettings*  value) ;

constexpr void __cordl_internal_set_fogOverride(::Enviro::EnviroFogQualitySettings*  value) ;

constexpr void __cordl_internal_set_showAurora(bool  value) ;

constexpr void __cordl_internal_set_showEditor(bool  value) ;

constexpr void __cordl_internal_set_showEffects(bool  value) ;

constexpr void __cordl_internal_set_showFlatClouds(bool  value) ;

constexpr void __cordl_internal_set_showFog(bool  value) ;

constexpr void __cordl_internal_set_showSky(bool  value) ;

constexpr void __cordl_internal_set_showVolumeClouds(bool  value) ;

constexpr void __cordl_internal_set_skyOverride(::Enviro::EnviroSkyQualitySettings*  value) ;

constexpr void __cordl_internal_set_volumetricCloudsOverride(::Enviro::EnviroVolumetricCloudsQualitySettings*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroQuality() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroQuality", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroQuality(EnviroQuality && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroQuality", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroQuality(EnviroQuality const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18478};

/// @brief Field showEditor, offset: 0x18, size: 0x1, def value: None
 bool  ___showEditor;

/// @brief Field showSky, offset: 0x19, size: 0x1, def value: None
 bool  ___showSky;

/// @brief Field showVolumeClouds, offset: 0x1a, size: 0x1, def value: None
 bool  ___showVolumeClouds;

/// @brief Field showFog, offset: 0x1b, size: 0x1, def value: None
 bool  ___showFog;

/// @brief Field showFlatClouds, offset: 0x1c, size: 0x1, def value: None
 bool  ___showFlatClouds;

/// @brief Field showEffects, offset: 0x1d, size: 0x1, def value: None
 bool  ___showEffects;

/// @brief Field showAurora, offset: 0x1e, size: 0x1, def value: None
 bool  ___showAurora;

/// @brief Field skyOverride, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroSkyQualitySettings*  ___skyOverride;

/// @brief Field volumetricCloudsOverride, offset: 0x28, size: 0x8, def value: None
 ::Enviro::EnviroVolumetricCloudsQualitySettings*  ___volumetricCloudsOverride;

/// @brief Field fogOverride, offset: 0x30, size: 0x8, def value: None
 ::Enviro::EnviroFogQualitySettings*  ___fogOverride;

/// @brief Field flatCloudsOverride, offset: 0x38, size: 0x8, def value: None
 ::Enviro::EnviroFlatCloudsQualitySettings*  ___flatCloudsOverride;

/// @brief Field auroraOverride, offset: 0x40, size: 0x8, def value: None
 ::Enviro::EnviroAuroraQualitySettings*  ___auroraOverride;

/// @brief Field effectsOverride, offset: 0x48, size: 0x8, def value: None
 ::Enviro::EnviroEffectsQualitySettings*  ___effectsOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroQuality, ___showEditor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___showSky) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___showVolumeClouds) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___showFog) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___showFlatClouds) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___showEffects) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___showAurora) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___skyOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___volumetricCloudsOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___fogOverride) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___flatCloudsOverride) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___auroraOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQuality, ___effectsOverride) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroQuality) == 0x50, "Size mismatch!");

} // namespace end def Enviro
