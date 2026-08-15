#pragma once
// IWYU pragma private; include "Rewired/Platforms/WindowsStandalonePrimaryInputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsStandalonePrimaryInputSource)
// Forward declare root types
namespace Rewired::Platforms {
struct WindowsStandalonePrimaryInputSource;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::WindowsStandalonePrimaryInputSource);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::WindowsStandalonePrimaryInputSource, "Rewired.Platforms", "WindowsStandalonePrimaryInputSource");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.WindowsStandalonePrimaryInputSource
struct CORDL_TYPE WindowsStandalonePrimaryInputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WindowsStandalonePrimaryInputSource_Unwrapped
enum struct __WindowsStandalonePrimaryInputSource_Unwrapped : int32_t {
__E_RawInput = static_cast<int32_t>(0x0),
__E_DirectInput = static_cast<int32_t>(0x1),
__E_XInput = static_cast<int32_t>(0x2),
__E_WindowsGamingInput = static_cast<int32_t>(0x3),
__E_SDL2 = static_cast<int32_t>(0xa),
__E_Unity = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WindowsStandalonePrimaryInputSource_Unwrapped () const noexcept {
return static_cast<__WindowsStandalonePrimaryInputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WindowsStandalonePrimaryInputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WindowsStandalonePrimaryInputSource(int32_t  value__) noexcept;

/// @brief Field DirectInput value: I32(1)
static ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const DirectInput;

/// @brief Field RawInput value: I32(0)
static ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const RawInput;

/// @brief Field SDL2 value: I32(10)
static ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const SDL2;

/// @brief Field Unity value: I32(100)
static ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const Unity;

/// @brief Field WindowsGamingInput value: I32(3)
static ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const WindowsGamingInput;

/// @brief Field XInput value: I32(2)
static ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const XInput;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::WindowsStandalonePrimaryInputSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::WindowsStandalonePrimaryInputSource) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
