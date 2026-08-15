#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAudioReferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PlayerAudioReferences)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioPicker;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace GlobalNamespace {
class SoundCue;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerAudioReferences;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerAudioReferences*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerAudioReferences*, "", "PlayerAudioReferences");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerAudioReferences
class CORDL_TYPE PlayerAudioReferences : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field armLockCancel, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_armLockCancel, put=__cordl_internal_set_armLockCancel)) ::UnityW<::GlobalNamespace::AudioAsset>  armLockCancel;

/// @brief Field armLockComplete, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_armLockComplete, put=__cordl_internal_set_armLockComplete)) ::UnityW<::GlobalNamespace::AudioAsset>  armLockComplete;

/// @brief Field armLockLoop, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_armLockLoop, put=__cordl_internal_set_armLockLoop)) ::UnityW<::GlobalNamespace::AudioAsset>  armLockLoop;

/// @brief Field crouchDownSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_crouchDownSound, put=__cordl_internal_set_crouchDownSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  crouchDownSound;

/// @brief Field crouchUpSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_crouchUpSound, put=__cordl_internal_set_crouchUpSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  crouchUpSound;

/// @brief Field deathSound, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_deathSound, put=__cordl_internal_set_deathSound)) ::UnityW<::GlobalNamespace::AudioAsset>  deathSound;

/// @brief Field defaultDudSound, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultDudSound, put=__cordl_internal_set_defaultDudSound)) ::UnityW<::GlobalNamespace::AudioAsset>  defaultDudSound;

/// @brief Field enterSleepSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterSleepSound, put=__cordl_internal_set_enterSleepSound)) ::UnityW<::GlobalNamespace::AudioPicker>  enterSleepSound;

/// @brief Field escapeCarrySound, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_escapeCarrySound, put=__cordl_internal_set_escapeCarrySound)) ::UnityW<::GlobalNamespace::AudioAsset>  escapeCarrySound;

/// @brief Field exitSleepSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitSleepSound, put=__cordl_internal_set_exitSleepSound)) ::UnityW<::GlobalNamespace::AudioPicker>  exitSleepSound;

/// @brief Field fallSound, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallSound, put=__cordl_internal_set_fallSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  fallSound;

/// @brief Field fallingSound, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallingSound, put=__cordl_internal_set_fallingSound)) ::UnityW<::GlobalNamespace::AudioAsset>  fallingSound;

/// @brief Field fallingWaterSound, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallingWaterSound, put=__cordl_internal_set_fallingWaterSound)) ::UnityW<::GlobalNamespace::AudioAsset>  fallingWaterSound;

/// @brief Field forwardInSound, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_forwardInSound, put=__cordl_internal_set_forwardInSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  forwardInSound;

/// @brief Field forwardOutSound, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_forwardOutSound, put=__cordl_internal_set_forwardOutSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  forwardOutSound;

/// @brief Field grabSound, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabSound, put=__cordl_internal_set_grabSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  grabSound;

/// @brief Field idleDownSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleDownSound, put=__cordl_internal_set_idleDownSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  idleDownSound;

/// @brief Field idleUpSound, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleUpSound, put=__cordl_internal_set_idleUpSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  idleUpSound;

/// @brief Field jumpCrouchGrabSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpCrouchGrabSound, put=__cordl_internal_set_jumpCrouchGrabSound)) ::UnityW<::GlobalNamespace::AudioAsset>  jumpCrouchGrabSound;

/// @brief Field jumpCrouchReleaseSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpCrouchReleaseSound, put=__cordl_internal_set_jumpCrouchReleaseSound)) ::UnityW<::GlobalNamespace::AudioAsset>  jumpCrouchReleaseSound;

/// @brief Field jumpDudSound, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpDudSound, put=__cordl_internal_set_jumpDudSound)) ::UnityW<::GlobalNamespace::AudioAsset>  jumpDudSound;

/// @brief Field kickSound, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_kickSound, put=__cordl_internal_set_kickSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  kickSound;

/// @brief Field menuCloseSound, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_menuCloseSound, put=__cordl_internal_set_menuCloseSound)) ::UnityW<::GlobalNamespace::AudioAsset>  menuCloseSound;

