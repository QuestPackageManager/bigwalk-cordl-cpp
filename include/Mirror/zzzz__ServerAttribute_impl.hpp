#pragma once
// IWYU pragma private; include "Mirror/ServerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mirror/zzzz__ServerAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::ServerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ServerAttribute::*)()>(&::Mirror::ServerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ServerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::ServerAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ServerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::ServerAttribute* Mirror::ServerAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::ServerAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::ServerAttribute::ServerAttribute()   {
}
