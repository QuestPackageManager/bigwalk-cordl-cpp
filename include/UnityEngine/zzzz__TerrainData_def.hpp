#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainData)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct DetailInstanceTransform;
}
namespace UnityEngine {
class DetailPrototype;
}
namespace UnityEngine {
struct DetailScatterMode;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
struct TerrainHeightmapSyncControl;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
class TreePrototype;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct TerrainData_BoundaryValueType;
}
namespace UnityEngine {
class TerrainData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainData_BoundaryValueType);
MARK_REF_T(::UnityEngine::TerrainData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainData_BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainData*, "UnityEngine", "TerrainData");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TerrainData/BoundaryValueType
struct CORDL_TYPE TerrainData_BoundaryValueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainData_BoundaryValueType_Unwrapped
enum struct __TerrainData_BoundaryValueType_Unwrapped : int32_t {
__E_MaxHeightmapRes = static_cast<int32_t>(0x0),
__E_MinDetailResPerPatch = static_cast<int32_t>(0x1),
__E_MaxDetailResPerPatch = static_cast<int32_t>(0x2),
__E_MaxDetailPatchCount = static_cast<int32_t>(0x3),
__E_MaxCoveragePerRes = static_cast<int32_t>(0x4),
__E_MinAlphamapRes = static_cast<int32_t>(0x5),
__E_MaxAlphamapRes = static_cast<int32_t>(0x6),
__E_MinBaseMapRes = static_cast<int32_t>(0x7),
__E_MaxBaseMapRes = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainData_BoundaryValueType_Unwrapped () const noexcept {
return static_cast<__TerrainData_BoundaryValueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainData_BoundaryValueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainData_BoundaryValueType(int32_t  value__) noexcept;

/// @brief Field MaxAlphamapRes value: I32(6)
static ::UnityEngine::TerrainData_BoundaryValueType const MaxAlphamapRes;

/// @brief Field MaxBaseMapRes value: I32(8)
static ::UnityEngine::TerrainData_BoundaryValueType const MaxBaseMapRes;

/// @brief Field MaxCoveragePerRes value: I32(4)
static ::UnityEngine::TerrainData_BoundaryValueType const MaxCoveragePerRes;

/// @brief Field MaxDetailPatchCount value: I32(3)
static ::UnityEngine::TerrainData_BoundaryValueType const MaxDetailPatchCount;

/// @brief Field MaxDetailResPerPatch value: I32(2)
static ::UnityEngine::TerrainData_BoundaryValueType const MaxDetailResPerPatch;

/// @brief Field MaxHeightmapRes value: I32(0)
static ::UnityEngine::TerrainData_BoundaryValueType const MaxHeightmapRes;

/// @brief Field MinAlphamapRes value: I32(5)
static ::UnityEngine::TerrainData_BoundaryValueType const MinAlphamapRes;

/// @brief Field MinBaseMapRes value: I32(7)
static ::UnityEngine::TerrainData_BoundaryValueType const MinBaseMapRes;

/// @brief Field MinDetailResPerPatch value: I32(1)
static ::UnityEngine::TerrainData_BoundaryValueType const MinDetailResPerPatch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20328};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainData_BoundaryValueType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainData_BoundaryValueType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainData
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
// Declarations
using BoundaryValueType = ::UnityEngine::TerrainData_BoundaryValueType;

 __declspec(property(get=get_Internal_alphamapResolution)) int32_t  Internal_alphamapResolution;

 __declspec(property(get=get_alphamapHeight)) int32_t  alphamapHeight;

 __declspec(property(get=get_alphamapResolution)) int32_t  alphamapResolution;

 __declspec(property(get=get_alphamapTextureCount)) int32_t  alphamapTextureCount;

 __declspec(property(get=get_alphamapTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  alphamapTextures;

 __declspec(property(get=get_alphamapWidth)) int32_t  alphamapWidth;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_detailHeight)) int32_t  detailHeight;

 __declspec(property(get=get_detailPatchCount)) int32_t  detailPatchCount;

 __declspec(property(get=get_detailPrototypes, put=set_detailPrototypes)) ::ArrayW<::UnityEngine::DetailPrototype*>  detailPrototypes;

