#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDecisions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDecisions)
namespace GlobalNamespace {
class CastableTarget;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCaster;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerNetworking;
}
namespace Rewired {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDecisions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerDecisions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerDecisions*, "", "PlayerDecisions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDecisions
class CORDL_TYPE PlayerDecisions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_caster)) ::GlobalNamespace::PlayerCaster*  caster;

 __declspec(property(get=get_combinedWindUpStartTime)) double_t  combinedWindUpStartTime;

/// @brief Field heldDownSwitch, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_heldDownSwitch, put=__cordl_internal_set_heldDownSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  heldDownSwitch;

/// @brief Field inputPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputPlayer, put=__cordl_internal_set_inputPlayer)) ::Rewired::Player*  inputPlayer;

/// @brief Field isHoldingPropSwitch, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHoldingPropSwitch, put=__cordl_internal_set_isHoldingPropSwitch)) bool  isHoldingPropSwitch;

/// @brief Field isInGoggles, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInGoggles, put=__cordl_internal_set_isInGoggles)) bool  isInGoggles;

/// @brief Field leftHandIsPointing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandIsPointing, put=__cordl_internal_set_leftHandIsPointing)) bool  leftHandIsPointing;

/// @brief Field localWindUpStartTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_localWindUpStartTime, put=__cordl_internal_set_localWindUpStartTime)) double_t  localWindUpStartTime;

/// @brief Field logVerbose, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

 __declspec(property(get=get_playerNetworking)) ::UnityW<::GlobalNamespace::PlayerNetworking>  playerNetworking;

/// @brief Field rightHandIsPointing, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandIsPointing, put=__cordl_internal_set_rightHandIsPointing)) bool  rightHandIsPointing;

/// @brief Field willDropOnNextUp, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_willDropOnNextUp, put=__cordl_internal_set_willDropOnNextUp)) bool  willDropOnNextUp;

/// @brief Method ClearWindUp, addr 0x180465210, size 0x70, virtual false, abstract: false, final false
inline void ClearWindUp() ;

/// @brief Method Initialize, addr 0x180465280, size 0x50, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method IsHoldingCharacterRecurive, addr 0x1804652d0, size 0xd0, virtual false, abstract: false, final false
static inline bool IsHoldingCharacterRecurive(::GlobalNamespace::PlayerCharacter*  held, ::GlobalNamespace::PlayerCharacter*  holder, int32_t  depth) ;

/// @brief Method IsSafeToUseCastableTarget, addr 0x1804653a0, size 0x1f0, virtual false, abstract: false, final false
inline bool IsSafeToUseCastableTarget(::GlobalNamespace::CastableTarget*  castableTarget, bool  playerCastingIsBlocked) ;

/// @brief Method IsSafeToUseSwitch, addr 0x180465590, size 0xc0, virtual false, abstract: false, final false
inline bool IsSafeToUseSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch) ;

static inline ::GlobalNamespace::PlayerDecisions* New_ctor() ;

/// @brief Method SetWindUpStartTime, addr 0x180465650, size 0x70, virtual false, abstract: false, final false
inline void SetWindUpStartTime(double_t  windUpStartTime) ;

/// @brief Method Update, addr 0x180465730, size 0x10a0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCrosshair, addr 0x1804656c0, size 0x70, virtual false, abstract: false, final false
inline void UpdateCrosshair() ;

/// @brief Method UpdateDropping, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void UpdateDropping() ;

/// @brief Method UseCastSwitch, addr 0x1804667d0, size 0x1a0, virtual false, abstract: false, final false
inline void UseCastSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch) ;

/// @brief Method UseCastableTarget, addr 0x180466970, size 0x620, virtual false, abstract: false, final false
inline void UseCastableTarget(::GlobalNamespace::CastableTarget*  castableTarget) ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_heldDownSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_heldDownSwitch() ;

constexpr ::Rewired::Player* const& __cordl_internal_get_inputPlayer() const;

constexpr ::Rewired::Player*& __cordl_internal_get_inputPlayer() ;

constexpr bool const& __cordl_internal_get_isHoldingPropSwitch() const;

constexpr bool& __cordl_internal_get_isHoldingPropSwitch() ;

constexpr bool const& __cordl_internal_get_isInGoggles() const;

constexpr bool& __cordl_internal_get_isInGoggles() ;

constexpr bool const& __cordl_internal_get_leftHandIsPointing() const;

constexpr bool& __cordl_internal_get_leftHandIsPointing() ;

constexpr double_t const& __cordl_internal_get_localWindUpStartTime() const;

constexpr double_t& __cordl_internal_get_localWindUpStartTime() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr bool const& __cordl_internal_get_rightHandIsPointing() const;

constexpr bool& __cordl_internal_get_rightHandIsPointing() ;

constexpr bool const& __cordl_internal_get_willDropOnNextUp() const;

constexpr bool& __cordl_internal_get_willDropOnNextUp() ;

constexpr void __cordl_internal_set_heldDownSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_inputPlayer(::Rewired::Player*  value) ;

constexpr void __cordl_internal_set_isHoldingPropSwitch(bool  value) ;

constexpr void __cordl_internal_set_isInGoggles(bool  value) ;

constexpr void __cordl_internal_set_leftHandIsPointing(bool  value) ;

constexpr void __cordl_internal_set_localWindUpStartTime(double_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_rightHandIsPointing(bool  value) ;

constexpr void __cordl_internal_set_willDropOnNextUp(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_caster, addr 0x180466f90, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerCaster* get_caster() ;

/// @brief Method get_combinedWindUpStartTime, addr 0x180466fb0, size 0x60, virtual false, abstract: false, final false
inline double_t get_combinedWindUpStartTime() ;

/// @brief Method get_playerNetworking, addr 0x180467010, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerNetworking> get_playerNetworking() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerDecisions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerDecisions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerDecisions(PlayerDecisions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDecisions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerDecisions(PlayerDecisions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5448};

/// @brief Field logVerbose, offset: 0x10, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field inputPlayer, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Player*  ___inputPlayer;

/// @brief Field leftHandIsPointing, offset: 0x28, size: 0x1, def value: None
 bool  ___leftHandIsPointing;

/// @brief Field rightHandIsPointing, offset: 0x29, size: 0x1, def value: None
 bool  ___rightHandIsPointing;

/// @brief Field willDropOnNextUp, offset: 0x2a, size: 0x1, def value: None
 bool  ___willDropOnNextUp;

/// @brief Field heldDownSwitch, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___heldDownSwitch;

/// @brief Field isHoldingPropSwitch, offset: 0x38, size: 0x1, def value: None
 bool  ___isHoldingPropSwitch;

/// @brief Field localWindUpStartTime, offset: 0x40, size: 0x8, def value: None
 double_t  ___localWindUpStartTime;

/// @brief Field isInGoggles, offset: 0x48, size: 0x1, def value: None
 bool  ___isInGoggles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___logVerbose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___inputPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___leftHandIsPointing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___rightHandIsPointing) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___willDropOnNextUp) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___heldDownSwitch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___isHoldingPropSwitch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___localWindUpStartTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDecisions, ___isInGoggles) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerDecisions) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
