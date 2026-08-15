#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerFaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerFaller)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerFaller___c__DisplayClass19_0;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerFaller;
}
namespace GlobalNamespace {
class PlayerFaller___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerFaller*);
MARK_REF_T(::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerFaller*, "", "PlayerFaller");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerFaller___c__DisplayClass19_0*, "", "PlayerFaller/<>c__DisplayClass19_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerFaller/<>c__DisplayClass19_0
class CORDL_TYPE PlayerFaller___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field difference, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_difference, put=__cordl_internal_set_difference)) float_t  difference;

static inline ::GlobalNamespace::PlayerFaller___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <Update>b__0, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t _Update_b__0() ;

constexpr float_t const& __cordl_internal_get_difference() const;

constexpr float_t& __cordl_internal_get_difference() ;

constexpr void __cordl_internal_set_difference(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerFaller___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerFaller___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerFaller___c__DisplayClass19_0(PlayerFaller___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerFaller___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerFaller___c__DisplayClass19_0(PlayerFaller___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5451};

/// @brief Field difference, offset: 0x10, size: 0x4, def value: None
 float_t  ___difference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerFaller___c__DisplayClass19_0, ___difference) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerFaller___c__DisplayClass19_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerFaller
class CORDL_TYPE PlayerFaller : public ::System::Object {
public:
// Declarations
using __c__DisplayClass19_0 = ::GlobalNamespace::PlayerFaller___c__DisplayClass19_0;

/// @brief Field _fallWaterSoundEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallWaterSoundEvent, put=__cordl_internal_set__fallWaterSoundEvent)) ::GlobalNamespace::AudioEvent*  _fallWaterSoundEvent;

/// @brief Field _fallingSoundEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallingSoundEvent, put=__cordl_internal_set__fallingSoundEvent)) ::GlobalNamespace::AudioEvent*  _fallingSoundEvent;

/// @brief Field <isInDanger>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInDanger_k__BackingField, put=__cordl_internal_set__isInDanger_k__BackingField)) bool  _isInDanger_k__BackingField;

/// @brief Field fallDistance, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallDistance, put=__cordl_internal_set_fallDistance)) float_t  fallDistance;

/// @brief Field heightLastGrounded, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightLastGrounded, put=__cordl_internal_set_heightLastGrounded)) float_t  heightLastGrounded;

/// @brief Field ignoreFalling, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreFalling, put=__cordl_internal_set_ignoreFalling)) bool  ignoreFalling;

 __declspec(property(get=get_isDazed)) bool  isDazed;

 __declspec(property(get=get_isInDanger, put=set_isInDanger)) bool  isInDanger;

/// @brief Field logVerbose, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field logisDazed, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_logisDazed, put=__cordl_internal_set_logisDazed)) bool  logisDazed;

/// @brief Field playerCharacter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field showPostEffects, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_showPostEffects, put=__cordl_internal_set_showPostEffects)) bool  showPostEffects;

/// @brief Field sitPauseDuration, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sitPauseDuration, put=__cordl_internal_set_sitPauseDuration)) float_t  sitPauseDuration;

/// @brief Field timeAtDazeStart, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtDazeStart, put=__cordl_internal_set_timeAtDazeStart)) float_t  timeAtDazeStart;

/// @brief Method ClearNextFall, addr 0x180467c20, size 0x10, virtual false, abstract: false, final false
inline void ClearNextFall() ;

/// @brief Method Initialize, addr 0x180467c30, size 0x120, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerFaller* New_ctor() ;

/// @brief Method OnDisable, addr 0x180467d50, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ProcessRemoteFall, addr 0x180467da0, size 0x40, virtual false, abstract: false, final false
inline void ProcessRemoteFall() ;

/// @brief Method ShowFall, addr 0x180467de0, size 0x270, virtual false, abstract: false, final false
inline void ShowFall() ;

/// @brief Method TriggerFall, addr 0x180468050, size 0xc0, virtual false, abstract: false, final false
inline void TriggerFall() ;

/// @brief Method Update, addr 0x180468110, size 0x6d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__fallWaterSoundEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__fallWaterSoundEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__fallingSoundEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__fallingSoundEvent() ;

constexpr bool const& __cordl_internal_get__isInDanger_k__BackingField() const;

constexpr bool& __cordl_internal_get__isInDanger_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_fallDistance() const;

constexpr float_t& __cordl_internal_get_fallDistance() ;

constexpr float_t const& __cordl_internal_get_heightLastGrounded() const;

constexpr float_t& __cordl_internal_get_heightLastGrounded() ;

constexpr bool const& __cordl_internal_get_ignoreFalling() const;

constexpr bool& __cordl_internal_get_ignoreFalling() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr bool const& __cordl_internal_get_logisDazed() const;

constexpr bool& __cordl_internal_get_logisDazed() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr bool const& __cordl_internal_get_showPostEffects() const;

constexpr bool& __cordl_internal_get_showPostEffects() ;

constexpr float_t const& __cordl_internal_get_sitPauseDuration() const;

constexpr float_t& __cordl_internal_get_sitPauseDuration() ;

constexpr float_t const& __cordl_internal_get_timeAtDazeStart() const;

constexpr float_t& __cordl_internal_get_timeAtDazeStart() ;

constexpr void __cordl_internal_set__fallWaterSoundEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__fallingSoundEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__isInDanger_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_fallDistance(float_t  value) ;

constexpr void __cordl_internal_set_heightLastGrounded(float_t  value) ;

constexpr void __cordl_internal_set_ignoreFalling(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_logisDazed(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_showPostEffects(bool  value) ;

constexpr void __cordl_internal_set_sitPauseDuration(float_t  value) ;

constexpr void __cordl_internal_set_timeAtDazeStart(float_t  value) ;

/// @brief Method .ctor, addr 0x1804687e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isDazed, addr 0x1804687f0, size 0x10, virtual false, abstract: false, final false
inline bool get_isDazed() ;

/// @brief Method get_isInDanger, addr 0x180468800, size 0x10, virtual false, abstract: false, final false
inline bool get_isInDanger() ;

/// @brief Method set_isInDanger, addr 0x180468810, size 0x10, virtual false, abstract: false, final false
inline void set_isInDanger(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerFaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerFaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerFaller(PlayerFaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerFaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerFaller(PlayerFaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5452};

/// @brief Field fallDistance, offset: 0x10, size: 0x4, def value: None
 float_t  ___fallDistance;

/// @brief Field sitPauseDuration, offset: 0x14, size: 0x4, def value: None
 float_t  ___sitPauseDuration;

/// @brief Field showPostEffects, offset: 0x18, size: 0x1, def value: None
 bool  ___showPostEffects;

/// @brief Field logVerbose, offset: 0x19, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logisDazed, offset: 0x1a, size: 0x1, def value: None
 bool  ___logisDazed;

/// @brief Field ignoreFalling, offset: 0x1b, size: 0x1, def value: None
 bool  ___ignoreFalling;

/// @brief Field _fallingSoundEvent, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____fallingSoundEvent;

/// @brief Field _fallWaterSoundEvent, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____fallWaterSoundEvent;

/// @brief Field heightLastGrounded, offset: 0x30, size: 0x4, def value: None
 float_t  ___heightLastGrounded;

/// @brief Field playerCharacter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field timeAtDazeStart, offset: 0x40, size: 0x4, def value: None
 float_t  ___timeAtDazeStart;

/// @brief Field <isInDanger>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____isInDanger_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___fallDistance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___sitPauseDuration) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___showPostEffects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___logVerbose) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___logisDazed) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___ignoreFalling) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ____fallingSoundEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ____fallWaterSoundEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___heightLastGrounded) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___playerCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ___timeAtDazeStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerFaller, ____isInDanger_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerFaller) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
