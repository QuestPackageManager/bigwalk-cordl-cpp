#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IAmplitudeProvider.hpp"
#include "Dissonance/Audio/Capture/zzzz__IAmplitudeProvider_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::IAmplitudeProvider.get_Amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Capture::IAmplitudeProvider::*)()>(&::Dissonance::Audio::Capture::IAmplitudeProvider::get_Amplitude)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Dissonance::Audio::Capture::IAmplitudeProvider::get_Amplitude()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IAmplitudeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
