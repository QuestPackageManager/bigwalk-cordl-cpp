#pragma once
// IWYU pragma private; include "MA/Flora/BatchAssetManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BatchAssetManager)
namespace MA::Flora {
class BatchAssetManager_Storage;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
class TerrainDetailMaterialCache;
}
namespace MA::Flora {
struct TerrainDetailPrototype;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct BatchMeshID;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
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
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace MA::Flora {
class BatchAssetManager;
}
namespace MA::Flora {
class BatchAssetManager_Storage;
}
// Write type traits
MARK_REF_T(::MA::Flora::BatchAssetManager*);
MARK_REF_T(::MA::Flora::BatchAssetManager_Storage*);
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchAssetManager*, "MA.Flora", "BatchAssetManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::BatchAssetManager_Storage*, "MA.Flora", "BatchAssetManager/Storage");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.BatchAssetManager/Storage
class CORDL_TYPE BatchAssetManager_Storage : public ::System::Object {
public:
// Declarations
/// @brief Field BatchMaterialLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BatchMaterialLookup, put=setStaticF_BatchMaterialLookup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>*  BatchMaterialLookup;

/// @brief Field BatchMeshLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BatchMeshLookup, put=setStaticF_BatchMeshLookup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>*  BatchMeshLookup;

/// @brief Field BatchRendererGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BatchRendererGroup, put=setStaticF_BatchRendererGroup)) ::UnityEngine::Rendering::BatchRendererGroup*  BatchRendererGroup;

/// @brief Field GrassMaterialCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GrassMaterialCache, put=setStaticF_GrassMaterialCache)) ::MA::Flora::TerrainDetailMaterialCache*  GrassMaterialCache;

/// @brief Field MeshEntityIdLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MeshEntityIdLookup, put=setStaticF_MeshEntityIdLookup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>*  MeshEntityIdLookup;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>* getStaticF_BatchMaterialLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>* getStaticF_BatchMeshLookup() ;

static inline ::UnityEngine::Rendering::BatchRendererGroup* getStaticF_BatchRendererGroup() ;

static inline ::MA::Flora::TerrainDetailMaterialCache* getStaticF_GrassMaterialCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>* getStaticF_MeshEntityIdLookup() ;

/// @brief Method get_IsInitialized, addr 0x1814622e0, size 0x40, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

static inline void setStaticF_BatchMaterialLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>*  value) ;

static inline void setStaticF_BatchMeshLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>*  value) ;

static inline void setStaticF_BatchRendererGroup(::UnityEngine::Rendering::BatchRendererGroup*  value) ;

static inline void setStaticF_GrassMaterialCache(::MA::Flora::TerrainDetailMaterialCache*  value) ;

static inline void setStaticF_MeshEntityIdLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatchAssetManager_Storage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatchAssetManager_Storage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchAssetManager_Storage(BatchAssetManager_Storage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchAssetManager_Storage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchAssetManager_Storage(BatchAssetManager_Storage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::BatchAssetManager_Storage) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.BatchAssetManager
class CORDL_TYPE BatchAssetManager : public ::System::Object {
public:
// Declarations
using Storage = ::MA::Flora::BatchAssetManager_Storage;

/// @brief Method GetBatchRendererGroup, addr 0x181455e60, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchRendererGroup* GetBatchRendererGroup() ;

/// @brief Method GetOrCreateTerrainGrassMaterial, addr 0x181455ea0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetOrCreateTerrainGrassMaterial(::by_ref<::MA::Flora::TerrainDetailPrototype>  prototype) ;

/// @brief Method GetRegisteredMesh, addr 0x181455ef0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetRegisteredMesh(::UnityEngine::Rendering::BatchMeshID  batchMesh) ;

/// @brief Method GetTerrainGrassPlaceholderPrefab, addr 0x181455f90, size 0x50, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> GetTerrainGrassPlaceholderPrefab() ;

/// @brief Method Initialize, addr 0x181455fe0, size 0xb0, virtual false, abstract: false, final false
static inline void Initialize(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Method MaterialsDestroyed, addr 0x181456090, size 0x130, virtual false, abstract: false, final false
static inline void MaterialsDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedMaterials) ;

/// @brief Method MeshesDestroyed, addr 0x1814561c0, size 0x160, virtual false, abstract: false, final false
static inline void MeshesDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedMeshes) ;

/// @brief Method NextFrame, addr 0x181456320, size 0x50, virtual false, abstract: false, final false
static inline void NextFrame() ;

/// @brief Method OnTerrainChanged, addr 0x181456370, size 0x50, virtual false, abstract: false, final false
static inline void OnTerrainChanged(::UnityEngine::EntityId  terrainId) ;

/// @brief Method OnTerrainRemoved, addr 0x1814563c0, size 0x50, virtual false, abstract: false, final false
static inline void OnTerrainRemoved(::UnityEngine::EntityId  terrainId) ;

/// @brief Method RegisterMaterial, addr 0x181456410, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchMaterialID RegisterMaterial(::UnityEngine::Material*  material) ;

/// @brief Method RegisterMesh, addr 0x181456520, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchMeshID RegisterMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method Shutdown, addr 0x181456670, size 0xd0, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method UnregisterMaterial, addr 0x181456740, size 0x160, virtual false, abstract: false, final false
static inline void UnregisterMaterial(::UnityEngine::Rendering::BatchMaterialID  batchMaterialID) ;

/// @brief Method UnregisterMesh, addr 0x1814568a0, size 0x130, virtual false, abstract: false, final false
static inline void UnregisterMesh(::UnityEngine::Rendering::BatchMeshID  batchMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatchAssetManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatchAssetManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchAssetManager(BatchAssetManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchAssetManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchAssetManager(BatchAssetManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12858};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::BatchAssetManager) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
