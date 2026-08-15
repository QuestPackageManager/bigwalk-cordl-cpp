#pragma once
// IWYU pragma private; include "JetBrains/Annotations/NotifyPropertyChangedInvocatorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__NotifyPropertyChangedInvocatorAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)()>(&::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>());
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::NotifyPropertyChangedInvocatorAttribute()   {
}
