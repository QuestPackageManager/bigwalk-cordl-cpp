#pragma once
// IWYU pragma private; include "GlobalNamespace/DreamerAnimationSound.hpp"
#include "GlobalNamespace/zzzz__AnimationSound_impl.hpp"
#include "GlobalNamespace/zzzz__DreamerAnimationSound_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DreamerAnimationSound.PlayAnimationSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DreamerAnimationSound::*)(::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::DreamerAnimationSound::PlayAnimationSound)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803336f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DreamerAnimationSound*>(),
                    {::i2c::class_of<::GlobalNamespace::DreamerAnimationSound*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DreamerAnimationSound._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DreamerAnimationSound::*)()>(&::GlobalNamespace::DreamerAnimationSound::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180333770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DreamerAnimationSound*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DreamerAnimationSound::PlayAnimationSound(::GlobalNamespace::AudioAsset*  audioAsset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DreamerAnimationSound*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioAsset);
}
inline void GlobalNamespace::DreamerAnimationSound::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DreamerAnimationSound*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DreamerAnimationSound* GlobalNamespace::DreamerAnimationSound::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DreamerAnimationSound*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DreamerAnimationSound::DreamerAnimationSound()   {
}
