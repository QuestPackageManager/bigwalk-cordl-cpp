#pragma once
// IWYU pragma private; include "Mirror/ServerCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mirror/zzzz__ServerCallbackAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::ServerCallbackAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ServerCallbackAttribute::*)()>(&::Mirror::ServerCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ServerCallbackAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::ServerCallbackAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ServerCallbackAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::ServerCallbackAttribute* Mirror::ServerCallbackAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::ServerCallbackAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::ServerCallbackAttribute::ServerCallbackAttribute()   {
}
