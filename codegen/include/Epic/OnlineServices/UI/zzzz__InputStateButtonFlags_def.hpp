#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/InputStateButtonFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateButtonFlags)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct InputStateButtonFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::InputStateButtonFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::InputStateButtonFlags, "Epic.OnlineServices.UI", "InputStateButtonFlags");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.InputStateButtonFlags
struct CORDL_TYPE InputStateButtonFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputStateButtonFlags_Unwrapped
enum struct __InputStateButtonFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DPadLeft = static_cast<int32_t>(0x1),
__E_DPadRight = static_cast<int32_t>(0x2),
__E_DPadDown = static_cast<int32_t>(0x4),
__E_DPadUp = static_cast<int32_t>(0x8),
__E_FaceButtonLeft = static_cast<int32_t>(0x10),
__E_FaceButtonRight = static_cast<int32_t>(0x20),
__E_FaceButtonBottom = static_cast<int32_t>(0x40),
__E_FaceButtonTop = static_cast<int32_t>(0x80),
__E_LeftShoulder = static_cast<int32_t>(0x100),
__E_RightShoulder = static_cast<int32_t>(0x200),
__E_LeftTrigger = static_cast<int32_t>(0x400),
__E_RightTrigger = static_cast<int32_t>(0x800),
__E_SpecialLeft = static_cast<int32_t>(0x1000),
__E_SpecialRight = static_cast<int32_t>(0x2000),
__E_LeftThumbstick = static_cast<int32_t>(0x4000),
__E_RightThumbstick = static_cast<int32_t>(0x8000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputStateButtonFlags_Unwrapped () const noexcept {
return static_cast<__InputStateButtonFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputStateButtonFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputStateButtonFlags(int32_t  value__) noexcept;

/// @brief Field DPadDown value: I32(4)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const DPadDown;

/// @brief Field DPadLeft value: I32(1)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const DPadLeft;

/// @brief Field DPadRight value: I32(2)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const DPadRight;

/// @brief Field DPadUp value: I32(8)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const DPadUp;

/// @brief Field FaceButtonBottom value: I32(64)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const FaceButtonBottom;

/// @brief Field FaceButtonLeft value: I32(16)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const FaceButtonLeft;

/// @brief Field FaceButtonRight value: I32(32)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const FaceButtonRight;

/// @brief Field FaceButtonTop value: I32(128)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const FaceButtonTop;

/// @brief Field LeftShoulder value: I32(256)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const LeftShoulder;

/// @brief Field LeftThumbstick value: I32(16384)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const LeftThumbstick;

/// @brief Field LeftTrigger value: I32(1024)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const LeftTrigger;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const None;

/// @brief Field RightShoulder value: I32(512)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const RightShoulder;

/// @brief Field RightThumbstick value: I32(32768)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const RightThumbstick;

/// @brief Field RightTrigger value: I32(2048)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const RightTrigger;

/// @brief Field SpecialLeft value: I32(4096)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const SpecialLeft;

/// @brief Field SpecialRight value: I32(8192)
static ::Epic::OnlineServices::UI::InputStateButtonFlags const SpecialRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7523};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::InputStateButtonFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::InputStateButtonFlags) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
