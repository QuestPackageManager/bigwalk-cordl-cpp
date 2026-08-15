#pragma once
// IWYU pragma private; include "Animancer/ControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerState)
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct ControllerState_ActionOnStop;
}
namespace Animancer {
class ControllerState_DampedFloatParameter;
}
namespace Animancer {
class ControllerState_ITransition;
}
namespace Animancer {
struct ControllerState_ParameterID;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimatorClipInfo;
}
namespace UnityEngine {
struct AnimatorControllerParameterType;
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
class Object;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Forward declare root types
namespace Animancer {
struct ControllerState_ActionOnStop;
}
namespace Animancer {
class ControllerState;
}
namespace Animancer {
class ControllerState_DampedFloatParameter;
}
namespace Animancer {
class ControllerState_ITransition;
}
namespace Animancer {
struct ControllerState_ParameterID;
}
// Write type traits
MARK_VAL_T(::Animancer::ControllerState_ActionOnStop);
MARK_REF_T(::Animancer::ControllerState*);
MARK_REF_T(::Animancer::ControllerState_DampedFloatParameter*);
MARK_REF_T(::Animancer::ControllerState_ITransition*);
MARK_VAL_T(::Animancer::ControllerState_ParameterID);
DEFINE_IL2CPP_CLASS(::Animancer::ControllerState_ActionOnStop, "Animancer", "ControllerState/ActionOnStop");
DEFINE_IL2CPP_CLASS(::Animancer::ControllerState*, "Animancer", "ControllerState");
DEFINE_IL2CPP_CLASS(::Animancer::ControllerState_DampedFloatParameter*, "Animancer", "ControllerState/DampedFloatParameter");
DEFINE_IL2CPP_CLASS(::Animancer::ControllerState_ITransition*, "Animancer", "ControllerState/ITransition");
DEFINE_IL2CPP_CLASS(::Animancer::ControllerState_ParameterID, "Animancer", "ControllerState/ParameterID");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.ControllerState/ParameterID
struct CORDL_TYPE ControllerState_ParameterID {
public:
// Declarations
/// @brief Method ToString, addr 0x1802f1750, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ValidateHasParameter, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ValidateHasParameter(::UnityEngine::RuntimeAnimatorController*  controller, ::UnityEngine::AnimatorControllerParameterType  type) ;

/// @brief Method .ctor, addr 0x1802f1840, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash) ;

/// @brief Method .ctor, addr 0x1802f1800, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x1802f17c0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  hash) ;

/// @brief Method op_Implicit, addr 0x1802f18d0, size 0x180, virtual false, abstract: false, final false
static inline ::Animancer::ControllerState_ParameterID op_Implicit___Animancer__ControllerState_ParameterID(int32_t  hash) ;

/// @brief Method op_Implicit, addr 0x1802f1890, size 0x40, virtual false, abstract: false, final false
static inline ::Animancer::ControllerState_ParameterID op_Implicit___Animancer__ControllerState_ParameterID(::StringW  name) ;

/// @brief Method op_Implicit, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::Animancer::ControllerState_ParameterID  parameter) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControllerState_ParameterID() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Hash", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerState_ParameterID(::StringW  Name, int32_t  Hash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18089};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Hash, offset: 0x8, size: 0x4, def value: None
 int32_t  Hash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ControllerState_ParameterID, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState_ParameterID, Hash) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Animancer::ControllerState_ParameterID) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.ControllerState::ParameterID, System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ControllerState/DampedFloatParameter
