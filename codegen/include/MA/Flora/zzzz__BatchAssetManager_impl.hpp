#pragma once
// IWYU pragma private; include "MA/Flora/BatchAssetManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__BatchAssetManager_def.hpp"
#include "MA/Flora/zzzz__BatchAssetManager_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailMaterialCache_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchAssetManager_Storage.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::BatchAssetManager_Storage::get_IsInitialized)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814622e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager_Storage*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::BatchAssetManager_Storage::setStaticF_BatchRendererGroup(::UnityEngine::Rendering::BatchRendererGroup*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::BatchRendererGroup*, "BatchRendererGroup", ::MA::Flora::BatchAssetManager_Storage*>(std::forward<::UnityEngine::Rendering::BatchRendererGroup*>(value));
}
inline ::UnityEngine::Rendering::BatchRendererGroup* MA::Flora::BatchAssetManager_Storage::getStaticF_BatchRendererGroup()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::BatchRendererGroup*, "BatchRendererGroup", ::MA::Flora::BatchAssetManager_Storage*>();
}
inline void MA::Flora::BatchAssetManager_Storage::setStaticF_BatchMaterialLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>*, "BatchMaterialLookup", ::MA::Flora::BatchAssetManager_Storage*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>* MA::Flora::BatchAssetManager_Storage::getStaticF_BatchMaterialLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>*, "BatchMaterialLookup", ::MA::Flora::BatchAssetManager_Storage*>();
}
inline void MA::Flora::BatchAssetManager_Storage::setStaticF_BatchMeshLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>*, "BatchMeshLookup", ::MA::Flora::BatchAssetManager_Storage*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>* MA::Flora::BatchAssetManager_Storage::getStaticF_BatchMeshLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>*, "BatchMeshLookup", ::MA::Flora::BatchAssetManager_Storage*>();
}
inline void MA::Flora::BatchAssetManager_Storage::setStaticF_MeshEntityIdLookup(::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>*, "MeshEntityIdLookup", ::MA::Flora::BatchAssetManager_Storage*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>* MA::Flora::BatchAssetManager_Storage::getStaticF_MeshEntityIdLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchMeshID,::UnityEngine::EntityId>*, "MeshEntityIdLookup", ::MA::Flora::BatchAssetManager_Storage*>();
}
inline void MA::Flora::BatchAssetManager_Storage::setStaticF_GrassMaterialCache(::MA::Flora::TerrainDetailMaterialCache*  value)  {
::cordl_internals::setStaticField<::MA::Flora::TerrainDetailMaterialCache*, "GrassMaterialCache", ::MA::Flora::BatchAssetManager_Storage*>(std::forward<::MA::Flora::TerrainDetailMaterialCache*>(value));
}
inline ::MA::Flora::TerrainDetailMaterialCache* MA::Flora::BatchAssetManager_Storage::getStaticF_GrassMaterialCache()  {
return ::cordl_internals::getStaticField<::MA::Flora::TerrainDetailMaterialCache*, "GrassMaterialCache", ::MA::Flora::BatchAssetManager_Storage*>();
}
inline bool MA::Flora::BatchAssetManager_Storage::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager_Storage*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchAssetManager_Storage::BatchAssetManager_Storage()   {
}
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::BatchAssetManager::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181455fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::BatchAssetManager::Shutdown)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181456670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.GetBatchRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchRendererGroup* (*)()>(&::MA::Flora::BatchAssetManager::GetBatchRendererGroup)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181455e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetBatchRendererGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.GetTerrainGrassPlaceholderPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)()>(&::MA::Flora::BatchAssetManager::GetTerrainGrassPlaceholderPrefab)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181455f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetTerrainGrassPlaceholderPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.NextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::BatchAssetManager::NextFrame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181456320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"NextFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.OnTerrainRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EntityId)>(&::MA::Flora::BatchAssetManager::OnTerrainRemoved)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814563c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"OnTerrainRemoved", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.OnTerrainChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EntityId)>(&::MA::Flora::BatchAssetManager::OnTerrainChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181456370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"OnTerrainChanged", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.GetOrCreateTerrainGrassMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::by_ref<::MA::Flora::TerrainDetailPrototype>)>(&::MA::Flora::BatchAssetManager::GetOrCreateTerrainGrassMaterial)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181455ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetOrCreateTerrainGrassMaterial", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailPrototype>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.RegisterMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchMaterialID (*)(::UnityEngine::Material*)>(&::MA::Flora::BatchAssetManager::RegisterMaterial)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181456410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"RegisterMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.UnregisterMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchMaterialID)>(&::MA::Flora::BatchAssetManager::UnregisterMaterial)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181456740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"UnregisterMaterial", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.MaterialsDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::BatchAssetManager::MaterialsDestroyed)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181456090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"MaterialsDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.RegisterMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchMeshID (*)(::UnityEngine::Mesh*)>(&::MA::Flora::BatchAssetManager::RegisterMesh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181456520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"RegisterMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.UnregisterMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchMeshID)>(&::MA::Flora::BatchAssetManager::UnregisterMesh)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814568a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"UnregisterMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.GetRegisteredMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Rendering::BatchMeshID)>(&::MA::Flora::BatchAssetManager::GetRegisteredMesh)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181455ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetRegisteredMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchAssetManager.MeshesDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::BatchAssetManager::MeshesDestroyed)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"MeshesDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::BatchAssetManager::Initialize(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batchRendererGroup, resources);
}
inline void MA::Flora::BatchAssetManager::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchRendererGroup* MA::Flora::BatchAssetManager::GetBatchRendererGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetBatchRendererGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchRendererGroup*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::BatchAssetManager::GetTerrainGrassPlaceholderPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetTerrainGrassPlaceholderPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method);
}
inline void MA::Flora::BatchAssetManager::NextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"NextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::BatchAssetManager::OnTerrainRemoved(::UnityEngine::EntityId  terrainId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"OnTerrainRemoved", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainId);
}
inline void MA::Flora::BatchAssetManager::OnTerrainChanged(::UnityEngine::EntityId  terrainId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"OnTerrainChanged", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainId);
}
inline ::UnityW<::UnityEngine::Material> MA::Flora::BatchAssetManager::GetOrCreateTerrainGrassMaterial(::by_ref<::MA::Flora::TerrainDetailPrototype>  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetOrCreateTerrainGrassMaterial", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainDetailPrototype>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, prototype);
}
inline ::UnityEngine::Rendering::BatchMaterialID MA::Flora::BatchAssetManager::RegisterMaterial(::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"RegisterMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchMaterialID>(nullptr, ___internal_method, material);
}
inline void MA::Flora::BatchAssetManager::UnregisterMaterial(::UnityEngine::Rendering::BatchMaterialID  batchMaterialID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"UnregisterMaterial", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchMaterialID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batchMaterialID);
}
inline void MA::Flora::BatchAssetManager::MaterialsDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedMaterials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"MaterialsDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destroyedMaterials);
}
inline ::UnityEngine::Rendering::BatchMeshID MA::Flora::BatchAssetManager::RegisterMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"RegisterMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchMeshID>(nullptr, ___internal_method, mesh);
}
inline void MA::Flora::BatchAssetManager::UnregisterMesh(::UnityEngine::Rendering::BatchMeshID  batchMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"UnregisterMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batchMesh);
}
inline ::UnityW<::UnityEngine::Mesh> MA::Flora::BatchAssetManager::GetRegisteredMesh(::UnityEngine::Rendering::BatchMeshID  batchMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"GetRegisteredMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchMeshID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, batchMesh);
}
inline void MA::Flora::BatchAssetManager::MeshesDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  destroyedMeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchAssetManager*>(),
                        {"MeshesDestroyed", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destroyedMeshes);
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchAssetManager::BatchAssetManager()   {
}
