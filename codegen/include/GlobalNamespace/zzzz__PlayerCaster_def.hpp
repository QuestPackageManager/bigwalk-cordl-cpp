#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCaster)
namespace GlobalNamespace {
class CastableTarget;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCaster;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCaster*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCaster*, "", "PlayerCaster");
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCaster
class CORDL_TYPE PlayerCaster : public ::System::Object {
public:
// Declarations
/// @brief Field castCharacter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_castCharacter, put=__cordl_internal_set_castCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  castCharacter;

/// @brief Field castDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_castDistance, put=__cordl_internal_set_castDistance)) float_t  castDistance;

/// @brief Field castProp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_castProp, put=__cordl_internal_set_castProp)) ::UnityW<::GlobalNamespace::Prop>  castProp;

/// @brief Field castableTarget, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_castableTarget, put=__cordl_internal_set_castableTarget)) ::UnityW<::GlobalNamespace::CastableTarget>  castableTarget;

/// @brief Field hitPosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_hitPosition, put=__cordl_internal_set_hitPosition)) ::UnityEngine::Vector3  hitPosition;

/// @brief Field hits, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityEngine::RaycastHit>  hits;

/// @brief Field layerMask, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field raycastMaxDistance, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastMaxDistance, put=__cordl_internal_set_raycastMaxDistance)) float_t  raycastMaxDistance;

/// @brief Field raycastMaxDistanceUp, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastMaxDistanceUp, put=__cordl_internal_set_raycastMaxDistanceUp)) float_t  raycastMaxDistanceUp;

/// @brief Method CanStillReachSwitch, addr 0x180460f40, size 0x2a0, virtual false, abstract: false, final false
inline bool CanStillReachSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch) ;

/// @brief Method CastThroughHands, addr 0x1804611e0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> CastThroughHands(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method GetMaxDistanceForDirection, addr 0x1804612d0, size 0x80, virtual false, abstract: false, final false
inline float_t GetMaxDistanceForDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method Initialize, addr 0x180461350, size 0x50, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method IsDudCastableTarget, addr 0x1804613a0, size 0xa0, virtual false, abstract: false, final false
inline bool IsDudCastableTarget(::UnityEngine::Collider*  collider, ::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LocalUpdate, addr 0x180461440, size 0x3d0, virtual false, abstract: false, final false
inline void LocalUpdate() ;

static inline ::GlobalNamespace::PlayerCaster* New_ctor() ;

/// @brief Method RayCastForObject, addr 0x180461810, size 0x4d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> RayCastForObject(::by_ref<bool>  blocksPlayerCasting, ::by_ref<float_t>  distance) ;

/// @brief Method SearchThroughHands, addr 0x180461ce0, size 0x330, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> SearchThroughHands(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount, ::by_ref<::UnityEngine::RaycastHit>  closestHit, ::by_ref<bool>  blocksPlayerCasting, bool  checkCastableConditions) ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_castCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_castCharacter() ;

constexpr float_t const& __cordl_internal_get_castDistance() const;

constexpr float_t& __cordl_internal_get_castDistance() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_castProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_castProp() ;

constexpr ::UnityW<::GlobalNamespace::CastableTarget> const& __cordl_internal_get_castableTarget() const;

constexpr ::UnityW<::GlobalNamespace::CastableTarget>& __cordl_internal_get_castableTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hitPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hitPosition() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hits() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_raycastMaxDistance() const;

constexpr float_t& __cordl_internal_get_raycastMaxDistance() ;

constexpr float_t const& __cordl_internal_get_raycastMaxDistanceUp() const;

constexpr float_t& __cordl_internal_get_raycastMaxDistanceUp() ;

constexpr void __cordl_internal_set_castCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_castDistance(float_t  value) ;

constexpr void __cordl_internal_set_castProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_castableTarget(::UnityW<::GlobalNamespace::CastableTarget>  value) ;

constexpr void __cordl_internal_set_hitPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_raycastMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_raycastMaxDistanceUp(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCaster", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCaster(PlayerCaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCaster", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCaster(PlayerCaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5444};

/// @brief Field raycastMaxDistance, offset: 0x10, size: 0x4, def value: None
 float_t  ___raycastMaxDistance;

/// @brief Field raycastMaxDistanceUp, offset: 0x14, size: 0x4, def value: None
 float_t  ___raycastMaxDistanceUp;

/// @brief Field layerMask, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field logVerbose, offset: 0x1c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field castProp, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___castProp;

/// @brief Field castCharacter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___castCharacter;

/// @brief Field castableTarget, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CastableTarget>  ___castableTarget;

/// @brief Field hitPosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hitPosition;

/// @brief Field castDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___castDistance;

/// @brief Field hits, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___raycastMaxDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___raycastMaxDistanceUp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___layerMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___logVerbose) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___playerCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___castProp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___castCharacter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___castableTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___hitPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___castDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCaster, ___hits) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCaster) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