class CORDL_TYPE ControllerState_DampedFloatParameter : public ::System::Object {
public:
// Declarations
/// @brief Field currentValue, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) float_t  currentValue;

/// @brief Field maxSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field parameter, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_parameter, put=__cordl_internal_set_parameter)) ::Animancer::ControllerState_ParameterID  parameter;

/// @brief Field smoothTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothTime, put=__cordl_internal_set_smoothTime)) float_t  smoothTime;

/// @brief Field targetValue, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetValue, put=__cordl_internal_set_targetValue)) float_t  targetValue;

/// @brief Field velocity, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) float_t  velocity;

/// @brief Method Apply, addr 0x1802ec9f0, size 0x90, virtual false, abstract: false, final false
inline void Apply(::Animancer::ControllerState*  controller) ;

/// @brief Method Apply, addr 0x1802ec960, size 0x90, virtual false, abstract: false, final false
inline void Apply(::Animancer::ControllerState*  controller, float_t  deltaTime) ;

static inline ::Animancer::ControllerState_DampedFloatParameter* New_ctor(::Animancer::ControllerState_ParameterID  parameter, float_t  smoothTime, float_t  defaultValue, float_t  maxSpeed) ;

constexpr float_t const& __cordl_internal_get_currentValue() const;

constexpr float_t& __cordl_internal_get_currentValue() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::Animancer::ControllerState_ParameterID const& __cordl_internal_get_parameter() const;

constexpr ::Animancer::ControllerState_ParameterID& __cordl_internal_get_parameter() ;

constexpr float_t const& __cordl_internal_get_smoothTime() const;

constexpr float_t& __cordl_internal_get_smoothTime() ;

constexpr float_t const& __cordl_internal_get_targetValue() const;

constexpr float_t& __cordl_internal_get_targetValue() ;

constexpr float_t const& __cordl_internal_get_velocity() const;

constexpr float_t& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_currentValue(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_parameter(::Animancer::ControllerState_ParameterID  value) ;

constexpr void __cordl_internal_set_smoothTime(float_t  value) ;

constexpr void __cordl_internal_set_targetValue(float_t  value) ;

constexpr void __cordl_internal_set_velocity(float_t  value) ;

/// @brief Method .ctor, addr 0x1802eca80, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Animancer::ControllerState_ParameterID  parameter, float_t  smoothTime, float_t  defaultValue, float_t  maxSpeed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerState_DampedFloatParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerState_DampedFloatParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerState_DampedFloatParameter(ControllerState_DampedFloatParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerState_DampedFloatParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerState_DampedFloatParameter(ControllerState_DampedFloatParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18088};

/// @brief Field parameter, offset: 0x10, size: 0x10, def value: None
 ::Animancer::ControllerState_ParameterID  ___parameter;

/// @brief Field smoothTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___smoothTime;

/// @brief Field currentValue, offset: 0x24, size: 0x4, def value: None
 float_t  ___currentValue;

/// @brief Field targetValue, offset: 0x28, size: 0x4, def value: None
 float_t  ___targetValue;

/// @brief Field maxSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field velocity, offset: 0x30, size: 0x4, def value: None
 float_t  ___velocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ControllerState_DampedFloatParameter, ___parameter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState_DampedFloatParameter, ___smoothTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState_DampedFloatParameter, ___currentValue) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState_DampedFloatParameter, ___targetValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState_DampedFloatParameter, ___maxSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState_DampedFloatParameter, ___velocity) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::ControllerState_DampedFloatParameter) == 0x38, "Size mismatch!");

} // namespace end def Animancer
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ControllerState/ITransition
class CORDL_TYPE ControllerState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ControllerState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ControllerState*>* i___Animancer__ITransition_1___Animancer__ControllerState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ControllerState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerState_ITransition(ControllerState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18090};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.ControllerState/ActionOnStop
struct CORDL_TYPE ControllerState_ActionOnStop {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerState_ActionOnStop_Unwrapped
enum struct __ControllerState_ActionOnStop_Unwrapped : int32_t {
__E_DefaultState = static_cast<int32_t>(0x0),
__E_RewindTime = static_cast<int32_t>(0x1),
__E_Continue = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerState_ActionOnStop_Unwrapped () const noexcept {
return static_cast<__ControllerState_ActionOnStop_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerState_ActionOnStop() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControllerState_ActionOnStop(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(2)
static ::Animancer::ControllerState_ActionOnStop const Continue;

/// @brief Field DefaultState value: I32(0)
static ::Animancer::ControllerState_ActionOnStop const DefaultState;

/// @brief Field RewindTime value: I32(1)
static ::Animancer::ControllerState_ActionOnStop const RewindTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18091};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ControllerState_ActionOnStop, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::ControllerState_ActionOnStop) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerState, Animancer.ControllerState::ActionOnStop, UnityEngine.Animations.AnimatorControllerPlayable, UnityEngine.AnimatorControllerParameter
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ControllerState
class CORDL_TYPE ControllerState : public ::Animancer::AnimancerState {
public:
// Declarations
using ActionOnStop = ::Animancer::ControllerState_ActionOnStop;

using DampedFloatParameter = ::Animancer::ControllerState_DampedFloatParameter;

using ITransition = ::Animancer::ControllerState_ITransition;

using ParameterID = ::Animancer::ControllerState_ParameterID;

