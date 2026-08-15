#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailMaterialCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__half2_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDetailMaterialCache)
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct TerrainDetailMaterialCache_MaterialKey;
}
namespace MA::Flora {
struct TerrainDetailMaterialCache_TerrainLayerBinding;
}
namespace MA::Flora {
struct TerrainDetailPrototype;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace MA::Flora {
class TerrainDetailMaterialCache;
}
namespace MA::Flora {
struct TerrainDetailMaterialCache_MaterialKey;
}
namespace MA::Flora {
struct TerrainDetailMaterialCache_TerrainLayerBinding;
}
// Write type traits
MARK_REF_T(::MA::Flora::TerrainDetailMaterialCache*);
MARK_VAL_T(::MA::Flora::TerrainDetailMaterialCache_MaterialKey);
MARK_VAL_T(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailMaterialCache*, "MA.Flora", "TerrainDetailMaterialCache");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailMaterialCache_MaterialKey, "MA.Flora", "TerrainDetailMaterialCache/MaterialKey");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding, "MA.Flora", "TerrainDetailMaterialCache/TerrainLayerBinding");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailMaterialCache/TerrainLayerBinding
struct CORDL_TYPE TerrainDetailMaterialCache_TerrainLayerBinding {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*() ;

/// @brief Method Equals, addr 0x18150e840, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18149c5c0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding  other) ;

/// @brief Method GetHashCode, addr 0x180e0c2e0, size 0x250, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::EntityId  terrainId, int32_t  layerIndex) ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>* i___System__IEquatable_1___MA__Flora__TerrainDetailMaterialCache_TerrainLayerBinding_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailMaterialCache_TerrainLayerBinding() ;

// Ctor Parameters [CppParam { name: "TerrainId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "LayerIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainDetailMaterialCache_TerrainLayerBinding(::UnityEngine::EntityId  TerrainId, int32_t  LayerIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TerrainId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  TerrainId;

/// @brief Field LayerIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  LayerIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding, TerrainId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding, LayerIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Mathematics.half2, UnityEngine.Color32, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailMaterialCache/MaterialKey
struct CORDL_TYPE TerrainDetailMaterialCache_MaterialKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>*() ;

/// @brief Method Equals, addr 0x18150acf0, size 0xd0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x18150ac60, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::TerrainDetailMaterialCache_MaterialKey  other) ;

/// @brief Method GetHashCode, addr 0x18150adc0, size 0x130, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>* i___System__IEquatable_1___MA__Flora__TerrainDetailMaterialCache_MaterialKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailMaterialCache_MaterialKey() ;

// Ctor Parameters [CppParam { name: "TextureId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "HealthyColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "DryColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "MinMaxSize", ty: "::Unity::Mathematics::half2", modifiers: "", def_value: None }, CppParam { name: "Billboard", ty: "bool", modifiers: "", def_value: None }]
constexpr TerrainDetailMaterialCache_MaterialKey(::UnityEngine::EntityId  TextureId, ::UnityEngine::Color32  HealthyColor, ::UnityEngine::Color32  DryColor, ::Unity::Mathematics::half2  MinMaxSize, bool  Billboard) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field TextureId, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::EntityId  TextureId;

/// @brief Field HealthyColor, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::Color32  HealthyColor;

/// @brief Field DryColor, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Color32  DryColor;

/// @brief Field MinMaxSize, offset: 0xc, size: 0x4, def value: None
 ::Unity::Mathematics::half2  MinMaxSize;

/// @brief Field Billboard, offset: 0x10, size: 0x1, def value: None
 bool  Billboard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_MaterialKey, TextureId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_MaterialKey, HealthyColor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_MaterialKey, DryColor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_MaterialKey, MinMaxSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache_MaterialKey, Billboard) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailMaterialCache_MaterialKey) == 0x14, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.TerrainDetailMaterialCache::MaterialKey, System.Object, UnityEngine.Material
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainDetailMaterialCache
class CORDL_TYPE TerrainDetailMaterialCache : public ::System::Object {
public:
// Declarations
using MaterialKey = ::MA::Flora::TerrainDetailMaterialCache_MaterialKey;

using TerrainLayerBinding = ::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding;

/// @brief Field DryColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DryColor, put=setStaticF_DryColor)) int32_t  DryColor;

/// @brief Field HealthyColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HealthyColor, put=setStaticF_HealthyColor)) int32_t  HealthyColor;

/// @brief Field MinMaxSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MinMaxSize, put=setStaticF_MinMaxSize)) int32_t  MinMaxSize;

/// @brief Field m_BindingsToRemove, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsToRemove, put=__cordl_internal_set_m_BindingsToRemove)) ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  m_BindingsToRemove;

/// @brief Field m_BindingsToRemoveBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BindingsToRemoveBuffer, put=__cordl_internal_set_m_BindingsToRemoveBuffer)) ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  m_BindingsToRemoveBuffer;

/// @brief Field m_FreeGrassMaterialIndices, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FreeGrassMaterialIndices, put=__cordl_internal_set_m_FreeGrassMaterialIndices)) ::System::Collections::Generic::List_1<int32_t>*  m_FreeGrassMaterialIndices;

/// @brief Field m_GrassBindings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassBindings, put=__cordl_internal_set_m_GrassBindings)) ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>*  m_GrassBindings;

/// @brief Field m_GrassKeysByIndex, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassKeysByIndex, put=__cordl_internal_set_m_GrassKeysByIndex)) ::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>  m_GrassKeysByIndex;

/// @brief Field m_GrassMaterial, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassMaterial, put=__cordl_internal_set_m_GrassMaterial)) ::UnityW<::UnityEngine::Material>  m_GrassMaterial;

/// @brief Field m_GrassMaterialIndexLookup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassMaterialIndexLookup, put=__cordl_internal_set_m_GrassMaterialIndexLookup)) ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>*  m_GrassMaterialIndexLookup;

/// @brief Field m_GrassMaterials, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassMaterials, put=__cordl_internal_set_m_GrassMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  m_GrassMaterials;

/// @brief Field m_GrassPlaceholderPrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassPlaceholderPrefab, put=__cordl_internal_set_m_GrassPlaceholderPrefab)) ::UnityW<::UnityEngine::GameObject>  m_GrassPlaceholderPrefab;

/// @brief Field m_GrassRefCounts, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GrassRefCounts, put=__cordl_internal_set_m_GrassRefCounts)) ::ArrayW<int32_t>  m_GrassRefCounts;

/// @brief Field m_NextGrassMaterialIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextGrassMaterialIndex, put=__cordl_internal_set_m_NextGrassMaterialIndex)) int32_t  m_NextGrassMaterialIndex;

/// @brief Field m_PossibleFreeIndices, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PossibleFreeIndices, put=__cordl_internal_set_m_PossibleFreeIndices)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_PossibleFreeIndices;

/// @brief Field m_TerrainLayerCounts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TerrainLayerCounts, put=__cordl_internal_set_m_TerrainLayerCounts)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>*  m_TerrainLayerCounts;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AllocateMaterialIndex, addr 0x18150d7d0, size 0xf0, virtual false, abstract: false, final false
inline int32_t AllocateMaterialIndex() ;

/// @brief Method DecrementMaterialRef, addr 0x18150d8c0, size 0x60, virtual false, abstract: false, final false
inline void DecrementMaterialRef(int32_t  index) ;

/// @brief Method DestroyMaterial, addr 0x18150d920, size 0x110, virtual false, abstract: false, final false
inline void DestroyMaterial(int32_t  index) ;

/// @brief Method Dispose, addr 0x18150da30, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FreeUnusedMaterials, addr 0x18150da80, size 0xb0, virtual false, abstract: false, final false
inline void FreeUnusedMaterials() ;

/// @brief Method GetOrCreateMaterial, addr 0x18150db30, size 0x690, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetOrCreateMaterial(::by_ref<::MA::Flora::TerrainDetailPrototype>  prototype) ;

/// @brief Method GetTerrainGrassPlaceholderPrefab, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetTerrainGrassPlaceholderPrefab() ;

/// @brief Method IncrementMaterialRef, addr 0x18150e1c0, size 0x20, virtual false, abstract: false, final false
inline void IncrementMaterialRef(int32_t  index) ;

static inline ::MA::Flora::TerrainDetailMaterialCache* New_ctor(::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Method OnTerrainChanged, addr 0x18150e1e0, size 0x210, virtual false, abstract: false, final false
inline void OnTerrainChanged(::UnityEngine::EntityId  terrainId) ;

/// @brief Method OnTerrainRemoved, addr 0x18150e3f0, size 0x180, virtual false, abstract: false, final false
inline void OnTerrainRemoved(::UnityEngine::EntityId  terrainId) ;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>* const& __cordl_internal_get_m_BindingsToRemove() const;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*& __cordl_internal_get_m_BindingsToRemove() ;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>* const& __cordl_internal_get_m_BindingsToRemoveBuffer() const;

constexpr ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*& __cordl_internal_get_m_BindingsToRemoveBuffer() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_FreeGrassMaterialIndices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_FreeGrassMaterialIndices() ;

constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>* const& __cordl_internal_get_m_GrassBindings() const;

constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>*& __cordl_internal_get_m_GrassBindings() ;

constexpr ::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey> const& __cordl_internal_get_m_GrassKeysByIndex() const;

constexpr ::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>& __cordl_internal_get_m_GrassKeysByIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_GrassMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_GrassMaterial() ;

constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>* const& __cordl_internal_get_m_GrassMaterialIndexLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>*& __cordl_internal_get_m_GrassMaterialIndexLookup() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_m_GrassMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_m_GrassMaterials() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_GrassPlaceholderPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_GrassPlaceholderPrefab() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_GrassRefCounts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_GrassRefCounts() ;

constexpr int32_t const& __cordl_internal_get_m_NextGrassMaterialIndex() const;

constexpr int32_t& __cordl_internal_get_m_NextGrassMaterialIndex() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_PossibleFreeIndices() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_PossibleFreeIndices() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>* const& __cordl_internal_get_m_TerrainLayerCounts() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>*& __cordl_internal_get_m_TerrainLayerCounts() ;

constexpr void __cordl_internal_set_m_BindingsToRemove(::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  value) ;

constexpr void __cordl_internal_set_m_BindingsToRemoveBuffer(::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  value) ;

constexpr void __cordl_internal_set_m_FreeGrassMaterialIndices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_GrassBindings(::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_GrassKeysByIndex(::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>  value) ;

constexpr void __cordl_internal_set_m_GrassMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_GrassMaterialIndexLookup(::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>*  value) ;

constexpr void __cordl_internal_set_m_GrassMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_m_GrassPlaceholderPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_GrassRefCounts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_NextGrassMaterialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_PossibleFreeIndices(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_TerrainLayerCounts(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x18150e5e0, size 0x200, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::FloraRuntimeResources*  resources) ;

static inline int32_t getStaticF_DryColor() ;

static inline int32_t getStaticF_HealthyColor() ;

static inline int32_t getStaticF_MinMaxSize() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_DryColor(int32_t  value) ;

static inline void setStaticF_HealthyColor(int32_t  value) ;

static inline void setStaticF_MinMaxSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailMaterialCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainDetailMaterialCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainDetailMaterialCache(TerrainDetailMaterialCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainDetailMaterialCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainDetailMaterialCache(TerrainDetailMaterialCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13383};

/// @brief Field m_GrassMaterialIndexLookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_MaterialKey,int32_t>*  ___m_GrassMaterialIndexLookup;

/// @brief Field m_GrassBindings, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding,int32_t>*  ___m_GrassBindings;

/// @brief Field m_TerrainLayerCounts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,int32_t>*  ___m_TerrainLayerCounts;

/// @brief Field m_NextGrassMaterialIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_NextGrassMaterialIndex;

/// @brief Field m_FreeGrassMaterialIndices, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_FreeGrassMaterialIndices;

/// @brief Field m_GrassKeysByIndex, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::MA::Flora::TerrainDetailMaterialCache_MaterialKey>  ___m_GrassKeysByIndex;

/// @brief Field m_GrassRefCounts, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_GrassRefCounts;

/// @brief Field m_GrassMaterials, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___m_GrassMaterials;

/// @brief Field m_GrassPlaceholderPrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_GrassPlaceholderPrefab;

/// @brief Field m_GrassMaterial, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_GrassMaterial;

/// @brief Field m_BindingsToRemoveBuffer, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  ___m_BindingsToRemoveBuffer;

/// @brief Field m_BindingsToRemove, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::MA::Flora::TerrainDetailMaterialCache_TerrainLayerBinding>*  ___m_BindingsToRemove;

/// @brief Field m_PossibleFreeIndices, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___m_PossibleFreeIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassMaterialIndexLookup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassBindings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_TerrainLayerCounts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_NextGrassMaterialIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_FreeGrassMaterialIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassKeysByIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassRefCounts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassMaterials) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassPlaceholderPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_GrassMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_BindingsToRemoveBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_BindingsToRemove) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailMaterialCache, ___m_PossibleFreeIndices) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailMaterialCache) == 0x78, "Size mismatch!");

} // namespace end def MA::Flora
