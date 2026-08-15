#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IVolumeProvider.hpp"
#include "Dissonance/Audio/Playback/zzzz__IVolumeProvider_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::IVolumeProvider.get_TargetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Audio::Playback::IVolumeProvider::*)()>(&::Dissonance::Audio::Playback::IVolumeProvider::get_TargetVolume)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::IVolumeProvider*>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::IVolumeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Dissonance::Audio::Playback::IVolumeProvider::get_TargetVolume()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::IVolumeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
