#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AutoExposureRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoExposureRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class AutoExposure;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class AutoExposureRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer*, "UnityEngine.Rendering.PostProcessing", "AutoExposureRenderer");
// Dependencies UnityEngine.RenderTexture, UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.AutoExposureRenderer
class CORDL_TYPE AutoExposureRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::AutoExposure>> {
public:
// Declarations
/// @brief Field m_AutoExposurePingPong, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutoExposurePingPong, put=__cordl_internal_set_m_AutoExposurePingPong)) ::ArrayW<int32_t>  m_AutoExposurePingPong;

/// @brief Field m_AutoExposurePool, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutoExposurePool, put=__cordl_internal_set_m_AutoExposurePool)) ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  m_AutoExposurePool;

/// @brief Field m_CurrentAutoExposure, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentAutoExposure, put=__cordl_internal_set_m_CurrentAutoExposure)) ::UnityW<::UnityEngine::RenderTexture>  m_CurrentAutoExposure;

/// @brief Method CheckTexture, addr 0x181fb0ce0, size 0xf0, virtual false, abstract: false, final false
inline void CheckTexture(int32_t  eye, int32_t  id) ;

static inline ::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fb0dd0, size 0x80, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fb0e50, size 0x580, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_AutoExposurePingPong() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_AutoExposurePingPong() ;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>> const& __cordl_internal_get_m_AutoExposurePool() const;

constexpr ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>& __cordl_internal_get_m_AutoExposurePool() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_CurrentAutoExposure() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_CurrentAutoExposure() ;

constexpr void __cordl_internal_set_m_AutoExposurePingPong(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_AutoExposurePool(::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  value) ;

constexpr void __cordl_internal_set_m_CurrentAutoExposure(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x181fb13d0, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoExposureRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoExposureRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoExposureRenderer(AutoExposureRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoExposureRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoExposureRenderer(AutoExposureRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18548};

/// @brief Field k_NumAutoExposureTextures offset 0xffffffff size 0x4
static constexpr int32_t  k_NumAutoExposureTextures{static_cast<int32_t>(0x2)};

/// @brief Field k_NumEyes offset 0xffffffff size 0x4
static constexpr int32_t  k_NumEyes{static_cast<int32_t>(0x2)};

/// @brief Field m_AutoExposurePool, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityW<::UnityEngine::RenderTexture>>>  ___m_AutoExposurePool;

/// @brief Field m_AutoExposurePingPong, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_AutoExposurePingPong;

/// @brief Field m_CurrentAutoExposure, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_CurrentAutoExposure;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer, ___m_AutoExposurePool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer, ___m_AutoExposurePingPong) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer, ___m_CurrentAutoExposure) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AutoExposureRenderer) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
