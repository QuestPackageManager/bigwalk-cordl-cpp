#pragma once
// IWYU pragma private; include "Enviro/EnviroURPRenderGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroURPRenderGraph)
namespace Enviro {
class EnviroURPRenderGraph_PassData;
}
namespace Enviro {
class EnviroURPRenderGraph___c;
}
namespace Enviro {
class EnviroVolumetricCloudRenderer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
struct TextureHandle;
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
// Forward declare root types
namespace Enviro {
class EnviroURPRenderGraph;
}
namespace Enviro {
class EnviroURPRenderGraph_PassData;
}
namespace Enviro {
class EnviroURPRenderGraph___c;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroURPRenderGraph*);
MARK_REF_T(::Enviro::EnviroURPRenderGraph_PassData*);
MARK_REF_T(::Enviro::EnviroURPRenderGraph___c*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroURPRenderGraph*, "Enviro", "EnviroURPRenderGraph");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroURPRenderGraph_PassData*, "Enviro", "EnviroURPRenderGraph/PassData");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroURPRenderGraph___c*, "Enviro", "EnviroURPRenderGraph/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroURPRenderGraph/PassData
class CORDL_TYPE EnviroURPRenderGraph_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field material, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field pass, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_pass, put=__cordl_internal_set_pass)) int32_t  pass;

/// @brief Field read1, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_read1, put=__cordl_internal_set_read1)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read1;

/// @brief Field read1Name, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_read1Name, put=__cordl_internal_set_read1Name)) ::StringW  read1Name;

/// @brief Field read2, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_read2, put=__cordl_internal_set_read2)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read2;

/// @brief Field read2Name, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_read2Name, put=__cordl_internal_set_read2Name)) ::StringW  read2Name;

/// @brief Field scaleBias, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_scaleBias, put=__cordl_internal_set_scaleBias)) ::UnityEngine::Vector4  scaleBias;

/// @brief Field src, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_src, put=__cordl_internal_set_src)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src;

/// @brief Field srcName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcName, put=__cordl_internal_set_srcName)) ::StringW  srcName;

/// @brief Field target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target;

static inline ::Enviro::EnviroURPRenderGraph_PassData* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr int32_t const& __cordl_internal_get_pass() const;

constexpr int32_t& __cordl_internal_get_pass() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_read1() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_read1() ;

constexpr ::StringW const& __cordl_internal_get_read1Name() const;

constexpr ::StringW& __cordl_internal_get_read1Name() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_read2() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_read2() ;

constexpr ::StringW const& __cordl_internal_get_read2Name() const;

constexpr ::StringW& __cordl_internal_get_read2Name() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_scaleBias() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_scaleBias() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_src() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_src() ;

constexpr ::StringW const& __cordl_internal_get_srcName() const;

constexpr ::StringW& __cordl_internal_get_srcName() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_target() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_pass(int32_t  value) ;

