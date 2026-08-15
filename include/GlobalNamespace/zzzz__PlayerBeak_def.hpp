#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerBeak.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerBeak)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerBeak;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerBeak*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerBeak*, "", "PlayerBeak");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerBeak
class CORDL_TYPE PlayerBeak : public ::System::Object {
public:
// Declarations
/// @brief Field currentRetraction, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentRetraction, put=__cordl_internal_set_currentRetraction)) ::UnityEngine::Vector3  currentRetraction;

/// @brief Field logVerbose, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field overrideRaisedness, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideRaisedness, put=__cordl_internal_set_overrideRaisedness)) bool  overrideRaisedness;

/// @brief Field overrideRaisednessValue, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideRaisednessValue, put=__cordl_internal_set_overrideRaisednessValue)) float_t  overrideRaisednessValue;

/// @brief Field playerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field propIsNew, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_propIsNew, put=__cordl_internal_set_propIsNew)) bool  propIsNew;

/// @brief Field wobbleLocalRotation, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_wobbleLocalRotation, put=__cordl_internal_set_wobbleLocalRotation)) ::UnityEngine::Quaternion  wobbleLocalRotation;

/// @brief Field wobbleLocalVelocity, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_wobbleLocalVelocity, put=__cordl_internal_set_wobbleLocalVelocity)) ::UnityEngine::Vector3  wobbleLocalVelocity;

/// @brief Field wobbleMaxAngle, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_wobbleMaxAngle, put=__cordl_internal_set_wobbleMaxAngle)) float_t  wobbleMaxAngle;

/// @brief Field wobbleRotation, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_wobbleRotation, put=__cordl_internal_set_wobbleRotation)) ::UnityEngine::Quaternion  wobbleRotation;

/// @brief Field wobbleTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_wobbleTime, put=__cordl_internal_set_wobbleTime)) float_t  wobbleTime;

/// @brief Field wobbleVelocity, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_wobbleVelocity, put=__cordl_internal_set_wobbleVelocity)) ::UnityEngine::Vector3  wobbleVelocity;

/// @brief Method ClearRetraction, addr 0x18045edd0, size 0xf0, virtual false, abstract: false, final false
inline void ClearRetraction() ;

/// @brief Method FixedUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialize, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerBeak* New_ctor() ;

/// @brief Method SetGrapserPosition, addr 0x18045eec0, size 0x1010, virtual false, abstract: false, final false
inline void SetGrapserPosition(::GlobalNamespace::Prop*  prop, float_t  raisedness, ::by_ref<::UnityEngine::Vector3>  gripPositionLeft, ::by_ref<::UnityEngine::Vector3>  gripPositionRight) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentRetraction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentRetraction() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_overrideRaisedness() const;

constexpr bool& __cordl_internal_get_overrideRaisedness() ;

constexpr float_t const& __cordl_internal_get_overrideRaisednessValue() const;

constexpr float_t& __cordl_internal_get_overrideRaisednessValue() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr bool const& __cordl_internal_get_propIsNew() const;

constexpr bool& __cordl_internal_get_propIsNew() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_wobbleLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_wobbleLocalRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_wobbleLocalVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_wobbleLocalVelocity() ;

constexpr float_t const& __cordl_internal_get_wobbleMaxAngle() const;

constexpr float_t& __cordl_internal_get_wobbleMaxAngle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_wobbleRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_wobbleRotation() ;

constexpr float_t const& __cordl_internal_get_wobbleTime() const;

constexpr float_t& __cordl_internal_get_wobbleTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_wobbleVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_wobbleVelocity() ;

constexpr void __cordl_internal_set_currentRetraction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_overrideRaisedness(bool  value) ;

constexpr void __cordl_internal_set_overrideRaisednessValue(float_t  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_propIsNew(bool  value) ;

constexpr void __cordl_internal_set_wobbleLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_wobbleLocalVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_wobbleMaxAngle(float_t  value) ;

constexpr void __cordl_internal_set_wobbleRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_wobbleTime(float_t  value) ;

constexpr void __cordl_internal_set_wobbleVelocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerBeak() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerBeak", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerBeak(PlayerBeak && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerBeak", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerBeak(PlayerBeak const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5441};

/// @brief Field wobbleTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___wobbleTime;

/// @brief Field wobbleMaxAngle, offset: 0x14, size: 0x4, def value: None
 float_t  ___wobbleMaxAngle;

/// @brief Field logVerbose, offset: 0x18, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field overrideRaisedness, offset: 0x19, size: 0x1, def value: None
 bool  ___overrideRaisedness;

/// @brief Field overrideRaisednessValue, offset: 0x1c, size: 0x4, def value: None
 float_t  ___overrideRaisednessValue;

/// @brief Field playerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field currentRetraction, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentRetraction;

/// @brief Field wobbleRotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___wobbleRotation;

/// @brief Field wobbleVelocity, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___wobbleVelocity;

/// @brief Field wobbleLocalRotation, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___wobbleLocalRotation;

/// @brief Field wobbleLocalVelocity, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___wobbleLocalVelocity;

/// @brief Field propIsNew, offset: 0x6c, size: 0x1, def value: None
 bool  ___propIsNew;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___wobbleTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___wobbleMaxAngle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___logVerbose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___overrideRaisedness) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___overrideRaisednessValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___playerCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___currentRetraction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___wobbleRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___wobbleVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___wobbleLocalRotation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___wobbleLocalVelocity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerBeak, ___propIsNew) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerBeak) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
