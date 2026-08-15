#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/PhotoCapture.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__PhotoCapture_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__PhotoCaptureFrame_def.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__PhotoCapture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType::PhotoCapture_CaptureResultType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType::PhotoCapture_CaptureResultType()   {
}
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType  UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType::Success{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType  UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType::UnknownError{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "resultType", ty: "::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType", modifiers: "", def_value: Some("{}") }, CppParam { name: "hResult", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult::PhotoCapture_PhotoCaptureResult(::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType  resultType, int64_t  hResult) noexcept  {
this->resultType = resultType;
this->hResult = hResult;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult::PhotoCapture_PhotoCaptureResult()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18175b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture*)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::Invoke(::UnityEngine::Windows::WebCam::PhotoCapture*  captureObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureObject);
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback* UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback::PhotoCapture_OnCaptureResourceCreatedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback* UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback::PhotoCapture_OnPhotoModeStartedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback* UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback::PhotoCapture_OnPhotoModeStoppedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback* UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback::PhotoCapture_OnCapturedToDiskCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::_ctor)> {
  constexpr static std::size_t size = 0xcd0;
  constexpr static std::size_t addrs = 0x1812cae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*)>(&::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::Invoke)> {
  constexpr static std::size_t size = 0x27ac0;
  constexpr static std::size_t addrs = 0x180dc0f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*  photoCaptureFrame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, photoCaptureFrame);
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback* UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback::PhotoCapture_OnCapturedToMemoryCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Windows::WebCam::PhotoCapture*)>(&::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller::ConvertToNative(::UnityEngine::Windows::WebCam::PhotoCapture*  photoCapture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, photoCapture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller::PhotoCapture_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.MakeCaptureResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult (*)(int64_t)>(&::UnityEngine::Windows::WebCam::PhotoCapture::MakeCaptureResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822805c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"MakeCaptureResult", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.InvokeOnCreatedResourceDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCreatedResourceDelegate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182280560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnCreatedResourceDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture::*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.InvokeOnPhotoModeStartedDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStartedDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182280420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnPhotoModeStartedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.InvokeOnPhotoModeStoppedDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStoppedDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182280420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnPhotoModeStoppedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.InvokeOnCapturedPhotoToDiskDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182280420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnCapturedPhotoToDiskDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.InvokeOnCapturedPhotoToMemoryDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*, int64_t, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182280470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnCapturedPhotoToMemoryDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&::UnityEngine::Windows::WebCam::PhotoCapture::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822803b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.Dispose_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&::UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"Dispose_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&::UnityEngine::Windows::WebCam::PhotoCapture::Finalize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822803f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.DisposeThreaded_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&::UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"DisposeThreaded_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.Dispose_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"Dispose_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCapture.DisposeThreaded_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"DisposeThreaded_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Windows::WebCam::PhotoCapture::__cordl_internal_get_m_NativePtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativePtr;
}
constexpr ::System::IntPtr const& UnityEngine::Windows::WebCam::PhotoCapture::__cordl_internal_get_m_NativePtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativePtr;
}
constexpr void UnityEngine::Windows::WebCam::PhotoCapture::__cordl_internal_set_m_NativePtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativePtr = value;
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::setStaticF_HR_SUCCESS(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "HR_SUCCESS", ::UnityEngine::Windows::WebCam::PhotoCapture*>(std::forward<int64_t>(value));
}
inline int64_t UnityEngine::Windows::WebCam::PhotoCapture::getStaticF_HR_SUCCESS()  {
return ::cordl_internals::getStaticField<int64_t, "HR_SUCCESS", ::UnityEngine::Windows::WebCam::PhotoCapture*>();
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult UnityEngine::Windows::WebCam::PhotoCapture::MakeCaptureResult(int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"MakeCaptureResult", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult>(nullptr, ___internal_method, hResult);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCreatedResourceDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*  callback, ::System::IntPtr  nativePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnCreatedResourceDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, nativePtr);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::_ctor(::System::IntPtr  nativeCaptureObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeCaptureObject);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStartedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnPhotoModeStartedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStoppedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnPhotoModeStoppedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnCapturedPhotoToDiskDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*  callback, int64_t  hResult, ::System::IntPtr  photoCaptureFramePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"InvokeOnCapturedPhotoToMemoryDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult, photoCaptureFramePtr);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"Dispose_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"DisposeThreaded_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"Dispose_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCapture*>(),
                        {"DisposeThreaded_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Windows::WebCam::PhotoCapture* UnityEngine::Windows::WebCam::PhotoCapture::New_ctor(::System::IntPtr  nativeCaptureObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCapture*>(nativeCaptureObject));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Windows::WebCam::PhotoCapture::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Windows::WebCam::PhotoCapture::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCapture()   {
}
