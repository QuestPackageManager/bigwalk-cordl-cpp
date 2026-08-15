#pragma once
// IWYU pragma private; include "Dissonance/CommActivationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommActivationMode)
// Forward declare root types
namespace Dissonance {
struct CommActivationMode;
}
// Write type traits
MARK_VAL_T(::Dissonance::CommActivationMode);
DEFINE_IL2CPP_CLASS(::Dissonance::CommActivationMode, "Dissonance", "CommActivationMode");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.CommActivationMode
struct CORDL_TYPE CommActivationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommActivationMode_Unwrapped
enum struct __CommActivationMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_VoiceActivation = static_cast<int32_t>(0x1),
__E_PushToTalk = static_cast<int32_t>(0x2),
__E_Open = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommActivationMode_Unwrapped () const noexcept {
return static_cast<__CommActivationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommActivationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CommActivationMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Dissonance::CommActivationMode const None;

/// @brief Field Open value: I32(3)
static ::Dissonance::CommActivationMode const Open;

/// @brief Field PushToTalk value: I32(2)
static ::Dissonance::CommActivationMode const PushToTalk;

/// @brief Field VoiceActivation value: I32(1)
static ::Dissonance::CommActivationMode const VoiceActivation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::CommActivationMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::CommActivationMode) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
