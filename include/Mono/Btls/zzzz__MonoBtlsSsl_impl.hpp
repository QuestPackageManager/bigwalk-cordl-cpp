#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSsl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSsl_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBio_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsKey_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslError_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslRenegotiateMode_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSsl_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl_BoringSslHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl_BoringSslHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl_BoringSslHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl_BoringSslHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsSsl_BoringSslHandle::*)()>(&::Mono::Btls::MonoBtlsSsl_BoringSslHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dae520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSsl_BoringSslHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsSsl_BoringSslHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSsl_BoringSslHandle* Mono::Btls::MonoBtlsSsl_BoringSslHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSsl_BoringSslHandle::MonoBtlsSsl_BoringSslHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181a47440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::Invoke(::System::IntPtr  str, ::System::IntPtr  len, ::System::IntPtr  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, str, len, ctx);
}
inline ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc* Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc::MonoBtlsSsl_PrintErrorsCallbackFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_destroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_new)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_new", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_use_certificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_use_certificate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_use_certificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_use_private_key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_use_private_key)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_use_private_key", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_add_chain_certificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_add_chain_certificate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db61c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_add_chain_certificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_accept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_accept)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_accept", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_connect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_connect", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_handshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_handshake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_handshake", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_close)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_close", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_shutdown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_shutdown", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_set_quiet_shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_quiet_shutdown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_quiet_shutdown", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_set_bio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_bio)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_bio", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_read)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db67f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_write)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db6cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_get_error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_error)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_error", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_version)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db65e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_version", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_get_cipher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_cipher)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_cipher", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_get_peer_certificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_peer_certificate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_peer_certificate", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_print_errors_cb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_print_errors_cb)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_print_errors_cb", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_set_server_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_server_name)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_server_name", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_get_server_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_server_name)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_server_name", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_set_renegotiate_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_renegotiate_mode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db6a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_renegotiate_mode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.mono_btls_ssl_renegotiate_pending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::mono_btls_ssl_renegotiate_pending)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db6890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_renegotiate_pending", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Create_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSsl_BoringSslHandle* (*)(::Mono::Btls::MonoBtlsSslCtx*)>(&::Mono::Btls::MonoBtlsSsl::Create_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Create_internal", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::Mono::Btls::MonoBtlsSslCtx*)>(&::Mono::Btls::MonoBtlsSsl::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181db5ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSsl_BoringSslHandle* (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db60f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.SetBio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::Mono::Btls::MonoBtlsBio*)>(&::Mono::Btls::MonoBtlsSsl::SetBio)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181db5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetBio", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsBio*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.ThrowError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::Mono::Btls::MonoBtlsSsl::*)(::StringW)>(&::Mono::Btls::MonoBtlsSsl::ThrowError)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181db5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"ThrowError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsSsl::*)(int32_t)>(&::Mono::Btls::MonoBtlsSsl::GetError)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db4a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetError", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.SetCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsSsl::SetCertificate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181db54c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.SetPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::Mono::Btls::MonoBtlsKey*)>(&::Mono::Btls::MonoBtlsSsl::SetPrivateKey)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetPrivateKey", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsKey*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.AddIntermediateCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsSsl::AddIntermediateCertificate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181db4400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"AddIntermediateCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Accept
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::Accept)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db4300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Accept", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::Connect)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db46c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Handshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::Handshake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db4f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Handshake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.PrintErrorsCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSsl::PrintErrorsCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181db5030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"PrintErrorsCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.GetErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::GetErrors)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181db4ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.PrintErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::PrintErrors)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db50e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"PrintErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsSsl::*)(::System::IntPtr, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsSsl::Read)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db5170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslError (::Mono::Btls::MonoBtlsSsl::*)(::System::IntPtr, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsSsl::Write)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181db5d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::GetVersion)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181db4e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.GetCipher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::GetCipher)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181db4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetCipher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.GetPeerCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::GetPeerCertificate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db4c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetPeerCertificate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.SetServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::StringW)>(&::Mono::Btls::MonoBtlsSsl::SetServerName)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181db5950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.GetServerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::GetServerName)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181db4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetServerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::Shutdown)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181db5ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.SetQuietShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::SetQuietShutdown)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181db5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetQuietShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::Close)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db4580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.SetRenegotiateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSsl::*)(::Mono::Btls::MonoBtlsSslRenegotiateMode)>(&::Mono::Btls::MonoBtlsSsl::SetRenegotiateMode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181db5860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetRenegotiateMode", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslRenegotiateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSsl.RenegotiatePending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsSsl::*)()>(&::Mono::Btls::MonoBtlsSsl::RenegotiatePending)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181db52b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"RenegotiatePending", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsBio*& Mono::Btls::MonoBtlsSsl::__cordl_internal_get_bio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bio;
}
constexpr ::Mono::Btls::MonoBtlsBio* const& Mono::Btls::MonoBtlsSsl::__cordl_internal_get_bio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bio;
}
constexpr void Mono::Btls::MonoBtlsSsl::__cordl_internal_set_bio(::Mono::Btls::MonoBtlsBio*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bio = value;
}
constexpr ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*& Mono::Btls::MonoBtlsSsl::__cordl_internal_get_printErrorsFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___printErrorsFunc;
}
constexpr ::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc* const& Mono::Btls::MonoBtlsSsl::__cordl_internal_get_printErrorsFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___printErrorsFunc;
}
constexpr void Mono::Btls::MonoBtlsSsl::__cordl_internal_set_printErrorsFunc(::Mono::Btls::MonoBtlsSsl_PrintErrorsCallbackFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___printErrorsFunc = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsSsl::__cordl_internal_get_printErrorsFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___printErrorsFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsSsl::__cordl_internal_get_printErrorsFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___printErrorsFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsSsl::__cordl_internal_set_printErrorsFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___printErrorsFuncPtr = value;
}
inline void Mono::Btls::MonoBtlsSsl::mono_btls_ssl_destroy(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsSsl::mono_btls_ssl_new(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_new", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_use_certificate(::System::IntPtr  handle, ::System::IntPtr  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_use_certificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, x509);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_use_private_key(::System::IntPtr  handle, ::System::IntPtr  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_use_private_key", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, key);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_add_chain_certificate(::System::IntPtr  handle, ::System::IntPtr  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_add_chain_certificate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, x509);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_accept(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_accept", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_connect(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_connect", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_handshake(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_handshake", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsSsl::mono_btls_ssl_close(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_close", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_shutdown(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_shutdown", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_quiet_shutdown(::System::IntPtr  handle, int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_quiet_shutdown", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, mode);
}
inline void Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_bio(::System::IntPtr  handle, ::System::IntPtr  bio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_bio", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, bio);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_read(::System::IntPtr  handle, ::System::IntPtr  data, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, data, len);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_write(::System::IntPtr  handle, ::System::IntPtr  data, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, data, len);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_error(::System::IntPtr  handle, int32_t  ret_code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_error", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, ret_code);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_version(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_version", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_cipher(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_cipher", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_peer_certificate(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_peer_certificate", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsSsl::mono_btls_ssl_print_errors_cb(::System::IntPtr  func, ::System::IntPtr  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_print_errors_cb", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, ctx);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_server_name(::System::IntPtr  handle, ::System::IntPtr  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_server_name", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, name);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsSsl::mono_btls_ssl_get_server_name(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_get_server_name", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsSsl::mono_btls_ssl_set_renegotiate_mode(::System::IntPtr  handle, int32_t  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_set_renegotiate_mode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, mode);
}
inline int32_t Mono::Btls::MonoBtlsSsl::mono_btls_ssl_renegotiate_pending(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"mono_btls_ssl_renegotiate_pending", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsSsl_BoringSslHandle* Mono::Btls::MonoBtlsSsl::Create_internal(::Mono::Btls::MonoBtlsSslCtx*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Create_internal", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(nullptr, ___internal_method, ctx);
}
inline void Mono::Btls::MonoBtlsSsl::_ctor(::Mono::Btls::MonoBtlsSslCtx*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::Mono::Btls::MonoBtlsSsl_BoringSslHandle* Mono::Btls::MonoBtlsSsl::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSsl_BoringSslHandle*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::SetBio(::Mono::Btls::MonoBtlsBio*  bio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetBio", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsBio*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bio);
}
inline ::System::Exception* Mono::Btls::MonoBtlsSsl::ThrowError(::StringW  callerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"ThrowError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, callerName);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsSsl::GetError(int32_t  ret_code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetError", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method, ret_code);
}
inline void Mono::Btls::MonoBtlsSsl::SetCertificate(::Mono::Btls::MonoBtlsX509*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509);
}
inline void Mono::Btls::MonoBtlsSsl::SetPrivateKey(::Mono::Btls::MonoBtlsKey*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetPrivateKey", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsKey*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Mono::Btls::MonoBtlsSsl::AddIntermediateCertificate(::Mono::Btls::MonoBtlsX509*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"AddIntermediateCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsSsl::Accept()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Accept", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsSsl::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsSsl::Handshake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Handshake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsSsl::PrintErrorsCallback(::System::IntPtr  str, ::System::IntPtr  len, ::System::IntPtr  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"PrintErrorsCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, str, len, ctx);
}
inline ::StringW Mono::Btls::MonoBtlsSsl::GetErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::PrintErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"PrintErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsSsl::Read(::System::IntPtr  data, ::by_ref<int32_t>  dataSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Read", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method, data, dataSize);
}
inline ::Mono::Btls::MonoBtlsSslError Mono::Btls::MonoBtlsSsl::Write(::System::IntPtr  data, ::by_ref<int32_t>  dataSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Write", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslError>(this, ___internal_method, data, dataSize);
}
inline int32_t Mono::Btls::MonoBtlsSsl::GetVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsSsl::GetCipher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetCipher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsSsl::GetPeerCertificate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetPeerCertificate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::SetServerName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetServerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW Mono::Btls::MonoBtlsSsl::GetServerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"GetServerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::SetQuietShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetQuietShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSsl::SetRenegotiateMode(::Mono::Btls::MonoBtlsSslRenegotiateMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"SetRenegotiateMode", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslRenegotiateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline bool Mono::Btls::MonoBtlsSsl::RenegotiatePending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSsl*>(),
                        {"RenegotiatePending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSsl* Mono::Btls::MonoBtlsSsl::New_ctor(::Mono::Btls::MonoBtlsSslCtx*  ctx)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSsl*>(ctx));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSsl::MonoBtlsSsl()   {
}
