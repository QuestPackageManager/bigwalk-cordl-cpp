#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/BitmaskToggleAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Rewired/Utils/Attributes/zzzz__BitmaskToggleAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Attributes::BitmaskToggleAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Attributes::BitmaskToggleAttribute::*)(::System::Type*)>(&::Rewired::Utils::Attributes::BitmaskToggleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181944630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::BitmaskToggleAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_get_propType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr ::System::Type* const& Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_get_propType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propType;
}
constexpr void Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_set_propType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propType = value;
}
constexpr bool& Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_get_showNone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNone;
}
constexpr bool const& Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_get_showNone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showNone;
}
constexpr void Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_set_showNone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showNone = value;
}
constexpr bool& Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_get_showAll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAll;
}
constexpr bool const& Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_get_showAll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAll;
}
constexpr void Rewired::Utils::Attributes::BitmaskToggleAttribute::__cordl_internal_set_showAll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAll = value;
}
inline void Rewired::Utils::Attributes::BitmaskToggleAttribute::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::BitmaskToggleAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Attributes::BitmaskToggleAttribute* Rewired::Utils::Attributes::BitmaskToggleAttribute::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Attributes::BitmaskToggleAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Attributes::BitmaskToggleAttribute::BitmaskToggleAttribute()   {
}
