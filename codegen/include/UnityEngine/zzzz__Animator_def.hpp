#pragma once
// IWYU pragma private; include "UnityEngine/Animator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Animator)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
struct AnimatorCullingMode;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct StateInfoIndex;
}
namespace UnityEngine {
class StateMachineBehaviour;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Animator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animator*, "UnityEngine", "Animator");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Animator
class CORDL_TYPE Animator : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_applyRootMotion, put=set_applyRootMotion)) bool  applyRootMotion;

 __declspec(property(get=get_avatar, put=set_avatar)) ::UnityW<::UnityEngine::Avatar>  avatar;

 __declspec(property(get=get_bodyPosition, put=set_bodyPosition)) ::UnityEngine::Vector3  bodyPosition;

 __declspec(property(get=get_bodyPositionInternal, put=set_bodyPositionInternal)) ::UnityEngine::Vector3  bodyPositionInternal;

 __declspec(property(get=get_bodyRotation, put=set_bodyRotation)) ::UnityEngine::Quaternion  bodyRotation;

 __declspec(property(get=get_bodyRotationInternal, put=set_bodyRotationInternal)) ::UnityEngine::Quaternion  bodyRotationInternal;

 __declspec(property(get=get_cullingMode, put=set_cullingMode)) ::UnityEngine::AnimatorCullingMode  cullingMode;

 __declspec(property(get=get_deltaPosition)) ::UnityEngine::Vector3  deltaPosition;

 __declspec(property(get=get_deltaRotation)) ::UnityEngine::Quaternion  deltaRotation;

 __declspec(property(get=get_feetPivotActive, put=set_feetPivotActive)) float_t  feetPivotActive;

 __declspec(property(get=get_fireEvents, put=set_fireEvents)) bool  fireEvents;

 __declspec(property(get=get_gravityWeight)) float_t  gravityWeight;

 __declspec(property(get=get_hasBoundPlayables)) bool  hasBoundPlayables;

 __declspec(property(get=get_hasRootMotion)) bool  hasRootMotion;

 __declspec(property(get=get_hasTransformHierarchy)) bool  hasTransformHierarchy;

 __declspec(property(get=get_humanScale)) float_t  humanScale;

 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_isInitialized)) bool  isInitialized;

 __declspec(property(get=get_isOptimizable)) bool  isOptimizable;

 __declspec(property(get=get_keepAnimatorStateOnDisable, put=set_keepAnimatorStateOnDisable)) bool  keepAnimatorStateOnDisable;

 __declspec(property(get=get_layerCount)) int32_t  layerCount;

 __declspec(property(get=get_layersAffectMassCenter, put=set_layersAffectMassCenter)) bool  layersAffectMassCenter;

 __declspec(property(get=get_leftFeetBottomHeight)) float_t  leftFeetBottomHeight;

 __declspec(property(get=get_logWarnings, put=set_logWarnings)) bool  logWarnings;

 __declspec(property(get=get_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  parameters;

 __declspec(property(get=get_pivotPosition)) ::UnityEngine::Vector3  pivotPosition;

 __declspec(property(get=get_pivotWeight)) float_t  pivotWeight;

 __declspec(property(get=get_rightFeetBottomHeight)) float_t  rightFeetBottomHeight;

 __declspec(property(get=get_rootPosition, put=set_rootPosition)) ::UnityEngine::Vector3  rootPosition;

 __declspec(property(get=get_rootRotation, put=set_rootRotation)) ::UnityEngine::Quaternion  rootRotation;

 __declspec(property(get=get_runtimeAnimatorController)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  runtimeAnimatorController;

 __declspec(property(get=get_speed, put=set_speed)) float_t  speed;

 __declspec(property(get=get_stabilizeFeet, put=set_stabilizeFeet)) bool  stabilizeFeet;

 __declspec(property(get=get_updateMode, put=set_updateMode)) ::UnityEngine::AnimatorUpdateMode  updateMode;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method ApplyBuiltinRootMotion, addr 0x182233ff0, size 0x30, virtual false, abstract: false, final false
inline void ApplyBuiltinRootMotion() ;

/// @brief Method ApplyBuiltinRootMotion_Injected, addr 0x182233fe0, size 0x10, virtual false, abstract: false, final false
static inline void ApplyBuiltinRootMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method CheckIfInIKPass, addr 0x182234020, size 0x70, virtual false, abstract: false, final false
inline void CheckIfInIKPass() ;

/// @brief Method ConvertStateMachineBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> ConvertStateMachineBehaviour(::ArrayW<::UnityEngine::ScriptableObject*>  rawObjects) ;

/// @brief Method GetAnimatorStateInfo, addr 0x1822340a0, size 0x50, virtual false, abstract: false, final false
inline void GetAnimatorStateInfo(int32_t  layerIndex, ::UnityEngine::StateInfoIndex  stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>  info) ;

/// @brief Method GetAnimatorStateInfo_Injected, addr 0x182234090, size 0x10, virtual false, abstract: false, final false
static inline void GetAnimatorStateInfo_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, ::UnityEngine::StateInfoIndex  stateInfoIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>  info) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x182234140, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t  layerIndex) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x182234100, size 0x40, virtual false, abstract: false, final false
inline void GetAnimatorTransitionInfo(int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo>  info) ;

/// @brief Method GetAnimatorTransitionInfo_Injected, addr 0x1822340f0, size 0x10, virtual false, abstract: false, final false
static inline void GetAnimatorTransitionInfo_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo>  info) ;

