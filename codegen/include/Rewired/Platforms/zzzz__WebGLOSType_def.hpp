#pragma once
// IWYU pragma private; include "Rewired/Platforms/WebGLOSType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebGLOSType)
// Forward declare root types
namespace Rewired::Platforms {
struct WebGLOSType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::WebGLOSType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::WebGLOSType, "Rewired.Platforms", "WebGLOSType");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.WebGLOSType
struct CORDL_TYPE WebGLOSType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebGLOSType_Unwrapped
enum struct __WebGLOSType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_None = static_cast<int32_t>(0x0),
__E_Windows = static_cast<int32_t>(0x1),
__E_OSX = static_cast<int32_t>(0x2),
__E_Linux = static_cast<int32_t>(0x3),
__E_Android = static_cast<int32_t>(0x4),
__E_iOS = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebGLOSType_Unwrapped () const noexcept {
return static_cast<__WebGLOSType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebGLOSType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebGLOSType(int32_t  value__) noexcept;

/// @brief Field Android value: I32(4)
static ::Rewired::Platforms::WebGLOSType const Android;

/// @brief Field Linux value: I32(3)
static ::Rewired::Platforms::WebGLOSType const Linux;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::WebGLOSType const None;

/// @brief Field OSX value: I32(2)
static ::Rewired::Platforms::WebGLOSType const OSX;

/// @brief Field Unknown value: I32(-1)
static ::Rewired::Platforms::WebGLOSType const Unknown;

/// @brief Field Windows value: I32(1)
static ::Rewired::Platforms::WebGLOSType const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iOS value: I32(5)
static ::Rewired::Platforms::WebGLOSType const iOS;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::WebGLOSType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::WebGLOSType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
