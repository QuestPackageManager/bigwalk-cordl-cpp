#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckAnimationEventCatcher.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckAnimationEventCatcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckAnimationEventCatcher.TriggerSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckAnimationEventCatcher::*)(int32_t)>(&::GlobalNamespace::PeckAnimationEventCatcher::TriggerSwitch)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804463e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckAnimationEventCatcher*>(),
                        {"TriggerSwitch", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckAnimationEventCatcher.TriggerUnityEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckAnimationEventCatcher::*)(int32_t)>(&::GlobalNamespace::PeckAnimationEventCatcher::TriggerUnityEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180446560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckAnimationEventCatcher*>(),
                        {"TriggerUnityEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckAnimationEventCatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckAnimationEventCatcher::*)()>(&::GlobalNamespace::PeckAnimationEventCatcher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckAnimationEventCatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>& GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_get_peckSwitches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSwitches;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>> const& GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_get_peckSwitches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peckSwitches;
}
constexpr void GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_set_peckSwitches(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peckSwitches = value;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_get_unityEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvents;
}
constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_get_unityEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityEvents;
}
constexpr void GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_set_unityEvents(::ArrayW<::UnityEngine::Events::UnityEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityEvents = value;
}
constexpr bool& GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckAnimationEventCatcher::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::PeckAnimationEventCatcher::TriggerSwitch(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckAnimationEventCatcher*>(),
                        {"TriggerSwitch", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::PeckAnimationEventCatcher::TriggerUnityEvent(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckAnimationEventCatcher*>(),
                        {"TriggerUnityEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::PeckAnimationEventCatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckAnimationEventCatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckAnimationEventCatcher* GlobalNamespace::PeckAnimationEventCatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckAnimationEventCatcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckAnimationEventCatcher::PeckAnimationEventCatcher()   {
}
