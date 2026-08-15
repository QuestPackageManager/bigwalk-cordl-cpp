#pragma once
// IWYU pragma private; include "Enviro/EnviroDefault.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__EnviroDefault_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroDefault._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroDefault::*)()>(&::Enviro::EnviroDefault::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroDefault*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Enviro::EnviroDefault::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroDefault*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroDefault* Enviro::EnviroDefault::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroDefault*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroDefault::EnviroDefault()   {
}
