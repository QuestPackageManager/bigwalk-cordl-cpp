#pragma once
// IWYU pragma private; include "Enviro/EnviroMirrorPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Enviro/zzzz__EnviroMirrorPlayer_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroMirrorPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroMirrorPlayer::*)()>(&::Enviro::EnviroMirrorPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroMirrorPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Enviro::EnviroMirrorPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroMirrorPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroMirrorPlayer* Enviro::EnviroMirrorPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroMirrorPlayer*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroMirrorPlayer::EnviroMirrorPlayer()   {
}
