#pragma once
// IWYU pragma private; include "Steamworks/EPlayerResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EPlayerResult_t)
// Forward declare root types
namespace Steamworks {
struct EPlayerResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::EPlayerResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::EPlayerResult_t, "Steamworks", "EPlayerResult_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EPlayerResult_t
struct CORDL_TYPE EPlayerResult_t {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EPlayerResult_t_Unwrapped
enum struct __EPlayerResult_t_Unwrapped : int32_t {
__E_k_EPlayerResultFailedToConnect = static_cast<int32_t>(0x1),
__E_k_EPlayerResultAbandoned = static_cast<int32_t>(0x2),
__E_k_EPlayerResultKicked = static_cast<int32_t>(0x3),
__E_k_EPlayerResultIncomplete = static_cast<int32_t>(0x4),
__E_k_EPlayerResultCompleted = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EPlayerResult_t_Unwrapped () const noexcept {
return static_cast<__EPlayerResult_t_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EPlayerResult_t() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EPlayerResult_t(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EPlayerResultAbandoned value: I32(2)
static ::Steamworks::EPlayerResult_t const k_EPlayerResultAbandoned;

/// @brief Field k_EPlayerResultCompleted value: I32(5)
static ::Steamworks::EPlayerResult_t const k_EPlayerResultCompleted;

/// @brief Field k_EPlayerResultFailedToConnect value: I32(1)
static ::Steamworks::EPlayerResult_t const k_EPlayerResultFailedToConnect;

/// @brief Field k_EPlayerResultIncomplete value: I32(4)
static ::Steamworks::EPlayerResult_t const k_EPlayerResultIncomplete;

/// @brief Field k_EPlayerResultKicked value: I32(3)
static ::Steamworks::EPlayerResult_t const k_EPlayerResultKicked;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EPlayerResult_t, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EPlayerResult_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
