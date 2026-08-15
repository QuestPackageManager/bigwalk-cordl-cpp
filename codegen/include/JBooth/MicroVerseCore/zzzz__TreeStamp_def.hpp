#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreeStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TreeStamp)
namespace JBooth::MicroVerseCore {
class DetailData;
}
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ISpawner;
}
namespace JBooth::MicroVerseCore {
class ITextureModifier;
}
namespace JBooth::MicroVerseCore {
class ITreeModifier;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace JBooth::MicroVerseCore {
class TextureData;
}
namespace JBooth::MicroVerseCore {
class TreeData;
}
namespace JBooth::MicroVerseCore {
class TreeJobHolder;
}
namespace JBooth::MicroVerseCore {
class TreePrototypeSerializable;
}
namespace JBooth::MicroVerseCore {
struct TreeStamp_Randomization;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
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
// Forward declare root types
namespace JBooth::MicroVerseCore {
class TreeStamp;
}
namespace JBooth::MicroVerseCore {
struct TreeStamp_Randomization;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::TreeStamp*);
MARK_VAL_T(::JBooth::MicroVerseCore::TreeStamp_Randomization);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::TreeStamp*, "JBooth.MicroVerseCore", "TreeStamp");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::TreeStamp_Randomization, "JBooth.MicroVerseCore", "TreeStamp/Randomization");
// Dependencies UnityEngine.Vector2
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.TreeStamp/Randomization
struct CORDL_TYPE TreeStamp_Randomization {
public:
// Declarations
 __declspec(property(get=get_densityByWeight, put=set_densityByWeight)) bool  densityByWeight;

 __declspec(property(get=get_disabled, put=set_disabled)) bool  disabled;

 __declspec(property(get=get_lockScaleWidthHeight, put=set_lockScaleWidthHeight)) bool  lockScaleWidthHeight;

 __declspec(property(get=get_mapHeightFilterToScale, put=set_mapHeightFilterToScale)) bool  mapHeightFilterToScale;

 __declspec(property(get=get_mapWeightToScale, put=set_mapWeightToScale)) bool  mapWeightToScale;

 __declspec(property(get=get_randomRotation, put=set_randomRotation)) bool  randomRotation;

