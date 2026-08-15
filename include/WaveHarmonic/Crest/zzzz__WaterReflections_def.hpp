#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterReflections.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflectionSide_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterReflections)
namespace System {
template<typename T>
class Action_1;
}
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
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Skybox;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
class CopyDepthRenderPass_WaterReflections_CopyPassData;
}
namespace WaveHarmonic::Crest {
class CopyDepthRenderPass_WaterReflections___c;
}
namespace WaveHarmonic::Crest {
class QualitySettingsOverride;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer;
}
namespace WaveHarmonic::Crest {
struct WaterReflectionSide;
}
namespace WaveHarmonic::Crest {
class WaterReflections_CopyDepthRenderPass;
}
namespace WaveHarmonic::Crest {
class WaterReflections_DebugFields;
}
namespace WaveHarmonic::Crest {
class WaterReflections_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CopyDepthRenderPass_WaterReflections_CopyPassData;
}
namespace WaveHarmonic::Crest {
class CopyDepthRenderPass_WaterReflections___c;
}
namespace WaveHarmonic::Crest {
class WaterReflections;
}
namespace WaveHarmonic::Crest {
class WaterReflections_CopyDepthRenderPass;
}
namespace WaveHarmonic::Crest {
class WaterReflections_DebugFields;
}
namespace WaveHarmonic::Crest {
class WaterReflections_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*);
MARK_REF_T(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*);
MARK_REF_T(::WaveHarmonic::Crest::WaterReflections*);
MARK_REF_T(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*);
MARK_REF_T(::WaveHarmonic::Crest::WaterReflections_DebugFields*);
MARK_REF_T(::WaveHarmonic::Crest::WaterReflections_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*, "WaveHarmonic.Crest", "WaterReflections/CopyDepthRenderPass/CopyPassData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*, "WaveHarmonic.Crest", "WaterReflections/CopyDepthRenderPass/<>c");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterReflections*, "WaveHarmonic.Crest", "WaterReflections");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*, "WaveHarmonic.Crest", "WaterReflections/CopyDepthRenderPass");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterReflections_DebugFields*, "WaveHarmonic.Crest", "WaterReflections/DebugFields");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterReflections_ShaderIDs*, "WaveHarmonic.Crest", "WaterReflections/ShaderIDs");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterReflections/CopyDepthRenderPass/CopyPassData
class CORDL_TYPE CopyDepthRenderPass_WaterReflections_CopyPassData : public ::System::Object {
public:
// Declarations
/// @brief Field _Slice, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Slice, put=__cordl_internal_set__Slice)) int32_t  _Slice;

/// @brief Field _Source, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__Source, put=__cordl_internal_set__Source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _Source;

/// @brief Field _Target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__Target, put=__cordl_internal_set__Target)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  _Target;

static inline ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__Slice() const;

constexpr int32_t& __cordl_internal_get__Slice() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__Source() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__Source() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__Target() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__Target() ;

constexpr void __cordl_internal_set__Slice(int32_t  value) ;

constexpr void __cordl_internal_set__Source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

constexpr void __cordl_internal_set__Target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyDepthRenderPass_WaterReflections_CopyPassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthRenderPass_WaterReflections_CopyPassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyDepthRenderPass_WaterReflections_CopyPassData(CopyDepthRenderPass_WaterReflections_CopyPassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthRenderPass_WaterReflections_CopyPassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyDepthRenderPass_WaterReflections_CopyPassData(CopyDepthRenderPass_WaterReflections_CopyPassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16672};

/// @brief Field _Source, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____Source;

/// @brief Field _Target, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  ____Target;

/// @brief Field _Slice, offset: 0x30, size: 0x4, def value: None
 int32_t  ____Slice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData, ____Source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData, ____Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData, ____Slice) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterReflections/CopyDepthRenderPass/<>c
class CORDL_TYPE CopyDepthRenderPass_WaterReflections___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  __9__5_0;

static inline ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__5_0, addr 0x1825a3c30, size 0x1f0, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__5_0(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* getStaticF___9__5_0() ;

static inline void setStaticF___9(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c*  value) ;

static inline void setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyDepthRenderPass_WaterReflections___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthRenderPass_WaterReflections___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyDepthRenderPass_WaterReflections___c(CopyDepthRenderPass_WaterReflections___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyDepthRenderPass_WaterReflections___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyDepthRenderPass_WaterReflections___c(CopyDepthRenderPass_WaterReflections___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16673};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterReflections/CopyDepthRenderPass
class CORDL_TYPE WaterReflections_CopyDepthRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using CopyPassData = ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections_CopyPassData;

using __c = ::WaveHarmonic::Crest::CopyDepthRenderPass_WaterReflections___c;

/// @brief Field _Renderer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Renderer, put=__cordl_internal_set__Renderer)) ::WaveHarmonic::Crest::WaterReflections*  _Renderer;

/// @brief Field _Wrapper, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Wrapper, put=__cordl_internal_set__Wrapper)) ::UnityEngine::Rendering::RTHandle*  _Wrapper;

/// @brief Method Dispose, addr 0x18259f140, size 0x40, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass* New_ctor(::WaveHarmonic::Crest::WaterReflections*  renderer) ;

/// @brief Method RecordRenderGraph, addr 0x18259f180, size 0x400, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

constexpr ::WaveHarmonic::Crest::WaterReflections* const& __cordl_internal_get__Renderer() const;

constexpr ::WaveHarmonic::Crest::WaterReflections*& __cordl_internal_get__Renderer() ;

constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__Wrapper() const;

constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__Wrapper() ;

constexpr void __cordl_internal_set__Renderer(::WaveHarmonic::Crest::WaterReflections*  value) ;

constexpr void __cordl_internal_set__Wrapper(::UnityEngine::Rendering::RTHandle*  value) ;

/// @brief Method .ctor, addr 0x18259f580, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterReflections*  renderer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterReflections_CopyDepthRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections_CopyDepthRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterReflections_CopyDepthRenderPass(WaterReflections_CopyDepthRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections_CopyDepthRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterReflections_CopyDepthRenderPass(WaterReflections_CopyDepthRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16674};

/// @brief Field _Renderer, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterReflections*  ____Renderer;

/// @brief Field _Wrapper, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  ____Wrapper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass, ____Renderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass, ____Wrapper) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterReflections/DebugFields
class CORDL_TYPE WaterReflections_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _DisableRecursiveRendering, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableRecursiveRendering, put=__cordl_internal_set__DisableRecursiveRendering)) bool  _DisableRecursiveRendering;

/// @brief Field _ForceCompatibility, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceCompatibility, put=__cordl_internal_set__ForceCompatibility)) bool  _ForceCompatibility;

/// @brief Field _ShowHiddenObjects, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowHiddenObjects, put=__cordl_internal_set__ShowHiddenObjects)) bool  _ShowHiddenObjects;

static inline ::WaveHarmonic::Crest::WaterReflections_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__DisableRecursiveRendering() const;

constexpr bool& __cordl_internal_get__DisableRecursiveRendering() ;

constexpr bool const& __cordl_internal_get__ForceCompatibility() const;

constexpr bool& __cordl_internal_get__ForceCompatibility() ;

constexpr bool const& __cordl_internal_get__ShowHiddenObjects() const;

constexpr bool& __cordl_internal_get__ShowHiddenObjects() ;

constexpr void __cordl_internal_set__DisableRecursiveRendering(bool  value) ;

constexpr void __cordl_internal_set__ForceCompatibility(bool  value) ;

constexpr void __cordl_internal_set__ShowHiddenObjects(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterReflections_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterReflections_DebugFields(WaterReflections_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterReflections_DebugFields(WaterReflections_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16675};

/// @brief Field _ShowHiddenObjects, offset: 0x10, size: 0x1, def value: None
 bool  ____ShowHiddenObjects;

/// @brief Field _DisableRecursiveRendering, offset: 0x11, size: 0x1, def value: None
 bool  ____DisableRecursiveRendering;

/// @brief Field _ForceCompatibility, offset: 0x12, size: 0x1, def value: None
 bool  ____ForceCompatibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections_DebugFields, ____ShowHiddenObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections_DebugFields, ____DisableRecursiveRendering) == 0x11, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections_DebugFields, ____ForceCompatibility) == 0x12, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterReflections_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterReflections/ShaderIDs
class CORDL_TYPE WaterReflections_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_Crest_ReflectionOverscan, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Crest_ReflectionOverscan, put=setStaticF_s_Crest_ReflectionOverscan)) int32_t  s_Crest_ReflectionOverscan;