/// @brief Field menuOpenSound, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_menuOpenSound, put=__cordl_internal_set_menuOpenSound)) ::UnityW<::GlobalNamespace::AudioAsset>  menuOpenSound;

/// @brief Field muteSound, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteSound, put=__cordl_internal_set_muteSound)) ::UnityW<::GlobalNamespace::AudioAsset>  muteSound;

/// @brief Field pickedUpSound, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_pickedUpSound, put=__cordl_internal_set_pickedUpSound)) ::UnityW<::GlobalNamespace::AudioAsset>  pickedUpSound;

/// @brief Field raiseDownSound, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_raiseDownSound, put=__cordl_internal_set_raiseDownSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  raiseDownSound;

/// @brief Field raiseUpSound, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_raiseUpSound, put=__cordl_internal_set_raiseUpSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  raiseUpSound;

/// @brief Field releaseSound, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_releaseSound, put=__cordl_internal_set_releaseSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  releaseSound;

/// @brief Field releaseWindUpLoop, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_releaseWindUpLoop, put=__cordl_internal_set_releaseWindUpLoop)) ::UnityW<::GlobalNamespace::SoundCue>  releaseWindUpLoop;

/// @brief Field reviveSound, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveSound, put=__cordl_internal_set_reviveSound)) ::UnityW<::GlobalNamespace::AudioAsset>  reviveSound;

/// @brief Field sideInSound, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sideInSound, put=__cordl_internal_set_sideInSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sideInSound;

/// @brief Field sideOutSound, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sideOutSound, put=__cordl_internal_set_sideOutSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sideOutSound;

/// @brief Field sitDownSound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sitDownSound, put=__cordl_internal_set_sitDownSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sitDownSound;

/// @brief Field sitUpSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sitUpSound, put=__cordl_internal_set_sitUpSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sitUpSound;

/// @brief Field sleepDownSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepDownSound, put=__cordl_internal_set_sleepDownSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sleepDownSound;

/// @brief Field sleepUpSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepUpSound, put=__cordl_internal_set_sleepUpSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sleepUpSound;

/// @brief Field snatchReactionSound, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_snatchReactionSound, put=__cordl_internal_set_snatchReactionSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  snatchReactionSound;

/// @brief Field stealHeavySound, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stealHeavySound, put=__cordl_internal_set_stealHeavySound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  stealHeavySound;

/// @brief Field stealSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_stealSound, put=__cordl_internal_set_stealSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  stealSound;

/// @brief Field strainSound, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_strainSound, put=__cordl_internal_set_strainSound)) ::UnityW<::GlobalNamespace::SoundCue>  strainSound;

/// @brief Field stretchInLoop, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_stretchInLoop, put=__cordl_internal_set_stretchInLoop)) ::UnityW<::GlobalNamespace::SoundCue>  stretchInLoop;

/// @brief Field stretchOutLoop, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_stretchOutLoop, put=__cordl_internal_set_stretchOutLoop)) ::UnityW<::GlobalNamespace::SoundCue>  stretchOutLoop;

/// @brief Field stretchReleaseSound, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_stretchReleaseSound, put=__cordl_internal_set_stretchReleaseSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  stretchReleaseSound;

/// @brief Field textCloseSound, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_textCloseSound, put=__cordl_internal_set_textCloseSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textCloseSound;

/// @brief Field textDeleteSound, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_textDeleteSound, put=__cordl_internal_set_textDeleteSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textDeleteSound;

/// @brief Field textOpenSound, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_textOpenSound, put=__cordl_internal_set_textOpenSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textOpenSound;

/// @brief Field textSendSound, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_textSendSound, put=__cordl_internal_set_textSendSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textSendSound;

/// @brief Field textTypeSound, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_textTypeSound, put=__cordl_internal_set_textTypeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  textTypeSound;

/// @brief Field throwSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSound, put=__cordl_internal_set_throwSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  throwSound;

/// @brief Field unmuteSound, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unmuteSound, put=__cordl_internal_set_unmuteSound)) ::UnityW<::GlobalNamespace::AudioAsset>  unmuteSound;