 __declspec(property(get=get_randomScale, put=set_randomScale)) bool  randomScale;

/// @brief Method get_densityByWeight, addr 0x18141e700, size 0x20, virtual false, abstract: false, final false
inline bool get_densityByWeight() ;

/// @brief Method get_disabled, addr 0x18141e720, size 0x20, virtual false, abstract: false, final false
inline bool get_disabled() ;

/// @brief Method get_lockScaleWidthHeight, addr 0x18141e740, size 0x20, virtual false, abstract: false, final false
inline bool get_lockScaleWidthHeight() ;

/// @brief Method get_mapHeightFilterToScale, addr 0x18141e760, size 0x20, virtual false, abstract: false, final false
inline bool get_mapHeightFilterToScale() ;

/// @brief Method get_mapWeightToScale, addr 0x18141e780, size 0x20, virtual false, abstract: false, final false
inline bool get_mapWeightToScale() ;

/// @brief Method get_randomRotation, addr 0x18141e7a0, size 0x20, virtual false, abstract: false, final false
inline bool get_randomRotation() ;

/// @brief Method get_randomScale, addr 0x18141e7c0, size 0x20, virtual false, abstract: false, final false
inline bool get_randomScale() ;

/// @brief Method set_densityByWeight, addr 0x18141e7e0, size 0x30, virtual false, abstract: false, final false
inline void set_densityByWeight(bool  value) ;

/// @brief Method set_disabled, addr 0x18141e810, size 0x30, virtual false, abstract: false, final false
inline void set_disabled(bool  value) ;

/// @brief Method set_lockScaleWidthHeight, addr 0x18141e840, size 0x30, virtual false, abstract: false, final false
inline void set_lockScaleWidthHeight(bool  value) ;

/// @brief Method set_mapHeightFilterToScale, addr 0x18141e870, size 0x30, virtual false, abstract: false, final false
inline void set_mapHeightFilterToScale(bool  value) ;

/// @brief Method set_mapWeightToScale, addr 0x18141e8a0, size 0x30, virtual false, abstract: false, final false
inline void set_mapWeightToScale(bool  value) ;

/// @brief Method set_randomRotation, addr 0x18141e8d0, size 0x30, virtual false, abstract: false, final false
inline void set_randomRotation(bool  value) ;

/// @brief Method set_randomScale, addr 0x18141e900, size 0x60, virtual false, abstract: false, final false
inline void set_randomScale(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TreeStamp_Randomization() ;

// Ctor Parameters [CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scaleHeightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "scaleWidthRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "sink", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scaleMultiplierAtBoundaries", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "weightRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TreeStamp_Randomization(float_t  weight, ::UnityEngine::Vector2  scaleHeightRange, ::UnityEngine::Vector2  scaleWidthRange, float_t  sink, float_t  scaleMultiplierAtBoundaries, ::UnityEngine::Vector2  weightRange, int32_t  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field weight, offset: 0x0, size: 0x4, def value: None
 float_t  weight;

/// @brief Field scaleHeightRange, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleHeightRange;

/// @brief Field scaleWidthRange, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  scaleWidthRange;

/// @brief Field sink, offset: 0x14, size: 0x4, def value: None
 float_t  sink;

/// @brief Field scaleMultiplierAtBoundaries, offset: 0x18, size: 0x4, def value: None
 float_t  scaleMultiplierAtBoundaries;

/// @brief Field weightRange, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  weightRange;

/// @brief Field flags, offset: 0x24, size: 0x4, def value: None
 int32_t  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, weight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, scaleHeightRange) == 0x4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, scaleWidthRange) == 0xc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, sink) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, scaleMultiplierAtBoundaries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, weightRange) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp_Randomization, flags) == 0x24, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::TreeStamp_Randomization) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Stamp, UnityEngine.RenderBuffer, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.TreeStamp
class CORDL_TYPE TreeStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using Randomization = ::JBooth::MicroVerseCore::TreeStamp_Randomization;

/// @brief Field _Amount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Amount, put=setStaticF__Amount)) int32_t  _Amount;

/// @brief Field _ClearLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearLayer, put=setStaticF__ClearLayer)) int32_t  _ClearLayer;

/// @brief Field _ClearMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearMask, put=setStaticF__ClearMask)) int32_t  _ClearMask;

/// @brief Field _Curvemap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Curvemap, put=setStaticF__Curvemap)) int32_t  _Curvemap;

/// @brief Field _Density, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Density, put=setStaticF__Density)) int32_t  _Density;

/// @brief Field _Disc, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Disc, put=setStaticF__Disc)) int32_t  _Disc;

/// @brief Field _DiscStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DiscStrength, put=setStaticF__DiscStrength)) int32_t  _DiscStrength;

/// @brief Field _Flowmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Flowmap, put=setStaticF__Flowmap)) int32_t  _Flowmap;

/// @brief Field _HeightOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightOffset, put=setStaticF__HeightOffset)) int32_t  _HeightOffset;

/// @brief Field _Heightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap, put=setStaticF__Heightmap)) int32_t  _Heightmap;

/// @brief Field _Index, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Index, put=setStaticF__Index)) int32_t  _Index;

/// @brief Field _IndexMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexMap, put=setStaticF__IndexMap)) int32_t  _IndexMap;

/// @brief Field _InstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceCount, put=setStaticF__InstanceCount)) int32_t  _InstanceCount;

/// @brief Field _MinHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MinHeight, put=setStaticF__MinHeight)) int32_t  _MinHeight;

/// @brief Field _ModWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ModWidth, put=setStaticF__ModWidth)) int32_t  _ModWidth;

/// @brief Field _Normalmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normalmap, put=setStaticF__Normalmap)) int32_t  _Normalmap;

/// @brief Field _NumTreeIndexes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NumTreeIndexes, put=setStaticF__NumTreeIndexes)) int32_t  _NumTreeIndexes;

/// @brief Field _PlacementMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementMask, put=setStaticF__PlacementMask)) int32_t  _PlacementMask;

