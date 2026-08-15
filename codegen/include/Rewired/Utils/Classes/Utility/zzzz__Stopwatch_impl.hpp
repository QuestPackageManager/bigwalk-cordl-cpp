#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/Stopwatch.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__StopwatchBase_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__Stopwatch_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_frequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_frequency)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18193b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {"get_frequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::Stopwatch* (*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::StartNew)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {"StartNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.ConvertTo100NSTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::Rewired::Utils::Classes::Utility::Stopwatch::ConvertTo100NSTicks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {"ConvertTo100NSTicks", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_offsetSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_offsetSeconds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18193b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.set_offsetSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::Stopwatch::*)(double_t)>(&::Rewired::Utils::Classes::Utility::Stopwatch::set_offsetSeconds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_offsetTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_offsetTicks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.set_offsetTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::Stopwatch::*)(int64_t)>(&::Rewired::Utils::Classes::Utility::Stopwatch::set_offsetTicks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_elapsedSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedSeconds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18193b800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_elapsedSecondsRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedSecondsRaw)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193b790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_elapsedMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedMilliseconds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18193b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_elapsedMillisecondsRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedMillisecondsRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_elapsedTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedTicks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18193b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_elapsedTicksRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedTicksRaw)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193b890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.get_isRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::get_isRunning)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18193b920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18193b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::Stop)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193b590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18193b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::Stopwatch.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::Stopwatch::*)()>(&::Rewired::Utils::Classes::Utility::Stopwatch::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18193b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 17}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::Stopwatch*& Rewired::Utils::Classes::Utility::Stopwatch::__cordl_internal_get_sTRnBeeKEkeDHrjBchUCfbMLezEN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sTRnBeeKEkeDHrjBchUCfbMLezEN;
}
constexpr ::System::Diagnostics::Stopwatch* const& Rewired::Utils::Classes::Utility::Stopwatch::__cordl_internal_get_sTRnBeeKEkeDHrjBchUCfbMLezEN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sTRnBeeKEkeDHrjBchUCfbMLezEN;
}
constexpr void Rewired::Utils::Classes::Utility::Stopwatch::__cordl_internal_set_sTRnBeeKEkeDHrjBchUCfbMLezEN(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sTRnBeeKEkeDHrjBchUCfbMLezEN = value;
}
constexpr int64_t& Rewired::Utils::Classes::Utility::Stopwatch::__cordl_internal_get_EeOtlrXLsFHWlxHrqmedNDZSlwPu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EeOtlrXLsFHWlxHrqmedNDZSlwPu;
}
constexpr int64_t const& Rewired::Utils::Classes::Utility::Stopwatch::__cordl_internal_get_EeOtlrXLsFHWlxHrqmedNDZSlwPu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EeOtlrXLsFHWlxHrqmedNDZSlwPu;
}
constexpr void Rewired::Utils::Classes::Utility::Stopwatch::__cordl_internal_set_EeOtlrXLsFHWlxHrqmedNDZSlwPu(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EeOtlrXLsFHWlxHrqmedNDZSlwPu = value;
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::setStaticF_Global(::Rewired::Utils::Classes::Utility::Stopwatch*  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Classes::Utility::Stopwatch*, "Global", ::Rewired::Utils::Classes::Utility::Stopwatch*>(std::forward<::Rewired::Utils::Classes::Utility::Stopwatch*>(value));
}
inline ::Rewired::Utils::Classes::Utility::Stopwatch* Rewired::Utils::Classes::Utility::Stopwatch::getStaticF_Global()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Classes::Utility::Stopwatch*, "Global", ::Rewired::Utils::Classes::Utility::Stopwatch*>();
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::setStaticF_IfAcwGyDWNGnxGdNriFTcJXvtgVDA(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "IfAcwGyDWNGnxGdNriFTcJXvtgVDA", ::Rewired::Utils::Classes::Utility::Stopwatch*>(std::forward<int64_t>(value));
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::getStaticF_IfAcwGyDWNGnxGdNriFTcJXvtgVDA()  {
return ::cordl_internals::getStaticField<int64_t, "IfAcwGyDWNGnxGdNriFTcJXvtgVDA", ::Rewired::Utils::Classes::Utility::Stopwatch*>();
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::get_frequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {"get_frequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::Rewired::Utils::Classes::Utility::Stopwatch* Rewired::Utils::Classes::Utility::Stopwatch::StartNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {"StartNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::Stopwatch*>(nullptr, ___internal_method);
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::ConvertTo100NSTicks(int64_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {"ConvertTo100NSTicks", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, ticks);
}
inline double_t Rewired::Utils::Classes::Utility::Stopwatch::get_offsetSeconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::set_offsetSeconds(double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::get_offsetTicks()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::set_offsetTicks(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedSeconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedSecondsRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedMilliseconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedMillisecondsRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedTicks()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Rewired::Utils::Classes::Utility::Stopwatch::get_elapsedTicksRaw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Utility::Stopwatch::get_isRunning()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::Stopwatch::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::Stopwatch*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Utility::Stopwatch* Rewired::Utils::Classes::Utility::Stopwatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::Stopwatch*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::Stopwatch::Stopwatch()   {
}
