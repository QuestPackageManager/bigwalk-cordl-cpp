#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/FriendsStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendsStatus)
// Forward declare root types
namespace Epic::OnlineServices::Friends {
struct FriendsStatus;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::FriendsStatus);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::FriendsStatus, "Epic.OnlineServices.Friends", "FriendsStatus");
// Dependencies 
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.FriendsStatus
struct CORDL_TYPE FriendsStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendsStatus_Unwrapped
enum struct __FriendsStatus_Unwrapped : int32_t {
__E_NotFriends = static_cast<int32_t>(0x0),
__E_InviteSent = static_cast<int32_t>(0x1),
__E_InviteReceived = static_cast<int32_t>(0x2),
__E_Friends = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendsStatus_Unwrapped () const noexcept {
return static_cast<__FriendsStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendsStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FriendsStatus(int32_t  value__) noexcept;

/// @brief Field Friends value: I32(3)
static ::Epic::OnlineServices::Friends::FriendsStatus const Friends;

/// @brief Field InviteReceived value: I32(2)
static ::Epic::OnlineServices::Friends::FriendsStatus const InviteReceived;

/// @brief Field InviteSent value: I32(1)
static ::Epic::OnlineServices::Friends::FriendsStatus const InviteSent;

/// @brief Field NotFriends value: I32(0)
static ::Epic::OnlineServices::Friends::FriendsStatus const NotFriends;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8842};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::FriendsStatus, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::FriendsStatus) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