/// @brief Field _RandomTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RandomTex, put=setStaticF__RandomTex)) int32_t  _RandomTex;

/// @brief Field _Randomizations, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Randomizations, put=setStaticF__Randomizations)) int32_t  _Randomizations;

/// @brief Field _RealHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealHeight, put=setStaticF__RealHeight)) int32_t  _RealHeight;

/// @brief Field _Seed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Seed, put=setStaticF__Seed)) int32_t  _Seed;

/// @brief Field _TerrainPixelCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainPixelCount, put=setStaticF__TerrainPixelCount)) int32_t  _TerrainPixelCount;

/// @brief Field _TextureLayerWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TextureLayerWeights, put=setStaticF__TextureLayerWeights)) int32_t  _TextureLayerWeights;

/// @brief Field _TotalWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TotalWeights, put=setStaticF__TotalWeights)) int32_t  _TotalWeights;

/// @brief Field _TreeSDF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TreeSDF, put=setStaticF__TreeSDF)) int32_t  _TreeSDF;

/// @brief Field _WeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightMap, put=setStaticF__WeightMap)) int32_t  _WeightMap;

/// @brief Field _Width, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Width, put=setStaticF__Width)) int32_t  _Width;

/// @brief Field _YCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__YCount, put=setStaticF__YCount)) int32_t  _YCount;

/// @brief Field _mrt, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__mrt, put=__cordl_internal_set__mrt)) ::ArrayW<::UnityEngine::RenderBuffer>  _mrt;

/// @brief Field applyFilteringToTextureMod, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyFilteringToTextureMod, put=__cordl_internal_set_applyFilteringToTextureMod)) bool  applyFilteringToTextureMod;

/// @brief Field density, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

/// @brief Field filterSet, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field heightModAmount, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightModAmount, put=__cordl_internal_set_heightModAmount)) float_t  heightModAmount;

/// @brief Field heightModMat, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightModMat, put=__cordl_internal_set_heightModMat)) ::UnityW<::UnityEngine::Material>  heightModMat;

/// @brief Field heightModWidth, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightModWidth, put=__cordl_internal_set_heightModWidth)) float_t  heightModWidth;

/// @brief Field layer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::UnityW<::UnityEngine::TerrainLayer>  layer;

/// @brief Field layerWeight, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerWeight, put=__cordl_internal_set_layerWeight)) float_t  layerWeight;

/// @brief Field layerWidth, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerWidth, put=__cordl_internal_set_layerWidth)) float_t  layerWidth;

/// @brief Field material, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field maxDistanceFromObject, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromObject, put=__cordl_internal_set_maxDistanceFromObject)) float_t  maxDistanceFromObject;

/// @brief Field maxDistanceFromParent, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromParent, put=__cordl_internal_set_maxDistanceFromParent)) float_t  maxDistanceFromParent;

/// @brief Field maxDistanceFromTree, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromTree, put=__cordl_internal_set_maxDistanceFromTree)) float_t  maxDistanceFromTree;

/// @brief Field minDistanceFromObject, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromObject, put=__cordl_internal_set_minDistanceFromObject)) float_t  minDistanceFromObject;

/// @brief Field minDistanceFromParent, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromParent, put=__cordl_internal_set_minDistanceFromParent)) float_t  minDistanceFromParent;

/// @brief Field minDistanceFromTree, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromTree, put=__cordl_internal_set_minDistanceFromTree)) float_t  minDistanceFromTree;

/// @brief Field minHeight, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHeight, put=__cordl_internal_set_minHeight)) float_t  minHeight;

/// @brief Field occludeOthers, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludeOthers, put=__cordl_internal_set_occludeOthers)) bool  occludeOthers;

/// @brief Field occludedByOthers, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludedByOthers, put=__cordl_internal_set_occludedByOthers)) bool  occludedByOthers;

/// @brief Field poissonDisk, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_poissonDisk, put=__cordl_internal_set_poissonDisk)) ::UnityW<::UnityEngine::Texture2D>  poissonDisk;

