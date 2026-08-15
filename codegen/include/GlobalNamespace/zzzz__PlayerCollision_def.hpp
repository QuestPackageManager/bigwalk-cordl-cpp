#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCollision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerColliderState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerCollision)
namespace GlobalNamespace {
class ContactModificationHandler;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerColliderState;
}
namespace GlobalNamespace {
class Prop;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
class SphereCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCollision;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCollision*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCollision*, "", "PlayerCollision");
// Dependencies PlayerColliderState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCollision
class CORDL_TYPE PlayerCollision : public ::System::Object {
public:
// Declarations
/// @brief Field _zeroFrictionMaterial, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__zeroFrictionMaterial, put=__cordl_internal_set__zeroFrictionMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  _zeroFrictionMaterial;

 __declspec(property(get=get_bodyCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  bodyCollider;

/// @brief Field bodyColliderId, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyColliderId, put=__cordl_internal_set_bodyColliderId)) int32_t  bodyColliderId;

/// @brief Field contactModificationActive, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_contactModificationActive, put=__cordl_internal_set_contactModificationActive)) bool  contactModificationActive;

/// @brief Field contactModificationHandler, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_contactModificationHandler, put=__cordl_internal_set_contactModificationHandler)) ::GlobalNamespace::ContactModificationHandler*  contactModificationHandler;

/// @brief Field crouchingState, offset 0x3c, size 0x1c 
 __declspec(property(get=__cordl_internal_get_crouchingState, put=__cordl_internal_set_crouchingState)) ::GlobalNamespace::PlayerColliderState  crouchingState;

/// @brief Field currentState, offset 0x90, size 0x1c 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::PlayerColliderState  currentState;

/// @brief Field disableColliderUpdate, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableColliderUpdate, put=__cordl_internal_set_disableColliderUpdate)) bool  disableColliderUpdate;

/// @brief Field disableFootMaterialChange, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableFootMaterialChange, put=__cordl_internal_set_disableFootMaterialChange)) bool  disableFootMaterialChange;

/// @brief Field footCollider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_footCollider, put=__cordl_internal_set_footCollider)) ::UnityW<::UnityEngine::SphereCollider>  footCollider;

/// @brief Field footColliderIsZeroFriction, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_footColliderIsZeroFriction, put=__cordl_internal_set_footColliderIsZeroFriction)) bool  footColliderIsZeroFriction;

/// @brief Field fullFrictionThreshold, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullFrictionThreshold, put=__cordl_internal_set_fullFrictionThreshold)) float_t  fullFrictionThreshold;

/// @brief Field logContactModification, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_logContactModification, put=__cordl_internal_set_logContactModification)) bool  logContactModification;

/// @brief Field logVerbose, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field moveFootCollider, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_moveFootCollider, put=__cordl_internal_set_moveFootCollider)) bool  moveFootCollider;

/// @brief Field playerCharacter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field sitFriction, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sitFriction, put=__cordl_internal_set_sitFriction)) float_t  sitFriction;

/// @brief Field sittingState, offset 0x58, size 0x1c 
 __declspec(property(get=__cordl_internal_get_sittingState, put=__cordl_internal_set_sittingState)) ::GlobalNamespace::PlayerColliderState  sittingState;

/// @brief Field standingState, offset 0x20, size 0x1c 
 __declspec(property(get=__cordl_internal_get_standingState, put=__cordl_internal_set_standingState)) ::GlobalNamespace::PlayerColliderState  standingState;

/// @brief Field zeroFrictionThreshold, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zeroFrictionThreshold, put=__cordl_internal_set_zeroFrictionThreshold)) float_t  zeroFrictionThreshold;

/// @brief Method AddProp, addr 0x180462450, size 0x160, virtual false, abstract: false, final false
inline void AddProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method FixedUpdate, addr 0x1804625b0, size 0x180, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialize, addr 0x180462730, size 0x120, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method ModificationEvent, addr 0x180462b30, size 0x390, virtual false, abstract: false, final false
inline void ModificationEvent(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>  pairs) ;

/// @brief Method ModificationEventForPair, addr 0x180462850, size 0x2e0, virtual false, abstract: false, final false
inline void ModificationEventForPair(::UnityEngine::ModifiableContactPair  pair, bool  flipped) ;

static inline ::GlobalNamespace::PlayerCollision* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180462ec0, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveProp, addr 0x180462ef0, size 0xb0, virtual false, abstract: false, final false
inline void RemoveProp(::GlobalNamespace::Prop*  prop) ;

/// @brief Method SetCollider, addr 0x180462fa0, size 0x200, virtual false, abstract: false, final false
inline void SetCollider(::GlobalNamespace::PlayerColliderState  newState) ;

/// @brief Method Update, addr 0x1804631a0, size 0x480, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get__zeroFrictionMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get__zeroFrictionMaterial() ;

constexpr int32_t const& __cordl_internal_get_bodyColliderId() const;

constexpr int32_t& __cordl_internal_get_bodyColliderId() ;

constexpr bool const& __cordl_internal_get_contactModificationActive() const;

constexpr bool& __cordl_internal_get_contactModificationActive() ;

constexpr ::GlobalNamespace::ContactModificationHandler* const& __cordl_internal_get_contactModificationHandler() const;

constexpr ::GlobalNamespace::ContactModificationHandler*& __cordl_internal_get_contactModificationHandler() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_crouchingState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_crouchingState() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_disableColliderUpdate() const;

constexpr bool& __cordl_internal_get_disableColliderUpdate() ;

constexpr bool const& __cordl_internal_get_disableFootMaterialChange() const;

constexpr bool& __cordl_internal_get_disableFootMaterialChange() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_footCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_footCollider() ;

constexpr bool const& __cordl_internal_get_footColliderIsZeroFriction() const;

constexpr bool& __cordl_internal_get_footColliderIsZeroFriction() ;

constexpr float_t const& __cordl_internal_get_fullFrictionThreshold() const;

constexpr float_t& __cordl_internal_get_fullFrictionThreshold() ;

constexpr bool const& __cordl_internal_get_logContactModification() const;

constexpr bool& __cordl_internal_get_logContactModification() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_moveFootCollider() const;

constexpr bool& __cordl_internal_get_moveFootCollider() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_sitFriction() const;

constexpr float_t& __cordl_internal_get_sitFriction() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_sittingState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_sittingState() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_standingState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_standingState() ;

constexpr float_t const& __cordl_internal_get_zeroFrictionThreshold() const;

constexpr float_t& __cordl_internal_get_zeroFrictionThreshold() ;

constexpr void __cordl_internal_set__zeroFrictionMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_bodyColliderId(int32_t  value) ;

constexpr void __cordl_internal_set_contactModificationActive(bool  value) ;

constexpr void __cordl_internal_set_contactModificationHandler(::GlobalNamespace::ContactModificationHandler*  value) ;

constexpr void __cordl_internal_set_crouchingState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_disableColliderUpdate(bool  value) ;

constexpr void __cordl_internal_set_disableFootMaterialChange(bool  value) ;

constexpr void __cordl_internal_set_footCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_footColliderIsZeroFriction(bool  value) ;

constexpr void __cordl_internal_set_fullFrictionThreshold(float_t  value) ;

constexpr void __cordl_internal_set_logContactModification(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_moveFootCollider(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_sitFriction(float_t  value) ;

constexpr void __cordl_internal_set_sittingState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_standingState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_zeroFrictionThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x180463620, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bodyCollider, addr 0x180463630, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CapsuleCollider> get_bodyCollider() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCollision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollision", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCollision(PlayerCollision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCollision", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCollision(PlayerCollision const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5446};

/// @brief Field footCollider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___footCollider;

/// @brief Field moveFootCollider, offset: 0x18, size: 0x1, def value: None
 bool  ___moveFootCollider;

/// @brief Field sitFriction, offset: 0x1c, size: 0x4, def value: None
 float_t  ___sitFriction;

/// @brief Field standingState, offset: 0x20, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___standingState;

/// @brief Field crouchingState, offset: 0x3c, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___crouchingState;

/// @brief Field sittingState, offset: 0x58, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___sittingState;

/// @brief Field contactModificationActive, offset: 0x74, size: 0x1, def value: None
 bool  ___contactModificationActive;

/// @brief Field fullFrictionThreshold, offset: 0x78, size: 0x4, def value: None
 float_t  ___fullFrictionThreshold;

/// @brief Field zeroFrictionThreshold, offset: 0x7c, size: 0x4, def value: None
 float_t  ___zeroFrictionThreshold;

/// @brief Field disableColliderUpdate, offset: 0x80, size: 0x1, def value: None
 bool  ___disableColliderUpdate;

/// @brief Field disableFootMaterialChange, offset: 0x81, size: 0x1, def value: None
 bool  ___disableFootMaterialChange;

/// @brief Field logVerbose, offset: 0x82, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logContactModification, offset: 0x83, size: 0x1, def value: None
 bool  ___logContactModification;

/// @brief Field playerCharacter, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field currentState, offset: 0x90, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___currentState;

/// @brief Field footColliderIsZeroFriction, offset: 0xac, size: 0x1, def value: None
 bool  ___footColliderIsZeroFriction;

/// @brief Field _zeroFrictionMaterial, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ____zeroFrictionMaterial;

/// @brief Field bodyColliderId, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___bodyColliderId;

/// @brief Field contactModificationHandler, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::ContactModificationHandler*  ___contactModificationHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___footCollider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___moveFootCollider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___sitFriction) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___standingState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___crouchingState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___sittingState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___contactModificationActive) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___fullFrictionThreshold) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___zeroFrictionThreshold) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___disableColliderUpdate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___disableFootMaterialChange) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___logVerbose) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___logContactModification) == 0x83, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___playerCharacter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___currentState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___footColliderIsZeroFriction) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ____zeroFrictionMaterial) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___bodyColliderId) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerCollision, ___contactModificationHandler) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCollision) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
