#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioVolume.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAudioVolume.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IAudioVolume::*)()>(&::GlobalNamespace::IAudioVolume::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IAudioVolume*>(),
                    {::i2c::class_of<::GlobalNamespace::IAudioVolume*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IAudioVolume::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IAudioVolume*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
