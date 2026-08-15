#pragma once
// IWYU pragma private; include "GlobalNamespace/MicroSplatMeshTerrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MicroSplatMeshTerrain)
namespace GlobalNamespace {
class MicroSplatMeshTerrain_MaterialSyncAll;
}
namespace GlobalNamespace {
class MicroSplatMeshTerrain_MaterialSync;
}
namespace JBooth::MicroSplat {
struct MicroSplatObject_TerrainDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MicroSplatMeshTerrain;
}
namespace GlobalNamespace {
class MicroSplatMeshTerrain_MaterialSync;
}
namespace GlobalNamespace {
class MicroSplatMeshTerrain_MaterialSyncAll;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MicroSplatMeshTerrain*);
MARK_REF_T(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*);
MARK_REF_T(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicroSplatMeshTerrain*, "", "MicroSplatMeshTerrain");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*, "", "MicroSplatMeshTerrain/MaterialSync");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*, "", "MicroSplatMeshTerrain/MaterialSyncAll");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MicroSplatMeshTerrain/MaterialSyncAll
class CORDL_TYPE MicroSplatMeshTerrain_MaterialSyncAll : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatMeshTerrain_MaterialSyncAll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatMeshTerrain_MaterialSyncAll", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatMeshTerrain_MaterialSyncAll(MicroSplatMeshTerrain_MaterialSyncAll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatMeshTerrain_MaterialSyncAll", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatMeshTerrain_MaterialSyncAll(MicroSplatMeshTerrain_MaterialSyncAll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: MicroSplatMeshTerrain/MaterialSync
class CORDL_TYPE MicroSplatMeshTerrain_MaterialSync : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Material*  m, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Material*  m) ;

static inline ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1803e3c00, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatMeshTerrain_MaterialSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatMeshTerrain_MaterialSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatMeshTerrain_MaterialSync(MicroSplatMeshTerrain_MaterialSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatMeshTerrain_MaterialSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatMeshTerrain_MaterialSync(MicroSplatMeshTerrain_MaterialSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20801};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies JBooth.MicroSplat.MicroSplatObject, JBooth.MicroSplat.MicroSplatObject::TerrainDescriptor, UnityEngine.MeshRenderer, UnityEngine.Texture2D
namespace GlobalNamespace {
// Is value type: false
// CS Name: MicroSplatMeshTerrain
class CORDL_TYPE MicroSplatMeshTerrain : public ::JBooth::MicroSplat::MicroSplatObject {
public:
// Declarations
using MaterialSync = ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync;

using MaterialSyncAll = ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll;

/// @brief Field OnMaterialSync, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMaterialSync, put=__cordl_internal_set_OnMaterialSync)) ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  OnMaterialSync;

/// @brief Field OnMaterialSyncAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMaterialSyncAll, put=setStaticF_OnMaterialSyncAll)) ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  OnMaterialSyncAll;

/// @brief Field controlTextures, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlTextures, put=__cordl_internal_set_controlTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  controlTextures;

/// @brief Field meshBlendMat, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshBlendMat, put=__cordl_internal_set_meshBlendMat)) ::UnityW<::UnityEngine::Material>  meshBlendMat;

/// @brief Field meshBlendMatInstance, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshBlendMatInstance, put=__cordl_internal_set_meshBlendMatInstance)) ::UnityW<::UnityEngine::Material>  meshBlendMatInstance;

/// @brief Field meshTerrains, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshTerrains, put=__cordl_internal_set_meshTerrains)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  meshTerrains;

/// @brief Field sInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sInstances, put=setStaticF_sInstances)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>*  sInstances;

/// @brief Field terrainDescriptor, offset 0xc8, size 0x20 
 __declspec(property(get=__cordl_internal_get_terrainDescriptor, put=__cordl_internal_set_terrainDescriptor)) ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor  terrainDescriptor;

/// @brief Method ApplyMeshBlendMap, addr 0x1813feb30, size 0xd0, virtual false, abstract: false, final false
inline void ApplyMeshBlendMap() ;

/// @brief Method Cleanup, addr 0x1813fec00, size 0x50, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method GetBounds, addr 0x1813fec50, size 0x130, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetMeshBlendMatInstance, addr 0x1813fed80, size 0x190, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMeshBlendMatInstance() ;

/// @brief Method GetTerrainDescriptor, addr 0x1813fef10, size 0x60, virtual true, abstract: false, final false
inline ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor GetTerrainDescriptor() ;

static inline ::GlobalNamespace::MicroSplatMeshTerrain* New_ctor() ;

/// @brief Method OnDisable, addr 0x1813fef70, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1813ff000, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1813ff0a0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Sync, addr 0x1813ff400, size 0x2a0, virtual false, abstract: false, final false
inline void Sync() ;

/// @brief Method SyncAll, addr 0x1813ff0b0, size 0x2f0, virtual false, abstract: false, final false
static inline void SyncAll() ;

/// @brief Method SyncMeshBlendMat, addr 0x1813ff3a0, size 0x60, virtual false, abstract: false, final false
inline void SyncMeshBlendMat() ;

constexpr ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync* const& __cordl_internal_get_OnMaterialSync() const;

constexpr ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*& __cordl_internal_get_OnMaterialSync() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_controlTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_controlTextures() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_meshBlendMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_meshBlendMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_meshBlendMatInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_meshBlendMatInstance() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_meshTerrains() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_meshTerrains() ;

constexpr ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor const& __cordl_internal_get_terrainDescriptor() const;

constexpr ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor& __cordl_internal_get_terrainDescriptor() ;

constexpr void __cordl_internal_set_OnMaterialSync(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  value) ;

constexpr void __cordl_internal_set_controlTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_meshBlendMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_meshBlendMatInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_meshTerrains(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_terrainDescriptor(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnMaterialSync, addr 0x1813ff7b0, size 0x90, virtual false, abstract: false, final false
inline void add_OnMaterialSync(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  value) ;

/// @brief Method add_OnMaterialSyncAll, addr 0x1813ff700, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnMaterialSyncAll(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  value) ;

static inline ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll* getStaticF_OnMaterialSyncAll() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>* getStaticF_sInstances() ;

/// @brief Method remove_OnMaterialSync, addr 0x1813ff8f0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnMaterialSync(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  value) ;

/// @brief Method remove_OnMaterialSyncAll, addr 0x1813ff840, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnMaterialSyncAll(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  value) ;

static inline void setStaticF_OnMaterialSyncAll(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  value) ;

static inline void setStaticF_sInstances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatMeshTerrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatMeshTerrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatMeshTerrain(MicroSplatMeshTerrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatMeshTerrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatMeshTerrain(MicroSplatMeshTerrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20802};

/// @brief Field OnMaterialSync, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  ___OnMaterialSync;

/// @brief Field meshTerrains, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___meshTerrains;

/// @brief Field controlTextures, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___controlTextures;

/// @brief Field meshBlendMat, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___meshBlendMat;

/// @brief Field meshBlendMatInstance, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___meshBlendMatInstance;

/// @brief Field terrainDescriptor, offset: 0xc8, size: 0x20, def value: None
 ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor  ___terrainDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MicroSplatMeshTerrain, ___OnMaterialSync) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicroSplatMeshTerrain, ___meshTerrains) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicroSplatMeshTerrain, ___controlTextures) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicroSplatMeshTerrain, ___meshBlendMat) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicroSplatMeshTerrain, ___meshBlendMatInstance) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MicroSplatMeshTerrain, ___terrainDescriptor) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MicroSplatMeshTerrain) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
