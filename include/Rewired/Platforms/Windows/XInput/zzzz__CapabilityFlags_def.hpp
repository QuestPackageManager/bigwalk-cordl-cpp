#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/XInput/CapabilityFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CapabilityFlags)
// Forward declare root types
namespace Rewired::Platforms::Windows::XInput {
struct CapabilityFlags;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::XInput::CapabilityFlags);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::XInput::CapabilityFlags, "Rewired.Platforms.Windows.XInput", "CapabilityFlags");
// Dependencies 
namespace Rewired::Platforms::Windows::XInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.XInput.CapabilityFlags
struct CORDL_TYPE CapabilityFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __CapabilityFlags_Unwrapped
enum struct __CapabilityFlags_Unwrapped : int16_t {
__E_VoiceSupported = static_cast<int16_t>(0x4),
__E_None = static_cast<int16_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CapabilityFlags_Unwrapped () const noexcept {
return static_cast<__CapabilityFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CapabilityFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr CapabilityFlags(int16_t  value__) noexcept;

/// @brief Field None value: I16(0)
static ::Rewired::Platforms::Windows::XInput::CapabilityFlags const None;

/// @brief Field VoiceSupported value: I16(4)
static ::Rewired::Platforms::Windows::XInput::CapabilityFlags const VoiceSupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5921};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x2, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::XInput::CapabilityFlags, value__) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::XInput::CapabilityFlags) == 0x2, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::XInput