 __declspec(property(get=get_ActionsOnStop, put=set_ActionsOnStop)) ::ArrayW<::Animancer::ControllerState_ActionOnStop>  ActionsOnStop;

 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_Controller, put=set_Controller)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  Controller;

 __declspec(property(get=get_DefaultStateHashes, put=set_DefaultStateHashes)) ::ArrayW<int32_t>  DefaultStateHashes;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_MainObject, put=set_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_Playable)) ::UnityEngine::Animations::AnimatorControllerPlayable  Playable;

 __declspec(property(get=get_RawTime, put=set_RawTime)) double_t  RawTime;

/// @brief Field _ActionsOnStop, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActionsOnStop, put=__cordl_internal_set__ActionsOnStop)) ::ArrayW<::Animancer::ControllerState_ActionOnStop>  _ActionsOnStop;

/// @brief Field _Controller, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller, put=__cordl_internal_set__Controller)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  _Controller;

/// @brief Field <DefaultStateHashes>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultStateHashes_k__BackingField, put=__cordl_internal_set__DefaultStateHashes_k__BackingField)) ::ArrayW<int32_t>  _DefaultStateHashes_k__BackingField;

/// @brief Field _Parameters, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parameters, put=__cordl_internal_set__Parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  _Parameters;

/// @brief Field _Playable, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__Playable, put=__cordl_internal_set__Playable)) ::UnityEngine::Animations::AnimatorControllerPlayable  _Playable;

