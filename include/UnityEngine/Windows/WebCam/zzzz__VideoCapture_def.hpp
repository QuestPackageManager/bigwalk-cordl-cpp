#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/VideoCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoCapture)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_BindingsMarshaller;
}
namespace UnityEngine::Windows::WebCam {
struct VideoCapture_CaptureResultType;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnStartedRecordingVideoCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnStoppedRecordingVideoCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnVideoCaptureResourceCreatedCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnVideoModeStartedCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnVideoModeStoppedCallback;
}
namespace UnityEngine::Windows::WebCam {
struct VideoCapture_VideoCaptureResult;
}
// Forward declare root types
namespace UnityEngine::Windows::WebCam {
struct VideoCapture_CaptureResultType;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_BindingsMarshaller;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnStartedRecordingVideoCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnStoppedRecordingVideoCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnVideoCaptureResourceCreatedCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnVideoModeStartedCallback;
}
namespace UnityEngine::Windows::WebCam {
class VideoCapture_OnVideoModeStoppedCallback;
}
namespace UnityEngine::Windows::WebCam {
struct VideoCapture_VideoCaptureResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture*);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller*);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*);
MARK_VAL_T(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType, "UnityEngine.Windows.WebCam", "VideoCapture/CaptureResultType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture*, "UnityEngine.Windows.WebCam", "VideoCapture");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller*, "UnityEngine.Windows.WebCam", "VideoCapture/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*, "UnityEngine.Windows.WebCam", "VideoCapture/OnStartedRecordingVideoCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*, "UnityEngine.Windows.WebCam", "VideoCapture/OnStoppedRecordingVideoCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*, "UnityEngine.Windows.WebCam", "VideoCapture/OnVideoCaptureResourceCreatedCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*, "UnityEngine.Windows.WebCam", "VideoCapture/OnVideoModeStartedCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*, "UnityEngine.Windows.WebCam", "VideoCapture/OnVideoModeStoppedCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult, "UnityEngine.Windows.WebCam", "VideoCapture/VideoCaptureResult");
// Dependencies 
namespace UnityEngine::Windows::WebCam {
// Is value type: true
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/CaptureResultType
struct CORDL_TYPE VideoCapture_CaptureResultType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VideoCapture_CaptureResultType_Unwrapped
enum struct __VideoCapture_CaptureResultType_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_UnknownError = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoCapture_CaptureResultType_Unwrapped () const noexcept {
return static_cast<__VideoCapture_CaptureResultType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_CaptureResultType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoCapture_CaptureResultType(int32_t  value__) noexcept;

/// @brief Field Success value: I32(0)
static ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType const Success;

/// @brief Field UnknownError value: I32(1)
static ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType const UnknownError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies UnityEngine.Windows.WebCam.VideoCapture::CaptureResultType
namespace UnityEngine::Windows::WebCam {
// Is value type: true
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult
struct CORDL_TYPE VideoCapture_VideoCaptureResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_VideoCaptureResult() ;

// Ctor Parameters [CppParam { name: "resultType", ty: "::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType", modifiers: "", def_value: None }, CppParam { name: "hResult", ty: "int64_t", modifiers: "", def_value: None }]
constexpr VideoCapture_VideoCaptureResult(::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType  resultType, int64_t  hResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field resultType, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType  resultType;

/// @brief Field hResult, offset: 0x8, size: 0x8, def value: None
 int64_t  hResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult, resultType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult, hResult) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/OnVideoCaptureResourceCreatedCallback
class CORDL_TYPE VideoCapture_OnVideoCaptureResourceCreatedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::VideoCapture*  captureObject) ;

static inline ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18175b3c0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_OnVideoCaptureResourceCreatedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnVideoCaptureResourceCreatedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture_OnVideoCaptureResourceCreatedCallback(VideoCapture_OnVideoCaptureResourceCreatedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnVideoCaptureResourceCreatedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture_OnVideoCaptureResourceCreatedCallback(VideoCapture_OnVideoCaptureResourceCreatedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10824};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStartedCallback
class CORDL_TYPE VideoCapture_OnVideoModeStartedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_OnVideoModeStartedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnVideoModeStartedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture_OnVideoModeStartedCallback(VideoCapture_OnVideoModeStartedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnVideoModeStartedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture_OnVideoModeStartedCallback(VideoCapture_OnVideoModeStartedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10825};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/OnVideoModeStoppedCallback
class CORDL_TYPE VideoCapture_OnVideoModeStoppedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_OnVideoModeStoppedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnVideoModeStoppedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture_OnVideoModeStoppedCallback(VideoCapture_OnVideoModeStoppedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnVideoModeStoppedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture_OnVideoModeStoppedCallback(VideoCapture_OnVideoModeStoppedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10826};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/OnStartedRecordingVideoCallback
class CORDL_TYPE VideoCapture_OnStartedRecordingVideoCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_OnStartedRecordingVideoCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnStartedRecordingVideoCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture_OnStartedRecordingVideoCallback(VideoCapture_OnStartedRecordingVideoCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnStartedRecordingVideoCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture_OnStartedRecordingVideoCallback(VideoCapture_OnStartedRecordingVideoCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/OnStoppedRecordingVideoCallback
class CORDL_TYPE VideoCapture_OnStoppedRecordingVideoCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_OnStoppedRecordingVideoCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnStoppedRecordingVideoCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture_OnStoppedRecordingVideoCallback(VideoCapture_OnStoppedRecordingVideoCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_OnStoppedRecordingVideoCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture_OnStoppedRecordingVideoCallback(VideoCapture_OnStoppedRecordingVideoCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10828};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.Object
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture/BindingsMarshaller
class CORDL_TYPE VideoCapture_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Windows::WebCam::VideoCapture*  videoCapture) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture_BindingsMarshaller(VideoCapture_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture_BindingsMarshaller(VideoCapture_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.VideoCapture
class CORDL_TYPE VideoCapture : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Windows::WebCam::VideoCapture_BindingsMarshaller;

using CaptureResultType = ::UnityEngine::Windows::WebCam::VideoCapture_CaptureResultType;

using OnStartedRecordingVideoCallback = ::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback;

using OnStoppedRecordingVideoCallback = ::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback;

using OnVideoCaptureResourceCreatedCallback = ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback;

using OnVideoModeStartedCallback = ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback;

using OnVideoModeStoppedCallback = ::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback;

using VideoCaptureResult = ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult;

/// @brief Field HR_SUCCESS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HR_SUCCESS, put=setStaticF_HR_SUCCESS)) int64_t  HR_SUCCESS;

/// @brief Field m_NativePtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NativePtr, put=__cordl_internal_set_m_NativePtr)) ::System::IntPtr  m_NativePtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18228d570, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeThreaded_Internal, addr 0x18228d500, size 0x30, virtual false, abstract: false, final false
inline void DisposeThreaded_Internal() ;

/// @brief Method DisposeThreaded_Internal_Injected, addr 0x18228d4f0, size 0x10, virtual false, abstract: false, final false
static inline void DisposeThreaded_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Dispose_Internal, addr 0x18228d540, size 0x30, virtual false, abstract: false, final false
inline void Dispose_Internal() ;

/// @brief Method Dispose_Internal_Injected, addr 0x18228d530, size 0x10, virtual false, abstract: false, final false
static inline void Dispose_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Finalize, addr 0x18228d5b0, size 0x30, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InvokeOnCreatedVideoCaptureResourceDelegate, addr 0x18228d5e0, size 0x60, virtual false, abstract: false, final false
static inline void InvokeOnCreatedVideoCaptureResourceDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoCaptureResourceCreatedCallback*  callback, ::System::IntPtr  nativePtr) ;

/// @brief Method InvokeOnStartedRecordingVideoToDiskDelegate, addr 0x18228d640, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnStartedRecordingVideoToDiskDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnStartedRecordingVideoCallback*  callback, int64_t  hResult) ;

/// @brief Method InvokeOnStoppedRecordingVideoToDiskDelegate, addr 0x18228d640, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnStoppedRecordingVideoToDiskDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnStoppedRecordingVideoCallback*  callback, int64_t  hResult) ;

/// @brief Method InvokeOnVideoModeStartedDelegate, addr 0x18228d640, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnVideoModeStartedDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStartedCallback*  callback, int64_t  hResult) ;

/// @brief Method InvokeOnVideoModeStoppedDelegate, addr 0x18228d640, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnVideoModeStoppedDelegate(::UnityEngine::Windows::WebCam::VideoCapture_OnVideoModeStoppedCallback*  callback, int64_t  hResult) ;

/// @brief Method MakeCaptureResult, addr 0x18228d690, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Windows::WebCam::VideoCapture_VideoCaptureResult MakeCaptureResult(int64_t  hResult) ;

static inline ::UnityEngine::Windows::WebCam::VideoCapture* New_ctor(::System::IntPtr  nativeCaptureObject) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_NativePtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_NativePtr() ;

constexpr void __cordl_internal_set_m_NativePtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1804bda40, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  nativeCaptureObject) ;

static inline int64_t getStaticF_HR_SUCCESS() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_HR_SUCCESS(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoCapture(VideoCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoCapture(VideoCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10830};

/// @brief Field m_NativePtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_NativePtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::VideoCapture, ___m_NativePtr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::VideoCapture) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
