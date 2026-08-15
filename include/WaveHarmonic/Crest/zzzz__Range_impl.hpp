#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Range.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Range_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Range_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Range_Clamp::Range_Clamp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Range_Clamp::Range_Clamp()   {
}
constexpr ::WaveHarmonic::Crest::Range_Clamp  WaveHarmonic::Crest::Range_Clamp::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Range_Clamp  WaveHarmonic::Crest::Range_Clamp::Minimum{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Range_Clamp  WaveHarmonic::Crest::Range_Clamp::Maximum{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::Range_Clamp  WaveHarmonic::Crest::Range_Clamp::Both{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Range._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Range::*)(float_t, float_t, ::WaveHarmonic::Crest::Range_Clamp, float_t, bool, int32_t, bool)>(&::WaveHarmonic::Crest::Range::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Range*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::Range_Clamp>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Range::_ctor(float_t  minimum, float_t  maximum, ::WaveHarmonic::Crest::Range_Clamp  clamp, float_t  scale, bool  delayed, int32_t  step, bool  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Range*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::Range_Clamp>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimum, maximum, clamp, scale, delayed, step, power);
}
inline ::WaveHarmonic::Crest::Range* WaveHarmonic::Crest::Range::New_ctor(float_t  minimum, float_t  maximum, ::WaveHarmonic::Crest::Range_Clamp  clamp, float_t  scale, bool  delayed, int32_t  step, bool  power)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Range*>(minimum, maximum, clamp, scale, delayed, step, power));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Range::Range()   {
}
