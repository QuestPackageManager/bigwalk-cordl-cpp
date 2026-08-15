#pragma once
// IWYU pragma private; include "Dissonance/Extensions/ArraySegmentExtensions.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Extensions/zzzz__ArraySegmentExtensions_def.hpp"
#include "Dissonance/Extensions/zzzz__ArraySegmentExtensions_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle.get_Ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::*)()>(&::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::get_Ptr)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805dd0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(),
                        {"get_Ptr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::*)(::System::IntPtr, ::System::Runtime::InteropServices::GCHandle)>(&::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805dd0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::*)()>(&::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805dd0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::get_Ptr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(),
                        {"get_Ptr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::_ctor(::System::IntPtr  ptr, ::System::Runtime::InteropServices::GCHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, handle);
}
inline void Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::ArraySegmentExtensions_DisposableHandle(::System::IntPtr  _ptr, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept  {
this->_ptr = _ptr;
this->_handle = _handle;
}
// Ctor Parameters []
constexpr ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle::ArraySegmentExtensions_DisposableHandle()   {
}
template<typename T>
inline ::System::ArraySegment_1<T> Dissonance::Extensions::ArraySegmentExtensions::CopyToSegment(::System::ArraySegment_1<T>  source, ::ArrayW<T>  destination, int32_t  destinationOffset)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions*>(),
                    {"CopyToSegment", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ArraySegment_1<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<T>>(nullptr, ___internal_method, source, destination, destinationOffset);
}
template<typename T>
inline int32_t Dissonance::Extensions::ArraySegmentExtensions::CopyFrom(::System::ArraySegment_1<T>  destination, ::ArrayW<T>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions*>(),
                    {"CopyFrom", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ArraySegment_1<T>>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destination, source);
}
template<typename T>
inline ::ArrayW<T> Dissonance::Extensions::ArraySegmentExtensions::ToArray(::System::ArraySegment_1<T>  segment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions*>(),
                    {"ToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ArraySegment_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, segment);
}
template<typename T>
inline void Dissonance::Extensions::ArraySegmentExtensions::Clear(::System::ArraySegment_1<T>  segment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions*>(),
                    {"Clear", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ArraySegment_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, segment);
}
template<typename T>
inline ::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle Dissonance::Extensions::ArraySegmentExtensions::Pin(::System::ArraySegment_1<T>  segment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Extensions::ArraySegmentExtensions*>(),
                    {"Pin", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ArraySegment_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Extensions::ArraySegmentExtensions_DisposableHandle>(nullptr, ___internal_method, segment);
}
// Ctor Parameters []
constexpr ::Dissonance::Extensions::ArraySegmentExtensions::ArraySegmentExtensions()   {
}