/// @brief Method GetBehaviour, addr 0x1822341a0, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::ScriptableObject> GetBehaviour(::System::Type*  type) ;

/// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetBehaviour() ;

/// @brief Method GetBehaviour_Injected, addr 0x182234190, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBehaviour_Injected(::System::IntPtr  _unity_self, ::System::Type*  type) ;

/// @brief Method GetBehaviours, addr 0x182234200, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> GetBehaviours(int32_t  fullPathHash, int32_t  layerIndex) ;

/// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetBehaviours() ;

/// @brief Method GetBoneTransform, addr 0x1822342e0, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones  humanBoneId) ;

/// @brief Method GetBoneTransformInternal, addr 0x1822342a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransformInternal(int32_t  humanBoneId) ;

/// @brief Method GetBoneTransformInternal_Injected, addr 0x182234290, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBoneTransformInternal_Injected(::System::IntPtr  _unity_self, int32_t  humanBoneId) ;

/// @brief Method GetBool, addr 0x1822344d0, size 0x40, virtual false, abstract: false, final false
inline bool GetBool(int32_t  id) ;

/// @brief Method GetBoolID, addr 0x1822344d0, size 0x40, virtual false, abstract: false, final false
inline bool GetBoolID(int32_t  id) ;

/// @brief Method GetBoolID_Injected, addr 0x1822344c0, size 0x10, virtual false, abstract: false, final false
static inline bool GetBoolID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method GetCurrentAnimatorStateInfo, addr 0x182234510, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetFloat, addr 0x182234580, size 0x40, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  id) ;

/// @brief Method GetFloat, addr 0x182234710, size 0x10, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloatID, addr 0x182234580, size 0x40, virtual false, abstract: false, final false
inline float_t GetFloatID(int32_t  id) ;

/// @brief Method GetFloatID_Injected, addr 0x182234570, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloatID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method GetFloatString, addr 0x1822345d0, size 0x140, virtual false, abstract: false, final false
inline float_t GetFloatString(::StringW  name) ;

/// @brief Method GetFloatString_Injected, addr 0x1822345c0, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloatString_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetGoalRotation, addr 0x182234730, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetGoalRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetGoalRotation_Injected, addr 0x182234720, size 0x10, virtual false, abstract: false, final false
static inline void GetGoalRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method GetIKRotation, addr 0x182234780, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal  goal) ;

/// @brief Method GetInteger, addr 0x182234840, size 0x40, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  id) ;

/// @brief Method GetIntegerID, addr 0x182234840, size 0x40, virtual false, abstract: false, final false
inline int32_t GetIntegerID(int32_t  id) ;

/// @brief Method GetIntegerID_Injected, addr 0x182234830, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetIntegerID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method GetLayerIndex, addr 0x182234890, size 0x130, virtual false, abstract: false, final false
inline int32_t GetLayerIndex(::StringW  layerName) ;

/// @brief Method GetLayerIndex_Injected, addr 0x182234880, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetLayerIndex_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  layerName) ;