/// @brief Field _SmoothingVelocities, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SmoothingVelocities, put=__cordl_internal_set__SmoothingVelocities)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  _SmoothingVelocities;

 __declspec(property(get=get_layerCount)) int32_t  layerCount;

 __declspec(property(get=get_parameterCount)) int32_t  parameterCount;

 __declspec(property(get=get_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  parameters;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ControllerState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ControllerState*>*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.ControllerState>.CopyFrom, addr 0x1802ea9c0, size 0x2f0, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_ControllerState__CopyFrom(::Animancer::ControllerState*  copyFrom) ;

/// @brief Method ApplyActionsOnStop, addr 0x1802eacb0, size 0x160, virtual false, abstract: false, final false
inline void ApplyActionsOnStop() ;

/// @brief Method AssertParameterValue, addr 0x1802eae10, size 0x40, virtual false, abstract: false, final false
inline void AssertParameterValue(float_t  value, ::StringW  parameterName) ;

/// @brief Method Clone, addr 0x1802eae50, size 0xa0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method CopyIKFlags, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void CopyIKFlags(::Animancer::AnimancerNode*  copyFrom) ;

/// @brief Method CreatePlayable, addr 0x1802eaef0, size 0x80, virtual true, abstract: false, final false
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable) ;

/// @brief Method CrossFade, addr 0x1802eb0f0, size 0x80, virtual false, abstract: false, final false
inline void CrossFade(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method CrossFade, addr 0x1802eb070, size 0x80, virtual false, abstract: false, final false
inline void CrossFade(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x1802eaf70, size 0x80, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method CrossFadeInFixedTime, addr 0x1802eaff0, size 0x80, virtual false, abstract: false, final false
inline void CrossFadeInFixedTime(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  fixedTime) ;

/// @brief Method Destroy, addr 0x1802eb170, size 0xe0, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method GatherAnimationClips, addr 0x1802eb250, size 0x60, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GatherDefaultStates, addr 0x1802eb2b0, size 0x120, virtual false, abstract: false, final false
inline void GatherDefaultStates() ;

/// @brief Method GetAnimatorTransitionInfo, addr 0x1802eb3d0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t  layerIndex) ;

/// @brief Method GetBool, addr 0x1802eb430, size 0x30, virtual false, abstract: false, final false
inline bool GetBool(int32_t  id) ;

/// @brief Method GetBool, addr 0x1802eb400, size 0x30, virtual false, abstract: false, final false
inline bool GetBool(::StringW  name) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x1802eb490, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetCurrentAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorClipInfo, addr 0x1802eb4c0, size 0x30, virtual false, abstract: false, final false
inline void GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetCurrentAnimatorClipInfoCount, addr 0x1802eb460, size 0x30, virtual false, abstract: false, final false
inline int32_t GetCurrentAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetCurrentAnimatorStateInfo, addr 0x1802eb4f0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetFadeDuration, addr 0x1802eb520, size 0x40, virtual false, abstract: false, final false
static inline float_t GetFadeDuration(float_t  fadeDuration) ;

/// @brief Method GetFloat, addr 0x1802eb590, size 0x30, virtual false, abstract: false, final false
inline float_t GetFloat(int32_t  id) ;

/// @brief Method GetFloat, addr 0x1802eb560, size 0x30, virtual false, abstract: false, final false
inline float_t GetFloat(::StringW  name) ;

/// @brief Method GetInteger, addr 0x1802eb5c0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetInteger(int32_t  id) ;

/// @brief Method GetInteger, addr 0x1802eb5f0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetInteger(::StringW  name) ;

/// @brief Method GetLayerCount, addr 0x1802eb620, size 0x30, virtual false, abstract: false, final false
inline int32_t GetLayerCount() ;

/// @brief Method GetLayerIndex, addr 0x1802eb650, size 0x30, virtual false, abstract: false, final false
inline int32_t GetLayerIndex(::StringW  layerName) ;

/// @brief Method GetLayerName, addr 0x1802eb680, size 0x30, virtual false, abstract: false, final false
inline ::StringW GetLayerName(int32_t  layerIndex) ;

/// @brief Method GetLayerWeight, addr 0x1802eb6b0, size 0x30, virtual false, abstract: false, final false
inline float_t GetLayerWeight(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x1802eb740, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> GetNextAnimatorClipInfo(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorClipInfo, addr 0x1802eb710, size 0x30, virtual false, abstract: false, final false
inline void GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips) ;

/// @brief Method GetNextAnimatorClipInfoCount, addr 0x1802eb6e0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetNextAnimatorClipInfoCount(int32_t  layerIndex) ;

/// @brief Method GetNextAnimatorStateInfo, addr 0x1802eb770, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t  layerIndex) ;

/// @brief Method GetParameter, addr 0x1802eb7e0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameter* GetParameter(int32_t  index) ;

/// @brief Method GetParameterCount, addr 0x1802eb7a0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetParameterCount() ;

/// @brief Method GetParameterHash, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetParameterHash(int32_t  index) ;

/// @brief Method GetStateInfo, addr 0x1802eb810, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AnimatorStateInfo GetStateInfo(int32_t  layerIndex) ;

/// @brief Method HasState, addr 0x1802eb880, size 0x30, virtual false, abstract: false, final false
inline bool HasState(int32_t  layerIndex, int32_t  stateID) ;

/// @brief Method IsInTransition, addr 0x1802eb8b0, size 0x30, virtual false, abstract: false, final false
inline bool IsInTransition(int32_t  layerIndex) ;

/// @brief Method IsParameterControlledByCurve, addr 0x1802eb910, size 0x30, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(int32_t  id) ;

/// @brief Method IsParameterControlledByCurve, addr 0x1802eb8e0, size 0x30, virtual false, abstract: false, final false
inline bool IsParameterControlledByCurve(::StringW  name) ;

static inline ::Animancer::ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller) ;

static inline ::Animancer::ControllerState* New_ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

/// @brief Method Play, addr 0x1802eb9d0, size 0x30, virtual false, abstract: false, final false
inline void Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method Play, addr 0x1802eb9a0, size 0x30, virtual false, abstract: false, final false
inline void Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime) ;

/// @brief Method PlayInFixedTime, addr 0x1802eb940, size 0x30, virtual false, abstract: false, final false
inline void PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime) ;

/// @brief Method PlayInFixedTime, addr 0x1802eb970, size 0x30, virtual false, abstract: false, final false
inline void PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime) ;

