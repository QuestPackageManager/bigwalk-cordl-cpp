#pragma once
// IWYU pragma private; include "Steamworks/EP2PSessionError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EP2PSessionError)
// Forward declare root types
namespace Steamworks {
struct EP2PSessionError;
}
// Write type traits
MARK_VAL_T(::Steamworks::EP2PSessionError);
DEFINE_IL2CPP_CLASS(::Steamworks::EP2PSessionError, "Steamworks", "EP2PSessionError");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EP2PSessionError
struct CORDL_TYPE EP2PSessionError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EP2PSessionError_Unwrapped
enum struct __EP2PSessionError_Unwrapped : int32_t {
__E_k_EP2PSessionErrorNone = static_cast<int32_t>(0x0),
__E_k_EP2PSessionErrorNoRightsToApp = static_cast<int32_t>(0x2),
__E_k_EP2PSessionErrorTimeout = static_cast<int32_t>(0x4),
__E_k_EP2PSessionErrorNotRunningApp_DELETED = static_cast<int32_t>(0x1),
__E_k_EP2PSessionErrorDestinationNotLoggedIn_DELETED = static_cast<int32_t>(0x3),
__E_k_EP2PSessionErrorMax = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EP2PSessionError_Unwrapped () const noexcept {
return static_cast<__EP2PSessionError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EP2PSessionError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EP2PSessionError(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EP2PSessionErrorDestinationNotLoggedIn_DELETED value: I32(3)
static ::Steamworks::EP2PSessionError const k_EP2PSessionErrorDestinationNotLoggedIn_DELETED;

/// @brief Field k_EP2PSessionErrorMax value: I32(5)
static ::Steamworks::EP2PSessionError const k_EP2PSessionErrorMax;

/// @brief Field k_EP2PSessionErrorNoRightsToApp value: I32(2)
static ::Steamworks::EP2PSessionError const k_EP2PSessionErrorNoRightsToApp;

/// @brief Field k_EP2PSessionErrorNone value: I32(0)
static ::Steamworks::EP2PSessionError const k_EP2PSessionErrorNone;

/// @brief Field k_EP2PSessionErrorNotRunningApp_DELETED value: I32(1)
static ::Steamworks::EP2PSessionError const k_EP2PSessionErrorNotRunningApp_DELETED;

/// @brief Field k_EP2PSessionErrorTimeout value: I32(4)
static ::Steamworks::EP2PSessionError const k_EP2PSessionErrorTimeout;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EP2PSessionError, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EP2PSessionError) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
