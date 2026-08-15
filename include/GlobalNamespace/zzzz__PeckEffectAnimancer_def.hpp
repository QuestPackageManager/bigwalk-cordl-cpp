#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAnimancer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectAnimancer)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
class AnimancerFrameHelper;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectAnimancer_Outcome;
}
namespace GlobalNamespace {
struct PeckEffectAnimancer_PlaybackType;
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
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectAnimancer_PlaybackType;
}
namespace GlobalNamespace {
class PeckEffectAnimancer;
}
namespace GlobalNamespace {
struct PeckEffectAnimancer_Outcome;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectAnimancer_PlaybackType);
MARK_REF_T(::GlobalNamespace::PeckEffectAnimancer*);
MARK_VAL_T(::GlobalNamespace::PeckEffectAnimancer_Outcome);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAnimancer_PlaybackType, "", "PeckEffectAnimancer/PlaybackType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAnimancer*, "", "PeckEffectAnimancer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAnimancer_Outcome, "", "PeckEffectAnimancer/Outcome");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectAnimancer/PlaybackType
struct CORDL_TYPE PeckEffectAnimancer_PlaybackType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectAnimancer_PlaybackType_Unwrapped
enum struct __PeckEffectAnimancer_PlaybackType_Unwrapped : int32_t {
__E_PlayFoward = static_cast<int32_t>(0x0),
__E_PlayBackward = static_cast<int32_t>(0x1),
__E_JumpStart = static_cast<int32_t>(0x2),
__E_JumpEnd = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectAnimancer_PlaybackType_Unwrapped () const noexcept {
return static_cast<__PeckEffectAnimancer_PlaybackType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAnimancer_PlaybackType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectAnimancer_PlaybackType(int32_t  value__) noexcept;

/// @brief Field JumpEnd value: I32(3)
static ::GlobalNamespace::PeckEffectAnimancer_PlaybackType const JumpEnd;

/// @brief Field JumpStart value: I32(2)
static ::GlobalNamespace::PeckEffectAnimancer_PlaybackType const JumpStart;

/// @brief Field PlayBackward value: I32(1)
static ::GlobalNamespace::PeckEffectAnimancer_PlaybackType const PlayBackward;

/// @brief Field PlayFoward value: I32(0)
static ::GlobalNamespace::PeckEffectAnimancer_PlaybackType const PlayFoward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer_PlaybackType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAnimancer_PlaybackType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAnimancer::PlaybackType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectAnimancer/Outcome
struct CORDL_TYPE PeckEffectAnimancer_Outcome {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAnimancer_Outcome() ;

// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: None }, CppParam { name: "playbackType", ty: "::GlobalNamespace::PeckEffectAnimancer_PlaybackType", modifiers: "", def_value: None }, CppParam { name: "onEndSwitch", ty: "::UnityW<::GlobalNamespace::PeckSwitch>", modifiers: "", def_value: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "resume", ty: "bool", modifiers: "", def_value: None }]
constexpr PeckEffectAnimancer_Outcome(::UnityW<::UnityEngine::AnimationClip>  clip, ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  playbackType, ::UnityW<::GlobalNamespace::PeckSwitch>  onEndSwitch, float_t  speed, bool  resume) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5360};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field clip, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  clip;

/// @brief Field playbackType, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  playbackType;

/// @brief Field onEndSwitch, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  onEndSwitch;

/// @brief Field speed, offset: 0x18, size: 0x4, def value: None
 float_t  speed;

/// @brief Field resume, offset: 0x1c, size: 0x1, def value: None
 bool  resume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer_Outcome, clip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer_Outcome, playbackType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer_Outcome, onEndSwitch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer_Outcome, speed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer_Outcome, resume) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAnimancer_Outcome) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAnimancer::Outcome, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAnimancer
class CORDL_TYPE PeckEffectAnimancer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Outcome = ::GlobalNamespace::PeckEffectAnimancer_Outcome;

using PlaybackType = ::GlobalNamespace::PeckEffectAnimancer_PlaybackType;

/// @brief Field _currentState, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) int32_t  _currentState;

/// @brief Field animancerComponent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field animancerFrameHelper, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerFrameHelper, put=__cordl_internal_set_animancerFrameHelper)) ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  animancerFrameHelper;

/// @brief Field hasInitialSate, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasInitialSate, put=__cordl_internal_set_hasInitialSate)) bool  hasInitialSate;

/// @brief Field initialState, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialState, put=__cordl_internal_set_initialState)) int32_t  initialState;

/// @brief Field layer, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) int32_t  layer;

/// @brief Field logVerbose, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field outcomes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_outcomes, put=__cordl_internal_set_outcomes)) ::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome>  outcomes;

/// @brief Field peckSystemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_peckSystemReference, put=__cordl_internal_set_peckSystemReference)) ::GlobalNamespace::PeckSystemReference  peckSystemReference;

/// @brief Method Awake, addr 0x180447280, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectAnimancer* New_ctor() ;

/// @brief Method OnFinish, addr 0x180447360, size 0xb0, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method Peck, addr 0x180447410, size 0x60, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  trackedPeckState) ;

/// @brief Method ProcessOutcome, addr 0x180447470, size 0x3d0, virtual false, abstract: false, final false
inline void ProcessOutcome(::GlobalNamespace::PeckEffectAnimancer_Outcome  outcome, bool  isInitial) ;

/// @brief Method RequestStop, addr 0x180447840, size 0x110, virtual false, abstract: false, final false
inline void RequestStop() ;

constexpr int32_t const& __cordl_internal_get__currentState() const;

constexpr int32_t& __cordl_internal_get__currentState() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& __cordl_internal_get_animancerFrameHelper() const;

constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& __cordl_internal_get_animancerFrameHelper() ;

constexpr bool const& __cordl_internal_get_hasInitialSate() const;

constexpr bool& __cordl_internal_get_hasInitialSate() ;

constexpr int32_t const& __cordl_internal_get_initialState() const;

constexpr int32_t& __cordl_internal_get_initialState() ;

constexpr int32_t const& __cordl_internal_get_layer() const;

constexpr int32_t& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome> const& __cordl_internal_get_outcomes() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome>& __cordl_internal_get_outcomes() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_peckSystemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_peckSystemReference() ;

constexpr void __cordl_internal_set__currentState(int32_t  value) ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value) ;

constexpr void __cordl_internal_set_hasInitialSate(bool  value) ;

constexpr void __cordl_internal_set_initialState(int32_t  value) ;

constexpr void __cordl_internal_set_layer(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_outcomes(::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome>  value) ;

constexpr void __cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAnimancer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAnimancer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAnimancer(PeckEffectAnimancer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAnimancer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAnimancer(PeckEffectAnimancer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5361};

/// @brief Field peckSystemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___peckSystemReference;

/// @brief Field animancerComponent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field animancerFrameHelper, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimancerFrameHelper>  ___animancerFrameHelper;

/// @brief Field layer, offset: 0x58, size: 0x4, def value: None
 int32_t  ___layer;

/// @brief Field outcomes, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome>  ___outcomes;

/// @brief Field hasInitialSate, offset: 0x68, size: 0x1, def value: None
 bool  ___hasInitialSate;

/// @brief Field initialState, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___initialState;

/// @brief Field logVerbose, offset: 0x70, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _currentState, offset: 0x74, size: 0x4, def value: None
 int32_t  ____currentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___peckSystemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___animancerComponent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___animancerFrameHelper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___layer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___outcomes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___hasInitialSate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___initialState) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ___logVerbose) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAnimancer, ____currentState) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAnimancer) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
