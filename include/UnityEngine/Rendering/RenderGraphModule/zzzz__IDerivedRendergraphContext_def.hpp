#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IDerivedRendergraphContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDerivedRendergraphContext)
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureUVOrigin;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IDerivedRendergraphContext;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*, "UnityEngine.Rendering.RenderGraphModule", "IDerivedRendergraphContext");
// Dependencies 
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IDerivedRendergraphContext
class CORDL_TYPE IDerivedRendergraphContext {
public:
// Declarations
/// @brief Method FromInternalContext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*  context) ;

/// @brief Method GetTextureUVOrigin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureUVOrigin GetTextureUVOrigin(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  textureHandle) ;

// Ctor Parameters [CppParam { name: "", ty: "IDerivedRendergraphContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDerivedRendergraphContext(IDerivedRendergraphContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::RenderGraphModule
