#pragma once
// IWYU pragma private; include "Rewired/Platforms/OSXAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OSXAxis)
// Forward declare root types
namespace Rewired::Platforms {
struct OSXAxis;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::OSXAxis);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::OSXAxis, "Rewired.Platforms", "OSXAxis");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.OSXAxis
struct CORDL_TYPE OSXAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OSXAxis_Unwrapped
enum struct __OSXAxis_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_X = static_cast<int32_t>(0x1),
__E_Y = static_cast<int32_t>(0x2),
__E_Other = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OSXAxis_Unwrapped () const noexcept {
return static_cast<__OSXAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OSXAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OSXAxis(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::OSXAxis const None;

/// @brief Field Other value: I32(3)
static ::Rewired::Platforms::OSXAxis const Other;

/// @brief Field X value: I32(1)
static ::Rewired::Platforms::OSXAxis const X;

/// @brief Field Y value: I32(2)
static ::Rewired::Platforms::OSXAxis const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::OSXAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::OSXAxis) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
