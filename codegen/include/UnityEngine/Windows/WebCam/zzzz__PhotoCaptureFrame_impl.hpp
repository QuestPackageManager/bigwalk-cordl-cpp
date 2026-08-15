#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/PhotoCaptureFrame.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__CapturePixelFormat_impl.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__PhotoCaptureFrame_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__CapturePixelFormat_def.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__PhotoCaptureFrame_def.hpp"
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Windows::WebCam::PhotoCaptureFrame*)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller::ConvertToNative(::UnityEngine::Windows::WebCam::PhotoCaptureFrame*  photoCaptureFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, photoCaptureFrame);
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller::PhotoCaptureFrame_BindingsMarshaller()   {
}
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.get_dataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::get_dataLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"get_dataLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.set_dataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(int32_t)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_dataLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"set_dataLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.set_hasLocationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(bool)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_hasLocationData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bdb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"set_hasLocationData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.set_pixelFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(::UnityEngine::Windows::WebCam::CapturePixelFormat)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_pixelFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"set_pixelFormat", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::CapturePixelFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.GetDataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetDataLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetDataLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.GetHasLocationData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetHasLocationData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetHasLocationData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.GetCapturePixelFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Windows::WebCam::CapturePixelFormat (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetCapturePixelFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetCapturePixelFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822802c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::Cleanup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182280120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.Dispose_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182280180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Dispose_Internal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822801b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182280120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                    {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.GetDataLength_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetDataLength_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetDataLength_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.GetHasLocationData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetHasLocationData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetHasLocationData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.GetCapturePixelFormat_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Windows::WebCam::CapturePixelFormat (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetCapturePixelFormat_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetCapturePixelFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Windows::WebCam::PhotoCaptureFrame.Dispose_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182280170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Dispose_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get_m_NativePtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativePtr;
}
constexpr ::System::IntPtr const& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get_m_NativePtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativePtr;
}
constexpr void UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_set_m_NativePtr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativePtr = value;
}
constexpr int32_t& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get__dataLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataLength_k__BackingField;
}
constexpr int32_t const& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get__dataLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataLength_k__BackingField;
}
constexpr void UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_set__dataLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataLength_k__BackingField = value;
}
constexpr bool& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get__hasLocationData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLocationData_k__BackingField;
}
constexpr bool const& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get__hasLocationData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasLocationData_k__BackingField;
}
constexpr void UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_set__hasLocationData_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasLocationData_k__BackingField = value;
}
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get__pixelFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pixelFormat_k__BackingField;
}
constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat const& UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_get__pixelFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pixelFormat_k__BackingField;
}
constexpr void UnityEngine::Windows::WebCam::PhotoCaptureFrame::__cordl_internal_set__pixelFormat_k__BackingField(::UnityEngine::Windows::WebCam::CapturePixelFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pixelFormat_k__BackingField = value;
}
inline int32_t UnityEngine::Windows::WebCam::PhotoCaptureFrame::get_dataLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"get_dataLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_dataLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"set_dataLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_hasLocationData(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"set_hasLocationData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_pixelFormat(::UnityEngine::Windows::WebCam::CapturePixelFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"set_pixelFormat", {}, {::i2c::type_of<::UnityEngine::Windows::WebCam::CapturePixelFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetDataLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetDataLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetHasLocationData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetHasLocationData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Windows::WebCam::CapturePixelFormat UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetCapturePixelFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetCapturePixelFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Windows::WebCam::CapturePixelFormat>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::_ctor(::System::IntPtr  nativePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativePtr);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose_Internal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Dispose_Internal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetDataLength_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetDataLength_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetHasLocationData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetHasLocationData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Windows::WebCam::CapturePixelFormat UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetCapturePixelFormat_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"GetCapturePixelFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Windows::WebCam::CapturePixelFormat>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose_Internal_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(),
                        {"Dispose_Internal_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* UnityEngine::Windows::WebCam::PhotoCaptureFrame::New_ctor(::System::IntPtr  nativePtr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Windows::WebCam::PhotoCaptureFrame*>(nativePtr));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Windows::WebCam::PhotoCaptureFrame::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Windows::WebCam::PhotoCaptureFrame::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::WebCam::PhotoCaptureFrame::PhotoCaptureFrame()   {
}
