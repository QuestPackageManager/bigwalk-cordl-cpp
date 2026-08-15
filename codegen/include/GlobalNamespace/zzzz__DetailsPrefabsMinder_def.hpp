#pragma once
// IWYU pragma private; include "GlobalNamespace/DetailsPrefabsMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DetailsPrefabsMinder)
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace GlobalNamespace {
class DetailsPrefabsMinder;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DetailsPrefabsMinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DetailsPrefabsMinder*, "", "DetailsPrefabsMinder");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DetailsPrefabsMinder
class CORDL_TYPE DetailsPrefabsMinder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::DetailsPrefabsMinder* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803e5de0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803e5e30, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTerrainHeightmapChanged, addr 0x1803e5e80, size 0x130, virtual false, abstract: false, final false
inline void OnTerrainHeightmapChanged(::UnityEngine::Terrain*  terrain, ::UnityEngine::RectInt  heightmapRect, bool  synced) ;

/// @brief Method ReplaceDetails, addr 0x1803e5fb0, size 0x110, virtual false, abstract: false, final false
inline void ReplaceDetails(::UnityEngine::TerrainData*  terrainData) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailsPrefabsMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailsPrefabsMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailsPrefabsMinder(DetailsPrefabsMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailsPrefabsMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailsPrefabsMinder(DetailsPrefabsMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DetailsPrefabsMinder) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
