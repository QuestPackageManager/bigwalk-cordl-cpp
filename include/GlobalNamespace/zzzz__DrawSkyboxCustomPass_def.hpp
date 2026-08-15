#pragma once
// IWYU pragma private; include "GlobalNamespace/DrawSkyboxCustomPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DrawSkyboxCustomPass)
namespace GlobalNamespace {
class DrawSkyboxCustomPass_PassData;
}
namespace GlobalNamespace {
class DrawSkyboxCustomPass___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class DrawSkyboxCustomPass;
}
namespace GlobalNamespace {
class DrawSkyboxCustomPass_PassData;
}
namespace GlobalNamespace {
class DrawSkyboxCustomPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DrawSkyboxCustomPass*);
MARK_REF_T(::GlobalNamespace::DrawSkyboxCustomPass_PassData*);
MARK_REF_T(::GlobalNamespace::DrawSkyboxCustomPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawSkyboxCustomPass*, "", "DrawSkyboxCustomPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawSkyboxCustomPass_PassData*, "", "DrawSkyboxCustomPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawSkyboxCustomPass___c*, "", "DrawSkyboxCustomPass/<>c");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: DrawSkyboxCustomPass/PassData
class CORDL_TYPE DrawSkyboxCustomPass_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field material, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field projectionMatrix, offset 0x68, size 0x40 
 __declspec(property(get=__cordl_internal_get_projectionMatrix, put=__cordl_internal_set_projectionMatrix)) ::UnityEngine::Matrix4x4  projectionMatrix;

/// @brief Field skyRendererListHandle, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_skyRendererListHandle, put=__cordl_internal_set_skyRendererListHandle)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  skyRendererListHandle;

/// @brief Field viewMatrix, offset 0x28, size 0x40 
 __declspec(property(get=__cordl_internal_get_viewMatrix, put=__cordl_internal_set_viewMatrix)) ::UnityEngine::Matrix4x4  viewMatrix;

static inline ::GlobalNamespace::DrawSkyboxCustomPass_PassData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_projectionMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_projectionMatrix() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_skyRendererListHandle() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_skyRendererListHandle() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_viewMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_viewMatrix() ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_skyRendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value) ;

constexpr void __cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawSkyboxCustomPass_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxCustomPass_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawSkyboxCustomPass_PassData(DrawSkyboxCustomPass_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxCustomPass_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawSkyboxCustomPass_PassData(DrawSkyboxCustomPass_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4769};

/// @brief Field skyRendererListHandle, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  ___skyRendererListHandle;

/// @brief Field material, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field viewMatrix, offset: 0x28, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___viewMatrix;

/// @brief Field projectionMatrix, offset: 0x68, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___projectionMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawSkyboxCustomPass_PassData, ___skyRendererListHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawSkyboxCustomPass_PassData, ___material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawSkyboxCustomPass_PassData, ___viewMatrix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawSkyboxCustomPass_PassData, ___projectionMatrix) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawSkyboxCustomPass_PassData) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DrawSkyboxCustomPass/<>c
class CORDL_TYPE DrawSkyboxCustomPass___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::DrawSkyboxCustomPass___c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__8_0;

static inline ::GlobalNamespace::DrawSkyboxCustomPass___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__8_0, addr 0x1803299e0, size 0xf0, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__8_0(::GlobalNamespace::DrawSkyboxCustomPass_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::DrawSkyboxCustomPass___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::GlobalNamespace::DrawSkyboxCustomPass___c*  value) ;

static inline void setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::DrawSkyboxCustomPass_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawSkyboxCustomPass___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxCustomPass___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawSkyboxCustomPass___c(DrawSkyboxCustomPass___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxCustomPass___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawSkyboxCustomPass___c(DrawSkyboxCustomPass___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DrawSkyboxCustomPass___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: DrawSkyboxCustomPass
class CORDL_TYPE DrawSkyboxCustomPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::GlobalNamespace::DrawSkyboxCustomPass_PassData;

using __c = ::GlobalNamespace::DrawSkyboxCustomPass___c;

/// @brief Field colorTargetHandle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorTargetHandle, put=__cordl_internal_set_colorTargetHandle)) ::UnityEngine::Rendering::RTHandle*  colorTargetHandle;

/// @brief Field mirrorMaterial, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_mirrorMaterial, put=__cordl_internal_set_mirrorMaterial)) ::UnityW<::UnityEngine::Material>  mirrorMaterial;

/// @brief Method CreateSkyBoxRendererList, addr 0x1803245e0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyBoxRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Camera*  camera) ;

/// @brief Method ExecutePass, addr 0x180324620, size 0xf0, virtual false, abstract: false, final false
static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::GlobalNamespace::DrawSkyboxCustomPass_PassData*  passData) ;

/// @brief Method GetCamera, addr 0x180324710, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> GetCamera() ;

/// @brief Method GetDepthTarget, addr 0x180324740, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle GetDepthTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method GetIntermediateTarget, addr 0x1803248b0, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle GetIntermediateTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method InitPassData, addr 0x180324a20, size 0xf0, virtual false, abstract: false, final false
inline void InitPassData(::by_ref<::GlobalNamespace::DrawSkyboxCustomPass_PassData*>  passData, ::by_ref<::UnityEngine::Camera*>  camera, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>  handle, ::by_ref<::UnityEngine::Material*>  material) ;

static inline ::GlobalNamespace::DrawSkyboxCustomPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt, ::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Material*  mirrorMaterial) ;

/// @brief Method RecordRenderGraph, addr 0x180324b10, size 0xa00, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_colorTargetHandle() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_colorTargetHandle() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mirrorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mirrorMaterial() ;

constexpr void __cordl_internal_set_colorTargetHandle(::UnityEngine::Rendering::RTHandle*  value) ;

constexpr void __cordl_internal_set_mirrorMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x180325510, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent  evt, ::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Material*  mirrorMaterial) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawSkyboxCustomPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxCustomPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawSkyboxCustomPass(DrawSkyboxCustomPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxCustomPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawSkyboxCustomPass(DrawSkyboxCustomPass const& ) = delete;

/// @brief Field DepthTargetName offset 0xffffffff size 0x8
static constexpr ::ConstString  DepthTargetName{u"DrawSkyboxCustomPass_DepthTest"};

/// @brief Field IntermediateTargetName offset 0xffffffff size 0x8
static constexpr ::ConstString  IntermediateTargetName{u"SkyboxIntermediateTarget"};

/// @brief Field MirrorPassName offset 0xffffffff size 0x8
static constexpr ::ConstString  MirrorPassName{u"DrawSkyboxCustomPass_Mirror"};

/// @brief Field PassName offset 0xffffffff size 0x8
static constexpr ::ConstString  PassName{u"DrawSkyboxCustomPass"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4771};

/// @brief Field colorTargetHandle, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ___colorTargetHandle;

/// @brief Field mirrorMaterial, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mirrorMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawSkyboxCustomPass, ___colorTargetHandle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawSkyboxCustomPass, ___mirrorMaterial) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawSkyboxCustomPass) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
