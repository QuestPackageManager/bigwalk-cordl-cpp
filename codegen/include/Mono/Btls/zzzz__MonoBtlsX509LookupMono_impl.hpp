#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509LookupMono.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupMono_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupMono_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Lookup_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Name_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::*)()>(&::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dae750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle* Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::*)(::System::Object*, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181a47440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline int32_t Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::Invoke(::System::IntPtr  instance, ::System::IntPtr  name, ::by_ref<::System::IntPtr>  x509_ptr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance, name, x509_ptr);
}
inline ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc* Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc::MonoBtlsX509LookupMono_BySubjectFunc()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle* (::Mono::Btls::MonoBtlsX509LookupMono::*)()>(&::Mono::Btls::MonoBtlsX509LookupMono::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181db8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.mono_btls_x509_lookup_mono_new
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Mono::Btls::MonoBtlsX509LookupMono::mono_btls_x509_lookup_mono_new)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181db8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"mono_btls_x509_lookup_mono_new", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.mono_btls_x509_lookup_mono_init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509LookupMono::mono_btls_x509_lookup_mono_init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181db8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"mono_btls_x509_lookup_mono_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.mono_btls_x509_lookup_mono_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509LookupMono::mono_btls_x509_lookup_mono_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db8b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"mono_btls_x509_lookup_mono_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMono::*)()>(&::Mono::Btls::MonoBtlsX509LookupMono::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181db8850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.Install
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMono::*)(::Mono::Btls::MonoBtlsX509Lookup*)>(&::Mono::Btls::MonoBtlsX509LookupMono::Install)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181db85a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"Install", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Lookup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.AddCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMono::*)(::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsX509LookupMono::AddCertificate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181db83a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.OnGetBySubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::MonoBtlsX509LookupMono::*)(::Mono::Btls::MonoBtlsX509Name*)>(&::Mono::Btls::MonoBtlsX509LookupMono::OnGetBySubject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.OnGetBySubject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::Mono::Btls::MonoBtlsX509LookupMono::OnGetBySubject)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181db85d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"OnGetBySubject", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509LookupMono.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509LookupMono::*)()>(&::Mono::Btls::MonoBtlsX509LookupMono::Close)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181db8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_gch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gch;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_gch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gch;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_set_gch(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gch = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instance;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_set_instance(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instance = value;
}
constexpr ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_bySubjectFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bySubjectFunc;
}
constexpr ::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc* const& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_bySubjectFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bySubjectFunc;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_set_bySubjectFunc(::Mono::Btls::MonoBtlsX509LookupMono_BySubjectFunc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bySubjectFunc = value;
}
constexpr ::System::IntPtr& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_bySubjectFuncPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bySubjectFuncPtr;
}
constexpr ::System::IntPtr const& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_bySubjectFuncPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bySubjectFuncPtr;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_set_bySubjectFuncPtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bySubjectFuncPtr = value;
}
constexpr ::Mono::Btls::MonoBtlsX509Lookup*& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_lookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
constexpr ::Mono::Btls::MonoBtlsX509Lookup* const& Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_get_lookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
constexpr void Mono::Btls::MonoBtlsX509LookupMono::__cordl_internal_set_lookup(::Mono::Btls::MonoBtlsX509Lookup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookup = value;
}
inline ::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle* Mono::Btls::MonoBtlsX509LookupMono::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509LookupMono_BoringX509LookupMonoHandle*>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509LookupMono::mono_btls_x509_lookup_mono_new()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"mono_btls_x509_lookup_mono_new", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509LookupMono::mono_btls_x509_lookup_mono_init(::System::IntPtr  handle, ::System::IntPtr  instance, ::System::IntPtr  by_subject_func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"mono_btls_x509_lookup_mono_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, instance, by_subject_func);
}
inline int32_t Mono::Btls::MonoBtlsX509LookupMono::mono_btls_x509_lookup_mono_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"mono_btls_x509_lookup_mono_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline void Mono::Btls::MonoBtlsX509LookupMono::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509LookupMono::Install(::Mono::Btls::MonoBtlsX509Lookup*  lookup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"Install", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Lookup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lookup);
}
inline void Mono::Btls::MonoBtlsX509LookupMono::AddCertificate(::Mono::Btls::MonoBtlsX509*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsX509LookupMono::OnGetBySubject(::Mono::Btls::MonoBtlsX509Name*  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method, name);
}
inline int32_t Mono::Btls::MonoBtlsX509LookupMono::OnGetBySubject(::System::IntPtr  instance, ::System::IntPtr  name_ptr, ::by_ref<::System::IntPtr>  x509_ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(),
                        {"OnGetBySubject", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, instance, name_ptr, x509_ptr);
}
inline void Mono::Btls::MonoBtlsX509LookupMono::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509LookupMono*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509LookupMono* Mono::Btls::MonoBtlsX509LookupMono::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509LookupMono*>());
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509LookupMono::MonoBtlsX509LookupMono()   {
}
