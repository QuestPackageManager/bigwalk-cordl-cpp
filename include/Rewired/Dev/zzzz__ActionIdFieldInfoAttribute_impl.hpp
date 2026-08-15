#pragma once
// IWYU pragma private; include "Rewired/Dev/ActionIdFieldInfoAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Dev/zzzz__ActionIdFieldInfoAttribute_def.hpp"
//  Writing Method size for method: ::Rewired::Dev::ActionIdFieldInfoAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Dev::ActionIdFieldInfoAttribute::*)()>(&::Rewired::Dev::ActionIdFieldInfoAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Dev::ActionIdFieldInfoAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Dev::ActionIdFieldInfoAttribute::__cordl_internal_get_categoryName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___categoryName;
}
constexpr ::StringW const& Rewired::Dev::ActionIdFieldInfoAttribute::__cordl_internal_get_categoryName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___categoryName;
}
constexpr void Rewired::Dev::ActionIdFieldInfoAttribute::__cordl_internal_set_categoryName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___categoryName = value;
}
constexpr ::StringW& Rewired::Dev::ActionIdFieldInfoAttribute::__cordl_internal_get_friendlyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyName;
}
constexpr ::StringW const& Rewired::Dev::ActionIdFieldInfoAttribute::__cordl_internal_get_friendlyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyName;
}
constexpr void Rewired::Dev::ActionIdFieldInfoAttribute::__cordl_internal_set_friendlyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendlyName = value;
}
inline void Rewired::Dev::ActionIdFieldInfoAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Dev::ActionIdFieldInfoAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Dev::ActionIdFieldInfoAttribute* Rewired::Dev::ActionIdFieldInfoAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Dev::ActionIdFieldInfoAttribute*>());
}
// Ctor Parameters []
constexpr ::Rewired::Dev::ActionIdFieldInfoAttribute::ActionIdFieldInfoAttribute()   {
}
