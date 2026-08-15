#pragma once
// IWYU pragma private; include "Mirror/TimeSample.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_impl.hpp"
#include "Mirror/zzzz__TimeSample_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Mirror::TimeSample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TimeSample::*)(int32_t)>(&::Mirror::TimeSample::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815986c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSample>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TimeSample.Begin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TimeSample::*)()>(&::Mirror::TimeSample::Begin)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181598590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSample>(),
                        {"Begin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::TimeSample.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::TimeSample::*)()>(&::Mirror::TimeSample::End)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815985e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSample>(),
                        {"End", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::TimeSample::_ctor(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSample>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, n);
}
inline void Mirror::TimeSample::Begin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSample>(),
                        {"Begin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Mirror::TimeSample::End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::TimeSample>(),
                        {"End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "watch", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "beginTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ema", ty: "::Mirror::ExponentialMovingAverage", modifiers: "", def_value: Some("{}") }, CppParam { name: "average", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::TimeSample::TimeSample(::System::Diagnostics::Stopwatch*  watch, double_t  beginTime, ::Mirror::ExponentialMovingAverage  ema, double_t  average) noexcept  {
this->watch = watch;
this->beginTime = beginTime;
this->ema = ema;
this->average = average;
}
// Ctor Parameters []
constexpr ::Mirror::TimeSample::TimeSample()   {
}
