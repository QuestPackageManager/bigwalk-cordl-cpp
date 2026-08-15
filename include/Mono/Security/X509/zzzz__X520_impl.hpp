#pragma once
// IWYU pragma private; include "Mono/Security/X509/X520.hpp"
#include "Mono/Security/X509/zzzz__X520_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X520_def.hpp"
#include "Mono/Security/X509/zzzz__X520_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X520_AttributeTypeAndValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_AttributeTypeAndValue::*)(::StringW, int32_t)>(&::Mono::Security::X509::X520_AttributeTypeAndValue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X520_AttributeTypeAndValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_AttributeTypeAndValue::*)(::StringW, int32_t, uint8_t)>(&::Mono::Security::X509::X520_AttributeTypeAndValue::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18159b210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X520_AttributeTypeAndValue.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_AttributeTypeAndValue::*)(::StringW)>(&::Mono::Security::X509::X520_AttributeTypeAndValue::set_Value)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18159b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"set_Value", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X520_AttributeTypeAndValue.GetASN1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X520_AttributeTypeAndValue::*)(uint8_t)>(&::Mono::Security::X509::X520_AttributeTypeAndValue::GetASN1)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18159aed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"GetASN1", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X520_AttributeTypeAndValue.GetASN1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X520_AttributeTypeAndValue::*)()>(&::Mono::Security::X509::X520_AttributeTypeAndValue::GetASN1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18159aec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"GetASN1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X520_AttributeTypeAndValue.SelectBestEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mono::Security::X509::X520_AttributeTypeAndValue::*)()>(&::Mono::Security::X509::X520_AttributeTypeAndValue::SelectBestEncoding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18159b180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"SelectBestEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_oid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oid;
}
constexpr ::StringW const& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_oid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oid;
}
constexpr void Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_set_oid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oid = value;
}
constexpr ::StringW& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_attrValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attrValue;
}
constexpr ::StringW const& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_attrValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attrValue;
}
constexpr void Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_set_attrValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attrValue = value;
}
constexpr int32_t& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_upperBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperBound;
}
constexpr int32_t const& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_upperBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upperBound;
}
constexpr void Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_set_upperBound(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upperBound = value;
}
constexpr uint8_t& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr uint8_t const& Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void Mono::Security::X509::X520_AttributeTypeAndValue::__cordl_internal_set_encoding(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
inline void Mono::Security::X509::X520_AttributeTypeAndValue::_ctor(::StringW  oid, int32_t  upperBound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, upperBound);
}
inline void Mono::Security::X509::X520_AttributeTypeAndValue::_ctor(::StringW  oid, int32_t  upperBound, uint8_t  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, upperBound, encoding);
}
inline void Mono::Security::X509::X520_AttributeTypeAndValue::set_Value(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"set_Value", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X520_AttributeTypeAndValue::GetASN1(uint8_t  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"GetASN1", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, encoding);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X520_AttributeTypeAndValue::GetASN1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"GetASN1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method);
}
inline uint8_t Mono::Security::X509::X520_AttributeTypeAndValue::SelectBestEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_AttributeTypeAndValue*>(),
                        {"SelectBestEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_AttributeTypeAndValue* Mono::Security::X509::X520_AttributeTypeAndValue::New_ctor(::StringW  oid, int32_t  upperBound)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_AttributeTypeAndValue*>(oid, upperBound));
}
inline ::Mono::Security::X509::X520_AttributeTypeAndValue* Mono::Security::X509::X520_AttributeTypeAndValue::New_ctor(::StringW  oid, int32_t  upperBound, uint8_t  encoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_AttributeTypeAndValue*>(oid, upperBound, encoding));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_AttributeTypeAndValue::X520_AttributeTypeAndValue()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_CommonName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_CommonName::*)()>(&::Mono::Security::X509::X520_CommonName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159d950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_CommonName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_CommonName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_CommonName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_CommonName* Mono::Security::X509::X520_CommonName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_CommonName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_CommonName::X520_CommonName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_SerialNumber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_SerialNumber::*)()>(&::Mono::Security::X509::X520_SerialNumber::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815a5e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_SerialNumber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_SerialNumber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_SerialNumber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_SerialNumber* Mono::Security::X509::X520_SerialNumber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_SerialNumber*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_SerialNumber::X520_SerialNumber()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_LocalityName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_LocalityName::*)()>(&::Mono::Security::X509::X520_LocalityName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_LocalityName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_LocalityName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_LocalityName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_LocalityName* Mono::Security::X509::X520_LocalityName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_LocalityName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_LocalityName::X520_LocalityName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_StateOrProvinceName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_StateOrProvinceName::*)()>(&::Mono::Security::X509::X520_StateOrProvinceName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815a6c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_StateOrProvinceName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_StateOrProvinceName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_StateOrProvinceName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_StateOrProvinceName* Mono::Security::X509::X520_StateOrProvinceName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_StateOrProvinceName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_StateOrProvinceName::X520_StateOrProvinceName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_OrganizationName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_OrganizationName::*)()>(&::Mono::Security::X509::X520_OrganizationName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_OrganizationName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_OrganizationName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_OrganizationName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_OrganizationName* Mono::Security::X509::X520_OrganizationName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_OrganizationName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_OrganizationName::X520_OrganizationName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_OrganizationalUnitName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_OrganizationalUnitName::*)()>(&::Mono::Security::X509::X520_OrganizationalUnitName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_OrganizationalUnitName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_OrganizationalUnitName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_OrganizationalUnitName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_OrganizationalUnitName* Mono::Security::X509::X520_OrganizationalUnitName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_OrganizationalUnitName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_OrganizationalUnitName::X520_OrganizationalUnitName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_EmailAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_EmailAddress::*)()>(&::Mono::Security::X509::X520_EmailAddress::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_EmailAddress*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_EmailAddress::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_EmailAddress*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_EmailAddress* Mono::Security::X509::X520_EmailAddress::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_EmailAddress*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_EmailAddress::X520_EmailAddress()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_DomainComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_DomainComponent::*)()>(&::Mono::Security::X509::X520_DomainComponent::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_DomainComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_DomainComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_DomainComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_DomainComponent* Mono::Security::X509::X520_DomainComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_DomainComponent*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_DomainComponent::X520_DomainComponent()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_UserId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_UserId::*)()>(&::Mono::Security::X509::X520_UserId::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815a6cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_UserId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_UserId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_UserId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_UserId* Mono::Security::X509::X520_UserId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_UserId*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_UserId::X520_UserId()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_Oid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_Oid::*)(::StringW)>(&::Mono::Security::X509::X520_Oid::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Oid*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_Oid::_ctor(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Oid*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid);
}
inline ::Mono::Security::X509::X520_Oid* Mono::Security::X509::X520_Oid::New_ctor(::StringW  oid)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_Oid*>(oid));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_Oid::X520_Oid()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_Title._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_Title::*)()>(&::Mono::Security::X509::X520_Title::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815a6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Title*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_Title::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Title*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_Title* Mono::Security::X509::X520_Title::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_Title*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_Title::X520_Title()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_CountryName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_CountryName::*)()>(&::Mono::Security::X509::X520_CountryName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_CountryName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_CountryName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_CountryName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_CountryName* Mono::Security::X509::X520_CountryName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_CountryName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_CountryName::X520_CountryName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_DnQualifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_DnQualifier::*)()>(&::Mono::Security::X509::X520_DnQualifier::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_DnQualifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_DnQualifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_DnQualifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_DnQualifier* Mono::Security::X509::X520_DnQualifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_DnQualifier*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_DnQualifier::X520_DnQualifier()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_Surname._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_Surname::*)()>(&::Mono::Security::X509::X520_Surname::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815a6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Surname*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_Surname::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Surname*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_Surname* Mono::Security::X509::X520_Surname::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_Surname*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_Surname::X520_Surname()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_GivenName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_GivenName::*)()>(&::Mono::Security::X509::X520_GivenName::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_GivenName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_GivenName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_GivenName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_GivenName* Mono::Security::X509::X520_GivenName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_GivenName*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_GivenName::X520_GivenName()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X520_Initial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X520_Initial::*)()>(&::Mono::Security::X509::X520_Initial::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18159e8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Initial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X520_Initial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X520_Initial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X520_Initial* Mono::Security::X509::X520_Initial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X520_Initial*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520_Initial::X520_Initial()   {
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X520::X520()   {
}
