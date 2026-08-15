#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAnimancer.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAnimancer_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "GlobalNamespace/zzzz__AnimancerFrameHelper_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAnimancer_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectAnimancer_PlaybackType::PeckEffectAnimancer_PlaybackType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAnimancer_PlaybackType::PeckEffectAnimancer_PlaybackType()   {
}
constexpr ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  GlobalNamespace::PeckEffectAnimancer_PlaybackType::PlayFoward{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  GlobalNamespace::PeckEffectAnimancer_PlaybackType::PlayBackward{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  GlobalNamespace::PeckEffectAnimancer_PlaybackType::JumpStart{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  GlobalNamespace::PeckEffectAnimancer_PlaybackType::JumpEnd{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "clip", ty: "::UnityW<::UnityEngine::AnimationClip>", modifiers: "", def_value: Some("{}") }, CppParam { name: "playbackType", ty: "::GlobalNamespace::PeckEffectAnimancer_PlaybackType", modifiers: "", def_value: Some("{}") }, CppParam { name: "onEndSwitch", ty: "::UnityW<::GlobalNamespace::PeckSwitch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "resume", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectAnimancer_Outcome::PeckEffectAnimancer_Outcome(::UnityW<::UnityEngine::AnimationClip>  clip, ::GlobalNamespace::PeckEffectAnimancer_PlaybackType  playbackType, ::UnityW<::GlobalNamespace::PeckSwitch>  onEndSwitch, float_t  speed, bool  resume) noexcept  {
this->clip = clip;
this->playbackType = playbackType;
this->onEndSwitch = onEndSwitch;
this->speed = speed;
this->resume = resume;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAnimancer_Outcome::PeckEffectAnimancer_Outcome()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimancer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimancer::*)()>(&::GlobalNamespace::PeckEffectAnimancer::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180447280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimancer.ProcessOutcome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimancer::*)(::GlobalNamespace::PeckEffectAnimancer_Outcome, bool)>(&::GlobalNamespace::PeckEffectAnimancer::ProcessOutcome)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x180447470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"ProcessOutcome", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectAnimancer_Outcome>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimancer.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimancer::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckEffectAnimancer::Peck)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180447410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimancer.OnFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimancer::*)()>(&::GlobalNamespace::PeckEffectAnimancer::OnFinish)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180447360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"OnFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimancer.RequestStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimancer::*)()>(&::GlobalNamespace::PeckEffectAnimancer::RequestStop)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180447840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"RequestStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAnimancer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAnimancer::*)()>(&::GlobalNamespace::PeckEffectAnimancer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_peckSystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_peckSystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSystemReference;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_peckSystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSystemReference = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_animancerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_animancerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerComponent;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerComponent = value;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper>& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_animancerFrameHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr ::UnityW<::GlobalNamespace::AnimancerFrameHelper> const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_animancerFrameHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animancerFrameHelper;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_animancerFrameHelper(::UnityW<::GlobalNamespace::AnimancerFrameHelper>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animancerFrameHelper = value;
}
constexpr int32_t& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr int32_t const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome>& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_outcomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomes;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome> const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_outcomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomes;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_outcomes(::ArrayW<::GlobalNamespace::PeckEffectAnimancer_Outcome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomes = value;
}
constexpr bool& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_hasInitialSate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialSate;
}
constexpr bool const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_hasInitialSate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialSate;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_hasInitialSate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInitialSate = value;
}
constexpr int32_t& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_initialState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialState;
}
constexpr int32_t const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_initialState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialState;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_initialState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialState = value;
}
constexpr bool& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr int32_t& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr int32_t const& GlobalNamespace::PeckEffectAnimancer::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void GlobalNamespace::PeckEffectAnimancer::__cordl_internal_set__currentState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
inline void GlobalNamespace::PeckEffectAnimancer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAnimancer::ProcessOutcome(::GlobalNamespace::PeckEffectAnimancer_Outcome  outcome, bool  isInitial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"ProcessOutcome", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectAnimancer_Outcome>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outcome, isInitial);
}
inline void GlobalNamespace::PeckEffectAnimancer::Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  trackedPeckState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext, trackedPeckState);
}
inline void GlobalNamespace::PeckEffectAnimancer::OnFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"OnFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAnimancer::RequestStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {"RequestStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAnimancer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAnimancer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectAnimancer* GlobalNamespace::PeckEffectAnimancer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAnimancer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAnimancer::PeckEffectAnimancer()   {
}
