#pragma once
// IWYU pragma private; include "Steamworks/EUGCQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EUGCQuery)
// Forward declare root types
namespace Steamworks {
struct EUGCQuery;
}
// Write type traits
MARK_VAL_T(::Steamworks::EUGCQuery);
DEFINE_IL2CPP_CLASS(::Steamworks::EUGCQuery, "Steamworks", "EUGCQuery");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EUGCQuery
struct CORDL_TYPE EUGCQuery {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EUGCQuery_Unwrapped
enum struct __EUGCQuery_Unwrapped : int32_t {
__E_k_EUGCQuery_RankedByVote = static_cast<int32_t>(0x0),
__E_k_EUGCQuery_RankedByPublicationDate = static_cast<int32_t>(0x1),
__E_k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = static_cast<int32_t>(0x2),
__E_k_EUGCQuery_RankedByTrend = static_cast<int32_t>(0x3),
__E_k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = static_cast<int32_t>(0x4),
__E_k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = static_cast<int32_t>(0x5),
__E_k_EUGCQuery_RankedByNumTimesReported = static_cast<int32_t>(0x6),
__E_k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = static_cast<int32_t>(0x7),
__E_k_EUGCQuery_NotYetRated = static_cast<int32_t>(0x8),
__E_k_EUGCQuery_RankedByTotalVotesAsc = static_cast<int32_t>(0x9),
__E_k_EUGCQuery_RankedByVotesUp = static_cast<int32_t>(0xa),
__E_k_EUGCQuery_RankedByTextSearch = static_cast<int32_t>(0xb),
__E_k_EUGCQuery_RankedByTotalUniqueSubscriptions = static_cast<int32_t>(0xc),
__E_k_EUGCQuery_RankedByPlaytimeTrend = static_cast<int32_t>(0xd),
__E_k_EUGCQuery_RankedByTotalPlaytime = static_cast<int32_t>(0xe),
__E_k_EUGCQuery_RankedByAveragePlaytimeTrend = static_cast<int32_t>(0xf),
__E_k_EUGCQuery_RankedByLifetimeAveragePlaytime = static_cast<int32_t>(0x10),
__E_k_EUGCQuery_RankedByPlaytimeSessionsTrend = static_cast<int32_t>(0x11),
__E_k_EUGCQuery_RankedByLifetimePlaytimeSessions = static_cast<int32_t>(0x12),
__E_k_EUGCQuery_RankedByLastUpdatedDate = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EUGCQuery_Unwrapped () const noexcept {
return static_cast<__EUGCQuery_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EUGCQuery() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EUGCQuery(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate value: I32(2)
static ::Steamworks::EUGCQuery const k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate;

/// @brief Field k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate value: I32(7)
static ::Steamworks::EUGCQuery const k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate;

/// @brief Field k_EUGCQuery_CreatedByFriendsRankedByPublicationDate value: I32(5)
static ::Steamworks::EUGCQuery const k_EUGCQuery_CreatedByFriendsRankedByPublicationDate;

/// @brief Field k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate value: I32(4)
static ::Steamworks::EUGCQuery const k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate;

/// @brief Field k_EUGCQuery_NotYetRated value: I32(8)
static ::Steamworks::EUGCQuery const k_EUGCQuery_NotYetRated;

/// @brief Field k_EUGCQuery_RankedByAveragePlaytimeTrend value: I32(15)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByAveragePlaytimeTrend;

/// @brief Field k_EUGCQuery_RankedByLastUpdatedDate value: I32(19)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByLastUpdatedDate;

/// @brief Field k_EUGCQuery_RankedByLifetimeAveragePlaytime value: I32(16)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByLifetimeAveragePlaytime;

/// @brief Field k_EUGCQuery_RankedByLifetimePlaytimeSessions value: I32(18)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByLifetimePlaytimeSessions;

/// @brief Field k_EUGCQuery_RankedByNumTimesReported value: I32(6)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByNumTimesReported;

/// @brief Field k_EUGCQuery_RankedByPlaytimeSessionsTrend value: I32(17)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByPlaytimeSessionsTrend;

/// @brief Field k_EUGCQuery_RankedByPlaytimeTrend value: I32(13)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByPlaytimeTrend;

/// @brief Field k_EUGCQuery_RankedByPublicationDate value: I32(1)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByPublicationDate;

/// @brief Field k_EUGCQuery_RankedByTextSearch value: I32(11)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByTextSearch;

/// @brief Field k_EUGCQuery_RankedByTotalPlaytime value: I32(14)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByTotalPlaytime;

/// @brief Field k_EUGCQuery_RankedByTotalUniqueSubscriptions value: I32(12)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByTotalUniqueSubscriptions;

/// @brief Field k_EUGCQuery_RankedByTotalVotesAsc value: I32(9)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByTotalVotesAsc;

/// @brief Field k_EUGCQuery_RankedByTrend value: I32(3)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByTrend;

/// @brief Field k_EUGCQuery_RankedByVote value: I32(0)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByVote;

/// @brief Field k_EUGCQuery_RankedByVotesUp value: I32(10)
static ::Steamworks::EUGCQuery const k_EUGCQuery_RankedByVotesUp;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EUGCQuery, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EUGCQuery) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
