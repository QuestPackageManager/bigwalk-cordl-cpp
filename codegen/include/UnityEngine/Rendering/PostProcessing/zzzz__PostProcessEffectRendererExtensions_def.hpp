#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEffectRendererExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PostProcessEffectRendererExtensions)
namespace System {
class Exception;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectRenderer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectRendererExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions*, "UnityEngine.Rendering.PostProcessing", "PostProcessEffectRendererExtensions");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEffectRendererExtensions
class CORDL_TYPE PostProcessEffectRendererExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method RenderOrLog, addr 0x181fc2530, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* RenderOrLog(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  self, ::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEffectRendererExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectRendererExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessEffectRendererExtensions(PostProcessEffectRendererExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectRendererExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessEffectRendererExtensions(PostProcessEffectRendererExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRendererExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
