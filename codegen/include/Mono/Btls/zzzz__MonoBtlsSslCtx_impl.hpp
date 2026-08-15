#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSslCtx.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSelectCallback_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsServerNameCallback_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsVerifyCallback_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Store_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509VerifyParam_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::*)()>(&::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dae490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle* Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle::MonoBtlsSslCtx_BoringSslCtxHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181dbe6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::Invoke(::System::IntPtr  instance, int32_t  preverify_ok, ::System::IntPtr  ctx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance, preverify_ok, ctx);
}
inline ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc* Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc::MonoBtlsSslCtx_NativeVerifyFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181dbe600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::*)(::System::IntPtr, int32_t, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::Invoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::Invoke(::System::IntPtr  instance, int32_t  count, ::System::IntPtr  sizes, ::System::IntPtr  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance, count, sizes, data);
}
inline ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc* Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc::MonoBtlsSslCtx_NativeSelectFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::_ctor)> {
  constexpr static std::size_t size = 0x6880;
  constexpr static std::size_t addrs = 0x1813c5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::Invoke(::System::IntPtr  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance);
}
inline ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc* Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc::MonoBtlsSslCtx_NativeServerNameFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle* (::Mono::Btls::MonoBtlsSslCtx::*)()>(&::Mono::Btls::MonoBtlsSslCtx::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db3c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181db3de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db3cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_cert_verify_callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_cert_verify_callback)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db3ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_cert_verify_callback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_cert_select_callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_cert_select_callback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db3e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_cert_select_callback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_min_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_min_version)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db4150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_min_version", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_max_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_max_version)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db40c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_max_version", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_ciphers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_ciphers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db3f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_ciphers", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_verify_param
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_verify_param)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db4270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_verify_param", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_client_ca_list
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_client_ca_list)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db4020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_client_ca_list", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.mono_btls_ssl_ctx_set_server_name_callback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_server_name_callback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db41e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_server_name_callback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)()>(&::Mono::Btls::MonoBtlsSslCtx::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181db3790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*)>(&::Mono::Btls::MonoBtlsSslCtx::_ctor)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x181db3840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.get_CertificateStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Store* (::Mono::Btls::MonoBtlsSslCtx::*)()>(&::Mono::Btls::MonoBtlsSslCtx::get_CertificateStore)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"get_CertificateStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.VerifyCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsSslCtx::*)(bool, ::Mono::Btls::MonoBtlsX509StoreCtx*)>(&::Mono::Btls::MonoBtlsSslCtx::VerifyCallback)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181db3760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"VerifyCallback", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.NativeVerifyCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::NativeVerifyCallback)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181db2930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"NativeVerifyCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.NativeSelectCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::NativeSelectCallback)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181db2740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"NativeSelectCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.CopyIssuers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(int32_t, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::CopyIssuers)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x181db23b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"CopyIssuers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetVerifyCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::Mono::Btls::MonoBtlsVerifyCallback*, bool)>(&::Mono::Btls::MonoBtlsSslCtx::SetVerifyCallback)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181db34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetVerifyCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsVerifyCallback*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetSelectCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::Mono::Btls::MonoBtlsSelectCallback*)>(&::Mono::Btls::MonoBtlsSslCtx::SetSelectCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db32d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetSelectCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSelectCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetMinVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(int32_t)>(&::Mono::Btls::MonoBtlsSslCtx::SetMinVersion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181db31e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetMinVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetMaxVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(int32_t)>(&::Mono::Btls::MonoBtlsSslCtx::SetMaxVersion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181db30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetMaxVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetCiphers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::ArrayW<int16_t>, bool)>(&::Mono::Btls::MonoBtlsSslCtx::SetCiphers)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181db2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetCiphers", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetVerifyParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::Mono::Btls::MonoBtlsX509VerifyParam*)>(&::Mono::Btls::MonoBtlsSslCtx::SetVerifyParam)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181db35f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetVerifyParam", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509VerifyParam*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetClientCertificateIssuers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::ArrayW<::StringW>)>(&::Mono::Btls::MonoBtlsSslCtx::SetClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181db2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetClientCertificateIssuers", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.SetServerNameCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)(::Mono::Btls::MonoBtlsServerNameCallback*)>(&::Mono::Btls::MonoBtlsSslCtx::SetServerNameCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetServerNameCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsServerNameCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.NativeServerNameCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsSslCtx::NativeServerNameCallback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181db2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"NativeServerNameCallback", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsSslCtx.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsSslCtx::*)()>(&::Mono::Btls::MonoBtlsSslCtx::Close)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db2360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_verifyFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyFunc;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_verifyFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyFunc;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_verifyFunc(::Mono::Btls::MonoBtlsSslCtx_NativeVerifyFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verifyFunc = value;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_selectFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectFunc;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_selectFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectFunc;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_selectFunc(::Mono::Btls::MonoBtlsSslCtx_NativeSelectFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectFunc = value;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_serverNameFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverNameFunc;
}
constexpr ::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_serverNameFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverNameFunc;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_serverNameFunc(::Mono::Btls::MonoBtlsSslCtx_NativeServerNameFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverNameFunc = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_verifyFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_verifyFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_verifyFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verifyFuncPtr = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_selectFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_selectFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_selectFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectFuncPtr = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_serverNameFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverNameFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_serverNameFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverNameFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_serverNameFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverNameFuncPtr = value;
}
constexpr ::Mono::Btls::MonoBtlsVerifyCallback*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_verifyCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyCallback;
}
constexpr ::Mono::Btls::MonoBtlsVerifyCallback* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_verifyCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyCallback;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_verifyCallback(::Mono::Btls::MonoBtlsVerifyCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verifyCallback = value;
}
constexpr ::Mono::Btls::MonoBtlsSelectCallback*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_selectCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectCallback;
}
constexpr ::Mono::Btls::MonoBtlsSelectCallback* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_selectCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectCallback;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_selectCallback(::Mono::Btls::MonoBtlsSelectCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectCallback = value;
}
constexpr ::Mono::Btls::MonoBtlsServerNameCallback*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_serverNameCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverNameCallback;
}
constexpr ::Mono::Btls::MonoBtlsServerNameCallback* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_serverNameCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverNameCallback;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_serverNameCallback(::Mono::Btls::MonoBtlsServerNameCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverNameCallback = value;
}
constexpr ::Mono::Btls::MonoBtlsX509Store*& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_store()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr ::Mono::Btls::MonoBtlsX509Store* const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_store() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_store(::Mono::Btls::MonoBtlsX509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___store = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_instance(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_instancePtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instancePtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsSslCtx::__cordl_internal_get_instancePtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instancePtr;
}
constexpr void Mono::Btls::MonoBtlsSslCtx::__cordl_internal_set_instancePtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instancePtr = value;
}
inline ::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle* Mono::Btls::MonoBtlsSslCtx::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_initialize(::System::IntPtr  handle, ::System::IntPtr  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_initialize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, instance);
}
inline void Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_cert_verify_callback(::System::IntPtr  handle, ::System::IntPtr  func, int32_t  cert_required)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_cert_verify_callback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, func, cert_required);
}
inline void Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_cert_select_callback(::System::IntPtr  handle, ::System::IntPtr  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_cert_select_callback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, func);
}
inline void Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_min_version(::System::IntPtr  handle, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_min_version", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, version);
}
inline void Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_max_version(::System::IntPtr  handle, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_max_version", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, version);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_ciphers(::System::IntPtr  handle, int32_t  count, ::System::IntPtr  data, int32_t  allow_unsupported)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_ciphers", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, count, data, allow_unsupported);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_verify_param(::System::IntPtr  handle, ::System::IntPtr  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_verify_param", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, param);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_client_ca_list(::System::IntPtr  handle, int32_t  count, ::System::IntPtr  sizes, ::System::IntPtr  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_client_ca_list", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, count, sizes, data);
}
inline void Mono::Btls::MonoBtlsSslCtx::mono_btls_ssl_ctx_set_server_name_callback(::System::IntPtr  handle, ::System::IntPtr  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"mono_btls_ssl_ctx_set_server_name_callback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, func);
}
inline void Mono::Btls::MonoBtlsSslCtx::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsSslCtx::_ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsX509Store* Mono::Btls::MonoBtlsSslCtx::get_CertificateStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"get_CertificateStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Store*>(this, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::VerifyCallback(bool  preverify_ok, ::Mono::Btls::MonoBtlsX509StoreCtx*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"VerifyCallback", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, preverify_ok, ctx);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::NativeVerifyCallback(::System::IntPtr  instance, int32_t  preverify_ok, ::System::IntPtr  store_ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"NativeVerifyCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instance, preverify_ok, store_ctx);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::NativeSelectCallback(::System::IntPtr  instance, int32_t  count, ::System::IntPtr  sizes, ::System::IntPtr  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"NativeSelectCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instance, count, sizes, data);
}
inline ::ArrayW<::StringW> Mono::Btls::MonoBtlsSslCtx::CopyIssuers(int32_t  count, ::System::IntPtr  sizesPtr, ::System::IntPtr  dataPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"CopyIssuers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, count, sizesPtr, dataPtr);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetVerifyCallback(::Mono::Btls::MonoBtlsVerifyCallback*  callback, bool  client_cert_required)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetVerifyCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsVerifyCallback*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, client_cert_required);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetSelectCallback(::Mono::Btls::MonoBtlsSelectCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetSelectCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsSelectCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetMinVersion(int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetMinVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetMaxVersion(int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetMaxVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetCiphers(::ArrayW<int16_t>  ciphers, bool  allow_unsupported)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetCiphers", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ciphers, allow_unsupported);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetVerifyParam(::Mono::Btls::MonoBtlsX509VerifyParam*  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetVerifyParam", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509VerifyParam*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetClientCertificateIssuers(::ArrayW<::StringW>  acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetClientCertificateIssuers", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, acceptableIssuers);
}
inline void Mono::Btls::MonoBtlsSslCtx::SetServerNameCallback(::Mono::Btls::MonoBtlsServerNameCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"SetServerNameCallback", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsServerNameCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline int32_t Mono::Btls::MonoBtlsSslCtx::NativeServerNameCallback(::System::IntPtr  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(),
                        {"NativeServerNameCallback", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instance);
}
inline void Mono::Btls::MonoBtlsSslCtx::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsSslCtx*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsSslCtx* Mono::Btls::MonoBtlsSslCtx::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSslCtx*>());
}
inline ::Mono::Btls::MonoBtlsSslCtx* Mono::Btls::MonoBtlsSslCtx::New_ctor(::Mono::Btls::MonoBtlsSslCtx_BoringSslCtxHandle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsSslCtx*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslCtx::MonoBtlsSslCtx()   {
}