 __declspec(property(get=get_detailResolution)) int32_t  detailResolution;

 __declspec(property(get=get_detailScatterMode)) ::UnityEngine::DetailScatterMode  detailScatterMode;

 __declspec(property(get=get_detailWidth)) int32_t  detailWidth;

 __declspec(property(get=get_heightmapResolution)) int32_t  heightmapResolution;

 __declspec(property(get=get_heightmapScale)) ::UnityEngine::Vector3  heightmapScale;

 __declspec(property(get=get_heightmapTexture)) ::UnityW<::UnityEngine::RenderTexture>  heightmapTexture;

 __declspec(property(get=get_holesResolution)) int32_t  holesResolution;

 __declspec(property(get=get_holesTexture)) ::UnityW<::UnityEngine::Texture>  holesTexture;

 __declspec(property(get=get_internalHeightmapResolution)) int32_t  internalHeightmapResolution;

/// @brief Field k_MaximumAlphamapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumAlphamapResolution, put=setStaticF_k_MaximumAlphamapResolution)) int32_t  k_MaximumAlphamapResolution;

/// @brief Field k_MaximumBaseMapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumBaseMapResolution, put=setStaticF_k_MaximumBaseMapResolution)) int32_t  k_MaximumBaseMapResolution;

/// @brief Field k_MaximumDetailPatchCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumDetailPatchCount, put=setStaticF_k_MaximumDetailPatchCount)) int32_t  k_MaximumDetailPatchCount;

/// @brief Field k_MaximumDetailResolutionPerPatch, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumDetailResolutionPerPatch, put=setStaticF_k_MaximumDetailResolutionPerPatch)) int32_t  k_MaximumDetailResolutionPerPatch;

/// @brief Field k_MaximumResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MaximumResolution, put=setStaticF_k_MaximumResolution)) int32_t  k_MaximumResolution;

/// @brief Field k_MinimumAlphamapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinimumAlphamapResolution, put=setStaticF_k_MinimumAlphamapResolution)) int32_t  k_MinimumAlphamapResolution;

/// @brief Field k_MinimumBaseMapResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinimumBaseMapResolution, put=setStaticF_k_MinimumBaseMapResolution)) int32_t  k_MinimumBaseMapResolution;

/// @brief Field k_MinimumDetailResolutionPerPatch, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinimumDetailResolutionPerPatch, put=setStaticF_k_MinimumDetailResolutionPerPatch)) int32_t  k_MinimumDetailResolutionPerPatch;

 __declspec(property(get=get_size)) ::UnityEngine::Vector3  size;

 __declspec(property(get=get_terrainLayers, put=set_terrainLayers)) ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>>  terrainLayers;

 __declspec(property(get=get_treeInstanceCount)) int32_t  treeInstanceCount;

 __declspec(property(get=get_treeInstances)) ::ArrayW<::UnityEngine::TreeInstance>  treeInstances;

 __declspec(property(get=get_treePrototypes, put=set_treePrototypes)) ::ArrayW<::UnityEngine::TreePrototype*>  treePrototypes;

