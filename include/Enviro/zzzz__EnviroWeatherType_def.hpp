#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(EnviroWeatherType)
namespace Enviro {
class EnviroWeatherTypeAudioOverride;
}
namespace Enviro {
class EnviroWeatherTypeAuroraOverride;
}
namespace Enviro {
class EnviroWeatherTypeCloudsOverride;
}
namespace Enviro {
class EnviroWeatherTypeEffectsOverride;
}
namespace Enviro {
class EnviroWeatherTypeEnvironmentOverride;
}
namespace Enviro {
class EnviroWeatherTypeFlatCloudsOverride;
}
namespace Enviro {
class EnviroWeatherTypeFogOverride;
}
namespace Enviro {
class EnviroWeatherTypeLightingOverride;
}
namespace Enviro {
class EnviroWeatherTypeLightningOverride;
}
namespace Enviro {
class EnviroWeatherTypeSkyOverride;
}
// Forward declare root types
namespace Enviro {
class EnviroWeatherType;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherType*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherType*, "Enviro", "EnviroWeatherType");
// Dependencies UnityEngine.ScriptableObject
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherType
class CORDL_TYPE EnviroWeatherType : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field audioOverride, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioOverride, put=__cordl_internal_set_audioOverride)) ::Enviro::EnviroWeatherTypeAudioOverride*  audioOverride;

/// @brief Field auroraOverride, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_auroraOverride, put=__cordl_internal_set_auroraOverride)) ::Enviro::EnviroWeatherTypeAuroraOverride*  auroraOverride;

/// @brief Field cloudsOverride, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudsOverride, put=__cordl_internal_set_cloudsOverride)) ::Enviro::EnviroWeatherTypeCloudsOverride*  cloudsOverride;

/// @brief Field effectsOverride, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectsOverride, put=__cordl_internal_set_effectsOverride)) ::Enviro::EnviroWeatherTypeEffectsOverride*  effectsOverride;

/// @brief Field environmentOverride, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_environmentOverride, put=__cordl_internal_set_environmentOverride)) ::Enviro::EnviroWeatherTypeEnvironmentOverride*  environmentOverride;

/// @brief Field flatCloudsOverride, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudsOverride, put=__cordl_internal_set_flatCloudsOverride)) ::Enviro::EnviroWeatherTypeFlatCloudsOverride*  flatCloudsOverride;

/// @brief Field fogOverride, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_fogOverride, put=__cordl_internal_set_fogOverride)) ::Enviro::EnviroWeatherTypeFogOverride*  fogOverride;

/// @brief Field lightingOverride, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightingOverride, put=__cordl_internal_set_lightingOverride)) ::Enviro::EnviroWeatherTypeLightingOverride*  lightingOverride;

/// @brief Field lightningOverride, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightningOverride, put=__cordl_internal_set_lightningOverride)) ::Enviro::EnviroWeatherTypeLightningOverride*  lightningOverride;

/// @brief Field showAmbientAudioControls, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAmbientAudioControls, put=__cordl_internal_set_showAmbientAudioControls)) bool  showAmbientAudioControls;

/// @brief Field showAudioControls, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAudioControls, put=__cordl_internal_set_showAudioControls)) bool  showAudioControls;

/// @brief Field showAuroraControls, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAuroraControls, put=__cordl_internal_set_showAuroraControls)) bool  showAuroraControls;

/// @brief Field showCloudControls, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_showCloudControls, put=__cordl_internal_set_showCloudControls)) bool  showCloudControls;

/// @brief Field showEditor, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEditor, put=__cordl_internal_set_showEditor)) bool  showEditor;

/// @brief Field showEffectControls, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEffectControls, put=__cordl_internal_set_showEffectControls)) bool  showEffectControls;

/// @brief Field showEnvironmentControls, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEnvironmentControls, put=__cordl_internal_set_showEnvironmentControls)) bool  showEnvironmentControls;

/// @brief Field showFlatCloudControls, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFlatCloudControls, put=__cordl_internal_set_showFlatCloudControls)) bool  showFlatCloudControls;

/// @brief Field showFogControls, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFogControls, put=__cordl_internal_set_showFogControls)) bool  showFogControls;

/// @brief Field showLightingControls, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLightingControls, put=__cordl_internal_set_showLightingControls)) bool  showLightingControls;

/// @brief Field showLightningControls, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLightningControls, put=__cordl_internal_set_showLightningControls)) bool  showLightningControls;

/// @brief Field showSkyControls, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSkyControls, put=__cordl_internal_set_showSkyControls)) bool  showSkyControls;

/// @brief Field showWeatherAudioControls, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWeatherAudioControls, put=__cordl_internal_set_showWeatherAudioControls)) bool  showWeatherAudioControls;

/// @brief Field skyOverride, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyOverride, put=__cordl_internal_set_skyOverride)) ::Enviro::EnviroWeatherTypeSkyOverride*  skyOverride;

static inline ::Enviro::EnviroWeatherType* New_ctor() ;

constexpr ::Enviro::EnviroWeatherTypeAudioOverride* const& __cordl_internal_get_audioOverride() const;

