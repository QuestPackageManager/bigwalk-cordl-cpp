#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Lookup.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupType_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Lookup_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509FileType_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupMono_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupType_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Lookup_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Store_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::*)()>(&::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dae6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle::MonoBtlsX509Lookup_BoringX509LookupHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* (::Mono::Btls::MonoBtlsX509Lookup::*)()>(&::Mono::Btls::MonoBtlsX509Lookup::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db9620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.mono_btls_x509_lookup_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Mono::Btls::MonoBtlsX509LookupType)>(&::Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_new)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_new", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.mono_btls_x509_lookup_add_dir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::Mono::Btls::MonoBtlsX509FileType)>(&::Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_add_dir)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_add_dir", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509FileType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.mono_btls_x509_lookup_add_mono
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_add_mono)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181db9710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_add_mono", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.mono_btls_x509_lookup_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db97a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.mono_btls_x509_lookup_peek_lookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_peek_lookup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db98b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_peek_lookup", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.Create_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* (*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Btls::MonoBtlsX509LookupType)>(&::Mono::Btls::MonoBtlsX509Lookup::Create_internal)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181db9270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"Create_internal", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Lookup::*)(::Mono::Btls::MonoBtlsX509Store*, ::Mono::Btls::MonoBtlsX509LookupType)>(&::Mono::Btls::MonoBtlsX509Lookup::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181db9490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.GetNativeLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Btls::MonoBtlsX509Lookup::*)()>(&::Mono::Btls::MonoBtlsX509Lookup::GetNativeLookup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181db93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"GetNativeLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.AddDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Lookup::*)(::StringW, ::Mono::Btls::MonoBtlsX509FileType)>(&::Mono::Btls::MonoBtlsX509Lookup::AddDirectory)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181db8e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"AddDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509FileType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.AddMono
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Lookup::*)(::Mono::Btls::MonoBtlsX509LookupMono*)>(&::Mono::Btls::MonoBtlsX509Lookup::AddMono)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181db8f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"AddMono", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupMono*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.AddCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Lookup::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsX509Lookup::AddCertificate)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181db8c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Lookup.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Lookup::*)()>(&::Mono::Btls::MonoBtlsX509Lookup::Close)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsX509Store*& Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_get_store()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr ::Mono::Btls::MonoBtlsX509Store* const& Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_get_store() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr void Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_set_store(::Mono::Btls::MonoBtlsX509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___store = value;
}
constexpr ::Mono::Btls::MonoBtlsX509LookupType& Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Mono::Btls::MonoBtlsX509LookupType const& Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_set_type(::Mono::Btls::MonoBtlsX509LookupType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>*& Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_get_monoLookups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monoLookups;
}
constexpr ::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>* const& Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_get_monoLookups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monoLookups;
}
constexpr void Mono::Btls::MonoBtlsX509Lookup::__cordl_internal_set_monoLookups(::System::Collections::Generic::List_1<::Mono::Btls::MonoBtlsX509LookupMono*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monoLookups = value;
}
inline ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* Mono::Btls::MonoBtlsX509Lookup::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_new(::System::IntPtr  store, ::Mono::Btls::MonoBtlsX509LookupType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_new", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, store, type);
}
inline int32_t Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_add_dir(::System::IntPtr  handle, ::System::IntPtr  dir, ::Mono::Btls::MonoBtlsX509FileType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_add_dir", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509FileType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, dir, type);
}
inline int32_t Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_add_mono(::System::IntPtr  handle, ::System::IntPtr  monoLookup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_add_mono", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, monoLookup);
}
inline void Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Lookup::mono_btls_x509_lookup_peek_lookup(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"mono_btls_x509_lookup_peek_lookup", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle* Mono::Btls::MonoBtlsX509Lookup::Create_internal(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509LookupType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"Create_internal", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Lookup_BoringX509LookupHandle*>(nullptr, ___internal_method, store, type);
}
inline void Mono::Btls::MonoBtlsX509Lookup::_ctor(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509LookupType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Store*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, store, type);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Lookup::GetNativeLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"GetNativeLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509Lookup::AddDirectory(::StringW  dir, ::Mono::Btls::MonoBtlsX509FileType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"AddDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509FileType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dir, type);
}
inline void Mono::Btls::MonoBtlsX509Lookup::AddMono(::Mono::Btls::MonoBtlsX509LookupMono*  monoLookup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"AddMono", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509LookupMono*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monoLookup);
}
inline void Mono::Btls::MonoBtlsX509Lookup::AddCertificate(::Mono::Btls::MonoBtlsX509*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Mono::Btls::MonoBtlsX509Lookup::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509Lookup*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Lookup* Mono::Btls::MonoBtlsX509Lookup::New_ctor(::Mono::Btls::MonoBtlsX509Store*  store, ::Mono::Btls::MonoBtlsX509LookupType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Lookup*>(store, type));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Lookup::MonoBtlsX509Lookup()   {
}
