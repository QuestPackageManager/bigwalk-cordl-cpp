#pragma once
// IWYU pragma private; include "Rewired/Platforms/WindowsUWPPrimaryInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsUWPPrimaryInputSource)
// Forward declare root types
namespace Rewired::Platforms {
struct WindowsUWPPrimaryInputSource;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::WindowsUWPPrimaryInputSource);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::WindowsUWPPrimaryInputSource, "Rewired.Platforms", "WindowsUWPPrimaryInputSource");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.WindowsUWPPrimaryInputSource
struct CORDL_TYPE WindowsUWPPrimaryInputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WindowsUWPPrimaryInputSource_Unwrapped
enum struct __WindowsUWPPrimaryInputSource_Unwrapped : int32_t {
__E_Native = static_cast<int32_t>(0x0),
__E_Unity = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WindowsUWPPrimaryInputSource_Unwrapped () const noexcept {
return static_cast<__WindowsUWPPrimaryInputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WindowsUWPPrimaryInputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WindowsUWPPrimaryInputSource(int32_t  value__) noexcept;

/// @brief Field Native value: I32(0)
static ::Rewired::Platforms::WindowsUWPPrimaryInputSource const Native;

/// @brief Field Unity value: I32(100)
static ::Rewired::Platforms::WindowsUWPPrimaryInputSource const Unity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2260};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::WindowsUWPPrimaryInputSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::WindowsUWPPrimaryInputSource) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
