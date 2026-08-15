#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
#include "TheVisualEngine/zzzz__TVERefreshMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TVETerrain)
namespace TheVisualEngine {
class TVETerrainRenderer;
}
namespace TheVisualEngine {
class TVETerrainSettings;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace TheVisualEngine {
class TVETerrain;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVETerrain*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETerrain*, "TheVisualEngine", "TVETerrain");
// Dependencies Boxophobic.StyledGUI.StyledMonoBehaviour, TheVisualEngine.TVERefreshMode, UnityEngine.Vector3
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVETerrain
class CORDL_TYPE TVETerrain : public ::Boxophobic::StyledGUI::StyledMonoBehaviour {
public:
// Declarations
/// @brief Field isActive, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field isValidRenderer, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_isValidRenderer, put=__cordl_internal_set_isValidRenderer)) bool  isValidRenderer;

/// @brief Field isValidTerrain, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_isValidTerrain, put=__cordl_internal_set_isValidTerrain)) bool  isValidTerrain;

/// @brief Field meshFilter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::Renderer>  meshRenderer;

/// @brief Field terrain, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrain, put=__cordl_internal_set_terrain)) ::UnityW<::UnityEngine::Terrain>  terrain;

/// @brief Field terrainBounds, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainBounds, put=__cordl_internal_set_terrainBounds)) float_t  terrainBounds;

/// @brief Field terrainID, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainID, put=__cordl_internal_set_terrainID)) int32_t  terrainID;

/// @brief Field terrainLayers, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainLayers, put=__cordl_internal_set_terrainLayers)) int32_t  terrainLayers;

/// @brief Field terrainMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainMaterial, put=__cordl_internal_set_terrainMaterial)) ::UnityW<::UnityEngine::Material>  terrainMaterial;

/// @brief Field terrainPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_terrainPosition, put=__cordl_internal_set_terrainPosition)) ::UnityEngine::Vector3  terrainPosition;

/// @brief Field terrainPropertyBlock, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainPropertyBlock, put=__cordl_internal_set_terrainPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  terrainPropertyBlock;

/// @brief Field terrainProxyMesh, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainProxyMesh, put=__cordl_internal_set_terrainProxyMesh)) ::UnityW<::UnityEngine::Mesh>  terrainProxyMesh;

/// @brief Field terrainRefresh, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainRefresh, put=__cordl_internal_set_terrainRefresh)) ::TheVisualEngine::TVERefreshMode  terrainRefresh;

/// @brief Field terrainRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainRenderer, put=__cordl_internal_set_terrainRenderer)) ::TheVisualEngine::TVETerrainRenderer*  terrainRenderer;

/// @brief Field terrainSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainSettings, put=__cordl_internal_set_terrainSettings)) ::TheVisualEngine::TVETerrainSettings*  terrainSettings;

/// @brief Field terrainSize, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_terrainSize, put=__cordl_internal_set_terrainSize)) ::UnityEngine::Vector3  terrainSize;

/// @brief Method AddTerrainToManager, addr 0x1804ac910, size 0xd0, virtual false, abstract: false, final false
inline void AddTerrainToManager() ;

/// @brief Method CopyLayerSettings, addr 0x1804ac9e0, size 0x4f0, virtual false, abstract: false, final false
inline void CopyLayerSettings(::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock, ::UnityEngine::TerrainLayer*  layer, int32_t  index) ;

/// @brief Method CreateProxyTextures, addr 0x1804aced0, size 0x3d0, virtual false, abstract: false, final false
inline void CreateProxyTextures(bool  saveTextures) ;

/// @brief Method DestroyProxyTextures, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DestroyProxyTextures() ;

/// @brief Method GetProxyName, addr 0x1804ad2a0, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetProxyName() ;

/// @brief Method InitializeTerrain, addr 0x1804ad320, size 0x5e0, virtual false, abstract: false, final false
inline void InitializeTerrain() ;

static inline ::TheVisualEngine::TVETerrain* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1804ad900, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1804ad900, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804ad930, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TryGetProxyTextures, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void TryGetProxyTextures() ;

/// @brief Method UpdateProxySettings, addr 0x1804ada50, size 0x1c0, virtual false, abstract: false, final false
inline void UpdateProxySettings() ;

/// @brief Method UpdateTerrainSettings, addr 0x1804adc10, size 0xd50, virtual false, abstract: false, final false
inline void UpdateTerrainSettings() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr bool const& __cordl_internal_get_isValidRenderer() const;

constexpr bool& __cordl_internal_get_isValidRenderer() ;

constexpr bool const& __cordl_internal_get_isValidTerrain() const;

constexpr bool& __cordl_internal_get_isValidTerrain() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_meshRenderer() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrain() ;

constexpr float_t const& __cordl_internal_get_terrainBounds() const;

constexpr float_t& __cordl_internal_get_terrainBounds() ;

constexpr int32_t const& __cordl_internal_get_terrainID() const;

constexpr int32_t& __cordl_internal_get_terrainID() ;

constexpr int32_t const& __cordl_internal_get_terrainLayers() const;

constexpr int32_t& __cordl_internal_get_terrainLayers() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_terrainMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_terrainMaterial() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_terrainPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_terrainPosition() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_terrainPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_terrainPropertyBlock() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_terrainProxyMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_terrainProxyMesh() ;

constexpr ::TheVisualEngine::TVERefreshMode const& __cordl_internal_get_terrainRefresh() const;

constexpr ::TheVisualEngine::TVERefreshMode& __cordl_internal_get_terrainRefresh() ;

constexpr ::TheVisualEngine::TVETerrainRenderer* const& __cordl_internal_get_terrainRenderer() const;

constexpr ::TheVisualEngine::TVETerrainRenderer*& __cordl_internal_get_terrainRenderer() ;

constexpr ::TheVisualEngine::TVETerrainSettings* const& __cordl_internal_get_terrainSettings() const;

constexpr ::TheVisualEngine::TVETerrainSettings*& __cordl_internal_get_terrainSettings() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_terrainSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_terrainSize() ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_isValidRenderer(bool  value) ;

constexpr void __cordl_internal_set_isValidTerrain(bool  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set_terrainBounds(float_t  value) ;

constexpr void __cordl_internal_set_terrainID(int32_t  value) ;

constexpr void __cordl_internal_set_terrainLayers(int32_t  value) ;

constexpr void __cordl_internal_set_terrainMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_terrainPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_terrainPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_terrainProxyMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_terrainRefresh(::TheVisualEngine::TVERefreshMode  value) ;

constexpr void __cordl_internal_set_terrainRenderer(::TheVisualEngine::TVETerrainRenderer*  value) ;

constexpr void __cordl_internal_set_terrainSettings(::TheVisualEngine::TVETerrainSettings*  value) ;

constexpr void __cordl_internal_set_terrainSize(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1804ae960, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVETerrain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVETerrain", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVETerrain(TVETerrain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVETerrain", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVETerrain(TVETerrain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19577};

/// @brief Field terrainRefresh, offset: 0x20, size: 0x4, def value: None
 ::TheVisualEngine::TVERefreshMode  ___terrainRefresh;

/// @brief Field terrainBounds, offset: 0x24, size: 0x4, def value: None
 float_t  ___terrainBounds;

/// @brief Field terrainMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___terrainMaterial;

/// @brief Field terrainSettings, offset: 0x30, size: 0x8, def value: None
 ::TheVisualEngine::TVETerrainSettings*  ___terrainSettings;

/// @brief Field terrainRenderer, offset: 0x38, size: 0x8, def value: None
 ::TheVisualEngine::TVETerrainRenderer*  ___terrainRenderer;

/// @brief Field terrain, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrain;

/// @brief Field meshRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___meshRenderer;

/// @brief Field meshFilter, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field terrainPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___terrainPosition;

/// @brief Field terrainSize, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___terrainSize;

/// @brief Field terrainLayers, offset: 0x70, size: 0x4, def value: None
 int32_t  ___terrainLayers;

/// @brief Field terrainPropertyBlock, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___terrainPropertyBlock;

/// @brief Field isActive, offset: 0x80, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field terrainID, offset: 0x84, size: 0x4, def value: None
 int32_t  ___terrainID;

/// @brief Field isValidTerrain, offset: 0x88, size: 0x1, def value: None
 bool  ___isValidTerrain;

/// @brief Field isValidRenderer, offset: 0x89, size: 0x1, def value: None
 bool  ___isValidRenderer;

/// @brief Field terrainProxyMesh, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___terrainProxyMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainRefresh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainBounds) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrain) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___meshRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___meshFilter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainLayers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainPropertyBlock) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___isActive) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainID) == 0x84, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___isValidTerrain) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___isValidRenderer) == 0x89, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrain, ___terrainProxyMesh) == 0x90, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETerrain) == 0x98, "Size mismatch!");

} // namespace end def TheVisualEngine
