#pragma once
// IWYU pragma private; include "GlobalNamespace/GrabGlassRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GrabGlassRendererFeature)
namespace GlobalNamespace {
class GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData;
}
namespace GlobalNamespace {
class GlobalGBuffersRenderPass_GrabGlassRendererFeature___c;
}
namespace GlobalNamespace {
class GrabGlassRendererFeature_GlobalGBuffersRenderPass;
}
namespace GlobalNamespace {
class GrabGlassRendererFeature_RendererListPass;
}
namespace GlobalNamespace {
class RendererListPass_GrabGlassRendererFeature_PassData;
}
namespace GlobalNamespace {
class RendererListPass_GrabGlassRendererFeature___c;
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
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData;
}
namespace GlobalNamespace {
class GlobalGBuffersRenderPass_GrabGlassRendererFeature___c;
}
namespace GlobalNamespace {
class GrabGlassRendererFeature;
}
namespace GlobalNamespace {
class GrabGlassRendererFeature_GlobalGBuffersRenderPass;
}
namespace GlobalNamespace {
class GrabGlassRendererFeature_RendererListPass;
}
namespace GlobalNamespace {
class RendererListPass_GrabGlassRendererFeature_PassData;
}
namespace GlobalNamespace {
class RendererListPass_GrabGlassRendererFeature___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData*);
MARK_REF_T(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c*);
MARK_REF_T(::GlobalNamespace::GrabGlassRendererFeature*);
MARK_REF_T(::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass*);
MARK_REF_T(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass*);
MARK_REF_T(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*);
MARK_REF_T(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData*, "", "GrabGlassRendererFeature/GlobalGBuffersRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c*, "", "GrabGlassRendererFeature/GlobalGBuffersRenderPass/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabGlassRendererFeature*, "", "GrabGlassRendererFeature");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass*, "", "GrabGlassRendererFeature/GlobalGBuffersRenderPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass*, "", "GrabGlassRendererFeature/RendererListPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*, "", "GrabGlassRendererFeature/RendererListPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c*, "", "GrabGlassRendererFeature/RendererListPass/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature/GlobalGBuffersRenderPass/PassData
class CORDL_TYPE GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData(GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData(GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature/GlobalGBuffersRenderPass/<>c
class CORDL_TYPE GlobalGBuffersRenderPass_GrabGlassRendererFeature___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__2_0;

static inline ::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__2_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__2_0(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c*  value) ;

static inline void setStaticF___9__2_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalGBuffersRenderPass_GrabGlassRendererFeature___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalGBuffersRenderPass_GrabGlassRendererFeature___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalGBuffersRenderPass_GrabGlassRendererFeature___c(GlobalGBuffersRenderPass_GrabGlassRendererFeature___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalGBuffersRenderPass_GrabGlassRendererFeature___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalGBuffersRenderPass_GrabGlassRendererFeature___c(GlobalGBuffersRenderPass_GrabGlassRendererFeature___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4776};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature/GlobalGBuffersRenderPass
class CORDL_TYPE GrabGlassRendererFeature_GlobalGBuffersRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature_PassData;

using __c = ::GlobalNamespace::GlobalGBuffersRenderPass_GrabGlassRendererFeature___c;

/// @brief Field m_PassName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PassName, put=__cordl_internal_set_m_PassName)) ::StringW  m_PassName;

static inline ::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass* New_ctor() ;

/// @brief Method RecordRenderGraph, addr 0x1803258e0, size 0x4b0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

constexpr ::StringW const& __cordl_internal_get_m_PassName() const;

constexpr ::StringW& __cordl_internal_get_m_PassName() ;

constexpr void __cordl_internal_set_m_PassName(::StringW  value) ;

/// @brief Method .ctor, addr 0x180325d90, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabGlassRendererFeature_GlobalGBuffersRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabGlassRendererFeature_GlobalGBuffersRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabGlassRendererFeature_GlobalGBuffersRenderPass(GrabGlassRendererFeature_GlobalGBuffersRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabGlassRendererFeature_GlobalGBuffersRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabGlassRendererFeature_GlobalGBuffersRenderPass(GrabGlassRendererFeature_GlobalGBuffersRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4777};

/// @brief Field m_PassName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___m_PassName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass, ___m_PassName) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature/RendererListPass/PassData
class CORDL_TYPE RendererListPass_GrabGlassRendererFeature_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field rendererListHandle, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_rendererListHandle, put=__cordl_internal_set_rendererListHandle)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  rendererListHandle;

static inline ::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHandle() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHandle() ;

constexpr void __cordl_internal_set_rendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendererListPass_GrabGlassRendererFeature_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendererListPass_GrabGlassRendererFeature_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RendererListPass_GrabGlassRendererFeature_PassData(RendererListPass_GrabGlassRendererFeature_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendererListPass_GrabGlassRendererFeature_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendererListPass_GrabGlassRendererFeature_PassData(RendererListPass_GrabGlassRendererFeature_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4778};

/// @brief Field rendererListHandle, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  ___rendererListHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData, ___rendererListHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature/RendererListPass/<>c
class CORDL_TYPE RendererListPass_GrabGlassRendererFeature___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__7_0;

static inline ::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__7_0, addr 0x180329970, size 0x70, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__7_0(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c*  value) ;

static inline void setStaticF___9__7_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendererListPass_GrabGlassRendererFeature___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendererListPass_GrabGlassRendererFeature___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RendererListPass_GrabGlassRendererFeature___c(RendererListPass_GrabGlassRendererFeature___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendererListPass_GrabGlassRendererFeature___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendererListPass_GrabGlassRendererFeature___c(RendererListPass_GrabGlassRendererFeature___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature/RendererListPass
class CORDL_TYPE GrabGlassRendererFeature_RendererListPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData;

using __c = ::GlobalNamespace::RendererListPass_GrabGlassRendererFeature___c;

/// @brief Field globalTextureID, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalTextureID, put=__cordl_internal_set_globalTextureID)) int32_t  globalTextureID;

/// @brief Field m_LayerMask, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LayerMask, put=__cordl_internal_set_m_LayerMask)) ::UnityEngine::LayerMask  m_LayerMask;

/// @brief Field m_ShaderTagIdList, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShaderTagIdList, put=__cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*  m_ShaderTagIdList;

/// @brief Method ExecutePass, addr 0x180327ae0, size 0x70, virtual false, abstract: false, final false
static inline void ExecutePass(::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method InitRendererLists, addr 0x180327b50, size 0x300, virtual false, abstract: false, final false
inline void InitRendererLists(::UnityEngine::Rendering::ContextContainer*  frameData, ::by_ref<::GlobalNamespace::RendererListPass_GrabGlassRendererFeature_PassData*>  passData, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

static inline ::GlobalNamespace::GrabGlassRendererFeature_RendererListPass* New_ctor(::UnityEngine::LayerMask  layerMask) ;

/// @brief Method RecordRenderGraph, addr 0x180327e50, size 0x480, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData) ;

constexpr int32_t const& __cordl_internal_get_globalTextureID() const;

constexpr int32_t& __cordl_internal_get_globalTextureID() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_LayerMask() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList() ;

constexpr void __cordl_internal_set_globalTextureID(int32_t  value) ;

constexpr void __cordl_internal_set_m_LayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*  value) ;

/// @brief Method .ctor, addr 0x1803282d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::LayerMask  layerMask) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabGlassRendererFeature_RendererListPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabGlassRendererFeature_RendererListPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabGlassRendererFeature_RendererListPass(GrabGlassRendererFeature_RendererListPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabGlassRendererFeature_RendererListPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabGlassRendererFeature_RendererListPass(GrabGlassRendererFeature_RendererListPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4780};

/// @brief Field m_LayerMask, offset: 0x5c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_LayerMask;

/// @brief Field globalTextureID, offset: 0x60, size: 0x4, def value: None
 int32_t  ___globalTextureID;

/// @brief Field m_ShaderTagIdList, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*  ___m_ShaderTagIdList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass, ___m_LayerMask) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass, ___globalTextureID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass, ___m_ShaderTagIdList) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: GrabGlassRendererFeature
class CORDL_TYPE GrabGlassRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
// Declarations
using GlobalGBuffersRenderPass = ::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass;

using RendererListPass = ::GlobalNamespace::GrabGlassRendererFeature_RendererListPass;

/// @brief Field drawGlassPass, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_drawGlassPass, put=__cordl_internal_set_drawGlassPass)) ::GlobalNamespace::GrabGlassRendererFeature_RendererListPass*  drawGlassPass;

/// @brief Field globalTextureName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_globalTextureName, put=setStaticF_globalTextureName)) ::StringW  globalTextureName;

/// @brief Field m_GlobalGbuffersRenderPass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GlobalGbuffersRenderPass, put=__cordl_internal_set_m_GlobalGbuffersRenderPass)) ::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass*  m_GlobalGbuffersRenderPass;

/// @brief Field m_LayerMask, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LayerMask, put=__cordl_internal_set_m_LayerMask)) ::UnityEngine::LayerMask  m_LayerMask;

/// @brief Method AddRenderPasses, addr 0x180325dd0, size 0x50, virtual true, abstract: false, final false
inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData) ;

/// @brief Method Create, addr 0x180325e20, size 0x100, virtual true, abstract: false, final false
inline void Create() ;

static inline ::GlobalNamespace::GrabGlassRendererFeature* New_ctor() ;

constexpr ::GlobalNamespace::GrabGlassRendererFeature_RendererListPass* const& __cordl_internal_get_drawGlassPass() const;

constexpr ::GlobalNamespace::GrabGlassRendererFeature_RendererListPass*& __cordl_internal_get_drawGlassPass() ;

constexpr ::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass* const& __cordl_internal_get_m_GlobalGbuffersRenderPass() const;

constexpr ::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass*& __cordl_internal_get_m_GlobalGbuffersRenderPass() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_LayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_LayerMask() ;

constexpr void __cordl_internal_set_drawGlassPass(::GlobalNamespace::GrabGlassRendererFeature_RendererListPass*  value) ;

constexpr void __cordl_internal_set_m_GlobalGbuffersRenderPass(::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass*  value) ;

constexpr void __cordl_internal_set_m_LayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x180324470, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_globalTextureName() ;

static inline void setStaticF_globalTextureName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabGlassRendererFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabGlassRendererFeature", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabGlassRendererFeature(GrabGlassRendererFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabGlassRendererFeature", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabGlassRendererFeature(GrabGlassRendererFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4781};

/// @brief Field m_GlobalGbuffersRenderPass, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::GrabGlassRendererFeature_GlobalGBuffersRenderPass*  ___m_GlobalGbuffersRenderPass;

/// @brief Field drawGlassPass, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GrabGlassRendererFeature_RendererListPass*  ___drawGlassPass;

/// @brief Field m_LayerMask, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_LayerMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature, ___m_GlobalGbuffersRenderPass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature, ___drawGlassPass) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GrabGlassRendererFeature, ___m_LayerMask) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GrabGlassRendererFeature) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
