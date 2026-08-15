#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/CopyLeaderboardDefinitionByLeaderboardIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CopyLeaderboardDefinitionByLeaderboardIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardDefinitionByLeaderboardIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions, "Epic.OnlineServices.Leaderboards", "CopyLeaderboardDefinitionByLeaderboardIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.CopyLeaderboardDefinitionByLeaderboardIdOptions
struct CORDL_TYPE CopyLeaderboardDefinitionByLeaderboardIdOptions {
public:
// Declarations
 __declspec(property(get=get_LeaderboardId, put=set_LeaderboardId)) ::Epic::OnlineServices::Utf8String*  LeaderboardId;

/// @brief Method get_LeaderboardId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LeaderboardId() ;

/// @brief Method set_LeaderboardId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LeaderboardId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLeaderboardDefinitionByLeaderboardIdOptions() ;

// Ctor Parameters [CppParam { name: "_LeaderboardId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CopyLeaderboardDefinitionByLeaderboardIdOptions(::Epic::OnlineServices::Utf8String*  _LeaderboardId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8698};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <LeaderboardId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LeaderboardId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions, _LeaderboardId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
