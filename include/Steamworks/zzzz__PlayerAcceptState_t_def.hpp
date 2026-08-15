#pragma once
// IWYU pragma private; include "Steamworks/PlayerAcceptState_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerAcceptState_t)
// Forward declare root types
namespace Steamworks {
struct PlayerAcceptState_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::PlayerAcceptState_t);
DEFINE_IL2CPP_CLASS(::Steamworks::PlayerAcceptState_t, "Steamworks", "PlayerAcceptState_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.PlayerAcceptState_t
struct CORDL_TYPE PlayerAcceptState_t {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerAcceptState_t_Unwrapped
enum struct __PlayerAcceptState_t_Unwrapped : int32_t {
__E_k_EStateUnknown = static_cast<int32_t>(0x0),
__E_k_EStatePlayerAccepted = static_cast<int32_t>(0x1),
__E_k_EStatePlayerDeclined = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerAcceptState_t_Unwrapped () const noexcept {
return static_cast<__PlayerAcceptState_t_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerAcceptState_t() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerAcceptState_t(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EStatePlayerAccepted value: I32(1)
static ::Steamworks::PlayerAcceptState_t const k_EStatePlayerAccepted;

/// @brief Field k_EStatePlayerDeclined value: I32(2)
static ::Steamworks::PlayerAcceptState_t const k_EStatePlayerDeclined;

/// @brief Field k_EStateUnknown value: I32(0)
static ::Steamworks::PlayerAcceptState_t const k_EStateUnknown;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::PlayerAcceptState_t, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::PlayerAcceptState_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
