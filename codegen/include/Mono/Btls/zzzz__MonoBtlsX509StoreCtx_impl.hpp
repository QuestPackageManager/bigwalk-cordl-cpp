#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509StoreCtx.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Chain_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Error_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreCtx_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Store_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509VerifyParam_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::*)(::System::IntPtr, bool)>(&::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dae860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dae890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr bool& Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::__cordl_internal_get_dontFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontFree;
}
constexpr bool const& Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::__cordl_internal_get_dontFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontFree;
}
constexpr void Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::__cordl_internal_set_dontFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontFree = value;
}
inline void Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, ownsHandle);
}
inline bool Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::New_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(handle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dbb300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181dbb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_from_ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_from_ptr)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbb400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_from_ptr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_get_error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Error (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_get_error)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dbb500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_get_error", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_get_chain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_get_chain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbb480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_get_chain", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dbb610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_set_param
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_set_param)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dbb720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_set_param", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_verify_cert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_verify_cert)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbb830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_verify_cert", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_get_untrusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_get_untrusted)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_get_untrusted", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_up_ref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_up_ref)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbb7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.mono_btls_x509_store_ctx_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbb380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181dbb220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.Create_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::Create_internal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181dba860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Create_internal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509StoreCtx::*)(int32_t, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509StoreCtx::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181dbb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509StoreCtx::*)(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*, ::System::Nullable_1<int32_t>)>(&::Mono::Btls::MonoBtlsX509StoreCtx::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dbb2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Error (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::GetError)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181dbaa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"GetError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.GetChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Chain* (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::GetChain)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181dba940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"GetChain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.GetUntrusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Chain* (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::GetUntrusted)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181dbab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"GetUntrusted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509StoreCtx::*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Btls::MonoBtlsX509Chain*)>(&::Mono::Btls::MonoBtlsX509StoreCtx::Initialize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181dbacb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Initialize", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.SetVerifyParam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509StoreCtx::*)(::Mono::Btls::MonoBtlsX509VerifyParam*)>(&::Mono::Btls::MonoBtlsX509StoreCtx::SetVerifyParam)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181dbae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"SetVerifyParam", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509VerifyParam*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.get_VerifyResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::get_VerifyResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dbb350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"get_VerifyResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.Verify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::Verify)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181dbaff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Verify", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509StoreCtx.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509StoreCtx* (::Mono::Btls::MonoBtlsX509StoreCtx::*)()>(&::Mono::Btls::MonoBtlsX509StoreCtx::Copy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181dba710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Copy", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& Mono::Btls::MonoBtlsX509StoreCtx::__cordl_internal_get_verifyResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyResult;
}
constexpr ::System::Nullable_1<int32_t> const& Mono::Btls::MonoBtlsX509StoreCtx::__cordl_internal_get_verifyResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verifyResult;
}
constexpr void Mono::Btls::MonoBtlsX509StoreCtx::__cordl_internal_set_verifyResult(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verifyResult = value;
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* Mono::Btls::MonoBtlsX509StoreCtx::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_from_ptr(::System::IntPtr  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_from_ptr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ctx);
}
inline ::Mono::Btls::MonoBtlsX509Error Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_get_error(::System::IntPtr  handle, ::by_ref<::System::IntPtr>  error_string)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_get_error", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Error>(nullptr, ___internal_method, handle, error_string);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_get_chain(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_get_chain", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_init(::System::IntPtr  handle, ::System::IntPtr  store, ::System::IntPtr  chain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, store, chain);
}
inline int32_t Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_set_param(::System::IntPtr  handle, ::System::IntPtr  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_set_param", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, param);
}
inline int32_t Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_verify_cert(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_verify_cert", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_get_untrusted(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_get_untrusted", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_up_ref(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsX509StoreCtx::mono_btls_x509_store_ctx_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"mono_btls_x509_store_ctx_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsX509StoreCtx::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle* Mono::Btls::MonoBtlsX509StoreCtx::Create_internal(::System::IntPtr  store_ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Create_internal", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(nullptr, ___internal_method, store_ctx);
}
inline void Mono::Btls::MonoBtlsX509StoreCtx::_ctor(int32_t  preverify_ok, ::System::IntPtr  store_ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preverify_ok, store_ctx);
}
inline void Mono::Btls::MonoBtlsX509StoreCtx::_ctor(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*  ptr, ::System::Nullable_1<int32_t>  verifyResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, verifyResult);
}
inline ::Mono::Btls::MonoBtlsX509Error Mono::Btls::MonoBtlsX509StoreCtx::GetError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"GetError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Error>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Chain* Mono::Btls::MonoBtlsX509StoreCtx::GetChain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"GetChain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Chain*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Chain* Mono::Btls::MonoBtlsX509StoreCtx::GetUntrusted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"GetUntrusted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Chain*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509StoreCtx::Initialize(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509Chain*  chain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Initialize", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, chain);
}
inline void Mono::Btls::MonoBtlsX509StoreCtx::SetVerifyParam(::Mono::Btls::MonoBtlsX509VerifyParam*  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"SetVerifyParam", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509VerifyParam*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param);
}
inline int32_t Mono::Btls::MonoBtlsX509StoreCtx::get_VerifyResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"get_VerifyResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsX509StoreCtx::Verify()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Verify", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx* Mono::Btls::MonoBtlsX509StoreCtx::Copy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509StoreCtx*>(),
                        {"Copy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509StoreCtx*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx* Mono::Btls::MonoBtlsX509StoreCtx::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509StoreCtx*>());
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx* Mono::Btls::MonoBtlsX509StoreCtx::New_ctor(int32_t  preverify_ok, ::System::IntPtr  store_ctx)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509StoreCtx*>(preverify_ok, store_ctx));
}
inline ::Mono::Btls::MonoBtlsX509StoreCtx* Mono::Btls::MonoBtlsX509StoreCtx::New_ctor(::Mono::Btls::MonoBtlsX509StoreCtx_BoringX509StoreCtxHandle*  ptr, ::System::Nullable_1<int32_t>  verifyResult)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509StoreCtx*>(ptr, verifyResult));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509StoreCtx::MonoBtlsX509StoreCtx()   {
}