/// @brief Method RecreatePlayable, addr 0x1802eba00, size 0x300, virtual true, abstract: false, final false
inline void RecreatePlayable() ;

/// @brief Method ResetTrigger, addr 0x1802ebd00, size 0x30, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  id) ;

/// @brief Method ResetTrigger, addr 0x1802ebd30, size 0x30, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  name) ;

/// @brief Method SetBool, addr 0x1802ebd90, size 0x30, virtual false, abstract: false, final false
inline void SetBool(int32_t  id, bool  value) ;

/// @brief Method SetBool, addr 0x1802ebd60, size 0x30, virtual false, abstract: false, final false
inline void SetBool(::StringW  name, bool  value) ;

/// @brief Method SetFloat, addr 0x1802ebdf0, size 0x150, virtual false, abstract: false, final false
inline float_t SetFloat(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed) ;

/// @brief Method SetFloat, addr 0x1802ebf40, size 0x170, virtual false, abstract: false, final false
inline float_t SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed) ;

/// @brief Method SetFloat, addr 0x1802ec0b0, size 0x30, virtual false, abstract: false, final false
inline void SetFloat(int32_t  id, float_t  value) ;

/// @brief Method SetFloat, addr 0x1802ebdc0, size 0x30, virtual false, abstract: false, final false
inline void SetFloat(::StringW  name, float_t  value) ;

/// @brief Method SetInteger, addr 0x1802ec110, size 0x30, virtual false, abstract: false, final false
inline void SetInteger(int32_t  id, int32_t  value) ;

/// @brief Method SetInteger, addr 0x1802ec0e0, size 0x30, virtual false, abstract: false, final false
inline void SetInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetLayerWeight, addr 0x1802ec140, size 0x30, virtual false, abstract: false, final false
inline void SetLayerWeight(int32_t  layerIndex, float_t  weight) ;

/// @brief Method SetTrigger, addr 0x1802ec1a0, size 0x30, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  id) ;

/// @brief Method SetTrigger, addr 0x1802ec170, size 0x30, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  name) ;

/// @brief Method Stop, addr 0x1802ec1d0, size 0x230, virtual true, abstract: false, final false
inline void Stop() ;

constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop> const& __cordl_internal_get__ActionsOnStop() const;

constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop>& __cordl_internal_get__ActionsOnStop() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get__Controller() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get__Controller() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__DefaultStateHashes_k__BackingField() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__DefaultStateHashes_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*> const& __cordl_internal_get__Parameters() const;

constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*>& __cordl_internal_get__Parameters() ;

constexpr ::UnityEngine::Animations::AnimatorControllerPlayable const& __cordl_internal_get__Playable() const;

constexpr ::UnityEngine::Animations::AnimatorControllerPlayable& __cordl_internal_get__Playable() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get__SmoothingVelocities() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get__SmoothingVelocities() ;

constexpr void __cordl_internal_set__ActionsOnStop(::ArrayW<::Animancer::ControllerState_ActionOnStop>  value) ;

