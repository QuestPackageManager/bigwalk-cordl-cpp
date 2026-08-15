#pragma once
// IWYU pragma private; include "MA/Flora/FloraScreenRangeParameter.hpp"
#include "UnityEngine/Rendering/zzzz__FloatRangeParameter_impl.hpp"
#include "MA/Flora/zzzz__FloraScreenRangeParameter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraScreenRangeParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraScreenRangeParameter::*)(::UnityEngine::Vector2, float_t, float_t, bool)>(&::MA::Flora::FloraScreenRangeParameter::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814cacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraScreenRangeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraScreenRangeParameter::_ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraScreenRangeParameter*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, min, max, overrideState);
}
inline ::MA::Flora::FloraScreenRangeParameter* MA::Flora::FloraScreenRangeParameter::New_ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraScreenRangeParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraScreenRangeParameter::FloraScreenRangeParameter()   {
}
