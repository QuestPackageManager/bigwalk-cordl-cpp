#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/SuppressIldasmAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__SuppressIldasmAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::SuppressIldasmAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::SuppressIldasmAttribute::*)()>(&::System::Runtime::CompilerServices::SuppressIldasmAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SuppressIldasmAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::SuppressIldasmAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::SuppressIldasmAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::SuppressIldasmAttribute* System::Runtime::CompilerServices::SuppressIldasmAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::SuppressIldasmAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::SuppressIldasmAttribute::SuppressIldasmAttribute()   {
}
