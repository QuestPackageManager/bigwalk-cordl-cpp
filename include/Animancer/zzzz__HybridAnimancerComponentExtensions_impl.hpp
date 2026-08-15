#pragma once
// IWYU pragma private; include "Animancer/HybridAnimancerComponentExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__HybridAnimancerComponentExtensions_def.hpp"
#include "Animancer/zzzz__HybridAnimancerComponent_def.hpp"
//  Writing Method size for method: ::Animancer::HybridAnimancerComponentExtensions.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::HybridAnimancerComponent*, float_t)>(&::Animancer::HybridAnimancerComponentExtensions::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802ee5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponentExtensions*>(),
                        {"Update", {}, {::i2c::type_of<::Animancer::HybridAnimancerComponent*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::HybridAnimancerComponentExtensions::Update(::Animancer::HybridAnimancerComponent*  animancer, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponentExtensions*>(),
                        {"Update", {}, {::i2c::type_of<::Animancer::HybridAnimancerComponent*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer, deltaTime);
}
// Ctor Parameters []
constexpr ::Animancer::HybridAnimancerComponentExtensions::HybridAnimancerComponentExtensions()   {
}
