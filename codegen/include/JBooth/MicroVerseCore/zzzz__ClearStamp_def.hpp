#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ClearStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClearStamp)
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
class IDetailModifier;
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
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ClearStamp;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ClearStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ClearStamp*, "JBooth.MicroVerseCore", "ClearStamp");
// Dependencies JBooth.MicroVerseCore.Stamp
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ClearStamp
class CORDL_TYPE ClearStamp : public ::JBooth::MicroVerseCore::Stamp {
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

/// @brief Field clearDetails, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearDetails, put=__cordl_internal_set_clearDetails)) bool  clearDetails;

/// @brief Field clearObjects, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearObjects, put=__cordl_internal_set_clearObjects)) bool  clearObjects;

/// @brief Field clearShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clearShader, put=setStaticF_clearShader)) ::UnityW<::UnityEngine::Shader>  clearShader;

/// @brief Field clearTrees, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearTrees, put=__cordl_internal_set_clearTrees)) bool  clearTrees;

/// @brief Field filterSet, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_filterSet, put=__cordl_internal_set_filterSet)) ::JBooth::MicroVerseCore::FilterSet*  filterSet;

/// @brief Field material, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr operator  ::JBooth::MicroVerseCore::IDetailModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr operator  ::JBooth::MicroVerseCore::IObjectModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ISpawner"
constexpr operator  ::JBooth::MicroVerseCore::ISpawner*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr operator  ::JBooth::MicroVerseCore::ITreeModifier*() noexcept;

/// @brief Method ApplyDetailClear, addr 0x181419f80, size 0x3a0, virtual true, abstract: false, final true
inline void ApplyDetailClear(::JBooth::MicroVerseCore::DetailData*  dd) ;

/// @brief Method ApplyDetailStamp, addr 0x18141a320, size 0x20, virtual true, abstract: false, final true
inline void ApplyDetailStamp(::JBooth::MicroVerseCore::DetailData*  dd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyObjectClear, addr 0x18141a340, size 0x340, virtual true, abstract: false, final true
inline void ApplyObjectClear(::JBooth::MicroVerseCore::ObjectData*  td) ;

/// @brief Method ApplyObjectStamp, addr 0x18141a680, size 0x20, virtual true, abstract: false, final true
inline void ApplyObjectStamp(::JBooth::MicroVerseCore::ObjectData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ApplyTreeClear, addr 0x18141a6a0, size 0x3a0, virtual true, abstract: false, final true
inline void ApplyTreeClear(::JBooth::MicroVerseCore::TreeData*  td) ;

/// @brief Method ApplyTreeStamp, addr 0x18141aa40, size 0x20, virtual true, abstract: false, final true
inline void ApplyTreeStamp(::JBooth::MicroVerseCore::TreeData*  td, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBounds, addr 0x18141aa60, size 0x1c0, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetSDF, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::RenderTexture> GetSDF(::UnityEngine::Terrain*  t) ;

/// @brief Method Initialize, addr 0x18141ac20, size 0x120, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method InqDetailPrototypes, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void InqDetailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  prototypes) ;

/// @brief Method InqTreePrototypes, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void InqTreePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  trees) ;

/// @brief Method NeedCurvatureMap, addr 0x18141ad40, size 0x20, virtual true, abstract: false, final true
inline bool NeedCurvatureMap() ;

/// @brief Method NeedDetailClear, addr 0x18049c410, size 0x10, virtual true, abstract: false, final true
inline bool NeedDetailClear() ;

/// @brief Method NeedFlowMap, addr 0x18141ad60, size 0x20, virtual true, abstract: false, final true
inline bool NeedFlowMap() ;

/// @brief Method NeedObjectClear, addr 0x18049d830, size 0x10, virtual true, abstract: false, final true
inline bool NeedObjectClear() ;

/// @brief Method NeedParentSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedParentSDF() ;

/// @brief Method NeedSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedSDF() ;

/// @brief Method NeedToGenerateSDFForChilden, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool NeedToGenerateSDFForChilden() ;

/// @brief Method NeedTreeClear, addr 0x1803561b0, size 0x10, virtual true, abstract: false, final true
inline bool NeedTreeClear() ;

static inline ::JBooth::MicroVerseCore::ClearStamp* New_ctor() ;

/// @brief Method OccludesOthers, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool OccludesOthers() ;

/// @brief Method OnDestroy, addr 0x18141ad80, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18141adc0, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method ProcessObjectStamp, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessObjectStamp(::JBooth::MicroVerseCore::ObjectData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method ProcessTreeStamp, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessTreeStamp(::JBooth::MicroVerseCore::TreeData*  vd, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  jobs, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method SetSDF, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetSDF(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  rt) ;

/// @brief Method UsesOtherObjectSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool UsesOtherObjectSDF() ;

/// @brief Method UsesOtherTreeSDF, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool UsesOtherTreeSDF() ;

constexpr bool const& __cordl_internal_get_clearDetails() const;

constexpr bool& __cordl_internal_get_clearDetails() ;

constexpr bool const& __cordl_internal_get_clearObjects() const;

constexpr bool& __cordl_internal_get_clearObjects() ;

constexpr bool const& __cordl_internal_get_clearTrees() const;

constexpr bool& __cordl_internal_get_clearTrees() ;

constexpr ::JBooth::MicroVerseCore::FilterSet* const& __cordl_internal_get_filterSet() const;

constexpr ::JBooth::MicroVerseCore::FilterSet*& __cordl_internal_get_filterSet() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr void __cordl_internal_set_clearDetails(bool  value) ;

constexpr void __cordl_internal_set_clearObjects(bool  value) ;

constexpr void __cordl_internal_set_clearTrees(bool  value) ;

constexpr void __cordl_internal_set_filterSet(::JBooth::MicroVerseCore::FilterSet*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x18141b010, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Curvemap() ;

static inline int32_t getStaticF__Flowmap() ;

static inline int32_t getStaticF__Heightmap() ;

static inline int32_t getStaticF__IndexMap() ;

static inline int32_t getStaticF__Normalmap() ;

static inline int32_t getStaticF__WeightMap() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_clearShader() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IDetailModifier"
constexpr ::JBooth::MicroVerseCore::IDetailModifier* i___JBooth__MicroVerseCore__IDetailModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IObjectModifier"
constexpr ::JBooth::MicroVerseCore::IObjectModifier* i___JBooth__MicroVerseCore__IObjectModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ISpawner"
constexpr ::JBooth::MicroVerseCore::ISpawner* i___JBooth__MicroVerseCore__ISpawner() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::ITreeModifier"
constexpr ::JBooth::MicroVerseCore::ITreeModifier* i___JBooth__MicroVerseCore__ITreeModifier() noexcept;

static inline void setStaticF__Curvemap(int32_t  value) ;

static inline void setStaticF__Flowmap(int32_t  value) ;

static inline void setStaticF__Heightmap(int32_t  value) ;

static inline void setStaticF__IndexMap(int32_t  value) ;

static inline void setStaticF__Normalmap(int32_t  value) ;

static inline void setStaticF__WeightMap(int32_t  value) ;

static inline void setStaticF_clearShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClearStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClearStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClearStamp(ClearStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClearStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClearStamp(ClearStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17974};

/// @brief Field clearTrees, offset: 0x2c, size: 0x1, def value: None
 bool  ___clearTrees;

/// @brief Field clearDetails, offset: 0x2d, size: 0x1, def value: None
 bool  ___clearDetails;

/// @brief Field clearObjects, offset: 0x2e, size: 0x1, def value: None
 bool  ___clearObjects;

/// @brief Field filterSet, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FilterSet*  ___filterSet;

/// @brief Field material, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Size padding 0x48 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ClearStamp, ___clearTrees) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ClearStamp, ___clearDetails) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ClearStamp, ___clearObjects) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ClearStamp, ___filterSet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ClearStamp, ___material) == 0x38, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ClearStamp) == 0x48, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
