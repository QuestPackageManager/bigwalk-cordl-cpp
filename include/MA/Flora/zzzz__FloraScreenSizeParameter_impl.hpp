#pragma once
// IWYU pragma private; include "MA/Flora/FloraScreenSizeParameter.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_impl.hpp"
#include "MA/Flora/zzzz__FloraScreenSizeParameter_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraScreenSizeParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraScreenSizeParameter::*)(float_t, float_t, float_t, bool)>(&::MA::Flora::FloraScreenSizeParameter::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e7df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraScreenSizeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraScreenSizeParameter::_ctor(float_t  value, float_t  min, float_t  max, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraScreenSizeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, min, max, overrideState);
}
inline ::MA::Flora::FloraScreenSizeParameter* MA::Flora::FloraScreenSizeParameter::New_ctor(float_t  value, float_t  min, float_t  max, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraScreenSizeParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraScreenSizeParameter::FloraScreenSizeParameter()   {
}
