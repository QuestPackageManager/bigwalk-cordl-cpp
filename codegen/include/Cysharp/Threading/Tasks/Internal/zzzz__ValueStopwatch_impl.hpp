#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ValueStopwatch.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ValueStopwatch_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ValueStopwatch.StartNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::Internal::ValueStopwatch (*)()>(&::Cysharp::Threading::Tasks::Internal::ValueStopwatch::StartNew)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e88c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"StartNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ValueStopwatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ValueStopwatch::*)(int64_t)>(&::Cysharp::Threading::Tasks::Internal::ValueStopwatch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ValueStopwatch.get_Elapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Cysharp::Threading::Tasks::Internal::ValueStopwatch::*)()>(&::Cysharp::Threading::Tasks::Internal::ValueStopwatch::get_Elapsed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e88d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"get_Elapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ValueStopwatch.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::Internal::ValueStopwatch::*)()>(&::Cysharp::Threading::Tasks::Internal::ValueStopwatch::get_IsInvalid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181649c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"get_IsInvalid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ValueStopwatch.get_ElapsedTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Cysharp::Threading::Tasks::Internal::ValueStopwatch::*)()>(&::Cysharp::Threading::Tasks::Internal::ValueStopwatch::get_ElapsedTicks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e88ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"get_ElapsedTicks", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Internal::ValueStopwatch::setStaticF_TimestampToTicks(double_t  value)  {
::cordl_internals::setStaticField<double_t, "TimestampToTicks", ::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(std::forward<double_t>(value));
}
inline double_t Cysharp::Threading::Tasks::Internal::ValueStopwatch::getStaticF_TimestampToTicks()  {
return ::cordl_internals::getStaticField<double_t, "TimestampToTicks", ::Cysharp::Threading::Tasks::Internal::ValueStopwatch>();
}
inline ::Cysharp::Threading::Tasks::Internal::ValueStopwatch Cysharp::Threading::Tasks::Internal::ValueStopwatch::StartNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"StartNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(nullptr, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ValueStopwatch::_ctor(int64_t  startTimestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startTimestamp);
}
inline ::System::TimeSpan Cysharp::Threading::Tasks::Internal::ValueStopwatch::get_Elapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"get_Elapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::Internal::ValueStopwatch::get_IsInvalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"get_IsInvalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int64_t Cysharp::Threading::Tasks::Internal::ValueStopwatch::get_ElapsedTicks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ValueStopwatch>(),
                        {"get_ElapsedTicks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "startTimestamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch::ValueStopwatch(int64_t  startTimestamp) noexcept  {
this->startTimestamp = startTimestamp;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch::ValueStopwatch()   {
}
