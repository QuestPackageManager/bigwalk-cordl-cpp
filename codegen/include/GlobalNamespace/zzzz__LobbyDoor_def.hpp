#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyDoor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDoor)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
class AnimancerFrameHelper;
}
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct LobbyDoor_ClipDirection;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckEffectAudio;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct LobbyDoor_ClipDirection;
}
namespace GlobalNamespace {
class LobbyDoor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LobbyDoor_ClipDirection);
MARK_REF_T(::GlobalNamespace::LobbyDoor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyDoor_ClipDirection, "", "LobbyDoor/ClipDirection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyDoor*, "", "LobbyDoor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LobbyDoor/ClipDirection
struct CORDL_TYPE LobbyDoor_ClipDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LobbyDoor_ClipDirection_Unwrapped
enum struct __LobbyDoor_ClipDirection_Unwrapped : int32_t {
__E_Backwards = static_cast<int32_t>(0x0),
__E_Fowards = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LobbyDoor_ClipDirection_Unwrapped () const noexcept {
return static_cast<__LobbyDoor_ClipDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDoor_ClipDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LobbyDoor_ClipDirection(int32_t  value__) noexcept;

/// @brief Field Backwards value: I32(0)
static ::GlobalNamespace::LobbyDoor_ClipDirection const Backwards;

/// @brief Field Fowards value: I32(1)
static ::GlobalNamespace::LobbyDoor_ClipDirection const Fowards;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyDoor_ClipDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyDoor_ClipDirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies LobbyDoor::ClipDirection, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyDoor
class CORDL_TYPE LobbyDoor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ClipDirection = ::GlobalNamespace::LobbyDoor_ClipDirection;

/// @brief Field _ascLoop, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascLoop, put=__cordl_internal_set__ascLoop)) ::UnityW<::GlobalNamespace::AudioSourceController>  _ascLoop;

/// @brief Field _ascOpenClose, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascOpenClose, put=__cordl_internal_set__ascOpenClose)) ::UnityW<::GlobalNamespace::AudioSourceController>  _ascOpenClose;

/// @brief Field _ascOpenCloseEnd, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__ascOpenCloseEnd, put=__cordl_internal_set__ascOpenCloseEnd)) ::UnityW<::GlobalNamespace::AudioSourceController>  _ascOpenCloseEnd;

/// @brief Field animancerComponent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field animancerFrameHelper, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerFrameHelper, put=__cordl_internal_set_animancerFrameHelper)) ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  animancerFrameHelper;

/// @brief Field animationSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Field audioTransform, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioTransform, put=__cordl_internal_set_audioTransform)) ::UnityW<::UnityEngine::Transform>  audioTransform;

/// @brief Field closeEndSound, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeEndSound, put=__cordl_internal_set_closeEndSound)) ::UnityW<::GlobalNamespace::AudioAsset>  closeEndSound;

/// @brief Field closeEndSoundOffset, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeEndSoundOffset, put=__cordl_internal_set_closeEndSoundOffset)) float_t  closeEndSoundOffset;

/// @brief Field closeLoopSound, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeLoopSound, put=__cordl_internal_set_closeLoopSound)) ::UnityW<::GlobalNamespace::AudioAsset>  closeLoopSound;

/// @brief Field closeSound, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeSound, put=__cordl_internal_set_closeSound)) ::UnityW<::GlobalNamespace::AudioAsset>  closeSound;

/// @brief Field customDirections, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_customDirections, put=__cordl_internal_set_customDirections)) ::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection>  customDirections;

/// @brief Field hasUniqueClosingSpeed, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasUniqueClosingSpeed, put=__cordl_internal_set_hasUniqueClosingSpeed)) bool  hasUniqueClosingSpeed;

/// @brief Field initialized, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field isFullyOpenSystem, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_isFullyOpenSystem, put=__cordl_internal_set_isFullyOpenSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  isFullyOpenSystem;

/// @brief Field layer, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) int32_t  layer;

/// @brief Field logVerbose, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field loopFadeoutTime, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopFadeoutTime, put=__cordl_internal_set_loopFadeoutTime)) float_t  loopFadeoutTime;

/// @brief Field loopSeek, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_loopSeek, put=__cordl_internal_set_loopSeek)) bool  loopSeek;

/// @brief Field onFullyClose, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFullyClose, put=__cordl_internal_set_onFullyClose)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFullyClose;

/// @brief Field onFullyOpen, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFullyOpen, put=__cordl_internal_set_onFullyOpen)) ::UnityW<::GlobalNamespace::PeckSwitch>  onFullyOpen;

/// @brief Field openEndSound, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_openEndSound, put=__cordl_internal_set_openEndSound)) ::UnityW<::GlobalNamespace::AudioAsset>  openEndSound;

/// @brief Field openEndSoundOffset, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_openEndSoundOffset, put=__cordl_internal_set_openEndSoundOffset)) float_t  openEndSoundOffset;

/// @brief Field openLoopSound, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_openLoopSound, put=__cordl_internal_set_openLoopSound)) ::UnityW<::GlobalNamespace::AudioAsset>  openLoopSound;

/// @brief Field openSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_openSound, put=__cordl_internal_set_openSound)) ::UnityW<::GlobalNamespace::AudioAsset>  openSound;

/// @brief Field openingClip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_openingClip, put=__cordl_internal_set_openingClip)) ::UnityW<::UnityEngine::AnimationClip>  openingClip;

/// @brief Field peckAndDoorStatesAreInverse, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_peckAndDoorStatesAreInverse, put=__cordl_internal_set_peckAndDoorStatesAreInverse)) bool  peckAndDoorStatesAreInverse;

/// @brief Field peckAudio, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckAudio, put=__cordl_internal_set_peckAudio)) ::UnityW<::GlobalNamespace::PeckEffectAudio>  peckAudio;

/// @brief Field peckSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystem, put=__cordl_internal_set_peckSystem)) ::GlobalNamespace::PeckSystemReference  peckSystem;

/// @brief Field randomDelay, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomDelay, put=__cordl_internal_set_randomDelay)) float_t  randomDelay;

/// @brief Field skipReturn, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipReturn, put=__cordl_internal_set_skipReturn)) bool  skipReturn;

/// @brief Field uniqueClosingSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_uniqueClosingSpeed, put=__cordl_internal_set_uniqueClosingSpeed)) float_t  uniqueClosingSpeed;

/// @brief Method Awake, addr 0x1803fff50, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetClipDirection, addr 0x180400070, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::LobbyDoor_ClipDirection GetClipDirection(int32_t  peckState) ;

/// @brief Method Initialize, addr 0x1804000b0, size 0x2b0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::LobbyDoor* New_ctor() ;

/// @brief Method OnFinish, addr 0x180400360, size 0x330, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method PauseState, addr 0x180400690, size 0x160, virtual false, abstract: false, final false
inline void PauseState(bool  useHelper) ;

/// @brief Method Peck, addr 0x1804007f0, size 0x320, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method PlayCloseEndSound, addr 0x180400b10, size 0x2b0, virtual false, abstract: false, final false
inline void PlayCloseEndSound() ;

/// @brief Method PlayCloseSound, addr 0x180400dc0, size 0x420, virtual false, abstract: false, final false
inline void PlayCloseSound() ;

/// @brief Method PlayOpenEndSound, addr 0x1804011e0, size 0x2b0, virtual false, abstract: false, final false
inline void PlayOpenEndSound() ;

/// @brief Method PlayOpenSound, addr 0x180401490, size 0x420, virtual false, abstract: false, final false
inline void PlayOpenSound() ;

/// @brief Method Start, addr 0x1804018b0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SwitchLoopSound, addr 0x1804018c0, size 0x770, virtual false, abstract: false, final false
inline void SwitchLoopSound() ;

/// @brief Method TestPeck0, addr 0x180402030, size 0x60, virtual false, abstract: false, final false
inline void TestPeck0() ;

/// @brief Method TestPeck1, addr 0x180402090, size 0x60, virtual false, abstract: false, final false
inline void TestPeck1() ;

/// @brief Method <PlayCloseEndSound>g___clearRef|45_0, addr 0x1804020f0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayCloseEndSound_g___clearRef_45_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayCloseSound>g___clearRef|43_0, addr 0x180402150, size 0x60, virtual false, abstract: false, final false
static inline void _PlayCloseSound_g___clearRef_43_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayCloseSound>g___clearRef|43_1, addr 0x1804021b0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayCloseSound_g___clearRef_43_1(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayOpenEndSound>g___clearRef|44_0, addr 0x1804020f0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayOpenEndSound_g___clearRef_44_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayOpenSound>g___clearRef|42_0, addr 0x180402150, size 0x60, virtual false, abstract: false, final false
static inline void _PlayOpenSound_g___clearRef_42_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayOpenSound>g___clearRef|42_1, addr 0x1804021b0, size 0x60, virtual false, abstract: false, final false
static inline void _PlayOpenSound_g___clearRef_42_1(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <SwitchLoopSound>g___clearRef|46_0, addr 0x180402150, size 0x60, virtual false, abstract: false, final false
static inline void _SwitchLoopSound_g___clearRef_46_0(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <SwitchLoopSound>g___clearRef|46_1, addr 0x180402150, size 0x60, virtual false, abstract: false, final false
static inline void _SwitchLoopSound_g___clearRef_46_1(::GlobalNamespace::LobbyDoor*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__ascLoop() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__ascLoop() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__ascOpenClose() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__ascOpenClose() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__ascOpenCloseEnd() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__ascOpenCloseEnd() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& __cordl_internal_get_animancerFrameHelper() const;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& __cordl_internal_get_animancerFrameHelper() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_audioTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_audioTransform() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_closeEndSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_closeEndSound() ;

constexpr float_t const& __cordl_internal_get_closeEndSoundOffset() const;

constexpr float_t& __cordl_internal_get_closeEndSoundOffset() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_closeLoopSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_closeLoopSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_closeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_closeSound() ;

constexpr ::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection> const& __cordl_internal_get_customDirections() const;

constexpr ::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection>& __cordl_internal_get_customDirections() ;

constexpr bool const& __cordl_internal_get_hasUniqueClosingSpeed() const;

constexpr bool& __cordl_internal_get_hasUniqueClosingSpeed() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_isFullyOpenSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_isFullyOpenSystem() ;

constexpr int32_t const& __cordl_internal_get_layer() const;

constexpr int32_t& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_loopFadeoutTime() const;

constexpr float_t& __cordl_internal_get_loopFadeoutTime() ;

constexpr bool const& __cordl_internal_get_loopSeek() const;

constexpr bool& __cordl_internal_get_loopSeek() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFullyClose() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFullyClose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onFullyOpen() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onFullyOpen() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_openEndSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_openEndSound() ;

constexpr float_t const& __cordl_internal_get_openEndSoundOffset() const;

constexpr float_t& __cordl_internal_get_openEndSoundOffset() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_openLoopSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_openLoopSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_openSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_openSound() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_openingClip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_openingClip() ;

constexpr bool const& __cordl_internal_get_peckAndDoorStatesAreInverse() const;

constexpr bool& __cordl_internal_get_peckAndDoorStatesAreInverse() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio> const& __cordl_internal_get_peckAudio() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio>& __cordl_internal_get_peckAudio() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystem() ;

constexpr float_t const& __cordl_internal_get_randomDelay() const;

constexpr float_t& __cordl_internal_get_randomDelay() ;

constexpr bool const& __cordl_internal_get_skipReturn() const;

constexpr bool& __cordl_internal_get_skipReturn() ;

constexpr float_t const& __cordl_internal_get_uniqueClosingSpeed() const;

constexpr float_t& __cordl_internal_get_uniqueClosingSpeed() ;

constexpr void __cordl_internal_set__ascLoop(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__ascOpenClose(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__ascOpenCloseEnd(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_audioTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_closeEndSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_closeEndSoundOffset(float_t  value) ;

constexpr void __cordl_internal_set_closeLoopSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_closeSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_customDirections(::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection>  value) ;

constexpr void __cordl_internal_set_hasUniqueClosingSpeed(bool  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_isFullyOpenSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_layer(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_loopFadeoutTime(float_t  value) ;

constexpr void __cordl_internal_set_loopSeek(bool  value) ;

constexpr void __cordl_internal_set_onFullyClose(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onFullyOpen(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_openEndSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_openEndSoundOffset(float_t  value) ;

constexpr void __cordl_internal_set_openLoopSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_openSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_openingClip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_peckAndDoorStatesAreInverse(bool  value) ;

constexpr void __cordl_internal_set_peckAudio(::UnityW<::GlobalNamespace::PeckEffectAudio>  value) ;

constexpr void __cordl_internal_set_peckSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_randomDelay(float_t  value) ;

constexpr void __cordl_internal_set_skipReturn(bool  value) ;

constexpr void __cordl_internal_set_uniqueClosingSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x180402210, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyDoor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyDoor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyDoor(LobbyDoor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyDoor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyDoor(LobbyDoor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5076};

/// @brief Field peckSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystem;

/// @brief Field onFullyOpen, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFullyOpen;

/// @brief Field onFullyClose, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onFullyClose;

/// @brief Field isFullyOpenSystem, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___isFullyOpenSystem;

/// @brief Field peckAndDoorStatesAreInverse, offset: 0x60, size: 0x1, def value: None
 bool  ___peckAndDoorStatesAreInverse;

/// @brief Field customDirections, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LobbyDoor_ClipDirection>  ___customDirections;

/// @brief Field animancerComponent, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field animancerFrameHelper, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  ___animancerFrameHelper;

/// @brief Field openingClip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___openingClip;

/// @brief Field skipReturn, offset: 0x88, size: 0x1, def value: None
 bool  ___skipReturn;

/// @brief Field layer, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___layer;

/// @brief Field animationSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field hasUniqueClosingSpeed, offset: 0x94, size: 0x1, def value: None
 bool  ___hasUniqueClosingSpeed;

/// @brief Field uniqueClosingSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___uniqueClosingSpeed;

/// @brief Field logVerbose, offset: 0x9c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field peckAudio, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectAudio>  ___peckAudio;

/// @brief Field openSound, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___openSound;

/// @brief Field closeSound, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___closeSound;

/// @brief Field openEndSound, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___openEndSound;

/// @brief Field closeEndSound, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___closeEndSound;

/// @brief Field openLoopSound, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___openLoopSound;

/// @brief Field closeLoopSound, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___closeLoopSound;

/// @brief Field openEndSoundOffset, offset: 0xd8, size: 0x4, def value: None
 float_t  ___openEndSoundOffset;

/// @brief Field closeEndSoundOffset, offset: 0xdc, size: 0x4, def value: None
 float_t  ___closeEndSoundOffset;

/// @brief Field loopFadeoutTime, offset: 0xe0, size: 0x4, def value: None
 float_t  ___loopFadeoutTime;

/// @brief Field loopSeek, offset: 0xe4, size: 0x1, def value: None
 bool  ___loopSeek;

/// @brief Field audioTransform, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___audioTransform;

/// @brief Field randomDelay, offset: 0xf0, size: 0x4, def value: None
 float_t  ___randomDelay;

/// @brief Field _ascOpenClose, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____ascOpenClose;

/// @brief Field _ascOpenCloseEnd, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____ascOpenCloseEnd;

/// @brief Field _ascLoop, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____ascLoop;

/// @brief Field initialized, offset: 0x110, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___peckSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___onFullyOpen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___onFullyClose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___isFullyOpenSystem) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___peckAndDoorStatesAreInverse) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___customDirections) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___animancerComponent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___animancerFrameHelper) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___openingClip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___skipReturn) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___layer) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___animationSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___hasUniqueClosingSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___uniqueClosingSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___logVerbose) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___peckAudio) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___openSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___closeSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___openEndSound) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___closeEndSound) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___openLoopSound) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___closeLoopSound) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___openEndSoundOffset) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___closeEndSoundOffset) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___loopFadeoutTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___loopSeek) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___audioTransform) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___randomDelay) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ____ascOpenClose) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ____ascOpenCloseEnd) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ____ascLoop) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyDoor, ___initialized) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyDoor) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
