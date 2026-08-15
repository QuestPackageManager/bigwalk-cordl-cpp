#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/PhotoCaptureFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Windows/WebCam/zzzz__CapturePixelFormat_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotoCaptureFrame)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Windows::WebCam {
struct CapturePixelFormat;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCaptureFrame_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Windows::WebCam {
class PhotoCaptureFrame;
}
namespace UnityEngine::Windows::WebCam {
class PhotoCaptureFrame_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCaptureFrame*);
MARK_REF_T(::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCaptureFrame*, "UnityEngine.Windows.WebCam", "PhotoCaptureFrame");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller*, "UnityEngine.Windows.WebCam", "PhotoCaptureFrame/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCaptureFrame/BindingsMarshaller
class CORDL_TYPE PhotoCaptureFrame_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Windows::WebCam::PhotoCaptureFrame*  photoCaptureFrame) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCaptureFrame_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCaptureFrame_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCaptureFrame_BindingsMarshaller(PhotoCaptureFrame_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCaptureFrame_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCaptureFrame_BindingsMarshaller(PhotoCaptureFrame_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
// Dependencies System.IntPtr, System.Object, UnityEngine.Windows.WebCam.CapturePixelFormat
namespace UnityEngine::Windows::WebCam {
// Is value type: false
// CS Name: UnityEngine.Windows.WebCam.PhotoCaptureFrame
class CORDL_TYPE PhotoCaptureFrame : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Windows::WebCam::PhotoCaptureFrame_BindingsMarshaller;

/// @brief Field <dataLength>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataLength_k__BackingField, put=__cordl_internal_set__dataLength_k__BackingField)) int32_t  _dataLength_k__BackingField;

/// @brief Field <hasLocationData>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasLocationData_k__BackingField, put=__cordl_internal_set__hasLocationData_k__BackingField)) bool  _hasLocationData_k__BackingField;

/// @brief Field <pixelFormat>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__pixelFormat_k__BackingField, put=__cordl_internal_set__pixelFormat_k__BackingField)) ::UnityEngine::Windows::WebCam::CapturePixelFormat  _pixelFormat_k__BackingField;

 __declspec(property(get=get_dataLength, put=set_dataLength)) int32_t  dataLength;

 __declspec(property(put=set_hasLocationData)) bool  hasLocationData;

/// @brief Field m_NativePtr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NativePtr, put=__cordl_internal_set_m_NativePtr)) ::System::IntPtr  m_NativePtr;

 __declspec(property(put=set_pixelFormat)) ::UnityEngine::Windows::WebCam::CapturePixelFormat  pixelFormat;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Cleanup, addr 0x182280120, size 0x50, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Dispose, addr 0x1822801b0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose_Internal, addr 0x182280180, size 0x30, virtual false, abstract: false, final false
inline void Dispose_Internal() ;

/// @brief Method Dispose_Internal_Injected, addr 0x182280170, size 0x10, virtual false, abstract: false, final false
static inline void Dispose_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Finalize, addr 0x182280120, size 0x50, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetCapturePixelFormat, addr 0x182280210, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Windows::WebCam::CapturePixelFormat GetCapturePixelFormat() ;

/// @brief Method GetCapturePixelFormat_Injected, addr 0x182280200, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Windows::WebCam::CapturePixelFormat GetCapturePixelFormat_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetDataLength, addr 0x182280250, size 0x30, virtual false, abstract: false, final false
inline int32_t GetDataLength() ;

/// @brief Method GetDataLength_Injected, addr 0x182280240, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetDataLength_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetHasLocationData, addr 0x182280290, size 0x30, virtual false, abstract: false, final false
inline bool GetHasLocationData() ;

/// @brief Method GetHasLocationData_Injected, addr 0x182280280, size 0x10, virtual false, abstract: false, final false
static inline bool GetHasLocationData_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* New_ctor(::System::IntPtr  nativePtr) ;

constexpr int32_t const& __cordl_internal_get__dataLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__dataLength_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasLocationData_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasLocationData_k__BackingField() ;

constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat const& __cordl_internal_get__pixelFormat_k__BackingField() const;

constexpr ::UnityEngine::Windows::WebCam::CapturePixelFormat& __cordl_internal_get__pixelFormat_k__BackingField() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_NativePtr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_NativePtr() ;

constexpr void __cordl_internal_set__dataLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__hasLocationData_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__pixelFormat_k__BackingField(::UnityEngine::Windows::WebCam::CapturePixelFormat  value) ;

constexpr void __cordl_internal_set_m_NativePtr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1822802c0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  nativePtr) ;

/// @brief Method get_dataLength, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_dataLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_dataLength, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_dataLength(int32_t  value) ;

/// @brief Method set_hasLocationData, addr 0x1804bdb20, size 0x10, virtual false, abstract: false, final false
inline void set_hasLocationData(bool  value) ;

/// @brief Method set_pixelFormat, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_pixelFormat(::UnityEngine::Windows::WebCam::CapturePixelFormat  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotoCaptureFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotoCaptureFrame", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotoCaptureFrame(PhotoCaptureFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotoCaptureFrame", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotoCaptureFrame(PhotoCaptureFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10821};

/// @brief Field m_NativePtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_NativePtr;

/// @brief Field <dataLength>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____dataLength_k__BackingField;

/// @brief Field <hasLocationData>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____hasLocationData_k__BackingField;

/// @brief Field <pixelFormat>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Windows::WebCam::CapturePixelFormat  ____pixelFormat_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCaptureFrame, ___m_NativePtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCaptureFrame, ____dataLength_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCaptureFrame, ____hasLocationData_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::WebCam::PhotoCaptureFrame, ____pixelFormat_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::PhotoCaptureFrame) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
