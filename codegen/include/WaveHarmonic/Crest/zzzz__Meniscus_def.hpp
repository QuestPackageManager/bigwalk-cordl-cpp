#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Meniscus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Meniscus)
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
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace WaveHarmonic::Crest {
class MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData;
}
namespace WaveHarmonic::Crest {
class MeniscusRenderPass_MeniscusRendererURP_Meniscus___c;
}
namespace WaveHarmonic::Crest {
class MeniscusRendererURP_Meniscus_MeniscusRenderPass;
}
namespace WaveHarmonic::Crest {
class Meniscus_MeniscusRendererBIRP;
}
namespace WaveHarmonic::Crest {
class Meniscus_MeniscusRendererURP;
}
namespace WaveHarmonic::Crest {
class Meniscus_MeniscusRenderer;
}
namespace WaveHarmonic::Crest {
struct WaterCameraExclusion;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Meniscus;
}
namespace WaveHarmonic::Crest {
class MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData;
}
namespace WaveHarmonic::Crest {
class MeniscusRenderPass_MeniscusRendererURP_Meniscus___c;
}
namespace WaveHarmonic::Crest {
class MeniscusRendererURP_Meniscus_MeniscusRenderPass;
}
namespace WaveHarmonic::Crest {
class Meniscus_MeniscusRenderer;
}
namespace WaveHarmonic::Crest {
class Meniscus_MeniscusRendererBIRP;
}
namespace WaveHarmonic::Crest {
class Meniscus_MeniscusRendererURP;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Meniscus*);
MARK_REF_T(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*);
MARK_REF_T(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*);
MARK_REF_T(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*);
MARK_REF_T(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*);
MARK_REF_T(::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*);
MARK_REF_T(::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Meniscus*, "WaveHarmonic.Crest", "Meniscus");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*, "WaveHarmonic.Crest", "Meniscus/MeniscusRendererURP/MeniscusRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*, "WaveHarmonic.Crest", "Meniscus/MeniscusRendererURP/MeniscusRenderPass/<>c");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*, "WaveHarmonic.Crest", "Meniscus/MeniscusRendererURP/MeniscusRenderPass");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*, "WaveHarmonic.Crest", "Meniscus/MeniscusRenderer");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP*, "WaveHarmonic.Crest", "Meniscus/MeniscusRendererBIRP");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP*, "WaveHarmonic.Crest", "Meniscus/MeniscusRendererURP");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus/MeniscusRenderer
class CORDL_TYPE Meniscus_MeniscusRenderer : public ::System::Object {
public:
// Declarations
/// @brief Field _Meniscus, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Meniscus, put=__cordl_internal_set__Meniscus)) ::WaveHarmonic::Crest::Meniscus*  _Meniscus;

/// @brief Field _Water, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Method Destroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void Execute(::UnityEngine::Camera*  camera, T  commands) ;

static inline ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus) ;

/// @brief Method OnBeginCameraRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldExecute, addr 0x18258ddf0, size 0xb0, virtual false, abstract: false, final false
inline bool ShouldExecute(::UnityEngine::Camera*  camera) ;

constexpr ::WaveHarmonic::Crest::Meniscus* const& __cordl_internal_get__Meniscus() const;

