#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ChromaticAberration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(ChromaticAberration)
namespace UnityEngine::Rendering::PostProcessing {
class BoolParameter;
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
class ChromaticAberration;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ChromaticAberration*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ChromaticAberration*, "UnityEngine.Rendering.PostProcessing", "ChromaticAberration");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ChromaticAberration
class CORDL_TYPE ChromaticAberration : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field fastMode, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fastMode, put=__cordl_internal_set_fastMode)) ::UnityEngine::Rendering::PostProcessing::BoolParameter*  fastMode;

/// @brief Field intensity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensity;

/// @brief Field spectralLut, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spectralLut, put=__cordl_internal_set_spectralLut)) ::UnityEngine::Rendering::PostProcessing::TextureParameter*  spectralLut;

/// @brief Method IsEnabledAndSupported, addr 0x181fb2690, size 0x20, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::ChromaticAberration* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& __cordl_internal_get_fastMode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& __cordl_internal_get_fastMode() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& __cordl_internal_get_spectralLut() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& __cordl_internal_get_spectralLut() ;

constexpr void __cordl_internal_set_fastMode(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_spectralLut(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value) ;

/// @brief Method .ctor, addr 0x181fb26b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChromaticAberration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChromaticAberration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChromaticAberration(ChromaticAberration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChromaticAberration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChromaticAberration(ChromaticAberration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18553};

/// @brief Field spectralLut, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TextureParameter*  ___spectralLut;

/// @brief Field intensity, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensity;

/// @brief Field fastMode, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ___fastMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ChromaticAberration, ___spectralLut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ChromaticAberration, ___intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ChromaticAberration, ___fastMode) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ChromaticAberration) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
