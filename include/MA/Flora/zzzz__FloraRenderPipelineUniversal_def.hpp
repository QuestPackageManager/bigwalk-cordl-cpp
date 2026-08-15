#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineUniversal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraRenderPipeline_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(FloraRenderPipelineUniversal)
namespace MA::Flora {
struct FloraRenderPipelineCameraSettings;
}
namespace MA::Flora {
struct FloraRenderPipelineType;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraOcclusionDepthPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraVisibilityPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_InstancingPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace MA::Flora {
class FloraRenderPipelineUniversal;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraOcclusionDepthPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_FloraVisibilityPass;
}
namespace MA::Flora {
class FloraRenderPipelineUniversal_InstancingPass;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraRenderPipelineUniversal*);
MARK_REF_T(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*);
MARK_REF_T(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*);
MARK_REF_T(::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*);
MARK_REF_T(::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*);
MARK_REF_T(::MA::Flora::FloraRenderPipelineUniversal_InstancingPass*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineUniversal*, "MA.Flora", "FloraRenderPipelineUniversal");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*, "MA.Flora", "FloraRenderPipelineUniversal/FloraDebugOccluderDepthOverlayPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*, "MA.Flora", "FloraRenderPipelineUniversal/FloraDebugOcclusionTestOverlayPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*, "MA.Flora", "FloraRenderPipelineUniversal/FloraOcclusionDepthPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*, "MA.Flora", "FloraRenderPipelineUniversal/FloraVisibilityPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineUniversal_InstancingPass*, "MA.Flora", "FloraRenderPipelineUniversal/InstancingPass");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineUniversal/InstancingPass
class CORDL_TYPE FloraRenderPipelineUniversal_InstancingPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
static inline ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent) ;

