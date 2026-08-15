#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementVisibility_def.hpp"
#include "TheVisualEngine/zzzz__TVERefreshMode_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrainTexture_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEElement)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVEElementMaterialData;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEElement;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEElement*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElement*, "TheVisualEngine", "TVEElement");
// Dependencies Boxophobic.StyledGUI.StyledMonoBehaviour, TheVisualEngine.TVEElementVisibility, TheVisualEngine.TVERefreshMode, TheVisualEngine.TVETerrainTexture, UnityEngine.LayerMask, UnityEngine.Vector3, UnityEngine.Vector4
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEElement
class CORDL_TYPE TVEElement : public ::Boxophobic::StyledGUI::StyledMonoBehaviour {
public:
// Declarations
/// @brief Field customMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMaterial, put=__cordl_internal_set_customMaterial)) ::UnityW<::UnityEngine::Material>  customMaterial;

/// @brief Field customVisibility, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_customVisibility, put=__cordl_internal_set_customVisibility)) ::TheVisualEngine::TVEElementVisibility  customVisibility;

/// @brief Field elementID, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementID, put=__cordl_internal_set_elementID)) int32_t  elementID;

/// @brief Field elementMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementMaterial, put=__cordl_internal_set_elementMaterial)) ::UnityW<::UnityEngine::Material>  elementMaterial;

/// @brief Field elementMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementMesh, put=__cordl_internal_set_elementMesh)) ::UnityW<::UnityEngine::Mesh>  elementMesh;

/// @brief Field elementParams, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_elementParams, put=__cordl_internal_set_elementParams)) ::UnityEngine::Vector4  elementParams;

/// @brief Field elementRefresh, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementRefresh, put=__cordl_internal_set_elementRefresh)) ::TheVisualEngine::TVERefreshMode  elementRefresh;

/// @brief Field elementRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementRenderer, put=__cordl_internal_set_elementRenderer)) ::UnityW<::UnityEngine::Renderer>  elementRenderer;

/// @brief Field instancedID, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_instancedID, put=__cordl_internal_set_instancedID)) int32_t  instancedID;

/// @brief Field isActive, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field lastPosition, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field materialData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialData, put=__cordl_internal_set_materialData)) ::TheVisualEngine::TVEElementMaterialData*  materialData;

/// @brief Field particleSystem, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field raycastDistance, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastDistance, put=__cordl_internal_set_raycastDistance)) float_t  raycastDistance;

/// @brief Field raycastLimit, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastLimit, put=__cordl_internal_set_raycastLimit)) float_t  raycastLimit;

/// @brief Field raycastMask, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastMask, put=__cordl_internal_set_raycastMask)) ::UnityEngine::LayerMask  raycastMask;

/// @brief Field raycastStart, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastStart, put=__cordl_internal_set_raycastStart)) float_t  raycastStart;

/// @brief Field renderDataID, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_renderDataID, put=__cordl_internal_set_renderDataID)) int32_t  renderDataID;

/// @brief Field renderLayers, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderLayers, put=__cordl_internal_set_renderLayers)) ::System::Collections::Generic::List_1<int32_t>*  renderLayers;

/// @brief Field renderLayersAsPasses, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_renderLayersAsPasses, put=__cordl_internal_set_renderLayersAsPasses)) bool  renderLayersAsPasses;

/// @brief Field renderName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderName, put=__cordl_internal_set_renderName)) ::StringW  renderName;

/// @brief Field speedTreshold, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedTreshold, put=__cordl_internal_set_speedTreshold)) float_t  speedTreshold;

/// @brief Field terrainData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainData, put=__cordl_internal_set_terrainData)) ::UnityW<::UnityEngine::Terrain>  terrainData;

/// @brief Field terrainMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainMask, put=__cordl_internal_set_terrainMask)) ::TheVisualEngine::TVETerrainTexture  terrainMask;

/// @brief Field useRaycastFading, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_useRaycastFading, put=__cordl_internal_set_useRaycastFading)) int32_t  useRaycastFading;

/// @brief Field useVertexColorDirection, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_useVertexColorDirection, put=__cordl_internal_set_useVertexColorDirection)) int32_t  useVertexColorDirection;

/// @brief Method AddElementToVolume, addr 0x1804a7c20, size 0x5f0, virtual false, abstract: false, final false
inline void AddElementToVolume() ;

/// @brief Method GetMaterialParameters, addr 0x1804a8210, size 0x1d0, virtual false, abstract: false, final false
inline void GetMaterialParameters() ;

/// @brief Method GetRacastFading, addr 0x1804a83e0, size 0x190, virtual false, abstract: false, final false
inline float_t GetRacastFading() ;

/// @brief Method LoadMaterialData, addr 0x1804a8570, size 0x1e0, virtual false, abstract: false, final false
inline void LoadMaterialData(::UnityEngine::Material*  material) ;

static inline ::TheVisualEngine::TVEElement* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1804a8750, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1804a8750, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804a8770, size 0x220, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetElementVisibility, addr 0x1804a8990, size 0x100, virtual false, abstract: false, final false
inline void SetElementVisibility() ;

/// @brief Method Update, addr 0x1804a9100, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateElement, addr 0x1804a8ad0, size 0x2d0, virtual false, abstract: false, final false
inline void UpdateElement() ;

/// @brief Method UpdateElementTerrainData, addr 0x1804a8a90, size 0x40, virtual false, abstract: false, final false
inline void UpdateElementTerrainData() ;

/// @brief Method UpdateFading, addr 0x1804a8da0, size 0x360, virtual false, abstract: false, final false
inline void UpdateFading() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_customMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_customMaterial() ;

constexpr ::TheVisualEngine::TVEElementVisibility const& __cordl_internal_get_customVisibility() const;

constexpr ::TheVisualEngine::TVEElementVisibility& __cordl_internal_get_customVisibility() ;

constexpr int32_t const& __cordl_internal_get_elementID() const;

constexpr int32_t& __cordl_internal_get_elementID() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_elementMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_elementMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_elementMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_elementMesh() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_elementParams() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_elementParams() ;

constexpr ::TheVisualEngine::TVERefreshMode const& __cordl_internal_get_elementRefresh() const;

constexpr ::TheVisualEngine::TVERefreshMode& __cordl_internal_get_elementRefresh() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_elementRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_elementRenderer() ;

constexpr int32_t const& __cordl_internal_get_instancedID() const;

constexpr int32_t& __cordl_internal_get_instancedID() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::TheVisualEngine::TVEElementMaterialData* const& __cordl_internal_get_materialData() const;

constexpr ::TheVisualEngine::TVEElementMaterialData*& __cordl_internal_get_materialData() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr float_t const& __cordl_internal_get_raycastDistance() const;

constexpr float_t& __cordl_internal_get_raycastDistance() ;

constexpr float_t const& __cordl_internal_get_raycastLimit() const;

constexpr float_t& __cordl_internal_get_raycastLimit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_raycastMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_raycastMask() ;

constexpr float_t const& __cordl_internal_get_raycastStart() const;

constexpr float_t& __cordl_internal_get_raycastStart() ;

constexpr int32_t const& __cordl_internal_get_renderDataID() const;

constexpr int32_t& __cordl_internal_get_renderDataID() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_renderLayers() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_renderLayers() ;

constexpr bool const& __cordl_internal_get_renderLayersAsPasses() const;

constexpr bool& __cordl_internal_get_renderLayersAsPasses() ;

constexpr ::StringW const& __cordl_internal_get_renderName() const;

constexpr ::StringW& __cordl_internal_get_renderName() ;

constexpr float_t const& __cordl_internal_get_speedTreshold() const;

constexpr float_t& __cordl_internal_get_speedTreshold() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_terrainData() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_terrainData() ;

constexpr ::TheVisualEngine::TVETerrainTexture const& __cordl_internal_get_terrainMask() const;

constexpr ::TheVisualEngine::TVETerrainTexture& __cordl_internal_get_terrainMask() ;

constexpr int32_t const& __cordl_internal_get_useRaycastFading() const;

constexpr int32_t& __cordl_internal_get_useRaycastFading() ;

constexpr int32_t const& __cordl_internal_get_useVertexColorDirection() const;

constexpr int32_t& __cordl_internal_get_useVertexColorDirection() ;

constexpr void __cordl_internal_set_customMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_customVisibility(::TheVisualEngine::TVEElementVisibility  value) ;

constexpr void __cordl_internal_set_elementID(int32_t  value) ;

constexpr void __cordl_internal_set_elementMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_elementMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_elementParams(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_elementRefresh(::TheVisualEngine::TVERefreshMode  value) ;

constexpr void __cordl_internal_set_elementRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_instancedID(int32_t  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_materialData(::TheVisualEngine::TVEElementMaterialData*  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_raycastDistance(float_t  value) ;

constexpr void __cordl_internal_set_raycastLimit(float_t  value) ;

constexpr void __cordl_internal_set_raycastMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_raycastStart(float_t  value) ;

constexpr void __cordl_internal_set_renderDataID(int32_t  value) ;

constexpr void __cordl_internal_set_renderLayers(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_renderLayersAsPasses(bool  value) ;

constexpr void __cordl_internal_set_renderName(::StringW  value) ;

constexpr void __cordl_internal_set_speedTreshold(float_t  value) ;

constexpr void __cordl_internal_set_terrainData(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set_terrainMask(::TheVisualEngine::TVETerrainTexture  value) ;

constexpr void __cordl_internal_set_useRaycastFading(int32_t  value) ;

constexpr void __cordl_internal_set_useVertexColorDirection(int32_t  value) ;

/// @brief Method .ctor, addr 0x1804a9170, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEElement(TVEElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEElement(TVEElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19573};

/// @brief Field elementRefresh, offset: 0x20, size: 0x4, def value: None
 ::TheVisualEngine::TVERefreshMode  ___elementRefresh;

/// @brief Field customVisibility, offset: 0x24, size: 0x4, def value: None
 ::TheVisualEngine::TVEElementVisibility  ___customVisibility;

/// @brief Field customMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___customMaterial;

/// @brief Field terrainData, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___terrainData;

/// @brief Field terrainMask, offset: 0x38, size: 0x4, def value: None
 ::TheVisualEngine::TVETerrainTexture  ___terrainMask;

/// @brief Field materialData, offset: 0x40, size: 0x8, def value: None
 ::TheVisualEngine::TVEElementMaterialData*  ___materialData;

/// @brief Field elementRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___elementRenderer;

/// @brief Field elementMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___elementMaterial;

/// @brief Field elementMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___elementMesh;

/// @brief Field elementParams, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___elementParams;

/// @brief Field elementID, offset: 0x70, size: 0x4, def value: None
 int32_t  ___elementID;

/// @brief Field instancedID, offset: 0x74, size: 0x4, def value: None
 int32_t  ___instancedID;

/// @brief Field renderName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___renderName;

/// @brief Field renderDataID, offset: 0x80, size: 0x4, def value: None
 int32_t  ___renderDataID;

/// @brief Field renderLayers, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___renderLayers;

/// @brief Field renderLayersAsPasses, offset: 0x90, size: 0x1, def value: None
 bool  ___renderLayersAsPasses;

/// @brief Field isActive, offset: 0x91, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field particleSystem, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field useVertexColorDirection, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___useVertexColorDirection;

/// @brief Field useRaycastFading, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___useRaycastFading;

/// @brief Field lastPosition, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field raycastMask, offset: 0xb4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___raycastMask;

/// @brief Field raycastStart, offset: 0xb8, size: 0x4, def value: None
 float_t  ___raycastStart;

/// @brief Field raycastLimit, offset: 0xbc, size: 0x4, def value: None
 float_t  ___raycastLimit;

/// @brief Field raycastDistance, offset: 0xc0, size: 0x4, def value: None
 float_t  ___raycastDistance;

/// @brief Field speedTreshold, offset: 0xc4, size: 0x4, def value: None
 float_t  ___speedTreshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElement, ___elementRefresh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___customVisibility) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___customMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___terrainData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___terrainMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___materialData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___elementRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___elementMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___elementMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___elementParams) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___elementID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___instancedID) == 0x74, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___renderName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___renderDataID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___renderLayers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___renderLayersAsPasses) == 0x90, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___isActive) == 0x91, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___particleSystem) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___useVertexColorDirection) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___useRaycastFading) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___lastPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___raycastMask) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___raycastStart) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___raycastLimit) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___raycastDistance) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEElement, ___speedTreshold) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElement) == 0xc8, "Size mismatch!");

} // namespace end def TheVisualEngine
