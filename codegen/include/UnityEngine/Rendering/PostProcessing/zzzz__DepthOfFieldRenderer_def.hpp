#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DepthOfFieldRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthOfFieldRenderer)
namespace UnityEngine::Rendering::PostProcessing {
struct DepthOfFieldRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class DepthOfField;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
struct DepthTextureMode;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct DepthOfFieldRenderer_Pass;
}
namespace UnityEngine::Rendering::PostProcessing {
class DepthOfFieldRenderer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass);
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass, "UnityEngine.Rendering.PostProcessing", "DepthOfFieldRenderer/Pass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer*, "UnityEngine.Rendering.PostProcessing", "DepthOfFieldRenderer");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.DepthOfFieldRenderer/Pass
struct CORDL_TYPE DepthOfFieldRenderer_Pass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DepthOfFieldRenderer_Pass_Unwrapped
enum struct __DepthOfFieldRenderer_Pass_Unwrapped : int32_t {
__E_CoCCalculation = static_cast<int32_t>(0x0),
__E_CoCTemporalFilter = static_cast<int32_t>(0x1),
__E_DownsampleAndPrefilter = static_cast<int32_t>(0x2),
__E_BokehSmallKernel = static_cast<int32_t>(0x3),
__E_BokehMediumKernel = static_cast<int32_t>(0x4),
__E_BokehLargeKernel = static_cast<int32_t>(0x5),
__E_BokehVeryLargeKernel = static_cast<int32_t>(0x6),
__E_PostFilter = static_cast<int32_t>(0x7),
__E_Combine = static_cast<int32_t>(0x8),
__E_DebugOverlay = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DepthOfFieldRenderer_Pass_Unwrapped () const noexcept {
return static_cast<__DepthOfFieldRenderer_Pass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DepthOfFieldRenderer_Pass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DepthOfFieldRenderer_Pass(int32_t  value__) noexcept;

/// @brief Field BokehLargeKernel value: I32(5)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const BokehLargeKernel;

/// @brief Field BokehMediumKernel value: I32(4)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const BokehMediumKernel;

/// @brief Field BokehSmallKernel value: I32(3)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const BokehSmallKernel;

/// @brief Field BokehVeryLargeKernel value: I32(6)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const BokehVeryLargeKernel;

/// @brief Field CoCCalculation value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const CoCCalculation;

/// @brief Field CoCTemporalFilter value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const CoCTemporalFilter;

/// @brief Field Combine value: I32(8)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const Combine;

/// @brief Field DebugOverlay value: I32(9)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const DebugOverlay;

/// @brief Field DownsampleAndPrefilter value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const DownsampleAndPrefilter;

/// @brief Field PostFilter value: I32(7)
static ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass const PostFilter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
// Dependencies UnityEngine.RenderTexture, UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.DepthOfFieldRenderer
class CORDL_TYPE DepthOfFieldRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::DepthOfField>> {
public:
// Declarations
using Pass = ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer_Pass;

/// @brief Field m_CoCHistoryTextures, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CoCHistoryTextures, put=__cordl_internal_set_m_CoCHistoryTextures)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  m_CoCHistoryTextures;

/// @brief Field m_HistoryPingPong, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HistoryPingPong, put=__cordl_internal_set_m_HistoryPingPong)) ::ArrayW<int32_t>  m_HistoryPingPong;

/// @brief Method CalculateMaxCoCRadius, addr 0x181fb5d20, size 0x40, virtual false, abstract: false, final false
inline float_t CalculateMaxCoCRadius(int32_t  screenHeight) ;

/// @brief Method CheckHistory, addr 0x181fb5d60, size 0x170, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> CheckHistory(int32_t  eye, int32_t  id, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetCameraFlags, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

static inline ::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fb5ed0, size 0xe0, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fb5fb0, size 0x9a0, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method SelectFormat, addr 0x181fb6950, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat SelectFormat(::UnityEngine::RenderTextureFormat  primary, ::UnityEngine::RenderTextureFormat  secondary) ;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>> const& __cordl_internal_get_m_CoCHistoryTextures() const;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>& __cordl_internal_get_m_CoCHistoryTextures() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_HistoryPingPong() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_HistoryPingPong() ;

constexpr void __cordl_internal_set_m_CoCHistoryTextures(::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  value) ;

constexpr void __cordl_internal_set_m_HistoryPingPong(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x181fb13d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthOfFieldRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthOfFieldRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthOfFieldRenderer(DepthOfFieldRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthOfFieldRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthOfFieldRenderer(DepthOfFieldRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18566};

/// @brief Field k_FilmHeight offset 0xffffffff size 0x4
static constexpr float_t  k_FilmHeight{static_cast<float_t>(0.024f)};

/// @brief Field k_NumCoCHistoryTextures offset 0xffffffff size 0x4
static constexpr int32_t  k_NumCoCHistoryTextures{static_cast<int32_t>(0x2)};

/// @brief Field k_NumEyes offset 0xffffffff size 0x4
static constexpr int32_t  k_NumEyes{static_cast<int32_t>(0x2)};

/// @brief Field m_CoCHistoryTextures, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  ___m_CoCHistoryTextures;

/// @brief Field m_HistoryPingPong, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_HistoryPingPong;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer, ___m_CoCHistoryTextures) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer, ___m_HistoryPingPong) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::DepthOfFieldRenderer) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
