#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleShadowsURP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
CORDL_MODULE_EXPORT(SampleShadowsURP)
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace WaveHarmonic::Crest {
class SampleShadowsURP_PassData;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class SampleShadowsURP;
}
namespace WaveHarmonic::Crest {
class SampleShadowsURP_PassData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::SampleShadowsURP*);
MARK_REF_T(::WaveHarmonic::Crest::SampleShadowsURP_PassData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleShadowsURP*, "WaveHarmonic.Crest", "SampleShadowsURP");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleShadowsURP_PassData*, "WaveHarmonic.Crest", "SampleShadowsURP/PassData");
// Dependencies System.Object, UnityEngine.Rendering.CullingResults
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SampleShadowsURP/PassData
class CORDL_TYPE SampleShadowsURP_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field cameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraData, put=__cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData;

/// @brief Field cullResults, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_cullResults, put=__cordl_internal_set_cullResults)) ::UnityEngine::Rendering::CullingResults  cullResults;

/// @brief Field lightData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightData, put=__cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData;

/// @brief Method Init, addr 0x182578ab0, size 0x80, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*  builder) ;

static inline ::WaveHarmonic::Crest::SampleShadowsURP_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData() ;

constexpr ::UnityEngine::Rendering::CullingResults const& __cordl_internal_get_cullResults() const;

constexpr ::UnityEngine::Rendering::CullingResults& __cordl_internal_get_cullResults() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData() ;

constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

constexpr void __cordl_internal_set_cullResults(::UnityEngine::Rendering::CullingResults  value) ;

constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleShadowsURP_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleShadowsURP_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleShadowsURP_PassData(SampleShadowsURP_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleShadowsURP_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleShadowsURP_PassData(SampleShadowsURP_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16626};

/// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ___cameraData;

/// @brief Field lightData, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalLightData*  ___lightData;

/// @brief Field cullResults, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::CullingResults  ___cullResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SampleShadowsURP_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SampleShadowsURP_PassData, ___lightData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SampleShadowsURP_PassData, ___cullResults) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SampleShadowsURP_PassData) == 0x30, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SampleShadowsURP
class CORDL_TYPE SampleShadowsURP : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::WaveHarmonic::Crest::SampleShadowsURP_PassData;

/// @brief Field _PassData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PassData, put=__cordl_internal_set__PassData)) ::WaveHarmonic::Crest::SampleShadowsURP_PassData*  _PassData;

/// @brief Field _Water, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::WaveHarmonic::Crest::SampleShadowsURP*  s_Instance;

/// @brief Method Enable, addr 0x18257df90, size 0xc0, virtual false, abstract: false, final false
static inline void Enable(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method EnqueuePass, addr 0x18257e050, size 0x80, virtual false, abstract: false, final false
static inline void EnqueuePass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method Execute, addr 0x18257e0d0, size 0xa0, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::SampleShadowsURP_PassData*  renderingData) ;

static inline ::WaveHarmonic::Crest::SampleShadowsURP* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent) ;

/// @brief Method RecordRenderGraph, addr 0x18257e170, size 0x2b0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

/// @brief Method <RecordRenderGraph>b__2_0, addr 0x18257e420, size 0xc0, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__2_0(::WaveHarmonic::Crest::SampleShadowsURP_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

constexpr ::WaveHarmonic::Crest::SampleShadowsURP_PassData* const& __cordl_internal_get__PassData() const;

constexpr ::WaveHarmonic::Crest::SampleShadowsURP_PassData*& __cordl_internal_get__PassData() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__PassData(::WaveHarmonic::Crest::SampleShadowsURP_PassData*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x18257e4e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  renderPassEvent) ;

static inline ::WaveHarmonic::Crest::SampleShadowsURP* getStaticF_s_Instance() ;

/// @brief Method get_Created, addr 0x18257e530, size 0x20, virtual false, abstract: false, final false
static inline bool get_Created() ;

static inline void setStaticF_s_Instance(::WaveHarmonic::Crest::SampleShadowsURP*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleShadowsURP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleShadowsURP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleShadowsURP(SampleShadowsURP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleShadowsURP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleShadowsURP(SampleShadowsURP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16627};

/// @brief Field _PassData, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleShadowsURP_PassData*  ____PassData;

/// @brief Field _Water, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SampleShadowsURP, ____PassData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SampleShadowsURP, ____Water) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SampleShadowsURP) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
