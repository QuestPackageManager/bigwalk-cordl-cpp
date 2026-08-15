#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/IAmbientOcclusionMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAmbientOcclusionMethod)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine {
struct DepthTextureMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class IAmbientOcclusionMethod;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::IAmbientOcclusionMethod*, "UnityEngine.Rendering.PostProcessing", "IAmbientOcclusionMethod");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.IAmbientOcclusionMethod
class CORDL_TYPE IAmbientOcclusionMethod {
public:
// Declarations
/// @brief Method CompositeAmbientOnly, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CompositeAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method GetCameraFlags, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::DepthTextureMode GetCameraFlags() ;

/// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method RenderAfterOpaque, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RenderAfterOpaque(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method RenderAmbientOnly, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RenderAmbientOnly(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "IAmbientOcclusionMethod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAmbientOcclusionMethod(IAmbientOcclusionMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::PostProcessing
