#pragma once
// IWYU pragma private; include "GlobalNamespace/SkyManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SkyManager_def.hpp"
#include "GlobalNamespace/zzzz__SkyGradientSet_def.hpp"
#include "GlobalNamespace/zzzz__SkyManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SkyManager_ClockPeriod::SkyManager_ClockPeriod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyManager_ClockPeriod::SkyManager_ClockPeriod()   {
}
constexpr ::GlobalNamespace::SkyManager_ClockPeriod  GlobalNamespace::SkyManager_ClockPeriod::Am{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SkyManager_ClockPeriod  GlobalNamespace::SkyManager_ClockPeriod::Pm{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.add_OnEnviroInstanceFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::SkyManager::add_OnEnviroInstanceFound)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180429cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"add_OnEnviroInstanceFound", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.remove_OnEnviroInstanceFound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::SkyManager::remove_OnEnviroInstanceFound)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180429d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"remove_OnEnviroInstanceFound", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyManager::*)()>(&::GlobalNamespace::SkyManager::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804292d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyManager::*)()>(&::GlobalNamespace::SkyManager::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180429540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyManager::*)(bool)>(&::GlobalNamespace::SkyManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180429490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.SyncCloudsBasedOnNetworkTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t)>(&::GlobalNamespace::SkyManager::SyncCloudsBasedOnNetworkTime)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x180429820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SyncCloudsBasedOnNetworkTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyManager::*)()>(&::GlobalNamespace::SkyManager::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180429b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.GetCurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::SkyManager::GetCurrentTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180429440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"GetCurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.SetFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::SkyManager::SetFixedTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180429790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetFixedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.SetFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SkyManager::SetFixedTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180429750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetFixedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.ClearFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SkyManager::ClearFixedTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180429400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"ClearFixedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.SetCloudSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::SkyManager::SetCloudSpeed)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1804295b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetCloudSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager.SetClockPeriod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyManager::*)(::GlobalNamespace::SkyManager_ClockPeriod)>(&::GlobalNamespace::SkyManager::SetClockPeriod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180429560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetClockPeriod", {}, {::i2c::type_of<::GlobalNamespace::SkyManager_ClockPeriod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkyManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkyManager::*)()>(&::GlobalNamespace::SkyManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SkyGradientSet>& GlobalNamespace::SkyManager::__cordl_internal_get_SkyGradientSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkyGradientSet;
}
constexpr ::UnityW<::GlobalNamespace::SkyGradientSet> const& GlobalNamespace::SkyManager::__cordl_internal_get_SkyGradientSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkyGradientSet;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_SkyGradientSet(::UnityW<::GlobalNamespace::SkyGradientSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkyGradientSet = value;
}
constexpr bool& GlobalNamespace::SkyManager::__cordl_internal_get_useTimePeriodSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTimePeriodSettings;
}
constexpr bool const& GlobalNamespace::SkyManager::__cordl_internal_get_useTimePeriodSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useTimePeriodSettings;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_useTimePeriodSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useTimePeriodSettings = value;
}
constexpr bool& GlobalNamespace::SkyManager::__cordl_internal_get_useCustomCloudCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomCloudCoverage;
}
constexpr bool const& GlobalNamespace::SkyManager::__cordl_internal_get_useCustomCloudCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomCloudCoverage;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_useCustomCloudCoverage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomCloudCoverage = value;
}
constexpr float_t& GlobalNamespace::SkyManager::__cordl_internal_get_cloudWavelength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudWavelength;
}
constexpr float_t const& GlobalNamespace::SkyManager::__cordl_internal_get_cloudWavelength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudWavelength;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_cloudWavelength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudWavelength = value;
}
constexpr float_t& GlobalNamespace::SkyManager::__cordl_internal_get_cloudMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudMiddle;
}
constexpr float_t const& GlobalNamespace::SkyManager::__cordl_internal_get_cloudMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudMiddle;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_cloudMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudMiddle = value;
}
constexpr float_t& GlobalNamespace::SkyManager::__cordl_internal_get_cloudAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAmplitude;
}
constexpr float_t const& GlobalNamespace::SkyManager::__cordl_internal_get_cloudAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAmplitude;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_cloudAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudAmplitude = value;
}
constexpr float_t& GlobalNamespace::SkyManager::__cordl_internal_get_flatCloudAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudAmplitude;
}
constexpr float_t const& GlobalNamespace::SkyManager::__cordl_internal_get_flatCloudAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudAmplitude;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_flatCloudAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudAmplitude = value;
}
constexpr float_t& GlobalNamespace::SkyManager::__cordl_internal_get_flatCloudMiddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudMiddle;
}
constexpr float_t const& GlobalNamespace::SkyManager::__cordl_internal_get_flatCloudMiddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudMiddle;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_flatCloudMiddle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudMiddle = value;
}
constexpr bool& GlobalNamespace::SkyManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::SkyManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::SkyManager::__cordl_internal_get_lockCloudSin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockCloudSin;
}
constexpr bool const& GlobalNamespace::SkyManager::__cordl_internal_get_lockCloudSin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockCloudSin;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_lockCloudSin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockCloudSin = value;
}
constexpr float_t& GlobalNamespace::SkyManager::__cordl_internal_get_lockedCloudSin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedCloudSin;
}
constexpr float_t const& GlobalNamespace::SkyManager::__cordl_internal_get_lockedCloudSin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedCloudSin;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_lockedCloudSin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedCloudSin = value;
}
constexpr ::GlobalNamespace::SkyManager_ClockPeriod& GlobalNamespace::SkyManager::__cordl_internal_get_clockPeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockPeriod;
}
constexpr ::GlobalNamespace::SkyManager_ClockPeriod const& GlobalNamespace::SkyManager::__cordl_internal_get_clockPeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockPeriod;
}
constexpr void GlobalNamespace::SkyManager::__cordl_internal_set_clockPeriod(::GlobalNamespace::SkyManager_ClockPeriod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clockPeriod = value;
}
inline void GlobalNamespace::SkyManager::setStaticF_instance(::UnityW<::GlobalNamespace::SkyManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SkyManager>, "instance", ::GlobalNamespace::SkyManager*>(std::forward<::UnityW<::GlobalNamespace::SkyManager>>(value));
}
inline ::UnityW<::GlobalNamespace::SkyManager> GlobalNamespace::SkyManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SkyManager>, "instance", ::GlobalNamespace::SkyManager*>();
}
inline void GlobalNamespace::SkyManager::setStaticF_initalized(bool  value)  {
::cordl_internals::setStaticField<bool, "initalized", ::GlobalNamespace::SkyManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SkyManager::getStaticF_initalized()  {
return ::cordl_internals::getStaticField<bool, "initalized", ::GlobalNamespace::SkyManager*>();
}
inline void GlobalNamespace::SkyManager::setStaticF_defaultCloudsSpeed(float_t  value)  {
::cordl_internals::setStaticField<float_t, "defaultCloudsSpeed", ::GlobalNamespace::SkyManager*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::SkyManager::getStaticF_defaultCloudsSpeed()  {
return ::cordl_internals::getStaticField<float_t, "defaultCloudsSpeed", ::GlobalNamespace::SkyManager*>();
}
inline void GlobalNamespace::SkyManager::setStaticF_defaultFlatCloudsSpeed(float_t  value)  {
::cordl_internals::setStaticField<float_t, "defaultFlatCloudsSpeed", ::GlobalNamespace::SkyManager*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::SkyManager::getStaticF_defaultFlatCloudsSpeed()  {
return ::cordl_internals::getStaticField<float_t, "defaultFlatCloudsSpeed", ::GlobalNamespace::SkyManager*>();
}
inline void GlobalNamespace::SkyManager::setStaticF_cloudSyncBroken(bool  value)  {
::cordl_internals::setStaticField<bool, "cloudSyncBroken", ::GlobalNamespace::SkyManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SkyManager::getStaticF_cloudSyncBroken()  {
return ::cordl_internals::getStaticField<bool, "cloudSyncBroken", ::GlobalNamespace::SkyManager*>();
}
inline void GlobalNamespace::SkyManager::setStaticF_OnEnviroInstanceFound(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnEnviroInstanceFound", ::GlobalNamespace::SkyManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::SkyManager::getStaticF_OnEnviroInstanceFound()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnEnviroInstanceFound", ::GlobalNamespace::SkyManager*>();
}
inline void GlobalNamespace::SkyManager::add_OnEnviroInstanceFound(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"add_OnEnviroInstanceFound", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SkyManager::remove_OnEnviroInstanceFound(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"remove_OnEnviroInstanceFound", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SkyManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkyManager::OnApplicationFocus(bool  isFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFocused);
}
inline void GlobalNamespace::SkyManager::SyncCloudsBasedOnNetworkTime(double_t  networkTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SyncCloudsBasedOnNetworkTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkTime);
}
inline void GlobalNamespace::SkyManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::SkyManager::GetCurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"GetCurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SkyManager::SetFixedTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetFixedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, time);
}
inline void GlobalNamespace::SkyManager::SetFixedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetFixedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SkyManager::ClearFixedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"ClearFixedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SkyManager::SetCloudSpeed(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetCloudSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, speed);
}
inline void GlobalNamespace::SkyManager::SetClockPeriod(::GlobalNamespace::SkyManager_ClockPeriod  newClockPeriod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {"SetClockPeriod", {}, {::i2c::type_of<::GlobalNamespace::SkyManager_ClockPeriod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newClockPeriod);
}
inline void GlobalNamespace::SkyManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkyManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkyManager* GlobalNamespace::SkyManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkyManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkyManager::SkyManager()   {
}
