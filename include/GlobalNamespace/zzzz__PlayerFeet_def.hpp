#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerFeet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerFeet)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerFeet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerFeet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerFeet*, "", "PlayerFeet");
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerFeet
class CORDL_TYPE PlayerFeet : public ::System::Object {
public:
// Declarations
/// @brief Field hit, offset 0x28, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

/// @brief Field layerMask, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field logVerbose, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxRotation, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRotation, put=__cordl_internal_set_maxRotation)) float_t  maxRotation;

/// @brief Field maxTranslation, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTranslation, put=__cordl_internal_set_maxTranslation)) float_t  maxTranslation;

/// @brief Field playerCharacter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field rayCastLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastLength, put=__cordl_internal_set_rayCastLength)) float_t  rayCastLength;

/// @brief Field rayCastOffset, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastOffset, put=__cordl_internal_set_rayCastOffset)) float_t  rayCastOffset;

/// @brief Field rotateFoot, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotateFoot, put=__cordl_internal_set_rotateFoot)) bool  rotateFoot;

/// @brief Field translateFoot, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_translateFoot, put=__cordl_internal_set_translateFoot)) bool  translateFoot;

/// @brief Method DrawGizmosForFoot, addr 0x180468820, size 0x170, virtual false, abstract: false, final false
inline void DrawGizmosForFoot(::UnityEngine::Transform*  targetTransform) ;

/// @brief Method Initialize, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LateUpdate, addr 0x180468990, size 0x190, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::PlayerFeet* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x180468b20, size 0x60, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method UpdateForFoot, addr 0x180468b80, size 0x3f0, virtual false, abstract: false, final false
inline void UpdateForFoot(::UnityEngine::Transform*  foot) ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_maxRotation() const;

constexpr float_t& __cordl_internal_get_maxRotation() ;

constexpr float_t const& __cordl_internal_get_maxTranslation() const;

constexpr float_t& __cordl_internal_get_maxTranslation() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_rayCastLength() const;

constexpr float_t& __cordl_internal_get_rayCastLength() ;

constexpr float_t const& __cordl_internal_get_rayCastOffset() const;

constexpr float_t& __cordl_internal_get_rayCastOffset() ;

constexpr bool const& __cordl_internal_get_rotateFoot() const;

constexpr bool& __cordl_internal_get_rotateFoot() ;

constexpr bool const& __cordl_internal_get_translateFoot() const;

constexpr bool& __cordl_internal_get_translateFoot() ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxRotation(float_t  value) ;

constexpr void __cordl_internal_set_maxTranslation(float_t  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_rayCastLength(float_t  value) ;

constexpr void __cordl_internal_set_rayCastOffset(float_t  value) ;

constexpr void __cordl_internal_set_rotateFoot(bool  value) ;

constexpr void __cordl_internal_set_translateFoot(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerFeet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerFeet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerFeet(PlayerFeet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerFeet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerFeet(PlayerFeet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5453};

/// @brief Field layerMask, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field rayCastOffset, offset: 0x14, size: 0x4, def value: None
 float_t  ___rayCastOffset;

/// @brief Field rayCastLength, offset: 0x18, size: 0x4, def value: None
 float_t  ___rayCastLength;

/// @brief Field maxRotation, offset: 0x1c, size: 0x4, def value: None
 float_t  ___maxRotation;

/// @brief Field maxTranslation, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxTranslation;

/// @brief Field rotateFoot, offset: 0x24, size: 0x1, def value: None
 bool  ___rotateFoot;

/// @brief Field translateFoot, offset: 0x25, size: 0x1, def value: None
 bool  ___translateFoot;

/// @brief Field logVerbose, offset: 0x26, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field hit, offset: 0x28, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

/// @brief Field playerCharacter, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___layerMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___rayCastOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___rayCastLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___maxRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___maxTranslation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___rotateFoot) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___translateFoot) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___logVerbose) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___hit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFeet, ___playerCharacter) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerFeet) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
