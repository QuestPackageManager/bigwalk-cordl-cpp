#pragma once
// IWYU pragma private; include "Animancer/HybridAnimancerComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__NamedAnimancerComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HybridAnimancerComponent)
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ControllerState;
}
namespace Animancer {
class ControllerTransition;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimatorClipInfo;
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
class StateMachineBehaviour;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class HybridAnimancerComponent;
}
// Write type traits
MARK_REF_T(::Animancer::HybridAnimancerComponent*);
DEFINE_IL2CPP_CLASS(::Animancer::HybridAnimancerComponent*, "Animancer", "HybridAnimancerComponent");
// Dependencies Animancer.NamedAnimancerComponent
namespace Animancer {
// Is value type: false
// CS Name: Animancer.HybridAnimancerComponent
class CORDL_TYPE HybridAnimancerComponent : public ::Animancer::NamedAnimancerComponent {
public:
// Declarations
 __declspec(property(get=get_Controller)) ::Animancer::ControllerTransition*  Controller;

 __declspec(property(get=get_ControllerPlayable)) ::UnityEngine::Animations::AnimatorControllerPlayable  ControllerPlayable;

/// @brief Field _Controller, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller, put=__cordl_internal_set__Controller)) ::Animancer::ControllerTransition*  _Controller;

 __declspec(property(get=get_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_applyRootMotion, put=set_applyRootMotion)) bool  applyRootMotion;

 __declspec(property(get=get_avatar, put=set_avatar)) ::UnityW<::UnityEngine::Avatar>  avatar;

 __declspec(property(get=get_bodyPosition, put=set_bodyPosition)) ::UnityEngine::Vector3  bodyPosition;

 __declspec(property(get=get_bodyRotation, put=set_bodyRotation)) ::UnityEngine::Quaternion  bodyRotation;

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

 __declspec(property(get=get_parameterCount)) int32_t  parameterCount;

