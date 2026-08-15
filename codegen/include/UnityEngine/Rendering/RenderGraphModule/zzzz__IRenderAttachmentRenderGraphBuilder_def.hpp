#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderAttachmentRenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderAttachmentRenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderAttachmentRenderGraphBuilder;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*, "UnityEngine.Rendering.RenderGraphModule", "IRenderAttachmentRenderGraphBuilder");
// Dependencies 
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderAttachmentRenderGraphBuilder
class CORDL_TYPE IRenderAttachmentRenderGraphBuilder {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr operator  ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept;

/// @brief Method SetRandomAccessAttachment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle SetRandomAccessAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  tex, int32_t  index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags) ;

/// @brief Method SetRenderAttachment, addr 0x182053fa0, size 0xe0, virtual true, abstract: false, final false
inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  tex, int32_t  index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags) ;

/// @brief Method SetRenderAttachment, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  tex, int32_t  index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags, int32_t  mipLevel, int32_t  depthSlice) ;

/// @brief Method SetRenderAttachmentDepth, addr 0x182053ee0, size 0xc0, virtual true, abstract: false, final false
inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags) ;

/// @brief Method SetRenderAttachmentDepth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags, int32_t  mipLevel, int32_t  depthSlice) ;

/// @brief Method UseBufferRandomAccess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  tex, int32_t  index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags) ;

/// @brief Method UseBufferRandomAccess, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  tex, int32_t  index, bool  preserveCounterValue, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags  flags) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IRenderAttachmentRenderGraphBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRenderAttachmentRenderGraphBuilder(IRenderAttachmentRenderGraphBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::RenderGraphModule
