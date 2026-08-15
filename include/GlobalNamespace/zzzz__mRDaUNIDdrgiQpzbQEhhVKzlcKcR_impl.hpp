#pragma once
// IWYU pragma private; include "GlobalNamespace/mRDaUNIDdrgiQpzbQEhhVKzlcKcR.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__mRDaUNIDdrgiQpzbQEhhVKzlcKcR_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR::*)()>(&::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR* GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::mRDaUNIDdrgiQpzbQEhhVKzlcKcR::mRDaUNIDdrgiQpzbQEhhVKzlcKcR()   {
}
