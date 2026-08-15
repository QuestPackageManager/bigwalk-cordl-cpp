#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/UnderwaterEffectPassURP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnderwaterEffectPassURP)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace WaveHarmonic::Crest {
class CopyDepthBufferPassURP;
}
namespace WaveHarmonic::Crest {
class RenderGraphHelper_PassData;
}
namespace WaveHarmonic::Crest {
class UnderwaterEffectPass;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class UnderwaterEffectPassURP;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::UnderwaterEffectPassURP*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterEffectPassURP*, "WaveHarmonic.Crest", "UnderwaterEffectPassURP");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.UnderwaterEffectPassURP
class CORDL_TYPE UnderwaterEffectPassURP : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
/// @brief Field _ColorBuffer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorBuffer, put=__cordl_internal_set__ColorBuffer)) ::UnityEngine::Rendering::RTHandle*  _ColorBuffer;

/// @brief Field _CopyDepthBufferPass, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyDepthBufferPass, put=__cordl_internal_set__CopyDepthBufferPass)) ::WaveHarmonic::Crest::CopyDepthBufferPassURP*  _CopyDepthBufferPass;

/// @brief Field _DepthBuffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthBuffer, put=__cordl_internal_set__DepthBuffer)) ::UnityEngine::Rendering::RTHandle*  _DepthBuffer;

/// @brief Field _ErrorMissingColorTarget, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__ErrorMissingColorTarget, put=__cordl_internal_set__ErrorMissingColorTarget)) bool  _ErrorMissingColorTarget;

/// @brief Field _PassData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PassData, put=__cordl_internal_set__PassData)) ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  _PassData;

/// @brief Field _Renderer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::UnderwaterRenderer*  _Renderer;

/// @brief Field _UnderwaterEffectPass, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnderwaterEffectPass, put=__cordl_internal_set__UnderwaterEffectPass)) ::WaveHarmonic::Crest::UnderwaterEffectPass*  _UnderwaterEffectPass;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::WaveHarmonic::Crest::UnderwaterEffectPassURP*  s_Instance;

/// @brief Method Disable, addr 0x1825a3ea0, size 0xc0, virtual false, abstract: false, final false
static inline void Disable() ;

/// @brief Method Enable, addr 0x1825a3f60, size 0x120, virtual false, abstract: false, final false
static inline void Enable(::WaveHarmonic::Crest::UnderwaterRenderer*  renderer) ;

/// @brief Method EnqueuePass, addr 0x1825a4080, size 0x1b0, virtual false, abstract: false, final false
inline void EnqueuePass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method Execute, addr 0x1825a4230, size 0xe0, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  data) ;

static inline ::WaveHarmonic::Crest::UnderwaterEffectPassURP* New_ctor() ;

/// @brief Method OnSetup, addr 0x1825a4310, size 0x200, virtual false, abstract: false, final false
inline void OnSetup(::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  data) ;

/// @brief Method RecordRenderGraph, addr 0x1825a4510, size 0x1e0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

/// @brief Method <RecordRenderGraph>b__1_0, addr 0x1825a46f0, size 0x100, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__1_0(::WaveHarmonic::Crest::RenderGraphHelper_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__ColorBuffer() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__ColorBuffer() ;

constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP* const& __cordl_internal_get__CopyDepthBufferPass() const;

constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP*& __cordl_internal_get__CopyDepthBufferPass() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthBuffer() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthBuffer() ;

constexpr bool const& __cordl_internal_get__ErrorMissingColorTarget() const;

constexpr bool& __cordl_internal_get__ErrorMissingColorTarget() ;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData* const& __cordl_internal_get__PassData() const;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData*& __cordl_internal_get__PassData() ;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& __cordl_internal_get__Renderer() ;

constexpr ::WaveHarmonic::Crest::UnderwaterEffectPass* const& __cordl_internal_get__UnderwaterEffectPass() const;

constexpr ::WaveHarmonic::Crest::UnderwaterEffectPass*& __cordl_internal_get__UnderwaterEffectPass() ;

constexpr void __cordl_internal_set__ColorBuffer(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__CopyDepthBufferPass(::WaveHarmonic::Crest::CopyDepthBufferPassURP*  value) ;

constexpr void __cordl_internal_set__DepthBuffer(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__ErrorMissingColorTarget(bool  value) ;

constexpr void __cordl_internal_set__PassData(::WaveHarmonic::Crest::RenderGraphHelper_PassData*  value) ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::UnderwaterRenderer*  value) ;

constexpr void __cordl_internal_set__UnderwaterEffectPass(::WaveHarmonic::Crest::UnderwaterEffectPass*  value) ;

/// @brief Method .ctor, addr 0x1825a47f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::UnderwaterEffectPassURP* getStaticF_s_Instance() ;

static inline void setStaticF_s_Instance(::WaveHarmonic::Crest::UnderwaterEffectPassURP*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterEffectPassURP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterEffectPassURP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterEffectPassURP(UnderwaterEffectPassURP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterEffectPassURP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterEffectPassURP(UnderwaterEffectPassURP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16705};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"Crest.DrawWater/Volume"};

/// @brief Field _PassData, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  ____PassData;

/// @brief Field _Renderer, offset: 0x68, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterRenderer*  ____Renderer;

/// @brief Field _UnderwaterEffectPass, offset: 0x70, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterEffectPass*  ____UnderwaterEffectPass;

/// @brief Field _CopyDepthBufferPass, offset: 0x78, size: 0x8, def value: None
 ::WaveHarmonic::Crest::CopyDepthBufferPassURP*  ____CopyDepthBufferPass;

/// @brief Field _ColorBuffer, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____ColorBuffer;

/// @brief Field _DepthBuffer, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____DepthBuffer;

/// @brief Field _ErrorMissingColorTarget, offset: 0x90, size: 0x1, def value: None
 bool  ____ErrorMissingColorTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____PassData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____Renderer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____UnderwaterEffectPass) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____CopyDepthBufferPass) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____ColorBuffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____DepthBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterEffectPassURP, ____ErrorMissingColorTarget) == 0x90, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterEffectPassURP) == 0x98, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
