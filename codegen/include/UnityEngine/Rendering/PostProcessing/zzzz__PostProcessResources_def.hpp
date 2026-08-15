#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(PostProcessResources)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources_ComputeShaders;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources_SMAALuts;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources_Shaders;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources_ComputeShaders;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources_SMAALuts;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources_Shaders;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessResources*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessResources*, "UnityEngine.Rendering.PostProcessing", "PostProcessResources");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*, "UnityEngine.Rendering.PostProcessing", "PostProcessResources/ComputeShaders");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*, "UnityEngine.Rendering.PostProcessing", "PostProcessResources/SMAALuts");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*, "UnityEngine.Rendering.PostProcessing", "PostProcessResources/Shaders");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
class CORDL_TYPE PostProcessResources_Shaders : public ::System::Object {
public:
// Declarations
/// @brief Field bloom, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bloom, put=__cordl_internal_set_bloom)) ::UnityW<::UnityEngine::Shader>  bloom;

/// @brief Field copy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_copy, put=__cordl_internal_set_copy)) ::UnityW<::UnityEngine::Shader>  copy;

/// @brief Field copyStd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_copyStd, put=__cordl_internal_set_copyStd)) ::UnityW<::UnityEngine::Shader>  copyStd;

/// @brief Field copyStdFromDoubleWide, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_copyStdFromDoubleWide, put=__cordl_internal_set_copyStdFromDoubleWide)) ::UnityW<::UnityEngine::Shader>  copyStdFromDoubleWide;

/// @brief Field copyStdFromTexArray, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_copyStdFromTexArray, put=__cordl_internal_set_copyStdFromTexArray)) ::UnityW<::UnityEngine::Shader>  copyStdFromTexArray;

/// @brief Field debugOverlays, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugOverlays, put=__cordl_internal_set_debugOverlays)) ::UnityW<::UnityEngine::Shader>  debugOverlays;

/// @brief Field deferredFog, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_deferredFog, put=__cordl_internal_set_deferredFog)) ::UnityW<::UnityEngine::Shader>  deferredFog;

/// @brief Field depthOfField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_depthOfField, put=__cordl_internal_set_depthOfField)) ::UnityW<::UnityEngine::Shader>  depthOfField;

/// @brief Field discardAlpha, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_discardAlpha, put=__cordl_internal_set_discardAlpha)) ::UnityW<::UnityEngine::Shader>  discardAlpha;

/// @brief Field finalPass, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalPass, put=__cordl_internal_set_finalPass)) ::UnityW<::UnityEngine::Shader>  finalPass;

/// @brief Field gammaHistogram, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_gammaHistogram, put=__cordl_internal_set_gammaHistogram)) ::UnityW<::UnityEngine::Shader>  gammaHistogram;

/// @brief Field grainBaker, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_grainBaker, put=__cordl_internal_set_grainBaker)) ::UnityW<::UnityEngine::Shader>  grainBaker;

/// @brief Field lightMeter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightMeter, put=__cordl_internal_set_lightMeter)) ::UnityW<::UnityEngine::Shader>  lightMeter;

/// @brief Field lut2DBaker, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_lut2DBaker, put=__cordl_internal_set_lut2DBaker)) ::UnityW<::UnityEngine::Shader>  lut2DBaker;

/// @brief Field motionBlur, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_motionBlur, put=__cordl_internal_set_motionBlur)) ::UnityW<::UnityEngine::Shader>  motionBlur;

/// @brief Field multiScaleAO, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiScaleAO, put=__cordl_internal_set_multiScaleAO)) ::UnityW<::UnityEngine::Shader>  multiScaleAO;

/// @brief Field scalableAO, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_scalableAO, put=__cordl_internal_set_scalableAO)) ::UnityW<::UnityEngine::Shader>  scalableAO;

/// @brief Field screenSpaceReflections, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenSpaceReflections, put=__cordl_internal_set_screenSpaceReflections)) ::UnityW<::UnityEngine::Shader>  screenSpaceReflections;

/// @brief Field subpixelMorphologicalAntialiasing, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_subpixelMorphologicalAntialiasing, put=__cordl_internal_set_subpixelMorphologicalAntialiasing)) ::UnityW<::UnityEngine::Shader>  subpixelMorphologicalAntialiasing;

/// @brief Field temporalAntialiasing, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporalAntialiasing, put=__cordl_internal_set_temporalAntialiasing)) ::UnityW<::UnityEngine::Shader>  temporalAntialiasing;

/// @brief Field texture2dLerp, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture2dLerp, put=__cordl_internal_set_texture2dLerp)) ::UnityW<::UnityEngine::Shader>  texture2dLerp;

/// @brief Field uber, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_uber, put=__cordl_internal_set_uber)) ::UnityW<::UnityEngine::Shader>  uber;

/// @brief Field vectorscope, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorscope, put=__cordl_internal_set_vectorscope)) ::UnityW<::UnityEngine::Shader>  vectorscope;

/// @brief Field waveform, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_waveform, put=__cordl_internal_set_waveform)) ::UnityW<::UnityEngine::Shader>  waveform;

/// @brief Method Clone, addr 0x181fcfde0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* Clone() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_bloom() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_bloom() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_copy() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_copy() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_copyStd() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_copyStd() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_copyStdFromDoubleWide() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_copyStdFromDoubleWide() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_copyStdFromTexArray() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_copyStdFromTexArray() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_debugOverlays() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_debugOverlays() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_deferredFog() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_deferredFog() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_depthOfField() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_depthOfField() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_discardAlpha() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_discardAlpha() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_finalPass() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_finalPass() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_gammaHistogram() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_gammaHistogram() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_grainBaker() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_grainBaker() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_lightMeter() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_lightMeter() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_lut2DBaker() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_lut2DBaker() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_motionBlur() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_motionBlur() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_multiScaleAO() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_multiScaleAO() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_scalableAO() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_scalableAO() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_screenSpaceReflections() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_screenSpaceReflections() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_subpixelMorphologicalAntialiasing() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_subpixelMorphologicalAntialiasing() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_temporalAntialiasing() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_temporalAntialiasing() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_texture2dLerp() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_texture2dLerp() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_uber() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_uber() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_vectorscope() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_vectorscope() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_waveform() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_waveform() ;

constexpr void __cordl_internal_set_bloom(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_copy(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_copyStd(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_copyStdFromDoubleWide(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_copyStdFromTexArray(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_debugOverlays(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_deferredFog(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_depthOfField(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_discardAlpha(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_finalPass(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_gammaHistogram(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_grainBaker(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_lightMeter(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_lut2DBaker(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_motionBlur(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_multiScaleAO(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_scalableAO(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_screenSpaceReflections(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_temporalAntialiasing(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_texture2dLerp(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_uber(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_vectorscope(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_waveform(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessResources_Shaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources_Shaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessResources_Shaders(PostProcessResources_Shaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources_Shaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessResources_Shaders(PostProcessResources_Shaders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18644};

/// @brief Field bloom, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___bloom;

/// @brief Field copy, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___copy;

/// @brief Field copyStd, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___copyStd;

/// @brief Field copyStdFromTexArray, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___copyStdFromTexArray;

/// @brief Field copyStdFromDoubleWide, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___copyStdFromDoubleWide;

/// @brief Field discardAlpha, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___discardAlpha;

/// @brief Field depthOfField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___depthOfField;

/// @brief Field finalPass, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___finalPass;

/// @brief Field grainBaker, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___grainBaker;

/// @brief Field motionBlur, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___motionBlur;

/// @brief Field temporalAntialiasing, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___temporalAntialiasing;

/// @brief Field subpixelMorphologicalAntialiasing, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___subpixelMorphologicalAntialiasing;

/// @brief Field texture2dLerp, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___texture2dLerp;

/// @brief Field uber, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___uber;

/// @brief Field lut2DBaker, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___lut2DBaker;

/// @brief Field lightMeter, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___lightMeter;

/// @brief Field gammaHistogram, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___gammaHistogram;

/// @brief Field waveform, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___waveform;

/// @brief Field vectorscope, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___vectorscope;

/// @brief Field debugOverlays, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___debugOverlays;

/// @brief Field deferredFog, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___deferredFog;

/// @brief Field scalableAO, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___scalableAO;

/// @brief Field multiScaleAO, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___multiScaleAO;

/// @brief Field screenSpaceReflections, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___screenSpaceReflections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___bloom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___copy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___copyStd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___copyStdFromTexArray) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___copyStdFromDoubleWide) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___discardAlpha) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___depthOfField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___finalPass) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___grainBaker) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___motionBlur) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___temporalAntialiasing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___subpixelMorphologicalAntialiasing) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___texture2dLerp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___uber) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___lut2DBaker) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___lightMeter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___gammaHistogram) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___waveform) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___vectorscope) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___debugOverlays) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___deferredFog) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___scalableAO) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___multiScaleAO) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders, ___screenSpaceReflections) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders) == 0xd0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
class CORDL_TYPE PostProcessResources_ComputeShaders : public ::System::Object {
public:
// Declarations
/// @brief Field autoExposure, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoExposure, put=__cordl_internal_set_autoExposure)) ::UnityW<::UnityEngine::ComputeShader>  autoExposure;

/// @brief Field exposureHistogram, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_exposureHistogram, put=__cordl_internal_set_exposureHistogram)) ::UnityW<::UnityEngine::ComputeShader>  exposureHistogram;

/// @brief Field gammaHistogram, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gammaHistogram, put=__cordl_internal_set_gammaHistogram)) ::UnityW<::UnityEngine::ComputeShader>  gammaHistogram;

/// @brief Field gaussianDownsample, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_gaussianDownsample, put=__cordl_internal_set_gaussianDownsample)) ::UnityW<::UnityEngine::ComputeShader>  gaussianDownsample;

/// @brief Field lut3DBaker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lut3DBaker, put=__cordl_internal_set_lut3DBaker)) ::UnityW<::UnityEngine::ComputeShader>  lut3DBaker;

/// @brief Field multiScaleAODownsample1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiScaleAODownsample1, put=__cordl_internal_set_multiScaleAODownsample1)) ::UnityW<::UnityEngine::ComputeShader>  multiScaleAODownsample1;

/// @brief Field multiScaleAODownsample2, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiScaleAODownsample2, put=__cordl_internal_set_multiScaleAODownsample2)) ::UnityW<::UnityEngine::ComputeShader>  multiScaleAODownsample2;

/// @brief Field multiScaleAORender, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiScaleAORender, put=__cordl_internal_set_multiScaleAORender)) ::UnityW<::UnityEngine::ComputeShader>  multiScaleAORender;

/// @brief Field multiScaleAOUpsample, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiScaleAOUpsample, put=__cordl_internal_set_multiScaleAOUpsample)) ::UnityW<::UnityEngine::ComputeShader>  multiScaleAOUpsample;

/// @brief Field texture3dLerp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture3dLerp, put=__cordl_internal_set_texture3dLerp)) ::UnityW<::UnityEngine::ComputeShader>  texture3dLerp;

/// @brief Field vectorscope, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorscope, put=__cordl_internal_set_vectorscope)) ::UnityW<::UnityEngine::ComputeShader>  vectorscope;

/// @brief Field waveform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_waveform, put=__cordl_internal_set_waveform)) ::UnityW<::UnityEngine::ComputeShader>  waveform;

/// @brief Method Clone, addr 0x181fbf720, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* Clone() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* New_ctor() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_autoExposure() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_autoExposure() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_exposureHistogram() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_exposureHistogram() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_gammaHistogram() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_gammaHistogram() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_gaussianDownsample() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_gaussianDownsample() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_lut3DBaker() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_lut3DBaker() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_multiScaleAODownsample1() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_multiScaleAODownsample1() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_multiScaleAODownsample2() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_multiScaleAODownsample2() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_multiScaleAORender() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_multiScaleAORender() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_multiScaleAOUpsample() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_multiScaleAOUpsample() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_texture3dLerp() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_texture3dLerp() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_vectorscope() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_vectorscope() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_waveform() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_waveform() ;

constexpr void __cordl_internal_set_autoExposure(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_exposureHistogram(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_gammaHistogram(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_gaussianDownsample(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_lut3DBaker(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_multiScaleAODownsample1(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_multiScaleAODownsample2(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_multiScaleAORender(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_multiScaleAOUpsample(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_texture3dLerp(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_vectorscope(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_waveform(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessResources_ComputeShaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources_ComputeShaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessResources_ComputeShaders(PostProcessResources_ComputeShaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources_ComputeShaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessResources_ComputeShaders(PostProcessResources_ComputeShaders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18645};

/// @brief Field autoExposure, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___autoExposure;

/// @brief Field exposureHistogram, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___exposureHistogram;

/// @brief Field lut3DBaker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___lut3DBaker;

/// @brief Field texture3dLerp, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___texture3dLerp;

/// @brief Field gammaHistogram, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___gammaHistogram;

/// @brief Field waveform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___waveform;

/// @brief Field vectorscope, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___vectorscope;

/// @brief Field multiScaleAODownsample1, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___multiScaleAODownsample1;

/// @brief Field multiScaleAODownsample2, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___multiScaleAODownsample2;

/// @brief Field multiScaleAORender, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___multiScaleAORender;

/// @brief Field multiScaleAOUpsample, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___multiScaleAOUpsample;

/// @brief Field gaussianDownsample, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___gaussianDownsample;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___autoExposure) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___exposureHistogram) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___lut3DBaker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___texture3dLerp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___gammaHistogram) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___waveform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___vectorscope) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___multiScaleAODownsample1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___multiScaleAODownsample2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___multiScaleAORender) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___multiScaleAOUpsample) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders, ___gaussianDownsample) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts
class CORDL_TYPE PostProcessResources_SMAALuts : public ::System::Object {
public:
// Declarations
/// @brief Field area, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_area, put=__cordl_internal_set_area)) ::UnityW<::UnityEngine::Texture2D>  area;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::UnityW<::UnityEngine::Texture2D>  search;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_area() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_area() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_search() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_search() ;

constexpr void __cordl_internal_set_area(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_search(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessResources_SMAALuts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources_SMAALuts", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessResources_SMAALuts(PostProcessResources_SMAALuts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources_SMAALuts", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessResources_SMAALuts(PostProcessResources_SMAALuts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18646};

/// @brief Field area, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___area;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts, ___area) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts, ___search) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.ScriptableObject, UnityEngine.Texture2D
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessResources
class CORDL_TYPE PostProcessResources : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ComputeShaders = ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders;

using SMAALuts = ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts;

using Shaders = ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders;

/// @brief Field blueNoise256, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueNoise256, put=__cordl_internal_set_blueNoise256)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  blueNoise256;

/// @brief Field blueNoise64, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueNoise64, put=__cordl_internal_set_blueNoise64)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  blueNoise64;

/// @brief Field computeShaders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_computeShaders, put=__cordl_internal_set_computeShaders)) ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*  computeShaders;

/// @brief Field shaders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shaders, put=__cordl_internal_set_shaders)) ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*  shaders;

/// @brief Field smaaLuts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_smaaLuts, put=__cordl_internal_set_smaaLuts)) ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*  smaaLuts;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_blueNoise256() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_blueNoise256() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_blueNoise64() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_blueNoise64() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* const& __cordl_internal_get_computeShaders() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*& __cordl_internal_get_computeShaders() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* const& __cordl_internal_get_shaders() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*& __cordl_internal_get_shaders() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts* const& __cordl_internal_get_smaaLuts() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*& __cordl_internal_get_smaaLuts() ;

constexpr void __cordl_internal_set_blueNoise256(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_blueNoise64(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_computeShaders(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*  value) ;

constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*  value) ;

constexpr void __cordl_internal_set_smaaLuts(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessResources(PostProcessResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessResources(PostProcessResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18647};

/// @brief Field blueNoise64, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___blueNoise64;

/// @brief Field blueNoise256, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___blueNoise256;

/// @brief Field smaaLuts, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*  ___smaaLuts;

/// @brief Field shaders, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*  ___shaders;

/// @brief Field computeShaders, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*  ___computeShaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources, ___blueNoise64) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources, ___blueNoise256) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources, ___smaaLuts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources, ___shaders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessResources, ___computeShaders) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessResources) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
