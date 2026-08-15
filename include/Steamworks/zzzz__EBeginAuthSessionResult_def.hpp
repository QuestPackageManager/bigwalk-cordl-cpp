#pragma once
// IWYU pragma private; include "Steamworks/EBeginAuthSessionResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EBeginAuthSessionResult)
// Forward declare root types
namespace Steamworks {
struct EBeginAuthSessionResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::EBeginAuthSessionResult);
DEFINE_IL2CPP_CLASS(::Steamworks::EBeginAuthSessionResult, "Steamworks", "EBeginAuthSessionResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EBeginAuthSessionResult
struct CORDL_TYPE EBeginAuthSessionResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EBeginAuthSessionResult_Unwrapped
enum struct __EBeginAuthSessionResult_Unwrapped : int32_t {
__E_k_EBeginAuthSessionResultOK = static_cast<int32_t>(0x0),
__E_k_EBeginAuthSessionResultInvalidTicket = static_cast<int32_t>(0x1),
__E_k_EBeginAuthSessionResultDuplicateRequest = static_cast<int32_t>(0x2),
__E_k_EBeginAuthSessionResultInvalidVersion = static_cast<int32_t>(0x3),
__E_k_EBeginAuthSessionResultGameMismatch = static_cast<int32_t>(0x4),
__E_k_EBeginAuthSessionResultExpiredTicket = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EBeginAuthSessionResult_Unwrapped () const noexcept {
return static_cast<__EBeginAuthSessionResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EBeginAuthSessionResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EBeginAuthSessionResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16313};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EBeginAuthSessionResultDuplicateRequest value: I32(2)
static ::Steamworks::EBeginAuthSessionResult const k_EBeginAuthSessionResultDuplicateRequest;

/// @brief Field k_EBeginAuthSessionResultExpiredTicket value: I32(5)
static ::Steamworks::EBeginAuthSessionResult const k_EBeginAuthSessionResultExpiredTicket;

/// @brief Field k_EBeginAuthSessionResultGameMismatch value: I32(4)
static ::Steamworks::EBeginAuthSessionResult const k_EBeginAuthSessionResultGameMismatch;

/// @brief Field k_EBeginAuthSessionResultInvalidTicket value: I32(1)
static ::Steamworks::EBeginAuthSessionResult const k_EBeginAuthSessionResultInvalidTicket;

/// @brief Field k_EBeginAuthSessionResultInvalidVersion value: I32(3)
static ::Steamworks::EBeginAuthSessionResult const k_EBeginAuthSessionResultInvalidVersion;

/// @brief Field k_EBeginAuthSessionResultOK value: I32(0)
static ::Steamworks::EBeginAuthSessionResult const k_EBeginAuthSessionResultOK;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EBeginAuthSessionResult, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EBeginAuthSessionResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
