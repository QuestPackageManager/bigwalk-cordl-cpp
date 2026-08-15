#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Embedded.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Embedded_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Embedded._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Embedded::*)(int32_t, ::StringW)>(&::WaveHarmonic::Crest::Embedded::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Embedded*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Embedded::_ctor(int32_t  margin, ::StringW  defaultPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Embedded*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, margin, defaultPropertyName);
}
inline ::WaveHarmonic::Crest::Embedded* WaveHarmonic::Crest::Embedded::New_ctor(int32_t  margin, ::StringW  defaultPropertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Embedded*>(margin, defaultPropertyName));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Embedded::Embedded()   {
}
