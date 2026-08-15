#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/MonoPInvokeCallbackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Utils/Attributes/zzzz__MonoPInvokeCallbackAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::*)(::System::Type*)>(&::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
inline void Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute* Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Attributes::MonoPInvokeCallbackAttribute::MonoPInvokeCallbackAttribute()   {
}
