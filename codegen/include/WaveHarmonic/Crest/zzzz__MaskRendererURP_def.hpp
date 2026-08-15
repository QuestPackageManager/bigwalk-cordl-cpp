#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/MaskRendererURP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "WaveHarmonic/Crest/zzzz__MaskRenderer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MaskRendererURP)
namespace UnityEngine::Rendering::RenderGraphModule {
template<typename PassData,typename ContextType>
class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Camera;
}
namespace WaveHarmonic::Crest {
class MaskRenderPass_MaskRendererURP_PassData;
}
namespace WaveHarmonic::Crest {
class MaskRenderPass_MaskRendererURP___c;
}
namespace WaveHarmonic::Crest {
class MaskRendererURP_MaskRenderPass;
}
namespace WaveHarmonic::Crest {
class MaskRenderer;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class MaskRenderPass_MaskRendererURP_PassData;
}
namespace WaveHarmonic::Crest {
class MaskRenderPass_MaskRendererURP___c;
}
namespace WaveHarmonic::Crest {
class MaskRendererURP;
}
namespace WaveHarmonic::Crest {
class MaskRendererURP_MaskRenderPass;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*);
MARK_REF_T(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*);
MARK_REF_T(::WaveHarmonic::Crest::MaskRendererURP*);
MARK_REF_T(::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*, "WaveHarmonic.Crest", "MaskRendererURP/MaskRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*, "WaveHarmonic.Crest", "MaskRendererURP/MaskRenderPass/<>c");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRendererURP*, "WaveHarmonic.Crest", "MaskRendererURP");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*, "WaveHarmonic.Crest", "MaskRendererURP/MaskRenderPass");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRendererURP/MaskRenderPass/PassData
class CORDL_TYPE MaskRenderPass_MaskRendererURP_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field _CameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraData, put=__cordl_internal_set__CameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  _CameraData;

/// @brief Field _Renderer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::MaskRenderer*  _Renderer;

static inline ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get__CameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get__CameraData() ;

constexpr ::WaveHarmonic::Crest::MaskRenderer* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::MaskRenderer*& __cordl_internal_get__Renderer() ;

constexpr void __cordl_internal_set__CameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::MaskRenderer*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRenderPass_MaskRendererURP_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderPass_MaskRendererURP_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRenderPass_MaskRendererURP_PassData(MaskRenderPass_MaskRendererURP_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderPass_MaskRendererURP_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRenderPass_MaskRendererURP_PassData(MaskRenderPass_MaskRendererURP_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16681};

/// @brief Field _CameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ____CameraData;

/// @brief Field _Renderer, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::MaskRenderer*  ____Renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData, ____CameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData, ____Renderer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRendererURP/MaskRenderPass/<>c
class CORDL_TYPE MaskRenderPass_MaskRendererURP___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__5_0;

static inline ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__5_0, addr 0x1825a3b80, size 0xb0, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__5_0(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c*  value) ;

static inline void setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRenderPass_MaskRendererURP___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderPass_MaskRendererURP___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRenderPass_MaskRendererURP___c(MaskRenderPass_MaskRendererURP___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRenderPass_MaskRendererURP___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRenderPass_MaskRendererURP___c(MaskRenderPass_MaskRendererURP___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRendererURP/MaskRenderPass
class CORDL_TYPE MaskRendererURP_MaskRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP_PassData;

using __c = ::WaveHarmonic::Crest::MaskRenderPass_MaskRendererURP___c;

/// @brief Field _Renderer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::MaskRenderer*  _Renderer;

/// @brief Method EnqueuePass, addr 0x1825a1720, size 0x60, virtual false, abstract: false, final false
inline void EnqueuePass(::UnityEngine::Camera*  camera) ;

static inline ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x1825a1780, size 0x2a0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

constexpr ::WaveHarmonic::Crest::MaskRenderer* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::MaskRenderer*& __cordl_internal_get__Renderer() ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::MaskRenderer*  value) ;

/// @brief Method .ctor, addr 0x1825a1a20, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRendererURP_MaskRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRendererURP_MaskRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRendererURP_MaskRenderPass(MaskRendererURP_MaskRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRendererURP_MaskRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRendererURP_MaskRenderPass(MaskRendererURP_MaskRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16683};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"Crest.DrawMask"};

/// @brief Field _Renderer, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::MaskRenderer*  ____Renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass, ____Renderer) == 0x60, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass) == 0x68, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.MaskRenderer
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.MaskRendererURP
class CORDL_TYPE MaskRendererURP : public ::WaveHarmonic::Crest::MaskRenderer {
public:
// Declarations
using MaskRenderPass = ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass;

/// @brief Field _MaskRenderPass, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaskRenderPass, put=__cordl_internal_set__MaskRenderPass)) ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*  _MaskRenderPass;

static inline ::WaveHarmonic::Crest::MaskRendererURP* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnBeginCameraRendering, addr 0x1825a1d20, size 0xa0, virtual true, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

constexpr ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass* const& __cordl_internal_get__MaskRenderPass() const;

constexpr ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*& __cordl_internal_get__MaskRenderPass() ;

constexpr void __cordl_internal_set__MaskRenderPass(::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*  value) ;

/// @brief Method .ctor, addr 0x1825a1dc0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskRendererURP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskRendererURP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskRendererURP(MaskRendererURP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskRendererURP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskRendererURP(MaskRendererURP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16684};

/// @brief Field _MaskRenderPass, offset: 0x90, size: 0x8, def value: None
 ::WaveHarmonic::Crest::MaskRendererURP_MaskRenderPass*  ____MaskRenderPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MaskRendererURP, ____MaskRenderPass) == 0x90, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MaskRendererURP) == 0x98, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
