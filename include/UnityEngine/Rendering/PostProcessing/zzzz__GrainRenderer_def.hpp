#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/GrainRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GrainRenderer)
namespace UnityEngine::Rendering::PostProcessing {
class Grain;
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
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class GrainRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::GrainRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::GrainRenderer*, "UnityEngine.Rendering.PostProcessing", "GrainRenderer");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.GrainRenderer
class CORDL_TYPE GrainRenderer : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<::UnityW<::UnityEngine::Rendering::PostProcessing::Grain>> {
public:
// Declarations
/// @brief Field m_GrainLookupRT, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrainLookupRT, put=__cordl_internal_set_m_GrainLookupRT)) ::UnityW<::UnityEngine::RenderTexture>  m_GrainLookupRT;

/// @brief Field m_SampleIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SampleIndex, put=__cordl_internal_set_m_SampleIndex)) int32_t  m_SampleIndex;

/// @brief Method GetLookupFormat, addr 0x181fb6f60, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat GetLookupFormat() ;

static inline ::UnityEngine::Rendering::PostProcessing::GrainRenderer* New_ctor() ;

/// @brief Method Release, addr 0x181fb6fa0, size 0x40, virtual true, abstract: false, final false
inline void Release() ;

/// @brief Method Render, addr 0x181fb6fe0, size 0x470, virtual true, abstract: false, final false
inline void Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_GrainLookupRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_GrainLookupRT() ;

constexpr int32_t const& __cordl_internal_get_m_SampleIndex() const;

constexpr int32_t& __cordl_internal_get_m_SampleIndex() ;

constexpr void __cordl_internal_set_m_GrainLookupRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_m_SampleIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x181fb08a0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrainRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrainRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrainRenderer(GrainRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrainRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrainRenderer(GrainRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18571};

/// @brief Field k_SampleCount offset 0xffffffff size 0x4
static constexpr int32_t  k_SampleCount{static_cast<int32_t>(0x400)};

/// @brief Field m_GrainLookupRT, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___m_GrainLookupRT;

/// @brief Field m_SampleIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_SampleIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::GrainRenderer, ___m_GrainLookupRT) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::GrainRenderer, ___m_SampleIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::GrainRenderer) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
