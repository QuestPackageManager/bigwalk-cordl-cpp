#pragma once
// IWYU pragma private; include "Enviro/ILightningEffect.hpp"
#include "Enviro/zzzz__ILightningEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Enviro::ILightningEffect.CastBolt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::ILightningEffect::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Enviro::ILightningEffect::CastBolt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::ILightningEffect*>(),
                    {::i2c::class_of<::Enviro::ILightningEffect*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Enviro::ILightningEffect::CastBolt(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::ILightningEffect*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, target);
}
