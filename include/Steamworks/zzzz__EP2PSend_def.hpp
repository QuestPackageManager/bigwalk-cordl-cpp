#pragma once
// IWYU pragma private; include "Steamworks/EP2PSend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EP2PSend)
// Forward declare root types
namespace Steamworks {
struct EP2PSend;
}
// Write type traits
MARK_VAL_T(::Steamworks::EP2PSend);
DEFINE_IL2CPP_CLASS(::Steamworks::EP2PSend, "Steamworks", "EP2PSend");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EP2PSend
struct CORDL_TYPE EP2PSend {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EP2PSend_Unwrapped
enum struct __EP2PSend_Unwrapped : int32_t {
__E_k_EP2PSendUnreliable = static_cast<int32_t>(0x0),
__E_k_EP2PSendUnreliableNoDelay = static_cast<int32_t>(0x1),
__E_k_EP2PSendReliable = static_cast<int32_t>(0x2),
__E_k_EP2PSendReliableWithBuffering = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EP2PSend_Unwrapped () const noexcept {
return static_cast<__EP2PSend_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EP2PSend() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EP2PSend(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EP2PSendReliable value: I32(2)
static ::Steamworks::EP2PSend const k_EP2PSendReliable;

/// @brief Field k_EP2PSendReliableWithBuffering value: I32(3)
static ::Steamworks::EP2PSend const k_EP2PSendReliableWithBuffering;

/// @brief Field k_EP2PSendUnreliable value: I32(0)
static ::Steamworks::EP2PSend const k_EP2PSendUnreliable;

/// @brief Field k_EP2PSendUnreliableNoDelay value: I32(1)
static ::Steamworks::EP2PSend const k_EP2PSendUnreliableNoDelay;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EP2PSend, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EP2PSend) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
