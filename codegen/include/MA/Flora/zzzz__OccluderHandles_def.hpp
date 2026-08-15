#pragma once
// IWYU pragma private; include "MA/Flora/OccluderHandles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OccluderHandles)
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace MA::Flora {
struct OccluderHandles;
}
// Write type traits
MARK_VAL_T(::MA::Flora::OccluderHandles);
DEFINE_IL2CPP_CLASS(::MA::Flora::OccluderHandles, "MA.Flora", "OccluderHandles");
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OccluderHandles
struct CORDL_TYPE OccluderHandles {
public:
// Declarations
/// @brief Method DisableDebug, addr 0x1814cec70, size 0x40, virtual false, abstract: false, final false
inline void DisableDebug() ;

/// @brief Method GetDebugOverlay, addr 0x1814cecb0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetDebugOverlay() ;

/// @brief Method GetDepthPyramid, addr 0x1814ced00, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* GetDepthPyramid() ;

/// @brief Method IsDebugValid, addr 0x1814ced40, size 0x30, virtual false, abstract: false, final false
inline bool IsDebugValid() ;

/// @brief Method IsValid, addr 0x1814ced70, size 0x50, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method UseForOccluderUpdate, addr 0x1814cedc0, size 0x90, virtual false, abstract: false, final false
inline void UseForOccluderUpdate(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*  builder) ;

/// @brief Method UseForOcclusionTest, addr 0x1814cee50, size 0x90, virtual false, abstract: false, final false
inline void UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*  builder) ;

/// @brief Method .ctor, addr 0x1814ceee0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RTHandle*  depthPyramid, ::UnityEngine::GraphicsBuffer*  debugOverlay) ;

/// @brief Method .ctor, addr 0x1814cef60, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Vector2Int  occluderDepthPyramidSize, ::UnityEngine::Rendering::RTHandle*  occluderDepthPyramid, ::UnityEngine::GraphicsBuffer*  occlusionDebugOverlay) ;

// Ctor Parameters []
// @brief default ctor
constexpr OccluderHandles() ;

// Ctor Parameters [CppParam { name: "m_DepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "m_DebugOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "m_ForRenderGraph", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DepthPyramidHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name: "m_DebugOverlayHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }]
constexpr OccluderHandles(::UnityEngine::Rendering::RTHandle*  m_DepthPyramid, ::UnityEngine::GraphicsBuffer*  m_DebugOverlay, bool  m_ForRenderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  m_DepthPyramidHandle, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  m_DebugOverlayHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_DepthPyramid, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  m_DepthPyramid;

/// @brief Field m_DebugOverlay, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  m_DebugOverlay;

/// @brief Field m_ForRenderGraph, offset: 0x10, size: 0x1, def value: None
 bool  m_ForRenderGraph;

/// @brief Field m_DepthPyramidHandle, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  m_DepthPyramidHandle;

/// @brief Field m_DebugOverlayHandle, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  m_DebugOverlayHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OccluderHandles, m_DepthPyramid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderHandles, m_DebugOverlay) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderHandles, m_ForRenderGraph) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderHandles, m_DepthPyramidHandle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OccluderHandles, m_DebugOverlayHandle) == 0x24, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OccluderHandles) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
