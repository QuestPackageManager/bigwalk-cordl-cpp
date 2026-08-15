#pragma once
// IWYU pragma private; include "UnityEngine/Terrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Terrain)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Terrain;
}
// Write type traits
MARK_REF_T(::UnityEngine::Terrain*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Terrain
class CORDL_TYPE Terrain : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_allowAutoConnect)) bool  allowAutoConnect;

 __declspec(property(get=get_bottomNeighbor)) ::UnityW<::UnityEngine::Terrain>  bottomNeighbor;

 __declspec(property(get=get_detailObjectDensity, put=set_detailObjectDensity)) float_t  detailObjectDensity;

 __declspec(property(get=get_detailObjectDistance, put=set_detailObjectDistance)) float_t  detailObjectDistance;

 __declspec(property(put=set_drawHeightmap)) bool  drawHeightmap;

 __declspec(property(get=get_drawInstanced, put=set_drawInstanced)) bool  drawInstanced;

 __declspec(property(put=set_drawTreesAndFoliage)) bool  drawTreesAndFoliage;

 __declspec(property(get=get_groupingID)) int32_t  groupingID;

 __declspec(property(get=get_leftNeighbor)) ::UnityW<::UnityEngine::Terrain>  leftNeighbor;

 __declspec(property(get=get_materialTemplate, put=set_materialTemplate)) ::UnityW<::UnityEngine::Material>  materialTemplate;

 __declspec(property(get=get_normalmapTexture)) ::UnityW<::UnityEngine::RenderTexture>  normalmapTexture;

 __declspec(property(get=get_patchBoundsMultiplier, put=set_patchBoundsMultiplier)) ::UnityEngine::Vector3  patchBoundsMultiplier;

 __declspec(property(get=get_rightNeighbor)) ::UnityW<::UnityEngine::Terrain>  rightNeighbor;

 __declspec(property(get=get_terrainData)) ::UnityW<::UnityEngine::TerrainData>  terrainData;

 __declspec(property(get=get_topNeighbor)) ::UnityW<::UnityEngine::Terrain>  topNeighbor;

 __declspec(property(get=get_treeDistance)) float_t  treeDistance;

/// @brief Method Flush, addr 0x182312ee0, size 0x30, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method Flush_Injected, addr 0x182312ed0, size 0x10, virtual false, abstract: false, final false
static inline void Flush_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetActiveTerrains, addr 0x182312f10, size 0x30, virtual false, abstract: false, final false
static inline void GetActiveTerrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  terrainList) ;

/// @brief Method GetPosition, addr 0x182312f50, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition() ;

/// @brief Method GetPosition_Injected, addr 0x182312f40, size 0x10, virtual false, abstract: false, final false
static inline void GetPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method Internal_FillActiveTerrainList, addr 0x182312f10, size 0x30, virtual false, abstract: false, final false
static inline void Internal_FillActiveTerrainList(::System::Object*  terrainList) ;

/// @brief Method Internal_FillActiveTerrainList_Injected, addr 0x182312f90, size 0x10, virtual false, abstract: false, final false
static inline void Internal_FillActiveTerrainList_Injected(::System::Object*  terrainList) ;

static inline ::UnityEngine::Terrain* New_ctor() ;

/// @brief Method SampleHeight, addr 0x182312fb0, size 0x40, virtual false, abstract: false, final false
inline float_t SampleHeight(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method SampleHeight_Injected, addr 0x182312fa0, size 0x10, virtual false, abstract: false, final false
static inline float_t SampleHeight_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  worldPosition) ;

/// @brief Method SetNeighbors, addr 0x182313000, size 0x90, virtual false, abstract: false, final false
inline void SetNeighbors(::UnityEngine::Terrain*  left, ::UnityEngine::Terrain*  top, ::UnityEngine::Terrain*  right, ::UnityEngine::Terrain*  bottom) ;

/// @brief Method SetNeighbors_Injected, addr 0x182312ff0, size 0x10, virtual false, abstract: false, final false
static inline void SetNeighbors_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  left, ::System::IntPtr  top, ::System::IntPtr  right, ::System::IntPtr  bottom) ;

/// @brief Method SetSplatMaterialPropertyBlock, addr 0x1823130a0, size 0x50, virtual false, abstract: false, final false
inline void SetSplatMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method SetSplatMaterialPropertyBlock_Injected, addr 0x182313090, size 0x10, virtual false, abstract: false, final false
static inline void SetSplatMaterialPropertyBlock_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  properties) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_activeTerrains, addr 0x1823130f0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> get_activeTerrains() ;

/// @brief Method get_allowAutoConnect, addr 0x182313110, size 0x30, virtual false, abstract: false, final false
inline bool get_allowAutoConnect() ;

/// @brief Method get_allowAutoConnect_Injected, addr 0x182313100, size 0x10, virtual false, abstract: false, final false
static inline bool get_allowAutoConnect_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bottomNeighbor, addr 0x182313150, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> get_bottomNeighbor() ;

/// @brief Method get_bottomNeighbor_Injected, addr 0x182313140, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_bottomNeighbor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailObjectDensity, addr 0x1823131a0, size 0x30, virtual false, abstract: false, final false
inline float_t get_detailObjectDensity() ;

