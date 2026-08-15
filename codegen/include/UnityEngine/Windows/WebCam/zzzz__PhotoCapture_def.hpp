#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/PhotoCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotoCapture)
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
class PhotoCaptureFrame;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_BindingsMarshaller;
}
namespace UnityEngine::Windows::WebCam {
struct PhotoCapture_CaptureResultType;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnCaptureResourceCreatedCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnCapturedToDiskCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnCapturedToMemoryCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnPhotoModeStartedCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnPhotoModeStoppedCallback;
}
namespace UnityEngine::Windows::WebCam {
struct PhotoCapture_PhotoCaptureResult;
}
// Forward declare root types
namespace UnityEngine::Windows::WebCam {
struct PhotoCapture_CaptureResultType;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_BindingsMarshaller;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnCaptureResourceCreatedCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnCapturedToDiskCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnCapturedToMemoryCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnPhotoModeStartedCallback;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCapture_OnPhotoModeStoppedCallback;
}
namespace UnityEngine::Windows::WebCam {
struct PhotoCapture_PhotoCaptureResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*);
MARK_VAL_T(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType, "UnityEngine.Windows.WebCam", "PhotoCapture/CaptureResultType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture*, "UnityEngine.Windows.WebCam", "PhotoCapture");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller*, "UnityEngine.Windows.WebCam", "PhotoCapture/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnCaptureResourceCreatedCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnCapturedToDiskCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnCapturedToMemoryCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnPhotoModeStartedCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnPhotoModeStoppedCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, "UnityEngine.Windows.WebCam", "PhotoCapture/PhotoCaptureResult");
// Dependencies 
namespace UnityEngine::Windows::WebCam {
// Is value type: true
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/CaptureResultType
struct CORDL_TYPE PhotoCapture_CaptureResultType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotoCapture_CaptureResultType_Unwrapped
enum struct __PhotoCapture_CaptureResultType_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_UnknownError = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotoCapture_CaptureResultType_Unwrapped () const noexcept {
return static_cast<__PhotoCapture_CaptureResultType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_CaptureResultType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhotoCapture_CaptureResultType(int32_t  value__) noexcept;

/// @brief Field Success value: I32(0)
static ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType const Success;

/// @brief Field UnknownError value: I32(1)
static ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType const UnknownError;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies UnityEngine.Windows.WebCam.PhotoCapture::CaptureResultType
namespace UnityEngine::Windows::WebCam {
// Is value type: true
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult
struct CORDL_TYPE PhotoCapture_PhotoCaptureResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_PhotoCaptureResult() ;

// Ctor Parameters [CppParam { name: "resultType", ty: "::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType", modifiers: "", def_value: None }, CppParam { name: "hResult", ty: "int64_t", modifiers: "", def_value: None }]
constexpr PhotoCapture_PhotoCaptureResult(::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType  resultType, int64_t  hResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10812};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field resultType, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType  resultType;

/// @brief Field hResult, offset: 0x8, size: 0x8, def value: None
 int64_t  hResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, resultType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult, hResult) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/OnCaptureResourceCreatedCallback
class CORDL_TYPE PhotoCapture_OnCaptureResourceCreatedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture*  captureObject) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18175b3c0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_OnCaptureResourceCreatedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnCaptureResourceCreatedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture_OnCaptureResourceCreatedCallback(PhotoCapture_OnCaptureResourceCreatedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnCaptureResourceCreatedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture_OnCaptureResourceCreatedCallback(PhotoCapture_OnCaptureResourceCreatedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback
class CORDL_TYPE PhotoCapture_OnPhotoModeStartedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_OnPhotoModeStartedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnPhotoModeStartedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture_OnPhotoModeStartedCallback(PhotoCapture_OnPhotoModeStartedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnPhotoModeStartedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture_OnPhotoModeStartedCallback(PhotoCapture_OnPhotoModeStartedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10814};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStoppedCallback
class CORDL_TYPE PhotoCapture_OnPhotoModeStoppedCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_OnPhotoModeStoppedCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnPhotoModeStoppedCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture_OnPhotoModeStoppedCallback(PhotoCapture_OnPhotoModeStoppedCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnPhotoModeStoppedCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture_OnPhotoModeStoppedCallback(PhotoCapture_OnPhotoModeStoppedCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10815};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToDiskCallback
class CORDL_TYPE PhotoCapture_OnCapturedToDiskCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_OnCapturedToDiskCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnCapturedToDiskCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture_OnCapturedToDiskCallback(PhotoCapture_OnCapturedToDiskCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnCapturedToDiskCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture_OnCapturedToDiskCallback(PhotoCapture_OnCapturedToDiskCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback
class CORDL_TYPE PhotoCapture_OnCapturedToMemoryCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180dc0f40, size 0x27ac0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult  result, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*  photoCaptureFrame) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1812cae90, size 0xcd0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_OnCapturedToMemoryCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnCapturedToMemoryCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture_OnCapturedToMemoryCallback(PhotoCapture_OnCapturedToMemoryCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_OnCapturedToMemoryCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture_OnCapturedToMemoryCallback(PhotoCapture_OnCapturedToMemoryCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.Object
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture/BindingsMarshaller
class CORDL_TYPE PhotoCapture_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Windows::WebCam::PhotoCapture*  photoCapture) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCapture_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture_BindingsMarshaller(PhotoCapture_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture_BindingsMarshaller(PhotoCapture_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCapture
class CORDL_TYPE PhotoCapture : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Windows::WebCam::PhotoCapture_BindingsMarshaller;

using CaptureResultType = ::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType;

using OnCaptureResourceCreatedCallback = ::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback;

using OnCapturedToDiskCallback = ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback;

using OnCapturedToMemoryCallback = ::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback;

using OnPhotoModeStartedCallback = ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback;

using OnPhotoModeStoppedCallback = ::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback;

using PhotoCaptureResult = ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult;

/// @brief Field HR_SUCCESS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HR_SUCCESS, put=setStaticF_HR_SUCCESS)) int64_t  HR_SUCCESS;

/// @brief Field m_NativePtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NativePtr, put=__cordl_internal_set_m_NativePtr)) ::System::IntPtr  m_NativePtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1822803b0, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DisposeThreaded_Internal, addr 0x182280340, size 0x30, virtual false, abstract: false, final false
inline void DisposeThreaded_Internal() ;

/// @brief Method DisposeThreaded_Internal_Injected, addr 0x182280330, size 0x10, virtual false, abstract: false, final false
static inline void DisposeThreaded_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Dispose_Internal, addr 0x182280380, size 0x30, virtual false, abstract: false, final false
inline void Dispose_Internal() ;

/// @brief Method Dispose_Internal_Injected, addr 0x182280370, size 0x10, virtual false, abstract: false, final false
static inline void Dispose_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Finalize, addr 0x1822803f0, size 0x30, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InvokeOnCapturedPhotoToDiskDelegate, addr 0x182280420, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnCapturedPhotoToDiskDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToDiskCallback*  callback, int64_t  hResult) ;

/// @brief Method InvokeOnCapturedPhotoToMemoryDelegate, addr 0x182280470, size 0xf0, virtual false, abstract: false, final false
static inline void InvokeOnCapturedPhotoToMemoryDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCapturedToMemoryCallback*  callback, int64_t  hResult, ::System::IntPtr  photoCaptureFramePtr) ;

/// @brief Method InvokeOnCreatedResourceDelegate, addr 0x182280560, size 0x60, virtual false, abstract: false, final false
static inline void InvokeOnCreatedResourceDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnCaptureResourceCreatedCallback*  callback, ::System::IntPtr  nativePtr) ;

/// @brief Method InvokeOnPhotoModeStartedDelegate, addr 0x182280420, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnPhotoModeStartedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStartedCallback*  callback, int64_t  hResult) ;

/// @brief Method InvokeOnPhotoModeStoppedDelegate, addr 0x182280420, size 0x50, virtual false, abstract: false, final false
static inline void InvokeOnPhotoModeStoppedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture_OnPhotoModeStoppedCallback*  callback, int64_t  hResult) ;

/// @brief Method MakeCaptureResult, addr 0x1822805c0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Windows::WebCam::PhotoCapture_PhotoCaptureResult MakeCaptureResult(int64_t  hResult) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCapture* New_ctor(::System::IntPtr  nativeCaptureObject) ;

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
constexpr PhotoCapture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCapture(PhotoCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCapture(PhotoCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10819};

/// @brief Field m_NativePtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_NativePtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCapture, ___m_NativePtr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCapture) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
