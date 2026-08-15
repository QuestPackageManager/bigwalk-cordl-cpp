#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CopyDepthBufferPassURP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "WaveHarmonic/Crest/zzzz__RenderGraphHelper_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CopyDepthBufferPassURP)
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
namespace WaveHarmonic::Crest {
class CopyDepthBufferPassURP_PassData;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CopyDepthBufferPassURP;
}
namespace WaveHarmonic::Crest {
class CopyDepthBufferPassURP_PassData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CopyDepthBufferPassURP*);
MARK_REF_T(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CopyDepthBufferPassURP*, "WaveHarmonic.Crest", "CopyDepthBufferPassURP");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*, "WaveHarmonic.Crest", "CopyDepthBufferPassURP/PassData");
// Dependencies System.Object, WaveHarmonic.Crest.RenderGraphHelper::Handle
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CopyDepthBufferPassURP/PassData
class CORDL_TYPE CopyDepthBufferPassURP_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field cameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraData, put=__cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData;

/// @brief Field colorTargetHandle, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_colorTargetHandle, put=__cordl_internal_set_colorTargetHandle)) ::WaveHarmonic::Crest::RenderGraphHelper_Handle  colorTargetHandle;

/// @brief Field depthTargetHandle, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_depthTargetHandle, put=__cordl_internal_set_depthTargetHandle)) ::WaveHarmonic::Crest::RenderGraphHelper_Handle  depthTargetHandle;

/// @brief Method Init, addr 0x1825a2f70, size 0x1b0, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*  builder) ;

static inline ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData() ;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& __cordl_internal_get_colorTargetHandle() const;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& __cordl_internal_get_colorTargetHandle() ;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle const& __cordl_internal_get_depthTargetHandle() const;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_Handle& __cordl_internal_get_depthTargetHandle() ;

constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

constexpr void __cordl_internal_set_colorTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value) ;

constexpr void __cordl_internal_set_depthTargetHandle(::WaveHarmonic::Crest::RenderGraphHelper_Handle  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyDepthBufferPassURP_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthBufferPassURP_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyDepthBufferPassURP_PassData(CopyDepthBufferPassURP_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthBufferPassURP_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyDepthBufferPassURP_PassData(CopyDepthBufferPassURP_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16706};

/// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ___cameraData;

/// @brief Field colorTargetHandle, offset: 0x18, size: 0x18, def value: None
 ::WaveHarmonic::Crest::RenderGraphHelper_Handle  ___colorTargetHandle;

/// @brief Field depthTargetHandle, offset: 0x30, size: 0x18, def value: None
 ::WaveHarmonic::Crest::RenderGraphHelper_Handle  ___depthTargetHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData, ___colorTargetHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData, ___depthTargetHandle) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData) == 0x48, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CopyDepthBufferPassURP
class CORDL_TYPE CopyDepthBufferPassURP : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData;

/// @brief Field _ColorBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorBuffer, put=__cordl_internal_set__ColorBuffer)) ::UnityEngine::Rendering::RTHandle*  _ColorBuffer;

/// @brief Field _DepthBuffer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthBuffer, put=__cordl_internal_set__DepthBuffer)) ::UnityEngine::Rendering::RTHandle*  _DepthBuffer;

/// @brief Field _DepthBufferCopy, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthBufferCopy, put=__cordl_internal_set__DepthBufferCopy)) ::UnityEngine::Rendering::RTHandle*  _DepthBufferCopy;

/// @brief Field _PassData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__PassData, put=__cordl_internal_set__PassData)) ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  _PassData;

/// @brief Method Execute, addr 0x18259e7c0, size 0x170, virtual false, abstract: false, final false
inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  data) ;

static inline ::WaveHarmonic::Crest::CopyDepthBufferPassURP* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  event) ;

/// @brief Method OnSetup, addr 0x18259e930, size 0x170, virtual false, abstract: false, final false
inline void OnSetup(::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  data) ;

/// @brief Method RecordRenderGraph, addr 0x18259eaa0, size 0x370, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

/// @brief Method Release, addr 0x18259ee10, size 0x40, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method <RecordRenderGraph>b__2_0, addr 0x18259ee50, size 0x2a0, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__2_0(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__ColorBuffer() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__ColorBuffer() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthBuffer() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthBuffer() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__DepthBufferCopy() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__DepthBufferCopy() ;

constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData* const& __cordl_internal_get__PassData() const;

constexpr ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*& __cordl_internal_get__PassData() ;

constexpr void __cordl_internal_set__ColorBuffer(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__DepthBuffer(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__DepthBufferCopy(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set__PassData(::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  value) ;

/// @brief Method .ctor, addr 0x18259f0f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  event) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyDepthBufferPassURP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthBufferPassURP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyDepthBufferPassURP(CopyDepthBufferPassURP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthBufferPassURP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyDepthBufferPassURP(CopyDepthBufferPassURP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16707};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"Crest Copy Depth Buffer"};

/// @brief Field _PassData, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::CopyDepthBufferPassURP_PassData*  ____PassData;

/// @brief Field _ColorBuffer, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____ColorBuffer;

/// @brief Field _DepthBuffer, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____DepthBuffer;

/// @brief Field _DepthBufferCopy, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____DepthBufferCopy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP, ____PassData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP, ____ColorBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP, ____DepthBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthBufferPassURP, ____DepthBufferCopy) == 0x78, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CopyDepthBufferPassURP) == 0x80, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
