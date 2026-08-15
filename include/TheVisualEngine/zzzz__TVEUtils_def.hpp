#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TVEUtils)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVEGameObjectData;
}
namespace TheVisualEngine {
class TVEModelData;
}
namespace TheVisualEngine {
class TVEProxyData;
}
namespace TheVisualEngine {
struct TVETerrainTexture;
}
namespace TheVisualEngine {
class TVETerrain;
}
namespace UnityEngine {
struct Color;
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
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEUtils;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEUtils*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEUtils*, "TheVisualEngine", "TVEUtils");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEUtils
class CORDL_TYPE TVEUtils : public ::System::Object {
public:
// Declarations
/// @brief Method CombineColliderMeshes, addr 0x1804ae9f0, size 0x250, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CombineColliderMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects) ;

/// @brief Method CombinePackedMeshes, addr 0x1804aec40, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CombinePackedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects, bool  mergeSubMeshes) ;

/// @brief Method CombinePackedMeshes, addr 0x1804aec50, size 0x4a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CombinePackedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects, bool  mergeSubMeshes, bool  usePrebakedPivots) ;

/// @brief Method CopyTerrainDataToElement, addr 0x1804af0f0, size 0x670, virtual false, abstract: false, final false
static inline void CopyTerrainDataToElement(::UnityEngine::Terrain*  terrain, ::TheVisualEngine::TVETerrainTexture  terrainMask, ::UnityEngine::Material*  material) ;

/// @brief Method CopyTerrainDataToMaterial, addr 0x1804b01f0, size 0x850, virtual false, abstract: false, final false
static inline void CopyTerrainDataToMaterial(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material) ;

/// @brief Method CopyTerrainDataToMaterial, addr 0x1804af760, size 0xa90, virtual false, abstract: false, final false
static inline void CopyTerrainDataToMaterial(::TheVisualEngine::TVETerrain*  tveTerrain, ::UnityEngine::Material*  material) ;

/// @brief Method CopyTerrainDataToRenderer, addr 0x1804b0a40, size 0xb40, virtual false, abstract: false, final false
static inline void CopyTerrainDataToRenderer(::TheVisualEngine::TVETerrain*  tveTerrain, ::UnityEngine::Renderer*  renderer) ;

/// @brief Method CreateElement, addr 0x1804b1890, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateElement(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Material*  material) ;

/// @brief Method CreateElement, addr 0x1804b1af0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateElement(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Material*  material, bool  customMaterial) ;

/// @brief Method CreateElement, addr 0x1804b1810, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateElement(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale, ::UnityEngine::Transform*  parent, ::UnityEngine::Material*  material) ;

/// @brief Method CreateElement, addr 0x1804b18f0, size 0x200, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateElement(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale, ::UnityEngine::Transform*  parent, ::UnityEngine::Material*  material, bool  customMaterial) ;

/// @brief Method CreateElement, addr 0x1804b1880, size 0x10, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateElement(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material) ;

/// @brief Method CreateElement, addr 0x1804b1580, size 0x290, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateElement(::UnityEngine::Terrain*  terrain, ::UnityEngine::Material*  material, bool  customMaterial) ;

/// @brief Method CreatePackedMesh, addr 0x1804b1b90, size 0x790, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CreatePackedMesh(::TheVisualEngine::TVEModelData*  meshData) ;

/// @brief Method CreateProxyTextureFromTerrain, addr 0x1804b2320, size 0x460, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> CreateProxyTextureFromTerrain(::TheVisualEngine::TVEProxyData*  proxyData) ;

/// @brief Method CreateQuadFromTerrain, addr 0x1804b2780, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CreateQuadFromTerrain(::UnityEngine::Vector3  terrainPos, ::UnityEngine::Vector3  terrainSize) ;

/// @brief Method GetChildRecursive, addr 0x1804b2bd0, size 0x240, virtual false, abstract: false, final false
static inline void GetChildRecursive(::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects) ;

/// @brief Method GetChildRecursive, addr 0x1804b2950, size 0x280, virtual false, abstract: false, final false
static inline void GetChildRecursive(::UnityEngine::GameObject*  go, ::System::Collections::Generic::List_1<::TheVisualEngine::TVEGameObjectData*>*  gameObjectsData) ;

/// @brief Method GetGlobalTextureData, addr 0x1804b2e10, size 0x440, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetGlobalTextureData(::StringW  globalTexture, ::UnityEngine::Vector3  position, int32_t  layer, ::UnityEngine::Texture2DArray*  texture2DArray) ;

/// @brief Method GetSubmesh, addr 0x1804b3250, size 0x6e0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetSubmesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex) ;

static inline ::TheVisualEngine::TVEUtils* New_ctor() ;

/// @brief Method SetElementSettings, addr 0x1804b3930, size 0x730, virtual false, abstract: false, final false
static inline void SetElementSettings(::UnityEngine::Material*  material) ;

/// @brief Method SetImpostorSettings, addr 0x1804b4060, size 0x50, virtual false, abstract: false, final false
static inline void SetImpostorSettings(::UnityEngine::Material*  oldMaterial, ::UnityEngine::Material*  material) ;

/// @brief Method SetMaterialInternal, addr 0x1804b40b0, size 0x770, virtual false, abstract: false, final false
static inline void SetMaterialInternal(::UnityEngine::Material*  material) ;

/// @brief Method SetMaterialLegacy, addr 0x1804b4820, size 0x17a0, virtual false, abstract: false, final false
static inline void SetMaterialLegacy(::UnityEngine::Material*  material) ;

/// @brief Method SetMaterialRuntime, addr 0x1804b5fc0, size 0x2e30, virtual false, abstract: false, final false
static inline void SetMaterialRuntime(::UnityEngine::Material*  material) ;

/// @brief Method SetMaterialSettings, addr 0x1804b8df0, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialSettings(::UnityEngine::Material*  material) ;

/// @brief Method SetMaterialUpgrade, addr 0x1804b8e80, size 0x60, virtual false, abstract: false, final false
static inline void SetMaterialUpgrade(::UnityEngine::Material*  material) ;

/// @brief Method SplitPackedMesh, addr 0x1804b8ee0, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* SplitPackedMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEUtils(TVEUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEUtils(TVEUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19578};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TheVisualEngine::TVEUtils) == 0x10, "Size mismatch!");

} // namespace end def TheVisualEngine
