#pragma once
// IWYU pragma private; include "Mirror/ExponentialMovingAverage.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_def.hpp"
//  Writing Method size for method: ::Mirror::ExponentialMovingAverage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ExponentialMovingAverage::*)(int32_t)>(&::Mirror::ExponentialMovingAverage::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181590b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ExponentialMovingAverage>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ExponentialMovingAverage.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ExponentialMovingAverage::*)(double_t)>(&::Mirror::ExponentialMovingAverage::Add)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181590aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ExponentialMovingAverage>(),
                        {"Add", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::ExponentialMovingAverage.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ExponentialMovingAverage::*)()>(&::Mirror::ExponentialMovingAverage::Reset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181590b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ExponentialMovingAverage>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::ExponentialMovingAverage::_ctor(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ExponentialMovingAverage>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, n);
}
inline void Mirror::ExponentialMovingAverage::Add(double_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ExponentialMovingAverage>(),
                        {"Add", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newValue);
}
inline void Mirror::ExponentialMovingAverage::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ExponentialMovingAverage>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "alpha", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "initialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Variance", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardDeviation", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::ExponentialMovingAverage::ExponentialMovingAverage(double_t  alpha, bool  initialized, double_t  Value, double_t  Variance, double_t  StandardDeviation) noexcept  {
this->alpha = alpha;
this->initialized = initialized;
this->Value = Value;
this->Variance = Variance;
this->StandardDeviation = StandardDeviation;
}
// Ctor Parameters []
constexpr ::Mirror::ExponentialMovingAverage::ExponentialMovingAverage()   {
}
