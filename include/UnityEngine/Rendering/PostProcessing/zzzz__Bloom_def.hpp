#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Bloom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(Bloom)
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
namespace UnityEngine::Rendering::PostProcessing {
class TextureParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Bloom;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Bloom*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Bloom*, "UnityEngine.Rendering.PostProcessing", "Bloom");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Bloom
class CORDL_TYPE Bloom : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field anamorphicRatio, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_anamorphicRatio, put=__cordl_internal_set_anamorphicRatio)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  anamorphicRatio;

/// @brief Field clamp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_clamp, put=__cordl_internal_set_clamp)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  clamp;

/// @brief Field color, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Rendering::PostProcessing::ColorParameter*  color;

/// @brief Field diffusion, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_diffusion, put=__cordl_internal_set_diffusion)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  diffusion;

/// @brief Field dirtIntensity, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtIntensity, put=__cordl_internal_set_dirtIntensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  dirtIntensity;

/// @brief Field dirtTexture, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtTexture, put=__cordl_internal_set_dirtTexture)) ::UnityEngine::Rendering::PostProcessing::TextureParameter*  dirtTexture;

/// @brief Field fastMode, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_fastMode, put=__cordl_internal_set_fastMode)) ::UnityEngine::Rendering::PostProcessing::BoolParameter*  fastMode;

/// @brief Field intensity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensity;

/// @brief Field softKnee, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_softKnee, put=__cordl_internal_set_softKnee)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  softKnee;

/// @brief Field threshold, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  threshold;

/// @brief Method IsEnabledAndSupported, addr 0x181fb2250, size 0x20, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::Bloom* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_anamorphicRatio() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_anamorphicRatio() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_clamp() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_clamp() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& __cordl_internal_get_color() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_diffusion() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_diffusion() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_dirtIntensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_dirtIntensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& __cordl_internal_get_dirtTexture() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& __cordl_internal_get_dirtTexture() ;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& __cordl_internal_get_fastMode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& __cordl_internal_get_fastMode() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_softKnee() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_softKnee() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_threshold() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_threshold() ;

constexpr void __cordl_internal_set_anamorphicRatio(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_clamp(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value) ;

constexpr void __cordl_internal_set_diffusion(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_dirtIntensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_dirtTexture(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value) ;

constexpr void __cordl_internal_set_fastMode(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_softKnee(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_threshold(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb2270, size 0x210, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bloom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bloom", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bloom(Bloom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bloom", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bloom(Bloom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18549};

/// @brief Field intensity, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensity;

/// @brief Field threshold, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___threshold;

/// @brief Field softKnee, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___softKnee;

/// @brief Field clamp, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___clamp;

/// @brief Field diffusion, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___diffusion;

/// @brief Field anamorphicRatio, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___anamorphicRatio;

/// @brief Field color, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::ColorParameter*  ___color;

/// @brief Field fastMode, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ___fastMode;

/// @brief Field dirtTexture, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TextureParameter*  ___dirtTexture;

/// @brief Field dirtIntensity, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___dirtIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___threshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___softKnee) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___clamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___diffusion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___anamorphicRatio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___color) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___fastMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___dirtTexture) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Bloom, ___dirtIntensity) == 0x78, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Bloom) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
