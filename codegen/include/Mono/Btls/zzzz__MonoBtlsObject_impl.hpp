#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsObject.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject_MonoBtlsHandle::*)(::System::IntPtr, bool)>(&::Mono::Btls::MonoBtlsObject_MonoBtlsHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b45600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsObject_MonoBtlsHandle::*)()>(&::Mono::Btls::MonoBtlsObject_MonoBtlsHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180537380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsObject_MonoBtlsHandle::_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, ownsHandle);
}
inline bool Mono::Btls::MonoBtlsObject_MonoBtlsHandle::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* Mono::Btls::MonoBtlsObject_MonoBtlsHandle::New_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(handle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle::MonoBtlsObject_MonoBtlsHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*)>(&::Mono::Btls::MonoBtlsObject::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* (::Mono::Btls::MonoBtlsObject::*)()>(&::Mono::Btls::MonoBtlsObject::get_Handle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181b463f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsObject::*)()>(&::Mono::Btls::MonoBtlsObject::get_IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b46410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.CheckThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)()>(&::Mono::Btls::MonoBtlsObject::CheckThrow)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b461a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckThrow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.SetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::Mono::Btls::MonoBtlsObject::*)(::System::Exception*)>(&::Mono::Btls::MonoBtlsObject::SetException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b463c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.CheckError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)(bool, ::StringW)>(&::Mono::Btls::MonoBtlsObject::CheckError)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181b45e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckError", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.CheckError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)(int32_t, ::StringW)>(&::Mono::Btls::MonoBtlsObject::CheckError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b45fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.CheckLastError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)(::StringW)>(&::Mono::Btls::MonoBtlsObject::CheckLastError)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181b45fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckLastError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.mono_btls_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsObject::mono_btls_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b46450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"mono_btls_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.FreeDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsObject::FreeDataPtr)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b46340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"FreeDataPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)()>(&::Mono::Btls::MonoBtlsObject::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)(bool)>(&::Mono::Btls::MonoBtlsObject::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181b46230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)()>(&::Mono::Btls::MonoBtlsObject::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b462f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsObject.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsObject::*)()>(&::Mono::Btls::MonoBtlsObject::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181b46320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(), 1}
                ));
    return ___internal_method;
  }
};
constexpr ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*& Mono::Btls::MonoBtlsObject::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* const& Mono::Btls::MonoBtlsObject::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void Mono::Btls::MonoBtlsObject::__cordl_internal_set_handle(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::System::Exception*& Mono::Btls::MonoBtlsObject::__cordl_internal_get_lastError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastError;
}
constexpr ::System::Exception* const& Mono::Btls::MonoBtlsObject::__cordl_internal_get_lastError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastError;
}
constexpr void Mono::Btls::MonoBtlsObject::__cordl_internal_set_lastError(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastError = value;
}
inline void Mono::Btls::MonoBtlsObject::_ctor(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsObject_MonoBtlsHandle* Mono::Btls::MonoBtlsObject::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*>(this, ___internal_method);
}
inline bool Mono::Btls::MonoBtlsObject::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsObject::CheckThrow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckThrow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Exception* Mono::Btls::MonoBtlsObject::SetException(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, ex);
}
inline void Mono::Btls::MonoBtlsObject::CheckError(bool  ok, ::StringW  callerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckError", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ok, callerName);
}
inline void Mono::Btls::MonoBtlsObject::CheckError(int32_t  ret, ::StringW  callerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ret, callerName);
}
inline void Mono::Btls::MonoBtlsObject::CheckLastError(::StringW  callerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"CheckLastError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callerName);
}
inline void Mono::Btls::MonoBtlsObject::mono_btls_free(::System::IntPtr  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"mono_btls_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void Mono::Btls::MonoBtlsObject::FreeDataPtr(::System::IntPtr  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"FreeDataPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Mono::Btls::MonoBtlsObject::Close()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsObject::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Mono::Btls::MonoBtlsObject::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsObject::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsObject*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsObject* Mono::Btls::MonoBtlsObject::New_ctor(::Mono::Btls::MonoBtlsObject_MonoBtlsHandle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsObject*>(handle));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mono::Btls::MonoBtlsObject::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::Btls::MonoBtlsObject::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsObject::MonoBtlsObject()   {
}
