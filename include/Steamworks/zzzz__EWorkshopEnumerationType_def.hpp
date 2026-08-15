#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopEnumerationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EWorkshopEnumerationType)
// Forward declare root types
namespace Steamworks {
struct EWorkshopEnumerationType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EWorkshopEnumerationType);
DEFINE_IL2CPP_CLASS(::Steamworks::EWorkshopEnumerationType, "Steamworks", "EWorkshopEnumerationType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EWorkshopEnumerationType
struct CORDL_TYPE EWorkshopEnumerationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EWorkshopEnumerationType_Unwrapped
enum struct __EWorkshopEnumerationType_Unwrapped : int32_t {
__E_k_EWorkshopEnumerationTypeRankedByVote = static_cast<int32_t>(0x0),
__E_k_EWorkshopEnumerationTypeRecent = static_cast<int32_t>(0x1),
__E_k_EWorkshopEnumerationTypeTrending = static_cast<int32_t>(0x2),
__E_k_EWorkshopEnumerationTypeFavoritesOfFriends = static_cast<int32_t>(0x3),
__E_k_EWorkshopEnumerationTypeVotedByFriends = static_cast<int32_t>(0x4),
__E_k_EWorkshopEnumerationTypeContentByFriends = static_cast<int32_t>(0x5),
__E_k_EWorkshopEnumerationTypeRecentFromFollowedUsers = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EWorkshopEnumerationType_Unwrapped () const noexcept {
return static_cast<__EWorkshopEnumerationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EWorkshopEnumerationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EWorkshopEnumerationType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EWorkshopEnumerationTypeContentByFriends value: I32(5)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeContentByFriends;

/// @brief Field k_EWorkshopEnumerationTypeFavoritesOfFriends value: I32(3)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeFavoritesOfFriends;

/// @brief Field k_EWorkshopEnumerationTypeRankedByVote value: I32(0)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeRankedByVote;

/// @brief Field k_EWorkshopEnumerationTypeRecent value: I32(1)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeRecent;

/// @brief Field k_EWorkshopEnumerationTypeRecentFromFollowedUsers value: I32(6)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeRecentFromFollowedUsers;

/// @brief Field k_EWorkshopEnumerationTypeTrending value: I32(2)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeTrending;

/// @brief Field k_EWorkshopEnumerationTypeVotedByFriends value: I32(4)
static ::Steamworks::EWorkshopEnumerationType const k_EWorkshopEnumerationTypeVotedByFriends;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EWorkshopEnumerationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EWorkshopEnumerationType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
