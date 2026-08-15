#pragma once
// IWYU pragma private; include "Steamworks/EMatchMakingServerResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EMatchMakingServerResponse)
// Forward declare root types
namespace Steamworks {
struct EMatchMakingServerResponse;
}
// Write type traits
MARK_VAL_T(::Steamworks::EMatchMakingServerResponse);
DEFINE_IL2CPP_CLASS(::Steamworks::EMatchMakingServerResponse, "Steamworks", "EMatchMakingServerResponse");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EMatchMakingServerResponse
struct CORDL_TYPE EMatchMakingServerResponse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EMatchMakingServerResponse_Unwrapped
enum struct __EMatchMakingServerResponse_Unwrapped : int32_t {
__E_eServerResponded = static_cast<int32_t>(0x0),
__E_eServerFailedToRespond = static_cast<int32_t>(0x1),
__E_eNoServersListedOnMasterServer = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EMatchMakingServerResponse_Unwrapped () const noexcept {
return static_cast<__EMatchMakingServerResponse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EMatchMakingServerResponse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EMatchMakingServerResponse(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field eNoServersListedOnMasterServer value: I32(2)
static ::Steamworks::EMatchMakingServerResponse const eNoServersListedOnMasterServer;

/// @brief Field eServerFailedToRespond value: I32(1)
static ::Steamworks::EMatchMakingServerResponse const eServerFailedToRespond;

/// @brief Field eServerResponded value: I32(0)
static ::Steamworks::EMatchMakingServerResponse const eServerResponded;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EMatchMakingServerResponse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EMatchMakingServerResponse) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
