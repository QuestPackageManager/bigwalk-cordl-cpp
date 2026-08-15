#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodSettings.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodSettings_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::LodSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LodSettings::*)()>(&::WaveHarmonic::Crest::LodSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182552740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::LodSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LodSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LodSettings* WaveHarmonic::Crest::LodSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LodSettings*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodSettings::LodSettings()   {
}
