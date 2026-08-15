#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerArms.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerArms)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class LimbSpline;
}
namespace GlobalNamespace {
struct PlayerArms_InputData;
}
namespace GlobalNamespace {
struct PlayerArms_PositionalData;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerArms;
}
namespace GlobalNamespace {
struct PlayerArms_InputData;
}
namespace GlobalNamespace {
struct PlayerArms_PositionalData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerArms*);
MARK_VAL_T(::GlobalNamespace::PlayerArms_InputData);
MARK_VAL_T(::GlobalNamespace::PlayerArms_PositionalData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerArms*, "", "PlayerArms");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerArms_InputData, "", "PlayerArms/InputData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerArms_PositionalData, "", "PlayerArms/PositionalData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerArms/InputData
struct CORDL_TYPE PlayerArms_InputData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerArms_InputData() ;

// Ctor Parameters [CppParam { name: "raisedness", ty: "float_t", modifiers: "", def_value: None }]
constexpr PlayerArms_InputData(float_t  raisedness) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5438};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field raisedness, offset: 0x0, size: 0x4, def value: None
 float_t  raisedness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerArms_InputData, raisedness) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerArms_InputData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerArms/PositionalData
struct CORDL_TYPE PlayerArms_PositionalData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerArms_PositionalData() ;

// Ctor Parameters [CppParam { name: "pivotPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "leftGripPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rightGripPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr PlayerArms_PositionalData(::UnityEngine::Vector3  pivotPosition, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  leftGripPos, ::UnityEngine::Vector3  rightGripPos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field pivotPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  pivotPosition;

/// @brief Field offset, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  offset;

/// @brief Field rotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field leftGripPos, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  leftGripPos;

/// @brief Field rightGripPos, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  rightGripPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerArms_PositionalData, pivotPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms_PositionalData, offset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms_PositionalData, rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms_PositionalData, leftGripPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms_PositionalData, rightGripPos) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerArms_PositionalData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.LayerMask, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerArms
class CORDL_TYPE PlayerArms : public ::System::Object {
public:
// Declarations
using InputData = ::GlobalNamespace::PlayerArms_InputData;

using PositionalData = ::GlobalNamespace::PlayerArms_PositionalData;

