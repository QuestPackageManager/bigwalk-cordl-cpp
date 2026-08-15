#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusionRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__IAmbientOcclusionMethod_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AmbientOcclusionRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusion;
}
namespace UnityEngine::Rendering::PostProcessing {
class IAmbientOcclusionMethod;
}
namespace UnityEngine::Rendering::PostProcessing {
class MultiScaleVO;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class ScalableAO;
}
namespace UnityEngine {
struct DepthTextureMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class AmbientOcclusionRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer*, "UnityEngine.Rendering.PostProcessing", "AmbientOcclusionRenderer");
// Dependencies UnityEngine.Rendering.PostProcessing.IAmbientOcclusionMethod, UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.AmbientOcclusionRenderer
class CORDL_TYPE AmbientOcclusionRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion>> {
public:
// Declarations
/// @brief Field m_Methods, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Methods, put=__cordl_internal_set_m_Methods)) ::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>  m_Methods;

/// @brief Method Get, addr 0x181fb05e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod* Get() ;

/// @brief Method GetCameraFlags, addr 0x181fb04c0, size 0xa0, virtual true, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

/// @brief Method GetMultiScaleVO, addr 0x181fb0560, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::MultiScaleVO* GetMultiScaleVO() ;

/// @brief Method GetScalableAO, addr 0x181fb05a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::ScalableAO* GetScalableAO() ;

/// @brief Method Init, addr 0x181fb0600, size 0x180, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method IsAmbientOnly, addr 0x181fb0780, size 0x40, virtual false, abstract: false, final false
inline bool IsAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

static inline ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fb07c0, size 0xe0, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*> const& __cordl_internal_get_m_Methods() const;

constexpr ::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>& __cordl_internal_get_m_Methods() ;

constexpr void __cordl_internal_set_m_Methods(::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>  value) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbientOcclusionRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbientOcclusionRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbientOcclusionRenderer(AmbientOcclusionRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbientOcclusionRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbientOcclusionRenderer(AmbientOcclusionRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18544};

/// @brief Field m_Methods, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*>  ___m_Methods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer, ___m_Methods) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionRenderer) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
