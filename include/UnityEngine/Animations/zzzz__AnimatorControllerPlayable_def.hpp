#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorControllerPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorControllerPlayable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
struct AnimatorTransitionInfo;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimatorControllerPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimatorControllerPlayable, "UnityEngine.Animations", "AnimatorControllerPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimatorControllerPlayable
struct CORDL_TYPE AnimatorControllerPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimatorControllerPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0x182231fa0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimatorControllerPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::RuntimeAnimatorController*  controller) ;

/// @brief Method CreateHandle, addr 0x182231f00, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::RuntimeAnimatorController*  controller) ;

/// @brief Method CreateHandleInternal, addr 0x182231ed0, size 0x30, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::RuntimeAnimatorController*  controller, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected, addr 0x182231ec0, size 0x10, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  controller, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CrossFade, addr 0x1822320f0, size 0x60, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  transitionDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method CrossFade, addr 0x1822320d0, size 0x20, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x182232060, size 0x70, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  transitionDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x182232050, size 0x10, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method CrossFadeInFixedTimeInternal, addr 0x182232050, size 0x10, virtual false, abstract: false, final false
static inline void CrossFadeInFixedTimeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method CrossFadeInternal, addr 0x1822320d0, size 0x20, virtual false, abstract: false, final false
static inline void CrossFadeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, float_t  transitionDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Equals, addr 0x18222f240, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimatorControllerPlayable  other) ;

/// @brief Method GetAnimatorClipInfoCountInternal, addr 0x182232150, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetAnimatorClipInfoCountInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, bool  current) ;

/// @brief Method GetAnimatorClipInfoInternal, addr 0x182232160, size 0x10, virtual false, abstract: false, final false
static inline void GetAnimatorClipInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, bool  isCurrent, ::System::Object*  clips) ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x182232180, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t  layerIndex) ;

/// @brief Method GetAnimatorTransitionInfoInternal, addr 0x182232180, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetAnimatorTransitionInfoInternal_Injected, addr 0x182232170, size 0x10, virtual false, abstract: false, final false
static inline void GetAnimatorTransitionInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorTransitionInfo>  ret) ;

/// @brief Method GetBool, addr 0x1822321f0, size 0x10, virtual false, abstract: false, final false
inline bool GetBool(int32_t  id) ;

/// @brief Method GetBool, addr 0x182232330, size 0x20, virtual false, abstract: false, final false
inline bool GetBool(::StringW  name) ;

/// @brief Method GetBoolID, addr 0x1822321f0, size 0x10, virtual false, abstract: false, final false
static inline bool GetBoolID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id) ;

/// @brief Method GetBoolString, addr 0x182232210, size 0x120, virtual false, abstract: false, final false
static inline bool GetBoolString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name) ;

/// @brief Method GetBoolString_Injected, addr 0x182232200, size 0x10, virtual false, abstract: false, final false
static inline bool GetBoolString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x182232470, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x182232430, size 0x40, virtual false, abstract: false, final false
inline void GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x182232350, size 0x20, virtual false, abstract: false, final false
inline int32_t GetCurrentAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfoInternal, addr 0x182232380, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfoInternal_Injected, addr 0x182232370, size 0x10, virtual false, abstract: false, final false
static inline void GetCurrentAnimatorClipInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetCurrentAnimatorStateInfo, addr 0x1822324a0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorStateInfoInternal, addr 0x1822324a0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorStateInfoInternal_Injected, addr 0x182232490, size 0x10, virtual false, abstract: false, final false
static inline void GetCurrentAnimatorStateInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>  ret) ;

/// @brief Method GetFloat, addr 0x182232510, size 0x10, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  id) ;

/// @brief Method GetFloat, addr 0x182232650, size 0x20, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetFloatID, addr 0x182232510, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloatID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id) ;

/// @brief Method GetFloatString, addr 0x182232530, size 0x120, virtual false, abstract: false, final false
static inline float_t GetFloatString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name) ;

/// @brief Method GetFloatString_Injected, addr 0x182232520, size 0x10, virtual false, abstract: false, final false
static inline float_t GetFloatString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method GetInteger, addr 0x182232670, size 0x10, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  id) ;

/// @brief Method GetInteger, addr 0x1822327c0, size 0x20, virtual false, abstract: false, final false
inline int32_t GetInteger(::StringW  name) ;

/// @brief Method GetIntegerID, addr 0x182232670, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetIntegerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id) ;

/// @brief Method GetIntegerString, addr 0x182232690, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetIntegerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name) ;

