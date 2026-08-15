#pragma once
// IWYU pragma private; include "Steamworks/EChatMemberStateChange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EChatMemberStateChange)
// Forward declare root types
namespace Steamworks {
struct EChatMemberStateChange;
}
// Write type traits
MARK_VAL_T(::Steamworks::EChatMemberStateChange);
DEFINE_IL2CPP_CLASS(::Steamworks::EChatMemberStateChange, "Steamworks", "EChatMemberStateChange");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EChatMemberStateChange
struct CORDL_TYPE EChatMemberStateChange {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EChatMemberStateChange_Unwrapped
enum struct __EChatMemberStateChange_Unwrapped : int32_t {
__E_k_EChatMemberStateChangeEntered = static_cast<int32_t>(0x1),
__E_k_EChatMemberStateChangeLeft = static_cast<int32_t>(0x2),
__E_k_EChatMemberStateChangeDisconnected = static_cast<int32_t>(0x4),
__E_k_EChatMemberStateChangeKicked = static_cast<int32_t>(0x8),
__E_k_EChatMemberStateChangeBanned = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EChatMemberStateChange_Unwrapped () const noexcept {
return static_cast<__EChatMemberStateChange_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EChatMemberStateChange() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EChatMemberStateChange(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EChatMemberStateChangeBanned value: I32(16)
static ::Steamworks::EChatMemberStateChange const k_EChatMemberStateChangeBanned;

/// @brief Field k_EChatMemberStateChangeDisconnected value: I32(4)
static ::Steamworks::EChatMemberStateChange const k_EChatMemberStateChangeDisconnected;

/// @brief Field k_EChatMemberStateChangeEntered value: I32(1)
static ::Steamworks::EChatMemberStateChange const k_EChatMemberStateChangeEntered;

/// @brief Field k_EChatMemberStateChangeKicked value: I32(8)
static ::Steamworks::EChatMemberStateChange const k_EChatMemberStateChangeKicked;

/// @brief Field k_EChatMemberStateChangeLeft value: I32(2)
static ::Steamworks::EChatMemberStateChange const k_EChatMemberStateChangeLeft;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EChatMemberStateChange, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EChatMemberStateChange) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
