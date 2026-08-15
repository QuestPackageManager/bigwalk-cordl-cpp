#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContractAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractAttribute.get_IsReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractAttribute::*)()>(&::System::Runtime::Serialization::DataContractAttribute::get_IsReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataContractAttribute*>(),
                        {"get_IsReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::DataContractAttribute::__cordl_internal_get_isReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReference;
}
constexpr bool const& System::Runtime::Serialization::DataContractAttribute::__cordl_internal_get_isReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReference;
}
constexpr void System::Runtime::Serialization::DataContractAttribute::__cordl_internal_set_isReference(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReference = value;
}
inline bool System::Runtime::Serialization::DataContractAttribute::get_IsReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataContractAttribute*>(),
                        {"get_IsReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractAttribute::DataContractAttribute()   {
}