constexpr void __cordl_internal_set_read1(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_read1Name(::StringW  value) ;

constexpr void __cordl_internal_set_read2(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_read2Name(::StringW  value) ;

constexpr void __cordl_internal_set_scaleBias(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_src(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set_srcName(::StringW  value) ;

constexpr void __cordl_internal_set_target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroURPRenderGraph_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderGraph_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroURPRenderGraph_PassData(EnviroURPRenderGraph_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderGraph_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroURPRenderGraph_PassData(EnviroURPRenderGraph_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18426};

/// @brief Field src, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___src;

/// @brief Field target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___target;

/// @brief Field read1, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___read1;

/// @brief Field read2, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ___read2;

/// @brief Field scaleBias, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___scaleBias;

/// @brief Field srcName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___srcName;

/// @brief Field read1Name, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___read1Name;

/// @brief Field read2Name, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___read2Name;

/// @brief Field pass, offset: 0x78, size: 0x4, def value: None
 int32_t  ___pass;

/// @brief Field material, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___src) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___read1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___read2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___scaleBias) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___srcName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___read1Name) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___read2Name) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___pass) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph_PassData, ___material) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroURPRenderGraph_PassData) == 0x88, "Size mismatch!");

} // namespace end def Enviro
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroURPRenderGraph/<>c
class CORDL_TYPE EnviroURPRenderGraph___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Enviro::EnviroURPRenderGraph___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__10_0;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__12_0;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__8_0;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__9_0;

static inline ::Enviro::EnviroURPRenderGraph___c* New_ctor() ;

/// @brief Method <Blit>b__10_0, addr 0x18060ba20, size 0x180, virtual false, abstract: false, final false
inline void _Blit_b__10_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <Blit>b__8_0, addr 0x18060bba0, size 0xd0, virtual false, abstract: false, final false
inline void _Blit_b__8_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <Blit>b__9_0, addr 0x18060bc70, size 0x120, virtual false, abstract: false, final false
inline void _Blit_b__9_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method <RecordRenderGraph>b__12_0, addr 0x18060bd90, size 0x90, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__12_0(::Enviro::EnviroURPRenderGraph_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Enviro::EnviroURPRenderGraph___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__10_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__12_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__8_0() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Enviro::EnviroURPRenderGraph___c*  value) ;

static inline void setStaticF___9__10_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__12_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

static inline void setStaticF___9__9_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::Enviro::EnviroURPRenderGraph_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroURPRenderGraph___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderGraph___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroURPRenderGraph___c(EnviroURPRenderGraph___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderGraph___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroURPRenderGraph___c(EnviroURPRenderGraph___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18427};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Enviro::EnviroURPRenderGraph___c) == 0x10, "Size mismatch!");

} // namespace end def Enviro
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass, UnityEngine.Vector3, UnityEngine.Vector4
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroURPRenderGraph
class CORDL_TYPE EnviroURPRenderGraph : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::Enviro::EnviroURPRenderGraph_PassData;

using __c = ::Enviro::EnviroURPRenderGraph___c;

/// @brief Field blitThroughMat, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_blitThroughMat, put=__cordl_internal_set_blitThroughMat)) ::UnityW<::UnityEngine::Material>  blitThroughMat;

/// @brief Field floatingPointOriginMod, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_floatingPointOriginMod, put=__cordl_internal_set_floatingPointOriginMod)) ::UnityEngine::Vector3  floatingPointOriginMod;

/// @brief Field fogMat, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_fogMat, put=__cordl_internal_set_fogMat)) ::UnityW<::UnityEngine::Material>  fogMat;

/// @brief Field m_ScaleBias, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ScaleBias, put=__cordl_internal_set_m_ScaleBias)) ::UnityEngine::Vector4  m_ScaleBias;

/// @brief Field volumetricCloudsRender, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricCloudsRender, put=__cordl_internal_set_volumetricCloudsRender)) ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  volumetricCloudsRender;

/// @brief Method Blit, addr 0x180607060, size 0x370, virtual false, abstract: false, final false
inline void Blit(::StringW  passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  mat, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, int32_t  pass) ;

/// @brief Method Blit, addr 0x180606c50, size 0x410, virtual false, abstract: false, final false
inline void Blit(::StringW  passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  mat, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, int32_t  pass, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read1, ::StringW  read1Name) ;

/// @brief Method Blit, addr 0x1806073d0, size 0x4a0, virtual false, abstract: false, final false
inline void Blit(::StringW  passName, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Material*  mat, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, int32_t  pass, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read1, ::StringW  read1Name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  read2, ::StringW  read2Name) ;

/// @brief Method CreateCloudsRenderer, addr 0x180607870, size 0xc0, virtual false, abstract: false, final false
inline ::Enviro::EnviroVolumetricCloudRenderer* CreateCloudsRenderer(::UnityEngine::Camera*  cam) ;

/// @brief Method GetCloudsRenderer, addr 0x180607930, size 0x140, virtual false, abstract: false, final false
inline ::Enviro::EnviroVolumetricCloudRenderer* GetCloudsRenderer(::UnityEngine::Camera*  cam) ;

static inline ::Enviro::EnviroURPRenderGraph* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x180607a70, size 0xd60, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

/// @brief Method SetMatrix, addr 0x1806087d0, size 0x5b0, virtual false, abstract: false, final false
inline void SetMatrix(::UnityEngine::Camera*  myCam) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blitThroughMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blitThroughMat() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_floatingPointOriginMod() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_floatingPointOriginMod() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_fogMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_fogMat() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_ScaleBias() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_ScaleBias() ;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>* const& __cordl_internal_get_volumetricCloudsRender() const;

constexpr ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*& __cordl_internal_get_volumetricCloudsRender() ;

constexpr void __cordl_internal_set_blitThroughMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_floatingPointOriginMod(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fogMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_ScaleBias(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_volumetricCloudsRender(::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  value) ;

/// @brief Method .ctor, addr 0x180608d80, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroURPRenderGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderGraph", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroURPRenderGraph(EnviroURPRenderGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroURPRenderGraph", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroURPRenderGraph(EnviroURPRenderGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18428};

/// @brief Field m_ScaleBias, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___m_ScaleBias;

/// @brief Field volumetricCloudsRender, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Enviro::EnviroVolumetricCloudRenderer*>*  ___volumetricCloudsRender;

/// @brief Field blitThroughMat, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blitThroughMat;

/// @brief Field fogMat, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___fogMat;

/// @brief Field floatingPointOriginMod, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___floatingPointOriginMod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroURPRenderGraph, ___m_ScaleBias) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph, ___volumetricCloudsRender) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph, ___blitThroughMat) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph, ___fogMat) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroURPRenderGraph, ___floatingPointOriginMod) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroURPRenderGraph) == 0x98, "Size mismatch!");

} // namespace end def Enviro
