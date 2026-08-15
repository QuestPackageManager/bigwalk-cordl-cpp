#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerHands.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerHeldInformation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerHands)
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerHands___c__DisplayClass18_0;
}
namespace GlobalNamespace {
struct PlayerHeldInformation;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
class ConfigurableJoint;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHands;
}
namespace GlobalNamespace {
class PlayerHands___c__DisplayClass18_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerHands*);
MARK_REF_T(::GlobalNamespace::PlayerHands___c__DisplayClass18_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerHands*, "", "PlayerHands");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerHands___c__DisplayClass18_0*, "", "PlayerHands/<>c__DisplayClass18_0");
// Dependencies PlayerHeldInformation, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHands/<>c__DisplayClass18_0
class CORDL_TYPE PlayerHands___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::PlayerHands*  __4__this;

/// @brief Field heldInformation, offset 0x10, size 0x38 
 __declspec(property(get=__cordl_internal_get_heldInformation, put=__cordl_internal_set_heldInformation)) ::GlobalNamespace::PlayerHeldInformation  heldInformation;

static inline ::GlobalNamespace::PlayerHands___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <Drop>g__GetX|0, addr 0x18035c680, size 0x190, virtual false, abstract: false, final false
inline bool _Drop_g__GetX_0(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

constexpr ::GlobalNamespace::PlayerHands* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::PlayerHands*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::PlayerHeldInformation const& __cordl_internal_get_heldInformation() const;

constexpr ::GlobalNamespace::PlayerHeldInformation& __cordl_internal_get_heldInformation() ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::PlayerHands*  value) ;

constexpr void __cordl_internal_set_heldInformation(::GlobalNamespace::PlayerHeldInformation  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerHands___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerHands___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerHands___c__DisplayClass18_0(PlayerHands___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHands___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerHands___c__DisplayClass18_0(PlayerHands___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5460};

/// @brief Field heldInformation, offset: 0x10, size: 0x38, def value: None
 ::GlobalNamespace::PlayerHeldInformation  ___heldInformation;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::PlayerHands*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHands___c__DisplayClass18_0, ___heldInformation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands___c__DisplayClass18_0, _____4__this) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerHands___c__DisplayClass18_0) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerHands
class CORDL_TYPE PlayerHands : public ::System::Object {
public:
// Declarations
using __c__DisplayClass18_0 = ::GlobalNamespace::PlayerHands___c__DisplayClass18_0;

 __declspec(property(get=get_carriedMoveScalar)) float_t  carriedMoveScalar;

/// @brief Field dragJoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_dragJoint, put=__cordl_internal_set_dragJoint)) ::UnityW<::UnityEngine::ConfigurableJoint>  dragJoint;

/// @brief Field grasper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_grasper, put=__cordl_internal_set_grasper)) ::UnityW<::UnityEngine::Transform>  grasper;

/// @brief Field grasperGuide, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_grasperGuide, put=__cordl_internal_set_grasperGuide)) ::UnityW<::UnityEngine::Transform>  grasperGuide;

 __declspec(property(get=get_heldCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  heldCharacter;

/// @brief Field heldProp, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldProp, put=__cordl_internal_set_heldProp)) ::UnityW<::GlobalNamespace::Prop>  heldProp;

 __declspec(property(get=get_isCarryingTooHeavy)) bool  isCarryingTooHeavy;

 __declspec(property(get=get_isHoldingSomething)) bool  isHoldingSomething;

/// @brief Field lastKickTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastKickTime, put=__cordl_internal_set_lastKickTime)) float_t  lastKickTime;

/// @brief Field logVerbose, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Method Drop, addr 0x18034cd10, size 0xd60, virtual false, abstract: false, final false
inline void Drop(::GlobalNamespace::PlayerHeldInformation  heldInformation) ;

/// @brief Method Initialize, addr 0x18034da70, size 0x60, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method IsSafeToPickUp, addr 0x18034dad0, size 0x220, virtual false, abstract: false, final false
inline bool IsSafeToPickUp(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::PlayerHands* New_ctor() ;

/// @brief Method PickUp, addr 0x18034dcf0, size 0x4f0, virtual false, abstract: false, final false
inline void PickUp(::GlobalNamespace::Prop*  prop, bool  isSnatch) ;

/// @brief Method PlayGrabPlayerSound, addr 0x18034e1e0, size 0x1f0, virtual false, abstract: false, final false
inline void PlayGrabPlayerSound(::GlobalNamespace::PlayerCharacter*  playerBeingGrabbed) ;

/// @brief Method ProcessChangedCarrying, addr 0x18034e3d0, size 0x80, virtual false, abstract: false, final false
inline void ProcessChangedCarrying() ;

/// @brief Method ProcessDrop, addr 0x18034e450, size 0x90, virtual false, abstract: false, final false
inline void ProcessDrop() ;

/// @brief Method ReactSnatched, addr 0x18034e4e0, size 0x2e0, virtual false, abstract: false, final false
inline void ReactSnatched() ;

constexpr ::UnityW<::UnityEngine::ConfigurableJoint> const& __cordl_internal_get_dragJoint() const;

constexpr ::UnityW<::UnityEngine::ConfigurableJoint>& __cordl_internal_get_dragJoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grasper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grasper() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grasperGuide() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grasperGuide() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_heldProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_heldProp() ;

constexpr float_t const& __cordl_internal_get_lastKickTime() const;

constexpr float_t& __cordl_internal_get_lastKickTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr void __cordl_internal_set_dragJoint(::UnityW<::UnityEngine::ConfigurableJoint>  value) ;

constexpr void __cordl_internal_set_grasper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grasperGuide(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_heldProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_lastKickTime(float_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_carriedMoveScalar, addr 0x18034e7c0, size 0x30, virtual false, abstract: false, final false
inline float_t get_carriedMoveScalar() ;

/// @brief Method get_heldCharacter, addr 0x18034e7f0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> get_heldCharacter() ;

/// @brief Method get_isCarryingTooHeavy, addr 0x18034e830, size 0x1a0, virtual false, abstract: false, final false
inline bool get_isCarryingTooHeavy() ;

/// @brief Method get_isHoldingSomething, addr 0x18034e9d0, size 0x60, virtual false, abstract: false, final false
inline bool get_isHoldingSomething() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerHands() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerHands", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerHands(PlayerHands && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHands", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerHands(PlayerHands const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5461};

/// @brief Field grasperGuide, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grasperGuide;

/// @brief Field grasper, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grasper;

/// @brief Field logVerbose, offset: 0x20, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field dragJoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ConfigurableJoint>  ___dragJoint;

/// @brief Field heldProp, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___heldProp;

/// @brief Field lastKickTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___lastKickTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerHands, ___grasperGuide) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands, ___grasper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands, ___logVerbose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands, ___dragJoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands, ___heldProp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHands, ___lastKickTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerHands) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
