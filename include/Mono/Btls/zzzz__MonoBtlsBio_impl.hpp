#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsBio.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBio_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsBio_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBio_BoringBioHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBio_BoringBioHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsBio_BoringBioHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b3dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBio_BoringBioHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsBio_BoringBioHandle::*)()>(&::Mono::Btls::MonoBtlsBio_BoringBioHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181b3dd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsBio_BoringBioHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsBio_BoringBioHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsBio_BoringBioHandle* Mono::Btls::MonoBtlsBio_BoringBioHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBio_BoringBioHandle::MonoBtlsBio_BoringBioHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsBio::*)(::Mono::Btls::MonoBtlsBio_BoringBioHandle*)>(&::Mono::Btls::MonoBtlsBio::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBio.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsBio_BoringBioHandle* (::Mono::Btls::MonoBtlsBio::*)()>(&::Mono::Btls::MonoBtlsBio::get_Handle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b432e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsBio.mono_btls_bio_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsBio::mono_btls_bio_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b43340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio*>(),
                        {"mono_btls_bio_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsBio::_ctor(::Mono::Btls::MonoBtlsBio_BoringBioHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsBio_BoringBioHandle* Mono::Btls::MonoBtlsBio::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsBio_BoringBioHandle*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsBio::mono_btls_bio_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsBio*>(),
                        {"mono_btls_bio_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsBio* Mono::Btls::MonoBtlsBio::New_ctor(::Mono::Btls::MonoBtlsBio_BoringBioHandle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsBio*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsBio::MonoBtlsBio()   {
}
