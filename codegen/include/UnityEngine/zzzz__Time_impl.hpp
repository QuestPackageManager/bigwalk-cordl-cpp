#pragma once
// IWYU pragma private; include "UnityEngine/Time.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Time_def.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_def.hpp"
//  Writing Method size for method: ::UnityEngine::Time.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_time)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_timeAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngine::Time::get_timeAsDouble)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeAsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_timeAsRational
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::RationalTime (*)()>(&::UnityEngine::Time::get_timeAsRational)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182288250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeAsRational", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_timeSinceLevelLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_timeSinceLevelLoad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeSinceLevelLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_deltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_deltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822881b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_deltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_unscaledTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_unscaledTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822882c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_unscaledTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_unscaledTimeAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngine::Time::get_unscaledTimeAsDouble)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822882b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_unscaledTimeAsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_unscaledDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_unscaledDeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822882a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_unscaledDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_fixedDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_fixedDeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822881c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_fixedDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.set_fixedDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Time::set_fixedDeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822882d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"set_fixedDeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_smoothDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_smoothDeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_smoothDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_timeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_timeScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.set_timeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::Time::set_timeScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822882e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"set_timeScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_frameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Time::get_frameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822881d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_frameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_renderedFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Time::get_renderedFrameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_renderedFrameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_realtimeSinceStartup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Time::get_realtimeSinceStartup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_realtimeSinceStartup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_realtimeSinceStartupAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngine::Time::get_realtimeSinceStartupAsDouble)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822881f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_realtimeSinceStartupAsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_inFixedTimeStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Time::get_inFixedTimeStep)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822881e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_inFixedTimeStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Time.get_timeAsRational_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IntegerTime::RationalTime>)>(&::UnityEngine::Time::get_timeAsRational_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182288240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeAsRational_Injected", {}, {::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime>>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Time::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline double_t UnityEngine::Time::get_timeAsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeAsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline ::Unity::IntegerTime::RationalTime UnityEngine::Time::get_timeAsRational()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeAsRational", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::RationalTime>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_timeSinceLevelLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeSinceLevelLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_deltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_unscaledTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_unscaledTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline double_t UnityEngine::Time::get_unscaledTimeAsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_unscaledTimeAsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_unscaledDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_unscaledDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_fixedDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_fixedDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Time::set_fixedDeltaTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"set_fixedDeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::Time::get_smoothDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_smoothDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_timeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Time::set_timeScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"set_timeScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Time::get_frameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_frameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Time::get_renderedFrameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_renderedFrameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Time::get_realtimeSinceStartup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_realtimeSinceStartup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline double_t UnityEngine::Time::get_realtimeSinceStartupAsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_realtimeSinceStartupAsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::Time::get_inFixedTimeStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_inFixedTimeStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Time::get_timeAsRational_Injected(::by_ref<::Unity::IntegerTime::RationalTime>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Time*>(),
                        {"get_timeAsRational_Injected", {}, {::i2c::type_of<::by_ref<::Unity::IntegerTime::RationalTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Time::Time()   {
}