/// @brief Method GetLayerWeight, addr 0x1822349d0, size 0x40, virtual false, abstract: false, final false
inline float_t GetLayerWeight(int32_t  layerIndex) ;

/// @brief Method GetLayerWeight_Injected, addr 0x1822349c0, size 0x10, virtual false, abstract: false, final false
static inline float_t GetLayerWeight_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfo, addr 0x182234a10, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method InternalGetBehaviours, addr 0x182234b00, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours(::System::Type*  type) ;

/// @brief Method InternalGetBehavioursByKey, addr 0x182234a80, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey(int32_t  fullPathHash, int32_t  layerIndex, ::System::Type*  type) ;

/// @brief Method InternalGetBehavioursByKey_Injected, addr 0x182234a70, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehavioursByKey_Injected(::System::IntPtr  _unity_self, int32_t  fullPathHash, int32_t  layerIndex, ::System::Type*  type) ;

/// @brief Method InternalGetBehaviours_Injected, addr 0x182234af0, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::ScriptableObject>> InternalGetBehaviours_Injected(::System::IntPtr  _unity_self, ::System::Type*  type) ;

/// @brief Method IsInIKPass, addr 0x182234b70, size 0x30, virtual false, abstract: false, final false
inline bool IsInIKPass() ;

/// @brief Method IsInIKPass_Injected, addr 0x182234b60, size 0x10, virtual false, abstract: false, final false
static inline bool IsInIKPass_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method IsInTransition, addr 0x182234bb0, size 0x40, virtual false, abstract: false, final false
inline bool IsInTransition(int32_t  layerIndex) ;

/// @brief Method IsInTransition_Injected, addr 0x182234ba0, size 0x10, virtual false, abstract: false, final false
static inline bool IsInTransition_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex) ;

/// @brief Method IsParameterControlledByCurve, addr 0x182234c00, size 0x40, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(int32_t  id) ;

/// @brief Method IsParameterControlledByCurveID, addr 0x182234c00, size 0x40, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurveID(int32_t  id) ;

/// @brief Method IsParameterControlledByCurveID_Injected, addr 0x182234bf0, size 0x10, virtual false, abstract: false, final false
static inline bool IsParameterControlledByCurveID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

static inline ::UnityEngine::Animator* New_ctor() ;

/// @brief Method Play, addr 0x182234ca0, size 0x70, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play, addr 0x182234c50, size 0x50, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play_Injected, addr 0x182234c40, size 0x10, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Rebind, addr 0x182234d20, size 0x30, virtual false, abstract: false, final false
inline void Rebind() ;

/// @brief Method Rebind, addr 0x182234d50, size 0x30, virtual false, abstract: false, final false
inline void Rebind(bool  writeDefaultValues) ;

/// @brief Method Rebind_Injected, addr 0x182234d10, size 0x10, virtual false, abstract: false, final false
static inline void Rebind_Injected(::System::IntPtr  _unity_self, bool  writeDefaultValues) ;

/// @brief Method ResetTrigger, addr 0x182234d90, size 0x30, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  id) ;

/// @brief Method ResetTrigger, addr 0x182234ef0, size 0x10, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method ResetTriggerID, addr 0x182234d90, size 0x30, virtual false, abstract: false, final false
inline void ResetTriggerID(int32_t  id) ;

/// @brief Method ResetTriggerID_Injected, addr 0x182234d80, size 0x10, virtual false, abstract: false, final false
static inline void ResetTriggerID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method ResetTriggerString, addr 0x182234dd0, size 0x120, virtual false, abstract: false, final false
inline void ResetTriggerString(::StringW  name) ;

