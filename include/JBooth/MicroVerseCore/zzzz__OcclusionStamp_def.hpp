#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/OcclusionStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionStamp)
namespace JBooth::MicroVerseCore {
class DetailData;
}
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class HeightmapData;
}
namespace JBooth::MicroVerseCore {
class IDetailModifier;
}
namespace JBooth::MicroVerseCore {
class IHeightModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
class IObjectModifier;
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
class ObjectData;
}
namespace JBooth::MicroVerseCore {
class ObjectJobHolder;
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
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class OcclusionStamp;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::OcclusionStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::OcclusionStamp*, "JBooth.MicroVerseCore", "OcclusionStamp");
// Dependencies JBooth.MicroVerseCore.Stamp
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.OcclusionStamp
class CORDL_TYPE OcclusionStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
/// @brief Field _Curvemap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Curvemap, put=setStaticF__Curvemap)) int32_t  _Curvemap;

/// @brief Field _Flowmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Flowmap, put=setStaticF__Flowmap)) int32_t  _Flowmap;

/// @brief Field _Heightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Heightmap, put=setStaticF__Heightmap)) int32_t  _Heightmap;

/// @brief Field _IndexMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexMap, put=setStaticF__IndexMap)) int32_t  _IndexMap;

/// @brief Field _Normalmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normalmap, put=setStaticF__Normalmap)) int32_t  _Normalmap;

/// @brief Field _WeightMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightMap, put=setStaticF__WeightMap)) int32_t  _WeightMap;

/// @brief Field filterSet, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field hoist, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_hoist, put=__cordl_internal_set_hoist)) bool  hoist;

/// @brief Field material, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field occludeDetailWeight, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeDetailWeight, put=__cordl_internal_set_occludeDetailWeight)) float_t  occludeDetailWeight;

/// @brief Field occludeHeightWeight, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeHeightWeight, put=__cordl_internal_set_occludeHeightWeight)) float_t  occludeHeightWeight;

/// @brief Field occludeObjectWeight, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeObjectWeight, put=__cordl_internal_set_occludeObjectWeight)) float_t  occludeObjectWeight;

/// @brief Field occludeTextureWeight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeTextureWeight, put=__cordl_internal_set_occludeTextureWeight)) float_t  occludeTextureWeight;

/// @brief Field occludeTreeWeight, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_occludeTreeWeight, put=__cordl_internal_set_occludeTreeWeight)) float_t  occludeTreeWeight;

/// @brief Field occlusionShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_occlusionShader, put=setStaticF_occlusionShader)) ::UnityW<::UnityEngine::Shader>  occlusionShader;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr operator  ::JBooth::MicroVerseCore::IDetailModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHeightModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr operator  ::JBooth::MicroVerseCore::IObjectModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITextureModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITreeModifier*() noexcept;

/// @brief Method ApplyDetailClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  td) ;

/// @brief Method ApplyDetailStamp, addr 0x1814455b0, size 0x310, virtual true, abstract: false, final true
inline void ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyHeightStamp, addr 0x1814458c0, size 0x140, virtual true, abstract: false, final true
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyObjectClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  td) ;

/// @brief Method ApplyObjectStamp, addr 0x181445a00, size 0x370, virtual true, abstract: false, final true
inline void ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTextureStamp, addr 0x181445d70, size 0x200, virtual true, abstract: false, final true
inline bool ApplyTextureStamp(::UnityEngine::RenderTexture*  indexSrc, ::UnityEngine::RenderTexture*  indexDest, ::UnityEngine::RenderTexture*  weightSrc, ::UnityEngine::RenderTexture*  weightDest, ::JBooth::MicroVerseCore::TextureData*  splatmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTreeClear, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td) ;

/// @brief Method ApplyTreeStamp, addr 0x181445f70, size 0x330, virtual true, abstract: false, final true
inline void ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x1814462a0, size 0x190, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802e58c0, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetSDF, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method Initialize, addr 0x181446430, size 0x140, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqDetailPrototypes, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes) ;

/// @brief Method InqTerrainLayers, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void InqTerrainLayers(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TerrainLayer>>*  prototypes) ;

/// @brief Method InqTreePrototypes, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  prototypes) ;

/// @brief Method NeedCurvatureMap, addr 0x181446570, size 0x20, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedDetailClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedDetailClear() ;

