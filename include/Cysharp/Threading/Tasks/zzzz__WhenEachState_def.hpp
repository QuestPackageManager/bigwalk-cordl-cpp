#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/WhenEachState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WhenEachState)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct WhenEachState;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::WhenEachState);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WhenEachState, "Cysharp.Threading.Tasks", "WhenEachState");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.WhenEachState
struct CORDL_TYPE WhenEachState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __WhenEachState_Unwrapped
enum struct __WhenEachState_Unwrapped : uint8_t {
__E_NotRunning = static_cast<uint8_t>(0x0u),
__E_Running = static_cast<uint8_t>(0x1u),
__E_Completed = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WhenEachState_Unwrapped () const noexcept {
return static_cast<__WhenEachState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WhenEachState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr WhenEachState(uint8_t  value__) noexcept;

/// @brief Field Completed value: U8(2)
static ::Cysharp::Threading::Tasks::WhenEachState const Completed;

/// @brief Field NotRunning value: U8(0)
static ::Cysharp::Threading::Tasks::WhenEachState const NotRunning;

/// @brief Field Running value: U8(1)
static ::Cysharp::Threading::Tasks::WhenEachState const Running;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14425};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::WhenEachState, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::WhenEachState) == 0x1, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
