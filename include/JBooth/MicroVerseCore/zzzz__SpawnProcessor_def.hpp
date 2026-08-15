#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SpawnProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnProcessor)
namespace JBooth::MicroVerseCore {
class DetailJobHolder;
}
namespace JBooth::MicroVerseCore {
class DetailPrototypeSerializable;
}
namespace JBooth::MicroVerseCore {
class IDetailModifier;
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
class MicroVerse_DataCache;
}
namespace JBooth::MicroVerseCore {
struct MicroVerse_InvalidateType;
}
namespace JBooth::MicroVerseCore {
class ObjectJobHolder;
}
namespace JBooth::MicroVerseCore {
class SpawnProcessor_Pool;
}
namespace JBooth::MicroVerseCore {
class SpawnProcessor___c;
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
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class SpawnProcessor;
}
namespace JBooth::MicroVerseCore {
class SpawnProcessor_Pool;
}
namespace JBooth::MicroVerseCore {
class SpawnProcessor___c;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::SpawnProcessor*);
MARK_REF_T(::JBooth::MicroVerseCore::SpawnProcessor_Pool*);
MARK_REF_T(::JBooth::MicroVerseCore::SpawnProcessor___c*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SpawnProcessor*, "JBooth.MicroVerseCore", "SpawnProcessor");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SpawnProcessor_Pool*, "JBooth.MicroVerseCore", "SpawnProcessor/Pool");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::SpawnProcessor___c*, "JBooth.MicroVerseCore", "SpawnProcessor/<>c");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SpawnProcessor/Pool
class CORDL_TYPE SpawnProcessor_Pool : public ::System::Object {
public:
// Declarations
/// @brief Field instances, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_instances, put=__cordl_internal_set_instances)) ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  instances;

/// @brief Field prefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

static inline ::JBooth::MicroVerseCore::SpawnProcessor_Pool* New_ctor() ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_instances() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_instances() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_instances(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x18140de10, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnProcessor_Pool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnProcessor_Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnProcessor_Pool(SpawnProcessor_Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnProcessor_Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnProcessor_Pool(SpawnProcessor_Pool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17925};

/// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field instances, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  ___instances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor_Pool, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor_Pool, ___instances) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SpawnProcessor_Pool) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SpawnProcessor/<>c
class CORDL_TYPE SpawnProcessor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::JBooth::MicroVerseCore::SpawnProcessor___c*  __9;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>*  __9__30_0;

/// @brief Field <>9__30_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_1, put=setStaticF___9__30_1)) ::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>*  __9__30_1;

static inline ::JBooth::MicroVerseCore::SpawnProcessor___c* New_ctor() ;

/// @brief Method <InitSystem>b__30_0, addr 0x181417c60, size 0x30, virtual false, abstract: false, final false
inline bool _InitSystem_b__30_0(::JBooth::MicroVerseCore::ISpawner*  p) ;

/// @brief Method <InitSystem>b__30_1, addr 0x181417c90, size 0x80, virtual false, abstract: false, final false
inline bool _InitSystem_b__30_1(::JBooth::MicroVerseCore::ISpawner*  member) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::JBooth::MicroVerseCore::SpawnProcessor___c* getStaticF___9() ;

static inline ::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>* getStaticF___9__30_0() ;

static inline ::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>* getStaticF___9__30_1() ;

static inline void setStaticF___9(::JBooth::MicroVerseCore::SpawnProcessor___c*  value) ;

static inline void setStaticF___9__30_0(::System::Predicate_1<::JBooth::MicroVerseCore::ISpawner*>*  value) ;

static inline void setStaticF___9__30_1(::System::Func_2<::JBooth::MicroVerseCore::ISpawner*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnProcessor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnProcessor___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnProcessor___c(SpawnProcessor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnProcessor___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnProcessor___c(SpawnProcessor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::SpawnProcessor___c) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.SpawnProcessor
class CORDL_TYPE SpawnProcessor : public ::System::Object {
public:
// Declarations
using Pool = ::JBooth::MicroVerseCore::SpawnProcessor_Pool;

using __c = ::JBooth::MicroVerseCore::SpawnProcessor___c;

/// @brief Field <IsModifyingTerrain>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsModifyingTerrain_k__BackingField, put=setStaticF__IsModifyingTerrain_k__BackingField)) bool  _IsModifyingTerrain_k__BackingField;

/// @brief Field detailJobHolders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailJobHolders, put=__cordl_internal_set_detailJobHolders)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>*  detailJobHolders;

/// @brief Field detailPrototypes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailPrototypes, put=__cordl_internal_set_detailPrototypes)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  detailPrototypes;

/// @brief Field finishedDetails, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_finishedDetails, put=__cordl_internal_set_finishedDetails)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  finishedDetails;

/// @brief Field finishedObjects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_finishedObjects, put=__cordl_internal_set_finishedObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  finishedObjects;

/// @brief Field finishedTrees, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_finishedTrees, put=__cordl_internal_set_finishedTrees)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  finishedTrees;

/// @brief Field objectJobHolders, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectJobHolders, put=__cordl_internal_set_objectJobHolders)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  objectJobHolders;

/// @brief Field pools, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pools, put=setStaticF_pools)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>*  pools;

/// @brief Field spawners, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawners, put=__cordl_internal_set_spawners)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>*  spawners;

/// @brief Field treeJobHolders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeJobHolders, put=__cordl_internal_set_treeJobHolders)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  treeJobHolders;

/// @brief Field treePrototypes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_treePrototypes, put=__cordl_internal_set_treePrototypes)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  treePrototypes;

/// @brief Method ApplyDetails, addr 0x181412a80, size 0x310, virtual false, abstract: false, final false
inline void ApplyDetails() ;

/// @brief Method ApplyObjects, addr 0x181412d90, size 0xc80, virtual false, abstract: false, final false
inline void ApplyObjects() ;

/// @brief Method ApplyTrees, addr 0x181413a10, size 0x520, virtual false, abstract: false, final false
inline void ApplyTrees() ;

/// @brief Method Cancel, addr 0x181414450, size 0x30, virtual false, abstract: false, final false
inline void Cancel(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method CancelObjectJobs, addr 0x181413f30, size 0x1c0, virtual false, abstract: false, final false
inline void CancelObjectJobs(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method CancelVegetationJobs, addr 0x1814140f0, size 0x360, virtual false, abstract: false, final false
inline void CancelVegetationJobs(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method CheckDone, addr 0x181414480, size 0xa0, virtual false, abstract: false, final false
inline void CheckDone() ;

/// @brief Method ClearPools, addr 0x181414520, size 0x1d0, virtual false, abstract: false, final false
inline void ClearPools() ;

/// @brief Method Despawn, addr 0x1814146f0, size 0x10, virtual false, abstract: false, final false
static inline void Despawn(::UnityEngine::GameObject*  instance) ;

/// @brief Method FinishedRendereringVegetation, addr 0x181414700, size 0x680, virtual false, abstract: false, final false
inline void FinishedRendereringVegetation(::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers) ;

/// @brief Method GenerateSpawnables, addr 0x181414d80, size 0x340, virtual false, abstract: false, final false
inline void GenerateSpawnables(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method InitSystem, addr 0x1814150c0, size 0x1d0, virtual false, abstract: false, final false
inline void InitSystem() ;

/// @brief Method InitTerrain, addr 0x181415600, size 0x380, virtual false, abstract: false, final false
inline void InitTerrain(::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::MicroVerse_InvalidateType  invalidateType, ::by_ref<bool>  needCurvatureMap, ::by_ref<bool>  needFlowMap) ;

/// @brief Method InitTerrainVegetation, addr 0x181415290, size 0x370, virtual false, abstract: false, final false
inline void InitTerrainVegetation(::UnityEngine::Terrain*  terrain, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  treePrototypes, ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  detailPrototypes) ;

/// @brief Method MoveMatchingToStart, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void MoveMatchingToStart(::System::Collections::Generic::List_1<T>*  list, ::System::Func_2<T,bool>*  condition) ;

static inline ::JBooth::MicroVerseCore::SpawnProcessor* New_ctor() ;

/// @brief Method RenderDetailStamp, addr 0x181415980, size 0x2f0, virtual false, abstract: false, final false
inline void RenderDetailStamp(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::IDetailModifier*  detailModifier, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*>*>*  resultBuffers) ;

/// @brief Method RenderObjectClearLayers, addr 0x181415c70, size 0x470, virtual false, abstract: false, final false
inline void RenderObjectClearLayers(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method RenderObjectStamp, addr 0x1814160e0, size 0x740, virtual false, abstract: false, final false
inline void RenderObjectStamp(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::IObjectModifier*  objectModifier, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, bool  allSDF, bool  enableSDF) ;

/// @brief Method RenderTreeStamp, addr 0x181416820, size 0x750, virtual false, abstract: false, final false
inline void RenderTreeStamp(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::ITreeModifier*  treeModifier, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache, bool  allSDF, bool  enableTreeSDF) ;

/// @brief Method RenderVegetationClearLayers, addr 0x181416f70, size 0x640, virtual false, abstract: false, final false
inline void RenderVegetationClearLayers(::ArrayW<::UnityEngine::Terrain*>  terrains, ::JBooth::MicroVerseCore::MicroVerse_DataCache*  dataCache) ;

/// @brief Method Spawn, addr 0x1814175b0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Spawn(::UnityEngine::Terrain*  t, ::UnityEngine::GameObject*  go, ::UnityEngine::Transform*  parent, bool  asPrefab) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>* const& __cordl_internal_get_detailJobHolders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>*& __cordl_internal_get_detailJobHolders() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>* const& __cordl_internal_get_detailPrototypes() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*& __cordl_internal_get_detailPrototypes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_finishedDetails() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_finishedDetails() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_finishedObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_finishedObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_finishedTrees() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_finishedTrees() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>* const& __cordl_internal_get_objectJobHolders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*& __cordl_internal_get_objectJobHolders() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>* const& __cordl_internal_get_spawners() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>*& __cordl_internal_get_spawners() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>* const& __cordl_internal_get_treeJobHolders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*& __cordl_internal_get_treeJobHolders() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>* const& __cordl_internal_get_treePrototypes() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*& __cordl_internal_get_treePrototypes() ;

constexpr void __cordl_internal_set_detailJobHolders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>*  value) ;

constexpr void __cordl_internal_set_detailPrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  value) ;

constexpr void __cordl_internal_set_finishedDetails(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

constexpr void __cordl_internal_set_finishedObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

constexpr void __cordl_internal_set_finishedTrees(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

constexpr void __cordl_internal_set_objectJobHolders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  value) ;

constexpr void __cordl_internal_set_spawners(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>*  value) ;

constexpr void __cordl_internal_set_treeJobHolders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  value) ;

constexpr void __cordl_internal_set_treePrototypes(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  value) ;

/// @brief Method .ctor, addr 0x181417630, size 0x190, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__IsModifyingTerrain_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>* getStaticF_pools() ;

/// @brief Method get_IsModifyingTerrain, addr 0x1814177c0, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsModifyingTerrain() ;

static inline void setStaticF__IsModifyingTerrain_k__BackingField(bool  value) ;

static inline void setStaticF_pools(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::SpawnProcessor_Pool*>*  value) ;

/// @brief Method set_IsModifyingTerrain, addr 0x181417800, size 0x50, virtual false, abstract: false, final false
static inline void set_IsModifyingTerrain(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnProcessor(SpawnProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnProcessor(SpawnProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17927};

/// @brief Field objectJobHolders, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ObjectJobHolder*>*>*  ___objectJobHolders;

/// @brief Field finishedObjects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  ___finishedObjects;

/// @brief Field treeJobHolders, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreeJobHolder*>*>*  ___treeJobHolders;

/// @brief Field detailJobHolders, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailJobHolder*>*>*  ___detailJobHolders;

/// @brief Field finishedTrees, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  ___finishedTrees;

/// @brief Field finishedDetails, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  ___finishedDetails;

/// @brief Field spawners, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::ISpawner*>*  ___spawners;

/// @brief Field treePrototypes, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::TreePrototypeSerializable*>*  ___treePrototypes;

/// @brief Field detailPrototypes, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>*  ___detailPrototypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___objectJobHolders) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___finishedObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___treeJobHolders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___detailJobHolders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___finishedTrees) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___finishedDetails) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___spawners) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___treePrototypes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::SpawnProcessor, ___detailPrototypes) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::SpawnProcessor) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
