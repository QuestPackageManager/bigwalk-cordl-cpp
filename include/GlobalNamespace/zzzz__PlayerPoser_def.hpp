#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPoser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PlayerPoser)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerPoser;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerPoser*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPoser*, "", "PlayerPoser");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerPoser
class CORDL_TYPE PlayerPoser : public ::System::Object {
public:
// Declarations
/// @brief Field _idleAudioEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__idleAudioEvent, put=__cordl_internal_set__idleAudioEvent)) ::GlobalNamespace::AudioEvent*  _idleAudioEvent;

/// @brief Field _legWiggleAudioEvent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__legWiggleAudioEvent, put=__cordl_internal_set__legWiggleAudioEvent)) ::GlobalNamespace::AudioEvent*  _legWiggleAudioEvent;

 __declspec(property(get=get_active)) bool  active;

 __declspec(property(get=get_bottomPlayerInStack)) ::UnityW<::GlobalNamespace::PlayerCharacter>  bottomPlayerInStack;

/// @brief Field currentPose, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPose, put=__cordl_internal_set_currentPose)) ::UnityW<::GlobalNamespace::PlayerPose>  currentPose;

 __declspec(property(get=get_isCrouchBlocking)) bool  isCrouchBlocking;

 __declspec(property(get=get_isFootstepBlocking)) bool  isFootstepBlocking;

/// @brief Field justEnteredFlag, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_justEnteredFlag, put=__cordl_internal_set_justEnteredFlag)) bool  justEnteredFlag;

/// @brief Field localBumOffset, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_localBumOffset, put=__cordl_internal_set_localBumOffset)) ::UnityEngine::Vector3  localBumOffset;

/// @brief Field localBumOffsetVelocity, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_localBumOffsetVelocity, put=__cordl_internal_set_localBumOffsetVelocity)) ::UnityEngine::Vector3  localBumOffsetVelocity;

/// @brief Field localBumOriginalPostion, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localBumOriginalPostion, put=__cordl_internal_set_localBumOriginalPostion)) ::UnityEngine::Vector3  localBumOriginalPostion;

/// @brief Field logVerbose, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

 __declspec(property(get=get_playerHoldingMe)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerHoldingMe;

 __declspec(property(get=get_propSupportingStack)) ::UnityW<::GlobalNamespace::Prop>  propSupportingStack;

/// @brief Method EnterPose, addr 0x180359c70, size 0xb40, virtual false, abstract: false, final false
inline void EnterPose(::GlobalNamespace::PlayerPose*  pose) ;

/// @brief Method ExitPose, addr 0x18035a7b0, size 0x5c0, virtual false, abstract: false, final false
inline void ExitPose(::GlobalNamespace::AudioAsset*  soundOverride) ;

/// @brief Method Initialize, addr 0x18035ad70, size 0x80, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerPoser* New_ctor() ;

/// @brief Method PerformPoseDrop, addr 0x18035adf0, size 0x130, virtual false, abstract: false, final false
inline void PerformPoseDrop(::GlobalNamespace::PlayerPose*  pose) ;

/// @brief Method PoseIsNotUpright, addr 0x18035af20, size 0x60, virtual false, abstract: false, final false
inline bool PoseIsNotUpright(::GlobalNamespace::PlayerPose*  pose) ;

/// @brief Method PoseIsSafe, addr 0x18035af80, size 0x4f0, virtual false, abstract: false, final false
inline bool PoseIsSafe(::GlobalNamespace::PlayerPose*  pose, ::GlobalNamespace::PlayerCharacter*  initiatingPlayer) ;

/// @brief Method Update, addr 0x18035b470, size 0x9c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__idleAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__idleAudioEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__legWiggleAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__legWiggleAudioEvent() ;

constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& __cordl_internal_get_currentPose() const;

constexpr ::UnityW<::GlobalNamespace::PlayerPose>& __cordl_internal_get_currentPose() ;

constexpr bool const& __cordl_internal_get_justEnteredFlag() const;

constexpr bool& __cordl_internal_get_justEnteredFlag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localBumOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localBumOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localBumOffsetVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localBumOffsetVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localBumOriginalPostion() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localBumOriginalPostion() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr void __cordl_internal_set__idleAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__legWiggleAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_currentPose(::UnityW<::GlobalNamespace::PlayerPose>  value) ;

constexpr void __cordl_internal_set_justEnteredFlag(bool  value) ;

constexpr void __cordl_internal_set_localBumOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localBumOffsetVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localBumOriginalPostion(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_active, addr 0x18035be30, size 0x10, virtual false, abstract: false, final false
inline bool get_active() ;

/// @brief Method get_bottomPlayerInStack, addr 0x18035be40, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> get_bottomPlayerInStack() ;

/// @brief Method get_isCrouchBlocking, addr 0x18035bf10, size 0x40, virtual false, abstract: false, final false
inline bool get_isCrouchBlocking() ;

/// @brief Method get_isFootstepBlocking, addr 0x18035bf50, size 0x40, virtual false, abstract: false, final false
inline bool get_isFootstepBlocking() ;

/// @brief Method get_playerHoldingMe, addr 0x18035bf90, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> get_playerHoldingMe() ;

/// @brief Method get_propSupportingStack, addr 0x18035bfd0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::Prop> get_propSupportingStack() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPoser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPoser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPoser(PlayerPoser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPoser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPoser(PlayerPoser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5476};

/// @brief Field playerCharacter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field currentPose, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerPose>  ___currentPose;

/// @brief Field justEnteredFlag, offset: 0x20, size: 0x1, def value: None
 bool  ___justEnteredFlag;

/// @brief Field logVerbose, offset: 0x21, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field localBumOffset, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localBumOffset;

/// @brief Field localBumOffsetVelocity, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localBumOffsetVelocity;

/// @brief Field localBumOriginalPostion, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localBumOriginalPostion;

/// @brief Field _legWiggleAudioEvent, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____legWiggleAudioEvent;

/// @brief Field _idleAudioEvent, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____idleAudioEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___playerCharacter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___currentPose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___justEnteredFlag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___logVerbose) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___localBumOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___localBumOffsetVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ___localBumOriginalPostion) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ____legWiggleAudioEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPoser, ____idleAudioEvent) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPoser) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
