#pragma once
// IWYU pragma private; include "JetBrains/Annotations/ContractAnnotationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__ContractAnnotationAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::ContractAnnotationAttribute::*)(::StringW)>(&::JetBrains::Annotations::ContractAnnotationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x39c0;
  constexpr static std::size_t addrs = 0x180e22190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::ContractAnnotationAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::ContractAnnotationAttribute::*)(::StringW, bool)>(&::JetBrains::Annotations::ContractAnnotationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180535980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__Contract_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Contract_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__Contract_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Contract_k__BackingField;
}
constexpr void JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_set__Contract_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Contract_k__BackingField = value;
}
constexpr bool& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__ForceFullStates_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceFullStates_k__BackingField;
}
constexpr bool const& JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_get__ForceFullStates_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ForceFullStates_k__BackingField;
}
constexpr void JetBrains::Annotations::ContractAnnotationAttribute::__cordl_internal_set__ForceFullStates_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ForceFullStates_k__BackingField = value;
}
inline void JetBrains::Annotations::ContractAnnotationAttribute::_ctor(::StringW  contract)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract);
}
inline void JetBrains::Annotations::ContractAnnotationAttribute::_ctor(::StringW  contract, bool  forceFullStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JetBrains::Annotations::ContractAnnotationAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contract, forceFullStates);
}
inline ::JetBrains::Annotations::ContractAnnotationAttribute* JetBrains::Annotations::ContractAnnotationAttribute::New_ctor(::StringW  contract)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::ContractAnnotationAttribute*>(contract));
}
inline ::JetBrains::Annotations::ContractAnnotationAttribute* JetBrains::Annotations::ContractAnnotationAttribute::New_ctor(::StringW  contract, bool  forceFullStates)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::ContractAnnotationAttribute*>(contract, forceFullStates));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::ContractAnnotationAttribute::ContractAnnotationAttribute()   {
}
