#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/SerializationTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Utils/Attributes/zzzz__SerializationTypeAttribute_def.hpp"
#include "Rewired/Utils/Attributes/zzzz__SerializationTypeAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType::SerializationTypeAttribute_SerializationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType::SerializationTypeAttribute_SerializationType()   {
}
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType::Default{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType::Object{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::Utils::Attributes::SerializationTypeAttribute.get_serializationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType (::Rewired::Utils::Attributes::SerializationTypeAttribute::*)()>(&::Rewired::Utils::Attributes::SerializationTypeAttribute::get_serializationType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::SerializationTypeAttribute*>(),
                        {"get_serializationType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Attributes::SerializationTypeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Attributes::SerializationTypeAttribute::*)(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType)>(&::Rewired::Utils::Attributes::SerializationTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::SerializationTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType& Rewired::Utils::Attributes::SerializationTypeAttribute::__cordl_internal_get__serializationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializationType;
}
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType const& Rewired::Utils::Attributes::SerializationTypeAttribute::__cordl_internal_get__serializationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializationType;
}
constexpr void Rewired::Utils::Attributes::SerializationTypeAttribute::__cordl_internal_set__serializationType(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializationType = value;
}
inline ::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType Rewired::Utils::Attributes::SerializationTypeAttribute::get_serializationType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::SerializationTypeAttribute*>(),
                        {"get_serializationType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType>(this, ___internal_method);
}
inline void Rewired::Utils::Attributes::SerializationTypeAttribute::_ctor(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::SerializationTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Attributes::SerializationTypeAttribute* Rewired::Utils::Attributes::SerializationTypeAttribute::New_ctor(::Rewired::Utils::Attributes::SerializationTypeAttribute_SerializationType  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Attributes::SerializationTypeAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Attributes::SerializationTypeAttribute::SerializationTypeAttribute()   {
}
