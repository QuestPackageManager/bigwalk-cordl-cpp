#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Store.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Store_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509FileType_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupType_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Lookup_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Store_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509TrustKind_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::*)()>(&::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dae920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle::MonoBtlsX509Store_BoringX509StoreHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* (::Mono::Btls::MonoBtlsX509Store::*)()>(&::Mono::Btls::MonoBtlsX509Store::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dbc610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.mono_btls_x509_store_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181dbc7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.mono_btls_x509_store_from_ssl_ctx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_from_ssl_ctx)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_from_ssl_ctx", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.mono_btls_x509_store_add_cert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_add_cert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dbc660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_add_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.mono_btls_x509_store_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbc6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.Create_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* (*)()>(&::Mono::Btls::MonoBtlsX509Store::Create_internal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181dbc360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"Create_internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.Create_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* (*)(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*)>(&::Mono::Btls::MonoBtlsX509Store::Create_internal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181dbc270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"Create_internal", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store::*)()>(&::Mono::Btls::MonoBtlsX509Store::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181dbc430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store::*)(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*)>(&::Mono::Btls::MonoBtlsX509Store::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181dbc510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.AddCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsX509Store::AddCertificate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181dbbdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.AddLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Lookup* (::Mono::Btls::MonoBtlsX509Store::*)(::Mono::Btls::MonoBtlsX509LookupType)>(&::Mono::Btls::MonoBtlsX509Store::AddLookup)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181dbc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddLookup", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.AddDirectoryLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store::*)(::StringW, ::Mono::Btls::MonoBtlsX509FileType)>(&::Mono::Btls::MonoBtlsX509Store::AddDirectoryLookup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dbbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddDirectoryLookup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509FileType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.AddCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::Mono::Btls::MonoBtlsX509TrustKind)>(&::Mono::Btls::MonoBtlsX509Store::AddCollection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dbbf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddCollection", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Store.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Store::*)()>(&::Mono::Btls::MonoBtlsX509Store::Close)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181dbc1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>*& Mono::Btls::MonoBtlsX509Store::__cordl_internal_get_lookupHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupHash;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>* const& Mono::Btls::MonoBtlsX509Store::__cordl_internal_get_lookupHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupHash;
}
constexpr void Mono::Btls::MonoBtlsX509Store::__cordl_internal_set_lookupHash(::System::Collections::Generic::Dictionary_2<::System::IntPtr,::Mono::Btls::MonoBtlsX509Lookup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookupHash = value;
}
inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* Mono::Btls::MonoBtlsX509Store::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_from_ssl_ctx(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_from_ssl_ctx", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_add_cert(::System::IntPtr  handle, ::System::IntPtr  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_add_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, x509);
}
inline void Mono::Btls::MonoBtlsX509Store::mono_btls_x509_store_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"mono_btls_x509_store_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* Mono::Btls::MonoBtlsX509Store::Create_internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"Create_internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(nullptr, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle* Mono::Btls::MonoBtlsX509Store::Create_internal(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"Create_internal", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Store_BoringX509StoreHandle*>(nullptr, ___internal_method, ctx);
}
inline void Mono::Btls::MonoBtlsX509Store::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509Store::_ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Mono::Btls::MonoBtlsX509Store::AddCertificate(::Mono::Btls::MonoBtlsX509*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509);
}
inline ::Mono::Btls::MonoBtlsX509Lookup* Mono::Btls::MonoBtlsX509Store::AddLookup(::Mono::Btls::MonoBtlsX509LookupType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddLookup", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Lookup*>(this, ___internal_method, type);
}
inline void Mono::Btls::MonoBtlsX509Store::AddDirectoryLookup(::StringW  dir, ::Mono::Btls::MonoBtlsX509FileType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddDirectoryLookup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509FileType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir, type);
}
inline void Mono::Btls::MonoBtlsX509Store::AddCollection(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  collection, ::Mono::Btls::MonoBtlsX509TrustKind  trust)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(),
                        {"AddCollection", {}, {::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, trust);
}
inline void Mono::Btls::MonoBtlsX509Store::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509Store*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Store* Mono::Btls::MonoBtlsX509Store::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Store*>());
}
inline ::Mono::Btls::MonoBtlsX509Store* Mono::Btls::MonoBtlsX509Store::New_ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  ctx)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Store*>(ctx));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Store::MonoBtlsX509Store()   {
}
