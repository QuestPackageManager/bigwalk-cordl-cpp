#pragma once
// IWYU pragma private; include "Animancer/Units/UnitsAttribute.hpp"
#include "Animancer/zzzz__SelfDrawerAttribute_impl.hpp"
#include "Animancer/zzzz__Validate_impl.hpp"
#include "Animancer/Units/zzzz__UnitsAttribute_def.hpp"
#include "Animancer/zzzz__Validate_def.hpp"
//  Writing Method size for method: ::Animancer::Units::UnitsAttribute.get_Rule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::Validate_Value (::Animancer::Units::UnitsAttribute::*)()>(&::Animancer::Units::UnitsAttribute::get_Rule)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {"get_Rule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Units::UnitsAttribute.set_Rule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::UnitsAttribute::*)(::Animancer::Validate_Value)>(&::Animancer::Units::UnitsAttribute::set_Rule)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {"set_Rule", {}, {::i2c::type_of<::Animancer::Validate_Value>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Units::UnitsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::UnitsAttribute::*)()>(&::Animancer::Units::UnitsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Units::UnitsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::UnitsAttribute::*)(::StringW)>(&::Animancer::Units::UnitsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Units::UnitsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::UnitsAttribute::*)(::ArrayW<float_t>, ::ArrayW<::StringW>, int32_t)>(&::Animancer::Units::UnitsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::Validate_Value& Animancer::Units::UnitsAttribute::__cordl_internal_get__Rule_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rule_k__BackingField;
}
constexpr ::Animancer::Validate_Value const& Animancer::Units::UnitsAttribute::__cordl_internal_get__Rule_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rule_k__BackingField;
}
constexpr void Animancer::Units::UnitsAttribute::__cordl_internal_set__Rule_k__BackingField(::Animancer::Validate_Value  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rule_k__BackingField = value;
}
inline ::Animancer::Validate_Value Animancer::Units::UnitsAttribute::get_Rule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {"get_Rule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::Validate_Value>(this, ___internal_method);
}
inline void Animancer::Units::UnitsAttribute::set_Rule(::Animancer::Validate_Value  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {"set_Rule", {}, {::i2c::type_of<::Animancer::Validate_Value>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Units::UnitsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Units::UnitsAttribute::_ctor(::StringW  suffix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, suffix);
}
inline void Animancer::Units::UnitsAttribute::_ctor(::ArrayW<float_t>  multipliers, ::ArrayW<::StringW>  suffixes, int32_t  unitIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::UnitsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multipliers, suffixes, unitIndex);
}
inline ::Animancer::Units::UnitsAttribute* Animancer::Units::UnitsAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Units::UnitsAttribute*>());
}
inline ::Animancer::Units::UnitsAttribute* Animancer::Units::UnitsAttribute::New_ctor(::StringW  suffix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Units::UnitsAttribute*>(suffix));
}
inline ::Animancer::Units::UnitsAttribute* Animancer::Units::UnitsAttribute::New_ctor(::ArrayW<float_t>  multipliers, ::ArrayW<::StringW>  suffixes, int32_t  unitIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Units::UnitsAttribute*>(multipliers, suffixes, unitIndex));
}
// Ctor Parameters []
constexpr ::Animancer::Units::UnitsAttribute::UnitsAttribute()   {
}