/// @brief Method ResetTriggerString_Injected, addr 0x182234dc0, size 0x10, virtual false, abstract: false, final false
static inline void ResetTriggerString_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method SetBoneLocalRotation, addr 0x182234f50, size 0xb0, virtual false, abstract: false, final false
inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBoneLocalRotationInternal, addr 0x182234f10, size 0x40, virtual false, abstract: false, final false
inline void SetBoneLocalRotationInternal(int32_t  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBoneLocalRotationInternal_Injected, addr 0x182234f00, size 0x10, virtual false, abstract: false, final false
static inline void SetBoneLocalRotationInternal_Injected(::System::IntPtr  _unity_self, int32_t  humanBoneId, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method SetBool, addr 0x182235010, size 0x40, virtual false, abstract: false, final false
inline void SetBool(int32_t  id, bool  value) ;

/// @brief Method SetBool, addr 0x182235190, size 0x10, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetBoolID, addr 0x182235010, size 0x40, virtual false, abstract: false, final false
inline void SetBoolID(int32_t  id, bool  value) ;

/// @brief Method SetBoolID_Injected, addr 0x182235000, size 0x10, virtual false, abstract: false, final false
static inline void SetBoolID_Injected(::System::IntPtr  _unity_self, int32_t  id, bool  value) ;

/// @brief Method SetBoolString, addr 0x182235060, size 0x130, virtual false, abstract: false, final false
inline void SetBoolString(::StringW  name, bool  value) ;

/// @brief Method SetBoolString_Injected, addr 0x182235050, size 0x10, virtual false, abstract: false, final false
static inline void SetBoolString_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, bool  value) ;

/// @brief Method SetFloat, addr 0x1822351b0, size 0x40, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value) ;

/// @brief Method SetFloat, addr 0x1822354a0, size 0x10, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloat, addr 0x182235490, size 0x10, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatID, addr 0x1822351b0, size 0x40, virtual false, abstract: false, final false
inline void SetFloatID(int32_t  id, float_t  value) ;

/// @brief Method SetFloatID_Injected, addr 0x1822351a0, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatID_Injected(::System::IntPtr  _unity_self, int32_t  id, float_t  value) ;

/// @brief Method SetFloatString, addr 0x182235360, size 0x130, virtual false, abstract: false, final false
inline void SetFloatString(::StringW  name, float_t  value) ;

/// @brief Method SetFloatStringDamp, addr 0x182235200, size 0x150, virtual false, abstract: false, final false
inline void SetFloatStringDamp(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatStringDamp_Injected, addr 0x1822351f0, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatStringDamp_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method SetFloatString_Injected, addr 0x182235350, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatString_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value) ;

/// @brief Method SetGoalPosition, addr 0x1822354c0, size 0x40, virtual false, abstract: false, final false
inline void SetGoalPosition(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Vector3  goalPosition) ;

/// @brief Method SetGoalPosition_Injected, addr 0x1822354b0, size 0x10, virtual false, abstract: false, final false
static inline void SetGoalPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::by_ref<::UnityEngine::Vector3>  goalPosition) ;

/// @brief Method SetGoalRotation, addr 0x182235510, size 0x40, virtual false, abstract: false, final false
inline void SetGoalRotation(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Quaternion  goalRotation) ;

/// @brief Method SetGoalRotation_Injected, addr 0x182235500, size 0x10, virtual false, abstract: false, final false
static inline void SetGoalRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, ::by_ref<::UnityEngine::Quaternion>  goalRotation) ;

