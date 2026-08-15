#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGround.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerGround)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
class CollisionTracker;
}
namespace GlobalNamespace {
class FootstepAudioReferences;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerGround_DownhillBlockState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
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
struct PlayerGround_DownhillBlockState;
}
namespace GlobalNamespace {
class PlayerGround;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerGround_DownhillBlockState);
MARK_REF_T(::GlobalNamespace::PlayerGround*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGround_DownhillBlockState, "", "PlayerGround/DownhillBlockState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGround*, "", "PlayerGround");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerGround/DownhillBlockState
struct CORDL_TYPE PlayerGround_DownhillBlockState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerGround_DownhillBlockState_Unwrapped
enum struct __PlayerGround_DownhillBlockState_Unwrapped : int32_t {
__E_Clear = static_cast<int32_t>(0x0),
__E_Partial = static_cast<int32_t>(0x1),
__E_Blocked = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerGround_DownhillBlockState_Unwrapped () const noexcept {
return static_cast<__PlayerGround_DownhillBlockState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerGround_DownhillBlockState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerGround_DownhillBlockState(int32_t  value__) noexcept;

/// @brief Field Blocked value: I32(2)
static ::GlobalNamespace::PlayerGround_DownhillBlockState const Blocked;

/// @brief Field Clear value: I32(0)
static ::GlobalNamespace::PlayerGround_DownhillBlockState const Clear;

/// @brief Field Partial value: I32(1)
static ::GlobalNamespace::PlayerGround_DownhillBlockState const Partial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5458};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGround_DownhillBlockState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGround_DownhillBlockState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerGround::DownhillBlockState, System.Nullable`1<T>, System.Object, UnityEngine.LayerMask, UnityEngine.PhysicsMaterial, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerGround
class CORDL_TYPE PlayerGround : public ::System::Object {
public:
// Declarations
using DownhillBlockState = ::GlobalNamespace::PlayerGround_DownhillBlockState;

/// @brief Field _currentPropSlideSound, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPropSlideSound, put=__cordl_internal_set__currentPropSlideSound)) ::UnityW<::GlobalNamespace::AudioLayerContainer>  _currentPropSlideSound;

/// @brief Field _footstepSounds, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__footstepSounds, put=__cordl_internal_set__footstepSounds)) ::UnityW<::GlobalNamespace::FootstepAudioReferences>  _footstepSounds;

/// @brief Field _lastPropPos, offset 0x12c, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastPropPos, put=__cordl_internal_set__lastPropPos)) ::System::Nullable_1<::UnityEngine::Vector3>  _lastPropPos;

/// @brief Field <normal>k__BackingField, offset 0xf4, size 0xc 
 __declspec(property(get=__cordl_internal_get__normal_k__BackingField, put=__cordl_internal_set__normal_k__BackingField)) ::UnityEngine::Vector3  _normal_k__BackingField;

/// @brief Field _propMovingVelocity, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__propMovingVelocity, put=__cordl_internal_set__propMovingVelocity)) float_t  _propMovingVelocity;

/// @brief Field _propSlideEvent, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__propSlideEvent, put=__cordl_internal_set__propSlideEvent)) ::GlobalNamespace::AudioEvent*  _propSlideEvent;

/// @brief Field angleFullDownhill, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleFullDownhill, put=__cordl_internal_set_angleFullDownhill)) float_t  angleFullDownhill;

/// @brief Field angleFullFlat, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleFullFlat, put=__cordl_internal_set_angleFullFlat)) float_t  angleFullFlat;

/// @brief Field angleFullGrip, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleFullGrip, put=__cordl_internal_set_angleFullGrip)) float_t  angleFullGrip;

/// @brief Field angleFullSteep, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleFullSteep, put=__cordl_internal_set_angleFullSteep)) float_t  angleFullSteep;

/// @brief Field angleFullUphill, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleFullUphill, put=__cordl_internal_set_angleFullUphill)) float_t  angleFullUphill;

/// @brief Field angleJumpLimitSteep, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleJumpLimitSteep, put=__cordl_internal_set_angleJumpLimitSteep)) float_t  angleJumpLimitSteep;

/// @brief Field angleNoGrip, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleNoGrip, put=__cordl_internal_set_angleNoGrip)) float_t  angleNoGrip;

/// @brief Field angleSwimDownHill, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleSwimDownHill, put=__cordl_internal_set_angleSwimDownHill)) float_t  angleSwimDownHill;

/// @brief Field angleSwimUpHill, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleSwimUpHill, put=__cordl_internal_set_angleSwimUpHill)) float_t  angleSwimUpHill;

/// @brief Field castFrom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_castFrom, put=__cordl_internal_set_castFrom)) ::UnityW<::UnityEngine::Transform>  castFrom;

/// @brief Field castLength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_castLength, put=__cordl_internal_set_castLength)) float_t  castLength;

/// @brief Field castLength2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_castLength2, put=__cordl_internal_set_castLength2)) float_t  castLength2;

/// @brief Field collisionTracker, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionTracker, put=__cordl_internal_set_collisionTracker)) ::GlobalNamespace::CollisionTracker*  collisionTracker;

/// @brief Field depthNoSwim, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthNoSwim, put=__cordl_internal_set_depthNoSwim)) float_t  depthNoSwim;

/// @brief Field depthNormalSwim, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthNormalSwim, put=__cordl_internal_set_depthNormalSwim)) float_t  depthNormalSwim;

/// @brief Field distanceToTerrain, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceToTerrain, put=__cordl_internal_set_distanceToTerrain)) float_t  distanceToTerrain;

/// @brief Field downhillBlockState, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_downhillBlockState, put=__cordl_internal_set_downhillBlockState)) ::GlobalNamespace::PlayerGround_DownhillBlockState  downhillBlockState;

/// @brief Field drawDebug, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawDebug, put=__cordl_internal_set_drawDebug)) bool  drawDebug;

/// @brief Field drawSteepnessDebug, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawSteepnessDebug, put=__cordl_internal_set_drawSteepnessDebug)) bool  drawSteepnessDebug;

/// @brief Field drawSwimDebug, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawSwimDebug, put=__cordl_internal_set_drawSwimDebug)) bool  drawSwimDebug;

/// @brief Field footCastOrigin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_footCastOrigin, put=__cordl_internal_set_footCastOrigin)) ::UnityW<::UnityEngine::Transform>  footCastOrigin;

/// @brief Field groundCollider, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_groundCollider, put=__cordl_internal_set_groundCollider)) ::UnityW<::UnityEngine::Collider>  groundCollider;

/// @brief Field hits, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityEngine::RaycastHit>  hits;

/// @brief Field isGrounded, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrounded, put=__cordl_internal_set_isGrounded)) bool  isGrounded;

/// @brief Field isOnJumpableGround, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOnJumpableGround, put=__cordl_internal_set_isOnJumpableGround)) bool  isOnJumpableGround;

/// @brief Field isSwimming, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSwimming, put=__cordl_internal_set_isSwimming)) bool  isSwimming;

/// @brief Field lastGroundWasSwimming, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastGroundWasSwimming, put=__cordl_internal_set_lastGroundWasSwimming)) bool  lastGroundWasSwimming;

/// @brief Field lastRecordedFrame, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRecordedFrame, put=__cordl_internal_set_lastRecordedFrame)) int32_t  lastRecordedFrame;

/// @brief Field lastSafePosition, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSafePosition, put=__cordl_internal_set_lastSafePosition)) ::UnityEngine::Vector3  lastSafePosition;

/// @brief Field layerMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field limitSlopeMovement, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_limitSlopeMovement, put=__cordl_internal_set_limitSlopeMovement)) bool  limitSlopeMovement;

/// @brief Field limitWaterMovement, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_limitWaterMovement, put=__cordl_internal_set_limitWaterMovement)) bool  limitWaterMovement;

/// @brief Field logContactTracking, offset 0x9e, size 0x1 
 __declspec(property(get=__cordl_internal_get_logContactTracking, put=__cordl_internal_set_logContactTracking)) bool  logContactTracking;

/// @brief Field logDownhillBlocking, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logDownhillBlocking, put=__cordl_internal_set_logDownhillBlocking)) bool  logDownhillBlocking;

/// @brief Field logGroundCollider, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get_logGroundCollider, put=__cordl_internal_set_logGroundCollider)) bool  logGroundCollider;

/// @brief Field logIsGrounded, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_logIsGrounded, put=__cordl_internal_set_logIsGrounded)) bool  logIsGrounded;

/// @brief Field logPropCasting, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_logPropCasting, put=__cordl_internal_set_logPropCasting)) bool  logPropCasting;

/// @brief Field logSteepness, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_logSteepness, put=__cordl_internal_set_logSteepness)) bool  logSteepness;

/// @brief Field logVerbose, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

/// @brief Field playerCharacter, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field radius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field radius2, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius2, put=__cordl_internal_set_radius2)) float_t  radius2;

/// @brief Field recordedPairs, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_recordedPairs, put=__cordl_internal_set_recordedPairs)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>*  recordedPairs;

/// @brief Field singleHit, offset 0xa0, size 0x2c 
 __declspec(property(get=__cordl_internal_get_singleHit, put=__cordl_internal_set_singleHit)) ::UnityEngine::RaycastHit  singleHit;

/// @brief Field steepMaterialLimitsGrip, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_steepMaterialLimitsGrip, put=__cordl_internal_set_steepMaterialLimitsGrip)) bool  steepMaterialLimitsGrip;

/// @brief Field steepMaterialMaxGrip, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_steepMaterialMaxGrip, put=__cordl_internal_set_steepMaterialMaxGrip)) float_t  steepMaterialMaxGrip;

/// @brief Field steepMaterials, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_steepMaterials, put=__cordl_internal_set_steepMaterials)) ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  steepMaterials;

/// @brief Field steepnessGizmoGridSize, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_steepnessGizmoGridSize, put=__cordl_internal_set_steepnessGizmoGridSize)) float_t  steepnessGizmoGridSize;

/// @brief Field useNormalAveraging, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNormalAveraging, put=__cordl_internal_set_useNormalAveraging)) bool  useNormalAveraging;

/// @brief Field usePropCast, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePropCast, put=__cordl_internal_set_usePropCast)) bool  usePropCast;

/// @brief Field useRaycasts, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRaycasts, put=__cordl_internal_set_useRaycasts)) bool  useRaycasts;

/// @brief Field useSecondCast, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSecondCast, put=__cordl_internal_set_useSecondCast)) bool  useSecondCast;

/// @brief Method CanMoveDownSlopeTest, addr 0x180348830, size 0x7a0, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerGround_DownhillBlockState CanMoveDownSlopeTest(::UnityEngine::Vector3  slopeNormal) ;

/// @brief Method ColliderCastNonAlloc, addr 0x180348fd0, size 0x6a0, virtual false, abstract: false, final false
static inline int32_t ColliderCastNonAlloc(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  originOffset, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit>  hits, float_t  maxDistance, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method FixedUpdate, addr 0x180349670, size 0xa00, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetCastsFromContacts, addr 0x18034a070, size 0x700, virtual false, abstract: false, final false
inline void GetCastsFromContacts(::by_ref<::UnityEngine::Collider*>  foundCollider, ::by_ref<::UnityEngine::Collider*>  propCollider, ::by_ref<::UnityEngine::Vector3>  contactPoint, ::by_ref<::UnityEngine::Vector3>  contactNormal, ::by_ref<bool>  groundComesFromProp, bool  propsOnly) ;

/// @brief Method GetGroundGrip, addr 0x18034a770, size 0x110, virtual false, abstract: false, final false
inline float_t GetGroundGrip() ;

/// @brief Method GetNonHandHitCount, addr 0x18034a880, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetNonHandHitCount(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount) ;

/// @brief Method GetSlopedMoveForce, addr 0x18034a960, size 0xa10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSlopedMoveForce(::UnityEngine::Vector3  input, ::by_ref<float_t>  steepScalar) ;

/// @brief Method GetSteepness, addr 0x18034b370, size 0x30, virtual false, abstract: false, final false
inline float_t GetSteepness() ;

/// @brief Method GetSteepness, addr 0x18034b3a0, size 0xc0, virtual false, abstract: false, final false
inline float_t GetSteepness(::UnityEngine::Vector3  normal) ;

/// @brief Method Initialize, addr 0x18034b460, size 0xa0, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method IsSteepMaterial, addr 0x18034b500, size 0xe0, virtual false, abstract: false, final false
inline bool IsSteepMaterial(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::PlayerGround* New_ctor() ;

/// @brief Method OnDisable, addr 0x18034b5e0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x18034b630, size 0x4c0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method ProcessCasts, addr 0x18034baf0, size 0x420, virtual false, abstract: false, final false
inline void ProcessCasts(::by_ref<::UnityEngine::Collider*>  foundCollider, ::by_ref<::UnityEngine::Collider*>  propCollider, ::by_ref<::UnityEngine::Vector3>  contactPoint, ::by_ref<::UnityEngine::Vector3>  contactNormal, ::by_ref<bool>  groundIsFromProp, bool  checkProps) ;

/// @brief Method PropCast, addr 0x18034bf10, size 0x500, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> PropCast(::by_ref<::UnityEngine::RaycastHit>  closestHit, ::by_ref<::UnityEngine::Collider*>  propCollider) ;

/// @brief Method RecordContact, addr 0x18034c410, size 0x1d0, virtual false, abstract: false, final false
inline void RecordContact(::UnityEngine::ModifiableContactPair  pair, bool  flipped) ;

/// @brief Method SetGroundCollider, addr 0x18034c5e0, size 0x150, virtual false, abstract: false, final false
inline void SetGroundCollider(::UnityEngine::Collider*  newGroundCollider) ;

/// @brief Method StopPropSlidingSound, addr 0x18034c730, size 0x120, virtual false, abstract: false, final false
inline void StopPropSlidingSound() ;

/// @brief Method UpdatePropSlidingSound, addr 0x18034c860, size 0x460, virtual false, abstract: false, final false
inline void UpdatePropSlidingSound(::UnityEngine::Collider*  propCastResult, ::UnityEngine::Collider*  propCollider) ;

/// @brief Method <UpdatePropSlidingSound>b__80_0, addr 0x18034c850, size 0x10, virtual false, abstract: false, final false
inline float_t _UpdatePropSlidingSound_b__80_0() ;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer> const& __cordl_internal_get__currentPropSlideSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioLayerContainer>& __cordl_internal_get__currentPropSlideSound() ;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& __cordl_internal_get__footstepSounds() const;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& __cordl_internal_get__footstepSounds() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__lastPropPos() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__lastPropPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__normal_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__normal_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__propMovingVelocity() const;

constexpr float_t& __cordl_internal_get__propMovingVelocity() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__propSlideEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__propSlideEvent() ;

constexpr float_t const& __cordl_internal_get_angleFullDownhill() const;

constexpr float_t& __cordl_internal_get_angleFullDownhill() ;

constexpr float_t const& __cordl_internal_get_angleFullFlat() const;

constexpr float_t& __cordl_internal_get_angleFullFlat() ;

constexpr float_t const& __cordl_internal_get_angleFullGrip() const;

constexpr float_t& __cordl_internal_get_angleFullGrip() ;

constexpr float_t const& __cordl_internal_get_angleFullSteep() const;

constexpr float_t& __cordl_internal_get_angleFullSteep() ;

constexpr float_t const& __cordl_internal_get_angleFullUphill() const;

constexpr float_t& __cordl_internal_get_angleFullUphill() ;

constexpr float_t const& __cordl_internal_get_angleJumpLimitSteep() const;

constexpr float_t& __cordl_internal_get_angleJumpLimitSteep() ;

constexpr float_t const& __cordl_internal_get_angleNoGrip() const;

constexpr float_t& __cordl_internal_get_angleNoGrip() ;

constexpr float_t const& __cordl_internal_get_angleSwimDownHill() const;

constexpr float_t& __cordl_internal_get_angleSwimDownHill() ;

constexpr float_t const& __cordl_internal_get_angleSwimUpHill() const;

constexpr float_t& __cordl_internal_get_angleSwimUpHill() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_castFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_castFrom() ;

constexpr float_t const& __cordl_internal_get_castLength() const;

constexpr float_t& __cordl_internal_get_castLength() ;

constexpr float_t const& __cordl_internal_get_castLength2() const;

constexpr float_t& __cordl_internal_get_castLength2() ;

constexpr ::GlobalNamespace::CollisionTracker* const& __cordl_internal_get_collisionTracker() const;

constexpr ::GlobalNamespace::CollisionTracker*& __cordl_internal_get_collisionTracker() ;

constexpr float_t const& __cordl_internal_get_depthNoSwim() const;

constexpr float_t& __cordl_internal_get_depthNoSwim() ;

constexpr float_t const& __cordl_internal_get_depthNormalSwim() const;

constexpr float_t& __cordl_internal_get_depthNormalSwim() ;

constexpr float_t const& __cordl_internal_get_distanceToTerrain() const;

constexpr float_t& __cordl_internal_get_distanceToTerrain() ;

constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState const& __cordl_internal_get_downhillBlockState() const;

constexpr ::GlobalNamespace::PlayerGround_DownhillBlockState& __cordl_internal_get_downhillBlockState() ;

constexpr bool const& __cordl_internal_get_drawDebug() const;

constexpr bool& __cordl_internal_get_drawDebug() ;

constexpr bool const& __cordl_internal_get_drawSteepnessDebug() const;

constexpr bool& __cordl_internal_get_drawSteepnessDebug() ;

constexpr bool const& __cordl_internal_get_drawSwimDebug() const;

constexpr bool& __cordl_internal_get_drawSwimDebug() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_footCastOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_footCastOrigin() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_groundCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_groundCollider() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hits() ;

constexpr bool const& __cordl_internal_get_isGrounded() const;

constexpr bool& __cordl_internal_get_isGrounded() ;

constexpr bool const& __cordl_internal_get_isOnJumpableGround() const;

constexpr bool& __cordl_internal_get_isOnJumpableGround() ;

constexpr bool const& __cordl_internal_get_isSwimming() const;

constexpr bool& __cordl_internal_get_isSwimming() ;

constexpr bool const& __cordl_internal_get_lastGroundWasSwimming() const;

constexpr bool& __cordl_internal_get_lastGroundWasSwimming() ;

constexpr int32_t const& __cordl_internal_get_lastRecordedFrame() const;

constexpr int32_t& __cordl_internal_get_lastRecordedFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSafePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSafePosition() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr bool const& __cordl_internal_get_limitSlopeMovement() const;

constexpr bool& __cordl_internal_get_limitSlopeMovement() ;

constexpr bool const& __cordl_internal_get_limitWaterMovement() const;

constexpr bool& __cordl_internal_get_limitWaterMovement() ;

constexpr bool const& __cordl_internal_get_logContactTracking() const;

constexpr bool& __cordl_internal_get_logContactTracking() ;

constexpr bool const& __cordl_internal_get_logDownhillBlocking() const;

constexpr bool& __cordl_internal_get_logDownhillBlocking() ;

constexpr bool const& __cordl_internal_get_logGroundCollider() const;

constexpr bool& __cordl_internal_get_logGroundCollider() ;

constexpr bool const& __cordl_internal_get_logIsGrounded() const;

constexpr bool& __cordl_internal_get_logIsGrounded() ;

constexpr bool const& __cordl_internal_get_logPropCasting() const;

constexpr bool& __cordl_internal_get_logPropCasting() ;

constexpr bool const& __cordl_internal_get_logSteepness() const;

constexpr bool& __cordl_internal_get_logSteepness() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_radius2() const;

constexpr float_t& __cordl_internal_get_radius2() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>* const& __cordl_internal_get_recordedPairs() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>*& __cordl_internal_get_recordedPairs() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_singleHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_singleHit() ;

constexpr bool const& __cordl_internal_get_steepMaterialLimitsGrip() const;

constexpr bool& __cordl_internal_get_steepMaterialLimitsGrip() ;

constexpr float_t const& __cordl_internal_get_steepMaterialMaxGrip() const;

constexpr float_t& __cordl_internal_get_steepMaterialMaxGrip() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>> const& __cordl_internal_get_steepMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>& __cordl_internal_get_steepMaterials() ;

constexpr float_t const& __cordl_internal_get_steepnessGizmoGridSize() const;

constexpr float_t& __cordl_internal_get_steepnessGizmoGridSize() ;

constexpr bool const& __cordl_internal_get_useNormalAveraging() const;

constexpr bool& __cordl_internal_get_useNormalAveraging() ;

constexpr bool const& __cordl_internal_get_usePropCast() const;

constexpr bool& __cordl_internal_get_usePropCast() ;

constexpr bool const& __cordl_internal_get_useRaycasts() const;

constexpr bool& __cordl_internal_get_useRaycasts() ;

constexpr bool const& __cordl_internal_get_useSecondCast() const;

constexpr bool& __cordl_internal_get_useSecondCast() ;

constexpr void __cordl_internal_set__currentPropSlideSound(::UnityW<::GlobalNamespace::AudioLayerContainer>  value) ;

constexpr void __cordl_internal_set__footstepSounds(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value) ;

constexpr void __cordl_internal_set__lastPropPos(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__normal_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__propMovingVelocity(float_t  value) ;

constexpr void __cordl_internal_set__propSlideEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_angleFullDownhill(float_t  value) ;

constexpr void __cordl_internal_set_angleFullFlat(float_t  value) ;

constexpr void __cordl_internal_set_angleFullGrip(float_t  value) ;

constexpr void __cordl_internal_set_angleFullSteep(float_t  value) ;

constexpr void __cordl_internal_set_angleFullUphill(float_t  value) ;

constexpr void __cordl_internal_set_angleJumpLimitSteep(float_t  value) ;

constexpr void __cordl_internal_set_angleNoGrip(float_t  value) ;

constexpr void __cordl_internal_set_angleSwimDownHill(float_t  value) ;

constexpr void __cordl_internal_set_angleSwimUpHill(float_t  value) ;

constexpr void __cordl_internal_set_castFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_castLength(float_t  value) ;

constexpr void __cordl_internal_set_castLength2(float_t  value) ;

constexpr void __cordl_internal_set_collisionTracker(::GlobalNamespace::CollisionTracker*  value) ;

constexpr void __cordl_internal_set_depthNoSwim(float_t  value) ;

constexpr void __cordl_internal_set_depthNormalSwim(float_t  value) ;

constexpr void __cordl_internal_set_distanceToTerrain(float_t  value) ;

constexpr void __cordl_internal_set_downhillBlockState(::GlobalNamespace::PlayerGround_DownhillBlockState  value) ;

constexpr void __cordl_internal_set_drawDebug(bool  value) ;

constexpr void __cordl_internal_set_drawSteepnessDebug(bool  value) ;

constexpr void __cordl_internal_set_drawSwimDebug(bool  value) ;

constexpr void __cordl_internal_set_footCastOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_groundCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_isGrounded(bool  value) ;

constexpr void __cordl_internal_set_isOnJumpableGround(bool  value) ;

constexpr void __cordl_internal_set_isSwimming(bool  value) ;

constexpr void __cordl_internal_set_lastGroundWasSwimming(bool  value) ;

constexpr void __cordl_internal_set_lastRecordedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastSafePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_limitSlopeMovement(bool  value) ;

constexpr void __cordl_internal_set_limitWaterMovement(bool  value) ;

constexpr void __cordl_internal_set_logContactTracking(bool  value) ;

constexpr void __cordl_internal_set_logDownhillBlocking(bool  value) ;

constexpr void __cordl_internal_set_logGroundCollider(bool  value) ;

constexpr void __cordl_internal_set_logIsGrounded(bool  value) ;

constexpr void __cordl_internal_set_logPropCasting(bool  value) ;

constexpr void __cordl_internal_set_logSteepness(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_radius2(float_t  value) ;

constexpr void __cordl_internal_set_recordedPairs(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>*  value) ;

constexpr void __cordl_internal_set_singleHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_steepMaterialLimitsGrip(bool  value) ;

constexpr void __cordl_internal_set_steepMaterialMaxGrip(float_t  value) ;

constexpr void __cordl_internal_set_steepMaterials(::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  value) ;

constexpr void __cordl_internal_set_steepnessGizmoGridSize(float_t  value) ;

constexpr void __cordl_internal_set_useNormalAveraging(bool  value) ;

constexpr void __cordl_internal_set_usePropCast(bool  value) ;

constexpr void __cordl_internal_set_useRaycasts(bool  value) ;

constexpr void __cordl_internal_set_useSecondCast(bool  value) ;

/// @brief Method .ctor, addr 0x18034ccc0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_normal, addr 0x18034ccd0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method set_normal, addr 0x18034ccf0, size 0x20, virtual false, abstract: false, final false
inline void set_normal(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGround() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGround", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGround(PlayerGround && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGround", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGround(PlayerGround const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5459};

/// @brief Field collisionTracker, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::CollisionTracker*  ___collisionTracker;

/// @brief Field useRaycasts, offset: 0x18, size: 0x1, def value: None
 bool  ___useRaycasts;

/// @brief Field useNormalAveraging, offset: 0x19, size: 0x1, def value: None
 bool  ___useNormalAveraging;

/// @brief Field usePropCast, offset: 0x1a, size: 0x1, def value: None
 bool  ___usePropCast;

/// @brief Field castFrom, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___castFrom;

/// @brief Field footCastOrigin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___footCastOrigin;

/// @brief Field radius, offset: 0x30, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field castLength, offset: 0x34, size: 0x4, def value: None
 float_t  ___castLength;

/// @brief Field useSecondCast, offset: 0x38, size: 0x1, def value: None
 bool  ___useSecondCast;

/// @brief Field radius2, offset: 0x3c, size: 0x4, def value: None
 float_t  ___radius2;

/// @brief Field castLength2, offset: 0x40, size: 0x4, def value: None
 float_t  ___castLength2;

/// @brief Field layerMask, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field limitWaterMovement, offset: 0x48, size: 0x1, def value: None
 bool  ___limitWaterMovement;

/// @brief Field depthNormalSwim, offset: 0x4c, size: 0x4, def value: None
 float_t  ___depthNormalSwim;

/// @brief Field depthNoSwim, offset: 0x50, size: 0x4, def value: None
 float_t  ___depthNoSwim;

/// @brief Field angleSwimDownHill, offset: 0x54, size: 0x4, def value: None
 float_t  ___angleSwimDownHill;

/// @brief Field angleSwimUpHill, offset: 0x58, size: 0x4, def value: None
 float_t  ___angleSwimUpHill;

/// @brief Field limitSlopeMovement, offset: 0x5c, size: 0x1, def value: None
 bool  ___limitSlopeMovement;

/// @brief Field angleFullFlat, offset: 0x60, size: 0x4, def value: None
 float_t  ___angleFullFlat;

/// @brief Field angleFullSteep, offset: 0x64, size: 0x4, def value: None
 float_t  ___angleFullSteep;

/// @brief Field angleJumpLimitSteep, offset: 0x68, size: 0x4, def value: None
 float_t  ___angleJumpLimitSteep;

/// @brief Field angleFullUphill, offset: 0x6c, size: 0x4, def value: None
 float_t  ___angleFullUphill;

/// @brief Field angleFullDownhill, offset: 0x70, size: 0x4, def value: None
 float_t  ___angleFullDownhill;

/// @brief Field angleFullGrip, offset: 0x74, size: 0x4, def value: None
 float_t  ___angleFullGrip;

/// @brief Field angleNoGrip, offset: 0x78, size: 0x4, def value: None
 float_t  ___angleNoGrip;

/// @brief Field steepMaterialMaxGrip, offset: 0x7c, size: 0x4, def value: None
 float_t  ___steepMaterialMaxGrip;

/// @brief Field steepMaterialLimitsGrip, offset: 0x80, size: 0x1, def value: None
 bool  ___steepMaterialLimitsGrip;

/// @brief Field steepMaterials, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::PhysicsMaterial>>  ___steepMaterials;

/// @brief Field drawDebug, offset: 0x90, size: 0x1, def value: None
 bool  ___drawDebug;

/// @brief Field drawSwimDebug, offset: 0x91, size: 0x1, def value: None
 bool  ___drawSwimDebug;

/// @brief Field drawSteepnessDebug, offset: 0x92, size: 0x1, def value: None
 bool  ___drawSteepnessDebug;

/// @brief Field steepnessGizmoGridSize, offset: 0x94, size: 0x4, def value: None
 float_t  ___steepnessGizmoGridSize;

/// @brief Field logVerbose, offset: 0x98, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field logSteepness, offset: 0x99, size: 0x1, def value: None
 bool  ___logSteepness;

/// @brief Field logIsGrounded, offset: 0x9a, size: 0x1, def value: None
 bool  ___logIsGrounded;

/// @brief Field logPropCasting, offset: 0x9b, size: 0x1, def value: None
 bool  ___logPropCasting;

/// @brief Field logDownhillBlocking, offset: 0x9c, size: 0x1, def value: None
 bool  ___logDownhillBlocking;

/// @brief Field logGroundCollider, offset: 0x9d, size: 0x1, def value: None
 bool  ___logGroundCollider;

/// @brief Field logContactTracking, offset: 0x9e, size: 0x1, def value: None
 bool  ___logContactTracking;

/// @brief Field singleHit, offset: 0xa0, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___singleHit;

/// @brief Field hits, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hits;

/// @brief Field playerCharacter, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field isGrounded, offset: 0xe0, size: 0x1, def value: None
 bool  ___isGrounded;

/// @brief Field isOnJumpableGround, offset: 0xe1, size: 0x1, def value: None
 bool  ___isOnJumpableGround;

/// @brief Field lastSafePosition, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSafePosition;

/// @brief Field downhillBlockState, offset: 0xf0, size: 0x4, def value: None
 ::GlobalNamespace::PlayerGround_DownhillBlockState  ___downhillBlockState;

/// @brief Field <normal>k__BackingField, offset: 0xf4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____normal_k__BackingField;

/// @brief Field isSwimming, offset: 0x100, size: 0x1, def value: None
 bool  ___isSwimming;

/// @brief Field lastGroundWasSwimming, offset: 0x101, size: 0x1, def value: None
 bool  ___lastGroundWasSwimming;

/// @brief Field distanceToTerrain, offset: 0x104, size: 0x4, def value: None
 float_t  ___distanceToTerrain;

/// @brief Field groundCollider, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___groundCollider;

/// @brief Field _footstepSounds, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FootstepAudioReferences>  ____footstepSounds;

/// @brief Field _currentPropSlideSound, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioLayerContainer>  ____currentPropSlideSound;

/// @brief Field _propSlideEvent, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____propSlideEvent;

/// @brief Field _propMovingVelocity, offset: 0x128, size: 0x4, def value: None
 float_t  ____propMovingVelocity;

/// @brief Field _lastPropPos, offset: 0x12c, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____lastPropPos;

/// @brief Field lastRecordedFrame, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___lastRecordedFrame;

/// @brief Field recordedPairs, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ModifiableContactPair,bool>>*  ___recordedPairs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGround, ___collisionTracker) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___useRaycasts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___useNormalAveraging) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___usePropCast) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___castFrom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___footCastOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___radius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___castLength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___useSecondCast) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___radius2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___castLength2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___layerMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___limitWaterMovement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___depthNormalSwim) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___depthNoSwim) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleSwimDownHill) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleSwimUpHill) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___limitSlopeMovement) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleFullFlat) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleFullSteep) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleJumpLimitSteep) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleFullUphill) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleFullDownhill) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleFullGrip) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___angleNoGrip) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___steepMaterialMaxGrip) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___steepMaterialLimitsGrip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___steepMaterials) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___drawDebug) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___drawSwimDebug) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___drawSteepnessDebug) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___steepnessGizmoGridSize) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logVerbose) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logSteepness) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logIsGrounded) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logPropCasting) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logDownhillBlocking) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logGroundCollider) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___logContactTracking) == 0x9e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___singleHit) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___hits) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___playerCharacter) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___isGrounded) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___isOnJumpableGround) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___lastSafePosition) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___downhillBlockState) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ____normal_k__BackingField) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___isSwimming) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___lastGroundWasSwimming) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___distanceToTerrain) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___groundCollider) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ____footstepSounds) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ____currentPropSlideSound) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ____propSlideEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ____propMovingVelocity) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ____lastPropPos) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___lastRecordedFrame) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGround, ___recordedPairs) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGround) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
