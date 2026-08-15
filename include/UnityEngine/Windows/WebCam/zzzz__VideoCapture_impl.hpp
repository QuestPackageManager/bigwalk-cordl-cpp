#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/VideoCapture.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__VideoCapture_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__VideoCapture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType::VideoCapture_CaptureResultType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType::VideoCapture_CaptureResultType()   {
}
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType  UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType::Success{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType  UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType::UnknownError{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "resultType", ty: "::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType", modifiers: "", def_value: Some("{}") }, CppParam { name: "hResult", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult::VideoCapture_VideoCaptureResult(::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType  resultType, int64_t  hResult) noexcept  {
this->resultType = resultType;
this->hResult = hResult;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult::VideoCapture_VideoCaptureResult()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18175b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture*)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::Invoke(::UnityEngine::Windows::WebCam::VideoCapture*  captureObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureObject);
}
inline ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback* UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback::VideoCapture_OnVideoCaptureResourceCreatedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback* UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback::VideoCapture_OnVideoModeStartedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback* UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback::VideoCapture_OnVideoModeStoppedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback* UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback::VideoCapture_OnStartedRecordingVideoCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180eb2b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult)>(&::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::Invoke)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180ccb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback* UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback::VideoCapture_OnStoppedRecordingVideoCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Windows::WebCam::VideoCapture*)>(&::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller::ConvertToNative(::UnityEngine::Windows::WebCam::VideoCapture*  videoCapture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, videoCapture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller::VideoCapture_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.MakeCaptureResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult (*)(int64_t)>(&::UnityEngine::Windows::WebCam::VideoCapture::MakeCaptureResult)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18228d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"MakeCaptureResult", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.InvokeOnCreatedVideoCaptureResourceDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*, ::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnCreatedVideoCaptureResourceDelegate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18228d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnCreatedVideoCaptureResourceDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture::*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.InvokeOnVideoModeStartedDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnVideoModeStartedDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18228d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnVideoModeStartedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.InvokeOnVideoModeStoppedDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnVideoModeStoppedDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18228d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnVideoModeStoppedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.InvokeOnStartedRecordingVideoToDiskDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnStartedRecordingVideoToDiskDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18228d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnStartedRecordingVideoToDiskDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.InvokeOnStoppedRecordingVideoToDiskDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*, int64_t)>(&::UnityEngine::Windows::WebCam::VideoCapture::InvokeOnStoppedRecordingVideoToDiskDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18228d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnStoppedRecordingVideoToDiskDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture::*)()>(&::UnityEngine::Windows::WebCam::VideoCapture::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18228d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.Dispose_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture::*)()>(&::UnityEngine::Windows::WebCam::VideoCapture::Dispose_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18228d540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"Dispose_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture::*)()>(&::UnityEngine::Windows::WebCam::VideoCapture::Finalize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18228d5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.DisposeThreaded_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::VideoCapture::*)()>(&::UnityEngine::Windows::WebCam::VideoCapture::DisposeThreaded_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18228d500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"DisposeThreaded_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.Dispose_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture::Dispose_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18228d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"Dispose_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::VideoCapture.DisposeThreaded_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::VideoCapture::DisposeThreaded_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18228d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"DisposeThreaded_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Windows::WebCam::VideoCapture::__cordl_internal_get_m_NativePtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativePtr;
}
constexpr ::System::IntPtr const& UnityEngine::Windows::WebCam::VideoCapture::__cordl_internal_get_m_NativePtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativePtr;
}
constexpr void UnityEngine::Windows::WebCam::VideoCapture::__cordl_internal_set_m_NativePtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativePtr = value;
}
inline void UnityEngine::Windows::WebCam::VideoCapture::setStaticF_HR_SUCCESS(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "HR_SUCCESS", ::UnityEngine::Windows::WebCam::VideoCapture*>(std::forward<int64_t>(value));
}
inline int64_t UnityEngine::Windows::WebCam::VideoCapture::getStaticF_HR_SUCCESS()  {
return ::cordl_internals::getStaticField<int64_t, "HR_SUCCESS", ::UnityEngine::Windows::WebCam::VideoCapture*>();
}
inline ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult UnityEngine::Windows::WebCam::VideoCapture::MakeCaptureResult(int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"MakeCaptureResult", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult>(nullptr, ___internal_method, hResult);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::InvokeOnCreatedVideoCaptureResourceDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*  callback, ::System::IntPtr  nativePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnCreatedVideoCaptureResourceDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, nativePtr);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::_ctor(::System::IntPtr  nativeCaptureObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeCaptureObject);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::InvokeOnVideoModeStartedDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnVideoModeStartedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::InvokeOnVideoModeStoppedDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnVideoModeStoppedDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::InvokeOnStartedRecordingVideoToDiskDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnStartedRecordingVideoToDiskDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::InvokeOnStoppedRecordingVideoToDiskDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*  callback, int64_t  hResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"InvokeOnStoppedRecordingVideoToDiskDelegate", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, hResult);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::Dispose_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"Dispose_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::DisposeThreaded_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"DisposeThreaded_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::Dispose_Internal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"Dispose_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Windows::WebCam::VideoCapture::DisposeThreaded_Internal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::VideoCapture*>(),
                        {"DisposeThreaded_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Windows::WebCam::VideoCapture* UnityEngine::Windows::WebCam::VideoCapture::New_ctor(::System::IntPtr  nativeCaptureObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::VideoCapture*>(nativeCaptureObject));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Windows::WebCam::VideoCapture::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Windows::WebCam::VideoCapture::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::VideoCapture::VideoCapture()   {
}