constexpr void __cordl_internal_set__Controller(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set__DefaultStateHashes_k__BackingField(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__Parameters(::ArrayW<::UnityEngine::AnimatorControllerParameter*>  value) ;

constexpr void __cordl_internal_set__Playable(::UnityEngine::Animations::AnimatorControllerPlayable  value) ;

constexpr void __cordl_internal_set__SmoothingVelocities(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

/// @brief Method .ctor, addr 0x1802ec400, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller) ;

/// @brief Method .ctor, addr 0x1802ec470, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RuntimeAnimatorController*  controller, ::ArrayW<::Animancer::ControllerState_ActionOnStop>  actionsOnStop) ;

/// @brief Method get_ActionsOnStop, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Animancer::ControllerState_ActionOnStop> get_ActionsOnStop() ;

/// @brief Method get_ApplyAnimatorIK, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_Controller, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> get_Controller() ;

/// @brief Method get_DefaultStateHashes, addr 0x1802ec4d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_DefaultStateHashes() ;

/// @brief Method get_IsLooping, addr 0x1802ec4e0, size 0x80, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_Length, addr 0x1802ec560, size 0x80, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MainObject, addr 0x1802ec4c0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method get_ParameterCount, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_Playable, addr 0x1802ec5e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Animations::AnimatorControllerPlayable get_Playable() ;

/// @brief Method get_RawTime, addr 0x1802ec5f0, size 0xb0, virtual true, abstract: false, final false
inline double_t get_RawTime() ;

/// @brief Method get_layerCount, addr 0x1802eb620, size 0x30, virtual false, abstract: false, final false
inline int32_t get_layerCount() ;

/// @brief Method get_parameterCount, addr 0x1802eb7a0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_parameterCount() ;

/// @brief Method get_parameters, addr 0x1802ec6a0, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> get_parameters() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ControllerState*>* i___Animancer__ICopyable_1___Animancer__ControllerState__() noexcept;

/// @brief Method set_ActionsOnStop, addr 0x1802ec7a0, size 0x50, virtual false, abstract: false, final false
inline void set_ActionsOnStop(::ArrayW<::Animancer::ControllerState_ActionOnStop>  value) ;

/// @brief Method set_ApplyAnimatorIK, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_Controller, addr 0x1802ec7f0, size 0x20, virtual false, abstract: false, final false
inline void set_Controller(::UnityEngine::RuntimeAnimatorController*  value) ;

/// @brief Method set_DefaultStateHashes, addr 0x1802ec810, size 0x20, virtual false, abstract: false, final false
inline void set_DefaultStateHashes(::ArrayW<int32_t>  value) ;

/// @brief Method set_MainObject, addr 0x1802ec830, size 0x60, virtual true, abstract: false, final false
inline void set_MainObject(::UnityEngine::Object*  value) ;

/// @brief Method set_RawTime, addr 0x1802ec890, size 0xd0, virtual true, abstract: false, final false
inline void set_RawTime(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerState(ControllerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerState(ControllerState const& ) = delete;

/// @brief Field DefaultFadeDuration offset 0xffffffff size 0x4
static constexpr float_t  DefaultFadeDuration{static_cast<float_t>(-1.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18092};

/// @brief Field _Controller, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ____Controller;

/// @brief Field _Playable, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Animations::AnimatorControllerPlayable  ____Playable;

/// @brief Field _ActionsOnStop, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::Animancer::ControllerState_ActionOnStop>  ____ActionsOnStop;

/// @brief Field <DefaultStateHashes>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____DefaultStateHashes_k__BackingField;

/// @brief Field _Parameters, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  ____Parameters;

/// @brief Field _SmoothingVelocities, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ____SmoothingVelocities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ControllerState, ____Controller) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState, ____Playable) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState, ____ActionsOnStop) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState, ____DefaultStateHashes_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState, ____Parameters) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Animancer::ControllerState, ____SmoothingVelocities) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Animancer::ControllerState) == 0xb8, "Size mismatch!");

} // namespace end def Animancer
