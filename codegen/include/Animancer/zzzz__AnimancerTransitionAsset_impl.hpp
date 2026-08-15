#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransitionAsset.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_impl.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
//  Writing Method size for method: ::Animancer::AnimancerTransitionAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerTransitionAsset::*)()>(&::Animancer::AnimancerTransitionAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::AnimancerTransitionAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerTransitionAsset* Animancer::AnimancerTransitionAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransitionAsset*>());
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerTransitionAsset::AnimancerTransitionAsset()   {
}