/// @brief Field wiggleSound, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_wiggleSound, put=__cordl_internal_set_wiggleSound)) ::UnityW<::GlobalNamespace::AudioScatterContainer>  wiggleSound;

static inline ::GlobalNamespace::PlayerAudioReferences* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_armLockCancel() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_armLockCancel() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_armLockComplete() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_armLockComplete() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_armLockLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_armLockLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_crouchDownSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_crouchDownSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_crouchUpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_crouchUpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_deathSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_deathSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_defaultDudSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_defaultDudSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& __cordl_internal_get_enterSleepSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioPicker>& __cordl_internal_get_enterSleepSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_escapeCarrySound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_escapeCarrySound() ;

constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& __cordl_internal_get_exitSleepSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioPicker>& __cordl_internal_get_exitSleepSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_fallSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_fallSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_fallingSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_fallingSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_fallingWaterSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_fallingWaterSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_forwardInSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_forwardInSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_forwardOutSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_forwardOutSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_grabSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_grabSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_idleDownSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_idleDownSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_idleUpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_idleUpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_jumpCrouchGrabSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_jumpCrouchGrabSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_jumpCrouchReleaseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_jumpCrouchReleaseSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_jumpDudSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_jumpDudSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_kickSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_kickSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_menuCloseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_menuCloseSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_menuOpenSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_menuOpenSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_muteSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_muteSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_pickedUpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_pickedUpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_raiseDownSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_raiseDownSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_raiseUpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_raiseUpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_releaseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_releaseSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_releaseWindUpLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_releaseWindUpLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_reviveSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_reviveSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sideInSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sideInSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sideOutSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sideOutSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sitDownSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sitDownSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sitUpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sitUpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sleepDownSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sleepDownSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sleepUpSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sleepUpSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_snatchReactionSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_snatchReactionSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_stealHeavySound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_stealHeavySound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_stealSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_stealSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_strainSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_strainSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_stretchInLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_stretchInLoop() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_stretchOutLoop() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_stretchOutLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_stretchReleaseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_stretchReleaseSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textCloseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textCloseSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textDeleteSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textDeleteSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textOpenSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textOpenSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textSendSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textSendSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_textTypeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_textTypeSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_throwSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_throwSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_unmuteSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_unmuteSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& __cordl_internal_get_wiggleSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& __cordl_internal_get_wiggleSound() ;

