#pragma once
// IWYU pragma private; include "MA/Flora/GenerateBurstMonoInteropAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "MA/Flora/zzzz__GenerateBurstMonoInteropAttribute_def.hpp"
//  Writing Method size for method: ::MA::Flora::GenerateBurstMonoInteropAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GenerateBurstMonoInteropAttribute::*)()>(&::MA::Flora::GenerateBurstMonoInteropAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GenerateBurstMonoInteropAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::GenerateBurstMonoInteropAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GenerateBurstMonoInteropAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::GenerateBurstMonoInteropAttribute* MA::Flora::GenerateBurstMonoInteropAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::GenerateBurstMonoInteropAttribute*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::GenerateBurstMonoInteropAttribute::GenerateBurstMonoInteropAttribute()   {
}