 __declspec(property(get=get_users)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  users;

/// @brief Method ComputeDetailInstanceTransforms, addr 0x18230f230, size 0xf0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::DetailInstanceTransform> ComputeDetailInstanceTransforms(int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method ComputeDetailInstanceTransforms_Injected, addr 0x18230f220, size 0x10, virtual false, abstract: false, final false
static inline void ComputeDetailInstanceTransforms_Injected(::System::IntPtr  _unity_self, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method CopyActiveRenderTextureToHeightmap, addr 0x18230f320, size 0x280, virtual false, abstract: false, final false
inline void CopyActiveRenderTextureToHeightmap(::UnityEngine::RectInt  sourceRect, ::UnityEngine::Vector2Int  dest, ::UnityEngine::TerrainHeightmapSyncControl  syncControl) ;

/// @brief Method CopyActiveRenderTextureToTexture, addr 0x18230f5a0, size 0x760, virtual false, abstract: false, final false
inline void CopyActiveRenderTextureToTexture(::StringW  textureName, int32_t  textureIndex, ::UnityEngine::RectInt  sourceRect, ::UnityEngine::Vector2Int  dest, bool  allowDelayedCPUSync) ;

/// @brief Method GetAlphamapResolutionInternal, addr 0x18230fd10, size 0x30, virtual false, abstract: false, final false
inline float_t GetAlphamapResolutionInternal() ;

/// @brief Method GetAlphamapResolutionInternal_Injected, addr 0x18230fd00, size 0x10, virtual false, abstract: false, final false
static inline float_t GetAlphamapResolutionInternal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetAlphamapTexture, addr 0x18230fd50, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetAlphamapTexture(int32_t  index) ;

/// @brief Method GetAlphamapTexture_Injected, addr 0x18230fd40, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetAlphamapTexture_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetAlphamaps, addr 0x18230fd90, size 0x90, virtual false, abstract: false, final false
inline ::System::Object* GetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method GetBoundaryValue, addr 0x18230fe20, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType  type) ;

/// @brief Method GetCompressedHolesTexture, addr 0x18230fe40, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetCompressedHolesTexture() ;

/// @brief Method GetCompressedHolesTexture_Injected, addr 0x18230fe30, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetCompressedHolesTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetDetailLayer, addr 0x18230fe90, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* GetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height, int32_t  layer) ;

/// @brief Method GetDetailLayer_Injected, addr 0x18230fe80, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* GetDetailLayer_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height, int32_t  layer) ;

/// @brief Method GetHeights, addr 0x18230fee0, size 0x100, virtual false, abstract: false, final false
inline ::System::Object* GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method GetHoles, addr 0x182310030, size 0x100, virtual false, abstract: false, final false
inline ::System::Object* GetHoles(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method GetHolesTexture, addr 0x18230fff0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetHolesTexture() ;

/// @brief Method GetHolesTexture_Injected, addr 0x18230ffe0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetHolesTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetInterpolatedNormal, addr 0x182310140, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetInterpolatedNormal(float_t  x, float_t  y) ;

/// @brief Method GetInterpolatedNormal_Injected, addr 0x182310130, size 0x10, virtual false, abstract: false, final false
static inline void GetInterpolatedNormal_Injected(::System::IntPtr  _unity_self, float_t  x, float_t  y, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetTreeInstance, addr 0x1823101a0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::TreeInstance GetTreeInstance(int32_t  index) ;

/// @brief Method Internal_ClearAlphamapDirtyRegion, addr 0x182310250, size 0x30, virtual false, abstract: false, final false
inline void Internal_ClearAlphamapDirtyRegion(int32_t  alphamapIndex) ;

/// @brief Method Internal_ClearAlphamapDirtyRegion_Injected, addr 0x182310240, size 0x10, virtual false, abstract: false, final false
static inline void Internal_ClearAlphamapDirtyRegion_Injected(::System::IntPtr  _unity_self, int32_t  alphamapIndex) ;

/// @brief Method Internal_CopyActiveRenderTextureToHeightmap, addr 0x182310290, size 0x60, virtual false, abstract: false, final false
inline void Internal_CopyActiveRenderTextureToHeightmap(::UnityEngine::RectInt  rect, int32_t  destX, int32_t  destY, ::UnityEngine::TerrainHeightmapSyncControl  syncControl) ;

/// @brief Method Internal_CopyActiveRenderTextureToHeightmap_Injected, addr 0x182310280, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CopyActiveRenderTextureToHeightmap_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RectInt>  rect, int32_t  destX, int32_t  destY, ::UnityEngine::TerrainHeightmapSyncControl  syncControl) ;

/// @brief Method Internal_CopyActiveRenderTextureToHoles, addr 0x182310300, size 0x60, virtual false, abstract: false, final false
inline void Internal_CopyActiveRenderTextureToHoles(::UnityEngine::RectInt  rect, int32_t  destX, int32_t  destY, bool  allowDelayedCPUSync) ;

/// @brief Method Internal_CopyActiveRenderTextureToHoles_Injected, addr 0x1823102f0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CopyActiveRenderTextureToHoles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RectInt>  rect, int32_t  destX, int32_t  destY, bool  allowDelayedCPUSync) ;

/// @brief Method Internal_Create, addr 0x182310360, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::TerrainData*  terrainData) ;

/// @brief Method Internal_GetAlphamaps, addr 0x182310380, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* Internal_GetAlphamaps(int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetAlphamaps_Injected, addr 0x182310370, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* Internal_GetAlphamaps_Injected(::System::IntPtr  _unity_self, int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetHeights, addr 0x1823103e0, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* Internal_GetHeights(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetHeights_Injected, addr 0x1823103d0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* Internal_GetHeights_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetHoles, addr 0x182310440, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* Internal_GetHoles(int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetHoles_Injected, addr 0x182310430, size 0x10, virtual false, abstract: false, final false
static inline ::System::Object* Internal_GetHoles_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  width, int32_t  height) ;

/// @brief Method Internal_GetTreeInstance, addr 0x1823104a0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::TreeInstance Internal_GetTreeInstance(int32_t  index) ;

/// @brief Method Internal_GetTreeInstance_Injected, addr 0x182310490, size 0x10, virtual false, abstract: false, final false
static inline void Internal_GetTreeInstance_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::TreeInstance>  ret) ;

/// @brief Method Internal_GetTreeInstances, addr 0x182310510, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreeInstance> Internal_GetTreeInstances() ;

/// @brief Method Internal_GetTreeInstances_Injected, addr 0x182310500, size 0x10, virtual false, abstract: false, final false
static inline void Internal_GetTreeInstances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method Internal_MarkAlphamapDirtyRegion, addr 0x1823105c0, size 0x50, virtual false, abstract: false, final false
inline void Internal_MarkAlphamapDirtyRegion(int32_t  alphamapIndex, int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method Internal_MarkAlphamapDirtyRegion_Injected, addr 0x1823105b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_MarkAlphamapDirtyRegion_Injected(::System::IntPtr  _unity_self, int32_t  alphamapIndex, int32_t  x, int32_t  y, int32_t  width, int32_t  height) ;

/// @brief Method Internal_SetDetailLayer, addr 0x182310620, size 0xe0, virtual false, abstract: false, final false
inline void Internal_SetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::System::Object*  data) ;

/// @brief Method Internal_SetDetailLayer_Injected, addr 0x182310610, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetDetailLayer_Injected(::System::IntPtr  _unity_self, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data) ;

/// @brief Method Internal_SyncAlphamaps, addr 0x182310710, size 0x30, virtual false, abstract: false, final false
inline void Internal_SyncAlphamaps() ;

/// @brief Method Internal_SyncAlphamaps_Injected, addr 0x182310700, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SyncAlphamaps_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Internal_SyncHoles, addr 0x182310750, size 0x30, virtual false, abstract: false, final false
inline void Internal_SyncHoles() ;

/// @brief Method Internal_SyncHoles_Injected, addr 0x182310740, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SyncHoles_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method IsHolesTextureCompressed, addr 0x182310790, size 0x30, virtual false, abstract: false, final false
inline bool IsHolesTextureCompressed() ;

/// @brief Method IsHolesTextureCompressed_Injected, addr 0x182310780, size 0x10, virtual false, abstract: false, final false
static inline bool IsHolesTextureCompressed_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::TerrainData* New_ctor() ;

/// @brief Method RemoveTreePrototype, addr 0x1823107d0, size 0x30, virtual false, abstract: false, final false
inline void RemoveTreePrototype(int32_t  index) ;

/// @brief Method RemoveTreePrototype_Injected, addr 0x1823107c0, size 0x10, virtual false, abstract: false, final false
static inline void RemoveTreePrototype_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method SetDetailLayer, addr 0x182310800, size 0x110, virtual false, abstract: false, final false
inline void SetDetailLayer(int32_t  xBase, int32_t  yBase, int32_t  layer, ::System::Object*  details) ;

/// @brief Method SetTreeInstances, addr 0x182310920, size 0xc0, virtual false, abstract: false, final false
inline void SetTreeInstances(::ArrayW<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap) ;

/// @brief Method SetTreeInstances_Injected, addr 0x182310910, size 0x10, virtual false, abstract: false, final false
static inline void SetTreeInstances_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, bool  snapToHeightmap) ;

/// @brief Method SyncHeightmap, addr 0x1823109f0, size 0x30, virtual false, abstract: false, final false
inline void SyncHeightmap() ;

/// @brief Method SyncHeightmap_Injected, addr 0x1823109e0, size 0x10, virtual false, abstract: false, final false
static inline void SyncHeightmap_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SyncTexture, addr 0x182310a20, size 0x140, virtual false, abstract: false, final false
inline void SyncTexture(::StringW  textureName) ;

/// @brief Method .ctor, addr 0x182310360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_k_MaximumAlphamapResolution() ;

static inline int32_t getStaticF_k_MaximumBaseMapResolution() ;

static inline int32_t getStaticF_k_MaximumDetailPatchCount() ;

static inline int32_t getStaticF_k_MaximumDetailResolutionPerPatch() ;

static inline int32_t getStaticF_k_MaximumResolution() ;

static inline int32_t getStaticF_k_MinimumAlphamapResolution() ;

static inline int32_t getStaticF_k_MinimumBaseMapResolution() ;

static inline int32_t getStaticF_k_MinimumDetailResolutionPerPatch() ;

/// @brief Method get_AlphamapTextureName, addr 0x182310c70, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_AlphamapTextureName() ;

/// @brief Method get_HolesTextureName, addr 0x182310c80, size 0x10, virtual false, abstract: false, final false
static inline ::StringW get_HolesTextureName() ;

/// @brief Method get_Internal_alphamapResolution, addr 0x182310ca0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_Internal_alphamapResolution() ;

/// @brief Method get_Internal_alphamapResolution_Injected, addr 0x182310c90, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_Internal_alphamapResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_SupportsCopyTextureBetweenRTAndTexture, addr 0x182310cd0, size 0x20, virtual false, abstract: false, final false
static inline bool get_SupportsCopyTextureBetweenRTAndTexture() ;

/// @brief Method get_alphamapHeight, addr 0x182310ca0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_alphamapHeight() ;

/// @brief Method get_alphamapResolution, addr 0x182310ca0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_alphamapResolution() ;

/// @brief Method get_alphamapTextureCount, addr 0x182310d00, size 0x30, virtual false, abstract: false, final false
inline int32_t get_alphamapTextureCount() ;

/// @brief Method get_alphamapTextureCount_Injected, addr 0x182310cf0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_alphamapTextureCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_alphamapTextures, addr 0x182310d30, size 0xc0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>> get_alphamapTextures() ;

/// @brief Method get_alphamapWidth, addr 0x182310ca0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_alphamapWidth() ;

/// @brief Method get_bounds, addr 0x182310e00, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x182310df0, size 0x10, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_detailHeight, addr 0x182310e50, size 0x30, virtual false, abstract: false, final false
inline int32_t get_detailHeight() ;

/// @brief Method get_detailHeight_Injected, addr 0x182310e40, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_detailHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailPatchCount, addr 0x182310e90, size 0x30, virtual false, abstract: false, final false
inline int32_t get_detailPatchCount() ;

/// @brief Method get_detailPatchCount_Injected, addr 0x182310e80, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_detailPatchCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailPrototypes, addr 0x182310ed0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::DetailPrototype*> get_detailPrototypes() ;

/// @brief Method get_detailPrototypes_Injected, addr 0x182310ec0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::DetailPrototype*> get_detailPrototypes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailResolution, addr 0x182310f10, size 0x30, virtual false, abstract: false, final false
inline int32_t get_detailResolution() ;

/// @brief Method get_detailResolution_Injected, addr 0x182310f00, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_detailResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailScatterMode, addr 0x182310f50, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::DetailScatterMode get_detailScatterMode() ;

/// @brief Method get_detailScatterMode_Injected, addr 0x182310f40, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::DetailScatterMode get_detailScatterMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailWidth, addr 0x182310f90, size 0x30, virtual false, abstract: false, final false
inline int32_t get_detailWidth() ;

/// @brief Method get_detailWidth_Injected, addr 0x182310f80, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_detailWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_heightmapResolution, addr 0x182310fc0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_heightmapResolution() ;

/// @brief Method get_heightmapScale, addr 0x182311000, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_heightmapScale() ;

/// @brief Method get_heightmapScale_Injected, addr 0x182310ff0, size 0x10, virtual false, abstract: false, final false
static inline void get_heightmapScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_heightmapTexture, addr 0x182311050, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_heightmapTexture() ;

/// @brief Method get_heightmapTexture_Injected, addr 0x182311040, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_heightmapTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_holesResolution, addr 0x182311090, size 0x30, virtual false, abstract: false, final false
inline int32_t get_holesResolution() ;

/// @brief Method get_holesTexture, addr 0x1823110c0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_holesTexture() ;

/// @brief Method get_internalHeightmapResolution, addr 0x182310fc0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_internalHeightmapResolution() ;

/// @brief Method get_internalHeightmapResolution_Injected, addr 0x182311160, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_internalHeightmapResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_size, addr 0x182311180, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

/// @brief Method get_size_Injected, addr 0x182311170, size 0x10, virtual false, abstract: false, final false
static inline void get_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_terrainLayers, addr 0x1823111d0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> get_terrainLayers() ;

/// @brief Method get_terrainLayers_Injected, addr 0x1823111c0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::TerrainLayer>> get_terrainLayers_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_treeInstanceCount, addr 0x182311210, size 0x30, virtual false, abstract: false, final false
inline int32_t get_treeInstanceCount() ;

/// @brief Method get_treeInstanceCount_Injected, addr 0x182311200, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_treeInstanceCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_treeInstances, addr 0x182311240, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreeInstance> get_treeInstances() ;

/// @brief Method get_treePrototypes, addr 0x182311260, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes() ;

/// @brief Method get_treePrototypes_Injected, addr 0x182311250, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::TreePrototype*> get_treePrototypes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_users, addr 0x1823112a0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_users() ;

/// @brief Method get_users_Injected, addr 0x182311290, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_users_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_k_MaximumAlphamapResolution(int32_t  value) ;

static inline void setStaticF_k_MaximumBaseMapResolution(int32_t  value) ;

static inline void setStaticF_k_MaximumDetailPatchCount(int32_t  value) ;

static inline void setStaticF_k_MaximumDetailResolutionPerPatch(int32_t  value) ;

static inline void setStaticF_k_MaximumResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumAlphamapResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumBaseMapResolution(int32_t  value) ;

static inline void setStaticF_k_MinimumDetailResolutionPerPatch(int32_t  value) ;

/// @brief Method set_detailPrototypes, addr 0x1823112e0, size 0x30, virtual false, abstract: false, final false
inline void set_detailPrototypes(::ArrayW<::UnityEngine::DetailPrototype*>  value) ;

/// @brief Method set_detailPrototypes_Injected, addr 0x1823112d0, size 0x10, virtual false, abstract: false, final false
static inline void set_detailPrototypes_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::DetailPrototype*>  value) ;

