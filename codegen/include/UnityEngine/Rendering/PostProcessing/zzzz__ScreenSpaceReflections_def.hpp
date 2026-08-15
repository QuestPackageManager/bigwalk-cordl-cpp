#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScreenSpaceReflections.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceReflections)
namespace UnityEngine::Rendering::PostProcessing {
class FloatParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class IntParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflectionPresetParameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflectionResolutionParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class ScreenSpaceReflections;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*, "UnityEngine.Rendering.PostProcessing", "ScreenSpaceReflections");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ScreenSpaceReflections
class CORDL_TYPE ScreenSpaceReflections : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field distanceFade, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_distanceFade, put=__cordl_internal_set_distanceFade)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  distanceFade;

/// @brief Field maximumIterationCount, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_maximumIterationCount, put=__cordl_internal_set_maximumIterationCount)) ::UnityEngine::Rendering::PostProcessing::IntParameter*  maximumIterationCount;

/// @brief Field maximumMarchDistance, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_maximumMarchDistance, put=__cordl_internal_set_maximumMarchDistance)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  maximumMarchDistance;

/// @brief Field preset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter*  preset;

/// @brief Field resolution, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter*  resolution;

/// @brief Field thickness, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_thickness, put=__cordl_internal_set_thickness)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  thickness;

/// @brief Field vignette, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_vignette, put=__cordl_internal_set_vignette)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  vignette;

/// @brief Method IsEnabledAndSupported, addr 0x181fbd7a0, size 0xa0, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_distanceFade() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_distanceFade() ;

constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter* const& __cordl_internal_get_maximumIterationCount() const;

constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter*& __cordl_internal_get_maximumIterationCount() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_maximumMarchDistance() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_maximumMarchDistance() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter* const& __cordl_internal_get_preset() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter*& __cordl_internal_get_preset() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter* const& __cordl_internal_get_resolution() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter*& __cordl_internal_get_resolution() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_thickness() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_thickness() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_vignette() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_vignette() ;

constexpr void __cordl_internal_set_distanceFade(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_maximumIterationCount(::UnityEngine::Rendering::PostProcessing::IntParameter*  value) ;

constexpr void __cordl_internal_set_maximumMarchDistance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_preset(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter*  value) ;

constexpr void __cordl_internal_set_resolution(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter*  value) ;

constexpr void __cordl_internal_set_thickness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_vignette(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fbd840, size 0x180, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceReflections() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceReflections", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceReflections(ScreenSpaceReflections && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceReflections", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceReflections(ScreenSpaceReflections const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18586};

/// @brief Field preset, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter*  ___preset;

/// @brief Field maximumIterationCount, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::IntParameter*  ___maximumIterationCount;

/// @brief Field resolution, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter*  ___resolution;

/// @brief Field thickness, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___thickness;

/// @brief Field maximumMarchDistance, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___maximumMarchDistance;

/// @brief Field distanceFade, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___distanceFade;

/// @brief Field vignette, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___vignette;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___preset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___maximumIterationCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___resolution) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___thickness) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___maximumMarchDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___distanceFade) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections, ___vignette) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
