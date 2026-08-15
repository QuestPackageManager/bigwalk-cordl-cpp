#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/DetailStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailStamp)
namespace JBooth::MicroVerseCore {
class DetailData;
}
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
namespace JBooth::MicroVerseCore {
class DetailPrototypeSettings;
}
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class IDetailModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class ISpawner;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
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
class Material;
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
class DetailStamp;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::DetailStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::DetailStamp*, "JBooth.MicroVerseCore", "DetailStamp");
// Dependencies JBooth.MicroVerseCore.Stamp, UnityEngine.Vector2
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.DetailStamp
class CORDL_TYPE DetailStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
/// @brief Field _ClearLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearLayer, put=setStaticF__ClearLayer)) int32_t  _ClearLayer;

/// @brief Field _ClearMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearMask, put=setStaticF__ClearMask)) int32_t  _ClearMask;

/// @brief Field _Curvemap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Curvemap, put=setStaticF__Curvemap)) int32_t  _Curvemap;

/// @brief Field _Density, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Density, put=setStaticF__Density)) int32_t  _Density;

/// @brief Field _DensityNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DensityNoise, put=setStaticF__DensityNoise)) int32_t  _DensityNoise;

/// @brief Field _Flowmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Flowmap, put=setStaticF__Flowmap)) int32_t  _Flowmap;

/// @brief Field _Heightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap, put=setStaticF__Heightmap)) int32_t  _Heightmap;

/// @brief Field _IndexMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexMap, put=setStaticF__IndexMap)) int32_t  _IndexMap;

/// @brief Field _Normalmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normalmap, put=setStaticF__Normalmap)) int32_t  _Normalmap;

/// @brief Field _PlacementMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PlacementMask, put=setStaticF__PlacementMask)) int32_t  _PlacementMask;

/// @brief Field _TextureLayerWeights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TextureLayerWeights, put=setStaticF__TextureLayerWeights)) int32_t  _TextureLayerWeights;

/// @brief Field _WeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightMap, put=setStaticF__WeightMap)) int32_t  _WeightMap;

/// @brief Field _WeightRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightRange, put=setStaticF__WeightRange)) int32_t  _WeightRange;

/// @brief Field detailShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_detailShader, put=setStaticF_detailShader)) ::UnityW<::UnityEngine::Shader>  detailShader;

/// @brief Field filterSet, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field material, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field maxDistanceFromObject, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromObject, put=__cordl_internal_set_maxDistanceFromObject)) float_t  maxDistanceFromObject;

/// @brief Field maxDistanceFromParent, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromParent, put=__cordl_internal_set_maxDistanceFromParent)) float_t  maxDistanceFromParent;

/// @brief Field maxDistanceFromTree, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromTree, put=__cordl_internal_set_maxDistanceFromTree)) float_t  maxDistanceFromTree;

/// @brief Field minDistanceFromObject, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromObject, put=__cordl_internal_set_minDistanceFromObject)) float_t  minDistanceFromObject;

/// @brief Field minDistanceFromParent, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromParent, put=__cordl_internal_set_minDistanceFromParent)) float_t  minDistanceFromParent;

/// @brief Field minDistanceFromTree, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistanceFromTree, put=__cordl_internal_set_minDistanceFromTree)) float_t  minDistanceFromTree;

/// @brief Field occludedByOthers, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_occludedByOthers, put=__cordl_internal_set_occludedByOthers)) bool  occludedByOthers;

/// @brief Field prototype, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_prototype, put=__cordl_internal_set_prototype)) ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  prototype;

/// @brief Field sdfClamp, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_sdfClamp, put=__cordl_internal_set_sdfClamp)) bool  sdfClamp;

/// @brief Field settings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings>  settings;

/// @brief Field weightRange, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_weightRange, put=__cordl_internal_set_weightRange)) ::UnityEngine::Vector2  weightRange;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr operator  ::JBooth::MicroVerseCore::IDetailModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Method ApplyDetailClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td) ;

/// @brief Method ApplyDetailStamp, addr 0x18141beb0, size 0x990, virtual true, abstract: false, final true
inline void ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x18141c840, size 0x190, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802e5850, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetSDF, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method Initialize, addr 0x18141c9d0, size 0x110, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqDetailPrototypes, addr 0x18141cae0, size 0xe0, virtual true, abstract: false, final true
inline void InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes) ;

/// @brief Method NeedCurvatureMap, addr 0x18141cbc0, size 0x20, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedDetailClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedDetailClear() ;

/// @brief Method NeedFlowMap, addr 0x18141cbe0, size 0x20, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

