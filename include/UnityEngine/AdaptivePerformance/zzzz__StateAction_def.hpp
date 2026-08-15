#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/StateAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateAction)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct StateAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::StateAction);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::StateAction, "UnityEngine.AdaptivePerformance", "StateAction");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.StateAction
struct CORDL_TYPE StateAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StateAction_Unwrapped
enum struct __StateAction_Unwrapped : int32_t {
__E_Stale = static_cast<int32_t>(0x0),
__E_Increase = static_cast<int32_t>(0x1),
__E_Decrease = static_cast<int32_t>(0x2),
__E_FastDecrease = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StateAction_Unwrapped () const noexcept {
return static_cast<__StateAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StateAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StateAction(int32_t  value__) noexcept;

/// @brief Field Decrease value: I32(2)
static ::UnityEngine::AdaptivePerformance::StateAction const Decrease;

/// @brief Field FastDecrease value: I32(3)
static ::UnityEngine::AdaptivePerformance::StateAction const FastDecrease;

/// @brief Field Increase value: I32(1)
static ::UnityEngine::AdaptivePerformance::StateAction const Increase;

/// @brief Field Stale value: I32(0)
static ::UnityEngine::AdaptivePerformance::StateAction const Stale;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19400};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::StateAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::StateAction) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
