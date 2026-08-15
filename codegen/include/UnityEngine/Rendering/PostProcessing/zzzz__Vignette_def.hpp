#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vignette.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
CORDL_MODULE_EXPORT(Vignette)
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
namespace UnityEngine::Rendering::PostProcessing {
class Vector2Parameter;
}
namespace UnityEngine::Rendering::PostProcessing {
class VignetteModeParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class Vignette;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::Vignette*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::Vignette*, "UnityEngine.Rendering.PostProcessing", "Vignette");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.Vignette
class CORDL_TYPE Vignette : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings {
public:
// Declarations
/// @brief Field center, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  center;

/// @brief Field color, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Rendering::PostProcessing::ColorParameter*  color;

/// @brief Field intensity, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  intensity;

/// @brief Field mask, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::Rendering::PostProcessing::TextureParameter*  mask;

/// @brief Field mode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::UnityEngine::Rendering::PostProcessing::VignetteModeParameter*  mode;

/// @brief Field opacity, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_opacity, put=__cordl_internal_set_opacity)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  opacity;

/// @brief Field rounded, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rounded, put=__cordl_internal_set_rounded)) ::UnityEngine::Rendering::PostProcessing::BoolParameter*  rounded;

/// @brief Field roundness, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_roundness, put=__cordl_internal_set_roundness)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  roundness;

/// @brief Field smoothness, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_smoothness, put=__cordl_internal_set_smoothness)) ::UnityEngine::Rendering::PostProcessing::FloatParameter*  smoothness;

/// @brief Method IsEnabledAndSupported, addr 0x181fbeec0, size 0x60, virtual true, abstract: false, final false
inline bool IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::Vignette* New_ctor() ;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter* const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*& __cordl_internal_get_center() ;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& __cordl_internal_get_color() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& __cordl_internal_get_mask() ;

constexpr ::UnityEngine::Rendering::PostProcessing::VignetteModeParameter* const& __cordl_internal_get_mode() const;

constexpr ::UnityEngine::Rendering::PostProcessing::VignetteModeParameter*& __cordl_internal_get_mode() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_opacity() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_opacity() ;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& __cordl_internal_get_rounded() const;

constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& __cordl_internal_get_rounded() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_roundness() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_roundness() ;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& __cordl_internal_get_smoothness() const;

constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& __cordl_internal_get_smoothness() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value) ;

constexpr void __cordl_internal_set_mode(::UnityEngine::Rendering::PostProcessing::VignetteModeParameter*  value) ;

constexpr void __cordl_internal_set_opacity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_rounded(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value) ;

constexpr void __cordl_internal_set_roundness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

constexpr void __cordl_internal_set_smoothness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value) ;

/// @brief Method .ctor, addr 0x181fbef20, size 0x210, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vignette() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vignette", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vignette(Vignette && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vignette", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vignette(Vignette const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18597};

/// @brief Field mode, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::VignetteModeParameter*  ___mode;

/// @brief Field color, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::ColorParameter*  ___color;

/// @brief Field center, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  ___center;

/// @brief Field intensity, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___intensity;

/// @brief Field smoothness, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___smoothness;

/// @brief Field roundness, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___roundness;

/// @brief Field rounded, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::BoolParameter*  ___rounded;

/// @brief Field mask, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::TextureParameter*  ___mask;

/// @brief Field opacity, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::FloatParameter*  ___opacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___color) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___center) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___intensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___smoothness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___roundness) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___rounded) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___mask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::Vignette, ___opacity) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::Vignette) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
