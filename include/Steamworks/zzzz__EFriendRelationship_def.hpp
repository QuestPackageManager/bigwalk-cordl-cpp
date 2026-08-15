#pragma once
// IWYU pragma private; include "Steamworks/EFriendRelationship.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EFriendRelationship)
// Forward declare root types
namespace Steamworks {
struct EFriendRelationship;
}
// Write type traits
MARK_VAL_T(::Steamworks::EFriendRelationship);
DEFINE_IL2CPP_CLASS(::Steamworks::EFriendRelationship, "Steamworks", "EFriendRelationship");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EFriendRelationship
struct CORDL_TYPE EFriendRelationship {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EFriendRelationship_Unwrapped
enum struct __EFriendRelationship_Unwrapped : int32_t {
__E_k_EFriendRelationshipNone = static_cast<int32_t>(0x0),
__E_k_EFriendRelationshipBlocked = static_cast<int32_t>(0x1),
__E_k_EFriendRelationshipRequestRecipient = static_cast<int32_t>(0x2),
__E_k_EFriendRelationshipFriend = static_cast<int32_t>(0x3),
__E_k_EFriendRelationshipRequestInitiator = static_cast<int32_t>(0x4),
__E_k_EFriendRelationshipIgnored = static_cast<int32_t>(0x5),
__E_k_EFriendRelationshipIgnoredFriend = static_cast<int32_t>(0x6),
__E_k_EFriendRelationshipSuggested_DEPRECATED = static_cast<int32_t>(0x7),
__E_k_EFriendRelationshipMax = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EFriendRelationship_Unwrapped () const noexcept {
return static_cast<__EFriendRelationship_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EFriendRelationship() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EFriendRelationship(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EFriendRelationshipBlocked value: I32(1)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipBlocked;

/// @brief Field k_EFriendRelationshipFriend value: I32(3)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipFriend;

/// @brief Field k_EFriendRelationshipIgnored value: I32(5)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipIgnored;

/// @brief Field k_EFriendRelationshipIgnoredFriend value: I32(6)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipIgnoredFriend;

/// @brief Field k_EFriendRelationshipMax value: I32(8)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipMax;

/// @brief Field k_EFriendRelationshipNone value: I32(0)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipNone;

/// @brief Field k_EFriendRelationshipRequestInitiator value: I32(4)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipRequestInitiator;

/// @brief Field k_EFriendRelationshipRequestRecipient value: I32(2)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipRequestRecipient;

/// @brief Field k_EFriendRelationshipSuggested_DEPRECATED value: I32(7)
static ::Steamworks::EFriendRelationship const k_EFriendRelationshipSuggested_DEPRECATED;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EFriendRelationship, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EFriendRelationship) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
