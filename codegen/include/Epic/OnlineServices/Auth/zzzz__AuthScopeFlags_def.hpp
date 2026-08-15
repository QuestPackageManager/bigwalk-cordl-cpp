#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/AuthScopeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthScopeFlags)
// Forward declare root types
namespace Epic::OnlineServices::Auth {
struct AuthScopeFlags;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::AuthScopeFlags);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::AuthScopeFlags, "Epic.OnlineServices.Auth", "AuthScopeFlags");
// Dependencies 
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.AuthScopeFlags
struct CORDL_TYPE AuthScopeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AuthScopeFlags_Unwrapped
enum struct __AuthScopeFlags_Unwrapped : int32_t {
__E_NoFlags = static_cast<int32_t>(0x0),
__E_BasicProfile = static_cast<int32_t>(0x1),
__E_FriendsList = static_cast<int32_t>(0x2),
__E_Presence = static_cast<int32_t>(0x4),
__E_FriendsManagement = static_cast<int32_t>(0x8),
__E_Email = static_cast<int32_t>(0x10),
__E_Country = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuthScopeFlags_Unwrapped () const noexcept {
return static_cast<__AuthScopeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AuthScopeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuthScopeFlags(int32_t  value__) noexcept;

/// @brief Field BasicProfile value: I32(1)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const BasicProfile;

/// @brief Field Country value: I32(32)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const Country;

/// @brief Field Email value: I32(16)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const Email;

/// @brief Field FriendsList value: I32(2)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const FriendsList;

/// @brief Field FriendsManagement value: I32(8)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const FriendsManagement;

/// @brief Field NoFlags value: I32(0)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const NoFlags;

/// @brief Field Presence value: I32(4)
static ::Epic::OnlineServices::Auth::AuthScopeFlags const Presence;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::AuthScopeFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::AuthScopeFlags) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