 __declspec(property(get=get_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  parameters;

 __declspec(property(get=get_pivotPosition)) ::UnityEngine::Vector3  pivotPosition;

 __declspec(property(get=get_pivotWeight)) float_t  pivotWeight;

 __declspec(property(get=get_playableGraph)) ::UnityEngine::Playables::PlayableGraph  playableGraph;

 __declspec(property(get=get_rightFeetBottomHeight)) float_t  rightFeetBottomHeight;

 __declspec(property(get=get_rootPosition, put=set_rootPosition)) ::UnityEngine::Vector3  rootPosition;

 __declspec(property(get=get_rootRotation, put=set_rootRotation)) ::UnityEngine::Quaternion  rootRotation;

 __declspec(property(get=get_runtimeAnimatorController, put=set_runtimeAnimatorController)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  runtimeAnimatorController;

 __declspec(property(get=get_speed, put=set_speed)) float_t  speed;

 __declspec(property(get=get_stabilizeFeet, put=set_stabilizeFeet)) bool  stabilizeFeet;

 __declspec(property(get=get_updateMode, put=set_updateMode)) ::UnityEngine::AnimatorUpdateMode  updateMode;

 __declspec(property(get=get_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method ApplyBuiltinRootMotion, addr 0x1802ee620, size 0x20, virtual false, abstract: false, final false
inline void ApplyBuiltinRootMotion() ;

/// @brief Method CrossFade, addr 0x1802ee9f0, size 0x260, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* CrossFade(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method CrossFade, addr 0x1802ee930, size 0xc0, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x1802ee700, size 0x230, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* CrossFadeInFixedTime(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x1802ee640, size 0xc0, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method GatherAnimationClips, addr 0x1802eec50, size 0x40, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x1802eec90, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t  layerIndex) ;

/// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetBehaviour() ;

/// @brief Method GetBehaviours, addr 0x1802eed00, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> GetBehaviours(int32_t  fullPathHash, int32_t  layerIndex) ;

/// @brief Method GetBehaviours, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetBehaviours() ;

/// @brief Method GetBoneTransform, addr 0x1802eed20, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::UnityEngine::HumanBodyBones  humanBoneId) ;

/// @brief Method GetBool, addr 0x1802eed40, size 0x60, virtual false, abstract: false, final false
inline bool GetBool(int32_t  id) ;

/// @brief Method GetBool, addr 0x1802eeda0, size 0x60, virtual false, abstract: false, final false
inline bool GetBool(::StringW  name) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x1802eee60, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x1802eeec0, size 0x60, virtual false, abstract: false, final false
inline void GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x1802eee00, size 0x60, virtual false, abstract: false, final false
inline int32_t GetCurrentAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorStateInfo, addr 0x1802eef20, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetFloat, addr 0x1802eeff0, size 0x60, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  id) ;

/// @brief Method GetFloat, addr 0x1802eef90, size 0x60, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetInteger, addr 0x1802ef050, size 0x60, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  id) ;

/// @brief Method GetInteger, addr 0x1802ef0b0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetInteger(::StringW  name) ;

/// @brief Method GetLayerCount, addr 0x1802ef110, size 0x50, virtual false, abstract: false, final false
inline int32_t GetLayerCount() ;

/// @brief Method GetLayerIndex, addr 0x1802ef160, size 0x60, virtual false, abstract: false, final false
inline int32_t GetLayerIndex(::StringW  layerName) ;

/// @brief Method GetLayerName, addr 0x1802ef1c0, size 0x60, virtual false, abstract: false, final false
inline ::StringW GetLayerName(int32_t  layerIndex) ;

/// @brief Method GetLayerWeight, addr 0x1802ef220, size 0x60, virtual false, abstract: false, final false
inline float_t GetLayerWeight(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x1802ef2e0, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x1802ef340, size 0x60, virtual false, abstract: false, final false
inline void GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetNextAnimatorClipInfoCount, addr 0x1802ef280, size 0x60, virtual false, abstract: false, final false
inline int32_t GetNextAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfo, addr 0x1802ef3a0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetParameter, addr 0x1802ef460, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t  index) ;

/// @brief Method GetParameterCount, addr 0x1802ef410, size 0x50, virtual false, abstract: false, final false
inline int32_t GetParameterCount() ;

/// @brief Method HasState, addr 0x1802ef4c0, size 0x60, virtual false, abstract: false, final false
inline bool HasState(int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method IsInTransition, addr 0x1802ef520, size 0x60, virtual false, abstract: false, final false
inline bool IsInTransition(int32_t  layerIndex) ;

/// @brief Method IsParameterControlledByCurve, addr 0x1802ef5e0, size 0x60, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(int32_t  id) ;

/// @brief Method IsParameterControlledByCurve, addr 0x1802ef580, size 0x60, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(::StringW  name) ;

static inline ::Animancer::HybridAnimancerComponent* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802ef640, size 0x60, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInitializePlayable, addr 0x1802ef6a0, size 0x30, virtual true, abstract: false, final false
inline void OnInitializePlayable() ;

/// @brief Method Play, addr 0x1802efa70, size 0x210, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play, addr 0x1802efa00, size 0x70, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method PlayController, addr 0x1802ef6d0, size 0xe0, virtual false, abstract: false, final false
inline ::Animancer::ControllerState* PlayController() ;

/// @brief Method PlayInFixedTime, addr 0x1802ef7b0, size 0x1e0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTime, addr 0x1802ef990, size 0x70, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method Rebind, addr 0x1802efc80, size 0x20, virtual false, abstract: false, final false
inline void Rebind() ;

/// @brief Method ResetTrigger, addr 0x1802efca0, size 0x60, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  id) ;

/// @brief Method ResetTrigger, addr 0x1802efd00, size 0x60, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method SetBoneLocalRotation, addr 0x1802efd60, size 0x30, virtual false, abstract: false, final false
inline void SetBoneLocalRotation(::UnityEngine::HumanBodyBones  humanBoneId, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetBool, addr 0x1802efe00, size 0x70, virtual false, abstract: false, final false
inline void SetBool(int32_t  id, bool  value) ;

/// @brief Method SetBool, addr 0x1802efd90, size 0x70, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetFloat, addr 0x1802efe70, size 0x80, virtual false, abstract: false, final false
inline float_t SetFloat(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed) ;

/// @brief Method SetFloat, addr 0x1802effd0, size 0x70, virtual false, abstract: false, final false
inline float_t SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed) ;

/// @brief Method SetFloat, addr 0x1802efef0, size 0x70, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value) ;

/// @brief Method SetFloat, addr 0x1802eff60, size 0x70, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetInteger, addr 0x1802f0040, size 0x60, virtual false, abstract: false, final false
inline void SetInteger(int32_t  id, int32_t  value) ;

/// @brief Method SetInteger, addr 0x1802f00a0, size 0x70, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetLayerWeight, addr 0x1802f0110, size 0x70, virtual false, abstract: false, final false
inline void SetLayerWeight(int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetTrigger, addr 0x1802f01e0, size 0x60, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  id) ;

/// @brief Method SetTrigger, addr 0x1802f0180, size 0x60, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

constexpr ::Animancer::ControllerTransition* const& __cordl_internal_get__Controller() const;

constexpr ::Animancer::ControllerTransition*& __cordl_internal_get__Controller() ;

constexpr void __cordl_internal_set__Controller(::Animancer::ControllerTransition*  value) ;

/// @brief Method .ctor, addr 0x1802f0240, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Controller, addr 0x1802f0290, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Animancer::ControllerTransition*> get_Controller() ;

/// @brief Method get_ControllerPlayable, addr 0x1802f0250, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Animations::AnimatorControllerPlayable get_ControllerPlayable() ;

/// @brief Method get_angularVelocity, addr 0x1802f02a0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method get_applyRootMotion, addr 0x1802f02d0, size 0x20, virtual false, abstract: false, final false
inline bool get_applyRootMotion() ;

/// @brief Method get_avatar, addr 0x1802f02f0, size 0x20, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Avatar> get_avatar() ;

/// @brief Method get_bodyPosition, addr 0x1802f0310, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_bodyPosition() ;

/// @brief Method get_bodyRotation, addr 0x1802f0340, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_bodyRotation() ;

/// @brief Method get_cullingMode, addr 0x1802f0370, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorCullingMode get_cullingMode() ;

/// @brief Method get_deltaPosition, addr 0x1802f0390, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaRotation, addr 0x1802f03c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_deltaRotation() ;

/// @brief Method get_feetPivotActive, addr 0x1802f03f0, size 0x20, virtual false, abstract: false, final false
inline float_t get_feetPivotActive() ;

/// @brief Method get_fireEvents, addr 0x1802f0410, size 0x20, virtual false, abstract: false, final false
inline bool get_fireEvents() ;

/// @brief Method get_gravityWeight, addr 0x1802f0430, size 0x20, virtual false, abstract: false, final false
inline float_t get_gravityWeight() ;

/// @brief Method get_hasBoundPlayables, addr 0x1802f0450, size 0x20, virtual false, abstract: false, final false
inline bool get_hasBoundPlayables() ;

/// @brief Method get_hasRootMotion, addr 0x1802f0470, size 0x20, virtual false, abstract: false, final false
inline bool get_hasRootMotion() ;

/// @brief Method get_hasTransformHierarchy, addr 0x1802f0490, size 0x20, virtual false, abstract: false, final false
inline bool get_hasTransformHierarchy() ;

/// @brief Method get_humanScale, addr 0x1802f04b0, size 0x20, virtual false, abstract: false, final false
inline float_t get_humanScale() ;

/// @brief Method get_isHuman, addr 0x1802f04d0, size 0x20, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isInitialized, addr 0x1802f04f0, size 0x20, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// @brief Method get_isOptimizable, addr 0x1802f0510, size 0x20, virtual false, abstract: false, final false
inline bool get_isOptimizable() ;

/// @brief Method get_keepAnimatorStateOnDisable, addr 0x1802f0530, size 0x20, virtual false, abstract: false, final false
inline bool get_keepAnimatorStateOnDisable() ;

/// @brief Method get_layerCount, addr 0x1802ef110, size 0x50, virtual false, abstract: false, final false
inline int32_t get_layerCount() ;

/// @brief Method get_layersAffectMassCenter, addr 0x1802f0550, size 0x20, virtual false, abstract: false, final false
inline bool get_layersAffectMassCenter() ;

/// @brief Method get_leftFeetBottomHeight, addr 0x1802f0570, size 0x20, virtual false, abstract: false, final false
inline float_t get_leftFeetBottomHeight() ;

/// @brief Method get_logWarnings, addr 0x1802f0590, size 0x20, virtual false, abstract: false, final false
inline bool get_logWarnings() ;

/// @brief Method get_parameterCount, addr 0x1802ef410, size 0x50, virtual false, abstract: false, final false
inline int32_t get_parameterCount() ;

/// @brief Method get_parameters, addr 0x1802f05b0, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters() ;

/// @brief Method get_pivotPosition, addr 0x1802f06d0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_pivotPosition() ;

/// @brief Method get_pivotWeight, addr 0x1802f0700, size 0x20, virtual false, abstract: false, final false
inline float_t get_pivotWeight() ;

/// @brief Method get_playableGraph, addr 0x1802f0720, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_playableGraph() ;

/// @brief Method get_rightFeetBottomHeight, addr 0x1802f0760, size 0x20, virtual false, abstract: false, final false
inline float_t get_rightFeetBottomHeight() ;

/// @brief Method get_rootPosition, addr 0x1802f0780, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_rootPosition() ;

/// @brief Method get_rootRotation, addr 0x1802f07b0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rootRotation() ;

/// @brief Method get_runtimeAnimatorController, addr 0x1802f07e0, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_runtimeAnimatorController() ;

/// @brief Method get_speed, addr 0x1802f0810, size 0x20, virtual false, abstract: false, final false
inline float_t get_speed() ;

/// @brief Method get_stabilizeFeet, addr 0x1802f0830, size 0x20, virtual false, abstract: false, final false
inline bool get_stabilizeFeet() ;

/// @brief Method get_updateMode, addr 0x1802dd940, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorUpdateMode get_updateMode() ;

/// @brief Method get_velocity, addr 0x1802f0850, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_velocity() ;

/// @brief Method set_applyRootMotion, addr 0x1802f0880, size 0x20, virtual false, abstract: false, final false
inline void set_applyRootMotion(bool  value) ;

/// @brief Method set_avatar, addr 0x1802f08a0, size 0x20, virtual false, abstract: false, final false
inline void set_avatar(::UnityEngine::Avatar*  value) ;

/// @brief Method set_bodyPosition, addr 0x1802f08c0, size 0x40, virtual false, abstract: false, final false
inline void set_bodyPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_bodyRotation, addr 0x1802f0900, size 0x30, virtual false, abstract: false, final false
inline void set_bodyRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_cullingMode, addr 0x1802f0930, size 0x20, virtual false, abstract: false, final false
inline void set_cullingMode(::UnityEngine::AnimatorCullingMode  value) ;

/// @brief Method set_feetPivotActive, addr 0x1802f0950, size 0x20, virtual false, abstract: false, final false
inline void set_feetPivotActive(float_t  value) ;

/// @brief Method set_fireEvents, addr 0x1802f0970, size 0x20, virtual false, abstract: false, final false
inline void set_fireEvents(bool  value) ;

/// @brief Method set_keepAnimatorStateOnDisable, addr 0x1802f0990, size 0x20, virtual false, abstract: false, final false
inline void set_keepAnimatorStateOnDisable(bool  value) ;

/// @brief Method set_layersAffectMassCenter, addr 0x1802f09b0, size 0x20, virtual false, abstract: false, final false
inline void set_layersAffectMassCenter(bool  value) ;

/// @brief Method set_logWarnings, addr 0x1802f09d0, size 0x20, virtual false, abstract: false, final false
inline void set_logWarnings(bool  value) ;

/// @brief Method set_rootPosition, addr 0x1802f09f0, size 0x40, virtual false, abstract: false, final false
inline void set_rootPosition(::UnityEngine::Vector3  value) ;

/// @brief Method set_rootRotation, addr 0x1802f0a30, size 0x30, virtual false, abstract: false, final false
inline void set_rootRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_runtimeAnimatorController, addr 0x1802f0a60, size 0x40, virtual false, abstract: false, final false
inline void set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController*  value) ;

/// @brief Method set_speed, addr 0x1802f0aa0, size 0x20, virtual false, abstract: false, final false
inline void set_speed(float_t  value) ;

/// @brief Method set_stabilizeFeet, addr 0x1802f0ac0, size 0x20, virtual false, abstract: false, final false
inline void set_stabilizeFeet(bool  value) ;

/// @brief Method set_updateMode, addr 0x1802f0ae0, size 0x20, virtual false, abstract: false, final false
inline void set_updateMode(::UnityEngine::AnimatorUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HybridAnimancerComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HybridAnimancerComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HybridAnimancerComponent(HybridAnimancerComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HybridAnimancerComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HybridAnimancerComponent(HybridAnimancerComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18072};

/// @brief Field _Controller, offset: 0x40, size: 0x8, def value: None
 ::Animancer::ControllerTransition*  ____Controller;

/// @brief Size padding 0x50 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::HybridAnimancerComponent, ____Controller) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::HybridAnimancerComponent) == 0x50, "Size mismatch!");

} // namespace end def Animancer
