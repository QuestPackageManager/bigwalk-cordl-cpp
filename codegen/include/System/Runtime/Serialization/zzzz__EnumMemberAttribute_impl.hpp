#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/EnumMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__EnumMemberAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::EnumMemberAttribute.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::EnumMemberAttribute::*)()>(&::System::Runtime::Serialization::EnumMemberAttribute::get_Value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::EnumMemberAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::EnumMemberAttribute::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& System::Runtime::Serialization::EnumMemberAttribute::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void System::Runtime::Serialization::EnumMemberAttribute::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline ::StringW System::Runtime::Serialization::EnumMemberAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::EnumMemberAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::EnumMemberAttribute::EnumMemberAttribute()   {
}
