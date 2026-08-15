#pragma once
// IWYU pragma private; include "Mono/Btls/X509PalImplBtls.hpp"
#include "Mono/zzzz__X509PalImpl_impl.hpp"
#include "Mono/Btls/zzzz__X509PalImplBtls_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsProvider_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: ::Mono::Btls::X509PalImplBtls._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::X509PalImplBtls::*)(::Mono::Security::Interface::MonoTlsProvider*)>(&::Mono::Btls::X509PalImplBtls::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181dc5940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::Interface::MonoTlsProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509PalImplBtls.get_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsProvider* (::Mono::Btls::X509PalImplBtls::*)()>(&::Mono::Btls::X509PalImplBtls::get_Provider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                        {"get_Provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509PalImplBtls.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl* (::Mono::Btls::X509PalImplBtls::*)(::ArrayW<uint8_t>)>(&::Mono::Btls::X509PalImplBtls::Import)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dc5910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509PalImplBtls.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::Btls::X509PalImplBtls::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&::Mono::Btls::X509PalImplBtls::Import)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dc58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::X509PalImplBtls.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (::Mono::Btls::X509PalImplBtls::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&::Mono::Btls::X509PalImplBtls::Import)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dc58f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                    {::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsProvider*& Mono::Btls::X509PalImplBtls::__cordl_internal_get__Provider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Provider_k__BackingField;
}
constexpr ::Mono::Btls::MonoBtlsProvider* const& Mono::Btls::X509PalImplBtls::__cordl_internal_get__Provider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Provider_k__BackingField;
}
constexpr void Mono::Btls::X509PalImplBtls::__cordl_internal_set__Provider_k__BackingField(::Mono::Btls::MonoBtlsProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Provider_k__BackingField = value;
}
inline void Mono::Btls::X509PalImplBtls::_ctor(::Mono::Security::Interface::MonoTlsProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::Interface::MonoTlsProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::Mono::Btls::MonoBtlsProvider* Mono::Btls::X509PalImplBtls::get_Provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(),
                        {"get_Provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsProvider*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono::Btls::X509PalImplBtls::Import(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl*>(this, ___internal_method, data);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::Btls::X509PalImplBtls::Import(::ArrayW<uint8_t>  data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags  keyStorageFlags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, data, password, keyStorageFlags);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Mono::Btls::X509PalImplBtls::Import(::System::Security::Cryptography::X509Certificates::X509Certificate*  cert)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::X509PalImplBtls*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, ___internal_method, cert);
}
inline ::Mono::Btls::X509PalImplBtls* Mono::Btls::X509PalImplBtls::New_ctor(::Mono::Security::Interface::MonoTlsProvider*  provider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::X509PalImplBtls*>(provider));
}
// Ctor Parameters []
constexpr ::Mono::Btls::X509PalImplBtls::X509PalImplBtls()   {
}
