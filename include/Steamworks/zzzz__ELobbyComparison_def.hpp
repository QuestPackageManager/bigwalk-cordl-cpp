#pragma once
// IWYU pragma private; include "Steamworks/ELobbyComparison.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELobbyComparison)
// Forward declare root types
namespace Steamworks {
struct ELobbyComparison;
}
// Write type traits
MARK_VAL_T(::Steamworks::ELobbyComparison);
DEFINE_IL2CPP_CLASS(::Steamworks::ELobbyComparison, "Steamworks", "ELobbyComparison");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ELobbyComparison
struct CORDL_TYPE ELobbyComparison {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELobbyComparison_Unwrapped
enum struct __ELobbyComparison_Unwrapped : int32_t {
__E_k_ELobbyComparisonEqualToOrLessThan = static_cast<int32_t>(0xfffffffe),
__E_k_ELobbyComparisonLessThan = static_cast<int32_t>(0xffffffff),
__E_k_ELobbyComparisonEqual = static_cast<int32_t>(0x0),
__E_k_ELobbyComparisonGreaterThan = static_cast<int32_t>(0x1),
__E_k_ELobbyComparisonEqualToOrGreaterThan = static_cast<int32_t>(0x2),
__E_k_ELobbyComparisonNotEqual = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELobbyComparison_Unwrapped () const noexcept {
return static_cast<__ELobbyComparison_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELobbyComparison() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ELobbyComparison(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16265};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELobbyComparisonEqual value: I32(0)
static ::Steamworks::ELobbyComparison const k_ELobbyComparisonEqual;

/// @brief Field k_ELobbyComparisonEqualToOrGreaterThan value: I32(2)
static ::Steamworks::ELobbyComparison const k_ELobbyComparisonEqualToOrGreaterThan;

/// @brief Field k_ELobbyComparisonEqualToOrLessThan value: I32(-2)
static ::Steamworks::ELobbyComparison const k_ELobbyComparisonEqualToOrLessThan;

/// @brief Field k_ELobbyComparisonGreaterThan value: I32(1)
static ::Steamworks::ELobbyComparison const k_ELobbyComparisonGreaterThan;

/// @brief Field k_ELobbyComparisonLessThan value: I32(-1)
static ::Steamworks::ELobbyComparison const k_ELobbyComparisonLessThan;

/// @brief Field k_ELobbyComparisonNotEqual value: I32(3)
static ::Steamworks::ELobbyComparison const k_ELobbyComparisonNotEqual;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ELobbyComparison, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ELobbyComparison) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