 __declspec(property(get=IAudioRTPCXProvider_get_XProviderIdentifier)) ::StringW  IAudioRTPCXProvider_XProviderIdentifier;

/// @brief Field _lastStretchDistance, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStretchDistance, put=__cordl_internal_set__lastStretchDistance)) float_t  _lastStretchDistance;

/// @brief Field _prevWindup, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevWindup, put=__cordl_internal_set__prevWindup)) float_t  _prevWindup;

/// @brief Field _stretchInAudioEvent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__stretchInAudioEvent, put=__cordl_internal_set__stretchInAudioEvent)) ::GlobalNamespace::AudioEvent*  _stretchInAudioEvent;

/// @brief Field _stretchOutAudioEvent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__stretchOutAudioEvent, put=__cordl_internal_set__stretchOutAudioEvent)) ::GlobalNamespace::AudioEvent*  _stretchOutAudioEvent;

/// @brief Field _stretchSpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__stretchSpeed, put=__cordl_internal_set__stretchSpeed)) float_t  _stretchSpeed;

/// @brief Field _wasHoldingDown, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasHoldingDown, put=__cordl_internal_set__wasHoldingDown)) bool  _wasHoldingDown;

/// @brief Field _windUpAudioEvent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__windUpAudioEvent, put=__cordl_internal_set__windUpAudioEvent)) ::GlobalNamespace::AudioEvent*  _windUpAudioEvent;

/// @brief Field customHandVelLeft, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_customHandVelLeft, put=__cordl_internal_set_customHandVelLeft)) float_t  customHandVelLeft;

/// @brief Field customHandVelRight, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_customHandVelRight, put=__cordl_internal_set_customHandVelRight)) float_t  customHandVelRight;

/// @brief Field customHandnessLeft, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_customHandnessLeft, put=__cordl_internal_set_customHandnessLeft)) float_t  customHandnessLeft;

/// @brief Field customHandnessRight, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_customHandnessRight, put=__cordl_internal_set_customHandnessRight)) float_t  customHandnessRight;

/// @brief Field dragHandSmoothTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_dragHandSmoothTime, put=__cordl_internal_set_dragHandSmoothTime)) float_t  dragHandSmoothTime;

/// @brief Field dragMaxFacingAngle, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dragMaxFacingAngle, put=__cordl_internal_set_dragMaxFacingAngle)) float_t  dragMaxFacingAngle;

/// @brief Field holdRaisedGuide, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdRaisedGuide, put=__cordl_internal_set_holdRaisedGuide)) ::UnityW<::UnityEngine::Transform>  holdRaisedGuide;

/// @brief Field holdingLeftHandPos, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_holdingLeftHandPos, put=__cordl_internal_set_holdingLeftHandPos)) ::UnityEngine::Vector3  holdingLeftHandPos;

/// @brief Field holdingRightHandPos, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_holdingRightHandPos, put=__cordl_internal_set_holdingRightHandPos)) ::UnityEngine::Vector3  holdingRightHandPos;

/// @brief Field leftArmLimbSpline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmLimbSpline, put=__cordl_internal_set_leftArmLimbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  leftArmLimbSpline;

/// @brief Field leftHand, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::Transform>  leftHand;

/// @brief Field localLeftArmSpline, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_localLeftArmSpline, put=__cordl_internal_set_localLeftArmSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  localLeftArmSpline;

/// @brief Field localLeftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_localLeftHand, put=__cordl_internal_set_localLeftHand)) ::UnityW<::UnityEngine::Transform>  localLeftHand;

/// @brief Field localRightArmSpline, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRightArmSpline, put=__cordl_internal_set_localRightArmSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  localRightArmSpline;

/// @brief Field localRightHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_localRightHand, put=__cordl_internal_set_localRightHand)) ::UnityW<::UnityEngine::Transform>  localRightHand;

/// @brief Field logVerbose, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field retractionLayerMask, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractionLayerMask, put=__cordl_internal_set_retractionLayerMask)) ::UnityEngine::LayerMask  retractionLayerMask;

/// @brief Field rightArmLimbSpline, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmLimbSpline, put=__cordl_internal_set_rightArmLimbSpline)) ::UnityW<::GlobalNamespace::LimbSpline>  rightArmLimbSpline;

/// @brief Field rightHand, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::Transform>  rightHand;

/// @brief Field smoothHoldRaisedness, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothHoldRaisedness, put=__cordl_internal_set_smoothHoldRaisedness)) float_t  smoothHoldRaisedness;

/// @brief Field stretchTranform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_stretchTranform, put=__cordl_internal_set_stretchTranform)) ::UnityW<::UnityEngine::Transform>  stretchTranform;

/// @brief Field switchHandVelLeft, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_switchHandVelLeft, put=__cordl_internal_set_switchHandVelLeft)) float_t  switchHandVelLeft;

/// @brief Field switchHandnessLeft, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_switchHandnessLeft, put=__cordl_internal_set_switchHandnessLeft)) float_t  switchHandnessLeft;

/// @brief Field switchLeftHandPos, offset 0xd8, size 0xc 
 __declspec(property(get=__cordl_internal_get_switchLeftHandPos, put=__cordl_internal_set_switchLeftHandPos)) ::UnityEngine::Vector3  switchLeftHandPos;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method BobOffsetSingleBone, addr 0x18045b7a0, size 0xf0, virtual false, abstract: false, final false
inline void BobOffsetSingleBone(::UnityEngine::Vector3  bobOffset, ::UnityEngine::Transform*  hand, float_t  amount) ;

/// @brief Method BoneNeedsRetracting, addr 0x18045b890, size 0x320, virtual false, abstract: false, final false
static inline bool BoneNeedsRetracting(::UnityEngine::Collider*  bodyCollider, ::UnityEngine::Vector3  bonePosition, ::by_ref<::UnityEngine::Vector3>  retractPosition, ::UnityEngine::LayerMask  layerMask) ;

/// @brief Method GetWindUp, addr 0x18045bbb0, size 0x120, virtual false, abstract: false, final false
inline float_t GetWindUp() ;

/// @brief Method IAudioRTPCXProvider.GetX, addr 0x18045bcd0, size 0x1e0, virtual true, abstract: false, final true
inline bool IAudioRTPCXProvider_GetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method IAudioRTPCXProvider.get_XProviderIdentifier, addr 0x18045beb0, size 0x10, virtual true, abstract: false, final true
inline ::StringW IAudioRTPCXProvider_get_XProviderIdentifier() ;

/// @brief Method Initialize, addr 0x1802ec810, size 0x20, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LateUpdate, addr 0x18045bec0, size 0x1740, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LegIsBusyKicking, addr 0x18045d600, size 0x80, virtual false, abstract: false, final false
static inline bool LegIsBusyKicking(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerArms* New_ctor() ;

/// @brief Method PlaySwitchSound, addr 0x18045d680, size 0x1e0, virtual false, abstract: false, final false
inline void PlaySwitchSound() ;

/// @brief Method ProcessRetraction, addr 0x18045d860, size 0x350, virtual false, abstract: false, final false
inline void ProcessRetraction(::UnityEngine::Collider*  bodyCollider, ::UnityEngine::Transform*  bone) ;

/// @brief Method ProcessRetractions, addr 0x18045dbb0, size 0x2b0, virtual false, abstract: false, final false
inline void ProcessRetractions(bool  leftHandLocked, bool  rightHandLocked) ;

/// @brief Method ScreenSpacize, addr 0x18045de60, size 0x1c0, virtual false, abstract: false, final false
static inline void ScreenSpacize(::UnityEngine::Transform*  netueralTransform, ::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Transform*  target, float_t  amount) ;

/// @brief Method SetForHeldProp, addr 0x18045e020, size 0x50, virtual false, abstract: false, final false
inline void SetForHeldProp(::GlobalNamespace::Prop*  prop, float_t  raisedness) ;

/// @brief Method UpdateBobOffsets, addr 0x18045e070, size 0x7a0, virtual false, abstract: false, final false
inline void UpdateBobOffsets() ;

/// @brief Method UpdateScreenSpaceArms, addr 0x18045e810, size 0x350, virtual false, abstract: false, final false
inline void UpdateScreenSpaceArms() ;

/// @brief Method UpdateWindUp, addr 0x18045eb60, size 0x260, virtual false, abstract: false, final false
inline void UpdateWindUp() ;

constexpr float_t const& __cordl_internal_get__lastStretchDistance() const;

constexpr float_t& __cordl_internal_get__lastStretchDistance() ;

constexpr float_t const& __cordl_internal_get__prevWindup() const;

constexpr float_t& __cordl_internal_get__prevWindup() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__stretchInAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__stretchInAudioEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__stretchOutAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__stretchOutAudioEvent() ;

constexpr float_t const& __cordl_internal_get__stretchSpeed() const;

constexpr float_t& __cordl_internal_get__stretchSpeed() ;

constexpr bool const& __cordl_internal_get__wasHoldingDown() const;

constexpr bool& __cordl_internal_get__wasHoldingDown() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__windUpAudioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__windUpAudioEvent() ;

constexpr float_t const& __cordl_internal_get_customHandVelLeft() const;

constexpr float_t& __cordl_internal_get_customHandVelLeft() ;

constexpr float_t const& __cordl_internal_get_customHandVelRight() const;

constexpr float_t& __cordl_internal_get_customHandVelRight() ;

constexpr float_t const& __cordl_internal_get_customHandnessLeft() const;

constexpr float_t& __cordl_internal_get_customHandnessLeft() ;

constexpr float_t const& __cordl_internal_get_customHandnessRight() const;

constexpr float_t& __cordl_internal_get_customHandnessRight() ;

constexpr float_t const& __cordl_internal_get_dragHandSmoothTime() const;

constexpr float_t& __cordl_internal_get_dragHandSmoothTime() ;

constexpr float_t const& __cordl_internal_get_dragMaxFacingAngle() const;

constexpr float_t& __cordl_internal_get_dragMaxFacingAngle() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_holdRaisedGuide() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_holdRaisedGuide() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_holdingLeftHandPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_holdingLeftHandPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_holdingRightHandPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_holdingRightHandPos() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_leftArmLimbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_leftArmLimbSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_localLeftArmSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_localLeftArmSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_localLeftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_localLeftHand() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_localRightArmSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_localRightArmSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_localRightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_localRightHand() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_retractionLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_retractionLayerMask() ;

constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& __cordl_internal_get_rightArmLimbSpline() const;

constexpr ::UnityW<::GlobalNamespace::LimbSpline>& __cordl_internal_get_rightArmLimbSpline() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand() ;

constexpr float_t const& __cordl_internal_get_smoothHoldRaisedness() const;

constexpr float_t& __cordl_internal_get_smoothHoldRaisedness() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stretchTranform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stretchTranform() ;

constexpr float_t const& __cordl_internal_get_switchHandVelLeft() const;

constexpr float_t& __cordl_internal_get_switchHandVelLeft() ;

constexpr float_t const& __cordl_internal_get_switchHandnessLeft() const;

constexpr float_t& __cordl_internal_get_switchHandnessLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_switchLeftHandPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_switchLeftHandPos() ;

constexpr void __cordl_internal_set__lastStretchDistance(float_t  value) ;

constexpr void __cordl_internal_set__prevWindup(float_t  value) ;

constexpr void __cordl_internal_set__stretchInAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__stretchOutAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__stretchSpeed(float_t  value) ;

constexpr void __cordl_internal_set__wasHoldingDown(bool  value) ;

constexpr void __cordl_internal_set__windUpAudioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_customHandVelLeft(float_t  value) ;

constexpr void __cordl_internal_set_customHandVelRight(float_t  value) ;

constexpr void __cordl_internal_set_customHandnessLeft(float_t  value) ;

constexpr void __cordl_internal_set_customHandnessRight(float_t  value) ;

constexpr void __cordl_internal_set_dragHandSmoothTime(float_t  value) ;

constexpr void __cordl_internal_set_dragMaxFacingAngle(float_t  value) ;

constexpr void __cordl_internal_set_holdRaisedGuide(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_holdingLeftHandPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_holdingRightHandPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftArmLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localLeftArmSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_localLeftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localRightArmSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_localRightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_retractionLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_rightArmLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_smoothHoldRaisedness(float_t  value) ;

constexpr void __cordl_internal_set_stretchTranform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_switchHandVelLeft(float_t  value) ;

constexpr void __cordl_internal_set_switchHandnessLeft(float_t  value) ;

constexpr void __cordl_internal_set_switchLeftHandPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x18045edc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerArms() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerArms", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerArms(PlayerArms && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerArms", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerArms(PlayerArms const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5440};

/// @brief Field leftHand, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHand;

/// @brief Field rightHand, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHand;

/// @brief Field localLeftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___localLeftHand;

/// @brief Field localRightHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___localRightHand;

/// @brief Field leftArmLimbSpline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___leftArmLimbSpline;

/// @brief Field rightArmLimbSpline, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___rightArmLimbSpline;

/// @brief Field localLeftArmSpline, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___localLeftArmSpline;

/// @brief Field localRightArmSpline, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LimbSpline>  ___localRightArmSpline;

/// @brief Field holdRaisedGuide, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___holdRaisedGuide;

/// @brief Field dragHandSmoothTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___dragHandSmoothTime;

/// @brief Field dragMaxFacingAngle, offset: 0x5c, size: 0x4, def value: None
 float_t  ___dragMaxFacingAngle;

/// @brief Field logVerbose, offset: 0x60, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field smoothHoldRaisedness, offset: 0x64, size: 0x4, def value: None
 float_t  ___smoothHoldRaisedness;

/// @brief Field stretchTranform, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stretchTranform;

/// @brief Field _prevWindup, offset: 0x70, size: 0x4, def value: None
 float_t  ____prevWindup;

/// @brief Field _windUpAudioEvent, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____windUpAudioEvent;

/// @brief Field _stretchInAudioEvent, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____stretchInAudioEvent;

/// @brief Field _stretchOutAudioEvent, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____stretchOutAudioEvent;

/// @brief Field _lastStretchDistance, offset: 0x90, size: 0x4, def value: None
 float_t  ____lastStretchDistance;

/// @brief Field _stretchSpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ____stretchSpeed;

/// @brief Field _wasHoldingDown, offset: 0x98, size: 0x1, def value: None
 bool  ____wasHoldingDown;

/// @brief Field retractionLayerMask, offset: 0x9c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___retractionLayerMask;

/// @brief Field playerCharacter, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field customHandnessLeft, offset: 0xa8, size: 0x4, def value: None
 float_t  ___customHandnessLeft;

/// @brief Field customHandVelLeft, offset: 0xac, size: 0x4, def value: None
 float_t  ___customHandVelLeft;

/// @brief Field customHandnessRight, offset: 0xb0, size: 0x4, def value: None
 float_t  ___customHandnessRight;

/// @brief Field customHandVelRight, offset: 0xb4, size: 0x4, def value: None
 float_t  ___customHandVelRight;

/// @brief Field switchHandnessLeft, offset: 0xb8, size: 0x4, def value: None
 float_t  ___switchHandnessLeft;

/// @brief Field switchHandVelLeft, offset: 0xbc, size: 0x4, def value: None
 float_t  ___switchHandVelLeft;

/// @brief Field holdingLeftHandPos, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___holdingLeftHandPos;

/// @brief Field holdingRightHandPos, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___holdingRightHandPos;

/// @brief Field switchLeftHandPos, offset: 0xd8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___switchLeftHandPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerArms, ___leftHand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___rightHand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___localLeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___localRightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___leftArmLimbSpline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___rightArmLimbSpline) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___localLeftArmSpline) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___localRightArmSpline) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___holdRaisedGuide) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___dragHandSmoothTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___dragMaxFacingAngle) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___logVerbose) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___smoothHoldRaisedness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___stretchTranform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____prevWindup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____windUpAudioEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____stretchInAudioEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____stretchOutAudioEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____lastStretchDistance) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____stretchSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ____wasHoldingDown) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___retractionLayerMask) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___playerCharacter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___customHandnessLeft) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___customHandVelLeft) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___customHandnessRight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___customHandVelRight) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___switchHandnessLeft) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___switchHandVelLeft) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___holdingLeftHandPos) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___holdingRightHandPos) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerArms, ___switchLeftHandPos) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerArms) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
