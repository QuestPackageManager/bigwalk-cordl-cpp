#pragma once
// IWYU pragma private; include "Shipmate/Utils/Extensions/FloatExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Utils/Extensions/zzzz__FloatExtensions_def.hpp"
//  Writing Method size for method: ::Shipmate::Utils::Extensions::FloatExtensions.Truncate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::Shipmate::Utils::Extensions::FloatExtensions::Truncate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181acac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::FloatExtensions*>(),
                        {"Truncate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Shipmate::Utils::Extensions::FloatExtensions::Truncate(float_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Utils::Extensions::FloatExtensions*>(),
                        {"Truncate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, digits);
}
// Ctor Parameters []
constexpr ::Shipmate::Utils::Extensions::FloatExtensions::FloatExtensions()   {
}