/// @brief Field poissonDiskStrength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_poissonDiskStrength, put=__cordl_internal_set_poissonDiskStrength)) float_t  poissonDiskStrength;

/// @brief Field posWeightRTs, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_posWeightRTs, put=__cordl_internal_set_posWeightRTs)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  posWeightRTs;

/// @brief Field prototypeIndexes, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypeIndexes, put=__cordl_internal_set_prototypeIndexes)) ::ArrayW<int32_t>  prototypeIndexes;

/// @brief Field prototypeMappings, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypeMappings, put=__cordl_internal_set_prototypeMappings)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>*  prototypeMappings;

/// @brief Field prototypes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototypes, put=__cordl_internal_set_prototypes)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  prototypes;

/// @brief Field randomTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_randomTexture, put=setStaticF_randomTexture)) ::UnityW<::UnityEngine::Texture2D>  randomTexture;

/// @brief Field randomizationBuffer, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomizationBuffer, put=__cordl_internal_set_randomizationBuffer)) ::UnityEngine::ComputeBuffer*  randomizationBuffer;

/// @brief Field randomizations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomizations, put=__cordl_internal_set_randomizations)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>*  randomizations;

/// @brief Field randomsRTs, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomsRTs, put=__cordl_internal_set_randomsRTs)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  randomsRTs;

/// @brief Field sdfClamp, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_sdfClamp, put=__cordl_internal_set_sdfClamp)) bool  sdfClamp;

/// @brief Field sdfs, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sdfs, put=__cordl_internal_set_sdfs)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  sdfs;

/// @brief Field seed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) uint32_t  seed;

/// @brief Field splatModMat, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_splatModMat, put=__cordl_internal_set_splatModMat)) ::UnityW<::UnityEngine::Material>  splatModMat;

/// @brief Field textureLayerWeights, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureLayerWeights, put=__cordl_internal_set_textureLayerWeights)) ::ArrayW<::UnityEngine::Vector4>  textureLayerWeights;

/// @brief Field treeStampShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_treeStampShader, put=setStaticF_treeStampShader)) ::UnityW<::UnityEngine::Shader>  treeStampShader;

/// @brief Field version, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITextureModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITreeModifier*() noexcept;

/// @brief Method ApplyDetailClear, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td) ;

/// @brief Method ApplyTextureStamp, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTreeClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td) ;

/// @brief Method ApplyTreeStamp, addr 0x181426eb0, size 0xa40, virtual true, abstract: false, final true
inline void ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x1814278f0, size 0xf0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x1814279e0, size 0x1a0, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x180322750, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetSDF, addr 0x181427b80, size 0x70, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method Initialize, addr 0x181427bf0, size 0x6e0, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqTerrainLayers, addr 0x1814282d0, size 0xa0, virtual true, abstract: false, final true
inline void InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes) ;

/// @brief Method InqTreePrototypes, addr 0x181428370, size 0x30, virtual true, abstract: false, final true
inline void InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  trees) ;

/// @brief Method NeedCurvatureMap, addr 0x1814283a0, size 0x30, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedDetailClear, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool NeedDetailClear() ;

/// @brief Method NeedFlowMap, addr 0x1814283d0, size 0x30, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

/// @brief Method NeedParentSDF, addr 0x181428400, size 0x20, virtual true, abstract: false, final true
inline bool NeedParentSDF() ;

/// @brief Method NeedSDF, addr 0x181428420, size 0x70, virtual true, abstract: false, final true
inline bool NeedSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0x181428490, size 0xa0, virtual true, abstract: false, final true
inline bool NeedToGenerateSDFForChilden() ;

/// @brief Method NeedTreeClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedTreeClear() ;

static inline ::JBooth::MicroVerseCore::TreeStamp* New_ctor() ;

/// @brief Method OccludesOthers, addr 0x1802e75b0, size 0x10, virtual true, abstract: false, final true
inline bool OccludesOthers() ;

/// @brief Method OnDestroy, addr 0x181428530, size 0x80, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1814285b0, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x181428700, size 0xe0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessTreeStamp, addr 0x1814287e0, size 0xb00, virtual true, abstract: false, final true
inline void ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Revision, addr 0x1814292e0, size 0xd0, virtual false, abstract: false, final false
inline void Revision() ;

