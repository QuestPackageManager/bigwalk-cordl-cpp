#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTimerNetworked.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTimerNetworked_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.get_EndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::get_EndTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18044fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"get_EndTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.add_onTimerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimerNetworked::add_onTimerStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"add_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.remove_onTimerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimerNetworked::remove_onTimerStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180345d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"remove_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.add_onTimerFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimerNetworked::add_onTimerFinish)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18044fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"add_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.remove_onTimerFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::System::Action*)>(&::GlobalNamespace::PeckEffectTimerNetworked::remove_onTimerFinish)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18044fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"remove_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectTimerNetworked::Peck)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18044f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18044f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.SetTimerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(bool)>(&::GlobalNamespace::PeckEffectTimerNetworked::SetTimerActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18044fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"SetTimerActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.GetTimeRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::GetTimeRemaining)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18044f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"GetTimeRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.GetNormalizedTimeRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::GetNormalizedTimeRemaining)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044f570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"GetNormalizedTimeRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.get_NetworkendTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::PeckEffectTimerNetworked::*)()>(&::GlobalNamespace::PeckEffectTimerNetworked::get_NetworkendTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18044fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"get_NetworkendTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.set_NetworkendTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::ByRefConst<double_t>)>(&::GlobalNamespace::PeckEffectTimerNetworked::set_NetworkendTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18044fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"set_NetworkendTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PeckEffectTimerNetworked::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                    {::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTimerNetworked.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTimerNetworked::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PeckEffectTimerNetworked::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044f510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                    {::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_trackedStateSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_trackedStateSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedStateSystem;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_trackedStateSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedStateSystem = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_stateFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_stateFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateFilter;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_stateFilter(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateFilter = value;
}
constexpr float_t& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onFinish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinish;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onFinish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFinish;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_onFinish(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFinish = value;
}
constexpr bool& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_timerActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerActive;
}
constexpr bool const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_timerActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerActive;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_timerActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerActive = value;
}
constexpr double_t& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr double_t const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_endTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
constexpr ::System::Action*& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onTimerChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerChange;
}
constexpr ::System::Action* const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onTimerChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerChange;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_onTimerChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerChange = value;
}
constexpr ::System::Action*& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onTimerStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStart;
}
constexpr ::System::Action* const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onTimerStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerStart;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_onTimerStart(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerStart = value;
}
constexpr ::System::Action*& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onTimerFinish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerFinish;
}
constexpr ::System::Action* const& GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_get_onTimerFinish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimerFinish;
}
constexpr void GlobalNamespace::PeckEffectTimerNetworked::__cordl_internal_set_onTimerFinish(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimerFinish = value;
}
inline double_t GlobalNamespace::PeckEffectTimerNetworked::get_EndTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"get_EndTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::add_onTimerStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"add_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::remove_onTimerStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"remove_onTimerStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::add_onTimerFinish(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"add_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::remove_onTimerFinish(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"remove_onTimerFinish", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::SetTimerActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"SetTimerActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PeckEffectTimerNetworked::GetTimeRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"GetTimeRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PeckEffectTimerNetworked::GetNormalizedTimeRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"GetNormalizedTimeRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::PeckEffectTimerNetworked::get_NetworkendTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"get_NetworkendTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::set_NetworkendTime(::ByRefConst<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(),
                        {"set_NetworkendTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PeckEffectTimerNetworked::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PeckEffectTimerNetworked*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PeckEffectTimerNetworked* GlobalNamespace::PeckEffectTimerNetworked::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectTimerNetworked*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::PeckEffectTimerNetworked::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::PeckEffectTimerNetworked::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectTimerNetworked::PeckEffectTimerNetworked()   {
}