/// @brief Method get_detailObjectDensity_Injected, addr 0x182313190, size 0x10, virtual false, abstract: false, final false
static inline float_t get_detailObjectDensity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_detailObjectDistance, addr 0x1823131e0, size 0x30, virtual false, abstract: false, final false
inline float_t get_detailObjectDistance() ;

/// @brief Method get_detailObjectDistance_Injected, addr 0x1823131d0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_detailObjectDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_drawInstanced, addr 0x182313220, size 0x30, virtual false, abstract: false, final false
inline bool get_drawInstanced() ;

/// @brief Method get_drawInstanced_Injected, addr 0x182313210, size 0x10, virtual false, abstract: false, final false
static inline bool get_drawInstanced_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_groupingID, addr 0x182313260, size 0x30, virtual false, abstract: false, final false
inline int32_t get_groupingID() ;

/// @brief Method get_groupingID_Injected, addr 0x182313250, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_groupingID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_holesFormat, addr 0x182313290, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_holesFormat() ;

/// @brief Method get_holesRenderTextureFormat, addr 0x1823132a0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat get_holesRenderTextureFormat() ;

/// @brief Method get_leftNeighbor, addr 0x1823132d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> get_leftNeighbor() ;

/// @brief Method get_leftNeighbor_Injected, addr 0x1823132c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_leftNeighbor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_materialTemplate, addr 0x182313320, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_materialTemplate() ;

/// @brief Method get_materialTemplate_Injected, addr 0x182313310, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_materialTemplate_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_normalmapTexture, addr 0x182313370, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_normalmapTexture() ;

/// @brief Method get_normalmapTexture_Injected, addr 0x182313360, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_normalmapTexture_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_patchBoundsMultiplier, addr 0x1823133c0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_patchBoundsMultiplier() ;

/// @brief Method get_patchBoundsMultiplier_Injected, addr 0x1823133b0, size 0x10, virtual false, abstract: false, final false
static inline void get_patchBoundsMultiplier_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rightNeighbor, addr 0x182313410, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> get_rightNeighbor() ;

/// @brief Method get_rightNeighbor_Injected, addr 0x182313400, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_rightNeighbor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_terrainData, addr 0x182313460, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TerrainData> get_terrainData() ;

/// @brief Method get_terrainData_Injected, addr 0x182313450, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_terrainData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_topNeighbor, addr 0x1823134b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> get_topNeighbor() ;

/// @brief Method get_topNeighbor_Injected, addr 0x1823134a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_topNeighbor_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_treeDistance, addr 0x182313500, size 0x30, virtual false, abstract: false, final false
inline float_t get_treeDistance() ;

/// @brief Method get_treeDistance_Injected, addr 0x1823134f0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_treeDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_detailObjectDensity, addr 0x182313540, size 0x40, virtual false, abstract: false, final false
inline void set_detailObjectDensity(float_t  value) ;

/// @brief Method set_detailObjectDensity_Injected, addr 0x182313530, size 0x10, virtual false, abstract: false, final false
static inline void set_detailObjectDensity_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_detailObjectDistance, addr 0x182313590, size 0x40, virtual false, abstract: false, final false
inline void set_detailObjectDistance(float_t  value) ;

/// @brief Method set_detailObjectDistance_Injected, addr 0x182313580, size 0x10, virtual false, abstract: false, final false
static inline void set_detailObjectDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_drawHeightmap, addr 0x1823135e0, size 0x30, virtual false, abstract: false, final false
inline void set_drawHeightmap(bool  value) ;

/// @brief Method set_drawHeightmap_Injected, addr 0x1823135d0, size 0x10, virtual false, abstract: false, final false
static inline void set_drawHeightmap_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_drawInstanced, addr 0x182313620, size 0x30, virtual false, abstract: false, final false
inline void set_drawInstanced(bool  value) ;

/// @brief Method set_drawInstanced_Injected, addr 0x182313610, size 0x10, virtual false, abstract: false, final false
static inline void set_drawInstanced_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_drawTreesAndFoliage, addr 0x182313660, size 0x30, virtual false, abstract: false, final false
inline void set_drawTreesAndFoliage(bool  value) ;

/// @brief Method set_drawTreesAndFoliage_Injected, addr 0x182313650, size 0x10, virtual false, abstract: false, final false
static inline void set_drawTreesAndFoliage_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_materialTemplate, addr 0x1823136a0, size 0x50, virtual false, abstract: false, final false
inline void set_materialTemplate(::UnityEngine::Material*  value) ;

/// @brief Method set_materialTemplate_Injected, addr 0x182313690, size 0x10, virtual false, abstract: false, final false
static inline void set_materialTemplate_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_patchBoundsMultiplier, addr 0x182313700, size 0x30, virtual false, abstract: false, final false
inline void set_patchBoundsMultiplier(::UnityEngine::Vector3  value) ;

/// @brief Method set_patchBoundsMultiplier_Injected, addr 0x1823136f0, size 0x10, virtual false, abstract: false, final false
static inline void set_patchBoundsMultiplier_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Terrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Terrain(Terrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Terrain(Terrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Terrain) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
