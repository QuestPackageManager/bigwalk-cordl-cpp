#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMisc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerMisc)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PropGroup;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class SpecialCorpseZone;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerMisc;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerMisc*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerMisc*, "", "PlayerMisc");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerMisc
class CORDL_TYPE PlayerMisc : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DistanceToLocalPlayer, put=set_DistanceToLocalPlayer)) float_t  DistanceToLocalPlayer;

/// @brief Field <DistanceToLocalPlayer>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__DistanceToLocalPlayer_k__BackingField, put=__cordl_internal_set__DistanceToLocalPlayer_k__BackingField)) float_t  _DistanceToLocalPlayer_k__BackingField;

/// @brief Field _calmness, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__calmness, put=__cordl_internal_set__calmness)) float_t  _calmness;

/// @brief Field _idleSoundToggle, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__idleSoundToggle, put=__cordl_internal_set__idleSoundToggle)) bool  _idleSoundToggle;

/// @brief Field _tooHeavyAudioEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooHeavyAudioEvent, put=__cordl_internal_set__tooHeavyAudioEvent)) ::GlobalNamespace::AudioEvent*  _tooHeavyAudioEvent;

/// @brief Field blockCorpse, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_blockCorpse, put=__cordl_internal_set_blockCorpse)) bool  blockCorpse;

/// @brief Field calmRate, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_calmRate, put=__cordl_internal_set_calmRate)) float_t  calmRate;

/// @brief Field calmVelocityThreshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_calmVelocityThreshold, put=__cordl_internal_set_calmVelocityThreshold)) float_t  calmVelocityThreshold;

/// @brief Field idleSoundKneeThreshold, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleSoundKneeThreshold, put=__cordl_internal_set_idleSoundKneeThreshold)) float_t  idleSoundKneeThreshold;

/// @brief Field isEditingSign, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEditingSign, put=__cordl_internal_set_isEditingSign)) bool  isEditingSign;

 __declspec(property(get=get_isInPoseOrSitting)) bool  isInPoseOrSitting;

/// @brief Field logCalmness, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logCalmness, put=__cordl_internal_set_logCalmness)) bool  logCalmness;

 __declspec(property(get=get_movementIsBlocked)) bool  movementIsBlocked;

/// @brief Field playerCharacter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field specialCorpseZone, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_specialCorpseZone, put=__cordl_internal_set_specialCorpseZone)) ::UnityW<::GlobalNamespace::SpecialCorpseZone>  specialCorpseZone;

/// @brief Field tapSwitch, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tapSwitch, put=__cordl_internal_set_tapSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  tapSwitch;

/// @brief Field timeAtTapSwitchStart, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtTapSwitchStart, put=__cordl_internal_set_timeAtTapSwitchStart)) float_t  timeAtTapSwitchStart;

/// @brief Field tunnelLightingStrength, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_tunnelLightingStrength, put=__cordl_internal_set_tunnelLightingStrength)) bool  tunnelLightingStrength;

/// @brief Field unCalmRate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_unCalmRate, put=__cordl_internal_set_unCalmRate)) float_t  unCalmRate;

/// @brief Method ActionTextInputErase, addr 0x180354990, size 0x60, virtual false, abstract: false, final false
inline void ActionTextInputErase() ;

/// @brief Method ActionTextInputStroke, addr 0x1803549f0, size 0x60, virtual false, abstract: false, final false
inline void ActionTextInputStroke() ;

/// @brief Method DudUseHeld, addr 0x180354a50, size 0x220, virtual false, abstract: false, final false
inline void DudUseHeld() ;

/// @brief Method EmptyAllPockets, addr 0x180354c70, size 0xc0, virtual false, abstract: false, final false
inline void EmptyAllPockets() ;

/// @brief Method EmptyNonBlindfoldPockets, addr 0x180354d30, size 0x140, virtual false, abstract: false, final false
inline void EmptyNonBlindfoldPockets() ;

/// @brief Method EmptyPocket, addr 0x180354e70, size 0x90, virtual false, abstract: false, final false
inline void EmptyPocket(::GlobalNamespace::PropHome*  pocket) ;

/// @brief Method GetNumberOfPlayersAboveMe, addr 0x180354f00, size 0x80, virtual false, abstract: false, final false
inline int32_t GetNumberOfPlayersAboveMe() ;

/// @brief Method HasPocketWithPropGroup, addr 0x180354f80, size 0xb0, virtual false, abstract: false, final false
inline bool HasPocketWithPropGroup(::GlobalNamespace::PropGroup  propGroup) ;

/// @brief Method HoslterOnChange, addr 0x180355030, size 0x90, virtual false, abstract: false, final false
inline void HoslterOnChange(::GlobalNamespace::PropHome*  holsterHome, ::GlobalNamespace::Prop*  propBefore, ::GlobalNamespace::Prop*  propAfter) ;

/// @brief Method Initialize, addr 0x1803550c0, size 0x110, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerMisc* New_ctor() ;

/// @brief Method SetTapSwitch, addr 0x1803551d0, size 0x60, virtual false, abstract: false, final false
inline void SetTapSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch) ;

/// @brief Method ShowTextInputEraseEffect, addr 0x180355230, size 0x290, virtual false, abstract: false, final false
inline void ShowTextInputEraseEffect() ;

/// @brief Method ShowTextInputStrokeEffect, addr 0x1803554c0, size 0x290, virtual false, abstract: false, final false
inline void ShowTextInputStrokeEffect() ;

