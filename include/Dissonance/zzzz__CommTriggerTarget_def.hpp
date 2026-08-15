#pragma once
// IWYU pragma private; include "Dissonance/CommTriggerTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommTriggerTarget)
// Forward declare root types
namespace Dissonance {
struct CommTriggerTarget;
}
// Write type traits
MARK_VAL_T(::Dissonance::CommTriggerTarget);
DEFINE_IL2CPP_CLASS(::Dissonance::CommTriggerTarget, "Dissonance", "CommTriggerTarget");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.CommTriggerTarget
struct CORDL_TYPE CommTriggerTarget {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CommTriggerTarget_Unwrapped
enum struct __CommTriggerTarget_Unwrapped : int32_t {
__E_Room = static_cast<int32_t>(0x0),
__E_Player = static_cast<int32_t>(0x1),
__E_Self = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommTriggerTarget_Unwrapped () const noexcept {
return static_cast<__CommTriggerTarget_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CommTriggerTarget() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CommTriggerTarget(int32_t  value__) noexcept;

/// @brief Field Player value: I32(1)
static ::Dissonance::CommTriggerTarget const Player;

/// @brief Field Room value: I32(0)
static ::Dissonance::CommTriggerTarget const Room;

/// @brief Field Self value: I32(2)
static ::Dissonance::CommTriggerTarget const Self;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16797};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::CommTriggerTarget, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::CommTriggerTarget) == 0x4, "Size mismatch!");

} // namespace end def Dissonance
