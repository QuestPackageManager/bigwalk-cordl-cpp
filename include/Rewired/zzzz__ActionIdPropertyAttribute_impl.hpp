#pragma once
// IWYU pragma private; include "Rewired/ActionIdPropertyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Rewired/zzzz__ActionIdPropertyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::ActionIdPropertyAttribute.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Rewired::ActionIdPropertyAttribute::*)()>(&::Rewired::ActionIdPropertyAttribute::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ActionIdPropertyAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ActionIdPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ActionIdPropertyAttribute::*)(::System::Type*)>(&::Rewired::ActionIdPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818382a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ActionIdPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Rewired::ActionIdPropertyAttribute::__cordl_internal_get_JjXwsLQOvFWGlFKQgBsjMXvTSnzh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JjXwsLQOvFWGlFKQgBsjMXvTSnzh;
}
constexpr ::System::Type* const& Rewired::ActionIdPropertyAttribute::__cordl_internal_get_JjXwsLQOvFWGlFKQgBsjMXvTSnzh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JjXwsLQOvFWGlFKQgBsjMXvTSnzh;
}
constexpr void Rewired::ActionIdPropertyAttribute::__cordl_internal_set_JjXwsLQOvFWGlFKQgBsjMXvTSnzh(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JjXwsLQOvFWGlFKQgBsjMXvTSnzh = value;
}
inline ::System::Type* Rewired::ActionIdPropertyAttribute::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ActionIdPropertyAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Rewired::ActionIdPropertyAttribute::_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ActionIdPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ActionIdPropertyAttribute* Rewired::ActionIdPropertyAttribute::New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ActionIdPropertyAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ActionIdPropertyAttribute::ActionIdPropertyAttribute()   {
}