/// @brief Field s_PlanarReflectionsApplySmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_PlanarReflectionsApplySmoothness, put=setStaticF_s_PlanarReflectionsApplySmoothness)) int32_t  s_PlanarReflectionsApplySmoothness;

/// @brief Field s_ReflectionColorTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ReflectionColorTexture, put=setStaticF_s_ReflectionColorTexture)) int32_t  s_ReflectionColorTexture;

/// @brief Field s_ReflectionDepthTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ReflectionDepthTexture, put=setStaticF_s_ReflectionDepthTexture)) int32_t  s_ReflectionDepthTexture;

/// @brief Field s_ReflectionMatrixIVP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ReflectionMatrixIVP, put=setStaticF_s_ReflectionMatrixIVP)) int32_t  s_ReflectionMatrixIVP;

/// @brief Field s_ReflectionMatrixV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ReflectionMatrixV, put=setStaticF_s_ReflectionMatrixV)) int32_t  s_ReflectionMatrixV;

/// @brief Field s_ReflectionPositionNormal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ReflectionPositionNormal, put=setStaticF_s_ReflectionPositionNormal)) int32_t  s_ReflectionPositionNormal;

static inline int32_t getStaticF_s_Crest_ReflectionOverscan() ;

static inline int32_t getStaticF_s_PlanarReflectionsApplySmoothness() ;

static inline int32_t getStaticF_s_ReflectionColorTexture() ;

static inline int32_t getStaticF_s_ReflectionDepthTexture() ;

static inline int32_t getStaticF_s_ReflectionMatrixIVP() ;

static inline int32_t getStaticF_s_ReflectionMatrixV() ;

static inline int32_t getStaticF_s_ReflectionPositionNormal() ;

static inline void setStaticF_s_Crest_ReflectionOverscan(int32_t  value) ;

static inline void setStaticF_s_PlanarReflectionsApplySmoothness(int32_t  value) ;

static inline void setStaticF_s_ReflectionColorTexture(int32_t  value) ;

static inline void setStaticF_s_ReflectionDepthTexture(int32_t  value) ;

static inline void setStaticF_s_ReflectionMatrixIVP(int32_t  value) ;

static inline void setStaticF_s_ReflectionMatrixV(int32_t  value) ;

