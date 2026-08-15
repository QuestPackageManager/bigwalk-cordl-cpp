#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/BitmaskAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Rewired/Utils/Attributes/zzzz__BitmaskAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Attributes::BitmaskAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Attributes::BitmaskAttribute::*)(::System::Type*)>(&::Rewired::Utils::Attributes::BitmaskAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818382a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::BitmaskAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Rewired::Utils::Attributes::BitmaskAttribute::__cordl_internal_get_propType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr ::System::Type* const& Rewired::Utils::Attributes::BitmaskAttribute::__cordl_internal_get_propType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr void Rewired::Utils::Attributes::BitmaskAttribute::__cordl_internal_set_propType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propType = value;
}
inline void Rewired::Utils::Attributes::BitmaskAttribute::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::BitmaskAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Attributes::BitmaskAttribute* Rewired::Utils::Attributes::BitmaskAttribute::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Attributes::BitmaskAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Attributes::BitmaskAttribute::BitmaskAttribute()   {
}
