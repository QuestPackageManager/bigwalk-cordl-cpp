#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Required.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Required_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Required._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Required::*)()>(&::WaveHarmonic::Crest::Required::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Required*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Required::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Required*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Required* WaveHarmonic::Crest::Required::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Required*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Required::Required()   {
}