/// @brief Method TooHeavyAudioGetXCallback, addr 0x180355750, size 0x150, virtual false, abstract: false, final false
inline bool TooHeavyAudioGetXCallback(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method Update, addr 0x180355a20, size 0x710, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCalmness, addr 0x1803558a0, size 0x180, virtual false, abstract: false, final false
inline void UpdateCalmness() ;

constexpr float_t const& __cordl_internal_get__DistanceToLocalPlayer_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DistanceToLocalPlayer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__calmness() const;

constexpr float_t& __cordl_internal_get__calmness() ;

constexpr bool const& __cordl_internal_get__idleSoundToggle() const;

constexpr bool& __cordl_internal_get__idleSoundToggle() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__tooHeavyAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__tooHeavyAudioEvent() ;

constexpr bool const& __cordl_internal_get_blockCorpse() const;

constexpr bool& __cordl_internal_get_blockCorpse() ;

constexpr float_t const& __cordl_internal_get_calmRate() const;

constexpr float_t& __cordl_internal_get_calmRate() ;

constexpr float_t const& __cordl_internal_get_calmVelocityThreshold() const;

constexpr float_t& __cordl_internal_get_calmVelocityThreshold() ;

constexpr float_t const& __cordl_internal_get_idleSoundKneeThreshold() const;

constexpr float_t& __cordl_internal_get_idleSoundKneeThreshold() ;

constexpr bool const& __cordl_internal_get_isEditingSign() const;

constexpr bool& __cordl_internal_get_isEditingSign() ;

constexpr bool const& __cordl_internal_get_logCalmness() const;

constexpr bool& __cordl_internal_get_logCalmness() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityW<::GlobalNamespace::SpecialCorpseZone> const& __cordl_internal_get_specialCorpseZone() const;

constexpr ::UnityW<::GlobalNamespace::SpecialCorpseZone>& __cordl_internal_get_specialCorpseZone() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_tapSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_tapSwitch() ;

constexpr float_t const& __cordl_internal_get_timeAtTapSwitchStart() const;

constexpr float_t& __cordl_internal_get_timeAtTapSwitchStart() ;

constexpr bool const& __cordl_internal_get_tunnelLightingStrength() const;

constexpr bool& __cordl_internal_get_tunnelLightingStrength() ;

constexpr float_t const& __cordl_internal_get_unCalmRate() const;

constexpr float_t& __cordl_internal_get_unCalmRate() ;

constexpr void __cordl_internal_set__DistanceToLocalPlayer_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__calmness(float_t  value) ;

constexpr void __cordl_internal_set__idleSoundToggle(bool  value) ;

constexpr void __cordl_internal_set__tooHeavyAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_blockCorpse(bool  value) ;

constexpr void __cordl_internal_set_calmRate(float_t  value) ;

constexpr void __cordl_internal_set_calmVelocityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_idleSoundKneeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_isEditingSign(bool  value) ;

constexpr void __cordl_internal_set_logCalmness(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_specialCorpseZone(::UnityW<::GlobalNamespace::SpecialCorpseZone>  value) ;

constexpr void __cordl_internal_set_tapSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_timeAtTapSwitchStart(float_t  value) ;

constexpr void __cordl_internal_set_tunnelLightingStrength(bool  value) ;

constexpr void __cordl_internal_set_unCalmRate(float_t  value) ;

/// @brief Method .ctor, addr 0x180356130, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DistanceToLocalPlayer, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_DistanceToLocalPlayer() ;

/// @brief Method get_isInPoseOrSitting, addr 0x180356150, size 0x60, virtual false, abstract: false, final false
inline bool get_isInPoseOrSitting() ;

/// @brief Method get_movementIsBlocked, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_movementIsBlocked() ;

/// @brief Method set_DistanceToLocalPlayer, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_DistanceToLocalPlayer(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMisc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMisc", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMisc(PlayerMisc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMisc", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMisc(PlayerMisc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5472};

/// @brief Field calmRate, offset: 0x10, size: 0x4, def value: None
 float_t  ___calmRate;

/// @brief Field unCalmRate, offset: 0x14, size: 0x4, def value: None
 float_t  ___unCalmRate;

/// @brief Field calmVelocityThreshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___calmVelocityThreshold;

/// @brief Field logCalmness, offset: 0x1c, size: 0x1, def value: None
 bool  ___logCalmness;

/// @brief Field _calmness, offset: 0x20, size: 0x4, def value: None
 float_t  ____calmness;

/// @brief Field blockCorpse, offset: 0x24, size: 0x1, def value: None
 bool  ___blockCorpse;

/// @brief Field playerCharacter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field isEditingSign, offset: 0x30, size: 0x1, def value: None
 bool  ___isEditingSign;

/// @brief Field specialCorpseZone, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpecialCorpseZone>  ___specialCorpseZone;

/// @brief Field tunnelLightingStrength, offset: 0x40, size: 0x1, def value: None
 bool  ___tunnelLightingStrength;

/// @brief Field _tooHeavyAudioEvent, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____tooHeavyAudioEvent;

/// @brief Field <DistanceToLocalPlayer>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____DistanceToLocalPlayer_k__BackingField;

/// @brief Field tapSwitch, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___tapSwitch;

/// @brief Field timeAtTapSwitchStart, offset: 0x60, size: 0x4, def value: None
 float_t  ___timeAtTapSwitchStart;

/// @brief Field idleSoundKneeThreshold, offset: 0x64, size: 0x4, def value: None
 float_t  ___idleSoundKneeThreshold;

/// @brief Field _idleSoundToggle, offset: 0x68, size: 0x1, def value: None
 bool  ____idleSoundToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___calmRate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___unCalmRate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___calmVelocityThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___logCalmness) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ____calmness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___blockCorpse) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___playerCharacter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___isEditingSign) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___specialCorpseZone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___tunnelLightingStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ____tooHeavyAudioEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ____DistanceToLocalPlayer_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___tapSwitch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___timeAtTapSwitchStart) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ___idleSoundKneeThreshold) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMisc, ____idleSoundToggle) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerMisc) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
