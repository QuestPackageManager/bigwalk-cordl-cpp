#pragma once
// IWYU pragma private; include "Steamworks/ELobbyDistanceFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELobbyDistanceFilter)
// Forward declare root types
namespace Steamworks {
struct ELobbyDistanceFilter;
}
// Write type traits
MARK_VAL_T(::Steamworks::ELobbyDistanceFilter);
DEFINE_IL2CPP_CLASS(::Steamworks::ELobbyDistanceFilter, "Steamworks", "ELobbyDistanceFilter");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ELobbyDistanceFilter
struct CORDL_TYPE ELobbyDistanceFilter {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELobbyDistanceFilter_Unwrapped
enum struct __ELobbyDistanceFilter_Unwrapped : int32_t {
__E_k_ELobbyDistanceFilterClose = static_cast<int32_t>(0x0),
__E_k_ELobbyDistanceFilterDefault = static_cast<int32_t>(0x1),
__E_k_ELobbyDistanceFilterFar = static_cast<int32_t>(0x2),
__E_k_ELobbyDistanceFilterWorldwide = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELobbyDistanceFilter_Unwrapped () const noexcept {
return static_cast<__ELobbyDistanceFilter_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELobbyDistanceFilter() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ELobbyDistanceFilter(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELobbyDistanceFilterClose value: I32(0)
static ::Steamworks::ELobbyDistanceFilter const k_ELobbyDistanceFilterClose;

/// @brief Field k_ELobbyDistanceFilterDefault value: I32(1)
static ::Steamworks::ELobbyDistanceFilter const k_ELobbyDistanceFilterDefault;

/// @brief Field k_ELobbyDistanceFilterFar value: I32(2)
static ::Steamworks::ELobbyDistanceFilter const k_ELobbyDistanceFilterFar;

/// @brief Field k_ELobbyDistanceFilterWorldwide value: I32(3)
static ::Steamworks::ELobbyDistanceFilter const k_ELobbyDistanceFilterWorldwide;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ELobbyDistanceFilter, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ELobbyDistanceFilter) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
