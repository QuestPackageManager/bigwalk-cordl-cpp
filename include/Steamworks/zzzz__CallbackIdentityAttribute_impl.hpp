#pragma once
// IWYU pragma private; include "Steamworks/CallbackIdentityAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Steamworks/zzzz__CallbackIdentityAttribute_def.hpp"
//  Writing Method size for method: ::Steamworks::CallbackIdentityAttribute.get_Identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CallbackIdentityAttribute::*)()>(&::Steamworks::CallbackIdentityAttribute::get_Identity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentityAttribute*>(),
                        {"get_Identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackIdentityAttribute.set_Identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CallbackIdentityAttribute::*)(int32_t)>(&::Steamworks::CallbackIdentityAttribute::set_Identity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentityAttribute*>(),
                        {"set_Identity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CallbackIdentityAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CallbackIdentityAttribute::*)(int32_t)>(&::Steamworks::CallbackIdentityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Steamworks::CallbackIdentityAttribute::__cordl_internal_get__Identity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Identity_k__BackingField;
}
constexpr int32_t const& Steamworks::CallbackIdentityAttribute::__cordl_internal_get__Identity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Identity_k__BackingField;
}
constexpr void Steamworks::CallbackIdentityAttribute::__cordl_internal_set__Identity_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Identity_k__BackingField = value;
}
inline int32_t Steamworks::CallbackIdentityAttribute::get_Identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentityAttribute*>(),
                        {"get_Identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Steamworks::CallbackIdentityAttribute::set_Identity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentityAttribute*>(),
                        {"set_Identity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Steamworks::CallbackIdentityAttribute::_ctor(int32_t  callbackNum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CallbackIdentityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackNum);
}
inline ::Steamworks::CallbackIdentityAttribute* Steamworks::CallbackIdentityAttribute::New_ctor(int32_t  callbackNum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::CallbackIdentityAttribute*>(callbackNum));
}
// Ctor Parameters []
constexpr ::Steamworks::CallbackIdentityAttribute::CallbackIdentityAttribute()   {
}
