#pragma once
// IWYU pragma private; include "UnityEngine/Windows/WebCam/CapturePixelFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CapturePixelFormat)
// Forward declare root types
namespace UnityEngine::Windows::WebCam {
struct CapturePixelFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::WebCam::CapturePixelFormat);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::WebCam::CapturePixelFormat, "UnityEngine.Windows.WebCam", "CapturePixelFormat");
// Dependencies 
namespace UnityEngine::Windows::WebCam {
// Is value type: true
// CS Name: UnityEngine.Windows.WebCam.CapturePixelFormat
struct CORDL_TYPE CapturePixelFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CapturePixelFormat_Unwrapped
enum struct __CapturePixelFormat_Unwrapped : int32_t {
__E_BGRA32 = static_cast<int32_t>(0x0),
__E_NV12 = static_cast<int32_t>(0x1),
__E_JPEG = static_cast<int32_t>(0x2),
__E_PNG = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CapturePixelFormat_Unwrapped () const noexcept {
return static_cast<__CapturePixelFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CapturePixelFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CapturePixelFormat(int32_t  value__) noexcept;

/// @brief Field BGRA32 value: I32(0)
static ::UnityEngine::Windows::WebCam::CapturePixelFormat const BGRA32;

/// @brief Field JPEG value: I32(2)
static ::UnityEngine::Windows::WebCam::CapturePixelFormat const JPEG;

/// @brief Field NV12 value: I32(1)
static ::UnityEngine::Windows::WebCam::CapturePixelFormat const NV12;

/// @brief Field PNG value: I32(3)
static ::UnityEngine::Windows::WebCam::CapturePixelFormat const PNG;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::WebCam::CapturePixelFormat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::WebCam::CapturePixelFormat) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Windows::WebCam