/// @brief Method SetSDF, addr 0x1814293b0, size 0xc0, virtual true, abstract: false, final true
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method UsesOtherObjectSDF, addr 0x181429470, size 0x20, virtual true, abstract: false, final true
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0x18141cc00, size 0x20, virtual true, abstract: false, final true
inline bool UsesOtherTreeSDF() ;

constexpr ::ArrayW<::UnityEngine::RenderBuffer> const& __cordl_internal_get__mrt() const;

constexpr ::ArrayW<::UnityEngine::RenderBuffer>& __cordl_internal_get__mrt() ;

constexpr bool const& __cordl_internal_get_applyFilteringToTextureMod() const;

constexpr bool& __cordl_internal_get_applyFilteringToTextureMod() ;

constexpr float_t const& __cordl_internal_get_density() const;

constexpr float_t& __cordl_internal_get_density() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr float_t const& __cordl_internal_get_heightModAmount() const;

constexpr float_t& __cordl_internal_get_heightModAmount() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_heightModMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_heightModMat() ;

constexpr float_t const& __cordl_internal_get_heightModWidth() const;

constexpr float_t& __cordl_internal_get_heightModWidth() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_layer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_layer() ;

constexpr float_t const& __cordl_internal_get_layerWeight() const;

constexpr float_t& __cordl_internal_get_layerWeight() ;

constexpr float_t const& __cordl_internal_get_layerWidth() const;

constexpr float_t& __cordl_internal_get_layerWidth() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromObject() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromObject() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromParent() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromParent() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromTree() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromTree() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromObject() const;

constexpr float_t& __cordl_internal_get_minDistanceFromObject() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromParent() const;

constexpr float_t& __cordl_internal_get_minDistanceFromParent() ;

constexpr float_t const& __cordl_internal_get_minDistanceFromTree() const;

constexpr float_t& __cordl_internal_get_minDistanceFromTree() ;

constexpr float_t const& __cordl_internal_get_minHeight() const;

constexpr float_t& __cordl_internal_get_minHeight() ;

constexpr bool const& __cordl_internal_get_occludeOthers() const;

constexpr bool& __cordl_internal_get_occludeOthers() ;

constexpr bool const& __cordl_internal_get_occludedByOthers() const;

constexpr bool& __cordl_internal_get_occludedByOthers() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_poissonDisk() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_poissonDisk() ;

constexpr float_t const& __cordl_internal_get_poissonDiskStrength() const;

constexpr float_t& __cordl_internal_get_poissonDiskStrength() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_posWeightRTs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_posWeightRTs() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_prototypeIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_prototypeIndexes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>* const& __cordl_internal_get_prototypeMappings() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>*& __cordl_internal_get_prototypeMappings() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>* const& __cordl_internal_get_prototypes() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*& __cordl_internal_get_prototypes() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_randomizationBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_randomizationBuffer() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>* const& __cordl_internal_get_randomizations() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>*& __cordl_internal_get_randomizations() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_randomsRTs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_randomsRTs() ;

constexpr bool const& __cordl_internal_get_sdfClamp() const;

constexpr bool& __cordl_internal_get_sdfClamp() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_sdfs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_sdfs() ;

constexpr uint32_t const& __cordl_internal_get_seed() const;

constexpr uint32_t& __cordl_internal_get_seed() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_splatModMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_splatModMat() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_textureLayerWeights() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_textureLayerWeights() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set__mrt(::ArrayW<::UnityEngine::RenderBuffer>  value) ;

constexpr void __cordl_internal_set_applyFilteringToTextureMod(bool  value) ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_heightModAmount(float_t  value) ;

constexpr void __cordl_internal_set_heightModMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_heightModWidth(float_t  value) ;

constexpr void __cordl_internal_set_layer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_layerWeight(float_t  value) ;