/// @brief Method SetGoalWeightPosition, addr 0x182235560, size 0x40, virtual false, abstract: false, final false
inline void SetGoalWeightPosition(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightPosition_Injected, addr 0x182235550, size 0x10, virtual false, abstract: false, final false
static inline void SetGoalWeightPosition_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightRotation, addr 0x1822355b0, size 0x40, virtual false, abstract: false, final false
inline void SetGoalWeightRotation(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetGoalWeightRotation_Injected, addr 0x1822355a0, size 0x10, virtual false, abstract: false, final false
static inline void SetGoalWeightRotation_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetIKPosition, addr 0x182235690, size 0xb0, virtual false, abstract: false, final false
inline void SetIKPosition(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Vector3  goalPosition) ;

/// @brief Method SetIKPositionWeight, addr 0x1822355f0, size 0xa0, virtual false, abstract: false, final false
inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetIKRotation, addr 0x1822357e0, size 0xb0, virtual false, abstract: false, final false
inline void SetIKRotation(::UnityEngine::AvatarIKGoal  goal, ::UnityEngine::Quaternion  goalRotation) ;

/// @brief Method SetIKRotationWeight, addr 0x182235740, size 0xa0, virtual false, abstract: false, final false
inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal  goal, float_t  value) ;

/// @brief Method SetInteger, addr 0x1822358a0, size 0x40, virtual false, abstract: false, final false
inline void SetInteger(int32_t  id, int32_t  value) ;

/// @brief Method SetInteger, addr 0x182235a20, size 0x10, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerID, addr 0x1822358a0, size 0x40, virtual false, abstract: false, final false
inline void SetIntegerID(int32_t  id, int32_t  value) ;

/// @brief Method SetIntegerID_Injected, addr 0x182235890, size 0x10, virtual false, abstract: false, final false
static inline void SetIntegerID_Injected(::System::IntPtr  _unity_self, int32_t  id, int32_t  value) ;

/// @brief Method SetIntegerString, addr 0x1822358f0, size 0x130, virtual false, abstract: false, final false
inline void SetIntegerString(::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerString_Injected, addr 0x1822358e0, size 0x10, virtual false, abstract: false, final false
static inline void SetIntegerString_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, int32_t  value) ;

/// @brief Method SetLayerWeight, addr 0x182235a40, size 0x40, virtual false, abstract: false, final false
inline void SetLayerWeight(int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetLayerWeight_Injected, addr 0x182235a30, size 0x10, virtual false, abstract: false, final false
static inline void SetLayerWeight_Injected(::System::IntPtr  _unity_self, int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetLookAtPosition, addr 0x182235ac0, size 0xa0, virtual false, abstract: false, final false
inline void SetLookAtPosition(::UnityEngine::Vector3  lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal, addr 0x182235a90, size 0x30, virtual false, abstract: false, final false
inline void SetLookAtPositionInternal(::UnityEngine::Vector3  lookAtPosition) ;

/// @brief Method SetLookAtPositionInternal_Injected, addr 0x182235a80, size 0x10, virtual false, abstract: false, final false
static inline void SetLookAtPositionInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  lookAtPosition) ;

/// @brief Method SetLookAtWeight, addr 0x182235bd0, size 0xb0, virtual false, abstract: false, final false
inline void SetLookAtWeight(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetLookAtWeightInternal, addr 0x182235b70, size 0x60, virtual false, abstract: false, final false
inline void SetLookAtWeightInternal(float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetLookAtWeightInternal_Injected, addr 0x182235b60, size 0x10, virtual false, abstract: false, final false
static inline void SetLookAtWeightInternal_Injected(::System::IntPtr  _unity_self, float_t  weight, float_t  bodyWeight, float_t  headWeight, float_t  eyesWeight, float_t  clampWeight) ;

/// @brief Method SetTrigger, addr 0x182235c90, size 0x30, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  id) ;

/// @brief Method SetTrigger, addr 0x182235df0, size 0x10, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

/// @brief Method SetTriggerID, addr 0x182235c90, size 0x30, virtual false, abstract: false, final false
inline void SetTriggerID(int32_t  id) ;

/// @brief Method SetTriggerID_Injected, addr 0x182235c80, size 0x10, virtual false, abstract: false, final false
static inline void SetTriggerID_Injected(::System::IntPtr  _unity_self, int32_t  id) ;

/// @brief Method SetTriggerString, addr 0x182235cd0, size 0x120, virtual false, abstract: false, final false
inline void SetTriggerString(::StringW  name) ;

/// @brief Method SetTriggerString_Injected, addr 0x182235cc0, size 0x10, virtual false, abstract: false, final false
static inline void SetTriggerString_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method StringToHash, addr 0x182235e10, size 0x110, virtual false, abstract: false, final false
static inline int32_t StringToHash(::StringW  name) ;

/// @brief Method StringToHash_Injected, addr 0x182235e00, size 0x10, virtual false, abstract: false, final false
static inline int32_t StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_angularVelocity, addr 0x182235f30, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_angularVelocity_Injected, addr 0x182235f20, size 0x10, virtual false, abstract: false, final false
static inline void get_angularVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_applyRootMotion, addr 0x182235f80, size 0x30, virtual false, abstract: false, final false
inline bool get_applyRootMotion() ;

/// @brief Method get_applyRootMotion_Injected, addr 0x182235f70, size 0x10, virtual false, abstract: false, final false
static inline bool get_applyRootMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_avatar, addr 0x182235fc0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Avatar> get_avatar() ;

/// @brief Method get_avatar_Injected, addr 0x182235fb0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_avatar_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bodyPosition, addr 0x182236050, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPosition() ;

/// @brief Method get_bodyPositionInternal, addr 0x182236010, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPositionInternal() ;

/// @brief Method get_bodyPositionInternal_Injected, addr 0x182236000, size 0x10, virtual false, abstract: false, final false
static inline void get_bodyPositionInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_bodyRotation, addr 0x182236140, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotation() ;

/// @brief Method get_bodyRotationInternal, addr 0x182236100, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotationInternal() ;

/// @brief Method get_bodyRotationInternal_Injected, addr 0x1822360f0, size 0x10, virtual false, abstract: false, final false
static inline void get_bodyRotationInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_cullingMode, addr 0x1822361f0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorCullingMode get_cullingMode() ;

/// @brief Method get_cullingMode_Injected, addr 0x1822361e0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorCullingMode get_cullingMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_deltaPosition, addr 0x182236230, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaPosition_Injected, addr 0x182236220, size 0x10, virtual false, abstract: false, final false
static inline void get_deltaPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_deltaRotation, addr 0x182236280, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_deltaRotation() ;

/// @brief Method get_deltaRotation_Injected, addr 0x182236270, size 0x10, virtual false, abstract: false, final false
static inline void get_deltaRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_feetPivotActive, addr 0x1822362d0, size 0x30, virtual false, abstract: false, final false
inline float_t get_feetPivotActive() ;

/// @brief Method get_feetPivotActive_Injected, addr 0x1822362c0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_feetPivotActive_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fireEvents, addr 0x182236310, size 0x30, virtual false, abstract: false, final false
inline bool get_fireEvents() ;

/// @brief Method get_fireEvents_Injected, addr 0x182236300, size 0x10, virtual false, abstract: false, final false
static inline bool get_fireEvents_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_gravityWeight, addr 0x182236350, size 0x30, virtual false, abstract: false, final false
inline float_t get_gravityWeight() ;

/// @brief Method get_gravityWeight_Injected, addr 0x182236340, size 0x10, virtual false, abstract: false, final false
static inline float_t get_gravityWeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasBoundPlayables, addr 0x182236390, size 0x30, virtual false, abstract: false, final false
inline bool get_hasBoundPlayables() ;

/// @brief Method get_hasBoundPlayables_Injected, addr 0x182236380, size 0x10, virtual false, abstract: false, final false
static inline bool get_hasBoundPlayables_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasRootMotion, addr 0x1822363d0, size 0x30, virtual false, abstract: false, final false
inline bool get_hasRootMotion() ;

/// @brief Method get_hasRootMotion_Injected, addr 0x1822363c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_hasRootMotion_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_hasTransformHierarchy, addr 0x182236410, size 0x30, virtual false, abstract: false, final false
inline bool get_hasTransformHierarchy() ;

/// @brief Method get_hasTransformHierarchy_Injected, addr 0x182236400, size 0x10, virtual false, abstract: false, final false
static inline bool get_hasTransformHierarchy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_humanScale, addr 0x182236450, size 0x30, virtual false, abstract: false, final false
inline float_t get_humanScale() ;

/// @brief Method get_humanScale_Injected, addr 0x182236440, size 0x10, virtual false, abstract: false, final false
static inline float_t get_humanScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isHuman, addr 0x182236490, size 0x30, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isHuman_Injected, addr 0x182236480, size 0x10, virtual false, abstract: false, final false
static inline bool get_isHuman_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isInitialized, addr 0x1822364d0, size 0x30, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// @brief Method get_isInitialized_Injected, addr 0x1822364c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isInitialized_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isOptimizable, addr 0x182236510, size 0x30, virtual false, abstract: false, final false
inline bool get_isOptimizable() ;

/// @brief Method get_isOptimizable_Injected, addr 0x182236500, size 0x10, virtual false, abstract: false, final false
static inline bool get_isOptimizable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_keepAnimatorStateOnDisable, addr 0x182236550, size 0x30, virtual false, abstract: false, final false
inline bool get_keepAnimatorStateOnDisable() ;

/// @brief Method get_keepAnimatorStateOnDisable_Injected, addr 0x182236540, size 0x10, virtual false, abstract: false, final false
static inline bool get_keepAnimatorStateOnDisable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_layerCount, addr 0x182236590, size 0x30, virtual false, abstract: false, final false
inline int32_t get_layerCount() ;

/// @brief Method get_layerCount_Injected, addr 0x182236580, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_layerCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_layersAffectMassCenter, addr 0x1822365d0, size 0x30, virtual false, abstract: false, final false
inline bool get_layersAffectMassCenter() ;

/// @brief Method get_layersAffectMassCenter_Injected, addr 0x1822365c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_layersAffectMassCenter_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_leftFeetBottomHeight, addr 0x182236610, size 0x30, virtual false, abstract: false, final false
inline float_t get_leftFeetBottomHeight() ;

/// @brief Method get_leftFeetBottomHeight_Injected, addr 0x182236600, size 0x10, virtual false, abstract: false, final false
static inline float_t get_leftFeetBottomHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_logWarnings, addr 0x182236650, size 0x30, virtual false, abstract: false, final false
inline bool get_logWarnings() ;

/// @brief Method get_logWarnings_Injected, addr 0x182236640, size 0x10, virtual false, abstract: false, final false
static inline bool get_logWarnings_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_parameters, addr 0x182236690, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters() ;

/// @brief Method get_parameters_Injected, addr 0x182236680, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pivotPosition, addr 0x1822366d0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pivotPosition() ;

/// @brief Method get_pivotPosition_Injected, addr 0x1822366c0, size 0x10, virtual false, abstract: false, final false
static inline void get_pivotPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_pivotWeight, addr 0x182236720, size 0x30, virtual false, abstract: false, final false
inline float_t get_pivotWeight() ;

/// @brief Method get_pivotWeight_Injected, addr 0x182236710, size 0x10, virtual false, abstract: false, final false
static inline float_t get_pivotWeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rightFeetBottomHeight, addr 0x182236760, size 0x30, virtual false, abstract: false, final false
inline float_t get_rightFeetBottomHeight() ;

/// @brief Method get_rightFeetBottomHeight_Injected, addr 0x182236750, size 0x10, virtual false, abstract: false, final false
static inline float_t get_rightFeetBottomHeight_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rootPosition, addr 0x1822367a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rootPosition() ;

/// @brief Method get_rootPosition_Injected, addr 0x182236790, size 0x10, virtual false, abstract: false, final false
static inline void get_rootPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_rootRotation, addr 0x1822367f0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rootRotation() ;

/// @brief Method get_rootRotation_Injected, addr 0x1822367e0, size 0x10, virtual false, abstract: false, final false
static inline void get_rootRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  ret) ;

/// @brief Method get_runtimeAnimatorController, addr 0x182236840, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController() ;

/// @brief Method get_runtimeAnimatorController_Injected, addr 0x182236830, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_runtimeAnimatorController_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_speed, addr 0x182236890, size 0x30, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_speed_Injected, addr 0x182236880, size 0x10, virtual false, abstract: false, final false
static inline float_t get_speed_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_stabilizeFeet, addr 0x1822368d0, size 0x30, virtual false, abstract: false, final false
inline bool get_stabilizeFeet() ;

/// @brief Method get_stabilizeFeet_Injected, addr 0x1822368c0, size 0x10, virtual false, abstract: false, final false
static inline bool get_stabilizeFeet_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_updateMode, addr 0x182236910, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorUpdateMode get_updateMode() ;

/// @brief Method get_updateMode_Injected, addr 0x182236900, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorUpdateMode get_updateMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocity, addr 0x182236950, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_velocity_Injected, addr 0x182236940, size 0x10, virtual false, abstract: false, final false
static inline void get_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_applyRootMotion, addr 0x1822369a0, size 0x30, virtual false, abstract: false, final false
inline void set_applyRootMotion(bool  value) ;

/// @brief Method set_applyRootMotion_Injected, addr 0x182236990, size 0x10, virtual false, abstract: false, final false
static inline void set_applyRootMotion_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_avatar, addr 0x1822369e0, size 0x50, virtual false, abstract: false, final false
inline void set_avatar(::UnityEngine::Avatar*  value) ;

/// @brief Method set_avatar_Injected, addr 0x1822369d0, size 0x10, virtual false, abstract: false, final false
static inline void set_avatar_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_bodyPosition, addr 0x182236a70, size 0xa0, virtual false, abstract: false, final false
inline void set_bodyPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyPositionInternal, addr 0x182236a40, size 0x30, virtual false, abstract: false, final false
inline void set_bodyPositionInternal(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyPositionInternal_Injected, addr 0x182236a30, size 0x10, virtual false, abstract: false, final false
static inline void set_bodyPositionInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_bodyRotation, addr 0x182236b50, size 0xa0, virtual false, abstract: false, final false
inline void set_bodyRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_bodyRotationInternal, addr 0x182236b20, size 0x30, virtual false, abstract: false, final false
inline void set_bodyRotationInternal(::UnityEngine::Quaternion  value) ;

/// @brief Method set_bodyRotationInternal_Injected, addr 0x182236b10, size 0x10, virtual false, abstract: false, final false
static inline void set_bodyRotationInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_cullingMode, addr 0x182236c00, size 0x30, virtual false, abstract: false, final false
inline void set_cullingMode(::UnityEngine::AnimatorCullingMode  value) ;

/// @brief Method set_cullingMode_Injected, addr 0x182236bf0, size 0x10, virtual false, abstract: false, final false
static inline void set_cullingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AnimatorCullingMode  value) ;

/// @brief Method set_feetPivotActive, addr 0x182236c40, size 0x40, virtual false, abstract: false, final false
inline void set_feetPivotActive(float_t  value) ;

/// @brief Method set_feetPivotActive_Injected, addr 0x182236c30, size 0x10, virtual false, abstract: false, final false
static inline void set_feetPivotActive_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_fireEvents, addr 0x182236c90, size 0x30, virtual false, abstract: false, final false
inline void set_fireEvents(bool  value) ;

/// @brief Method set_fireEvents_Injected, addr 0x182236c80, size 0x10, virtual false, abstract: false, final false
static inline void set_fireEvents_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_keepAnimatorStateOnDisable, addr 0x182236cd0, size 0x30, virtual false, abstract: false, final false
inline void set_keepAnimatorStateOnDisable(bool  value) ;

/// @brief Method set_keepAnimatorStateOnDisable_Injected, addr 0x182236cc0, size 0x10, virtual false, abstract: false, final false
static inline void set_keepAnimatorStateOnDisable_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_layersAffectMassCenter, addr 0x182236d10, size 0x30, virtual false, abstract: false, final false
inline void set_layersAffectMassCenter(bool  value) ;

/// @brief Method set_layersAffectMassCenter_Injected, addr 0x182236d00, size 0x10, virtual false, abstract: false, final false
static inline void set_layersAffectMassCenter_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_logWarnings, addr 0x182236d50, size 0x30, virtual false, abstract: false, final false
inline void set_logWarnings(bool  value) ;

/// @brief Method set_logWarnings_Injected, addr 0x182236d40, size 0x10, virtual false, abstract: false, final false
static inline void set_logWarnings_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_rootPosition, addr 0x182236d90, size 0x30, virtual false, abstract: false, final false
inline void set_rootPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_rootPosition_Injected, addr 0x182236d80, size 0x10, virtual false, abstract: false, final false
static inline void set_rootPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rootRotation, addr 0x182236dd0, size 0x30, virtual false, abstract: false, final false
inline void set_rootRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rootRotation_Injected, addr 0x182236dc0, size 0x10, virtual false, abstract: false, final false
static inline void set_rootRotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method set_speed, addr 0x182236e10, size 0x40, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_speed_Injected, addr 0x182236e00, size 0x10, virtual false, abstract: false, final false
static inline void set_speed_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_stabilizeFeet, addr 0x182236e60, size 0x30, virtual false, abstract: false, final false
inline void set_stabilizeFeet(bool  value) ;

/// @brief Method set_stabilizeFeet_Injected, addr 0x182236e50, size 0x10, virtual false, abstract: false, final false
static inline void set_stabilizeFeet_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_updateMode, addr 0x182236ea0, size 0x30, virtual false, abstract: false, final false
inline void set_updateMode(::UnityEngine::AnimatorUpdateMode  value) ;

/// @brief Method set_updateMode_Injected, addr 0x182236e90, size 0x10, virtual false, abstract: false, final false
static inline void set_updateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AnimatorUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Animator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Animator(Animator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Animator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Animator(Animator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animator) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
