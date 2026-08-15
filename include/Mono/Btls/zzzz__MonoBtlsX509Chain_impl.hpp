#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Chain.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Chain_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Chain_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::*)()>(&::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dae5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle* Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle::MonoBtlsX509Chain_BoringX509ChainHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle* (::Mono::Btls::MonoBtlsX509Chain::*)()>(&::Mono::Btls::MonoBtlsX509Chain::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db7b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.mono_btls_x509_chain_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181db7db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.mono_btls_x509_chain_get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_get_count)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_get_count", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.mono_btls_x509_chain_get_cert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_get_cert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db7ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_get_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.mono_btls_x509_chain_add_cert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_add_cert)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db7b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_add_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.mono_btls_x509_chain_up_ref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_up_ref)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db7e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.mono_btls_x509_chain_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db7c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Chain::*)()>(&::Mono::Btls::MonoBtlsX509Chain::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181db79b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Chain::*)(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*)>(&::Mono::Btls::MonoBtlsX509Chain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180544e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsX509Chain::*)()>(&::Mono::Btls::MonoBtlsX509Chain::get_Count)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181db7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.GetCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::MonoBtlsX509Chain::*)(int32_t)>(&::Mono::Btls::MonoBtlsX509Chain::GetCertificate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181db7850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"GetCertificate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.AddCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Chain::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsX509Chain::AddCertificate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Chain.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Chain* (::Mono::Btls::MonoBtlsX509Chain::*)()>(&::Mono::Btls::MonoBtlsX509Chain::Copy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db7710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"Copy", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle* Mono::Btls::MonoBtlsX509Chain::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_get_count(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_get_count", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_get_cert(::System::IntPtr  Handle, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_get_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Handle, index);
}
inline int32_t Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_add_cert(::System::IntPtr  chain, ::System::IntPtr  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_add_cert", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chain, x509);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_up_ref(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsX509Chain::mono_btls_x509_chain_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"mono_btls_x509_chain_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsX509Chain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509Chain::_ctor(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsX509Chain::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsX509Chain::GetCertificate(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"GetCertificate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method, index);
}
inline void Mono::Btls::MonoBtlsX509Chain::AddCertificate(::Mono::Btls::MonoBtlsX509*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509);
}
inline ::Mono::Btls::MonoBtlsX509Chain* Mono::Btls::MonoBtlsX509Chain::Copy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Chain*>(),
                        {"Copy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Chain*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Chain* Mono::Btls::MonoBtlsX509Chain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Chain*>());
}
inline ::Mono::Btls::MonoBtlsX509Chain* Mono::Btls::MonoBtlsX509Chain::New_ctor(::Mono::Btls::MonoBtlsX509Chain_BoringX509ChainHandle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Chain*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Chain::MonoBtlsX509Chain()   {
}
