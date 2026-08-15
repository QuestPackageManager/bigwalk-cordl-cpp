#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSleeper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerSleeper)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class SleeplessZone;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSleeper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerSleeper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerSleeper*, "", "PlayerSleeper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSleeper
class CORDL_TYPE PlayerSleeper : public ::System::Object {
public:
// Declarations
/// @brief Field _sleepSoundToggle, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__sleepSoundToggle, put=__cordl_internal_set__sleepSoundToggle)) bool  _sleepSoundToggle;

/// @brief Field _wasSleeping, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasSleeping, put=__cordl_internal_set__wasSleeping)) bool  _wasSleeping;

 __declspec(property(get=get_combinedIsSleeping)) bool  combinedIsSleeping;

/// @brief Field forceSleeping, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceSleeping, put=__cordl_internal_set_forceSleeping)) bool  forceSleeping;

/// @brief Field localIsSleeping, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_localIsSleeping, put=__cordl_internal_set_localIsSleeping)) bool  localIsSleeping;

/// @brief Field logVerbose, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field preventSleeping, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_preventSleeping, put=__cordl_internal_set_preventSleeping)) bool  preventSleeping;

/// @brief Field sleepSoundThreshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepSoundThreshold, put=__cordl_internal_set_sleepSoundThreshold)) float_t  sleepSoundThreshold;

/// @brief Field sleeplessZone, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleeplessZone, put=__cordl_internal_set_sleeplessZone)) ::UnityW<::GlobalNamespace::SleeplessZone>  sleeplessZone;

/// @brief Field smoothSleepiness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothSleepiness, put=__cordl_internal_set_smoothSleepiness)) float_t  smoothSleepiness;

/// @brief Field smoothSleepinessVelocity, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothSleepinessVelocity, put=__cordl_internal_set_smoothSleepinessVelocity)) float_t  smoothSleepinessVelocity;

/// @brief Field timeAtLastAction, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLastAction, put=__cordl_internal_set_timeAtLastAction)) float_t  timeAtLastAction;

/// @brief Field timeTilSleep, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeTilSleep, put=__cordl_internal_set_timeTilSleep)) float_t  timeTilSleep;

/// @brief Method Initialize, addr 0x180375300, size 0x30, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerSleeper* New_ctor() ;

/// @brief Method RecordAction, addr 0x180375330, size 0x20, virtual false, abstract: false, final false
inline void RecordAction() ;

/// @brief Method Update, addr 0x180375350, size 0x980, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__sleepSoundToggle() const;

constexpr bool& __cordl_internal_get__sleepSoundToggle() ;

constexpr bool const& __cordl_internal_get__wasSleeping() const;

constexpr bool& __cordl_internal_get__wasSleeping() ;

constexpr bool const& __cordl_internal_get_forceSleeping() const;

constexpr bool& __cordl_internal_get_forceSleeping() ;

constexpr bool const& __cordl_internal_get_localIsSleeping() const;

constexpr bool& __cordl_internal_get_localIsSleeping() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr bool const& __cordl_internal_get_preventSleeping() const;

constexpr bool& __cordl_internal_get_preventSleeping() ;

constexpr float_t const& __cordl_internal_get_sleepSoundThreshold() const;

constexpr float_t& __cordl_internal_get_sleepSoundThreshold() ;

constexpr ::UnityW<::GlobalNamespace::SleeplessZone> const& __cordl_internal_get_sleeplessZone() const;

constexpr ::UnityW<::GlobalNamespace::SleeplessZone>& __cordl_internal_get_sleeplessZone() ;

constexpr float_t const& __cordl_internal_get_smoothSleepiness() const;

constexpr float_t& __cordl_internal_get_smoothSleepiness() ;

constexpr float_t const& __cordl_internal_get_smoothSleepinessVelocity() const;

constexpr float_t& __cordl_internal_get_smoothSleepinessVelocity() ;

constexpr float_t const& __cordl_internal_get_timeAtLastAction() const;

constexpr float_t& __cordl_internal_get_timeAtLastAction() ;

constexpr float_t const& __cordl_internal_get_timeTilSleep() const;

constexpr float_t& __cordl_internal_get_timeTilSleep() ;

constexpr void __cordl_internal_set__sleepSoundToggle(bool  value) ;

constexpr void __cordl_internal_set__wasSleeping(bool  value) ;

constexpr void __cordl_internal_set_forceSleeping(bool  value) ;

constexpr void __cordl_internal_set_localIsSleeping(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_preventSleeping(bool  value) ;

constexpr void __cordl_internal_set_sleepSoundThreshold(float_t  value) ;

constexpr void __cordl_internal_set_sleeplessZone(::UnityW<::GlobalNamespace::SleeplessZone>  value) ;

constexpr void __cordl_internal_set_smoothSleepiness(float_t  value) ;

constexpr void __cordl_internal_set_smoothSleepinessVelocity(float_t  value) ;

constexpr void __cordl_internal_set_timeAtLastAction(float_t  value) ;

constexpr void __cordl_internal_set_timeTilSleep(float_t  value) ;

/// @brief Method .ctor, addr 0x180375cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_combinedIsSleeping, addr 0x180375ce0, size 0x50, virtual false, abstract: false, final false
inline bool get_combinedIsSleeping() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSleeper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSleeper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSleeper(PlayerSleeper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSleeper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSleeper(PlayerSleeper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5481};

/// @brief Field timeTilSleep, offset: 0x10, size: 0x4, def value: None
 float_t  ___timeTilSleep;

/// @brief Field logVerbose, offset: 0x14, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field preventSleeping, offset: 0x15, size: 0x1, def value: None
 bool  ___preventSleeping;

/// @brief Field forceSleeping, offset: 0x16, size: 0x1, def value: None
 bool  ___forceSleeping;

/// @brief Field sleepSoundThreshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___sleepSoundThreshold;

/// @brief Field _wasSleeping, offset: 0x1c, size: 0x1, def value: None
 bool  ____wasSleeping;

/// @brief Field _sleepSoundToggle, offset: 0x1d, size: 0x1, def value: None
 bool  ____sleepSoundToggle;

/// @brief Field localIsSleeping, offset: 0x1e, size: 0x1, def value: None
 bool  ___localIsSleeping;

/// @brief Field timeAtLastAction, offset: 0x20, size: 0x4, def value: None
 float_t  ___timeAtLastAction;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field smoothSleepiness, offset: 0x30, size: 0x4, def value: None
 float_t  ___smoothSleepiness;

/// @brief Field smoothSleepinessVelocity, offset: 0x34, size: 0x4, def value: None
 float_t  ___smoothSleepinessVelocity;

/// @brief Field sleeplessZone, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SleeplessZone>  ___sleeplessZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___timeTilSleep) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___logVerbose) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___preventSleeping) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___forceSleeping) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___sleepSoundThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ____wasSleeping) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ____sleepSoundToggle) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___localIsSleeping) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___timeAtLastAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___smoothSleepiness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___smoothSleepinessVelocity) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSleeper, ___sleeplessZone) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerSleeper) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
