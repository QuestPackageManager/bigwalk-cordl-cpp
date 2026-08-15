#pragma once
// IWYU pragma private; include "Steamworks/EPersonaState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EPersonaState)
// Forward declare root types
namespace Steamworks {
struct EPersonaState;
}
// Write type traits
MARK_VAL_T(::Steamworks::EPersonaState);
DEFINE_IL2CPP_CLASS(::Steamworks::EPersonaState, "Steamworks", "EPersonaState");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EPersonaState
struct CORDL_TYPE EPersonaState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EPersonaState_Unwrapped
enum struct __EPersonaState_Unwrapped : int32_t {
__E_k_EPersonaStateOffline = static_cast<int32_t>(0x0),
__E_k_EPersonaStateOnline = static_cast<int32_t>(0x1),
__E_k_EPersonaStateBusy = static_cast<int32_t>(0x2),
__E_k_EPersonaStateAway = static_cast<int32_t>(0x3),
__E_k_EPersonaStateSnooze = static_cast<int32_t>(0x4),
__E_k_EPersonaStateLookingToTrade = static_cast<int32_t>(0x5),
__E_k_EPersonaStateLookingToPlay = static_cast<int32_t>(0x6),
__E_k_EPersonaStateInvisible = static_cast<int32_t>(0x7),
__E_k_EPersonaStateMax = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EPersonaState_Unwrapped () const noexcept {
return static_cast<__EPersonaState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EPersonaState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EPersonaState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EPersonaStateAway value: I32(3)
static ::Steamworks::EPersonaState const k_EPersonaStateAway;

/// @brief Field k_EPersonaStateBusy value: I32(2)
static ::Steamworks::EPersonaState const k_EPersonaStateBusy;

/// @brief Field k_EPersonaStateInvisible value: I32(7)
static ::Steamworks::EPersonaState const k_EPersonaStateInvisible;

/// @brief Field k_EPersonaStateLookingToPlay value: I32(6)
static ::Steamworks::EPersonaState const k_EPersonaStateLookingToPlay;

/// @brief Field k_EPersonaStateLookingToTrade value: I32(5)
static ::Steamworks::EPersonaState const k_EPersonaStateLookingToTrade;

/// @brief Field k_EPersonaStateMax value: I32(8)
static ::Steamworks::EPersonaState const k_EPersonaStateMax;

/// @brief Field k_EPersonaStateOffline value: I32(0)
static ::Steamworks::EPersonaState const k_EPersonaStateOffline;

/// @brief Field k_EPersonaStateOnline value: I32(1)
static ::Steamworks::EPersonaState const k_EPersonaStateOnline;

/// @brief Field k_EPersonaStateSnooze value: I32(4)
static ::Steamworks::EPersonaState const k_EPersonaStateSnooze;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EPersonaState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EPersonaState) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
