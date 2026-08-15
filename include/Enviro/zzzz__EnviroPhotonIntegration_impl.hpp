#pragma once
// IWYU pragma private; include "Enviro/EnviroPhotonIntegration.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Enviro/zzzz__EnviroPhotonIntegration_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroPhotonIntegration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroPhotonIntegration::*)()>(&::Enviro::EnviroPhotonIntegration::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroPhotonIntegration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Enviro::EnviroPhotonIntegration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroPhotonIntegration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroPhotonIntegration* Enviro::EnviroPhotonIntegration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroPhotonIntegration*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroPhotonIntegration::EnviroPhotonIntegration()   {
}
