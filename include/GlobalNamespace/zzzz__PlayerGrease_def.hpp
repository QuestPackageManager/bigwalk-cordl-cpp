#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGrease.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerGrease)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerGrease;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerGrease*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGrease*, "", "PlayerGrease");
// Dependencies System.Object, UnityEngine.Terrain
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerGrease
class CORDL_TYPE PlayerGrease : public ::System::Object {
public:
// Declarations
/// @brief Field bestTerrain, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestTerrain, put=__cordl_internal_set_bestTerrain)) ::UnityW<::UnityEngine::Terrain>  bestTerrain;

/// @brief Field playerCharacter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field terrains, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrains, put=__cordl_internal_set_terrains)) ::ArrayW<::UnityW<::UnityEngine::Terrain>>  terrains;

/// @brief Field waterFloorTag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterFloorTag, put=__cordl_internal_set_waterFloorTag)) ::StringW  waterFloorTag;

/// @brief Field waterLayer, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterLayer, put=__cordl_internal_set_waterLayer)) int32_t  waterLayer;

/// @brief Method GetDistanceToTerrain, addr 0x180347d50, size 0xa0, virtual false, abstract: false, final false
inline float_t GetDistanceToTerrain() ;

/// @brief Method Initialize, addr 0x180347df0, size 0x40, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerGrease* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x180347e30, size 0x1b0, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  col) ;

/// @brief Method RefreshBestTerrain, addr 0x180347fe0, size 0x260, virtual false, abstract: false, final false
inline void RefreshBestTerrain() ;

/// @brief Method Teleport, addr 0x180348240, size 0x90, virtual false, abstract: false, final false
inline void Teleport(::UnityEngine::Transform*  destination) ;

/// @brief Method Teleport, addr 0x1803482d0, size 0x210, virtual false, abstract: false, final false
inline void Teleport(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  preserveRotation) ;

/// @brief Method TerrainNormal, addr 0x1803484e0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TerrainNormal(::UnityEngine::Vector3  worldPos) ;

/// @brief Method UnderTerrainCheck, addr 0x1803486c0, size 0x150, virtual false, abstract: false, final false
inline void UnderTerrainCheck() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_bestTerrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_bestTerrain() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>> const& __cordl_internal_get_terrains() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Terrain>>& __cordl_internal_get_terrains() ;

constexpr ::StringW const& __cordl_internal_get_waterFloorTag() const;

constexpr ::StringW& __cordl_internal_get_waterFloorTag() ;

constexpr int32_t const& __cordl_internal_get_waterLayer() const;

constexpr int32_t& __cordl_internal_get_waterLayer() ;

constexpr void __cordl_internal_set_bestTerrain(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_terrains(::ArrayW<::UnityW<::UnityEngine::Terrain>>  value) ;

constexpr void __cordl_internal_set_waterFloorTag(::StringW  value) ;

constexpr void __cordl_internal_set_waterLayer(int32_t  value) ;

/// @brief Method .ctor, addr 0x180348810, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGrease() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGrease", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGrease(PlayerGrease && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGrease", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGrease(PlayerGrease const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5457};

/// @brief Field playerCharacter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field waterLayer, offset: 0x18, size: 0x4, def value: None
 int32_t  ___waterLayer;

/// @brief Field waterFloorTag, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___waterFloorTag;

/// @brief Field terrains, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Terrain>>  ___terrains;

/// @brief Field bestTerrain, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___bestTerrain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGrease, ___playerCharacter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGrease, ___waterLayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGrease, ___waterFloorTag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGrease, ___terrains) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGrease, ___bestTerrain) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGrease) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
