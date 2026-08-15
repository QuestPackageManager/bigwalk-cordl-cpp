#pragma once
// IWYU pragma private; include "Rewired/Libraries/SharpDX/RawInput/KeyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyState)
// Forward declare root types
namespace Rewired::Libraries::SharpDX::RawInput {
struct KeyState;
}
// Write type traits
MARK_VAL_T(::Rewired::Libraries::SharpDX::RawInput::KeyState);
DEFINE_IL2CPP_CLASS(::Rewired::Libraries::SharpDX::RawInput::KeyState, "Rewired.Libraries.SharpDX.RawInput", "KeyState");
// Dependencies 
namespace Rewired::Libraries::SharpDX::RawInput {
// Is value type: true
// CS Name: Rewired.Libraries.SharpDX.RawInput.KeyState
struct CORDL_TYPE KeyState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyState_Unwrapped
enum struct __KeyState_Unwrapped : int32_t {
__E_VirtualKeyToItem = static_cast<int32_t>(0x2e),
__E_SetHotKey = static_cast<int32_t>(0x32),
__E_GetHotKey = static_cast<int32_t>(0x33),
__E_KeyFirst = static_cast<int32_t>(0x100),
__E_KeyDown = static_cast<int32_t>(0x100),
__E_KeyUp = static_cast<int32_t>(0x101),
__E_SystemKeyDown = static_cast<int32_t>(0x104),
__E_SystemKeyUp = static_cast<int32_t>(0x105),
__E_KeyLast = static_cast<int32_t>(0x109),
__E_ImeKeyLast = static_cast<int32_t>(0x10f),
__E_ImeKeyDown = static_cast<int32_t>(0x290),
__E_ImeKeyUp = static_cast<int32_t>(0x291),
__E_HotKey = static_cast<int32_t>(0x312),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyState_Unwrapped () const noexcept {
return static_cast<__KeyState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyState(int32_t  value__) noexcept;

/// @brief Field GetHotKey value: I32(51)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const GetHotKey;

/// @brief Field HotKey value: I32(786)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const HotKey;

/// @brief Field ImeKeyDown value: I32(656)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const ImeKeyDown;

/// @brief Field ImeKeyLast value: I32(271)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const ImeKeyLast;

/// @brief Field ImeKeyUp value: I32(657)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const ImeKeyUp;

/// @brief Field KeyDown value: I32(256)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const KeyDown;

/// @brief Field KeyFirst value: I32(256)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const KeyFirst;

/// @brief Field KeyLast value: I32(265)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const KeyLast;

/// @brief Field KeyUp value: I32(257)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const KeyUp;

/// @brief Field SetHotKey value: I32(50)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const SetHotKey;

/// @brief Field SystemKeyDown value: I32(260)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const SystemKeyDown;

/// @brief Field SystemKeyUp value: I32(261)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const SystemKeyUp;

/// @brief Field VirtualKeyToItem value: I32(46)
static ::Rewired::Libraries::SharpDX::RawInput::KeyState const VirtualKeyToItem;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Libraries::SharpDX::RawInput::KeyState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Libraries::SharpDX::RawInput::KeyState) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Libraries::SharpDX::RawInput