static inline void setStaticF_s_ReflectionPositionNormal(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterReflections_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterReflections_ShaderIDs(WaterReflections_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterReflections_ShaderIDs(WaterReflections_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WaterReflections_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.LayerMask, UnityEngine.Matrix4x4, UnityEngine.Vector4, WaveHarmonic.Crest.Internal.Versioned, WaveHarmonic.Crest.WaterReflectionSide
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterReflections
class CORDL_TYPE WaterReflections : public ::WaveHarmonic::Crest::Internal::Versioned {
public:
// Declarations
using CopyDepthRenderPass = ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass;

using DebugFields = ::WaveHarmonic::Crest::WaterReflections_DebugFields;

using ShaderIDs = ::WaveHarmonic::Crest::WaterReflections_ShaderIDs;

 __declspec(property(get=get_AllowMSAA, put=set_AllowMSAA)) bool  AllowMSAA;

 __declspec(property(get=get_ClipPlaneOffset, put=set_ClipPlaneOffset)) float_t  ClipPlaneOffset;

 __declspec(property(get=get_ColorTexture)) ::UnityW<::UnityEngine::RenderTexture>  ColorTexture;

 __declspec(property(get=get_DepthTexture)) ::UnityW<::UnityEngine::RenderTexture>  DepthTexture;

 __declspec(property(get=get_DisableOcclusionCulling, put=set_DisableOcclusionCulling)) bool  DisableOcclusionCulling;

 __declspec(property(get=get_DisablePixelLights, put=set_DisablePixelLights)) bool  DisablePixelLights;

 __declspec(property(get=get_DisableShadows, put=set_DisableShadows)) bool  DisableShadows;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_FarClipPlane, put=set_FarClipPlane)) float_t  FarClipPlane;

 __declspec(property(get=get_HDR, put=set_HDR)) bool  HDR;

 __declspec(property(get=get_Layers, put=set_Layers)) ::UnityEngine::LayerMask  Layers;

 __declspec(property(get=get_Mode, put=set_Mode)) ::WaveHarmonic::Crest::WaterReflectionSide  Mode;

 __declspec(property(get=get_NonObliqueNearSurface, put=set_NonObliqueNearSurface)) bool  NonObliqueNearSurface;

 __declspec(property(get=get_NonObliqueNearSurfaceThreshold, put=set_NonObliqueNearSurfaceThreshold)) float_t  NonObliqueNearSurfaceThreshold;

 __declspec(property(get=get_Overscan, put=set_Overscan)) float_t  Overscan;

 __declspec(property(get=get_QualitySettingsOverride, put=set_QualitySettingsOverride)) ::WaveHarmonic::Crest::QualitySettingsOverride*  QualitySettingsOverride;

 __declspec(property(get=get_ReflectionCamera)) ::UnityW<::UnityEngine::Camera>  ReflectionCamera;

 __declspec(property(get=get_ReflectionSide, put=set_ReflectionSide)) ::WaveHarmonic::Crest::WaterReflectionSide  ReflectionSide;

 __declspec(property(get=get_RefreshPerFrames)) int32_t  RefreshPerFrames;

 __declspec(property(get=get_RenderOnlySingleCamera, put=set_RenderOnlySingleCamera)) bool  RenderOnlySingleCamera;

 __declspec(property(get=get_RendererIndex, put=set_RendererIndex)) int32_t  RendererIndex;

 __declspec(property(get=get_RequireTemporaryTargets)) bool  RequireTemporaryTargets;

 __declspec(property(get=get_Resolution, put=set_Resolution)) int32_t  Resolution;

 __declspec(property(get=get_SkipAbove)) bool  SkipAbove;

 __declspec(property(get=get_SkipBelow)) bool  SkipBelow;

 __declspec(property(get=get_Sky, put=set_Sky)) bool  Sky;

 __declspec(property(get=get_Stencil, put=set_Stencil)) bool  Stencil;

 __declspec(property(get=get_SupportsRecursiveRendering)) bool  SupportsRecursiveRendering;

 __declspec(property(get=get_UseObliqueMatrix, put=set_UseObliqueMatrix)) bool  UseObliqueMatrix;

/// @brief Field _ActiveSlice, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActiveSlice, put=__cordl_internal_set__ActiveSlice)) int32_t  _ActiveSlice;

/// @brief Field _AllowMSAA, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowMSAA, put=__cordl_internal_set__AllowMSAA)) bool  _AllowMSAA;

/// @brief Field _ApplySmoothness, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplySmoothness, put=__cordl_internal_set__ApplySmoothness)) bool  _ApplySmoothness;

/// @brief Field _CameraDepthTexture, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraDepthTexture, put=__cordl_internal_set__CameraDepthTexture)) ::UnityW<::UnityEngine::Texture>  _CameraDepthTexture;

/// @brief Field _CameraReflections, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraReflections, put=__cordl_internal_set__CameraReflections)) ::UnityW<::UnityEngine::Camera>  _CameraReflections;

/// @brief Field _CameraReflectionsSkybox, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraReflectionsSkybox, put=__cordl_internal_set__CameraReflectionsSkybox)) ::UnityW<::UnityEngine::Skybox>  _CameraReflectionsSkybox;

/// @brief Field _CameraViewpoint, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraViewpoint, put=__cordl_internal_set__CameraViewpoint)) ::UnityW<::UnityEngine::Camera>  _CameraViewpoint;

/// @brief Field _CameraViewpointSkybox, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraViewpointSkybox, put=__cordl_internal_set__CameraViewpointSkybox)) ::UnityW<::UnityEngine::Skybox>  _CameraViewpointSkybox;

/// @brief Field _ClipPlaneOffset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__ClipPlaneOffset, put=__cordl_internal_set__ClipPlaneOffset)) float_t  _ClipPlaneOffset;

/// @brief Field _ColorTexture, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorTexture, put=__cordl_internal_set__ColorTexture)) ::UnityW<::UnityEngine::RenderTexture>  _ColorTexture;

/// @brief Field _CopyTargetsRenderPass, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyTargetsRenderPass, put=__cordl_internal_set__CopyTargetsRenderPass)) ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*  _CopyTargetsRenderPass;

/// @brief Field _CullDistances, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CullDistances, put=__cordl_internal_set__CullDistances)) ::ArrayW<float_t>  _CullDistances;

/// @brief Field _Debug, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::WaterReflections_DebugFields*  _Debug;

/// @brief Field _DepthTexture, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthTexture, put=__cordl_internal_set__DepthTexture)) ::UnityW<::UnityEngine::RenderTexture>  _DepthTexture;

/// @brief Field _DisableOcclusionCulling, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableOcclusionCulling, put=__cordl_internal_set__DisableOcclusionCulling)) bool  _DisableOcclusionCulling;

/// @brief Field _DisablePixelLights, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisablePixelLights, put=__cordl_internal_set__DisablePixelLights)) bool  _DisablePixelLights;

/// @brief Field _DisableShadows, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableShadows, put=__cordl_internal_set__DisableShadows)) bool  _DisableShadows;

/// @brief Field _Enabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled, put=__cordl_internal_set__Enabled)) bool  _Enabled;

/// @brief Field _FarClipPlane, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FarClipPlane, put=__cordl_internal_set__FarClipPlane)) float_t  _FarClipPlane;

/// @brief Field _FrameRefreshOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__FrameRefreshOffset, put=__cordl_internal_set__FrameRefreshOffset)) int32_t  _FrameRefreshOffset;

/// @brief Field _HDR, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get__HDR, put=__cordl_internal_set__HDR)) bool  _HDR;

/// @brief Field _LastRefreshOnFrame, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastRefreshOnFrame, put=__cordl_internal_set__LastRefreshOnFrame)) int64_t  _LastRefreshOnFrame;

/// @brief Field _Layers, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layers, put=__cordl_internal_set__Layers)) ::UnityEngine::LayerMask  _Layers;

/// @brief Field _Mode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Mode, put=__cordl_internal_set__Mode)) ::WaveHarmonic::Crest::WaterReflectionSide  _Mode;

/// @brief Field _NonObliqueNearSurface, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__NonObliqueNearSurface, put=__cordl_internal_set__NonObliqueNearSurface)) bool  _NonObliqueNearSurface;

/// @brief Field _NonObliqueNearSurfaceThreshold, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__NonObliqueNearSurfaceThreshold, put=__cordl_internal_set__NonObliqueNearSurfaceThreshold)) float_t  _NonObliqueNearSurfaceThreshold;

/// @brief Field <OnCameraAdded>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OnCameraAdded_k__BackingField, put=setStaticF__OnCameraAdded_k__BackingField)) ::System::Action_1<::UnityW<::UnityEngine::Camera>>*  _OnCameraAdded_k__BackingField;

/// @brief Field _Overscan, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Overscan, put=__cordl_internal_set__Overscan)) float_t  _Overscan;

/// @brief Field _QualitySettingsOverride, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__QualitySettingsOverride, put=__cordl_internal_set__QualitySettingsOverride)) ::WaveHarmonic::Crest::QualitySettingsOverride*  _QualitySettingsOverride;

/// @brief Field _ReflectionMatrixIVP, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReflectionMatrixIVP, put=__cordl_internal_set__ReflectionMatrixIVP)) ::ArrayW<::UnityEngine::Matrix4x4>  _ReflectionMatrixIVP;

/// @brief Field _ReflectionMatrixV, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReflectionMatrixV, put=__cordl_internal_set__ReflectionMatrixV)) ::ArrayW<::UnityEngine::Matrix4x4>  _ReflectionMatrixV;

/// @brief Field _ReflectionPositionNormal, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReflectionPositionNormal, put=__cordl_internal_set__ReflectionPositionNormal)) ::ArrayW<::UnityEngine::Vector4>  _ReflectionPositionNormal;

/// @brief Field _RefreshPerFrames, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__RefreshPerFrames, put=__cordl_internal_set__RefreshPerFrames)) int32_t  _RefreshPerFrames;

/// @brief Field _RenderOnlySingleCamera, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__RenderOnlySingleCamera, put=__cordl_internal_set__RenderOnlySingleCamera)) bool  _RenderOnlySingleCamera;

/// @brief Field _RendererIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__RendererIndex, put=__cordl_internal_set__RendererIndex)) int32_t  _RendererIndex;

/// @brief Field _Resolution, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution, put=__cordl_internal_set__Resolution)) int32_t  _Resolution;

/// @brief Field _Sky, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__Sky, put=__cordl_internal_set__Sky)) bool  _Sky;

/// @brief Field _Stencil, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__Stencil, put=__cordl_internal_set__Stencil)) bool  _Stencil;

/// @brief Field _UnderWater, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnderWater, put=__cordl_internal_set__UnderWater)) ::WaveHarmonic::Crest::UnderwaterRenderer*  _UnderWater;

/// @brief Field _UpdateCamera, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__UpdateCamera, put=__cordl_internal_set__UpdateCamera)) bool  _UpdateCamera;

/// @brief Field _UseObliqueMatrix, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseObliqueMatrix, put=__cordl_internal_set__UseObliqueMatrix)) bool  _UseObliqueMatrix;

/// @brief Field _Water, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Method CalculateReflectionMatrix, addr 0x182599510, size 0x120, virtual false, abstract: false, final false
static inline void CalculateReflectionMatrix(::by_ref<::UnityEngine::Matrix4x4>  reflectionMat, ::UnityEngine::Vector4  plane) ;

/// @brief Method CameraSpacePlane, addr 0x182599630, size 0x330, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 CameraSpacePlane(::UnityEngine::Camera*  cam, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal, float_t  sideSign) ;

/// @brief Method CaptureTargetDepth, addr 0x182599960, size 0xb0, virtual false, abstract: false, final false
inline void CaptureTargetDepth(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method CheckSurfaceMaterial, addr 0x182599a10, size 0x60, virtual false, abstract: false, final false
inline void CheckSurfaceMaterial(::UnityEngine::Material*  material) ;

/// @brief Method ComputeHorizonPositionAndNormal, addr 0x182599a70, size 0x7d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 ComputeHorizonPositionAndNormal(::UnityEngine::Camera*  camera, float_t  positionY, float_t  offset, bool  flipped) ;

/// @brief Method CopyTargets, addr 0x18259a240, size 0x190, virtual false, abstract: false, final false
inline void CopyTargets(::UnityEngine::Texture*  color, ::UnityEngine::Texture*  depth, int32_t  slice) ;

/// @brief Method CreateWaterObjects, addr 0x18259a3d0, size 0x570, virtual false, abstract: false, final false
inline void CreateWaterObjects(::UnityEngine::Camera*  currentCamera) ;

/// @brief Method ForceDistanceCulling, addr 0x18259a940, size 0xa0, virtual false, abstract: false, final false
inline void ForceDistanceCulling(float_t  farClipPlane) ;

/// @brief Method LateUpdate, addr 0x18259ad60, size 0x190, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdate, addr 0x18259a9e0, size 0x380, virtual false, abstract: false, final false
inline void LateUpdate(::UnityEngine::Rendering::ScriptableRenderContext  context) ;

static inline ::WaveHarmonic::Crest::WaterReflections* New_ctor() ;

/// @brief Method OnBeginCameraRendering, addr 0x18259aef0, size 0x100, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnDestroy, addr 0x18259aff0, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18259b040, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18259b0d0, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEndCameraRendering, addr 0x18259b150, size 0x30, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndReflectionCameraRendering, addr 0x18259b180, size 0x60, virtual false, abstract: false, final false
inline void OnEndReflectionCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method RecreateDepth, addr 0x18259b1e0, size 0x270, virtual false, abstract: false, final false
inline void RecreateDepth(::UnityEngine::Texture*  depth) ;

/// @brief Method Render, addr 0x18259c060, size 0x5b0, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Rendering::ScriptableRenderContext  context) ;

/// @brief Method RenderCamera, addr 0x18259b450, size 0xc10, virtual false, abstract: false, final false
inline void RenderCamera(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  planeNormal, bool  nonObliqueNearSurface, int32_t  slice) ;

/// @brief Method SetDisableShadows, addr 0x18259c610, size 0x10, virtual false, abstract: false, final false
inline void SetDisableShadows(bool  previous, bool  current) ;

/// @brief Method SetEnabled, addr 0x18259c620, size 0x140, virtual false, abstract: false, final false
inline void SetEnabled(bool  previous, bool  current) ;

/// @brief Method SetReflectionSide, addr 0x18259c760, size 0x10, virtual false, abstract: false, final false
inline void SetReflectionSide(::WaveHarmonic::Crest::WaterReflectionSide  previous, ::WaveHarmonic::Crest::WaterReflectionSide  current) ;

/// @brief Method SetRendererIndex, addr 0x18259c760, size 0x10, virtual false, abstract: false, final false
inline void SetRendererIndex(int32_t  previous, int32_t  current) ;

/// @brief Method ShouldRender, addr 0x18259c770, size 0xc0, virtual false, abstract: false, final false
inline bool ShouldRender(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateCameraModes, addr 0x18259c830, size 0x410, virtual false, abstract: false, final false
inline void UpdateCameraModes() ;

constexpr int32_t const& __cordl_internal_get__ActiveSlice() const;

constexpr int32_t& __cordl_internal_get__ActiveSlice() ;

constexpr bool const& __cordl_internal_get__AllowMSAA() const;

constexpr bool& __cordl_internal_get__AllowMSAA() ;

constexpr bool const& __cordl_internal_get__ApplySmoothness() const;

constexpr bool& __cordl_internal_get__ApplySmoothness() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__CameraDepthTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__CameraDepthTexture() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__CameraReflections() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__CameraReflections() ;

constexpr ::UnityW<::UnityEngine::Skybox> const& __cordl_internal_get__CameraReflectionsSkybox() const;

constexpr ::UnityW<::UnityEngine::Skybox>& __cordl_internal_get__CameraReflectionsSkybox() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__CameraViewpoint() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__CameraViewpoint() ;

constexpr ::UnityW<::UnityEngine::Skybox> const& __cordl_internal_get__CameraViewpointSkybox() const;

constexpr ::UnityW<::UnityEngine::Skybox>& __cordl_internal_get__CameraViewpointSkybox() ;

constexpr float_t const& __cordl_internal_get__ClipPlaneOffset() const;

constexpr float_t& __cordl_internal_get__ClipPlaneOffset() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__ColorTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__ColorTexture() ;

constexpr ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass* const& __cordl_internal_get__CopyTargetsRenderPass() const;

constexpr ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*& __cordl_internal_get__CopyTargetsRenderPass() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__CullDistances() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__CullDistances() ;

constexpr ::WaveHarmonic::Crest::WaterReflections_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::WaterReflections_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__DepthTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__DepthTexture() ;

constexpr bool const& __cordl_internal_get__DisableOcclusionCulling() const;

constexpr bool& __cordl_internal_get__DisableOcclusionCulling() ;

constexpr bool const& __cordl_internal_get__DisablePixelLights() const;

constexpr bool& __cordl_internal_get__DisablePixelLights() ;

constexpr bool const& __cordl_internal_get__DisableShadows() const;

constexpr bool& __cordl_internal_get__DisableShadows() ;

constexpr bool const& __cordl_internal_get__Enabled() const;

constexpr bool& __cordl_internal_get__Enabled() ;

constexpr float_t const& __cordl_internal_get__FarClipPlane() const;

constexpr float_t& __cordl_internal_get__FarClipPlane() ;

constexpr int32_t const& __cordl_internal_get__FrameRefreshOffset() const;

constexpr int32_t& __cordl_internal_get__FrameRefreshOffset() ;

constexpr bool const& __cordl_internal_get__HDR() const;

constexpr bool& __cordl_internal_get__HDR() ;

constexpr int64_t const& __cordl_internal_get__LastRefreshOnFrame() const;

constexpr int64_t& __cordl_internal_get__LastRefreshOnFrame() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__Layers() ;

constexpr ::WaveHarmonic::Crest::WaterReflectionSide const& __cordl_internal_get__Mode() const;

constexpr ::WaveHarmonic::Crest::WaterReflectionSide& __cordl_internal_get__Mode() ;

constexpr bool const& __cordl_internal_get__NonObliqueNearSurface() const;

constexpr bool& __cordl_internal_get__NonObliqueNearSurface() ;

constexpr float_t const& __cordl_internal_get__NonObliqueNearSurfaceThreshold() const;

constexpr float_t& __cordl_internal_get__NonObliqueNearSurfaceThreshold() ;

constexpr float_t const& __cordl_internal_get__Overscan() const;

constexpr float_t& __cordl_internal_get__Overscan() ;

constexpr ::WaveHarmonic::Crest::QualitySettingsOverride* const& __cordl_internal_get__QualitySettingsOverride() const;

constexpr ::WaveHarmonic::Crest::QualitySettingsOverride*& __cordl_internal_get__QualitySettingsOverride() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__ReflectionMatrixIVP() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__ReflectionMatrixIVP() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__ReflectionMatrixV() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__ReflectionMatrixV() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__ReflectionPositionNormal() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__ReflectionPositionNormal() ;

constexpr int32_t const& __cordl_internal_get__RefreshPerFrames() const;

constexpr int32_t& __cordl_internal_get__RefreshPerFrames() ;

constexpr bool const& __cordl_internal_get__RenderOnlySingleCamera() const;

constexpr bool& __cordl_internal_get__RenderOnlySingleCamera() ;

constexpr int32_t const& __cordl_internal_get__RendererIndex() const;

constexpr int32_t& __cordl_internal_get__RendererIndex() ;

constexpr int32_t const& __cordl_internal_get__Resolution() const;

constexpr int32_t& __cordl_internal_get__Resolution() ;

constexpr bool const& __cordl_internal_get__Sky() const;

constexpr bool& __cordl_internal_get__Sky() ;

constexpr bool const& __cordl_internal_get__Stencil() const;

constexpr bool& __cordl_internal_get__Stencil() ;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer* const& __cordl_internal_get__UnderWater() const;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer*& __cordl_internal_get__UnderWater() ;

constexpr bool const& __cordl_internal_get__UpdateCamera() const;

constexpr bool& __cordl_internal_get__UpdateCamera() ;

constexpr bool const& __cordl_internal_get__UseObliqueMatrix() const;

constexpr bool& __cordl_internal_get__UseObliqueMatrix() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__ActiveSlice(int32_t  value) ;

constexpr void __cordl_internal_set__AllowMSAA(bool  value) ;

constexpr void __cordl_internal_set__ApplySmoothness(bool  value) ;

constexpr void __cordl_internal_set__CameraDepthTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__CameraReflections(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__CameraReflectionsSkybox(::UnityW<::UnityEngine::Skybox>  value) ;

constexpr void __cordl_internal_set__CameraViewpoint(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__CameraViewpointSkybox(::UnityW<::UnityEngine::Skybox>  value) ;

constexpr void __cordl_internal_set__ClipPlaneOffset(float_t  value) ;

constexpr void __cordl_internal_set__ColorTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__CopyTargetsRenderPass(::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*  value) ;

constexpr void __cordl_internal_set__CullDistances(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::WaterReflections_DebugFields*  value) ;

constexpr void __cordl_internal_set__DepthTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__DisableOcclusionCulling(bool  value) ;

constexpr void __cordl_internal_set__DisablePixelLights(bool  value) ;

constexpr void __cordl_internal_set__DisableShadows(bool  value) ;

constexpr void __cordl_internal_set__Enabled(bool  value) ;

constexpr void __cordl_internal_set__FarClipPlane(float_t  value) ;

constexpr void __cordl_internal_set__FrameRefreshOffset(int32_t  value) ;

constexpr void __cordl_internal_set__HDR(bool  value) ;

constexpr void __cordl_internal_set__LastRefreshOnFrame(int64_t  value) ;

constexpr void __cordl_internal_set__Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__Mode(::WaveHarmonic::Crest::WaterReflectionSide  value) ;

constexpr void __cordl_internal_set__NonObliqueNearSurface(bool  value) ;

constexpr void __cordl_internal_set__NonObliqueNearSurfaceThreshold(float_t  value) ;

constexpr void __cordl_internal_set__Overscan(float_t  value) ;

constexpr void __cordl_internal_set__QualitySettingsOverride(::WaveHarmonic::Crest::QualitySettingsOverride*  value) ;

constexpr void __cordl_internal_set__ReflectionMatrixIVP(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__ReflectionMatrixV(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__ReflectionPositionNormal(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__RefreshPerFrames(int32_t  value) ;

constexpr void __cordl_internal_set__RenderOnlySingleCamera(bool  value) ;

constexpr void __cordl_internal_set__RendererIndex(int32_t  value) ;

constexpr void __cordl_internal_set__Resolution(int32_t  value) ;

constexpr void __cordl_internal_set__Sky(bool  value) ;

constexpr void __cordl_internal_set__Stencil(bool  value) ;

constexpr void __cordl_internal_set__UnderWater(::WaveHarmonic::Crest::UnderwaterRenderer*  value) ;

constexpr void __cordl_internal_set__UpdateCamera(bool  value) ;

constexpr void __cordl_internal_set__UseObliqueMatrix(bool  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x18259cc40, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* getStaticF__OnCameraAdded_k__BackingField() ;

/// @brief Method get_AllowMSAA, addr 0x1813fdad0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowMSAA() ;

/// @brief Method get_ClipPlaneOffset, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_ClipPlaneOffset() ;

/// @brief Method get_ColorTexture, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_ColorTexture() ;

/// @brief Method get_DepthTexture, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_DepthTexture() ;

/// @brief Method get_DisableOcclusionCulling, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableOcclusionCulling() ;

/// @brief Method get_DisablePixelLights, addr 0x1803e0b20, size 0x10, virtual false, abstract: false, final false
inline bool get_DisablePixelLights() ;

/// @brief Method get_DisableShadows, addr 0x1814f2dc0, size 0x10, virtual false, abstract: false, final false
inline bool get_DisableShadows() ;

/// @brief Method get_Enabled, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_FarClipPlane, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_FarClipPlane() ;

/// @brief Method get_HDR, addr 0x180489af0, size 0x10, virtual false, abstract: false, final false
inline bool get_HDR() ;

/// @brief Method get_Layers, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_Layers() ;

/// @brief Method get_Mode, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterReflectionSide get_Mode() ;

/// @brief Method get_NonObliqueNearSurface, addr 0x1802e09e0, size 0x10, virtual false, abstract: false, final false
inline bool get_NonObliqueNearSurface() ;

/// @brief Method get_NonObliqueNearSurfaceThreshold, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NonObliqueNearSurfaceThreshold() ;

/// @brief Method get_OnCameraAdded, addr 0x18259cda0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<::UnityW<::UnityEngine::Camera>>* get_OnCameraAdded() ;

/// @brief Method get_Overscan, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Overscan() ;

/// @brief Method get_QualitySettingsOverride, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::QualitySettingsOverride* get_QualitySettingsOverride() ;

/// @brief Method get_ReflectionCamera, addr 0x1803b2f10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_ReflectionCamera() ;

/// @brief Method get_ReflectionSide, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterReflectionSide get_ReflectionSide() ;

/// @brief Method get_RefreshPerFrames, addr 0x18259cdc0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_RefreshPerFrames() ;

/// @brief Method get_RenderOnlySingleCamera, addr 0x182152290, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderOnlySingleCamera() ;

/// @brief Method get_RendererIndex, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_RendererIndex() ;

/// @brief Method get_RequireTemporaryTargets, addr 0x18259cdd0, size 0x20, virtual false, abstract: false, final false
inline bool get_RequireTemporaryTargets() ;

/// @brief Method get_Resolution, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Resolution() ;

/// @brief Method get_SkipAbove, addr 0x18259cdf0, size 0x40, virtual false, abstract: false, final false
inline bool get_SkipAbove() ;

/// @brief Method get_SkipBelow, addr 0x18259ce30, size 0x30, virtual false, abstract: false, final false
inline bool get_SkipBelow() ;

/// @brief Method get_Sky, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_Sky() ;

/// @brief Method get_Stencil, addr 0x1803023c0, size 0x10, virtual false, abstract: false, final false
inline bool get_Stencil() ;

/// @brief Method get_SupportsRecursiveRendering, addr 0x18259ce60, size 0x40, virtual false, abstract: false, final false
inline bool get_SupportsRecursiveRendering() ;

/// @brief Method get_UseObliqueMatrix, addr 0x1802e09d0, size 0x10, virtual false, abstract: false, final false
inline bool get_UseObliqueMatrix() ;

static inline void setStaticF__OnCameraAdded_k__BackingField(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

/// @brief Method set_AllowMSAA, addr 0x1813fdbe0, size 0x10, virtual false, abstract: false, final false
inline void set_AllowMSAA(bool  value) ;

/// @brief Method set_ClipPlaneOffset, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_ClipPlaneOffset(float_t  value) ;

/// @brief Method set_DisableOcclusionCulling, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_DisableOcclusionCulling(bool  value) ;

/// @brief Method set_DisablePixelLights, addr 0x18259cea0, size 0x10, virtual false, abstract: false, final false
inline void set_DisablePixelLights(bool  value) ;

/// @brief Method set_DisableShadows, addr 0x18259ceb0, size 0x20, virtual false, abstract: false, final false
inline void set_DisableShadows(bool  value) ;

/// @brief Method set_Enabled, addr 0x18259ced0, size 0x150, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_FarClipPlane, addr 0x18046fb60, size 0x10, virtual false, abstract: false, final false
inline void set_FarClipPlane(float_t  value) ;

/// @brief Method set_HDR, addr 0x18259d020, size 0x10, virtual false, abstract: false, final false
inline void set_HDR(bool  value) ;

/// @brief Method set_Layers, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_Layers(::UnityEngine::LayerMask  value) ;

/// @brief Method set_Mode, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_Mode(::WaveHarmonic::Crest::WaterReflectionSide  value) ;

/// @brief Method set_NonObliqueNearSurface, addr 0x18051e960, size 0x10, virtual false, abstract: false, final false
inline void set_NonObliqueNearSurface(bool  value) ;

/// @brief Method set_NonObliqueNearSurfaceThreshold, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_NonObliqueNearSurfaceThreshold(float_t  value) ;

/// @brief Method set_OnCameraAdded, addr 0x18259d030, size 0x30, virtual false, abstract: false, final false
static inline void set_OnCameraAdded(::System::Action_1<::UnityW<::UnityEngine::Camera>>*  value) ;

/// @brief Method set_Overscan, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_Overscan(float_t  value) ;

/// @brief Method set_QualitySettingsOverride, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_QualitySettingsOverride(::WaveHarmonic::Crest::QualitySettingsOverride*  value) ;

/// @brief Method set_ReflectionSide, addr 0x18259d060, size 0x20, virtual false, abstract: false, final false
inline void set_ReflectionSide(::WaveHarmonic::Crest::WaterReflectionSide  value) ;

/// @brief Method set_RenderOnlySingleCamera, addr 0x1821522c0, size 0x10, virtual false, abstract: false, final false
inline void set_RenderOnlySingleCamera(bool  value) ;

/// @brief Method set_RendererIndex, addr 0x18259d080, size 0x20, virtual false, abstract: false, final false
inline void set_RendererIndex(int32_t  value) ;

/// @brief Method set_Resolution, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_Resolution(int32_t  value) ;

/// @brief Method set_Sky, addr 0x180c29b80, size 0x2090, virtual false, abstract: false, final false
inline void set_Sky(bool  value) ;

/// @brief Method set_Stencil, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_Stencil(bool  value) ;

/// @brief Method set_UseObliqueMatrix, addr 0x18051e980, size 0x10, virtual false, abstract: false, final false
inline void set_UseObliqueMatrix(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterReflections() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterReflections(WaterReflections && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterReflections", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterReflections(WaterReflections const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16677};

/// @brief Field _CopyTargetsRenderPass, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterReflections_CopyDepthRenderPass*  ____CopyTargetsRenderPass;

/// @brief Field _Enabled, offset: 0x20, size: 0x1, def value: None
 bool  ____Enabled;

/// @brief Field _Mode, offset: 0x24, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterReflectionSide  ____Mode;

/// @brief Field _Layers, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____Layers;

/// @brief Field _Resolution, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____Resolution;

/// @brief Field _Overscan, offset: 0x30, size: 0x4, def value: None
 float_t  ____Overscan;

/// @brief Field _Sky, offset: 0x34, size: 0x1, def value: None
 bool  ____Sky;

/// @brief Field _DisablePixelLights, offset: 0x35, size: 0x1, def value: None
 bool  ____DisablePixelLights;

/// @brief Field _DisableShadows, offset: 0x36, size: 0x1, def value: None
 bool  ____DisableShadows;

/// @brief Field _HDR, offset: 0x37, size: 0x1, def value: None
 bool  ____HDR;

/// @brief Field _Stencil, offset: 0x38, size: 0x1, def value: None
 bool  ____Stencil;

/// @brief Field _QualitySettingsOverride, offset: 0x40, size: 0x8, def value: None
 ::WaveHarmonic::Crest::QualitySettingsOverride*  ____QualitySettingsOverride;

/// @brief Field _ClipPlaneOffset, offset: 0x48, size: 0x4, def value: None
 float_t  ____ClipPlaneOffset;

/// @brief Field _FarClipPlane, offset: 0x4c, size: 0x4, def value: None
 float_t  ____FarClipPlane;

/// @brief Field _DisableOcclusionCulling, offset: 0x50, size: 0x1, def value: None
 bool  ____DisableOcclusionCulling;

/// @brief Field _RefreshPerFrames, offset: 0x54, size: 0x4, def value: None
 int32_t  ____RefreshPerFrames;

/// @brief Field _FrameRefreshOffset, offset: 0x58, size: 0x4, def value: None
 int32_t  ____FrameRefreshOffset;

/// @brief Field _UseObliqueMatrix, offset: 0x5c, size: 0x1, def value: None
 bool  ____UseObliqueMatrix;

/// @brief Field _NonObliqueNearSurface, offset: 0x5d, size: 0x1, def value: None
 bool  ____NonObliqueNearSurface;

/// @brief Field _NonObliqueNearSurfaceThreshold, offset: 0x60, size: 0x4, def value: None
 float_t  ____NonObliqueNearSurfaceThreshold;

/// @brief Field _RenderOnlySingleCamera, offset: 0x64, size: 0x1, def value: None
 bool  ____RenderOnlySingleCamera;

/// @brief Field _RendererIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ____RendererIndex;

/// @brief Field _Debug, offset: 0x70, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterReflections_DebugFields*  ____Debug;

/// @brief Field _Water, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _UnderWater, offset: 0x80, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterRenderer*  ____UnderWater;

/// @brief Field _ApplySmoothness, offset: 0x88, size: 0x1, def value: None
 bool  ____ApplySmoothness;

/// @brief Field _ColorTexture, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____ColorTexture;

/// @brief Field _DepthTexture, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____DepthTexture;

/// @brief Field _ReflectionPositionNormal, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____ReflectionPositionNormal;

/// @brief Field _ReflectionMatrixIVP, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____ReflectionMatrixIVP;

/// @brief Field _ReflectionMatrixV, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____ReflectionMatrixV;

/// @brief Field _ActiveSlice, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____ActiveSlice;

/// @brief Field _CameraViewpoint, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____CameraViewpoint;

/// @brief Field _CameraViewpointSkybox, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Skybox>  ____CameraViewpointSkybox;

/// @brief Field _CameraReflections, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____CameraReflections;

/// @brief Field _CameraReflectionsSkybox, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Skybox>  ____CameraReflectionsSkybox;

/// @brief Field _LastRefreshOnFrame, offset: 0xe0, size: 0x8, def value: None
 int64_t  ____LastRefreshOnFrame;

/// @brief Field _CullDistances, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<float_t>  ____CullDistances;

/// @brief Field _CameraDepthTexture, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____CameraDepthTexture;

/// @brief Field _UpdateCamera, offset: 0xf8, size: 0x1, def value: None
 bool  ____UpdateCamera;

/// @brief Field _AllowMSAA, offset: 0xf9, size: 0x1, def value: None
 bool  ____AllowMSAA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CopyTargetsRenderPass) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Enabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Mode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Layers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Resolution) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Overscan) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Sky) == 0x34, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____DisablePixelLights) == 0x35, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____DisableShadows) == 0x36, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____HDR) == 0x37, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Stencil) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____QualitySettingsOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ClipPlaneOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____FarClipPlane) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____DisableOcclusionCulling) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____RefreshPerFrames) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____FrameRefreshOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____UseObliqueMatrix) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____NonObliqueNearSurface) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____NonObliqueNearSurfaceThreshold) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____RenderOnlySingleCamera) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____RendererIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Debug) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____Water) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____UnderWater) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ApplySmoothness) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ColorTexture) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____DepthTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ReflectionPositionNormal) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ReflectionMatrixIVP) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ReflectionMatrixV) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____ActiveSlice) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CameraViewpoint) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CameraViewpointSkybox) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CameraReflections) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CameraReflectionsSkybox) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____LastRefreshOnFrame) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CullDistances) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____CameraDepthTexture) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____UpdateCamera) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterReflections, ____AllowMSAA) == 0xf9, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterReflections) == 0x100, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