/// @brief Method GetIntegerString_Injected, addr 0x182232680, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetIntegerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetLayerCount, addr 0x1822327e0, size 0x20, virtual false, abstract: false, final false
inline int32_t GetLayerCount() ;

/// @brief Method GetLayerCountInternal, addr 0x1822327e0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetLayerCountInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method GetLayerIndex, addr 0x182232930, size 0x20, virtual false, abstract: false, final false
inline int32_t GetLayerIndex(::StringW  layerName) ;

/// @brief Method GetLayerIndexInternal, addr 0x182232810, size 0x120, virtual false, abstract: false, final false
static inline int32_t GetLayerIndexInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  layerName) ;

/// @brief Method GetLayerIndexInternal_Injected, addr 0x182232800, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetLayerIndexInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  layerName) ;

/// @brief Method GetLayerName, addr 0x1822329f0, size 0x20, virtual false, abstract: false, final false
inline ::StringW GetLayerName(int32_t  layerIndex) ;

/// @brief Method GetLayerNameInternal, addr 0x182232960, size 0x90, virtual false, abstract: false, final false
static inline ::StringW GetLayerNameInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetLayerNameInternal_Injected, addr 0x182232950, size 0x10, virtual false, abstract: false, final false
static inline void GetLayerNameInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetLayerWeight, addr 0x182232a10, size 0x20, virtual false, abstract: false, final false
inline float_t GetLayerWeight(int32_t  layerIndex) ;

/// @brief Method GetLayerWeightInternal, addr 0x182232a10, size 0x20, virtual false, abstract: false, final false
static inline float_t GetLayerWeightInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x182232b10, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x182232b30, size 0x40, virtual false, abstract: false, final false
inline void GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetNextAnimatorClipInfoCount, addr 0x182232a30, size 0x20, virtual false, abstract: false, final false
inline int32_t GetNextAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfoInternal, addr 0x182232a60, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfoInternal_Injected, addr 0x182232a50, size 0x10, virtual false, abstract: false, final false
static inline void GetNextAnimatorClipInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetNextAnimatorStateInfo, addr 0x182232b80, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfoInternal, addr 0x182232b80, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfoInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfoInternal_Injected, addr 0x182232b70, size 0x10, virtual false, abstract: false, final false
static inline void GetNextAnimatorStateInfoInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, ::by_ref<::UnityEngine::AnimatorStateInfo>  ret) ;

/// @brief Method GetParameter, addr 0x182232c20, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t  index) ;

/// @brief Method GetParameterCount, addr 0x182232bf0, size 0x20, virtual false, abstract: false, final false
inline int32_t GetParameterCount() ;

/// @brief Method GetParameterCountInternal, addr 0x182232bf0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetParameterCountInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method GetParameterInternal, addr 0x182232c10, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimatorControllerParameter* GetParameterInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  index) ;

/// @brief Method HasState, addr 0x182232c60, size 0x20, virtual false, abstract: false, final false
inline bool HasState(int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method HasStateInternal, addr 0x182232c60, size 0x20, virtual false, abstract: false, final false
static inline bool HasStateInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method IsInTransition, addr 0x182232c80, size 0x20, virtual false, abstract: false, final false
inline bool IsInTransition(int32_t  layerIndex) ;

/// @brief Method IsInTransitionInternal, addr 0x182232c80, size 0x20, virtual false, abstract: false, final false
static inline bool IsInTransitionInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex) ;

/// @brief Method IsParameterControlledByCurve, addr 0x182232ca0, size 0x10, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(int32_t  id) ;

/// @brief Method IsParameterControlledByCurve, addr 0x182232de0, size 0x20, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(::StringW  name) ;

/// @brief Method IsParameterControlledByCurveID, addr 0x182232ca0, size 0x10, virtual false, abstract: false, final false
static inline bool IsParameterControlledByCurveID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id) ;

/// @brief Method IsParameterControlledByCurveString, addr 0x182232cc0, size 0x120, virtual false, abstract: false, final false
static inline bool IsParameterControlledByCurveString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name) ;

/// @brief Method IsParameterControlledByCurveString_Injected, addr 0x182232cb0, size 0x10, virtual false, abstract: false, final false
static inline bool IsParameterControlledByCurveString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Play, addr 0x182232e90, size 0x70, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play, addr 0x182232e80, size 0x10, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method PlayInFixedTime, addr 0x182232e20, size 0x60, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTime, addr 0x182232e00, size 0x20, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTimeInternal, addr 0x182232e00, size 0x20, virtual false, abstract: false, final false
static inline void PlayInFixedTimeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInternal, addr 0x182232e80, size 0x10, virtual false, abstract: false, final false
static inline void PlayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method ResetTrigger, addr 0x182232f00, size 0x10, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  id) ;

