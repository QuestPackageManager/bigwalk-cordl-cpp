#pragma once
// IWYU pragma private; include "HouseCulling/CullingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingState)
// Forward declare root types
namespace HouseCulling {
struct CullingState;
}
// Write type traits
MARK_VAL_T(::HouseCulling::CullingState);
DEFINE_IL2CPP_CLASS(::HouseCulling::CullingState, "HouseCulling", "CullingState");
// Dependencies 
namespace HouseCulling {
// Is value type: true
// CS Name: HouseCulling.CullingState
struct CORDL_TYPE CullingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CullingState_Unwrapped
enum struct __CullingState_Unwrapped : int32_t {
__E_Hide = static_cast<int32_t>(0x0),
__E_Show = static_cast<int32_t>(0x1),
__E_Debug = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CullingState_Unwrapped () const noexcept {
return static_cast<__CullingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CullingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingState(int32_t  value__) noexcept;

/// @brief Field Debug value: I32(2)
static ::HouseCulling::CullingState const Debug;

/// @brief Field Hide value: I32(0)
static ::HouseCulling::CullingState const Hide;

/// @brief Field Show value: I32(1)
static ::HouseCulling::CullingState const Show;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HouseCulling::CullingState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HouseCulling::CullingState) == 0x4, "Size mismatch!");

} // namespace end def HouseCulling