constexpr ::WaveHarmonic::Crest::Meniscus*& __cordl_internal_get__Meniscus() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__Meniscus(::WaveHarmonic::Crest::Meniscus*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Meniscus_MeniscusRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Meniscus_MeniscusRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Meniscus_MeniscusRenderer(Meniscus_MeniscusRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Meniscus_MeniscusRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Meniscus_MeniscusRenderer(Meniscus_MeniscusRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16650};

/// @brief Field k_Draw offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Draw{u"Crest.DrawWater/Meniscus"};

/// @brief Field _Water, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _Meniscus, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Meniscus*  ____Meniscus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer, ____Water) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer, ____Meniscus) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Meniscus::MeniscusRenderer
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus/MeniscusRendererBIRP
class CORDL_TYPE Meniscus_MeniscusRendererBIRP : public ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer {
public:
// Declarations
/// @brief Field _Commands, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Commands, put=__cordl_internal_set__Commands)) ::UnityEngine::Rendering::CommandBuffer*  _Commands;

/// @brief Field _CommandsRegistered, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__CommandsRegistered, put=__cordl_internal_set__CommandsRegistered)) bool  _CommandsRegistered;

/// @brief Method Destroy, addr 0x18258db30, size 0x10, virtual true, abstract: false, final false
inline void Destroy() ;

static inline ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus) ;

/// @brief Method OnBeginCameraRendering, addr 0x18258db40, size 0xd0, virtual true, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x18258dc10, size 0x40, virtual true, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__Commands() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__Commands() ;

constexpr bool const& __cordl_internal_get__CommandsRegistered() const;

constexpr bool& __cordl_internal_get__CommandsRegistered() ;

constexpr void __cordl_internal_set__Commands(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__CommandsRegistered(bool  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Meniscus_MeniscusRendererBIRP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Meniscus_MeniscusRendererBIRP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Meniscus_MeniscusRendererBIRP(Meniscus_MeniscusRendererBIRP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Meniscus_MeniscusRendererBIRP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Meniscus_MeniscusRendererBIRP(Meniscus_MeniscusRendererBIRP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16645};

/// @brief Field _Commands, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____Commands;

/// @brief Field _CommandsRegistered, offset: 0x28, size: 0x1, def value: None
 bool  ____CommandsRegistered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP, ____Commands) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP, ____CommandsRegistered) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP) == 0x30, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus/MeniscusRendererURP/MeniscusRenderPass/PassData
class CORDL_TYPE MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field _CameraData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraData, put=__cordl_internal_set__CameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData*  _CameraData;

/// @brief Field _Renderer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  _Renderer;

static inline ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get__CameraData() const;

constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get__CameraData() ;

constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*& __cordl_internal_get__Renderer() ;

constexpr void __cordl_internal_set__CameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value) ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData(MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData(MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16646};

/// @brief Field _CameraData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::UniversalCameraData*  ____CameraData;

/// @brief Field _Renderer, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  ____Renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData, ____CameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData, ____Renderer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus/MeniscusRendererURP/MeniscusRenderPass/<>c
class CORDL_TYPE MeniscusRenderPass_MeniscusRendererURP_Meniscus___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__6_0;

static inline ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__6_0, addr 0x1825942d0, size 0x60, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__6_0(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c*  value) ;

static inline void setStaticF___9__6_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeniscusRenderPass_MeniscusRendererURP_Meniscus___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeniscusRenderPass_MeniscusRendererURP_Meniscus___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeniscusRenderPass_MeniscusRendererURP_Meniscus___c(MeniscusRenderPass_MeniscusRendererURP_Meniscus___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeniscusRenderPass_MeniscusRendererURP_Meniscus___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeniscusRenderPass_MeniscusRendererURP_Meniscus___c(MeniscusRenderPass_MeniscusRendererURP_Meniscus___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16647};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus/MeniscusRendererURP/MeniscusRenderPass
class CORDL_TYPE MeniscusRendererURP_Meniscus_MeniscusRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus_PassData;

using __c = ::WaveHarmonic::Crest::MeniscusRenderPass_MeniscusRendererURP_Meniscus___c;

/// @brief Field _Renderer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  _Renderer;

/// @brief Field _RequiresOpaqueTexture, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresOpaqueTexture, put=__cordl_internal_set__RequiresOpaqueTexture)) bool  _RequiresOpaqueTexture;

/// @brief Method EnqueuePass, addr 0x18258d570, size 0xd0, virtual false, abstract: false, final false
inline void EnqueuePass(::UnityEngine::Camera*  camera) ;

static inline ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x18258d640, size 0x4d0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*& __cordl_internal_get__Renderer() ;

constexpr bool const& __cordl_internal_get__RequiresOpaqueTexture() const;

constexpr bool& __cordl_internal_get__RequiresOpaqueTexture() ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value) ;

constexpr void __cordl_internal_set__RequiresOpaqueTexture(bool  value) ;

/// @brief Method .ctor, addr 0x18258db10, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeniscusRendererURP_Meniscus_MeniscusRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeniscusRendererURP_Meniscus_MeniscusRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeniscusRendererURP_Meniscus_MeniscusRenderPass(MeniscusRendererURP_Meniscus_MeniscusRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeniscusRendererURP_Meniscus_MeniscusRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeniscusRendererURP_Meniscus_MeniscusRenderPass(MeniscusRendererURP_Meniscus_MeniscusRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16648};

/// @brief Field k_Name offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Name{u"Crest.DrawWater/Meniscus"};

/// @brief Field _Renderer, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  ____Renderer;

/// @brief Field _RequiresOpaqueTexture, offset: 0x68, size: 0x1, def value: None
 bool  ____RequiresOpaqueTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass, ____Renderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass, ____RequiresOpaqueTexture) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Meniscus::MeniscusRenderer
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus/MeniscusRendererURP
class CORDL_TYPE Meniscus_MeniscusRendererURP : public ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer {
public:
// Declarations
using MeniscusRenderPass = ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass;

/// @brief Field _MaskRenderPass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaskRenderPass, put=__cordl_internal_set__MaskRenderPass)) ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*  _MaskRenderPass;

static inline ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus) ;

/// @brief Method OnBeginCameraRendering, addr 0x18258dc50, size 0x110, virtual true, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRendering, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

constexpr ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass* const& __cordl_internal_get__MaskRenderPass() const;

constexpr ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*& __cordl_internal_get__MaskRenderPass() ;

constexpr void __cordl_internal_set__MaskRenderPass(::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*  value) ;

/// @brief Method .ctor, addr 0x18258dd60, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Meniscus*  meniscus) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Meniscus_MeniscusRendererURP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Meniscus_MeniscusRendererURP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Meniscus_MeniscusRendererURP(Meniscus_MeniscusRendererURP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Meniscus_MeniscusRendererURP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Meniscus_MeniscusRendererURP(Meniscus_MeniscusRendererURP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16649};

/// @brief Field _MaskRenderPass, offset: 0x20, size: 0x8, def value: None
 ::WaveHarmonic::Crest::MeniscusRendererURP_Meniscus_MeniscusRenderPass*  ____MaskRenderPass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP, ____MaskRenderPass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Internal.Versioned, WaveHarmonic.Crest.WaterCameraExclusion
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Meniscus
class CORDL_TYPE Meniscus : public ::WaveHarmonic::Crest::Internal::Versioned {
public:
// Declarations
using MeniscusRenderer = ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer;

using MeniscusRendererBIRP = ::WaveHarmonic::Crest::Meniscus_MeniscusRendererBIRP;

using MeniscusRendererURP = ::WaveHarmonic::Crest::Meniscus_MeniscusRendererURP;

 __declspec(property(get=get_CameraExclusions, put=set_CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  CameraExclusions;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_ForceRenderingOff, put=set_ForceRenderingOff)) bool  ForceRenderingOff;

 __declspec(property(get=get_Layer, put=set_Layer)) int32_t  Layer;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_Renderer, put=set_Renderer)) ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  Renderer;

 __declspec(property(get=get_RequiresOpaqueTexture)) bool  RequiresOpaqueTexture;