/// @brief Method NeedFlowMap, addr 0x181446590, size 0x20, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

/// @brief Method NeedObjectClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedObjectClear() ;

/// @brief Method NeedParentSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedParentSDF() ;

/// @brief Method NeedSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedToGenerateSDFForChilden() ;

/// @brief Method NeedTreeClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedTreeClear() ;

static inline ::JBooth::MicroVerseCore::OcclusionStamp* New_ctor() ;

/// @brief Method OccludesOthers, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool OccludesOthers() ;

/// @brief Method OnDestroy, addr 0x1814465b0, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1814465f0, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method PrepareMaterial, addr 0x181446740, size 0x2c0, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::OcclusionData*  od, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

/// @brief Method ProcessObjectStamp, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ProcessTreeStamp, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Render, addr 0x181446a00, size 0xf0, virtual false, abstract: false, final false
inline void Render(::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method SetSDF, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method UsesOtherObjectSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool UsesOtherTreeSDF() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr bool const& __cordl_internal_get_hoist() const;

constexpr bool& __cordl_internal_get_hoist() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_occludeDetailWeight() const;

constexpr float_t& __cordl_internal_get_occludeDetailWeight() ;

constexpr float_t const& __cordl_internal_get_occludeHeightWeight() const;

constexpr float_t& __cordl_internal_get_occludeHeightWeight() ;

constexpr float_t const& __cordl_internal_get_occludeObjectWeight() const;

constexpr float_t& __cordl_internal_get_occludeObjectWeight() ;

constexpr float_t const& __cordl_internal_get_occludeTextureWeight() const;

constexpr float_t& __cordl_internal_get_occludeTextureWeight() ;

constexpr float_t const& __cordl_internal_get_occludeTreeWeight() const;

constexpr float_t& __cordl_internal_get_occludeTreeWeight() ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_hoist(bool  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_occludeDetailWeight(float_t  value) ;

constexpr void __cordl_internal_set_occludeHeightWeight(float_t  value) ;

constexpr void __cordl_internal_set_occludeObjectWeight(float_t  value) ;

constexpr void __cordl_internal_set_occludeTextureWeight(float_t  value) ;

constexpr void __cordl_internal_set_occludeTreeWeight(float_t  value) ;

/// @brief Method .ctor, addr 0x181446bf0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Curvemap() ;

static inline int32_t getStaticF__Flowmap() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__Normalmap() ;

static inline int32_t getStaticF__WeightMap() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_occlusionShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* i___JBooth__MicroVerseCore__IDetailModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* i___JBooth__MicroVerseCore__IHeightModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr ::JBooth::MicroVerseCore::IObjectModifier* i___JBooth__MicroVerseCore__IObjectModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITextureModifier"
constexpr ::JBooth::MicroVerseCore::ITextureModifier* i___JBooth__MicroVerseCore__ITextureModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* i___JBooth__MicroVerseCore__ITreeModifier() noexcept;

static inline void setStaticF__Curvemap(int32_t  value) ;

static inline void setStaticF__Flowmap(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__Normalmap(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF_occlusionShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionStamp(OcclusionStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionStamp(OcclusionStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18052};

/// @brief Field occludeHeightWeight, offset: 0x2c, size: 0x4, def value: None
 float_t  ___occludeHeightWeight;

/// @brief Field occludeTextureWeight, offset: 0x30, size: 0x4, def value: None
 float_t  ___occludeTextureWeight;

/// @brief Field occludeTreeWeight, offset: 0x34, size: 0x4, def value: None
 float_t  ___occludeTreeWeight;

/// @brief Field occludeDetailWeight, offset: 0x38, size: 0x4, def value: None
 float_t  ___occludeDetailWeight;

/// @brief Field occludeObjectWeight, offset: 0x3c, size: 0x4, def value: None
 float_t  ___occludeObjectWeight;

/// @brief Field filterSet, offset: 0x40, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field hoist, offset: 0x48, size: 0x1, def value: None
 bool  ___hoist;

/// @brief Field material, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___occludeHeightWeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___occludeTextureWeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___occludeTreeWeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___occludeDetailWeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___occludeObjectWeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___filterSet) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___hoist) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionStamp, ___material) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::OcclusionStamp) == 0x60, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
