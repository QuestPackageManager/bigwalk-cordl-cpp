#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGestures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerActionState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerGestures)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class FootstepAudioReferences;
}
namespace GlobalNamespace {
struct PlayerActionState;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerGestures_GestureArmParams;
}
namespace GlobalNamespace {
struct PlayerGestures_Handedness;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerGestures_Handedness;
}
namespace GlobalNamespace {
class PlayerGestures;
}
namespace GlobalNamespace {
struct PlayerGestures_GestureArmParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerGestures_Handedness);
MARK_REF_T(::GlobalNamespace::PlayerGestures*);
MARK_VAL_T(::GlobalNamespace::PlayerGestures_GestureArmParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGestures_Handedness, "", "PlayerGestures/Handedness");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGestures*, "", "PlayerGestures");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGestures_GestureArmParams, "", "PlayerGestures/GestureArmParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerGestures/Handedness
struct CORDL_TYPE PlayerGestures_Handedness {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerGestures_Handedness_Unwrapped
enum struct __PlayerGestures_Handedness_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerGestures_Handedness_Unwrapped () const noexcept {
return static_cast<__PlayerGestures_Handedness_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerGestures_Handedness() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerGestures_Handedness(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::PlayerGestures_Handedness const Left;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::PlayerGestures_Handedness const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGestures_Handedness, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGestures_Handedness) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerGestures/GestureArmParams
struct CORDL_TYPE PlayerGestures_GestureArmParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGestures_GestureArmParams() ;

// Ctor Parameters [CppParam { name: "layerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "waveParam", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pointParam", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "compressnessParam", ty: "::StringW", modifiers: "", def_value: None }]
constexpr PlayerGestures_GestureArmParams(int32_t  layerIndex, ::StringW  waveParam, ::StringW  pointParam, ::StringW  compressnessParam) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field layerIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  layerIndex;

/// @brief Field waveParam, offset: 0x8, size: 0x8, def value: None
 ::StringW  waveParam;

/// @brief Field pointParam, offset: 0x10, size: 0x8, def value: None
 ::StringW  pointParam;

/// @brief Field compressnessParam, offset: 0x18, size: 0x8, def value: None
 ::StringW  compressnessParam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGestures_GestureArmParams, layerIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures_GestureArmParams, waveParam) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures_GestureArmParams, pointParam) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures_GestureArmParams, compressnessParam) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGestures_GestureArmParams) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerActionState, PlayerGestures::GestureArmParams, System.Nullable`1<T>, System.Object, UnityEngine.LayerMask, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerGestures
class CORDL_TYPE PlayerGestures : public ::System::Object {
public:
// Declarations
using GestureArmParams = ::GlobalNamespace::PlayerGestures_GestureArmParams;

using Handedness = ::GlobalNamespace::PlayerGestures_Handedness;

 __declspec(property(get=get_LeftHand)) ::UnityW<::UnityEngine::Transform>  LeftHand;

 __declspec(property(get=get_LeftHandVelocity)) float_t  LeftHandVelocity;

/// @brief Field OnArmDown, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnArmDown, put=__cordl_internal_set_OnArmDown)) ::System::Action*  OnArmDown;

/// @brief Field OnArmUp, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnArmUp, put=__cordl_internal_set_OnArmUp)) ::System::Action*  OnArmUp;

 __declspec(property(get=get_RightHand)) ::UnityW<::UnityEngine::Transform>  RightHand;

 __declspec(property(get=get_RightHandVelocity)) float_t  RightHandVelocity;

/// @brief Field _currentSlideSoundL, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSlideSoundL, put=__cordl_internal_set__currentSlideSoundL)) ::UnityW<::GlobalNamespace::SoundCue>  _currentSlideSoundL;

/// @brief Field _currentSlideSoundR, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentSlideSoundR, put=__cordl_internal_set__currentSlideSoundR)) ::UnityW<::GlobalNamespace::SoundCue>  _currentSlideSoundR;

/// @brief Field _footstepSounds, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__footstepSounds, put=__cordl_internal_set__footstepSounds)) ::UnityW<::GlobalNamespace::FootstepAudioReferences>  _footstepSounds;

/// @brief Field _leftArmWasPointing, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__leftArmWasPointing, put=__cordl_internal_set__leftArmWasPointing)) bool  _leftArmWasPointing;

/// @brief Field _leftHandPosition, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get__leftHandPosition, put=__cordl_internal_set__leftHandPosition)) ::System::Nullable_1<::UnityEngine::Vector3>  _leftHandPosition;

/// @brief Field _leftHandVelocity, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftHandVelocity, put=__cordl_internal_set__leftHandVelocity)) float_t  _leftHandVelocity;

/// @brief Field _leftHandVelocityAudio, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftHandVelocityAudio, put=__cordl_internal_set__leftHandVelocityAudio)) float_t  _leftHandVelocityAudio;

/// @brief Field _leftWasHit, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get__leftWasHit, put=__cordl_internal_set__leftWasHit)) bool  _leftWasHit;

/// @brief Field _locked, offset 0x10b, size 0x1 
 __declspec(property(get=__cordl_internal_get__locked, put=__cordl_internal_set__locked)) bool  _locked;

/// @brief Field _locking, offset 0x10a, size 0x1 
 __declspec(property(get=__cordl_internal_get__locking, put=__cordl_internal_set__locking)) bool  _locking;

/// @brief Field _lockingAudioEvent, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockingAudioEvent, put=__cordl_internal_set__lockingAudioEvent)) ::GlobalNamespace::AudioEvent*  _lockingAudioEvent;

/// @brief Field _rightArmWasPointing, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightArmWasPointing, put=__cordl_internal_set__rightArmWasPointing)) bool  _rightArmWasPointing;

/// @brief Field _rightHandPosition, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get__rightHandPosition, put=__cordl_internal_set__rightHandPosition)) ::System::Nullable_1<::UnityEngine::Vector3>  _rightHandPosition;

/// @brief Field _rightHandVelocity, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightHandVelocity, put=__cordl_internal_set__rightHandVelocity)) float_t  _rightHandVelocity;

/// @brief Field _rightHandVelocityAudio, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightHandVelocityAudio, put=__cordl_internal_set__rightHandVelocityAudio)) float_t  _rightHandVelocityAudio;

/// @brief Field _rightWasHit, offset 0x109, size 0x1 
 __declspec(property(get=__cordl_internal_get__rightWasHit, put=__cordl_internal_set__rightWasHit)) bool  _rightWasHit;

/// @brief Field _slideASCL, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__slideASCL, put=__cordl_internal_set__slideASCL)) ::UnityW<::GlobalNamespace::AudioSourceController>  _slideASCL;

/// @brief Field _slideASCR, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__slideASCR, put=__cordl_internal_set__slideASCR)) ::UnityW<::GlobalNamespace::AudioSourceController>  _slideASCR;

/// @brief Field drawDebugRays, offset 0x5b, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawDebugRays, put=__cordl_internal_set_drawDebugRays)) bool  drawDebugRays;

/// @brief Field hit, offset 0x158, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

/// @brief Field hits, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityEngine::RaycastHit>  hits;

/// @brief Field ignoreReachCastingLeft, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreReachCastingLeft, put=__cordl_internal_set_ignoreReachCastingLeft)) bool  ignoreReachCastingLeft;

/// @brief Field ignoreReachCastingRight, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreReachCastingRight, put=__cordl_internal_set_ignoreReachCastingRight)) bool  ignoreReachCastingRight;

 __declspec(property(get=get_isDoingEchoArms)) bool  isDoingEchoArms;

 __declspec(property(get=get_isHoldingRaised)) bool  isHoldingRaised;

/// @brief Field leftArmParams, offset 0x68, size 0x20 
 __declspec(property(get=__cordl_internal_get_leftArmParams, put=__cordl_internal_set_leftArmParams)) ::GlobalNamespace::PlayerGestures_GestureArmParams  leftArmParams;

/// @brief Field leftArmPointing, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftArmPointing, put=__cordl_internal_set_leftArmPointing)) bool  leftArmPointing;

/// @brief Field leftArmWavingState, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftArmWavingState, put=__cordl_internal_set_leftArmWavingState)) ::GlobalNamespace::PlayerActionState  leftArmWavingState;

/// @brief Field logVerbose, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field raiseCastDistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_raiseCastDistance, put=__cordl_internal_set_raiseCastDistance)) float_t  raiseCastDistance;

/// @brief Field raiseMask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_raiseMask, put=__cordl_internal_set_raiseMask)) ::UnityEngine::LayerMask  raiseMask;

/// @brief Field reachAirplaneMax, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachAirplaneMax, put=__cordl_internal_set_reachAirplaneMax)) float_t  reachAirplaneMax;

/// @brief Field reachAirplaneMin, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachAirplaneMin, put=__cordl_internal_set_reachAirplaneMin)) float_t  reachAirplaneMin;

/// @brief Field reachMask, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachMask, put=__cordl_internal_set_reachMask)) ::UnityEngine::LayerMask  reachMask;

/// @brief Field reachOriginAirplaneLeft, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reachOriginAirplaneLeft, put=__cordl_internal_set_reachOriginAirplaneLeft)) ::UnityW<::UnityEngine::Transform>  reachOriginAirplaneLeft;

/// @brief Field reachOriginAirplaneRight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reachOriginAirplaneRight, put=__cordl_internal_set_reachOriginAirplaneRight)) ::UnityW<::UnityEngine::Transform>  reachOriginAirplaneRight;

/// @brief Field reachOriginPointLeft, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reachOriginPointLeft, put=__cordl_internal_set_reachOriginPointLeft)) ::UnityW<::UnityEngine::Transform>  reachOriginPointLeft;

/// @brief Field reachOriginPointRight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reachOriginPointRight, put=__cordl_internal_set_reachOriginPointRight)) ::UnityW<::UnityEngine::Transform>  reachOriginPointRight;

/// @brief Field reachPointMaxDown, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachPointMaxDown, put=__cordl_internal_set_reachPointMaxDown)) float_t  reachPointMaxDown;

/// @brief Field reachPointMaxUp, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachPointMaxUp, put=__cordl_internal_set_reachPointMaxUp)) float_t  reachPointMaxUp;

/// @brief Field reachPointMin, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachPointMin, put=__cordl_internal_set_reachPointMin)) float_t  reachPointMin;

/// @brief Field rightArmParams, offset 0x88, size 0x20 
 __declspec(property(get=__cordl_internal_get_rightArmParams, put=__cordl_internal_set_rightArmParams)) ::GlobalNamespace::PlayerGestures_GestureArmParams  rightArmParams;

/// @brief Field rightArmPointing, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightArmPointing, put=__cordl_internal_set_rightArmPointing)) bool  rightArmPointing;

/// @brief Field rightArmWavingState, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightArmWavingState, put=__cordl_internal_set_rightArmWavingState)) ::GlobalNamespace::PlayerActionState  rightArmWavingState;

/// @brief Field sharedArmWavingState, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_sharedArmWavingState, put=__cordl_internal_set_sharedArmWavingState)) ::GlobalNamespace::PlayerActionState  sharedArmWavingState;

/// @brief Field wasHoldingProp, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHoldingProp, put=__cordl_internal_set_wasHoldingProp)) bool  wasHoldingProp;

/// @brief Field waveSmoothtime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_waveSmoothtime, put=__cordl_internal_set_waveSmoothtime)) float_t  waveSmoothtime;

/// @brief Method GetMovingVelocityL, addr 0x180468f70, size 0x10, virtual false, abstract: false, final false
inline float_t GetMovingVelocityL() ;

/// @brief Method GetMovingVelocityR, addr 0x180468f80, size 0x10, virtual false, abstract: false, final false
inline float_t GetMovingVelocityR() ;

/// @brief Method GetReachMax, addr 0x180468f90, size 0x5a0, virtual false, abstract: false, final false
inline float_t GetReachMax(::UnityEngine::Transform*  origin, float_t  min, float_t  max, bool  drawDebugRays, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

/// @brief Method Initialize, addr 0x180469530, size 0x250, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerGestures* New_ctor() ;

/// @brief Method NoRoomForPropAboveHead, addr 0x180469780, size 0x1e0, virtual false, abstract: false, final false
inline bool NoRoomForPropAboveHead() ;

/// @brief Method OnDisable, addr 0x180469960, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method RefreshHud, addr 0x1804699d0, size 0x460, virtual false, abstract: false, final false
inline void RefreshHud() ;

/// @brief Method SlideLGetX, addr 0x180469e30, size 0x40, virtual false, abstract: false, final false
inline bool SlideLGetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method SlideRGetX, addr 0x180469e70, size 0x40, virtual false, abstract: false, final false
inline bool SlideRGetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method Update, addr 0x18046bb70, size 0x7b0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAudio, addr 0x180469f10, size 0xf00, virtual false, abstract: false, final false
inline void UpdateAudio() ;

/// @brief Method UpdateHandVelocity, addr 0x18046aff0, size 0x210, virtual false, abstract: false, final false
inline void UpdateHandVelocity(bool  armPointing, ::GlobalNamespace::PlayerActionState  armWavingState, ::UnityEngine::Vector3  newHandPosition, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  handPos, ::by_ref<float_t>  velocity) ;

/// @brief Method UpdateHandVelocityL, addr 0x18046ae10, size 0xf0, virtual false, abstract: false, final false
inline void UpdateHandVelocityL() ;

/// @brief Method UpdateHandVelocityR, addr 0x18046af00, size 0xf0, virtual false, abstract: false, final false
inline void UpdateHandVelocityR() ;

/// @brief Method UpdateSingleArm, addr 0x18046b200, size 0x270, virtual false, abstract: false, final false
inline void UpdateSingleArm(::GlobalNamespace::PlayerGestures_GestureArmParams  gestureArmParams, bool  isWaving, bool  isPointing, ::UnityEngine::Transform*  pointOrigin, ::UnityEngine::Transform*  airplaneOrigin) ;

/// @brief Method UpdateSlidingSound, addr 0x18046b470, size 0x700, virtual false, abstract: false, final false
inline void UpdateSlidingSound(::UnityEngine::RaycastHit  hitInfo, ::GlobalNamespace::PlayerActionState  armWavingState, bool  armPointing, ::UnityEngine::Transform*  handTForm, ::GlobalNamespace::PlayerGestures_Handedness  handedness, ::by_ref<float_t>  velocity, ::by_ref<bool>  wasHit, ::by_ref<float_t>  velocityAudio, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  handPos, ::by_ref<::GlobalNamespace::SoundCue*>  currentSlideSound, ::by_ref<::GlobalNamespace::AudioSourceController*>  slideASC) ;

/// @brief Method <UpdateSlidingSound>g___clearRef|69_0, addr 0x180469eb0, size 0x60, virtual false, abstract: false, final false
static inline void _UpdateSlidingSound_g___clearRef_69_0(::GlobalNamespace::PlayerGestures*  g, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <UpdateSlidingSound>g___clearRef|69_1, addr 0x1804021b0, size 0x60, virtual false, abstract: false, final false
static inline void _UpdateSlidingSound_g___clearRef_69_1(::GlobalNamespace::PlayerGestures*  g, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::System::Action* const& __cordl_internal_get_OnArmDown() const;

constexpr ::System::Action*& __cordl_internal_get_OnArmDown() ;

constexpr ::System::Action* const& __cordl_internal_get_OnArmUp() const;

constexpr ::System::Action*& __cordl_internal_get_OnArmUp() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get__currentSlideSoundL() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get__currentSlideSoundL() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get__currentSlideSoundR() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get__currentSlideSoundR() ;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& __cordl_internal_get__footstepSounds() const;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& __cordl_internal_get__footstepSounds() ;

constexpr bool const& __cordl_internal_get__leftArmWasPointing() const;

constexpr bool& __cordl_internal_get__leftArmWasPointing() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__leftHandPosition() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__leftHandPosition() ;

constexpr float_t const& __cordl_internal_get__leftHandVelocity() const;

constexpr float_t& __cordl_internal_get__leftHandVelocity() ;

constexpr float_t const& __cordl_internal_get__leftHandVelocityAudio() const;

constexpr float_t& __cordl_internal_get__leftHandVelocityAudio() ;

constexpr bool const& __cordl_internal_get__leftWasHit() const;

constexpr bool& __cordl_internal_get__leftWasHit() ;

constexpr bool const& __cordl_internal_get__locked() const;

constexpr bool& __cordl_internal_get__locked() ;

constexpr bool const& __cordl_internal_get__locking() const;

constexpr bool& __cordl_internal_get__locking() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__lockingAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__lockingAudioEvent() ;

constexpr bool const& __cordl_internal_get__rightArmWasPointing() const;

constexpr bool& __cordl_internal_get__rightArmWasPointing() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__rightHandPosition() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__rightHandPosition() ;

constexpr float_t const& __cordl_internal_get__rightHandVelocity() const;

constexpr float_t& __cordl_internal_get__rightHandVelocity() ;

constexpr float_t const& __cordl_internal_get__rightHandVelocityAudio() const;

constexpr float_t& __cordl_internal_get__rightHandVelocityAudio() ;

constexpr bool const& __cordl_internal_get__rightWasHit() const;

constexpr bool& __cordl_internal_get__rightWasHit() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__slideASCL() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__slideASCL() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__slideASCR() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__slideASCR() ;

constexpr bool const& __cordl_internal_get_drawDebugRays() const;

constexpr bool& __cordl_internal_get_drawDebugRays() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hits() ;

constexpr bool const& __cordl_internal_get_ignoreReachCastingLeft() const;

constexpr bool& __cordl_internal_get_ignoreReachCastingLeft() ;

constexpr bool const& __cordl_internal_get_ignoreReachCastingRight() const;

constexpr bool& __cordl_internal_get_ignoreReachCastingRight() ;

constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams const& __cordl_internal_get_leftArmParams() const;

constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams& __cordl_internal_get_leftArmParams() ;

constexpr bool const& __cordl_internal_get_leftArmPointing() const;

constexpr bool& __cordl_internal_get_leftArmPointing() ;

constexpr ::GlobalNamespace::PlayerActionState const& __cordl_internal_get_leftArmWavingState() const;

constexpr ::GlobalNamespace::PlayerActionState& __cordl_internal_get_leftArmWavingState() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_raiseCastDistance() const;

constexpr float_t& __cordl_internal_get_raiseCastDistance() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_raiseMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_raiseMask() ;

constexpr float_t const& __cordl_internal_get_reachAirplaneMax() const;

constexpr float_t& __cordl_internal_get_reachAirplaneMax() ;

constexpr float_t const& __cordl_internal_get_reachAirplaneMin() const;

constexpr float_t& __cordl_internal_get_reachAirplaneMin() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_reachMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_reachMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reachOriginAirplaneLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reachOriginAirplaneLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reachOriginAirplaneRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reachOriginAirplaneRight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reachOriginPointLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reachOriginPointLeft() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reachOriginPointRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reachOriginPointRight() ;

constexpr float_t const& __cordl_internal_get_reachPointMaxDown() const;

constexpr float_t& __cordl_internal_get_reachPointMaxDown() ;

constexpr float_t const& __cordl_internal_get_reachPointMaxUp() const;

constexpr float_t& __cordl_internal_get_reachPointMaxUp() ;

constexpr float_t const& __cordl_internal_get_reachPointMin() const;

constexpr float_t& __cordl_internal_get_reachPointMin() ;

constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams const& __cordl_internal_get_rightArmParams() const;

constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams& __cordl_internal_get_rightArmParams() ;

constexpr bool const& __cordl_internal_get_rightArmPointing() const;

constexpr bool& __cordl_internal_get_rightArmPointing() ;

constexpr ::GlobalNamespace::PlayerActionState const& __cordl_internal_get_rightArmWavingState() const;

constexpr ::GlobalNamespace::PlayerActionState& __cordl_internal_get_rightArmWavingState() ;

constexpr ::GlobalNamespace::PlayerActionState const& __cordl_internal_get_sharedArmWavingState() const;

constexpr ::GlobalNamespace::PlayerActionState& __cordl_internal_get_sharedArmWavingState() ;

constexpr bool const& __cordl_internal_get_wasHoldingProp() const;

constexpr bool& __cordl_internal_get_wasHoldingProp() ;

constexpr float_t const& __cordl_internal_get_waveSmoothtime() const;

constexpr float_t& __cordl_internal_get_waveSmoothtime() ;

constexpr void __cordl_internal_set_OnArmDown(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnArmUp(::System::Action*  value) ;

constexpr void __cordl_internal_set__currentSlideSoundL(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set__currentSlideSoundR(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set__footstepSounds(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value) ;

constexpr void __cordl_internal_set__leftArmWasPointing(bool  value) ;

constexpr void __cordl_internal_set__leftHandPosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__leftHandVelocity(float_t  value) ;

constexpr void __cordl_internal_set__leftHandVelocityAudio(float_t  value) ;

constexpr void __cordl_internal_set__leftWasHit(bool  value) ;

constexpr void __cordl_internal_set__locked(bool  value) ;

constexpr void __cordl_internal_set__locking(bool  value) ;

constexpr void __cordl_internal_set__lockingAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__rightArmWasPointing(bool  value) ;

constexpr void __cordl_internal_set__rightHandPosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__rightHandVelocity(float_t  value) ;

constexpr void __cordl_internal_set__rightHandVelocityAudio(float_t  value) ;

constexpr void __cordl_internal_set__rightWasHit(bool  value) ;

constexpr void __cordl_internal_set__slideASCL(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__slideASCR(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set_drawDebugRays(bool  value) ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_ignoreReachCastingLeft(bool  value) ;

constexpr void __cordl_internal_set_ignoreReachCastingRight(bool  value) ;

constexpr void __cordl_internal_set_leftArmParams(::GlobalNamespace::PlayerGestures_GestureArmParams  value) ;

constexpr void __cordl_internal_set_leftArmPointing(bool  value) ;

constexpr void __cordl_internal_set_leftArmWavingState(::GlobalNamespace::PlayerActionState  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_raiseCastDistance(float_t  value) ;

constexpr void __cordl_internal_set_raiseMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_reachAirplaneMax(float_t  value) ;

constexpr void __cordl_internal_set_reachAirplaneMin(float_t  value) ;

constexpr void __cordl_internal_set_reachMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_reachOriginAirplaneLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reachOriginAirplaneRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reachOriginPointLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reachOriginPointRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reachPointMaxDown(float_t  value) ;

constexpr void __cordl_internal_set_reachPointMaxUp(float_t  value) ;

constexpr void __cordl_internal_set_reachPointMin(float_t  value) ;

constexpr void __cordl_internal_set_rightArmParams(::GlobalNamespace::PlayerGestures_GestureArmParams  value) ;

constexpr void __cordl_internal_set_rightArmPointing(bool  value) ;

constexpr void __cordl_internal_set_rightArmWavingState(::GlobalNamespace::PlayerActionState  value) ;

constexpr void __cordl_internal_set_sharedArmWavingState(::GlobalNamespace::PlayerActionState  value) ;

constexpr void __cordl_internal_set_wasHoldingProp(bool  value) ;

constexpr void __cordl_internal_set_waveSmoothtime(float_t  value) ;

/// @brief Method .ctor, addr 0x18046c320, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnArmDown, addr 0x18046c340, size 0x90, virtual false, abstract: false, final false
inline void add_OnArmDown(::System::Action*  value) ;

/// @brief Method add_OnArmUp, addr 0x18046c3d0, size 0x90, virtual false, abstract: false, final false
inline void add_OnArmUp(::System::Action*  value) ;

/// @brief Method get_LeftHand, addr 0x18046c470, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_LeftHand() ;

/// @brief Method get_LeftHandVelocity, addr 0x18046c460, size 0x10, virtual false, abstract: false, final false
inline float_t get_LeftHandVelocity() ;

/// @brief Method get_RightHand, addr 0x18046c4f0, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_RightHand() ;

/// @brief Method get_RightHandVelocity, addr 0x18046c4e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RightHandVelocity() ;

/// @brief Method get_isDoingEchoArms, addr 0x18046c560, size 0x30, virtual false, abstract: false, final false
inline bool get_isDoingEchoArms() ;

/// @brief Method get_isHoldingRaised, addr 0x18046c590, size 0x20, virtual false, abstract: false, final false
inline bool get_isHoldingRaised() ;

/// @brief Method remove_OnArmDown, addr 0x18046c5b0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnArmDown(::System::Action*  value) ;

/// @brief Method remove_OnArmUp, addr 0x18046c640, size 0x90, virtual false, abstract: false, final false
inline void remove_OnArmUp(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGestures() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGestures", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGestures(PlayerGestures && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGestures", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGestures(PlayerGestures const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5456};

/// @brief Field waveSmoothtime, offset: 0x10, size: 0x4, def value: None
 float_t  ___waveSmoothtime;

/// @brief Field reachOriginPointLeft, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reachOriginPointLeft;

/// @brief Field reachOriginPointRight, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reachOriginPointRight;

/// @brief Field reachOriginAirplaneLeft, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reachOriginAirplaneLeft;

/// @brief Field reachOriginAirplaneRight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reachOriginAirplaneRight;

/// @brief Field reachPointMaxUp, offset: 0x38, size: 0x4, def value: None
 float_t  ___reachPointMaxUp;

/// @brief Field reachPointMaxDown, offset: 0x3c, size: 0x4, def value: None
 float_t  ___reachPointMaxDown;

/// @brief Field reachPointMin, offset: 0x40, size: 0x4, def value: None
 float_t  ___reachPointMin;

/// @brief Field reachAirplaneMax, offset: 0x44, size: 0x4, def value: None
 float_t  ___reachAirplaneMax;

/// @brief Field reachAirplaneMin, offset: 0x48, size: 0x4, def value: None
 float_t  ___reachAirplaneMin;

/// @brief Field reachMask, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___reachMask;

/// @brief Field raiseMask, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___raiseMask;

/// @brief Field raiseCastDistance, offset: 0x54, size: 0x4, def value: None
 float_t  ___raiseCastDistance;

/// @brief Field logVerbose, offset: 0x58, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field ignoreReachCastingLeft, offset: 0x59, size: 0x1, def value: None
 bool  ___ignoreReachCastingLeft;

/// @brief Field ignoreReachCastingRight, offset: 0x5a, size: 0x1, def value: None
 bool  ___ignoreReachCastingRight;

/// @brief Field drawDebugRays, offset: 0x5b, size: 0x1, def value: None
 bool  ___drawDebugRays;

/// @brief Field _leftArmWasPointing, offset: 0x5c, size: 0x1, def value: None
 bool  ____leftArmWasPointing;

/// @brief Field _rightArmWasPointing, offset: 0x5d, size: 0x1, def value: None
 bool  ____rightArmWasPointing;

/// @brief Field playerCharacter, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field leftArmParams, offset: 0x68, size: 0x20, def value: None
 ::GlobalNamespace::PlayerGestures_GestureArmParams  ___leftArmParams;

/// @brief Field rightArmParams, offset: 0x88, size: 0x20, def value: None
 ::GlobalNamespace::PlayerGestures_GestureArmParams  ___rightArmParams;

/// @brief Field leftArmPointing, offset: 0xa8, size: 0x1, def value: None
 bool  ___leftArmPointing;

/// @brief Field rightArmPointing, offset: 0xa9, size: 0x1, def value: None
 bool  ___rightArmPointing;

/// @brief Field leftArmWavingState, offset: 0xac, size: 0xc, def value: None
 ::GlobalNamespace::PlayerActionState  ___leftArmWavingState;

/// @brief Field rightArmWavingState, offset: 0xb8, size: 0xc, def value: None
 ::GlobalNamespace::PlayerActionState  ___rightArmWavingState;

/// @brief Field sharedArmWavingState, offset: 0xc4, size: 0xc, def value: None
 ::GlobalNamespace::PlayerActionState  ___sharedArmWavingState;

/// @brief Field wasHoldingProp, offset: 0xd0, size: 0x1, def value: None
 bool  ___wasHoldingProp;

/// @brief Field _footstepSounds, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FootstepAudioReferences>  ____footstepSounds;

/// @brief Field _currentSlideSoundL, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ____currentSlideSoundL;

/// @brief Field _currentSlideSoundR, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ____currentSlideSoundR;

/// @brief Field _slideASCL, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____slideASCL;

/// @brief Field _slideASCR, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____slideASCR;

/// @brief Field _leftHandVelocityAudio, offset: 0x100, size: 0x4, def value: None
 float_t  ____leftHandVelocityAudio;

/// @brief Field _rightHandVelocityAudio, offset: 0x104, size: 0x4, def value: None
 float_t  ____rightHandVelocityAudio;

/// @brief Field _leftWasHit, offset: 0x108, size: 0x1, def value: None
 bool  ____leftWasHit;

/// @brief Field _rightWasHit, offset: 0x109, size: 0x1, def value: None
 bool  ____rightWasHit;

/// @brief Field _locking, offset: 0x10a, size: 0x1, def value: None
 bool  ____locking;

/// @brief Field _locked, offset: 0x10b, size: 0x1, def value: None
 bool  ____locked;

/// @brief Field _lockingAudioEvent, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____lockingAudioEvent;

/// @brief Field _leftHandPosition, offset: 0x118, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____leftHandPosition;

/// @brief Field _rightHandPosition, offset: 0x128, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____rightHandPosition;

/// @brief Field _leftHandVelocity, offset: 0x138, size: 0x4, def value: None
 float_t  ____leftHandVelocity;

/// @brief Field _rightHandVelocity, offset: 0x13c, size: 0x4, def value: None
 float_t  ____rightHandVelocity;

/// @brief Field OnArmDown, offset: 0x140, size: 0x8, def value: None
 ::System::Action*  ___OnArmDown;

/// @brief Field OnArmUp, offset: 0x148, size: 0x8, def value: None
 ::System::Action*  ___OnArmUp;

/// @brief Field hits, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hits;

/// @brief Field hit, offset: 0x158, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___waveSmoothtime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachOriginPointLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachOriginPointRight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachOriginAirplaneLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachOriginAirplaneRight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachPointMaxUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachPointMaxDown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachPointMin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachAirplaneMax) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachAirplaneMin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___reachMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___raiseMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___raiseCastDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___logVerbose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___ignoreReachCastingLeft) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___ignoreReachCastingRight) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___drawDebugRays) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____leftArmWasPointing) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____rightArmWasPointing) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___playerCharacter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___leftArmParams) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___rightArmParams) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___leftArmPointing) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___rightArmPointing) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___leftArmWavingState) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___rightArmWavingState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___sharedArmWavingState) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___wasHoldingProp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____footstepSounds) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____currentSlideSoundL) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____currentSlideSoundR) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____slideASCL) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____slideASCR) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____leftHandVelocityAudio) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____rightHandVelocityAudio) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____leftWasHit) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____rightWasHit) == 0x109, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____locking) == 0x10a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____locked) == 0x10b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____lockingAudioEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____leftHandPosition) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____rightHandPosition) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____leftHandVelocity) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ____rightHandVelocity) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___OnArmDown) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___OnArmUp) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___hits) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGestures, ___hit) == 0x158, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGestures) == 0x188, "Size mismatch!");

} // namespace end def GlobalNamespace
