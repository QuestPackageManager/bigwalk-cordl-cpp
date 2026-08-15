#pragma once
// IWYU pragma private; include "Rewired/Platforms/XInputButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputButton)
// Forward declare root types
namespace Rewired::Platforms {
struct XInputButton;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::XInputButton);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XInputButton, "Rewired.Platforms", "XInputButton");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.XInputButton
struct CORDL_TYPE XInputButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XInputButton_Unwrapped
enum struct __XInputButton_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_A = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_X = static_cast<int32_t>(0x3),
__E_Y = static_cast<int32_t>(0x4),
__E_LeftShoulder = static_cast<int32_t>(0x5),
__E_RightShoulder = static_cast<int32_t>(0x6),
__E_LeftThumb = static_cast<int32_t>(0x7),
__E_RightThumb = static_cast<int32_t>(0x8),
__E_Start = static_cast<int32_t>(0x9),
__E_Back = static_cast<int32_t>(0xa),
__E_DPadUp = static_cast<int32_t>(0xb),
__E_DPadRight = static_cast<int32_t>(0xc),
__E_DPadDown = static_cast<int32_t>(0xd),
__E_DPadLeft = static_cast<int32_t>(0xe),
__E_Guide = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XInputButton_Unwrapped () const noexcept {
return static_cast<__XInputButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XInputButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XInputButton(int32_t  value__) noexcept;

/// @brief Field A value: I32(1)
static ::Rewired::Platforms::XInputButton const A;

/// @brief Field B value: I32(2)
static ::Rewired::Platforms::XInputButton const B;

/// @brief Field Back value: I32(10)
static ::Rewired::Platforms::XInputButton const Back;

/// @brief Field DPadDown value: I32(13)
static ::Rewired::Platforms::XInputButton const DPadDown;

/// @brief Field DPadLeft value: I32(14)
static ::Rewired::Platforms::XInputButton const DPadLeft;

/// @brief Field DPadRight value: I32(12)
static ::Rewired::Platforms::XInputButton const DPadRight;

/// @brief Field DPadUp value: I32(11)
static ::Rewired::Platforms::XInputButton const DPadUp;

/// @brief Field Guide value: I32(15)
static ::Rewired::Platforms::XInputButton const Guide;

/// @brief Field LeftShoulder value: I32(5)
static ::Rewired::Platforms::XInputButton const LeftShoulder;

/// @brief Field LeftThumb value: I32(7)
static ::Rewired::Platforms::XInputButton const LeftThumb;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::XInputButton const None;

/// @brief Field RightShoulder value: I32(6)
static ::Rewired::Platforms::XInputButton const RightShoulder;

/// @brief Field RightThumb value: I32(8)
static ::Rewired::Platforms::XInputButton const RightThumb;

/// @brief Field Start value: I32(9)
static ::Rewired::Platforms::XInputButton const Start;

/// @brief Field X value: I32(3)
static ::Rewired::Platforms::XInputButton const X;

/// @brief Field Y value: I32(4)
static ::Rewired::Platforms::XInputButton const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XInputButton, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XInputButton) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
