#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTimer.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTimer_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.add_onTimerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimer::add_onTimerStart)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804503d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"add_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.remove_onTimerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimer::remove_onTimerStart)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804504d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"remove_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.add_onTimerFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimer::add_onTimerFinish)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180450350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"add_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.remove_onTimerFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimer::remove_onTimerFinish)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180450450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"remove_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)()>(&::GlobalNamespace::PeckEffectTimer::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectTimer::Peck)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180450100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)()>(&::GlobalNamespace::PeckEffectTimer::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18044fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.SetTimerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)(bool)>(&::GlobalNamespace::PeckEffectTimer::SetTimerActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804502d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"SetTimerActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)()>(&::GlobalNamespace::PeckEffectTimer::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804500a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.GetTimeRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PeckEffectTimer::*)()>(&::GlobalNamespace::PeckEffectTimer::GetTimeRemaining)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18044fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"GetTimeRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer.GetNormalizedTimeRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PeckEffectTimer::*)()>(&::GlobalNamespace::PeckEffectTimer::GetNormalizedTimeRemaining)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18044fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"GetNormalizedTimeRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimer::*)()>(&::GlobalNamespace::PeckEffectTimer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onFinish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinish;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onFinish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinish;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_onFinish(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFinish = value;
}
constexpr bool& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_timerActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerActive;
}
constexpr bool const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_timerActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerActive;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_timerActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerActive = value;
}
constexpr double_t& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr double_t const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_endTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
constexpr ::System::Action*& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onTimerChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerChange;
}
constexpr ::System::Action* const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onTimerChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerChange;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_onTimerChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerChange = value;
}
constexpr ::System::Action*& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onTimerStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStart;
}
constexpr ::System::Action* const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onTimerStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStart;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_onTimerStart(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerStart = value;
}
constexpr ::System::Action*& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onTimerFinish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerFinish;
}
constexpr ::System::Action* const& GlobalNamespace::PeckEffectTimer::__cordl_internal_get_onTimerFinish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerFinish;
}
constexpr void GlobalNamespace::PeckEffectTimer::__cordl_internal_set_onTimerFinish(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerFinish = value;
}
inline void GlobalNamespace::PeckEffectTimer::add_onTimerStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"add_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimer::remove_onTimerStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"remove_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimer::add_onTimerFinish(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"add_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimer::remove_onTimerFinish(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"remove_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimer::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectTimer::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimer::SetTimerActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"SetTimerActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PeckEffectTimer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PeckEffectTimer::GetTimeRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"GetTimeRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PeckEffectTimer::GetNormalizedTimeRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {"GetNormalizedTimeRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectTimer* GlobalNamespace::PeckEffectTimer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectTimer*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::PeckEffectTimer::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::PeckEffectTimer::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectTimer::PeckEffectTimer()   {
}
