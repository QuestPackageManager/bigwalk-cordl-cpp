#pragma once
// IWYU pragma private; include "Mono/Security/X509/X501.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X501_def.hpp"
#include "Mono/Security/X509/zzzz__X520_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X501.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::X501::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815a8a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ToString", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Mono::Security::ASN1*, bool, ::StringW, bool)>(&::Mono::Security::X509::X501::ToString)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1815a88e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ToString", {}, {::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.AppendEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, bool)>(&::Mono::Security::X509::X501::AppendEntry)> {
  constexpr static std::size_t size = 0x900;
  constexpr static std::size_t addrs = 0x1815a6cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"AppendEntry", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.GetAttributeFromOid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X520_AttributeTypeAndValue* (*)(::StringW)>(&::Mono::Security::X509::X501::GetAttributeFromOid)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x1815a7930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"GetAttributeFromOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.IsOid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Mono::Security::X509::X501::IsOid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815a8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"IsOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ReadAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X520_AttributeTypeAndValue* (*)(::StringW, ::by_ref<int32_t>)>(&::Mono::Security::X509::X501::ReadAttribute)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815a80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.IsHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::Mono::Security::X509::X501::IsHex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815a8020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"IsHex", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ReadHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::Mono::Security::X509::X501::ReadHex)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815a8370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadHex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ReadEscaped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Text::StringBuilder*, ::StringW, int32_t)>(&::Mono::Security::X509::X501::ReadEscaped)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815a8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadEscaped", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ReadQuoted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Text::StringBuilder*, ::StringW, int32_t)>(&::Mono::Security::X509::X501::ReadQuoted)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1815a8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadQuoted", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::Mono::Security::X509::X501::ReadValue)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1815a8610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X501.FromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (*)(::StringW)>(&::Mono::Security::X509::X501::FromString)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1815a75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X501::setStaticF_countryName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "countryName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_countryName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "countryName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_organizationName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "organizationName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_organizationName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "organizationName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_organizationalUnitName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "organizationalUnitName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_organizationalUnitName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "organizationalUnitName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_commonName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "commonName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_commonName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "commonName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_localityName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "localityName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_localityName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "localityName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_stateOrProvinceName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "stateOrProvinceName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_stateOrProvinceName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "stateOrProvinceName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_streetAddress(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "streetAddress", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_streetAddress()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "streetAddress", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_serialNumber(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "serialNumber", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_serialNumber()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "serialNumber", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_domainComponent(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "domainComponent", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_domainComponent()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "domainComponent", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_userid(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "userid", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_userid()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "userid", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_email(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "email", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_email()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "email", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_dnQualifier(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "dnQualifier", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_dnQualifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "dnQualifier", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_title(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "title", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_title()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "title", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_surname(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "surname", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_surname()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "surname", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_givenName(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "givenName", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_givenName()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "givenName", ::Mono::Security::X509::X501*>();
}
inline void Mono::Security::X509::X501::setStaticF_initial(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "initial", ::Mono::Security::X509::X501*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X501::getStaticF_initial()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "initial", ::Mono::Security::X509::X501*>();
}
inline ::StringW Mono::Security::X509::X501::ToString(::Mono::Security::ASN1*  seq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ToString", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, seq);
}
inline ::StringW Mono::Security::X509::X501::ToString(::Mono::Security::ASN1*  seq, bool  reversed, ::StringW  separator, bool  quotes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ToString", {}, {::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, seq, reversed, separator, quotes);
}
inline void Mono::Security::X509::X501::AppendEntry(::System::Text::StringBuilder*  sb, ::Mono::Security::ASN1*  entry, bool  quotes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"AppendEntry", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, entry, quotes);
}
inline ::Mono::Security::X509::X520_AttributeTypeAndValue* Mono::Security::X509::X501::GetAttributeFromOid(::StringW  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"GetAttributeFromOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X520_AttributeTypeAndValue*>(nullptr, ___internal_method, attributeType);
}
inline bool Mono::Security::X509::X501::IsOid(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"IsOid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, oid);
}
inline ::Mono::Security::X509::X520_AttributeTypeAndValue* Mono::Security::X509::X501::ReadAttribute(::StringW  value, ::by_ref<int32_t>  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X520_AttributeTypeAndValue*>(nullptr, ___internal_method, value, pos);
}
inline bool Mono::Security::X509::X501::IsHex(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"IsHex", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::StringW Mono::Security::X509::X501::ReadHex(::StringW  value, ::by_ref<int32_t>  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadHex", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, pos);
}
inline int32_t Mono::Security::X509::X501::ReadEscaped(::System::Text::StringBuilder*  sb, ::StringW  value, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadEscaped", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sb, value, pos);
}
inline int32_t Mono::Security::X509::X501::ReadQuoted(::System::Text::StringBuilder*  sb, ::StringW  value, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadQuoted", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sb, value, pos);
}
inline ::StringW Mono::Security::X509::X501::ReadValue(::StringW  value, ::by_ref<int32_t>  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"ReadValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, pos);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X501::FromString(::StringW  rdn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X501*>(),
                        {"FromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(nullptr, ___internal_method, rdn);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X501::X501()   {
}
