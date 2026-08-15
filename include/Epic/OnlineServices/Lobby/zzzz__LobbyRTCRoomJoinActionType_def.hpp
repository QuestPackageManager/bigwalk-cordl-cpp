#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyRTCRoomJoinActionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyRTCRoomJoinActionType)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyRTCRoomJoinActionType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType, "Epic.OnlineServices.Lobby", "LobbyRTCRoomJoinActionType");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyRTCRoomJoinActionType
struct CORDL_TYPE LobbyRTCRoomJoinActionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LobbyRTCRoomJoinActionType_Unwrapped
enum struct __LobbyRTCRoomJoinActionType_Unwrapped : int32_t {
__E_AutomaticJoin = static_cast<int32_t>(0x0),
__E_ManualJoin = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LobbyRTCRoomJoinActionType_Unwrapped () const noexcept {
return static_cast<__LobbyRTCRoomJoinActionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LobbyRTCRoomJoinActionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LobbyRTCRoomJoinActionType(int32_t  value__) noexcept;

/// @brief Field AutomaticJoin value: I32(0)
static ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType const AutomaticJoin;

/// @brief Field ManualJoin value: I32(1)
static ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType const ManualJoin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
