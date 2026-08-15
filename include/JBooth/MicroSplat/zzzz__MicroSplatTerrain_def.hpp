#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatTerrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MicroSplatTerrain)
namespace JBooth::MicroSplat {
struct MicroSplatObject_TerrainDescriptor;
}
namespace JBooth::MicroSplat {
class MicroSplatTerrain_MaterialSyncAll;
}
namespace JBooth::MicroSplat {
class MicroSplatTerrain_MaterialSync;
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
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroSplat {
class MicroSplatTerrain;
}
namespace JBooth::MicroSplat {
class MicroSplatTerrain_MaterialSync;
}
namespace JBooth::MicroSplat {
class MicroSplatTerrain_MaterialSyncAll;
}
// Write type traits
MARK_REF_T(::JBooth::MicroSplat::MicroSplatTerrain*);
MARK_REF_T(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*);
MARK_REF_T(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatTerrain*, "JBooth.MicroSplat", "MicroSplatTerrain");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*, "JBooth.MicroSplat", "MicroSplatTerrain/MaterialSync");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*, "JBooth.MicroSplat", "MicroSplatTerrain/MaterialSyncAll");
// Dependencies System.MulticastDelegate
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatTerrain/MaterialSyncAll
class CORDL_TYPE MicroSplatTerrain_MaterialSyncAll : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatTerrain_MaterialSyncAll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatTerrain_MaterialSyncAll", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatTerrain_MaterialSyncAll(MicroSplatTerrain_MaterialSyncAll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatTerrain_MaterialSyncAll", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatTerrain_MaterialSyncAll(MicroSplatTerrain_MaterialSyncAll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll) == 0x80, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies System.MulticastDelegate
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatTerrain/MaterialSync
class CORDL_TYPE MicroSplatTerrain_MaterialSync : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Material*  m, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Material*  m) ;

