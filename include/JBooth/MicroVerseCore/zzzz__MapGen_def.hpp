#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MapGen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapGen)
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class MapGen;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::MapGen*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MapGen*, "JBooth.MicroVerseCore", "MapGen");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MapGen
class CORDL_TYPE MapGen : public ::System::Object {
public:
// Declarations
/// @brief Field _Height, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Height, put=setStaticF__Height)) int32_t  _Height;

/// @brief Field _HeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightMap, put=setStaticF__HeightMap)) int32_t  _HeightMap;

/// @brief Field _Heightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap, put=setStaticF__Heightmap)) int32_t  _Heightmap;

/// @brief Field _Heightmap_NX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap_NX, put=setStaticF__Heightmap_NX)) int32_t  _Heightmap_NX;

/// @brief Field _Heightmap_NY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap_NY, put=setStaticF__Heightmap_NY)) int32_t  _Heightmap_NY;

/// @brief Field _Heightmap_PX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap_PX, put=setStaticF__Heightmap_PX)) int32_t  _Heightmap_PX;

/// @brief Field _Heightmap_PY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap_PY, put=setStaticF__Heightmap_PY)) int32_t  _Heightmap_PY;

/// @brief Field _OutFlow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutFlow, put=setStaticF__OutFlow)) int32_t  _OutFlow;

/// @brief Field _VelocityMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VelocityMap, put=setStaticF__VelocityMap)) int32_t  _VelocityMap;

/// @brief Field _WaterMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaterMap, put=setStaticF__WaterMap)) int32_t  _WaterMap;

/// @brief Field _Width, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Width, put=setStaticF__Width)) int32_t  _Width;

/// @brief Field curvatureShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_curvatureShader, put=setStaticF_curvatureShader)) ::UnityW<::UnityEngine::Shader>  curvatureShader;

/// @brief Field flowShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_flowShader, put=setStaticF_flowShader)) ::UnityW<::UnityEngine::ComputeShader>  flowShader;

/// @brief Field normalShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_normalShader, put=setStaticF_normalShader)) ::UnityW<::UnityEngine::Shader>  normalShader;

/// @brief Method GenerateCurvatureMap, addr 0x181430940, size 0x3d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GenerateCurvatureMap(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  normals, int32_t  width, int32_t  height) ;

/// @brief Method GenerateFlowMap, addr 0x181430d10, size 0x6f0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GenerateFlowMap(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  heights) ;

/// @brief Method GenerateNormalMap, addr 0x181431400, size 0x490, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GenerateNormalMap(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  heightMaps, int32_t  width, int32_t  height) ;

static inline ::JBooth::MicroVerseCore::MapGen* New_ctor() ;

/// @brief Method NineCombine, addr 0x181432f30, size 0x8d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> NineCombine(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  tempRenderData, int32_t  borderPixels) ;

/// @brief Method NineCombineCurrentObjectMask, addr 0x181431890, size 0xb50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> NineCombineCurrentObjectMask(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  tempRenderData, int32_t  borderPixels) ;

/// @brief Method NineCombineCurrentTreeMask, addr 0x1814323e0, size 0xb50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> NineCombineCurrentTreeMask(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  tempRenderData, int32_t  borderPixels) ;

/// @brief Method QuadCombine, addr 0x181433800, size 0x4a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> QuadCombine(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  tempRenderData, int32_t  borderPixels) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Height() ;

static inline int32_t getStaticF__HeightMap() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__Heightmap_NX() ;

static inline int32_t getStaticF__Heightmap_NY() ;

static inline int32_t getStaticF__Heightmap_PX() ;

static inline int32_t getStaticF__Heightmap_PY() ;

static inline int32_t getStaticF__OutFlow() ;

static inline int32_t getStaticF__VelocityMap() ;

static inline int32_t getStaticF__WaterMap() ;

static inline int32_t getStaticF__Width() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_curvatureShader() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_flowShader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_normalShader() ;

static inline void setStaticF__Height(int32_t  value) ;

static inline void setStaticF__HeightMap(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__Heightmap_NX(int32_t  value) ;

static inline void setStaticF__Heightmap_NY(int32_t  value) ;

static inline void setStaticF__Heightmap_PX(int32_t  value) ;

static inline void setStaticF__Heightmap_PY(int32_t  value) ;

static inline void setStaticF__OutFlow(int32_t  value) ;

static inline void setStaticF__VelocityMap(int32_t  value) ;

static inline void setStaticF__WaterMap(int32_t  value) ;

static inline void setStaticF__Width(int32_t  value) ;

static inline void setStaticF_curvatureShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_flowShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_normalShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapGen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapGen", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MapGen(MapGen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapGen", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapGen(MapGen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::MapGen) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