/// @brief Field _CameraExclusions, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__CameraExclusions, put=__cordl_internal_set__CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  _CameraExclusions;

/// @brief Field _Enabled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled, put=__cordl_internal_set__Enabled)) bool  _Enabled;

/// @brief Field <ForceRenderingOff>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceRenderingOff_k__BackingField, put=__cordl_internal_set__ForceRenderingOff_k__BackingField)) bool  _ForceRenderingOff_k__BackingField;

/// @brief Field _Layer, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) int32_t  _Layer;

/// @brief Field _Material, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material, put=__cordl_internal_set__Material)) ::UnityW<::UnityEngine::Material>  _Material;

/// @brief Field <Renderer>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer_k__BackingField, put=__cordl_internal_set__Renderer_k__BackingField)) ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  _Renderer_k__BackingField;

/// @brief Field _Water, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Method Destroy, addr 0x18258dea0, size 0x40, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x18258dee0, size 0x20, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x18258df00, size 0x40, virtual false, abstract: false, final false
inline void Enable() ;

/// @brief Method GetEnabled, addr 0x18258df40, size 0x20, virtual false, abstract: false, final false
inline bool GetEnabled() ;

/// @brief Method Initialize, addr 0x18258df60, size 0x140, virtual false, abstract: false, final false
inline void Initialize(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::Meniscus* New_ctor() ;

/// @brief Method OnActiveRenderPipelineTypeChanged, addr 0x18258e0a0, size 0x50, virtual false, abstract: false, final false
inline void OnActiveRenderPipelineTypeChanged() ;

/// @brief Method SetEnabled, addr 0x18258e0f0, size 0x80, virtual false, abstract: false, final false
inline void SetEnabled(bool  previous, bool  current) ;

/// @brief Method SetMaterial, addr 0x18258e170, size 0xc0, virtual false, abstract: false, final false
inline void SetMaterial(::UnityEngine::Material*  previous, ::UnityEngine::Material*  current) ;

/// @brief Method ShouldRender, addr 0x18258e230, size 0x60, virtual false, abstract: false, final false
inline bool ShouldRender(::UnityEngine::Camera*  camera) ;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& __cordl_internal_get__CameraExclusions() const;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& __cordl_internal_get__CameraExclusions() ;

constexpr bool const& __cordl_internal_get__Enabled() const;

constexpr bool& __cordl_internal_get__Enabled() ;

constexpr bool const& __cordl_internal_get__ForceRenderingOff_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceRenderingOff_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Layer() const;

constexpr int32_t& __cordl_internal_get__Layer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material() ;

constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* const& __cordl_internal_get__Renderer_k__BackingField() const;

constexpr ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*& __cordl_internal_get__Renderer_k__BackingField() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

constexpr void __cordl_internal_set__Enabled(bool  value) ;

constexpr void __cordl_internal_set__ForceRenderingOff_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Layer(int32_t  value) ;

constexpr void __cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Renderer_k__BackingField(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x18258e290, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraExclusions, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterCameraExclusion get_CameraExclusions() ;

/// @brief Method get_Enabled, addr 0x18258df40, size 0x20, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_ForceRenderingOff, addr 0x180391c90, size 0x10, virtual false, abstract: false, final false
inline bool get_ForceRenderingOff() ;

/// @brief Method get_Layer, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Layer() ;

/// @brief Method get_Material, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_Renderer, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer* get_Renderer() ;

/// @brief Method get_RequiresOpaqueTexture, addr 0x18258e2b0, size 0x60, virtual false, abstract: false, final false
inline bool get_RequiresOpaqueTexture() ;

/// @brief Method set_CameraExclusions, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

/// @brief Method set_Enabled, addr 0x18258e310, size 0x80, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_ForceRenderingOff, addr 0x180391cb0, size 0x10, virtual false, abstract: false, final false
inline void set_ForceRenderingOff(bool  value) ;

/// @brief Method set_Layer, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_Layer(int32_t  value) ;

/// @brief Method set_Material, addr 0x18258e390, size 0xd0, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_Renderer, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Renderer(::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Meniscus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Meniscus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Meniscus(Meniscus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Meniscus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Meniscus(Meniscus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16651};

/// @brief Field _Enabled, offset: 0x14, size: 0x1, def value: None
 bool  ____Enabled;

/// @brief Field _Layer, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Layer;

/// @brief Field _Material, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material;

/// @brief Field _CameraExclusions, offset: 0x28, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterCameraExclusion  ____CameraExclusions;

/// @brief Field _Water, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field <Renderer>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Meniscus_MeniscusRenderer*  ____Renderer_k__BackingField;

/// @brief Field <ForceRenderingOff>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____ForceRenderingOff_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____Enabled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____Layer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____Material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____CameraExclusions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____Water) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____Renderer_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Meniscus, ____ForceRenderingOff_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Meniscus) == 0x48, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