/// @brief Method .ctor, addr 0x181500550, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineUniversal_InstancingPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_InstancingPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineUniversal_InstancingPass(FloraRenderPipelineUniversal_InstancingPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_InstancingPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineUniversal_InstancingPass(FloraRenderPipelineUniversal_InstancingPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13355};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipelineUniversal_InstancingPass) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRenderPipelineUniversal::InstancingPass
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineUniversal/FloraVisibilityPass
class CORDL_TYPE FloraRenderPipelineUniversal_FloraVisibilityPass : public ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass {
public:
// Declarations
static inline ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x1814f87e0, size 0x210, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method .ctor, addr 0x1814f89f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineUniversal_FloraVisibilityPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraVisibilityPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineUniversal_FloraVisibilityPass(FloraRenderPipelineUniversal_FloraVisibilityPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraVisibilityPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineUniversal_FloraVisibilityPass(FloraRenderPipelineUniversal_FloraVisibilityPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13356};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRenderPipelineUniversal::InstancingPass
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineUniversal/FloraOcclusionDepthPass
class CORDL_TYPE FloraRenderPipelineUniversal_FloraOcclusionDepthPass : public ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass {
public:
// Declarations
static inline ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x1814f7ce0, size 0x580, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method .ctor, addr 0x1814f8260, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineUniversal_FloraOcclusionDepthPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraOcclusionDepthPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineUniversal_FloraOcclusionDepthPass(FloraRenderPipelineUniversal_FloraOcclusionDepthPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraOcclusionDepthPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineUniversal_FloraOcclusionDepthPass(FloraRenderPipelineUniversal_FloraOcclusionDepthPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRenderPipelineUniversal::InstancingPass
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineUniversal/FloraDebugOccluderDepthOverlayPass
class CORDL_TYPE FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass : public ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass {
public:
// Declarations
static inline ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x1814f7a20, size 0x190, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method .ctor, addr 0x1814f7bb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass(FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass(FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRenderPipelineUniversal::InstancingPass
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineUniversal/FloraDebugOcclusionTestOverlayPass
class CORDL_TYPE FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass : public ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass {
public:
// Declarations
static inline ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x1814f7bc0, size 0xf0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method .ctor, addr 0x1814f7bb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass(FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass(FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13359};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraRenderPipeline
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineUniversal
class CORDL_TYPE FloraRenderPipelineUniversal : public ::MA::Flora::FloraRenderPipeline {
public:
// Declarations
using FloraDebugOccluderDepthOverlayPass = ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass;

using FloraDebugOcclusionTestOverlayPass = ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass;

using FloraOcclusionDepthPass = ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass;

using FloraVisibilityPass = ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass;

using InstancingPass = ::MA::Flora::FloraRenderPipelineUniversal_InstancingPass;

 __declspec(property(get=get_PipelineType)) ::MA::Flora::FloraRenderPipelineType  PipelineType;

/// @brief Field m_DebugOccluderDepthOverlayPass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugOccluderDepthOverlayPass, put=__cordl_internal_set_m_DebugOccluderDepthOverlayPass)) ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*  m_DebugOccluderDepthOverlayPass;

/// @brief Field m_DebugOcclusionTestOverlayPass, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugOcclusionTestOverlayPass, put=__cordl_internal_set_m_DebugOcclusionTestOverlayPass)) ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*  m_DebugOcclusionTestOverlayPass;

/// @brief Field m_OcclusionDepthPass, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OcclusionDepthPass, put=__cordl_internal_set_m_OcclusionDepthPass)) ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*  m_OcclusionDepthPass;

/// @brief Field m_VisibilityPass, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisibilityPass, put=__cordl_internal_set_m_VisibilityPass)) ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*  m_VisibilityPass;

/// @brief Method ApplyDebugDisplaySettingsHack, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ApplyDebugDisplaySettingsHack(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnqueueCameraPasses, addr 0x1814f8270, size 0x120, virtual true, abstract: false, final false
inline void EnqueueCameraPasses(::UnityEngine::Camera*  camera, ::MA::Flora::FloraRenderPipelineCameraSettings  cameraSettings) ;

static inline ::MA::Flora::FloraRenderPipelineUniversal* New_ctor() ;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass* const& __cordl_internal_get_m_DebugOccluderDepthOverlayPass() const;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*& __cordl_internal_get_m_DebugOccluderDepthOverlayPass() ;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass* const& __cordl_internal_get_m_DebugOcclusionTestOverlayPass() const;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*& __cordl_internal_get_m_DebugOcclusionTestOverlayPass() ;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass* const& __cordl_internal_get_m_OcclusionDepthPass() const;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*& __cordl_internal_get_m_OcclusionDepthPass() ;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass* const& __cordl_internal_get_m_VisibilityPass() const;

constexpr ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*& __cordl_internal_get_m_VisibilityPass() ;

constexpr void __cordl_internal_set_m_DebugOccluderDepthOverlayPass(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*  value) ;

constexpr void __cordl_internal_set_m_DebugOcclusionTestOverlayPass(::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*  value) ;

constexpr void __cordl_internal_set_m_OcclusionDepthPass(::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*  value) ;

constexpr void __cordl_internal_set_m_VisibilityPass(::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*  value) ;

/// @brief Method .ctor, addr 0x1814f8390, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PipelineType, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline ::MA::Flora::FloraRenderPipelineType get_PipelineType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineUniversal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineUniversal(FloraRenderPipelineUniversal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineUniversal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineUniversal(FloraRenderPipelineUniversal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13360};

/// @brief Field m_VisibilityPass, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipelineUniversal_FloraVisibilityPass*  ___m_VisibilityPass;

/// @brief Field m_OcclusionDepthPass, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipelineUniversal_FloraOcclusionDepthPass*  ___m_OcclusionDepthPass;

/// @brief Field m_DebugOccluderDepthOverlayPass, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOccluderDepthOverlayPass*  ___m_DebugOccluderDepthOverlayPass;

/// @brief Field m_DebugOcclusionTestOverlayPass, offset: 0x28, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipelineUniversal_FloraDebugOcclusionTestOverlayPass*  ___m_DebugOcclusionTestOverlayPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRenderPipelineUniversal, ___m_VisibilityPass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderPipelineUniversal, ___m_OcclusionDepthPass) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderPipelineUniversal, ___m_DebugOccluderDepthOverlayPass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FloraRenderPipelineUniversal, ___m_DebugOcclusionTestOverlayPass) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRenderPipelineUniversal) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
