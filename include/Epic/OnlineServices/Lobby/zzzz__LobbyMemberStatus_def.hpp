#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyMemberStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyMemberStatus)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyMemberStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyMemberStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyMemberStatus, "Epic.OnlineServices.Lobby", "LobbyMemberStatus");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyMemberStatus
struct CORDL_TYPE LobbyMemberStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LobbyMemberStatus_Unwrapped
enum struct __LobbyMemberStatus_Unwrapped : int32_t {
__E_Joined = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Disconnected = static_cast<int32_t>(0x2),
__E_Kicked = static_cast<int32_t>(0x3),
__E_Promoted = static_cast<int32_t>(0x4),
__E_Closed = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LobbyMemberStatus_Unwrapped () const noexcept {
return static_cast<__LobbyMemberStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LobbyMemberStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LobbyMemberStatus(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(5)
static ::Epic::OnlineServices::Lobby::LobbyMemberStatus const Closed;

/// @brief Field Disconnected value: I32(2)
static ::Epic::OnlineServices::Lobby::LobbyMemberStatus const Disconnected;

/// @brief Field Joined value: I32(0)
static ::Epic::OnlineServices::Lobby::LobbyMemberStatus const Joined;

/// @brief Field Kicked value: I32(3)
static ::Epic::OnlineServices::Lobby::LobbyMemberStatus const Kicked;

/// @brief Field Left value: I32(1)
static ::Epic::OnlineServices::Lobby::LobbyMemberStatus const Left;

/// @brief Field Promoted value: I32(4)
static ::Epic::OnlineServices::Lobby::LobbyMemberStatus const Promoted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8544};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyMemberStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyMemberStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
