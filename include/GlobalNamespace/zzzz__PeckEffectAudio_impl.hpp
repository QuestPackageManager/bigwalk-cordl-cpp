#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAudio.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckTransformReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAudioAction_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAudio_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "audioAction", ty: "::UnityW<::GlobalNamespace::PeckEffectAudioAction>", modifiers: "", def_value: Some("{}") }, CppParam { name: "turnOnBehaviours", ty: "::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "turnOffBehaviours", ty: "::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome::PeckEffectAudio_PeckAudioOutcome(::UnityW<::GlobalNamespace::PeckEffectAudioAction>  audioAction, ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  turnOnBehaviours, ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  turnOffBehaviours) noexcept  {
this->audioAction = audioAction;
this->turnOnBehaviours = turnOnBehaviours;
this->turnOffBehaviours = turnOffBehaviours;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome::PeckEffectAudio_PeckAudioOutcome()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::*)()>(&::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio>& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio> const& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PeckEffectAudio>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_get_outcomeForThisState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomeForThisState;
}
constexpr ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome const& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_get_outcomeForThisState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomeForThisState;
}
constexpr void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_set_outcomeForThisState(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomeForThisState = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
inline void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0* GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0::PeckEffectAudio___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::*)()>(&::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1._Peck_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::*)(double_t)>(&::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::_Peck_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18045a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>(),
                        {"<Peck>b__0", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1._Peck_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::*)(double_t)>(&::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::_Peck_b__1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18045a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>(),
                        {"<Peck>b__1", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckEffectAudioAction_ActionItem*& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::GlobalNamespace::PeckEffectAudioAction_ActionItem* const& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::__cordl_internal_set_action(::GlobalNamespace::PeckEffectAudioAction_ActionItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
constexpr ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0* const& GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::_Peck_b__0(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>(),
                        {"<Peck>b__0", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::_Peck_b__1(double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>(),
                        {"<Peck>b__1", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1* GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1::PeckEffectAudio___c__DisplayClass9_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio.get_AudioEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioEvent* (::GlobalNamespace::PeckEffectAudio::*)()>(&::GlobalNamespace::PeckEffectAudio::get_AudioEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"get_AudioEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio::*)()>(&::GlobalNamespace::PeckEffectAudio::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180447d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectAudio::Peck)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x180447de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio.PlayAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio::*)(::GlobalNamespace::PeckEffectAudioAction_ActionItem*, ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome, ::UnityEngine::Transform*)>(&::GlobalNamespace::PeckEffectAudio::PlayAction)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x180448270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"PlayAction", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>(), ::i2c::type_of<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio.StopAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio::*)(::GlobalNamespace::PeckEffectAudioAction_ActionItem*)>(&::GlobalNamespace::PeckEffectAudio::StopAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180448650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"StopAction", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudio::*)()>(&::GlobalNamespace::PeckEffectAudio::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectAudio::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_outcomesPerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomesPerState;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome> const& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_outcomesPerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outcomesPerState;
}
constexpr void GlobalNamespace::PeckEffectAudio::__cordl_internal_set_outcomesPerState(::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outcomesPerState = value;
}
constexpr ::GlobalNamespace::PeckTransformReference& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_transformReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformReference;
}
constexpr ::GlobalNamespace::PeckTransformReference const& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_transformReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformReference;
}
constexpr void GlobalNamespace::PeckEffectAudio::__cordl_internal_set_transformReference(::GlobalNamespace::PeckTransformReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformReference = value;
}
constexpr bool& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectAudio::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectAudio::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PeckEffectAudio::__cordl_internal_get__event()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____event;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PeckEffectAudio::__cordl_internal_get__event() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____event;
}
constexpr void GlobalNamespace::PeckEffectAudio::__cordl_internal_set__event(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____event = value;
}
inline ::GlobalNamespace::AudioEvent* GlobalNamespace::PeckEffectAudio::get_AudioEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"get_AudioEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioEvent*>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAudio::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectAudio::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectAudio::PlayAction(::GlobalNamespace::PeckEffectAudioAction_ActionItem*  action, ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome  outcome, ::UnityEngine::Transform*  targetTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"PlayAction", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>(), ::i2c::type_of<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, outcome, targetTransform);
}
inline void GlobalNamespace::PeckEffectAudio::StopAction(::GlobalNamespace::PeckEffectAudioAction_ActionItem*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {"StopAction", {}, {::i2c::type_of<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void GlobalNamespace::PeckEffectAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectAudio* GlobalNamespace::PeckEffectAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudio::PeckEffectAudio()   {
}
