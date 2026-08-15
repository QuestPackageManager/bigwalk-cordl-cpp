#pragma once
// IWYU pragma private; include "Mirror/ClientAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mirror/zzzz__ClientAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::ClientAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ClientAttribute::*)()>(&::Mirror::ClientAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ClientAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::ClientAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ClientAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::ClientAttribute* Mirror::ClientAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::ClientAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::ClientAttribute::ClientAttribute()   {
}
