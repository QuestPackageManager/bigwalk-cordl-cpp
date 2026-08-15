#pragma once
// IWYU pragma private; include "Rewired/Platforms/WebplayerPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebplayerPlatform)
// Forward declare root types
namespace Rewired::Platforms {
struct WebplayerPlatform;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::WebplayerPlatform);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::WebplayerPlatform, "Rewired.Platforms", "WebplayerPlatform");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.WebplayerPlatform
struct CORDL_TYPE WebplayerPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WebplayerPlatform_Unwrapped
enum struct __WebplayerPlatform_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Windows = static_cast<int32_t>(0x1),
__E_OSX = static_cast<int32_t>(0x2),
__E_Unknown = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebplayerPlatform_Unwrapped () const noexcept {
return static_cast<__WebplayerPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebplayerPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebplayerPlatform(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::WebplayerPlatform const None;

/// @brief Field OSX value: I32(2)
static ::Rewired::Platforms::WebplayerPlatform const OSX;

/// @brief Field Unknown value: I32(100)
static ::Rewired::Platforms::WebplayerPlatform const Unknown;

/// @brief Field Windows value: I32(1)
static ::Rewired::Platforms::WebplayerPlatform const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::WebplayerPlatform, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::WebplayerPlatform) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