/// @brief Method NeedParentSDF, addr 0x18141cc00, size 0x20, virtual true, abstract: false, final true
inline bool NeedParentSDF() ;

/// @brief Method NeedSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedToGenerateSDFForChilden() ;

static inline ::JBooth::MicroVerseCore::DetailStamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18141cc20, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18141cc60, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method SetSDF, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method UsesOtherObjectSDF, addr 0x18141cdb0, size 0x20, virtual true, abstract: false, final true
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0x18141cdd0, size 0x20, virtual true, abstract: false, final true
inline bool UsesOtherTreeSDF() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

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

constexpr bool const& __cordl_internal_get_occludedByOthers() const;

constexpr bool& __cordl_internal_get_occludedByOthers() ;

constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable* const& __cordl_internal_get_prototype() const;

constexpr ::JBooth::MicroVerseCore::DetailPrototypeSerializable*& __cordl_internal_get_prototype() ;

constexpr bool const& __cordl_internal_get_sdfClamp() const;

constexpr bool& __cordl_internal_get_sdfClamp() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings> const& __cordl_internal_get_settings() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings>& __cordl_internal_get_settings() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_weightRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_weightRange() ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_maxDistanceFromObject(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromParent(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceFromTree(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromObject(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromParent(float_t  value) ;

constexpr void __cordl_internal_set_minDistanceFromTree(float_t  value) ;

constexpr void __cordl_internal_set_occludedByOthers(bool  value) ;

constexpr void __cordl_internal_set_prototype(::JBooth::MicroVerseCore::DetailPrototypeSerializable*  value) ;

constexpr void __cordl_internal_set_sdfClamp(bool  value) ;

constexpr void __cordl_internal_set_settings(::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings>  value) ;

constexpr void __cordl_internal_set_weightRange(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x18141cfc0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__ClearLayer() ;

static inline int32_t getStaticF__ClearMask() ;

static inline int32_t getStaticF__Curvemap() ;

static inline int32_t getStaticF__Density() ;

static inline int32_t getStaticF__DensityNoise() ;

static inline int32_t getStaticF__Flowmap() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__Normalmap() ;

static inline int32_t getStaticF__PlacementMask() ;

static inline int32_t getStaticF__TextureLayerWeights() ;

static inline int32_t getStaticF__WeightMap() ;

static inline int32_t getStaticF__WeightRange() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_detailShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* i___JBooth__MicroVerseCore__IDetailModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

static inline void setStaticF__ClearLayer(int32_t  value) ;

static inline void setStaticF__ClearMask(int32_t  value) ;

static inline void setStaticF__Curvemap(int32_t  value) ;

static inline void setStaticF__Density(int32_t  value) ;

static inline void setStaticF__DensityNoise(int32_t  value) ;

static inline void setStaticF__Flowmap(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__Normalmap(int32_t  value) ;

static inline void setStaticF__PlacementMask(int32_t  value) ;

static inline void setStaticF__TextureLayerWeights(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF__WeightRange(int32_t  value) ;

static inline void setStaticF_detailShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailStamp(DetailStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailStamp(DetailStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17979};

/// @brief Field prototype, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  ___prototype;

/// @brief Field settings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::DetailPrototypeSettings>  ___settings;

/// @brief Field filterSet, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field occludedByOthers, offset: 0x50, size: 0x1, def value: None
 bool  ___occludedByOthers;

/// @brief Field minDistanceFromTree, offset: 0x54, size: 0x4, def value: None
 float_t  ___minDistanceFromTree;

/// @brief Field maxDistanceFromTree, offset: 0x58, size: 0x4, def value: None
 float_t  ___maxDistanceFromTree;

/// @brief Field minDistanceFromObject, offset: 0x5c, size: 0x4, def value: None
 float_t  ___minDistanceFromObject;

/// @brief Field maxDistanceFromObject, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxDistanceFromObject;

/// @brief Field minDistanceFromParent, offset: 0x64, size: 0x4, def value: None
 float_t  ___minDistanceFromParent;

/// @brief Field maxDistanceFromParent, offset: 0x68, size: 0x4, def value: None
 float_t  ___maxDistanceFromParent;

/// @brief Field sdfClamp, offset: 0x6c, size: 0x1, def value: None
 bool  ___sdfClamp;

/// @brief Field weightRange, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___weightRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___prototype) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___settings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___filterSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___occludedByOthers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___minDistanceFromTree) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___maxDistanceFromTree) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___minDistanceFromObject) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___maxDistanceFromObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___minDistanceFromParent) == 0x64, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___maxDistanceFromParent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___sdfClamp) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::DetailStamp, ___weightRange) == 0x70, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::DetailStamp) == 0x78, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