static inline ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1803e3c00, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatTerrain_MaterialSync() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatTerrain_MaterialSync", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatTerrain_MaterialSync(MicroSplatTerrain_MaterialSync && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatTerrain_MaterialSync", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatTerrain_MaterialSync(MicroSplatTerrain_MaterialSync const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync) == 0x80, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies JBooth.MicroSplat.MicroSplatObject, UnityEngine.Vector3
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatTerrain
class CORDL_TYPE MicroSplatTerrain : public ::JBooth::MicroSplat::MicroSplatObject {
public:
// Declarations
using MaterialSync = ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync;

using MaterialSyncAll = ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll;

/// @brief Field OnMaterialSync, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMaterialSync, put=__cordl_internal_set_OnMaterialSync)) ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  OnMaterialSync;

/// @brief Field OnMaterialSyncAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMaterialSyncAll, put=setStaticF_OnMaterialSyncAll)) ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  OnMaterialSyncAll;

/// @brief Field baseMapShader, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseMapShader, put=__cordl_internal_set_baseMapShader)) ::UnityW<::UnityEngine::Shader>  baseMapShader;

/// @brief Field customControl0, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl0, put=__cordl_internal_set_customControl0)) ::UnityW<::UnityEngine::Texture2D>  customControl0;

/// @brief Field customControl1, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl1, put=__cordl_internal_set_customControl1)) ::UnityW<::UnityEngine::Texture2D>  customControl1;

/// @brief Field customControl2, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl2, put=__cordl_internal_set_customControl2)) ::UnityW<::UnityEngine::Texture2D>  customControl2;

/// @brief Field customControl3, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl3, put=__cordl_internal_set_customControl3)) ::UnityW<::UnityEngine::Texture2D>  customControl3;

/// @brief Field customControl4, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl4, put=__cordl_internal_set_customControl4)) ::UnityW<::UnityEngine::Texture2D>  customControl4;

/// @brief Field customControl5, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl5, put=__cordl_internal_set_customControl5)) ::UnityW<::UnityEngine::Texture2D>  customControl5;

/// @brief Field customControl6, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl6, put=__cordl_internal_set_customControl6)) ::UnityW<::UnityEngine::Texture2D>  customControl6;

/// @brief Field customControl7, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customControl7, put=__cordl_internal_set_customControl7)) ::UnityW<::UnityEngine::Texture2D>  customControl7;

/// @brief Field patchBoundsMultiplier, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_patchBoundsMultiplier, put=__cordl_internal_set_patchBoundsMultiplier)) ::UnityEngine::Vector3  patchBoundsMultiplier;

/// @brief Field reenabled, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_reenabled, put=__cordl_internal_set_reenabled)) bool  reenabled;

/// @brief Field sInstances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sInstances, put=setStaticF_sInstances)) ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>*  sInstances;

/// @brief Field terrain, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrain, put=__cordl_internal_set_terrain)) ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Method Awake, addr 0x181401dc0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Cleanup, addr 0x181401df0, size 0x70, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method GetBounds, addr 0x181401e60, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetTerrainDescriptor, addr 0x181401ea0, size 0xf0, virtual true, abstract: false, final false
inline ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor GetTerrainDescriptor() ;

static inline ::JBooth::MicroSplat::MicroSplatTerrain* New_ctor() ;

/// @brief Method OnDisable, addr 0x181401f90, size 0xb0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181402040, size 0xd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x181402110, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Sync, addr 0x1814021c0, size 0x4b0, virtual false, abstract: false, final false
inline void Sync() ;

/// @brief Method SyncAll, addr 0x181402120, size 0xa0, virtual false, abstract: false, final false
static inline void SyncAll() ;

constexpr ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync* const& __cordl_internal_get_OnMaterialSync() const;

constexpr ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*& __cordl_internal_get_OnMaterialSync() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_baseMapShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_baseMapShader() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl0() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl0() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl1() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl1() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl2() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl2() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl3() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl3() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl4() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl4() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl5() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl5() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl6() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl6() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_customControl7() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_customControl7() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_patchBoundsMultiplier() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_patchBoundsMultiplier() ;

constexpr bool const& __cordl_internal_get_reenabled() const;

constexpr bool& __cordl_internal_get_reenabled() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrain() ;

constexpr void __cordl_internal_set_OnMaterialSync(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  value) ;

constexpr void __cordl_internal_set_baseMapShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_customControl0(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl1(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl2(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl3(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl4(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl5(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl6(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_customControl7(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_patchBoundsMultiplier(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reenabled(bool  value) ;

constexpr void __cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value) ;

/// @brief Method .ctor, addr 0x1814026d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnMaterialSync, addr 0x1814027b0, size 0x90, virtual false, abstract: false, final false
inline void add_OnMaterialSync(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  value) ;

/// @brief Method add_OnMaterialSyncAll, addr 0x181402700, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnMaterialSyncAll(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  value) ;

static inline ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll* getStaticF_OnMaterialSyncAll() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>* getStaticF_sInstances() ;

/// @brief Method remove_OnMaterialSync, addr 0x1814028f0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnMaterialSync(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  value) ;

/// @brief Method remove_OnMaterialSyncAll, addr 0x181402840, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnMaterialSyncAll(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  value) ;

static inline void setStaticF_OnMaterialSyncAll(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  value) ;

static inline void setStaticF_sInstances(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatTerrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatTerrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatTerrain(MicroSplatTerrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatTerrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatTerrain(MicroSplatTerrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20816};

/// @brief Field OnMaterialSync, offset: 0xa0, size: 0x8, def value: None
 ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  ___OnMaterialSync;

/// @brief Field terrain, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrain;

/// @brief Field baseMapShader, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___baseMapShader;

/// @brief Field customControl0, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl0;

/// @brief Field customControl1, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl1;

/// @brief Field customControl2, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl2;

/// @brief Field customControl3, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl3;

/// @brief Field customControl4, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl4;

/// @brief Field customControl5, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl5;

/// @brief Field customControl6, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl6;

/// @brief Field customControl7, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___customControl7;

/// @brief Field patchBoundsMultiplier, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___patchBoundsMultiplier;

/// @brief Field reenabled, offset: 0x104, size: 0x1, def value: None
 bool  ___reenabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___OnMaterialSync) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___terrain) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___baseMapShader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl0) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl1) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl2) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl3) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl4) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl5) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl6) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___customControl7) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___patchBoundsMultiplier) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatTerrain, ___reenabled) == 0x104, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatTerrain) == 0x108, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
