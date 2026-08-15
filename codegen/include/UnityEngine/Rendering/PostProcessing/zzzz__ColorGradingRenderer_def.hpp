#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorGradingRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorGradingRenderer)
namespace UnityEngine::Rendering::PostProcessing {
struct ColorGradingRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class ColorGrading;
}
namespace UnityEngine::Rendering::PostProcessing {
class HableCurve;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct ColorGradingRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class ColorGradingRenderer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass, "UnityEngine.Rendering.PostProcessing", "ColorGradingRenderer/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer*, "UnityEngine.Rendering.PostProcessing", "ColorGradingRenderer");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.ColorGradingRenderer/Pass
struct CORDL_TYPE ColorGradingRenderer_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorGradingRenderer_Pass_Unwrapped
enum struct __ColorGradingRenderer_Pass_Unwrapped : int32_t {
__E_LutGenLDRFromScratch = static_cast<int32_t>(0x0),
__E_LutGenLDR = static_cast<int32_t>(0x1),
__E_LutGenHDR2D = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorGradingRenderer_Pass_Unwrapped () const noexcept {
return static_cast<__ColorGradingRenderer_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorGradingRenderer_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorGradingRenderer_Pass(int32_t  value__) noexcept;

/// @brief Field LutGenHDR2D value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass const LutGenHDR2D;

/// @brief Field LutGenLDR value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass const LutGenLDR;

/// @brief Field LutGenLDRFromScratch value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass const LutGenLDRFromScratch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18560};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.Color, UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ColorGradingRenderer
class CORDL_TYPE ColorGradingRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::ColorGrading>> {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer_Pass;

/// @brief Field m_GradingCurves, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GradingCurves, put=__cordl_internal_set_m_GradingCurves)) ::UnityW<::UnityEngine::Texture2D>  m_GradingCurves;

/// @brief Field m_HableCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HableCurve, put=__cordl_internal_set_m_HableCurve)) ::UnityEngine::Rendering::PostProcessing::HableCurve*  m_HableCurve;

/// @brief Field m_InternalLdrLut, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalLdrLut, put=__cordl_internal_set_m_InternalLdrLut)) ::UnityW<::UnityEngine::RenderTexture>  m_InternalLdrLut;

/// @brief Field m_InternalLogLut, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InternalLogLut, put=__cordl_internal_set_m_InternalLogLut)) ::UnityW<::UnityEngine::RenderTexture>  m_InternalLogLut;

/// @brief Field m_Pixels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Pixels, put=__cordl_internal_set_m_Pixels)) ::ArrayW<::UnityEngine::Color>  m_Pixels;

/// @brief Method CheckInternalLogLut, addr 0x181fb2770, size 0x150, virtual false, abstract: false, final false
inline void CheckInternalLogLut() ;

/// @brief Method CheckInternalStripLut, addr 0x181fb28c0, size 0x120, virtual false, abstract: false, final false
inline void CheckInternalStripLut() ;

/// @brief Method GetCurveFormat, addr 0x181fb29e0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::TextureFormat GetCurveFormat() ;

/// @brief Method GetCurveTexture, addr 0x181fb2a10, size 0x250, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetCurveTexture(bool  hdr) ;

/// @brief Method GetLutFormat, addr 0x181fb2c60, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat GetLutFormat() ;

/// @brief Method IsRenderTextureFormatSupportedForLinearFiltering, addr 0x181fb2cd0, size 0x30, virtual false, abstract: false, final false
static inline bool IsRenderTextureFormatSupportedForLinearFiltering(::UnityEngine::RenderTextureFormat  format) ;

static inline ::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fb2d00, size 0x70, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fb4cb0, size 0x220, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderExternalPipeline3D, addr 0x181fb2d70, size 0x180, virtual false, abstract: false, final false
inline void RenderExternalPipeline3D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderHDRPipeline2D, addr 0x181fb2ef0, size 0xa20, virtual false, abstract: false, final false
inline void RenderHDRPipeline2D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderHDRPipeline3D, addr 0x181fb3910, size 0xa70, virtual false, abstract: false, final false
inline void RenderHDRPipeline3D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderLDRPipeline2D, addr 0x181fb4380, size 0x930, virtual false, abstract: false, final false
inline void RenderLDRPipeline2D(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_GradingCurves() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_GradingCurves() ;

constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve* const& __cordl_internal_get_m_HableCurve() const;

constexpr ::UnityEngine::Rendering::PostProcessing::HableCurve*& __cordl_internal_get_m_HableCurve() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_InternalLdrLut() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_InternalLdrLut() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_InternalLogLut() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_InternalLogLut() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_m_Pixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_m_Pixels() ;

constexpr void __cordl_internal_set_m_GradingCurves(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_m_HableCurve(::UnityEngine::Rendering::PostProcessing::HableCurve*  value) ;

constexpr void __cordl_internal_set_m_InternalLdrLut(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_InternalLogLut(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_Pixels(::ArrayW<::UnityEngine::Color>  value) ;

/// @brief Method .ctor, addr 0x181fb4ed0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorGradingRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorGradingRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorGradingRenderer(ColorGradingRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorGradingRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorGradingRenderer(ColorGradingRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18561};

/// @brief Field k_Lut2DSize offset 0xffffffff size 0x4
static constexpr int32_t  k_Lut2DSize{static_cast<int32_t>(0x20)};

/// @brief Field k_Lut3DSize offset 0xffffffff size 0x4
static constexpr int32_t  k_Lut3DSize{static_cast<int32_t>(0x21)};

/// @brief Field m_GradingCurves, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___m_GradingCurves;

/// @brief Field m_Pixels, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___m_Pixels;

/// @brief Field m_InternalLdrLut, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_InternalLdrLut;

/// @brief Field m_InternalLogLut, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_InternalLogLut;

/// @brief Field m_HableCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::HableCurve*  ___m_HableCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer, ___m_GradingCurves) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer, ___m_Pixels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer, ___m_InternalLdrLut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer, ___m_InternalLogLut) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer, ___m_HableCurve) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ColorGradingRenderer) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
