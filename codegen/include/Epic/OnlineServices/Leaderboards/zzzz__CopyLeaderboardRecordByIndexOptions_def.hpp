#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/CopyLeaderboardRecordByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLeaderboardRecordByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardRecordByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions, "Epic.OnlineServices.Leaderboards", "CopyLeaderboardRecordByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.CopyLeaderboardRecordByIndexOptions
struct CORDL_TYPE CopyLeaderboardRecordByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_LeaderboardRecordIndex, put=set_LeaderboardRecordIndex)) uint32_t  LeaderboardRecordIndex;

/// @brief Method get_LeaderboardRecordIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_LeaderboardRecordIndex() ;

/// @brief Method set_LeaderboardRecordIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_LeaderboardRecordIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLeaderboardRecordByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LeaderboardRecordIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyLeaderboardRecordByIndexOptions(uint32_t  _LeaderboardRecordIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <LeaderboardRecordIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _LeaderboardRecordIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions, _LeaderboardRecordIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
