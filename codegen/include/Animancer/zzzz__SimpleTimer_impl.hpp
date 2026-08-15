#pragma once
// IWYU pragma private; include "Animancer/SimpleTimer.hpp"
#include "Animancer/zzzz__SimpleTimer_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Animancer::SimpleTimer.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::Animancer::SimpleTimer::get_CurrentTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180314900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer.get_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SimpleTimer::*)()>(&::Animancer::SimpleTimer::get_IsStarted)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180314960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"get_IsStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SimpleTimer::*)(::StringW)>(&::Animancer::SimpleTimer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803148d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::SimpleTimer (*)(::StringW)>(&::Animancer::SimpleTimer::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803146d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Start", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SimpleTimer::*)()>(&::Animancer::SimpleTimer::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180314640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::SimpleTimer::*)()>(&::Animancer::SimpleTimer::Stop)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180314760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::SimpleTimer::*)()>(&::Animancer::SimpleTimer::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180314810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::SimpleTimer>(),
                    {::i2c::class_of<::Animancer::SimpleTimer>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::SimpleTimer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SimpleTimer::*)()>(&::Animancer::SimpleTimer::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803145c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::SimpleTimer::setStaticF_Stopwatch(::System::Diagnostics::Stopwatch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::Stopwatch*, "Stopwatch", ::Animancer::SimpleTimer>(std::forward<::System::Diagnostics::Stopwatch*>(value));
}
inline ::System::Diagnostics::Stopwatch* Animancer::SimpleTimer::getStaticF_Stopwatch()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::Stopwatch*, "Stopwatch", ::Animancer::SimpleTimer>();
}
inline double_t Animancer::SimpleTimer::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline bool Animancer::SimpleTimer::get_IsStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"get_IsStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Animancer::SimpleTimer::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline ::Animancer::SimpleTimer Animancer::SimpleTimer::Start(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Start", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::SimpleTimer>(nullptr, ___internal_method, name);
}
inline bool Animancer::SimpleTimer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Animancer::SimpleTimer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW Animancer::SimpleTimer::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::SimpleTimer>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Animancer::SimpleTimer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SimpleTimer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Animancer::SimpleTimer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Animancer::SimpleTimer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::SimpleTimer::SimpleTimer(::StringW  name, double_t  startTime, double_t  total) noexcept  {
this->name = name;
this->startTime = startTime;
this->total = total;
}
// Ctor Parameters []
constexpr ::Animancer::SimpleTimer::SimpleTimer()   {
}
