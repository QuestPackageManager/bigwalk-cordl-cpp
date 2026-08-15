#pragma once
// IWYU pragma private; include "GlobalNamespace/NRaDjubkIOUsrdrIyVksbChcSfLaA.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NRaDjubkIOUsrdrIyVksbChcSfLaA_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA::*)()>(&::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA* GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NRaDjubkIOUsrdrIyVksbChcSfLaA::NRaDjubkIOUsrdrIyVksbChcSfLaA()   {
}
