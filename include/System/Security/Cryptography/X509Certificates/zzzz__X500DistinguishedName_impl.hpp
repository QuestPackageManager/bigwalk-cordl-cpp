#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X500DistinguishedName.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedNameFlags_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedName_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X500DistinguishedNameFlags_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ded2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(::StringW)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181decfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ded140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)()>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181decd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"Decode", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)(bool)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181dece40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                    {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.GetSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181decf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"GetSeparator", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.DecodeRawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X500DistinguishedName::*)()>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181decca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"DecodeRawData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.Canonize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181decb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"Canonize", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X500DistinguishedName.AreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*)>(&::System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181dec9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"AreEqual", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::X509Certificates::X500DistinguishedName::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& System::Security::Cryptography::X509Certificates::X500DistinguishedName::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::Security::Cryptography::X509Certificates::X500DistinguishedName::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::X509Certificates::X500DistinguishedName::__cordl_internal_get_canonEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canonEncoding;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::X509Certificates::X500DistinguishedName::__cordl_internal_get_canonEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canonEncoding;
}
constexpr void System::Security::Cryptography::X509Certificates::X500DistinguishedName::__cordl_internal_set_canonEncoding(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canonEncoding = value;
}
inline void System::Security::Cryptography::X509Certificates::X500DistinguishedName::_ctor(::ArrayW<uint8_t>  encodedDistinguishedName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedDistinguishedName);
}
inline void System::Security::Cryptography::X509Certificates::X500DistinguishedName::_ctor(::StringW  distinguishedName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distinguishedName);
}
inline void System::Security::Cryptography::X509Certificates::X500DistinguishedName::_ctor(::StringW  distinguishedName, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distinguishedName, flag);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X500DistinguishedName::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"Decode", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, flag);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format(bool  multiLine)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, multiLine);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator(::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"GetSeparator", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, flag);
}
inline void System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"DecodeRawData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"Canonize", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s);
}
inline bool System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual(::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  name1, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*  name2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(),
                        {"AreEqual", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name1, name2);
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor(::ArrayW<uint8_t>  encodedDistinguishedName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(encodedDistinguishedName));
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor(::StringW  distinguishedName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(distinguishedName));
}
inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor(::StringW  distinguishedName, ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  flag)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(distinguishedName, flag));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName::X500DistinguishedName()   {
}
constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags  System::Security::Cryptography::X509Certificates::X500DistinguishedName::AllFlags{static_cast<int32_t>(0x71f1)};
