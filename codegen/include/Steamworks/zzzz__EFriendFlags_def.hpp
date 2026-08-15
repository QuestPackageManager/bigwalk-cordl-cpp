#pragma once
// IWYU pragma private; include "Steamworks/EFriendFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EFriendFlags)
// Forward declare root types
namespace Steamworks {
struct EFriendFlags;
}
// Write type traits
MARK_VAL_T(::Steamworks::EFriendFlags);
DEFINE_IL2CPP_CLASS(::Steamworks::EFriendFlags, "Steamworks", "EFriendFlags");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EFriendFlags
struct CORDL_TYPE EFriendFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EFriendFlags_Unwrapped
enum struct __EFriendFlags_Unwrapped : int32_t {
__E_k_EFriendFlagNone = static_cast<int32_t>(0x0),
__E_k_EFriendFlagBlocked = static_cast<int32_t>(0x1),
__E_k_EFriendFlagFriendshipRequested = static_cast<int32_t>(0x2),
__E_k_EFriendFlagImmediate = static_cast<int32_t>(0x4),
__E_k_EFriendFlagClanMember = static_cast<int32_t>(0x8),
__E_k_EFriendFlagOnGameServer = static_cast<int32_t>(0x10),
__E_k_EFriendFlagRequestingFriendship = static_cast<int32_t>(0x80),
__E_k_EFriendFlagRequestingInfo = static_cast<int32_t>(0x100),
__E_k_EFriendFlagIgnored = static_cast<int32_t>(0x200),
__E_k_EFriendFlagIgnoredFriend = static_cast<int32_t>(0x400),
__E_k_EFriendFlagChatMember = static_cast<int32_t>(0x1000),
__E_k_EFriendFlagAll = static_cast<int32_t>(0xffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EFriendFlags_Unwrapped () const noexcept {
return static_cast<__EFriendFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EFriendFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EFriendFlags(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EFriendFlagAll value: I32(65535)
static ::Steamworks::EFriendFlags const k_EFriendFlagAll;

/// @brief Field k_EFriendFlagBlocked value: I32(1)
static ::Steamworks::EFriendFlags const k_EFriendFlagBlocked;

/// @brief Field k_EFriendFlagChatMember value: I32(4096)
static ::Steamworks::EFriendFlags const k_EFriendFlagChatMember;

/// @brief Field k_EFriendFlagClanMember value: I32(8)
static ::Steamworks::EFriendFlags const k_EFriendFlagClanMember;

/// @brief Field k_EFriendFlagFriendshipRequested value: I32(2)
static ::Steamworks::EFriendFlags const k_EFriendFlagFriendshipRequested;

/// @brief Field k_EFriendFlagIgnored value: I32(512)
static ::Steamworks::EFriendFlags const k_EFriendFlagIgnored;

/// @brief Field k_EFriendFlagIgnoredFriend value: I32(1024)
static ::Steamworks::EFriendFlags const k_EFriendFlagIgnoredFriend;

/// @brief Field k_EFriendFlagImmediate value: I32(4)
static ::Steamworks::EFriendFlags const k_EFriendFlagImmediate;

/// @brief Field k_EFriendFlagNone value: I32(0)
static ::Steamworks::EFriendFlags const k_EFriendFlagNone;

/// @brief Field k_EFriendFlagOnGameServer value: I32(16)
static ::Steamworks::EFriendFlags const k_EFriendFlagOnGameServer;

/// @brief Field k_EFriendFlagRequestingFriendship value: I32(128)
static ::Steamworks::EFriendFlags const k_EFriendFlagRequestingFriendship;

/// @brief Field k_EFriendFlagRequestingInfo value: I32(256)
static ::Steamworks::EFriendFlags const k_EFriendFlagRequestingInfo;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EFriendFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EFriendFlags) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
