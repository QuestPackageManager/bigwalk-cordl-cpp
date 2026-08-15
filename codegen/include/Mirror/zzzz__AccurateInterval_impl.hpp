#pragma once
// IWYU pragma private; include "Mirror/AccurateInterval.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__AccurateInterval_def.hpp"
//  Writing Method size for method: ::Mirror::AccurateInterval.Elapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, double_t, ::by_ref<double_t>)>(&::Mirror::AccurateInterval::Elapsed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18158fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::AccurateInterval*>(),
                        {"Elapsed", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Mirror::AccurateInterval::Elapsed(double_t  time, double_t  interval, ::by_ref<double_t>  lastTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::AccurateInterval*>(),
                        {"Elapsed", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, interval, lastTime);
}
// Ctor Parameters []
constexpr ::Mirror::AccurateInterval::AccurateInterval()   {
}
