#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardRecord)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardRecord;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::LeaderboardRecord);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::LeaderboardRecord, "Epic.OnlineServices.Leaderboards", "LeaderboardRecord");
// Dependencies 
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.LeaderboardRecord
struct CORDL_TYPE LeaderboardRecord {
public:
// Declarations
 __declspec(property(get=get_Rank, put=set_Rank)) uint32_t  Rank;

 __declspec(property(get=get_Score, put=set_Score)) int32_t  Score;

 __declspec(property(get=get_UserDisplayName, put=set_UserDisplayName)) ::Epic::OnlineServices::Utf8String*  UserDisplayName;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Method get_Rank, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Rank() ;

/// @brief Method get_Score, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Score() ;

/// @brief Method get_UserDisplayName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UserDisplayName() ;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Method set_Rank, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Rank(uint32_t  value) ;

/// @brief Method set_Score, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_Score(int32_t  value) ;

/// @brief Method set_UserDisplayName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_UserDisplayName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardRecord() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Rank_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Score_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_UserDisplayName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr LeaderboardRecord(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, uint32_t  _Rank_k__BackingField, int32_t  _Score_k__BackingField, ::Epic::OnlineServices::Utf8String*  _UserDisplayName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8717};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <Rank>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _Rank_k__BackingField;

/// @brief Field <Score>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _Score_k__BackingField;

/// @brief Field <UserDisplayName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UserDisplayName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecord, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecord, _Rank_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecord, _Score_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::LeaderboardRecord, _UserDisplayName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::LeaderboardRecord) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
