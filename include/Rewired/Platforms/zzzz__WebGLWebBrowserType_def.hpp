#pragma once
// IWYU pragma private; include "Rewired/Platforms/WebGLWebBrowserType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebGLWebBrowserType)
// Forward declare root types
namespace Rewired::Platforms {
struct WebGLWebBrowserType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::WebGLWebBrowserType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::WebGLWebBrowserType, "Rewired.Platforms", "WebGLWebBrowserType");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.WebGLWebBrowserType
struct CORDL_TYPE WebGLWebBrowserType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebGLWebBrowserType_Unwrapped
enum struct __WebGLWebBrowserType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_None = static_cast<int32_t>(0x0),
__E_Chrome = static_cast<int32_t>(0x1),
__E_Firefox = static_cast<int32_t>(0x2),
__E_Opera = static_cast<int32_t>(0x3),
__E_Safari = static_cast<int32_t>(0x4),
__E_InternetExplorer = static_cast<int32_t>(0x5),
__E_Edge = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebGLWebBrowserType_Unwrapped () const noexcept {
return static_cast<__WebGLWebBrowserType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebGLWebBrowserType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebGLWebBrowserType(int32_t  value__) noexcept;

/// @brief Field Chrome value: I32(1)
static ::Rewired::Platforms::WebGLWebBrowserType const Chrome;

/// @brief Field Edge value: I32(6)
static ::Rewired::Platforms::WebGLWebBrowserType const Edge;

/// @brief Field Firefox value: I32(2)
static ::Rewired::Platforms::WebGLWebBrowserType const Firefox;

/// @brief Field InternetExplorer value: I32(5)
static ::Rewired::Platforms::WebGLWebBrowserType const InternetExplorer;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::WebGLWebBrowserType const None;

/// @brief Field Opera value: I32(3)
static ::Rewired::Platforms::WebGLWebBrowserType const Opera;

/// @brief Field Safari value: I32(4)
static ::Rewired::Platforms::WebGLWebBrowserType const Safari;

/// @brief Field Unknown value: I32(-1)
static ::Rewired::Platforms::WebGLWebBrowserType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::WebGLWebBrowserType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::WebGLWebBrowserType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
