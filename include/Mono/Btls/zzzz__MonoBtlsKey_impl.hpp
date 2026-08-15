#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsKey.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsKey_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsKey_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey_BoringKeyHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsKey_BoringKeyHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsKey_BoringKeyHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b3dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey_BoringKeyHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsKey_BoringKeyHandle::*)()>(&::Mono::Btls::MonoBtlsKey_BoringKeyHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b3ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsKey_BoringKeyHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsKey_BoringKeyHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsKey_BoringKeyHandle* Mono::Btls::MonoBtlsKey_BoringKeyHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsKey_BoringKeyHandle::MonoBtlsKey_BoringKeyHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.mono_btls_key_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsKey::mono_btls_key_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b45d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.mono_btls_key_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsKey::mono_btls_key_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b45c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.mono_btls_key_up_ref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsKey::mono_btls_key_up_ref)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b45dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.mono_btls_key_get_bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>, ::by_ref<int32_t>, int32_t)>(&::Mono::Btls::MonoBtlsKey::mono_btls_key_get_bytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b45ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_get_bytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.mono_btls_key_assign_rsa_private_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Btls::MonoBtlsKey::mono_btls_key_assign_rsa_private_key)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b45b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_assign_rsa_private_key", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsKey_BoringKeyHandle* (::Mono::Btls::MonoBtlsKey::*)()>(&::Mono::Btls::MonoBtlsKey::get_Handle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b45b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsKey::*)(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*)>(&::Mono::Btls::MonoBtlsKey::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Btls::MonoBtlsKey::*)(bool)>(&::Mono::Btls::MonoBtlsKey::GetBytes)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181b45960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"GetBytes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsKey* (::Mono::Btls::MonoBtlsKey::*)()>(&::Mono::Btls::MonoBtlsKey::Copy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181b45610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"Copy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsKey.CreateFromRSAPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsKey* (*)(::System::Security::Cryptography::RSA*)>(&::Mono::Btls::MonoBtlsKey::CreateFromRSAPrivateKey)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181b45760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"CreateFromRSAPrivateKey", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Mono::Btls::MonoBtlsKey::mono_btls_key_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Mono::Btls::MonoBtlsKey::mono_btls_key_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsKey::mono_btls_key_up_ref(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsKey::mono_btls_key_get_bytes(::System::IntPtr  handle, ::by_ref<::System::IntPtr>  data, ::by_ref<int32_t>  size, int32_t  include_private_bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_get_bytes", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, data, size, include_private_bits);
}
inline int32_t Mono::Btls::MonoBtlsKey::mono_btls_key_assign_rsa_private_key(::System::IntPtr  handle, ::ArrayW<uint8_t>  der, int32_t  der_length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"mono_btls_key_assign_rsa_private_key", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, der, der_length);
}
inline ::Mono::Btls::MonoBtlsKey_BoringKeyHandle* Mono::Btls::MonoBtlsKey::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsKey::_ctor(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsKey_BoringKeyHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::ArrayW<uint8_t> Mono::Btls::MonoBtlsKey::GetBytes(bool  include_private_bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"GetBytes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, include_private_bits);
}
inline ::Mono::Btls::MonoBtlsKey* Mono::Btls::MonoBtlsKey::Copy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"Copy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsKey*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsKey* Mono::Btls::MonoBtlsKey::CreateFromRSAPrivateKey(::System::Security::Cryptography::RSA*  privateKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsKey*>(),
                        {"CreateFromRSAPrivateKey", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsKey*>(nullptr, ___internal_method, privateKey);
}
inline ::Mono::Btls::MonoBtlsKey* Mono::Btls::MonoBtlsKey::New_ctor(::Mono::Btls::MonoBtlsKey_BoringKeyHandle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsKey*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsKey::MonoBtlsKey()   {
}