constexpr ::Enviro::EnviroWeatherTypeAudioOverride*& __cordl_internal_get_audioOverride() ;

constexpr ::Enviro::EnviroWeatherTypeAuroraOverride* const& __cordl_internal_get_auroraOverride() const;

constexpr ::Enviro::EnviroWeatherTypeAuroraOverride*& __cordl_internal_get_auroraOverride() ;

constexpr ::Enviro::EnviroWeatherTypeCloudsOverride* const& __cordl_internal_get_cloudsOverride() const;

constexpr ::Enviro::EnviroWeatherTypeCloudsOverride*& __cordl_internal_get_cloudsOverride() ;

constexpr ::Enviro::EnviroWeatherTypeEffectsOverride* const& __cordl_internal_get_effectsOverride() const;

constexpr ::Enviro::EnviroWeatherTypeEffectsOverride*& __cordl_internal_get_effectsOverride() ;

constexpr ::Enviro::EnviroWeatherTypeEnvironmentOverride* const& __cordl_internal_get_environmentOverride() const;

constexpr ::Enviro::EnviroWeatherTypeEnvironmentOverride*& __cordl_internal_get_environmentOverride() ;

constexpr ::Enviro::EnviroWeatherTypeFlatCloudsOverride* const& __cordl_internal_get_flatCloudsOverride() const;

constexpr ::Enviro::EnviroWeatherTypeFlatCloudsOverride*& __cordl_internal_get_flatCloudsOverride() ;

constexpr ::Enviro::EnviroWeatherTypeFogOverride* const& __cordl_internal_get_fogOverride() const;

constexpr ::Enviro::EnviroWeatherTypeFogOverride*& __cordl_internal_get_fogOverride() ;

constexpr ::Enviro::EnviroWeatherTypeLightingOverride* const& __cordl_internal_get_lightingOverride() const;

constexpr ::Enviro::EnviroWeatherTypeLightingOverride*& __cordl_internal_get_lightingOverride() ;

constexpr ::Enviro::EnviroWeatherTypeLightningOverride* const& __cordl_internal_get_lightningOverride() const;

constexpr ::Enviro::EnviroWeatherTypeLightningOverride*& __cordl_internal_get_lightningOverride() ;

constexpr bool const& __cordl_internal_get_showAmbientAudioControls() const;

constexpr bool& __cordl_internal_get_showAmbientAudioControls() ;

constexpr bool const& __cordl_internal_get_showAudioControls() const;

constexpr bool& __cordl_internal_get_showAudioControls() ;

constexpr bool const& __cordl_internal_get_showAuroraControls() const;

constexpr bool& __cordl_internal_get_showAuroraControls() ;

constexpr bool const& __cordl_internal_get_showCloudControls() const;

constexpr bool& __cordl_internal_get_showCloudControls() ;

constexpr bool const& __cordl_internal_get_showEditor() const;

constexpr bool& __cordl_internal_get_showEditor() ;

constexpr bool const& __cordl_internal_get_showEffectControls() const;

constexpr bool& __cordl_internal_get_showEffectControls() ;

constexpr bool const& __cordl_internal_get_showEnvironmentControls() const;

constexpr bool& __cordl_internal_get_showEnvironmentControls() ;

constexpr bool const& __cordl_internal_get_showFlatCloudControls() const;

constexpr bool& __cordl_internal_get_showFlatCloudControls() ;

constexpr bool const& __cordl_internal_get_showFogControls() const;

constexpr bool& __cordl_internal_get_showFogControls() ;

constexpr bool const& __cordl_internal_get_showLightingControls() const;

constexpr bool& __cordl_internal_get_showLightingControls() ;

constexpr bool const& __cordl_internal_get_showLightningControls() const;

constexpr bool& __cordl_internal_get_showLightningControls() ;

constexpr bool const& __cordl_internal_get_showSkyControls() const;

constexpr bool& __cordl_internal_get_showSkyControls() ;

constexpr bool const& __cordl_internal_get_showWeatherAudioControls() const;

constexpr bool& __cordl_internal_get_showWeatherAudioControls() ;

constexpr ::Enviro::EnviroWeatherTypeSkyOverride* const& __cordl_internal_get_skyOverride() const;

constexpr ::Enviro::EnviroWeatherTypeSkyOverride*& __cordl_internal_get_skyOverride() ;

constexpr void __cordl_internal_set_audioOverride(::Enviro::EnviroWeatherTypeAudioOverride*  value) ;

constexpr void __cordl_internal_set_auroraOverride(::Enviro::EnviroWeatherTypeAuroraOverride*  value) ;

constexpr void __cordl_internal_set_cloudsOverride(::Enviro::EnviroWeatherTypeCloudsOverride*  value) ;

constexpr void __cordl_internal_set_effectsOverride(::Enviro::EnviroWeatherTypeEffectsOverride*  value) ;

constexpr void __cordl_internal_set_environmentOverride(::Enviro::EnviroWeatherTypeEnvironmentOverride*  value) ;

