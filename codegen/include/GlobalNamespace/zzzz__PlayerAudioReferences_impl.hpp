#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAudioReferences.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioPicker_def.hpp"
#include "GlobalNamespace/zzzz__AudioRandomContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerAudioReferences._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAudioReferences::*)()>(&::GlobalNamespace::PlayerAudioReferences::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioReferences*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_idleUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleUpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_idleUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleUpSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_idleUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleUpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_idleDownSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleDownSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_idleDownSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleDownSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_idleDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleDownSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sitDownSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitDownSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sitDownSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitDownSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_sitDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sitDownSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sitUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitUpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sitUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitUpSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_sitUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sitUpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_crouchUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchUpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_crouchUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchUpSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_crouchUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchUpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_crouchDownSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchDownSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_crouchDownSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchDownSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_crouchDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchDownSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_jumpCrouchGrabSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCrouchGrabSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_jumpCrouchGrabSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCrouchGrabSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_jumpCrouchGrabSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpCrouchGrabSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_jumpCrouchReleaseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCrouchReleaseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_jumpCrouchReleaseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpCrouchReleaseSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_jumpCrouchReleaseSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpCrouchReleaseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_enterSleepSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterSleepSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_enterSleepSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterSleepSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_enterSleepSound(::UnityW<::GlobalNamespace::AudioPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterSleepSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_exitSleepSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitSleepSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_exitSleepSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitSleepSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_exitSleepSound(::UnityW<::GlobalNamespace::AudioPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitSleepSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sleepUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepUpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sleepUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepUpSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_sleepUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepUpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sleepDownSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepDownSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sleepDownSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepDownSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_sleepDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepDownSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stretchInLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchInLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stretchInLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchInLoop;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_stretchInLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchInLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stretchOutLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchOutLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stretchOutLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchOutLoop;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_stretchOutLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchOutLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stretchReleaseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchReleaseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stretchReleaseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchReleaseSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_stretchReleaseSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchReleaseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_grabSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_grabSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_grabSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stealSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stealSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_stealSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stealSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stealHeavySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealHeavySound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_stealHeavySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stealHeavySound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_stealHeavySound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stealHeavySound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_throwSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_throwSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_throwSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_kickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_kickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_kickSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kickSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_releaseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_releaseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_releaseSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_releaseWindUpLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseWindUpLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_releaseWindUpLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseWindUpLoop;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_releaseWindUpLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseWindUpLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_raiseUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseUpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_raiseUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseUpSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_raiseUpSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raiseUpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_raiseDownSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseDownSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_raiseDownSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseDownSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_raiseDownSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raiseDownSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_forwardInSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardInSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_forwardInSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardInSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_forwardInSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardInSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_forwardOutSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardOutSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_forwardOutSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardOutSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_forwardOutSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardOutSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sideInSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideInSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sideInSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideInSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_sideInSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sideInSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sideOutSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideOutSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_sideOutSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sideOutSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_sideOutSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sideOutSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_fallSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_fallSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_fallSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_wiggleSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wiggleSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_wiggleSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wiggleSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_wiggleSound(::UnityW<::GlobalNamespace::AudioScatterContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wiggleSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_strainSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strainSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_strainSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strainSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_strainSound(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strainSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_snatchReactionSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snatchReactionSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_snatchReactionSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snatchReactionSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_snatchReactionSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snatchReactionSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_deathSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_deathSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_deathSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deathSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_reviveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_reviveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_reviveSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_pickedUpSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickedUpSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_pickedUpSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickedUpSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_pickedUpSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickedUpSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_escapeCarrySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___escapeCarrySound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_escapeCarrySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___escapeCarrySound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_escapeCarrySound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___escapeCarrySound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_menuOpenSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuOpenSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_menuOpenSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuOpenSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_menuOpenSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuOpenSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_menuCloseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuCloseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_menuCloseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuCloseSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_menuCloseSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuCloseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textOpenSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpenSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textOpenSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpenSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_textOpenSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textOpenSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textCloseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textCloseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textCloseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textCloseSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_textCloseSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textCloseSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textTypeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textTypeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textTypeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textTypeSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_textTypeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textTypeSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textDeleteSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textDeleteSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textDeleteSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textDeleteSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_textDeleteSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textDeleteSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textSendSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSendSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_textSendSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSendSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_textSendSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textSendSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_jumpDudSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpDudSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_jumpDudSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpDudSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_jumpDudSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpDudSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_armLockLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armLockLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_armLockLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armLockLoop;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_armLockLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armLockLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_armLockCancel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armLockCancel;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_armLockCancel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armLockCancel;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_armLockCancel(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armLockCancel = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_armLockComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armLockComplete;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_armLockComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armLockComplete;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_armLockComplete(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armLockComplete = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_defaultDudSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDudSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_defaultDudSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDudSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_defaultDudSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultDudSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_fallingSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallingSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_fallingSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallingSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_fallingSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallingSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_fallingWaterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallingWaterSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_fallingWaterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallingWaterSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_fallingWaterSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallingWaterSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_muteSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_muteSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_muteSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_unmuteSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmuteSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerAudioReferences::__cordl_internal_get_unmuteSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmuteSound;
}
constexpr void GlobalNamespace::PlayerAudioReferences::__cordl_internal_set_unmuteSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unmuteSound = value;
}
inline void GlobalNamespace::PlayerAudioReferences::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerAudioReferences*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAudioReferences* GlobalNamespace::PlayerAudioReferences::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAudioReferences*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAudioReferences::PlayerAudioReferences()   {
}
