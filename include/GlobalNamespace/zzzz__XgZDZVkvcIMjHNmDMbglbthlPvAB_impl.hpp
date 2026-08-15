#pragma once
// IWYU pragma private; include "GlobalNamespace/XgZDZVkvcIMjHNmDMbglbthlPvAB.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XgZDZVkvcIMjHNmDMbglbthlPvAB_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB::*)()>(&::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB* GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XgZDZVkvcIMjHNmDMbglbthlPvAB::XgZDZVkvcIMjHNmDMbglbthlPvAB()   {
}