/// @brief Method ResetTrigger, addr 0x182233030, size 0x20, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method ResetTriggerID, addr 0x182232f00, size 0x10, virtual false, abstract: false, final false
static inline void ResetTriggerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id) ;

/// @brief Method ResetTriggerString, addr 0x182232f20, size 0x110, virtual false, abstract: false, final false
static inline void ResetTriggerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name) ;

/// @brief Method ResetTriggerString_Injected, addr 0x182232f10, size 0x10, virtual false, abstract: false, final false
static inline void ResetTriggerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method SetBool, addr 0x182233050, size 0x10, virtual false, abstract: false, final false
inline void SetBool(int32_t  id, bool  value) ;

/// @brief Method SetBool, addr 0x182233190, size 0x20, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetBoolID, addr 0x182233050, size 0x10, virtual false, abstract: false, final false
static inline void SetBoolID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id, bool  value) ;

/// @brief Method SetBoolString, addr 0x182233070, size 0x120, virtual false, abstract: false, final false
static inline void SetBoolString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name, bool  value) ;

/// @brief Method SetBoolString_Injected, addr 0x182233060, size 0x10, virtual false, abstract: false, final false
static inline void SetBoolString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, bool  value) ;

/// @brief Method SetFloat, addr 0x1822331b0, size 0x10, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value) ;

/// @brief Method SetFloat, addr 0x1822332f0, size 0x20, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetFloatID, addr 0x1822331b0, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id, float_t  value) ;

/// @brief Method SetFloatString, addr 0x1822331d0, size 0x120, virtual false, abstract: false, final false
static inline void SetFloatString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name, float_t  value) ;

/// @brief Method SetFloatString_Injected, addr 0x1822331c0, size 0x10, virtual false, abstract: false, final false
static inline void SetFloatString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, float_t  value) ;

/// @brief Method SetHandle, addr 0x182233310, size 0xc0, virtual false, abstract: false, final false
inline void SetHandle(::UnityEngine::Playables::PlayableHandle  handle) ;

/// @brief Method SetInteger, addr 0x1822333d0, size 0x10, virtual false, abstract: false, final false
inline void SetInteger(int32_t  id, int32_t  value) ;

/// @brief Method SetInteger, addr 0x182233500, size 0x20, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerID, addr 0x1822333d0, size 0x10, virtual false, abstract: false, final false
static inline void SetIntegerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id, int32_t  value) ;

/// @brief Method SetIntegerString, addr 0x1822333f0, size 0x110, virtual false, abstract: false, final false
static inline void SetIntegerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name, int32_t  value) ;

/// @brief Method SetIntegerString_Injected, addr 0x1822333e0, size 0x10, virtual false, abstract: false, final false
static inline void SetIntegerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, int32_t  value) ;

/// @brief Method SetLayerWeight, addr 0x182233520, size 0x20, virtual false, abstract: false, final false
inline void SetLayerWeight(int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetLayerWeightInternal, addr 0x182233520, size 0x20, virtual false, abstract: false, final false
static inline void SetLayerWeightInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetTrigger, addr 0x182233540, size 0x10, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  id) ;

/// @brief Method SetTrigger, addr 0x182233660, size 0x20, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

/// @brief Method SetTriggerID, addr 0x182233540, size 0x10, virtual false, abstract: false, final false
static inline void SetTriggerID(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, int32_t  id) ;

/// @brief Method SetTriggerString, addr 0x182233560, size 0x100, virtual false, abstract: false, final false
static inline void SetTriggerString(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::StringW  name) ;

/// @brief Method SetTriggerString_Injected, addr 0x182233550, size 0x10, virtual false, abstract: false, final false
static inline void SetTriggerString_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method StringToHash, addr 0x182233690, size 0x110, virtual false, abstract: false, final false
static inline int32_t StringToHash(::StringW  name) ;

/// @brief Method StringToHash_Injected, addr 0x182233680, size 0x10, virtual false, abstract: false, final false
static inline int32_t StringToHash_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method .ctor, addr 0x1822338a0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Animations::AnimatorControllerPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimatorControllerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimatorControllerPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Implicit, addr 0x18222f460, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimatorControllerPlayable  playable) ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimatorControllerPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatorControllerPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimatorControllerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimatorControllerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimatorControllerPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
