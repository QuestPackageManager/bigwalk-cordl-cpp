#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELeaderboardDataRequest)
// Forward declare root types
namespace Steamworks {
struct ELeaderboardDataRequest;
}
// Write type traits
MARK_VAL_T(::Steamworks::ELeaderboardDataRequest);
DEFINE_IL2CPP_CLASS(::Steamworks::ELeaderboardDataRequest, "Steamworks", "ELeaderboardDataRequest");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ELeaderboardDataRequest
struct CORDL_TYPE ELeaderboardDataRequest {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELeaderboardDataRequest_Unwrapped
enum struct __ELeaderboardDataRequest_Unwrapped : int32_t {
__E_k_ELeaderboardDataRequestGlobal = static_cast<int32_t>(0x0),
__E_k_ELeaderboardDataRequestGlobalAroundUser = static_cast<int32_t>(0x1),
__E_k_ELeaderboardDataRequestFriends = static_cast<int32_t>(0x2),
__E_k_ELeaderboardDataRequestUsers = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELeaderboardDataRequest_Unwrapped () const noexcept {
return static_cast<__ELeaderboardDataRequest_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELeaderboardDataRequest() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ELeaderboardDataRequest(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELeaderboardDataRequestFriends value: I32(2)
static ::Steamworks::ELeaderboardDataRequest const k_ELeaderboardDataRequestFriends;

/// @brief Field k_ELeaderboardDataRequestGlobal value: I32(0)
static ::Steamworks::ELeaderboardDataRequest const k_ELeaderboardDataRequestGlobal;

/// @brief Field k_ELeaderboardDataRequestGlobalAroundUser value: I32(1)
static ::Steamworks::ELeaderboardDataRequest const k_ELeaderboardDataRequestGlobalAroundUser;

/// @brief Field k_ELeaderboardDataRequestUsers value: I32(3)
static ::Steamworks::ELeaderboardDataRequest const k_ELeaderboardDataRequestUsers;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ELeaderboardDataRequest, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ELeaderboardDataRequest) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