constexpr void __cordl_internal_set_flatCloudsOverride(::Enviro::EnviroWeatherTypeFlatCloudsOverride*  value) ;

constexpr void __cordl_internal_set_fogOverride(::Enviro::EnviroWeatherTypeFogOverride*  value) ;

constexpr void __cordl_internal_set_lightingOverride(::Enviro::EnviroWeatherTypeLightingOverride*  value) ;

constexpr void __cordl_internal_set_lightningOverride(::Enviro::EnviroWeatherTypeLightningOverride*  value) ;

constexpr void __cordl_internal_set_showAmbientAudioControls(bool  value) ;

constexpr void __cordl_internal_set_showAudioControls(bool  value) ;

constexpr void __cordl_internal_set_showAuroraControls(bool  value) ;

constexpr void __cordl_internal_set_showCloudControls(bool  value) ;

constexpr void __cordl_internal_set_showEditor(bool  value) ;

constexpr void __cordl_internal_set_showEffectControls(bool  value) ;

constexpr void __cordl_internal_set_showEnvironmentControls(bool  value) ;

constexpr void __cordl_internal_set_showFlatCloudControls(bool  value) ;

constexpr void __cordl_internal_set_showFogControls(bool  value) ;

constexpr void __cordl_internal_set_showLightingControls(bool  value) ;

constexpr void __cordl_internal_set_showLightningControls(bool  value) ;

constexpr void __cordl_internal_set_showSkyControls(bool  value) ;

constexpr void __cordl_internal_set_showWeatherAudioControls(bool  value) ;

constexpr void __cordl_internal_set_skyOverride(::Enviro::EnviroWeatherTypeSkyOverride*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherType(EnviroWeatherType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherType(EnviroWeatherType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18521};

/// @brief Field showEditor, offset: 0x18, size: 0x1, def value: None
 bool  ___showEditor;

/// @brief Field showEffectControls, offset: 0x19, size: 0x1, def value: None
 bool  ___showEffectControls;

/// @brief Field showCloudControls, offset: 0x1a, size: 0x1, def value: None
 bool  ___showCloudControls;

/// @brief Field showFlatCloudControls, offset: 0x1b, size: 0x1, def value: None
 bool  ___showFlatCloudControls;

/// @brief Field showFogControls, offset: 0x1c, size: 0x1, def value: None
 bool  ___showFogControls;

/// @brief Field showSkyControls, offset: 0x1d, size: 0x1, def value: None
 bool  ___showSkyControls;

/// @brief Field showLightingControls, offset: 0x1e, size: 0x1, def value: None
 bool  ___showLightingControls;

/// @brief Field showAuroraControls, offset: 0x1f, size: 0x1, def value: None
 bool  ___showAuroraControls;

/// @brief Field showEnvironmentControls, offset: 0x20, size: 0x1, def value: None
 bool  ___showEnvironmentControls;

/// @brief Field showAudioControls, offset: 0x21, size: 0x1, def value: None
 bool  ___showAudioControls;

/// @brief Field showAmbientAudioControls, offset: 0x22, size: 0x1, def value: None
 bool  ___showAmbientAudioControls;

/// @brief Field showWeatherAudioControls, offset: 0x23, size: 0x1, def value: None
 bool  ___showWeatherAudioControls;

/// @brief Field showLightningControls, offset: 0x24, size: 0x1, def value: None
 bool  ___showLightningControls;

/// @brief Field cloudsOverride, offset: 0x28, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeCloudsOverride*  ___cloudsOverride;

/// @brief Field flatCloudsOverride, offset: 0x30, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeFlatCloudsOverride*  ___flatCloudsOverride;

/// @brief Field lightingOverride, offset: 0x38, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeLightingOverride*  ___lightingOverride;

/// @brief Field skyOverride, offset: 0x40, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeSkyOverride*  ___skyOverride;

/// @brief Field fogOverride, offset: 0x48, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeFogOverride*  ___fogOverride;

/// @brief Field auroraOverride, offset: 0x50, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeAuroraOverride*  ___auroraOverride;

/// @brief Field effectsOverride, offset: 0x58, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeEffectsOverride*  ___effectsOverride;

/// @brief Field audioOverride, offset: 0x60, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeAudioOverride*  ___audioOverride;

/// @brief Field lightningOverride, offset: 0x68, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeLightningOverride*  ___lightningOverride;

/// @brief Field environmentOverride, offset: 0x70, size: 0x8, def value: None
 ::Enviro::EnviroWeatherTypeEnvironmentOverride*  ___environmentOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherType, ___showEditor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showEffectControls) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showCloudControls) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showFlatCloudControls) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showFogControls) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showSkyControls) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showLightingControls) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showAuroraControls) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showEnvironmentControls) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showAudioControls) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showAmbientAudioControls) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showWeatherAudioControls) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___showLightningControls) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___cloudsOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___flatCloudsOverride) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___lightingOverride) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___skyOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___fogOverride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___auroraOverride) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___effectsOverride) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___audioOverride) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___lightningOverride) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherType, ___environmentOverride) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherType) == 0x78, "Size mismatch!");

} // namespace end def Enviro