constexpr void __cordl_internal_set_layerWidth(float_t  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_maxDistanceFromObject(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromParent(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromTree(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromObject(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromParent(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromTree(float_t  value) ;

constexpr void __cordl_internal_set_minHeight(float_t  value) ;

constexpr void __cordl_internal_set_occludeOthers(bool  value) ;

constexpr void __cordl_internal_set_occludedByOthers(bool  value) ;

constexpr void __cordl_internal_set_poissonDisk(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_poissonDiskStrength(float_t  value) ;

constexpr void __cordl_internal_set_posWeightRTs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_prototypeIndexes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_prototypeMappings(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>*  value) ;

constexpr void __cordl_internal_set_prototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  value) ;

constexpr void __cordl_internal_set_randomizationBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_randomizations(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>*  value) ;

constexpr void __cordl_internal_set_randomsRTs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_sdfClamp(bool  value) ;

constexpr void __cordl_internal_set_sdfs(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_seed(uint32_t  value) ;

constexpr void __cordl_internal_set_splatModMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_textureLayerWeights(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x181429860, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Amount() ;

static inline int32_t getStaticF__ClearLayer() ;

static inline int32_t getStaticF__ClearMask() ;

static inline int32_t getStaticF__Curvemap() ;

static inline int32_t getStaticF__Density() ;

static inline int32_t getStaticF__Disc() ;

static inline int32_t getStaticF__DiscStrength() ;

static inline int32_t getStaticF__Flowmap() ;

static inline int32_t getStaticF__HeightOffset() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__Index() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__InstanceCount() ;

static inline int32_t getStaticF__MinHeight() ;

static inline int32_t getStaticF__ModWidth() ;

static inline int32_t getStaticF__Normalmap() ;

static inline int32_t getStaticF__NumTreeIndexes() ;

static inline int32_t getStaticF__PlacementMask() ;

static inline int32_t getStaticF__RandomTex() ;

static inline int32_t getStaticF__Randomizations() ;

static inline int32_t getStaticF__RealHeight() ;

static inline int32_t getStaticF__Seed() ;

static inline int32_t getStaticF__TerrainPixelCount() ;

static inline int32_t getStaticF__TextureLayerWeights() ;

static inline int32_t getStaticF__TotalWeights() ;

static inline int32_t getStaticF__TreeSDF() ;

static inline int32_t getStaticF__WeightMap() ;

static inline int32_t getStaticF__Width() ;

static inline int32_t getStaticF__YCount() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_randomTexture() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_treeStampShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* i___JBooth__MicroVerseCore__ITextureModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* i___JBooth__MicroVerseCore__ITreeModifier() noexcept;

static inline void setStaticF__Amount(int32_t  value) ;

static inline void setStaticF__ClearLayer(int32_t  value) ;

static inline void setStaticF__ClearMask(int32_t  value) ;

static inline void setStaticF__Curvemap(int32_t  value) ;

static inline void setStaticF__Density(int32_t  value) ;

static inline void setStaticF__Disc(int32_t  value) ;

static inline void setStaticF__DiscStrength(int32_t  value) ;

static inline void setStaticF__Flowmap(int32_t  value) ;

static inline void setStaticF__HeightOffset(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__Index(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__InstanceCount(int32_t  value) ;

static inline void setStaticF__MinHeight(int32_t  value) ;

static inline void setStaticF__ModWidth(int32_t  value) ;

static inline void setStaticF__Normalmap(int32_t  value) ;

static inline void setStaticF__NumTreeIndexes(int32_t  value) ;

static inline void setStaticF__PlacementMask(int32_t  value) ;

static inline void setStaticF__RandomTex(int32_t  value) ;

static inline void setStaticF__Randomizations(int32_t  value) ;

static inline void setStaticF__RealHeight(int32_t  value) ;

static inline void setStaticF__Seed(int32_t  value) ;

static inline void setStaticF__TerrainPixelCount(int32_t  value) ;

static inline void setStaticF__TextureLayerWeights(int32_t  value) ;

static inline void setStaticF__TotalWeights(int32_t  value) ;

static inline void setStaticF__TreeSDF(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF__Width(int32_t  value) ;

static inline void setStaticF__YCount(int32_t  value) ;

static inline void setStaticF_randomTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF_treeStampShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeStamp(TreeStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeStamp(TreeStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17988};

/// @brief Field version, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field prototypes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  ___prototypes;

/// @brief Field randomizations, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeStamp_Randomization>*  ___randomizations;

/// @brief Field seed, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___seed;

/// @brief Field poissonDisk, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___poissonDisk;

/// @brief Field poissonDiskStrength, offset: 0x50, size: 0x4, def value: None
 float_t  ___poissonDiskStrength;

/// @brief Field density, offset: 0x54, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field occludeOthers, offset: 0x58, size: 0x1, def value: None
 bool  ___occludeOthers;

/// @brief Field occludedByOthers, offset: 0x59, size: 0x1, def value: None
 bool  ___occludedByOthers;

/// @brief Field minDistanceFromTree, offset: 0x5c, size: 0x4, def value: None
 float_t  ___minDistanceFromTree;

/// @brief Field maxDistanceFromTree, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxDistanceFromTree;

/// @brief Field minDistanceFromObject, offset: 0x64, size: 0x4, def value: None
 float_t  ___minDistanceFromObject;

/// @brief Field maxDistanceFromObject, offset: 0x68, size: 0x4, def value: None
 float_t  ___maxDistanceFromObject;

/// @brief Field minDistanceFromParent, offset: 0x6c, size: 0x4, def value: None
 float_t  ___minDistanceFromParent;

/// @brief Field maxDistanceFromParent, offset: 0x70, size: 0x4, def value: None
 float_t  ___maxDistanceFromParent;

/// @brief Field sdfClamp, offset: 0x74, size: 0x1, def value: None
 bool  ___sdfClamp;

/// @brief Field minHeight, offset: 0x78, size: 0x4, def value: None
 float_t  ___minHeight;

/// @brief Field heightModAmount, offset: 0x7c, size: 0x4, def value: None
 float_t  ___heightModAmount;

/// @brief Field heightModWidth, offset: 0x80, size: 0x4, def value: None
 float_t  ___heightModWidth;

/// @brief Field layer, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___layer;

/// @brief Field layerWeight, offset: 0x90, size: 0x4, def value: None
 float_t  ___layerWeight;

/// @brief Field layerWidth, offset: 0x94, size: 0x4, def value: None
 float_t  ___layerWidth;

/// @brief Field applyFilteringToTextureMod, offset: 0x98, size: 0x1, def value: None
 bool  ___applyFilteringToTextureMod;

/// @brief Field filterSet, offset: 0xa0, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field textureLayerWeights, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___textureLayerWeights;

/// @brief Field material, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field _mrt, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RenderBuffer>  ____mrt;

/// @brief Field sdfs, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___sdfs;

/// @brief Field randomizationBuffer, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___randomizationBuffer;

/// @brief Field prototypeIndexes, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___prototypeIndexes;

/// @brief Field posWeightRTs, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___posWeightRTs;

/// @brief Field randomsRTs, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  ___randomsRTs;

/// @brief Field prototypeMappings, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::ArrayW<int32_t>>*  ___prototypeMappings;

/// @brief Field heightModMat, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___heightModMat;

/// @brief Field splatModMat, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___splatModMat;

/// @brief Size padding 0x108 - 0x100 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___version) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___prototypes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___randomizations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___seed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___poissonDisk) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___poissonDiskStrength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___density) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___occludeOthers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___occludedByOthers) == 0x59, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___minDistanceFromTree) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___maxDistanceFromTree) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___minDistanceFromObject) == 0x64, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___maxDistanceFromObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___minDistanceFromParent) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___maxDistanceFromParent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___sdfClamp) == 0x74, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___minHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___heightModAmount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___heightModWidth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___layer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___layerWeight) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___layerWidth) == 0x94, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___applyFilteringToTextureMod) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___filterSet) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___textureLayerWeights) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___material) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ____mrt) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___sdfs) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___randomizationBuffer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___prototypeIndexes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___posWeightRTs) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___randomsRTs) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___prototypeMappings) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___heightModMat) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::TreeStamp, ___splatModMat) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::TreeStamp) == 0x108, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
