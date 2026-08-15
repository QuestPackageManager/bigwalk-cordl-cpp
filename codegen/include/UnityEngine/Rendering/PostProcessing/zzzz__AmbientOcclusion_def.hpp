#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(AmbientOcclusion)
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusionModeParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusionQualityParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class BoolParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class ColorParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusion;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*, "UnityEngine.Rendering.PostProcessing", "AmbientOcclusion");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.AmbientOcclusion
class CORDL_TYPE AmbientOcclusion : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field ambientOnly, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientOnly, put=__cordl_internal_set_ambientOnly)) ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ambientOnly;

/// @brief Field blurTolerance, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_blurTolerance, put=__cordl_internal_set_blurTolerance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  blurTolerance;

/// @brief Field color, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Rendering::PostProcessing::ColorParameter*  color;

/// @brief Field directLightingStrength, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_directLightingStrength, put=__cordl_internal_set_directLightingStrength)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  directLightingStrength;

/// @brief Field intensity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensity;

/// @brief Field mode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*  mode;

/// @brief Field noiseFilterTolerance, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseFilterTolerance, put=__cordl_internal_set_noiseFilterTolerance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  noiseFilterTolerance;

/// @brief Field quality, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter*  quality;

/// @brief Field radius, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  radius;

/// @brief Field thicknessModifier, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_thicknessModifier, put=__cordl_internal_set_thicknessModifier)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  thicknessModifier;

/// @brief Field upsampleTolerance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_upsampleTolerance, put=__cordl_internal_set_upsampleTolerance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  upsampleTolerance;

/// @brief Field zBias, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_zBias, put=__cordl_internal_set_zBias)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  zBias;

/// @brief Method IsEnabledAndSupported, addr 0x181fb08b0, size 0x1c0, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::AmbientOcclusion* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& __cordl_internal_get_ambientOnly() const;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& __cordl_internal_get_ambientOnly() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_blurTolerance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_blurTolerance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& __cordl_internal_get_color() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_directLightingStrength() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_directLightingStrength() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter* const& __cordl_internal_get_mode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*& __cordl_internal_get_mode() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_noiseFilterTolerance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_noiseFilterTolerance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter* const& __cordl_internal_get_quality() const;

constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter*& __cordl_internal_get_quality() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_radius() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_radius() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_thicknessModifier() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_thicknessModifier() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_upsampleTolerance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_upsampleTolerance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_zBias() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_zBias() ;

constexpr void __cordl_internal_set_ambientOnly(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value) ;

constexpr void __cordl_internal_set_blurTolerance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value) ;

constexpr void __cordl_internal_set_directLightingStrength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*  value) ;

constexpr void __cordl_internal_set_noiseFilterTolerance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_quality(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter*  value) ;

constexpr void __cordl_internal_set_radius(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_thicknessModifier(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_upsampleTolerance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_zBias(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb0a70, size 0x270, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbientOcclusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbientOcclusion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbientOcclusion(AmbientOcclusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbientOcclusion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbientOcclusion(AmbientOcclusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18542};

/// @brief Field mode, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*  ___mode;

/// @brief Field intensity, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensity;

/// @brief Field color, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::ColorParameter*  ___color;

/// @brief Field ambientOnly, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ___ambientOnly;

/// @brief Field noiseFilterTolerance, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___noiseFilterTolerance;

/// @brief Field blurTolerance, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___blurTolerance;

/// @brief Field upsampleTolerance, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___upsampleTolerance;

/// @brief Field thicknessModifier, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___thicknessModifier;

/// @brief Field zBias, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___zBias;

/// @brief Field directLightingStrength, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___directLightingStrength;

/// @brief Field radius, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___radius;

/// @brief Field quality, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter*  ___quality;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___ambientOnly) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___noiseFilterTolerance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___blurTolerance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___upsampleTolerance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___thicknessModifier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___zBias) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___directLightingStrength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___radius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion, ___quality) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusion) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
