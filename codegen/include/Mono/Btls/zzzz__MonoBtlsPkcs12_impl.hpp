#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsPkcs12.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsPkcs12_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsKey_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsPkcs12_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b3dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::*)()>(&::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b3de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle* Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle::MonoBtlsPkcs12_BoringPkcs12Handle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle* (::Mono::Btls::MonoBtlsPkcs12::*)()>(&::Mono::Btls::MonoBtlsPkcs12::get_Handle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b46c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b46d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b470e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_get_count)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b46e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_get_count", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_get_cert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_get_cert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b46de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_get_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, void*, int32_t, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*)>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_import)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181b46ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_import", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_has_private_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_has_private_key)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b46f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_has_private_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.mono_btls_pkcs12_get_private_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_get_private_key)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b46ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_get_private_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsPkcs12::*)()>(&::Mono::Btls::MonoBtlsPkcs12::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b46aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsPkcs12::*)()>(&::Mono::Btls::MonoBtlsPkcs12::get_Count)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b46b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.GetCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::MonoBtlsPkcs12::*)(int32_t)>(&::Mono::Btls::MonoBtlsPkcs12::GetCertificate)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181b464d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"GetCertificate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsPkcs12::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*)>(&::Mono::Btls::MonoBtlsPkcs12::Import)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181b46920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"Import", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.get_HasPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsPkcs12::*)()>(&::Mono::Btls::MonoBtlsPkcs12::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181b46c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"get_HasPrivateKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsPkcs12.GetPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsKey* (::Mono::Btls::MonoBtlsPkcs12::*)()>(&::Mono::Btls::MonoBtlsPkcs12::GetPrivateKey)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181b466f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"GetPrivateKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsKey*& Mono::Btls::MonoBtlsPkcs12::__cordl_internal_get_privateKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKey;
}
constexpr ::Mono::Btls::MonoBtlsKey* const& Mono::Btls::MonoBtlsPkcs12::__cordl_internal_get_privateKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKey;
}
constexpr void Mono::Btls::MonoBtlsPkcs12::__cordl_internal_set_privateKey(::Mono::Btls::MonoBtlsKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateKey = value;
}
inline ::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle* Mono::Btls::MonoBtlsPkcs12::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsPkcs12_BoringPkcs12Handle*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_get_count(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_get_count", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_get_cert(::System::IntPtr  Handle, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_get_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Handle, index);
}
inline int32_t Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_import(::System::IntPtr  chain, void*  data, int32_t  len, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_import", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chain, data, len, password);
}
inline int32_t Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_has_private_key(::System::IntPtr  pkcs12)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_has_private_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pkcs12);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsPkcs12::mono_btls_pkcs12_get_private_key(::System::IntPtr  pkcs12)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"mono_btls_pkcs12_get_private_key", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, pkcs12);
}
inline void Mono::Btls::MonoBtlsPkcs12::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsPkcs12::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsPkcs12::GetCertificate(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"GetCertificate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method, index);
}
inline void Mono::Btls::MonoBtlsPkcs12::Import(::ArrayW<uint8_t>  buffer, ::Microsoft::Win32::SafeHandles::SafePasswordHandle*  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"Import", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafePasswordHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, password);
}
inline bool Mono::Btls::MonoBtlsPkcs12::get_HasPrivateKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"get_HasPrivateKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsKey* Mono::Btls::MonoBtlsPkcs12::GetPrivateKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsPkcs12*>(),
                        {"GetPrivateKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsKey*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsPkcs12* Mono::Btls::MonoBtlsPkcs12::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsPkcs12*>());
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsPkcs12::MonoBtlsPkcs12()   {
}