/// @brief Method set_terrainLayers, addr 0x182311320, size 0x30, virtual false, abstract: false, final false
inline void set_terrainLayers(::ArrayW<::UnityEngine::TerrainLayer*>  value) ;

/// @brief Method set_terrainLayers_Injected, addr 0x182311310, size 0x10, virtual false, abstract: false, final false
static inline void set_terrainLayers_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::TerrainLayer*>  value) ;

/// @brief Method set_treePrototypes, addr 0x182311360, size 0x30, virtual false, abstract: false, final false
inline void set_treePrototypes(::ArrayW<::UnityEngine::TreePrototype*>  value) ;

/// @brief Method set_treePrototypes_Injected, addr 0x182311350, size 0x10, virtual false, abstract: false, final false
static inline void set_treePrototypes_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::TreePrototype*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainData(TerrainData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainData(TerrainData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20329};

/// @brief Field k_DetailDatabasePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DetailDatabasePrefix{u"GetDetailDatabase()."};

/// @brief Field k_HeightmapPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HeightmapPrefix{u"GetHeightmap()."};

/// @brief Field k_ScriptingInterfaceName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScriptingInterfaceName{u"TerrainDataScriptingInterface"};

/// @brief Field k_ScriptingInterfacePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScriptingInterfacePrefix{u"TerrainDataScriptingInterface::"};

/// @brief Field k_SplatDatabasePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SplatDatabasePrefix{u"GetSplatDatabase()."};

/// @brief Field k_TreeDatabasePrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TreeDatabasePrefix{u"GetTreeDatabase()."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TerrainData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