constexpr void __cordl_internal_set_armLockCancel(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_armLockComplete(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_armLockLoop(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_crouchDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_crouchUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_deathSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_defaultDudSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_enterSleepSound(::UnityW<::GlobalNamespace::AudioPicker>  value) ;

constexpr void __cordl_internal_set_escapeCarrySound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_exitSleepSound(::UnityW<::GlobalNamespace::AudioPicker>  value) ;

constexpr void __cordl_internal_set_fallSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_fallingSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_fallingWaterSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_forwardInSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_forwardOutSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_grabSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_idleDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_idleUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_jumpCrouchGrabSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_jumpCrouchReleaseSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_jumpDudSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_kickSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_menuCloseSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_menuOpenSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_muteSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_pickedUpSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_raiseDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_raiseUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_releaseSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_releaseWindUpLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_reviveSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_sideInSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_sideOutSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_sitDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_sitUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_sleepDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_sleepUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_snatchReactionSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_stealHeavySound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_stealSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_strainSound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_stretchInLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_stretchOutLoop(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_stretchReleaseSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_textCloseSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_textDeleteSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_textOpenSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_textSendSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_textTypeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_throwSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_unmuteSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_wiggleSound(::UnityW<::GlobalNamespace::AudioScatterContainer>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerAudioReferences() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerAudioReferences", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerAudioReferences(PlayerAudioReferences && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerAudioReferences", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerAudioReferences(PlayerAudioReferences const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4864};

/// @brief Field idleUpSound, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___idleUpSound;

/// @brief Field idleDownSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___idleDownSound;

/// @brief Field sitDownSound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sitDownSound;

/// @brief Field sitUpSound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sitUpSound;

/// @brief Field crouchUpSound, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___crouchUpSound;

/// @brief Field crouchDownSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___crouchDownSound;

/// @brief Field jumpCrouchGrabSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___jumpCrouchGrabSound;

/// @brief Field jumpCrouchReleaseSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___jumpCrouchReleaseSound;

/// @brief Field enterSleepSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioPicker>  ___enterSleepSound;

/// @brief Field exitSleepSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioPicker>  ___exitSleepSound;

/// @brief Field sleepUpSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sleepUpSound;

/// @brief Field sleepDownSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sleepDownSound;

/// @brief Field stretchInLoop, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___stretchInLoop;

/// @brief Field stretchOutLoop, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___stretchOutLoop;

/// @brief Field stretchReleaseSound, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___stretchReleaseSound;

/// @brief Field grabSound, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___grabSound;

/// @brief Field stealSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___stealSound;

/// @brief Field stealHeavySound, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___stealHeavySound;

/// @brief Field throwSound, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___throwSound;

/// @brief Field kickSound, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___kickSound;

/// @brief Field releaseSound, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___releaseSound;

/// @brief Field releaseWindUpLoop, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___releaseWindUpLoop;

/// @brief Field raiseUpSound, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___raiseUpSound;

/// @brief Field raiseDownSound, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___raiseDownSound;

/// @brief Field forwardInSound, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___forwardInSound;

/// @brief Field forwardOutSound, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___forwardOutSound;

/// @brief Field sideInSound, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sideInSound;

/// @brief Field sideOutSound, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sideOutSound;

/// @brief Field fallSound, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___fallSound;

/// @brief Field wiggleSound, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ___wiggleSound;

/// @brief Field strainSound, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___strainSound;

/// @brief Field snatchReactionSound, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___snatchReactionSound;

/// @brief Field deathSound, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___deathSound;

/// @brief Field reviveSound, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___reviveSound;

/// @brief Field pickedUpSound, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___pickedUpSound;

/// @brief Field escapeCarrySound, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___escapeCarrySound;

/// @brief Field menuOpenSound, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___menuOpenSound;

/// @brief Field menuCloseSound, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___menuCloseSound;

/// @brief Field textOpenSound, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textOpenSound;

/// @brief Field textCloseSound, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textCloseSound;

/// @brief Field textTypeSound, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textTypeSound;

/// @brief Field textDeleteSound, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textDeleteSound;

/// @brief Field textSendSound, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___textSendSound;

/// @brief Field jumpDudSound, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___jumpDudSound;

/// @brief Field armLockLoop, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___armLockLoop;

/// @brief Field armLockCancel, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___armLockCancel;

/// @brief Field armLockComplete, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___armLockComplete;

/// @brief Field defaultDudSound, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___defaultDudSound;

/// @brief Field fallingSound, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___fallingSound;

/// @brief Field fallingWaterSound, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___fallingWaterSound;

/// @brief Field muteSound, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___muteSound;

/// @brief Field unmuteSound, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___unmuteSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___idleUpSound) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___idleDownSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___sitDownSound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___sitUpSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___crouchUpSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___crouchDownSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___jumpCrouchGrabSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___jumpCrouchReleaseSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___enterSleepSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___exitSleepSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___sleepUpSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___sleepDownSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___stretchInLoop) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___stretchOutLoop) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___stretchReleaseSound) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___grabSound) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___stealSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___stealHeavySound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___throwSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___kickSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___releaseSound) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___releaseWindUpLoop) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___raiseUpSound) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___raiseDownSound) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___forwardInSound) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___forwardOutSound) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___sideInSound) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___sideOutSound) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___fallSound) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___wiggleSound) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___strainSound) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___snatchReactionSound) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___deathSound) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___reviveSound) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___pickedUpSound) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___escapeCarrySound) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___menuOpenSound) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___menuCloseSound) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___textOpenSound) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___textCloseSound) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___textTypeSound) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___textDeleteSound) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___textSendSound) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___jumpDudSound) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___armLockLoop) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___armLockCancel) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___armLockComplete) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___defaultDudSound) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___fallingSound) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___fallingWaterSound) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___muteSound) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAudioReferences, ___unmuteSound) == 0x1b0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerAudioReferences) == 0x1b8, "Size mismatch!");

} // namespace end def GlobalNamespace
