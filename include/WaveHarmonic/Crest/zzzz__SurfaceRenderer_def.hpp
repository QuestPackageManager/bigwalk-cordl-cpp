#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SurfaceRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterMeshType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceRenderer)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
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
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest {
struct Builder_SurfaceRenderer_PatchType;
}
namespace WaveHarmonic::Crest {
class RenderGraphHelper_PassData;
}
namespace WaveHarmonic::Crest {
class ShaderIDs_SurfaceRenderer_Unity;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_Builder;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_DebugFields;
}
namespace WaveHarmonic::Crest {
struct SurfaceRenderer_ForceFacing;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct SurfaceRenderer_SurfaceDataParameters;
}
namespace WaveHarmonic::Crest {
struct SurfaceRenderer_SurfaceSelfIntersectionFixMode;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_WaterSurfaceRenderPass;
}
namespace WaveHarmonic::Crest {
struct WaterCameraExclusion;
}
namespace WaveHarmonic::Crest {
class WaterChunkRenderer;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
namespace WaveHarmonic::Crest {
class WaterSurfaceRenderPass_SurfaceRenderer_PassData;
}
namespace WaveHarmonic::Crest {
class WaterSurfaceRenderPass_SurfaceRenderer___c;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct Builder_SurfaceRenderer_PatchType;
}
namespace WaveHarmonic::Crest {
struct SurfaceRenderer_ForceFacing;
}
namespace WaveHarmonic::Crest {
struct SurfaceRenderer_SurfaceSelfIntersectionFixMode;
}
namespace WaveHarmonic::Crest {
class ShaderIDs_SurfaceRenderer_Unity;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_Builder;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_DebugFields;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class SurfaceRenderer_WaterSurfaceRenderPass;
}
namespace WaveHarmonic::Crest {
class WaterSurfaceRenderPass_SurfaceRenderer_PassData;
}
namespace WaveHarmonic::Crest {
class WaterSurfaceRenderPass_SurfaceRenderer___c;
}
namespace WaveHarmonic::Crest {
struct SurfaceRenderer_SurfaceDataParameters;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType);
MARK_VAL_T(::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing);
MARK_VAL_T(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode);
MARK_REF_T(::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity*);
MARK_REF_T(::WaveHarmonic::Crest::SurfaceRenderer*);
MARK_REF_T(::WaveHarmonic::Crest::SurfaceRenderer_Builder*);
MARK_REF_T(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*);
MARK_REF_T(::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*);
MARK_REF_T(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*);
MARK_REF_T(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*);
MARK_VAL_T(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType, "WaveHarmonic.Crest", "SurfaceRenderer/Builder/PatchType");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing, "WaveHarmonic.Crest", "SurfaceRenderer/ForceFacing");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode, "WaveHarmonic.Crest", "SurfaceRenderer/SurfaceSelfIntersectionFixMode");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity*, "WaveHarmonic.Crest", "SurfaceRenderer/ShaderIDs/Unity");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer*, "WaveHarmonic.Crest", "SurfaceRenderer");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_Builder*, "WaveHarmonic.Crest", "SurfaceRenderer/Builder");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*, "WaveHarmonic.Crest", "SurfaceRenderer/DebugFields");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs*, "WaveHarmonic.Crest", "SurfaceRenderer/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*, "WaveHarmonic.Crest", "SurfaceRenderer/WaterSurfaceRenderPass");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*, "WaveHarmonic.Crest", "SurfaceRenderer/WaterSurfaceRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*, "WaveHarmonic.Crest", "SurfaceRenderer/WaterSurfaceRenderPass/<>c");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters, "WaveHarmonic.Crest", "SurfaceRenderer/SurfaceDataParameters");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/ShaderIDs/Unity
class CORDL_TYPE ShaderIDs_SurfaceRenderer_Unity : public ::System::Object {
public:
// Declarations
/// @brief Field s_BuiltInSurface, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BuiltInSurface, put=setStaticF_s_BuiltInSurface)) int32_t  s_BuiltInSurface;

/// @brief Field s_BuiltInTransparentReceiveShadows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BuiltInTransparentReceiveShadows, put=setStaticF_s_BuiltInTransparentReceiveShadows)) int32_t  s_BuiltInTransparentReceiveShadows;

static inline int32_t getStaticF_s_BuiltInSurface() ;

static inline int32_t getStaticF_s_BuiltInTransparentReceiveShadows() ;

static inline void setStaticF_s_BuiltInSurface(int32_t  value) ;

static inline void setStaticF_s_BuiltInTransparentReceiveShadows(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderIDs_SurfaceRenderer_Unity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs_SurfaceRenderer_Unity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderIDs_SurfaceRenderer_Unity(ShaderIDs_SurfaceRenderer_Unity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs_SurfaceRenderer_Unity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderIDs_SurfaceRenderer_Unity(ShaderIDs_SurfaceRenderer_Unity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/ShaderIDs
class CORDL_TYPE SurfaceRenderer_ShaderIDs : public ::System::Object {
public:
// Declarations
using Unity = ::WaveHarmonic::Crest::ShaderIDs_SurfaceRenderer_Unity;

/// @brief Field s_BuiltShadowCasterZTest, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BuiltShadowCasterZTest, put=setStaticF_s_BuiltShadowCasterZTest)) int32_t  s_BuiltShadowCasterZTest;

/// @brief Field s_ChunkFarNormalsWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ChunkFarNormalsWeight, put=setStaticF_s_ChunkFarNormalsWeight)) int32_t  s_ChunkFarNormalsWeight;

/// @brief Field s_ChunkGeometryGridWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ChunkGeometryGridWidth, put=setStaticF_s_ChunkGeometryGridWidth)) int32_t  s_ChunkGeometryGridWidth;

/// @brief Field s_ChunkMeshScaleAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ChunkMeshScaleAlpha, put=setStaticF_s_ChunkMeshScaleAlpha)) int32_t  s_ChunkMeshScaleAlpha;

/// @brief Field s_ChunkNormalScrollSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ChunkNormalScrollSpeed, put=setStaticF_s_ChunkNormalScrollSpeed)) int32_t  s_ChunkNormalScrollSpeed;

/// @brief Field s_DataType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DataType, put=setStaticF_s_DataType)) int32_t  s_DataType;

/// @brief Field s_DummyTarget, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DummyTarget, put=setStaticF_s_DummyTarget)) int32_t  s_DummyTarget;

/// @brief Field s_Exposure, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Exposure, put=setStaticF_s_Exposure)) int32_t  s_Exposure;

/// @brief Field s_ForceUnderwater, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ForceUnderwater, put=setStaticF_s_ForceUnderwater)) int32_t  s_ForceUnderwater;

/// @brief Field s_LodAlphaBlackPointFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LodAlphaBlackPointFade, put=setStaticF_s_LodAlphaBlackPointFade)) int32_t  s_LodAlphaBlackPointFade;

/// @brief Field s_LodAlphaBlackPointWhitePointFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LodAlphaBlackPointWhitePointFade, put=setStaticF_s_LodAlphaBlackPointWhitePointFade)) int32_t  s_LodAlphaBlackPointWhitePointFade;

/// @brief Field s_NormalMapParameters, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_NormalMapParameters, put=setStaticF_s_NormalMapParameters)) int32_t  s_NormalMapParameters;

/// @brief Field s_Range, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Range, put=setStaticF_s_Range)) int32_t  s_Range;

/// @brief Field s_Saturate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Saturate, put=setStaticF_s_Saturate)) int32_t  s_Saturate;

/// @brief Field s_WaterLine, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterLine, put=setStaticF_s_WaterLine)) int32_t  s_WaterLine;

/// @brief Field s_WaterLineFlatWater, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterLineFlatWater, put=setStaticF_s_WaterLineFlatWater)) int32_t  s_WaterLineFlatWater;

/// @brief Field s_WaterLineResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterLineResolution, put=setStaticF_s_WaterLineResolution)) int32_t  s_WaterLineResolution;

/// @brief Field s_WaterLineSnappedPosition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterLineSnappedPosition, put=setStaticF_s_WaterLineSnappedPosition)) int32_t  s_WaterLineSnappedPosition;

/// @brief Field s_WaterLineTexel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterLineTexel, put=setStaticF_s_WaterLineTexel)) int32_t  s_WaterLineTexel;

/// @brief Field s_WorldToShadow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WorldToShadow, put=setStaticF_s_WorldToShadow)) int32_t  s_WorldToShadow;

static inline int32_t getStaticF_s_BuiltShadowCasterZTest() ;

static inline int32_t getStaticF_s_ChunkFarNormalsWeight() ;

static inline int32_t getStaticF_s_ChunkGeometryGridWidth() ;

static inline int32_t getStaticF_s_ChunkMeshScaleAlpha() ;

static inline int32_t getStaticF_s_ChunkNormalScrollSpeed() ;

static inline int32_t getStaticF_s_DataType() ;

static inline int32_t getStaticF_s_DummyTarget() ;

static inline int32_t getStaticF_s_Exposure() ;

static inline int32_t getStaticF_s_ForceUnderwater() ;

static inline int32_t getStaticF_s_LodAlphaBlackPointFade() ;

static inline int32_t getStaticF_s_LodAlphaBlackPointWhitePointFade() ;

static inline int32_t getStaticF_s_NormalMapParameters() ;

static inline int32_t getStaticF_s_Range() ;

static inline int32_t getStaticF_s_Saturate() ;

static inline int32_t getStaticF_s_WaterLine() ;

static inline int32_t getStaticF_s_WaterLineFlatWater() ;

static inline int32_t getStaticF_s_WaterLineResolution() ;

static inline int32_t getStaticF_s_WaterLineSnappedPosition() ;

static inline int32_t getStaticF_s_WaterLineTexel() ;

static inline int32_t getStaticF_s_WorldToShadow() ;

static inline void setStaticF_s_BuiltShadowCasterZTest(int32_t  value) ;

static inline void setStaticF_s_ChunkFarNormalsWeight(int32_t  value) ;

static inline void setStaticF_s_ChunkGeometryGridWidth(int32_t  value) ;

static inline void setStaticF_s_ChunkMeshScaleAlpha(int32_t  value) ;

static inline void setStaticF_s_ChunkNormalScrollSpeed(int32_t  value) ;

static inline void setStaticF_s_DataType(int32_t  value) ;

static inline void setStaticF_s_DummyTarget(int32_t  value) ;

static inline void setStaticF_s_Exposure(int32_t  value) ;

static inline void setStaticF_s_ForceUnderwater(int32_t  value) ;

static inline void setStaticF_s_LodAlphaBlackPointFade(int32_t  value) ;

static inline void setStaticF_s_LodAlphaBlackPointWhitePointFade(int32_t  value) ;

static inline void setStaticF_s_NormalMapParameters(int32_t  value) ;

static inline void setStaticF_s_Range(int32_t  value) ;

static inline void setStaticF_s_Saturate(int32_t  value) ;

static inline void setStaticF_s_WaterLine(int32_t  value) ;

static inline void setStaticF_s_WaterLineFlatWater(int32_t  value) ;

static inline void setStaticF_s_WaterLineResolution(int32_t  value) ;

static inline void setStaticF_s_WaterLineSnappedPosition(int32_t  value) ;

static inline void setStaticF_s_WaterLineTexel(int32_t  value) ;

static inline void setStaticF_s_WorldToShadow(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceRenderer_ShaderIDs(SurfaceRenderer_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceRenderer_ShaderIDs(SurfaceRenderer_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Vector2
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/SurfaceDataParameters
struct CORDL_TYPE SurfaceRenderer_SurfaceDataParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_SurfaceDataParameters() ;

// Ctor Parameters [CppParam { name: "_SnappedPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_Resolution", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_Texel", ty: "float_t", modifiers: "", def_value: None }]
constexpr SurfaceRenderer_SurfaceDataParameters(::UnityEngine::Vector2  _SnappedPosition, ::UnityEngine::Vector2  _Resolution, float_t  _Texel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16655};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field _SnappedPosition, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  _SnappedPosition;

/// @brief Field _Resolution, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  _Resolution;

/// @brief Field _Texel, offset: 0x10, size: 0x4, def value: None
 float_t  _Texel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters, _SnappedPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters, _Resolution) == 0x8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters, _Texel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters) == 0x14, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/WaterSurfaceRenderPass/PassData
class CORDL_TYPE WaterSurfaceRenderPass_SurfaceRenderer_PassData : public ::System::Object {
public:
// Declarations
/// @brief Field _RendererList, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get__RendererList, put=__cordl_internal_set__RendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  _RendererList;

static inline ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData* New_ctor() ;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get__RendererList() const;

constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get__RendererList() ;

constexpr void __cordl_internal_set__RendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSurfaceRenderPass_SurfaceRenderer_PassData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSurfaceRenderPass_SurfaceRenderer_PassData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSurfaceRenderPass_SurfaceRenderer_PassData(WaterSurfaceRenderPass_SurfaceRenderer_PassData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSurfaceRenderPass_SurfaceRenderer_PassData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSurfaceRenderPass_SurfaceRenderer_PassData(WaterSurfaceRenderPass_SurfaceRenderer_PassData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16656};

/// @brief Field _RendererList, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  ____RendererList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData, ____RendererList) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/WaterSurfaceRenderPass/<>c
class CORDL_TYPE WaterSurfaceRenderPass_SurfaceRenderer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  __9__11_0;

static inline ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c* New_ctor() ;

/// @brief Method <RecordRenderGraph>b__11_0, addr 0x180329970, size 0x70, virtual false, abstract: false, final false
inline void _RecordRenderGraph_b__11_0(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c* getStaticF___9() ;

static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c*  value) ;

static inline void setStaticF___9__11_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSurfaceRenderPass_SurfaceRenderer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSurfaceRenderPass_SurfaceRenderer___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSurfaceRenderPass_SurfaceRenderer___c(WaterSurfaceRenderPass_SurfaceRenderer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSurfaceRenderPass_SurfaceRenderer___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSurfaceRenderPass_SurfaceRenderer___c(WaterSurfaceRenderPass_SurfaceRenderer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rendering.ShaderTagId, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/WaterSurfaceRenderPass
class CORDL_TYPE SurfaceRenderer_WaterSurfaceRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
// Declarations
using PassData = ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer_PassData;

using __c = ::WaveHarmonic::Crest::WaterSurfaceRenderPass_SurfaceRenderer___c;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*  _Instance_k__BackingField;

/// @brief Field _PassData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__PassData, put=__cordl_internal_set__PassData)) ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  _PassData;

/// @brief Field _ShaderTagID, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShaderTagID, put=__cordl_internal_set__ShaderTagID)) ::UnityEngine::Rendering::ShaderTagId  _ShaderTagID;

/// @brief Field _Water, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Method Enable, addr 0x18259d0a0, size 0xc0, virtual false, abstract: false, final false
static inline void Enable(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnBeginCameraRendering, addr 0x18259d160, size 0xc0, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method RecordRenderGraph, addr 0x18259d220, size 0x8d0, virtual true, abstract: false, final false
inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  graph, ::UnityEngine::Rendering::ContextContainer*  frame) ;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData* const& __cordl_internal_get__PassData() const;

constexpr ::WaveHarmonic::Crest::RenderGraphHelper_PassData*& __cordl_internal_get__PassData() ;

constexpr ::UnityEngine::Rendering::ShaderTagId const& __cordl_internal_get__ShaderTagID() const;

constexpr ::UnityEngine::Rendering::ShaderTagId& __cordl_internal_get__ShaderTagID() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__PassData(::WaveHarmonic::Crest::RenderGraphHelper_PassData*  value) ;

constexpr void __cordl_internal_set__ShaderTagID(::UnityEngine::Rendering::ShaderTagId  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x18259daf0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Instance, addr 0x18259db80, size 0x20, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass* get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*  value) ;

/// @brief Method set_Instance, addr 0x18259dba0, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_WaterSurfaceRenderPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_WaterSurfaceRenderPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceRenderer_WaterSurfaceRenderPass(SurfaceRenderer_WaterSurfaceRenderPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_WaterSurfaceRenderPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceRenderer_WaterSurfaceRenderPass(SurfaceRenderer_WaterSurfaceRenderPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16658};

/// @brief Field _Water, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _ShaderTagID, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShaderTagId  ____ShaderTagID;

/// @brief Field _PassData, offset: 0x70, size: 0x8, def value: None
 ::WaveHarmonic::Crest::RenderGraphHelper_PassData*  ____PassData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass, ____Water) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass, ____ShaderTagID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass, ____PassData) == 0x70, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/DebugFields
class CORDL_TYPE SurfaceRenderer_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _DisableSkirt, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableSkirt, put=__cordl_internal_set__DisableSkirt)) bool  _DisableSkirt;

/// @brief Field _DrawRendererBounds, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawRendererBounds, put=__cordl_internal_set__DrawRendererBounds)) bool  _DrawRendererBounds;

/// @brief Field _UniformTiles, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__UniformTiles, put=__cordl_internal_set__UniformTiles)) bool  _UniformTiles;

static inline ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__DisableSkirt() const;

constexpr bool& __cordl_internal_get__DisableSkirt() ;

constexpr bool const& __cordl_internal_get__DrawRendererBounds() const;

constexpr bool& __cordl_internal_get__DrawRendererBounds() ;

constexpr bool const& __cordl_internal_get__UniformTiles() const;

constexpr bool& __cordl_internal_get__UniformTiles() ;

constexpr void __cordl_internal_set__DisableSkirt(bool  value) ;

constexpr void __cordl_internal_set__DrawRendererBounds(bool  value) ;

constexpr void __cordl_internal_set__UniformTiles(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceRenderer_DebugFields(SurfaceRenderer_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceRenderer_DebugFields(SurfaceRenderer_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16659};

/// @brief Field _UniformTiles, offset: 0x10, size: 0x1, def value: None
 bool  ____UniformTiles;

/// @brief Field _DisableSkirt, offset: 0x11, size: 0x1, def value: None
 bool  ____DisableSkirt;

/// @brief Field _DrawRendererBounds, offset: 0x12, size: 0x1, def value: None
 bool  ____DrawRendererBounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields, ____UniformTiles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields, ____DisableSkirt) == 0x11, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields, ____DrawRendererBounds) == 0x12, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/SurfaceSelfIntersectionFixMode
struct CORDL_TYPE SurfaceRenderer_SurfaceSelfIntersectionFixMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SurfaceRenderer_SurfaceSelfIntersectionFixMode_Unwrapped
enum struct __SurfaceRenderer_SurfaceSelfIntersectionFixMode_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_ForceBelowWater = static_cast<int32_t>(0x1),
__E_ForceAboveWater = static_cast<int32_t>(0x2),
__E_On = static_cast<int32_t>(0x3),
__E_Automatic = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SurfaceRenderer_SurfaceSelfIntersectionFixMode_Unwrapped () const noexcept {
return static_cast<__SurfaceRenderer_SurfaceSelfIntersectionFixMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_SurfaceSelfIntersectionFixMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SurfaceRenderer_SurfaceSelfIntersectionFixMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(4)
static ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const Automatic;

/// @brief Field ForceAboveWater value: I32(2)
static ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const ForceAboveWater;

/// @brief Field ForceBelowWater value: I32(1)
static ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const ForceBelowWater;

/// @brief Field Off value: I32(0)
static ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const Off;

/// @brief Field On value: I32(3)
static ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16660};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/ForceFacing
struct CORDL_TYPE SurfaceRenderer_ForceFacing {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SurfaceRenderer_ForceFacing_Unwrapped
enum struct __SurfaceRenderer_ForceFacing_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BelowWater = static_cast<int32_t>(0x1),
__E_AboveWater = static_cast<int32_t>(0x2),
__E_Facing = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SurfaceRenderer_ForceFacing_Unwrapped () const noexcept {
return static_cast<__SurfaceRenderer_ForceFacing_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_ForceFacing() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SurfaceRenderer_ForceFacing(int32_t  value__) noexcept;

/// @brief Field AboveWater value: I32(2)
static ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing const AboveWater;

/// @brief Field BelowWater value: I32(1)
static ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing const BelowWater;

/// @brief Field Facing value: I32(3)
static ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing const Facing;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16661};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/Builder/PatchType
struct CORDL_TYPE Builder_SurfaceRenderer_PatchType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Builder_SurfaceRenderer_PatchType_Unwrapped
enum struct __Builder_SurfaceRenderer_PatchType_Unwrapped : int32_t {
__E_Interior = static_cast<int32_t>(0x0),
__E_Fat = static_cast<int32_t>(0x1),
__E_FatX = static_cast<int32_t>(0x2),
__E_FatXSlimZ = static_cast<int32_t>(0x3),
__E_FatXOuter = static_cast<int32_t>(0x4),
__E_FatXZ = static_cast<int32_t>(0x5),
__E_FatXZOuter = static_cast<int32_t>(0x6),
__E_SlimX = static_cast<int32_t>(0x7),
__E_SlimXZ = static_cast<int32_t>(0x8),
__E_SlimXFatZ = static_cast<int32_t>(0x9),
__E_Count = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Builder_SurfaceRenderer_PatchType_Unwrapped () const noexcept {
return static_cast<__Builder_SurfaceRenderer_PatchType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Builder_SurfaceRenderer_PatchType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Builder_SurfaceRenderer_PatchType(int32_t  value__) noexcept;

/// @brief Field Count value: I32(10)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const Count;

/// @brief Field Fat value: I32(1)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const Fat;

/// @brief Field FatX value: I32(2)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const FatX;

/// @brief Field FatXOuter value: I32(4)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const FatXOuter;

/// @brief Field FatXSlimZ value: I32(3)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const FatXSlimZ;

/// @brief Field FatXZ value: I32(5)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const FatXZ;

/// @brief Field FatXZOuter value: I32(6)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const FatXZOuter;

/// @brief Field Interior value: I32(0)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const Interior;

/// @brief Field SlimX value: I32(7)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const SlimX;

/// @brief Field SlimXFatZ value: I32(9)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const SlimXFatZ;

/// @brief Field SlimXZ value: I32(8)
static ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType const SlimXZ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Vector2, WaveHarmonic.Crest.SurfaceRenderer::Builder::PatchType
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer/Builder
class CORDL_TYPE SurfaceRenderer_Builder : public ::System::Object {
public:
// Declarations
using PatchType = ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType;

/// @brief Field s_Offsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Offsets, put=setStaticF_s_Offsets)) ::ArrayW<::UnityEngine::Vector2>  s_Offsets;

/// @brief Field s_OffsetsFirstLod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OffsetsFirstLod, put=setStaticF_s_OffsetsFirstLod)) ::ArrayW<::UnityEngine::Vector2>  s_OffsetsFirstLod;

/// @brief Field s_PatchTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PatchTypes, put=setStaticF_s_PatchTypes)) ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  s_PatchTypes;

/// @brief Field s_PatchTypesFirstLod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PatchTypesFirstLod, put=setStaticF_s_PatchTypesFirstLod)) ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  s_PatchTypesFirstLod;

/// @brief Field s_PatchTypesLastLod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PatchTypesLastLod, put=setStaticF_s_PatchTypesLastLod)) ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  s_PatchTypesLastLod;

/// @brief Field s_SiblingIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SiblingIndex, put=setStaticF_s_SiblingIndex)) int32_t  s_SiblingIndex;

/// @brief Method BuildPatch, addr 0x182589030, size 0x800, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> BuildPatch(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType  pt, float_t  vertDensity) ;

/// @brief Method CreateLOD, addr 0x182589830, size 0xa80, virtual false, abstract: false, final false
static inline void CreateLOD(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::SurfaceRenderer*  surface, ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  tiles, ::UnityEngine::Transform*  parent, int32_t  lodIndex, int32_t  lodCount, ::ArrayW<::UnityEngine::Mesh*>  meshData, int32_t  lodDataResolution, int32_t  geoDownSampleFactor, int32_t  layer) ;

/// @brief Method GenerateMesh, addr 0x18258a2b0, size 0x3c0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GenerateMesh(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::SurfaceRenderer*  surface, ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  tiles, int32_t  lodDataResolution, int32_t  geoDownSampleFactor, int32_t  lodCount) ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_s_Offsets() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_s_OffsetsFirstLod() ;

static inline ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType> getStaticF_s_PatchTypes() ;

static inline ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType> getStaticF_s_PatchTypesFirstLod() ;

static inline ::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType> getStaticF_s_PatchTypesLastLod() ;

static inline int32_t getStaticF_s_SiblingIndex() ;

static inline void setStaticF_s_Offsets(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_s_OffsetsFirstLod(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_s_PatchTypes(::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  value) ;

static inline void setStaticF_s_PatchTypesFirstLod(::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  value) ;

static inline void setStaticF_s_PatchTypesLastLod(::ArrayW<::WaveHarmonic::Crest::Builder_SurfaceRenderer_PatchType>  value) ;

static inline void setStaticF_s_SiblingIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer_Builder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_Builder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceRenderer_Builder(SurfaceRenderer_Builder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer_Builder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceRenderer_Builder(SurfaceRenderer_Builder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16663};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer_Builder) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.MaterialPropertyBlock, UnityEngine.Matrix4x4, UnityEngine.Mesh, UnityEngine.Vector4, WaveHarmonic.Crest.Internal.Versioned, WaveHarmonic.Crest.SurfaceRenderer::SurfaceDataParameters, WaveHarmonic.Crest.SurfaceRenderer::SurfaceSelfIntersectionFixMode, WaveHarmonic.Crest.WaterCameraExclusion, WaveHarmonic.Crest.WaterMeshType
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SurfaceRenderer
class CORDL_TYPE SurfaceRenderer : public ::WaveHarmonic::Crest::Internal::Versioned {
public:
// Declarations
using Builder = ::WaveHarmonic::Crest::SurfaceRenderer_Builder;

using DebugFields = ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields;

using ForceFacing = ::WaveHarmonic::Crest::SurfaceRenderer_ForceFacing;

using ShaderIDs = ::WaveHarmonic::Crest::SurfaceRenderer_ShaderIDs;

using SurfaceDataParameters = ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters;

using SurfaceSelfIntersectionFixMode = ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode;

using WaterSurfaceRenderPass = ::WaveHarmonic::Crest::SurfaceRenderer_WaterSurfaceRenderPass;

 __declspec(property(get=get_AboveOrBelowSurfaceMaterial)) ::UnityW<::UnityEngine::Material>  AboveOrBelowSurfaceMaterial;

 __declspec(property(get=get_AllowRenderQueueSorting, put=set_AllowRenderQueueSorting)) bool  AllowRenderQueueSorting;

 __declspec(property(get=get_CameraExclusions, put=set_CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  CameraExclusions;

 __declspec(property(get=get_CastShadows, put=set_CastShadows)) bool  CastShadows;

 __declspec(property(get=get_Chunks)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  Chunks;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_ForceRenderingOff, put=set_ForceRenderingOff)) bool  ForceRenderingOff;

 __declspec(property(get=get_HeightRT)) ::UnityW<::UnityEngine::RenderTexture>  HeightRT;

 __declspec(property(get=get_IsQuadMesh)) bool  IsQuadMesh;

 __declspec(property(get=get_Layer, put=set_Layer)) int32_t  Layer;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_NormalMapParameters, put=set_NormalMapParameters)) ::ArrayW<::UnityEngine::Vector4>  NormalMapParameters;

 __declspec(property(get=get_PerCascadeMPB, put=set_PerCascadeMPB)) ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  PerCascadeMPB;

 __declspec(property(get=get_PreviousObjectToWorld, put=set_PreviousObjectToWorld)) ::ArrayW<::UnityEngine::Matrix4x4>  PreviousObjectToWorld;

 __declspec(property(get=get_QueueMotionVectors)) bool  QueueMotionVectors;

 __declspec(property(get=get_Root)) ::UnityW<::UnityEngine::Transform>  Root;

 __declspec(property(get=get_SupportCustomRenderers, put=set_SupportCustomRenderers)) bool  SupportCustomRenderers;

 __declspec(property(get=get_TimeSliceBoundsUpdateFrameCount, put=set_TimeSliceBoundsUpdateFrameCount)) int32_t  TimeSliceBoundsUpdateFrameCount;

 __declspec(property(get=get_VisualizeDataMaterial)) ::UnityW<::UnityEngine::Material>  VisualizeDataMaterial;

 __declspec(property(get=get_VolumeMaterial, put=set_VolumeMaterial)) ::UnityW<::UnityEngine::Material>  VolumeMaterial;

 __declspec(property(get=get_WaterBodyCulling, put=set_WaterBodyCulling)) bool  WaterBodyCulling;

/// @brief Field _AllowRenderQueueSorting, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowRenderQueueSorting, put=__cordl_internal_set__AllowRenderQueueSorting)) bool  _AllowRenderQueueSorting;

/// @brief Field _BeforeRenderingCommands, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__BeforeRenderingCommands, put=__cordl_internal_set__BeforeRenderingCommands)) ::UnityEngine::Rendering::CommandBuffer*  _BeforeRenderingCommands;

/// @brief Field _CameraExclusions, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__CameraExclusions, put=__cordl_internal_set__CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  _CameraExclusions;

/// @brief Field _CanSkipCulling, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get__CanSkipCulling, put=__cordl_internal_set__CanSkipCulling)) bool  _CanSkipCulling;

/// @brief Field _CaptureShadowMatrices, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__CaptureShadowMatrices, put=__cordl_internal_set__CaptureShadowMatrices)) ::UnityW<::UnityEngine::Material>  _CaptureShadowMatrices;

/// @brief Field _CastShadows, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__CastShadows, put=__cordl_internal_set__CastShadows)) bool  _CastShadows;

/// @brief Field _ChunkTemplate, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChunkTemplate, put=__cordl_internal_set__ChunkTemplate)) ::UnityW<::UnityEngine::GameObject>  _ChunkTemplate;

/// @brief Field <Chunks>k__BackingField, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Chunks_k__BackingField, put=__cordl_internal_set__Chunks_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  _Chunks_k__BackingField;

/// @brief Field _Debug, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*  _Debug;

/// @brief Field _DeferredShadowMapBuffer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeferredShadowMapBuffer, put=__cordl_internal_set__DeferredShadowMapBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _DeferredShadowMapBuffer;

/// @brief Field _DisplacedMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplacedMaterial, put=__cordl_internal_set__DisplacedMaterial)) ::UnityW<::UnityEngine::Material>  _DisplacedMaterial;

/// @brief Field _DrawWaterSurfaceBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__DrawWaterSurfaceBuffer, put=__cordl_internal_set__DrawWaterSurfaceBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _DrawWaterSurfaceBuffer;

/// @brief Field _Enabled, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled, put=__cordl_internal_set__Enabled)) bool  _Enabled;

/// @brief Field _ForceRenderingOff, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceRenderingOff, put=__cordl_internal_set__ForceRenderingOff)) bool  _ForceRenderingOff;

/// @brief Field _ForceShadowsMaterial, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ForceShadowsMaterial, put=__cordl_internal_set__ForceShadowsMaterial)) ::UnityW<::UnityEngine::Material>  _ForceShadowsMaterial;

/// @brief Field _HeightRT, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__HeightRT, put=__cordl_internal_set__HeightRT)) ::UnityW<::UnityEngine::RenderTexture>  _HeightRT;

/// @brief Field _Layer, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) int32_t  _Layer;

/// @brief Field _LodAlphaBlackPointFade, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__LodAlphaBlackPointFade, put=__cordl_internal_set__LodAlphaBlackPointFade)) float_t  _LodAlphaBlackPointFade;

/// @brief Field _LodAlphaBlackPointWhitePointFade, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__LodAlphaBlackPointWhitePointFade, put=__cordl_internal_set__LodAlphaBlackPointWhitePointFade)) float_t  _LodAlphaBlackPointWhitePointFade;

/// @brief Field _Material, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material, put=__cordl_internal_set__Material)) ::UnityW<::UnityEngine::Material>  _Material;

/// @brief Field _MeshType, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__MeshType, put=__cordl_internal_set__MeshType)) ::WaveHarmonic::Crest::WaterMeshType  _MeshType;

/// @brief Field _Meshes, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__Meshes, put=__cordl_internal_set__Meshes)) ::ArrayW<::UnityW<::UnityEngine::Mesh>>  _Meshes;

/// @brief Field _MotionVectorMaterial, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__MotionVectorMaterial, put=__cordl_internal_set__MotionVectorMaterial)) ::UnityW<::UnityEngine::Material>  _MotionVectorMaterial;

/// @brief Field _NormalMapParameters, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__NormalMapParameters, put=__cordl_internal_set__NormalMapParameters)) ::ArrayW<::UnityEngine::Vector4>  _NormalMapParameters;

/// @brief Field <NormalMapParameters>k__BackingField, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__NormalMapParameters_k__BackingField, put=__cordl_internal_set__NormalMapParameters_k__BackingField)) ::ArrayW<::UnityEngine::Vector4>  _NormalMapParameters_k__BackingField;

/// @brief Field <OnCreateChunkRenderer>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__OnCreateChunkRenderer_k__BackingField, put=setStaticF__OnCreateChunkRenderer_k__BackingField)) ::System::Action_1<::UnityW<::UnityEngine::Renderer>>*  _OnCreateChunkRenderer_k__BackingField;

/// @brief Field _PerCameraNormalMapParameters, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCameraNormalMapParameters, put=__cordl_internal_set__PerCameraNormalMapParameters)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>*  _PerCameraNormalMapParameters;

/// @brief Field _PerCameraPerCascadeMPB, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCameraPerCascadeMPB, put=__cordl_internal_set__PerCameraPerCascadeMPB)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>*  _PerCameraPerCascadeMPB;

/// @brief Field _PerCameraPreviousObjectToWorld, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCameraPreviousObjectToWorld, put=__cordl_internal_set__PerCameraPreviousObjectToWorld)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>*  _PerCameraPreviousObjectToWorld;

/// @brief Field _PerCascadeMPB, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCascadeMPB, put=__cordl_internal_set__PerCascadeMPB)) ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  _PerCascadeMPB;

/// @brief Field <PerCascadeMPB>k__BackingField, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__PerCascadeMPB_k__BackingField, put=__cordl_internal_set__PerCascadeMPB_k__BackingField)) ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  _PerCascadeMPB_k__BackingField;

/// @brief Field _PreviousObjectToWorld, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__PreviousObjectToWorld, put=__cordl_internal_set__PreviousObjectToWorld)) ::ArrayW<::UnityEngine::Matrix4x4>  _PreviousObjectToWorld;

/// @brief Field <PreviousObjectToWorld>k__BackingField, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__PreviousObjectToWorld_k__BackingField, put=__cordl_internal_set__PreviousObjectToWorld_k__BackingField)) ::ArrayW<::UnityEngine::Matrix4x4>  _PreviousObjectToWorld_k__BackingField;

/// @brief Field _QuadMeshMPB, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__QuadMeshMPB, put=__cordl_internal_set__QuadMeshMPB)) ::UnityEngine::MaterialPropertyBlock*  _QuadMeshMPB;

/// @brief Field _QueueMotionVectors, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__QueueMotionVectors, put=__cordl_internal_set__QueueMotionVectors)) bool  _QueueMotionVectors;

/// @brief Field _Rebuild, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__Rebuild, put=__cordl_internal_set__Rebuild)) bool  _Rebuild;

/// @brief Field _RendererTemplate, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__RendererTemplate, put=__cordl_internal_set__RendererTemplate)) ::UnityW<::UnityEngine::Renderer>  _RendererTemplate;

/// @brief Field _Root, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Root, put=__cordl_internal_set__Root)) ::UnityW<::UnityEngine::Transform>  _Root;

/// @brief Field _ScreenSpaceShadowMapBuffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScreenSpaceShadowMapBuffer, put=__cordl_internal_set__ScreenSpaceShadowMapBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _ScreenSpaceShadowMapBuffer;

/// @brief Field _ShadowMatrixBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShadowMatrixBuffer, put=__cordl_internal_set__ShadowMatrixBuffer)) ::UnityEngine::ComputeBuffer*  _ShadowMatrixBuffer;

/// @brief Field _ShadowMatrixDefaults, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShadowMatrixDefaults, put=__cordl_internal_set__ShadowMatrixDefaults)) ::ArrayW<::UnityEngine::Matrix4x4>  _ShadowMatrixDefaults;

/// @brief Field _SupportCustomRenderers, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__SupportCustomRenderers, put=__cordl_internal_set__SupportCustomRenderers)) bool  _SupportCustomRenderers;

/// @brief Field _SurfaceDataMPB, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurfaceDataMPB, put=__cordl_internal_set__SurfaceDataMPB)) ::UnityEngine::MaterialPropertyBlock*  _SurfaceDataMPB;

/// @brief Field _SurfaceDataParameters, offset 0x30, size 0x14 
 __declspec(property(get=__cordl_internal_get__SurfaceDataParameters, put=__cordl_internal_set__SurfaceDataParameters)) ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters  _SurfaceDataParameters;

/// @brief Field _SurfaceSelfIntersectionFixMode, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__SurfaceSelfIntersectionFixMode, put=__cordl_internal_set__SurfaceSelfIntersectionFixMode)) ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  _SurfaceSelfIntersectionFixMode;

/// @brief Field _TimeSliceBoundsUpdateFrameCount, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeSliceBoundsUpdateFrameCount, put=__cordl_internal_set__TimeSliceBoundsUpdateFrameCount)) int32_t  _TimeSliceBoundsUpdateFrameCount;

/// @brief Field _VisualizeDataMaterial, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__VisualizeDataMaterial, put=__cordl_internal_set__VisualizeDataMaterial)) ::UnityW<::UnityEngine::Material>  _VisualizeDataMaterial;

/// @brief Field _VolumeMaterial, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__VolumeMaterial, put=__cordl_internal_set__VolumeMaterial)) ::UnityW<::UnityEngine::Material>  _VolumeMaterial;

/// @brief Field _Water, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field _WaterBodyCulling, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get__WaterBodyCulling, put=__cordl_internal_set__WaterBodyCulling)) bool  _WaterBodyCulling;

/// @brief Method ApplyWaterBodyCulling, addr 0x18258ed70, size 0x580, virtual false, abstract: false, final false
inline void ApplyWaterBodyCulling() ;

/// @brief Method BindDisplacedSurfaceData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void BindDisplacedSurfaceData(T  properties) ;

/// @brief Method Draw, addr 0x18258f2f0, size 0x3b0, virtual false, abstract: false, final false
inline void Draw(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera) ;

/// @brief Method GetCastShadows, addr 0x181b649a0, size 0x10, virtual false, abstract: false, final false
inline bool GetCastShadows() ;

/// @brief Method GetEnabled, addr 0x18258f6a0, size 0x40, virtual false, abstract: false, final false
inline bool GetEnabled() ;

/// @brief Method Initialize, addr 0x18258f8d0, size 0x320, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeProperties, addr 0x18258f6e0, size 0x1f0, virtual false, abstract: false, final false
inline void InitializeProperties() ;

/// @brief Method IsTransparent, addr 0x18258fbf0, size 0x60, virtual false, abstract: false, final false
static inline bool IsTransparent(::UnityEngine::Material*  material) ;

/// @brief Method LateUpdate, addr 0x182590270, size 0x420, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdateMotionVectors, addr 0x18258fc50, size 0x270, virtual false, abstract: false, final false
inline void LateUpdateMotionVectors() ;

/// @brief Method LateUpdateQuadMesh, addr 0x18258fec0, size 0x3b0, virtual false, abstract: false, final false
inline void LateUpdateQuadMesh() ;

/// @brief Method LegacyOnDisable, addr 0x182590690, size 0x60, virtual false, abstract: false, final false
inline void LegacyOnDisable() ;

/// @brief Method LegacyOnEnable, addr 0x1825906f0, size 0x80, virtual false, abstract: false, final false
inline void LegacyOnEnable() ;

/// @brief Method LoadCameraData, addr 0x182590770, size 0x210, virtual false, abstract: false, final false
inline void LoadCameraData(::UnityEngine::Camera*  camera) ;

static inline ::WaveHarmonic::Crest::SurfaceRenderer* New_ctor() ;

/// @brief Method OnBeginCameraRendering, addr 0x182590ac0, size 0x3d0, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginCameraRenderingLegacy, addr 0x182590980, size 0x140, virtual false, abstract: false, final false
inline void OnBeginCameraRenderingLegacy(::UnityEngine::Camera*  camera) ;

/// @brief Method OnDestroy, addr 0x182590e90, size 0x1a0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEndCameraRendering, addr 0x182591160, size 0x150, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnEndCameraRenderingLegacy, addr 0x182591030, size 0x130, virtual false, abstract: false, final false
inline void OnEndCameraRenderingLegacy(::UnityEngine::Camera*  camera) ;

/// @brief Method Rebuild, addr 0x1825912b0, size 0x70, virtual false, abstract: false, final false
inline void Rebuild() ;

/// @brief Method RemoveCameraData, addr 0x182591320, size 0x90, virtual false, abstract: false, final false
inline void RemoveCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method Render, addr 0x1825913b0, size 0x2c0, virtual false, abstract: false, final false
inline void Render(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Material*  material, int32_t  pass, bool  culled, ::UnityEngine::MaterialPropertyBlock*  mpb) ;

/// @brief Method RestoreCulling, addr 0x182591670, size 0xc0, virtual false, abstract: false, final false
inline void RestoreCulling() ;

/// @brief Method SetAllowRenderQueueSorting, addr 0x182591730, size 0xb0, virtual false, abstract: false, final false
inline void SetAllowRenderQueueSorting(bool  previous, bool  current) ;

/// @brief Method SetCastShadows, addr 0x1825917e0, size 0xa0, virtual false, abstract: false, final false
inline void SetCastShadows(bool  previous, bool  current) ;

/// @brief Method SetEnabled, addr 0x182591880, size 0x70, virtual false, abstract: false, final false
inline void SetEnabled(bool  previous, bool  current) ;

/// @brief Method SetLayer, addr 0x1825918f0, size 0xa0, virtual false, abstract: false, final false
inline void SetLayer(int32_t  previous, int32_t  current) ;

/// @brief Method SetUpShadows, addr 0x182591990, size 0x8c0, virtual false, abstract: false, final false
inline void SetUpShadows(::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldCull, addr 0x182592250, size 0xa0, virtual false, abstract: false, final false
inline bool ShouldCull() ;

/// @brief Method ShouldRender, addr 0x182592320, size 0xa0, virtual false, abstract: false, final false
inline bool ShouldRender(::UnityEngine::Camera*  camera) ;

/// @brief Method ShouldRenderMotionVectors, addr 0x1825922f0, size 0x30, virtual false, abstract: false, final false
inline bool ShouldRenderMotionVectors(::UnityEngine::Camera*  camera) ;

/// @brief Method ShowHiddenObjects, addr 0x1825923c0, size 0xb0, virtual false, abstract: false, final false
inline void ShowHiddenObjects(bool  show) ;

/// @brief Method UpdateChunkVisibility, addr 0x182592470, size 0x180, virtual false, abstract: false, final false
inline void UpdateChunkVisibility(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateDisplacedSurfaceData, addr 0x1825925f0, size 0x800, virtual false, abstract: false, final false
inline void UpdateDisplacedSurfaceData(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateDisplacedSurfaceData, addr 0x182592df0, size 0x670, virtual false, abstract: false, final false
inline void UpdateDisplacedSurfaceData(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Bounds  bounds, ::StringW  name, ::by_ref<::UnityEngine::RenderTexture*>  target, float_t  texel, int32_t  maximumResolution, ::by_ref<::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters>  parameters) ;

/// @brief Method UpdateMaterial, addr 0x182593460, size 0x110, virtual false, abstract: false, final false
inline void UpdateMaterial(::UnityEngine::Material*  material, ::by_ref<::UnityEngine::Material*>  motion) ;

/// @brief Method UpdateMotionVectorsMaterial, addr 0x182593570, size 0x350, virtual false, abstract: false, final false
inline void UpdateMotionVectorsMaterial(::UnityEngine::Material*  surface, ::by_ref<::UnityEngine::Material*>  motion) ;

/// @brief Method WritePerCameraMaterialParameters, addr 0x1825938c0, size 0x130, virtual false, abstract: false, final false
inline void WritePerCameraMaterialParameters(::UnityEngine::Camera*  camera) ;

/// @brief Method WritePerCascadeInstanceData, addr 0x1825939f0, size 0x3b0, virtual false, abstract: false, final false
inline void WritePerCascadeInstanceData() ;

constexpr bool const& __cordl_internal_get__AllowRenderQueueSorting() const;

constexpr bool& __cordl_internal_get__AllowRenderQueueSorting() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__BeforeRenderingCommands() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__BeforeRenderingCommands() ;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& __cordl_internal_get__CameraExclusions() const;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& __cordl_internal_get__CameraExclusions() ;

constexpr bool const& __cordl_internal_get__CanSkipCulling() const;

constexpr bool& __cordl_internal_get__CanSkipCulling() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__CaptureShadowMatrices() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__CaptureShadowMatrices() ;

constexpr bool const& __cordl_internal_get__CastShadows() const;

constexpr bool& __cordl_internal_get__CastShadows() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ChunkTemplate() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ChunkTemplate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>* const& __cordl_internal_get__Chunks_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*& __cordl_internal_get__Chunks_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__DeferredShadowMapBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__DeferredShadowMapBuffer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__DisplacedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__DisplacedMaterial() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__DrawWaterSurfaceBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__DrawWaterSurfaceBuffer() ;

constexpr bool const& __cordl_internal_get__Enabled() const;

constexpr bool& __cordl_internal_get__Enabled() ;

constexpr bool const& __cordl_internal_get__ForceRenderingOff() const;

constexpr bool& __cordl_internal_get__ForceRenderingOff() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__ForceShadowsMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__ForceShadowsMaterial() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__HeightRT() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__HeightRT() ;

constexpr int32_t const& __cordl_internal_get__Layer() const;

constexpr int32_t& __cordl_internal_get__Layer() ;

constexpr float_t const& __cordl_internal_get__LodAlphaBlackPointFade() const;

constexpr float_t& __cordl_internal_get__LodAlphaBlackPointFade() ;

constexpr float_t const& __cordl_internal_get__LodAlphaBlackPointWhitePointFade() const;

constexpr float_t& __cordl_internal_get__LodAlphaBlackPointWhitePointFade() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material() ;

constexpr ::WaveHarmonic::Crest::WaterMeshType const& __cordl_internal_get__MeshType() const;

constexpr ::WaveHarmonic::Crest::WaterMeshType& __cordl_internal_get__MeshType() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& __cordl_internal_get__Meshes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& __cordl_internal_get__Meshes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__MotionVectorMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__MotionVectorMaterial() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__NormalMapParameters() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__NormalMapParameters() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__NormalMapParameters_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__NormalMapParameters_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>* const& __cordl_internal_get__PerCameraNormalMapParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>*& __cordl_internal_get__PerCameraNormalMapParameters() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>* const& __cordl_internal_get__PerCameraPerCascadeMPB() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>*& __cordl_internal_get__PerCameraPerCascadeMPB() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>* const& __cordl_internal_get__PerCameraPreviousObjectToWorld() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>*& __cordl_internal_get__PerCameraPreviousObjectToWorld() ;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__PerCascadeMPB() const;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& __cordl_internal_get__PerCascadeMPB() ;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get__PerCascadeMPB_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& __cordl_internal_get__PerCascadeMPB_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__PreviousObjectToWorld() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__PreviousObjectToWorld() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__PreviousObjectToWorld_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__PreviousObjectToWorld_k__BackingField() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__QuadMeshMPB() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__QuadMeshMPB() ;

constexpr bool const& __cordl_internal_get__QueueMotionVectors() const;

constexpr bool& __cordl_internal_get__QueueMotionVectors() ;

constexpr bool const& __cordl_internal_get__Rebuild() const;

constexpr bool& __cordl_internal_get__Rebuild() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__RendererTemplate() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__RendererTemplate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Root() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__ScreenSpaceShadowMapBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__ScreenSpaceShadowMapBuffer() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__ShadowMatrixBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__ShadowMatrixBuffer() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__ShadowMatrixDefaults() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__ShadowMatrixDefaults() ;

constexpr bool const& __cordl_internal_get__SupportCustomRenderers() const;

constexpr bool& __cordl_internal_get__SupportCustomRenderers() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__SurfaceDataMPB() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__SurfaceDataMPB() ;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters const& __cordl_internal_get__SurfaceDataParameters() const;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters& __cordl_internal_get__SurfaceDataParameters() ;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode const& __cordl_internal_get__SurfaceSelfIntersectionFixMode() const;

constexpr ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode& __cordl_internal_get__SurfaceSelfIntersectionFixMode() ;

constexpr int32_t const& __cordl_internal_get__TimeSliceBoundsUpdateFrameCount() const;

constexpr int32_t& __cordl_internal_get__TimeSliceBoundsUpdateFrameCount() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__VisualizeDataMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__VisualizeDataMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__VolumeMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__VolumeMaterial() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr bool const& __cordl_internal_get__WaterBodyCulling() const;

constexpr bool& __cordl_internal_get__WaterBodyCulling() ;

constexpr void __cordl_internal_set__AllowRenderQueueSorting(bool  value) ;

constexpr void __cordl_internal_set__BeforeRenderingCommands(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

constexpr void __cordl_internal_set__CanSkipCulling(bool  value) ;

constexpr void __cordl_internal_set__CaptureShadowMatrices(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__CastShadows(bool  value) ;

constexpr void __cordl_internal_set__ChunkTemplate(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__Chunks_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*  value) ;

constexpr void __cordl_internal_set__DeferredShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__DisplacedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__DrawWaterSurfaceBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__Enabled(bool  value) ;

constexpr void __cordl_internal_set__ForceRenderingOff(bool  value) ;

constexpr void __cordl_internal_set__ForceShadowsMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__HeightRT(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__Layer(int32_t  value) ;

constexpr void __cordl_internal_set__LodAlphaBlackPointFade(float_t  value) ;

constexpr void __cordl_internal_set__LodAlphaBlackPointWhitePointFade(float_t  value) ;

constexpr void __cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__MeshType(::WaveHarmonic::Crest::WaterMeshType  value) ;

constexpr void __cordl_internal_set__Meshes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value) ;

constexpr void __cordl_internal_set__MotionVectorMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__NormalMapParameters(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__NormalMapParameters_k__BackingField(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__PerCameraNormalMapParameters(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>*  value) ;

constexpr void __cordl_internal_set__PerCameraPerCascadeMPB(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>*  value) ;

constexpr void __cordl_internal_set__PerCameraPreviousObjectToWorld(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>*  value) ;

constexpr void __cordl_internal_set__PerCascadeMPB(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value) ;

constexpr void __cordl_internal_set__PerCascadeMPB_k__BackingField(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value) ;

constexpr void __cordl_internal_set__PreviousObjectToWorld(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__PreviousObjectToWorld_k__BackingField(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__QuadMeshMPB(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__QueueMotionVectors(bool  value) ;

constexpr void __cordl_internal_set__Rebuild(bool  value) ;

constexpr void __cordl_internal_set__RendererTemplate(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__Root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__ScreenSpaceShadowMapBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__ShadowMatrixBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set__ShadowMatrixDefaults(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__SupportCustomRenderers(bool  value) ;

constexpr void __cordl_internal_set__SurfaceDataMPB(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__SurfaceDataParameters(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters  value) ;

constexpr void __cordl_internal_set__SurfaceSelfIntersectionFixMode(::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  value) ;

constexpr void __cordl_internal_set__TimeSliceBoundsUpdateFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set__VisualizeDataMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

constexpr void __cordl_internal_set__WaterBodyCulling(bool  value) ;

/// @brief Method .ctor, addr 0x182593da0, size 0x260, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Renderer>>* getStaticF__OnCreateChunkRenderer_k__BackingField() ;

/// @brief Method get_AboveOrBelowSurfaceMaterial, addr 0x182594000, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_AboveOrBelowSurfaceMaterial() ;

/// @brief Method get_AllowRenderQueueSorting, addr 0x180352b10, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowRenderQueueSorting() ;

/// @brief Method get_CameraExclusions, addr 0x1805e8f50, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterCameraExclusion get_CameraExclusions() ;

/// @brief Method get_CastShadows, addr 0x181b649a0, size 0x10, virtual false, abstract: false, final false
inline bool get_CastShadows() ;

/// @brief Method get_Chunks, addr 0x180371810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>* get_Chunks() ;

/// @brief Method get_Enabled, addr 0x18258f6a0, size 0x40, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_ForceRenderingOff, addr 0x1814f2b70, size 0x10, virtual false, abstract: false, final false
inline bool get_ForceRenderingOff() ;

/// @brief Method get_HeightRT, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_HeightRT() ;

/// @brief Method get_IsQuadMesh, addr 0x182594040, size 0x10, virtual false, abstract: false, final false
inline bool get_IsQuadMesh() ;

/// @brief Method get_Layer, addr 0x180cbfa00, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Layer() ;

/// @brief Method get_Material, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_NormalMapParameters, addr 0x180481bd0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> get_NormalMapParameters() ;

/// @brief Method get_OnCreateChunkRenderer, addr 0x182594050, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<::UnityW<::UnityEngine::Renderer>>* get_OnCreateChunkRenderer() ;

/// @brief Method get_PerCascadeMPB, addr 0x1803370d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::MaterialPropertyBlock*> get_PerCascadeMPB() ;

/// @brief Method get_PreviousObjectToWorld, addr 0x180474c10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Matrix4x4> get_PreviousObjectToWorld() ;

/// @brief Method get_QueueMotionVectors, addr 0x182594070, size 0x20, virtual false, abstract: false, final false
inline bool get_QueueMotionVectors() ;

/// @brief Method get_Root, addr 0x180474bf0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Root() ;

/// @brief Method get_SupportCustomRenderers, addr 0x1803b2c80, size 0x10, virtual false, abstract: false, final false
inline bool get_SupportCustomRenderers() ;

/// @brief Method get_TimeSliceBoundsUpdateFrameCount, addr 0x180cbfa10, size 0x20, virtual false, abstract: false, final false
inline int32_t get_TimeSliceBoundsUpdateFrameCount() ;

/// @brief Method get_VisualizeDataMaterial, addr 0x182594090, size 0x90, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_VisualizeDataMaterial() ;

/// @brief Method get_VolumeMaterial, addr 0x1803d9940, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_VolumeMaterial() ;

/// @brief Method get_WaterBodyCulling, addr 0x182594120, size 0x10, virtual false, abstract: false, final false
inline bool get_WaterBodyCulling() ;

static inline void setStaticF__OnCreateChunkRenderer_k__BackingField(::System::Action_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method set_AllowRenderQueueSorting, addr 0x180352c30, size 0x10, virtual false, abstract: false, final false
inline void set_AllowRenderQueueSorting(bool  value) ;

/// @brief Method set_CameraExclusions, addr 0x1805e90c0, size 0x10, virtual false, abstract: false, final false
inline void set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

/// @brief Method set_CastShadows, addr 0x1820c80f0, size 0x10, virtual false, abstract: false, final false
inline void set_CastShadows(bool  value) ;

/// @brief Method set_Enabled, addr 0x182594130, size 0x80, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_ForceRenderingOff, addr 0x1825941b0, size 0xc0, virtual false, abstract: false, final false
inline void set_ForceRenderingOff(bool  value) ;

/// @brief Method set_Layer, addr 0x180cbfcf0, size 0x10, virtual false, abstract: false, final false
inline void set_Layer(int32_t  value) ;

/// @brief Method set_Material, addr 0x180322790, size 0x20, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_NormalMapParameters, addr 0x180482340, size 0x20, virtual false, abstract: false, final false
inline void set_NormalMapParameters(::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method set_OnCreateChunkRenderer, addr 0x182594270, size 0x30, virtual false, abstract: false, final false
static inline void set_OnCreateChunkRenderer(::System::Action_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method set_PerCascadeMPB, addr 0x180337190, size 0x20, virtual false, abstract: false, final false
inline void set_PerCascadeMPB(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value) ;

/// @brief Method set_PreviousObjectToWorld, addr 0x180474cd0, size 0x20, virtual false, abstract: false, final false
inline void set_PreviousObjectToWorld(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method set_SupportCustomRenderers, addr 0x1803b30e0, size 0x10, virtual false, abstract: false, final false
inline void set_SupportCustomRenderers(bool  value) ;

/// @brief Method set_TimeSliceBoundsUpdateFrameCount, addr 0x180cbfd00, size 0x10, virtual false, abstract: false, final false
inline void set_TimeSliceBoundsUpdateFrameCount(int32_t  value) ;

/// @brief Method set_VolumeMaterial, addr 0x1803d9970, size 0x20, virtual false, abstract: false, final false
inline void set_VolumeMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_WaterBodyCulling, addr 0x1825942a0, size 0x10, virtual false, abstract: false, final false
inline void set_WaterBodyCulling(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceRenderer(SurfaceRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceRenderer(SurfaceRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16664};

/// @brief Field k_DrawWaterSurface offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawWaterSurface{u"Surface"};

/// @brief Field k_SurfaceDataShaderPass offset 0xffffffff size 0x4
static constexpr int32_t  k_SurfaceDataShaderPass{static_cast<int32_t>(0x2)};

/// @brief Field _HeightRT, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____HeightRT;

/// @brief Field _BeforeRenderingCommands, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____BeforeRenderingCommands;

/// @brief Field _DisplacedMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____DisplacedMaterial;

/// @brief Field _SurfaceDataParameters, offset: 0x30, size: 0x14, def value: None
 ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceDataParameters  ____SurfaceDataParameters;

/// @brief Field _SurfaceDataMPB, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____SurfaceDataMPB;

/// @brief Field _DrawWaterSurfaceBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____DrawWaterSurfaceBuffer;

/// @brief Field _QuadMeshMPB, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____QuadMeshMPB;

/// @brief Field _ForceShadowsMaterial, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____ForceShadowsMaterial;

/// @brief Field _ShadowMatrixBuffer, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ____ShadowMatrixBuffer;

/// @brief Field _ShadowMatrixDefaults, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____ShadowMatrixDefaults;

/// @brief Field _CaptureShadowMatrices, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____CaptureShadowMatrices;

/// @brief Field _DeferredShadowMapBuffer, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____DeferredShadowMapBuffer;

/// @brief Field _ScreenSpaceShadowMapBuffer, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____ScreenSpaceShadowMapBuffer;

/// @brief Field _Enabled, offset: 0x90, size: 0x1, def value: None
 bool  ____Enabled;

/// @brief Field _Layer, offset: 0x94, size: 0x4, def value: None
 int32_t  ____Layer;

/// @brief Field _MeshType, offset: 0x98, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterMeshType  ____MeshType;

/// @brief Field _ChunkTemplate, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ChunkTemplate;

/// @brief Field _SupportCustomRenderers, offset: 0xa8, size: 0x1, def value: None
 bool  ____SupportCustomRenderers;

/// @brief Field _Material, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material;

/// @brief Field _VolumeMaterial, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____VolumeMaterial;

/// @brief Field _CastShadows, offset: 0xc0, size: 0x1, def value: None
 bool  ____CastShadows;

/// @brief Field _TimeSliceBoundsUpdateFrameCount, offset: 0xc4, size: 0x4, def value: None
 int32_t  ____TimeSliceBoundsUpdateFrameCount;

/// @brief Field _CameraExclusions, offset: 0xc8, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterCameraExclusion  ____CameraExclusions;

/// @brief Field _SurfaceSelfIntersectionFixMode, offset: 0xcc, size: 0x4, def value: None
 ::WaveHarmonic::Crest::SurfaceRenderer_SurfaceSelfIntersectionFixMode  ____SurfaceSelfIntersectionFixMode;

/// @brief Field _AllowRenderQueueSorting, offset: 0xd0, size: 0x1, def value: None
 bool  ____AllowRenderQueueSorting;

/// @brief Field _Debug, offset: 0xd8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SurfaceRenderer_DebugFields*  ____Debug;

/// @brief Field _Water, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _Root, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Root;

/// @brief Field <Chunks>k__BackingField, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::WaterChunkRenderer>>*  ____Chunks_k__BackingField;

/// @brief Field _Rebuild, offset: 0xf8, size: 0x1, def value: None
 bool  ____Rebuild;

/// @brief Field _RendererTemplate, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____RendererTemplate;

/// @brief Field _PerCascadeMPB, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  ____PerCascadeMPB;

/// @brief Field <PerCascadeMPB>k__BackingField, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::MaterialPropertyBlock*>  ____PerCascadeMPB_k__BackingField;

/// @brief Field _LodAlphaBlackPointFade, offset: 0x118, size: 0x4, def value: None
 float_t  ____LodAlphaBlackPointFade;

/// @brief Field _LodAlphaBlackPointWhitePointFade, offset: 0x11c, size: 0x4, def value: None
 float_t  ____LodAlphaBlackPointWhitePointFade;

/// @brief Field _CanSkipCulling, offset: 0x120, size: 0x1, def value: None
 bool  ____CanSkipCulling;

/// @brief Field _MotionVectorMaterial, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____MotionVectorMaterial;

/// @brief Field _ForceRenderingOff, offset: 0x130, size: 0x1, def value: None
 bool  ____ForceRenderingOff;

/// @brief Field _VisualizeDataMaterial, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____VisualizeDataMaterial;

/// @brief Field _QueueMotionVectors, offset: 0x140, size: 0x1, def value: None
 bool  ____QueueMotionVectors;

/// @brief Field _PreviousObjectToWorld, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____PreviousObjectToWorld;

/// @brief Field <PreviousObjectToWorld>k__BackingField, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____PreviousObjectToWorld_k__BackingField;

/// @brief Field _PerCameraPerCascadeMPB, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::MaterialPropertyBlock*>>*  ____PerCameraPerCascadeMPB;

/// @brief Field _PerCameraNormalMapParameters, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Vector4>>*  ____PerCameraNormalMapParameters;

/// @brief Field _PerCameraPreviousObjectToWorld, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::ArrayW<::UnityEngine::Matrix4x4>>*  ____PerCameraPreviousObjectToWorld;

/// @brief Field _NormalMapParameters, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____NormalMapParameters;

/// @brief Field <NormalMapParameters>k__BackingField, offset: 0x178, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____NormalMapParameters_k__BackingField;

/// @brief Field _WaterBodyCulling, offset: 0x180, size: 0x1, def value: None
 bool  ____WaterBodyCulling;

/// @brief Field _Meshes, offset: 0x188, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Mesh>>  ____Meshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____HeightRT) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____BeforeRenderingCommands) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____DisplacedMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____SurfaceDataParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____SurfaceDataMPB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____DrawWaterSurfaceBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____QuadMeshMPB) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____ForceShadowsMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____ShadowMatrixBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____ShadowMatrixDefaults) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____CaptureShadowMatrices) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____DeferredShadowMapBuffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____ScreenSpaceShadowMapBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Enabled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Layer) == 0x94, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____MeshType) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____ChunkTemplate) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____SupportCustomRenderers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Material) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____VolumeMaterial) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____CastShadows) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____TimeSliceBoundsUpdateFrameCount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____CameraExclusions) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____SurfaceSelfIntersectionFixMode) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____AllowRenderQueueSorting) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Debug) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Water) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Root) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Chunks_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Rebuild) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____RendererTemplate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PerCascadeMPB) == 0x108, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PerCascadeMPB_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____LodAlphaBlackPointFade) == 0x118, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____LodAlphaBlackPointWhitePointFade) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____CanSkipCulling) == 0x120, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____MotionVectorMaterial) == 0x128, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____ForceRenderingOff) == 0x130, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____VisualizeDataMaterial) == 0x138, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____QueueMotionVectors) == 0x140, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PreviousObjectToWorld) == 0x148, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PreviousObjectToWorld_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PerCameraPerCascadeMPB) == 0x158, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PerCameraNormalMapParameters) == 0x160, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____PerCameraPreviousObjectToWorld) == 0x168, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____NormalMapParameters) == 0x170, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____NormalMapParameters_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____WaterBodyCulling) == 0x180, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SurfaceRenderer, ____Meshes) == 0x188, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SurfaceRenderer) == 0x190, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
