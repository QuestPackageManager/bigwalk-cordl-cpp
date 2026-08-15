#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataMemberAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataMemberAttribute.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::DataMemberAttribute::*)()>(&::System::Runtime::Serialization::DataMemberAttribute::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataMemberAttribute.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::DataMemberAttribute::*)()>(&::System::Runtime::Serialization::DataMemberAttribute::get_Order)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_Order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataMemberAttribute.get_IsRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataMemberAttribute::*)()>(&::System::Runtime::Serialization::DataMemberAttribute::get_IsRequired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_IsRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataMemberAttribute.get_EmitDefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataMemberAttribute::*)()>(&::System::Runtime::Serialization::DataMemberAttribute::get_EmitDefaultValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181a74790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_EmitDefaultValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int32_t& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_order()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr int32_t const& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_order() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr void System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_set_order(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___order = value;
}
constexpr bool& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_isRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRequired;
}
constexpr bool const& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_isRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRequired;
}
constexpr void System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_set_isRequired(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRequired = value;
}
constexpr bool& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_emitDefaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitDefaultValue;
}
constexpr bool const& System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_get_emitDefaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emitDefaultValue;
}
constexpr void System::Runtime::Serialization::DataMemberAttribute::__cordl_internal_set_emitDefaultValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emitDefaultValue = value;
}
inline ::StringW System::Runtime::Serialization::DataMemberAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::DataMemberAttribute::get_Order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_Order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataMemberAttribute::get_IsRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_IsRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::DataMemberAttribute::get_EmitDefaultValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Serialization::DataMemberAttribute*>(),
                        {"get_EmitDefaultValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataMemberAttribute::DataMemberAttribute()   {
}
