#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/LeaderboardsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardsInterface)
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardDefinitionByIndexOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardDefinitionByLeaderboardIdOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardRecordByIndexOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardRecordByUserIdOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardUserScoreByIndexOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct CopyLeaderboardUserScoreByUserIdOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct Definition;
}
namespace Epic::OnlineServices::Leaderboards {
struct GetLeaderboardDefinitionCountOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct GetLeaderboardRecordCountOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct GetLeaderboardUserScoreCountOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardRecord;
}
namespace Epic::OnlineServices::Leaderboards {
struct LeaderboardUserScore;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardDefinitionsCompleteCallback;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardRanksCompleteCallback;
}
namespace Epic::OnlineServices::Leaderboards {
class OnQueryLeaderboardUserScoresCompleteCallback;
}
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardDefinitionsOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardRanksOptions;
}
namespace Epic::OnlineServices::Leaderboards {
struct QueryLeaderboardUserScoresOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
class LeaderboardsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::LeaderboardsInterface*, "Epic.OnlineServices.Leaderboards", "LeaderboardsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Leaderboards {
// Is value type: false
// CS Name: Epic.OnlineServices.Leaderboards.LeaderboardsInterface
class CORDL_TYPE LeaderboardsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method CopyLeaderboardDefinitionByIndex, addr 0x180505a90, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLeaderboardDefinitionByIndex(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>  outLeaderboardDefinition) ;

/// @brief Method CopyLeaderboardDefinitionByLeaderboardId, addr 0x180505b10, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLeaderboardDefinitionByLeaderboardId(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardDefinitionByLeaderboardIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::Definition>>  outLeaderboardDefinition) ;

/// @brief Method CopyLeaderboardRecordByIndex, addr 0x180505bd0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLeaderboardRecordByIndex(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>  outLeaderboardRecord) ;

/// @brief Method CopyLeaderboardRecordByUserId, addr 0x180505c50, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLeaderboardRecordByUserId(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardRecordByUserIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardRecord>>  outLeaderboardRecord) ;

/// @brief Method CopyLeaderboardUserScoreByIndex, addr 0x180505d10, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLeaderboardUserScoreByIndex(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>  outLeaderboardUserScore) ;

/// @brief Method CopyLeaderboardUserScoreByUserId, addr 0x180505dd0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyLeaderboardUserScoreByUserId(::by_ref<::Epic::OnlineServices::Leaderboards::CopyLeaderboardUserScoreByUserIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Leaderboards::LeaderboardUserScore>>  outLeaderboardUserScore) ;

/// @brief Method GetLeaderboardDefinitionCount, addr 0x180505eb0, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetLeaderboardDefinitionCount(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardDefinitionCountOptions>  options) ;

/// @brief Method GetLeaderboardRecordCount, addr 0x180505ef0, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetLeaderboardRecordCount(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions>  options) ;

/// @brief Method GetLeaderboardUserScoreCount, addr 0x180505f30, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetLeaderboardUserScoreCount(::by_ref<::Epic::OnlineServices::Leaderboards::GetLeaderboardUserScoreCountOptions>  options) ;

static inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Leaderboards::LeaderboardsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryLeaderboardDefinitions, addr 0x180505fa0, size 0x100, virtual false, abstract: false, final false
inline void QueryLeaderboardDefinitions(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardDefinitionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardDefinitionsCompleteCallback*  completionDelegate) ;

/// @brief Method QueryLeaderboardRanks, addr 0x1805060a0, size 0x100, virtual false, abstract: false, final false
inline void QueryLeaderboardRanks(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardRanksOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardRanksCompleteCallback*  completionDelegate) ;

/// @brief Method QueryLeaderboardUserScores, addr 0x1805061a0, size 0x2f0, virtual false, abstract: false, final false
inline void QueryLeaderboardUserScores(::by_ref<::Epic::OnlineServices::Leaderboards::QueryLeaderboardUserScoresOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Leaderboards::OnQueryLeaderboardUserScoresCompleteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LeaderboardsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardsInterface(LeaderboardsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardsInterface(LeaderboardsInterface const& ) = delete;

/// @brief Field COPYLEADERBOARDDEFINITIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLEADERBOARDDEFINITIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLEADERBOARDDEFINITIONBYLEADERBOARDID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLEADERBOARDDEFINITIONBYLEADERBOARDID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLEADERBOARDRECORDBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLEADERBOARDRECORDBYINDEX_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYLEADERBOARDRECORDBYUSERID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLEADERBOARDRECORDBYUSERID_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYLEADERBOARDUSERSCOREBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLEADERBOARDUSERSCOREBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYLEADERBOARDUSERSCOREBYUSERID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYLEADERBOARDUSERSCOREBYUSERID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DEFINITION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DEFINITION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETLEADERBOARDDEFINITIONCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETLEADERBOARDDEFINITIONCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETLEADERBOARDRECORDCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETLEADERBOARDRECORDCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETLEADERBOARDUSERSCORECOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETLEADERBOARDUSERSCORECOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field LEADERBOARDRECORD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LEADERBOARDRECORD_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field LEADERBOARDUSERSCORE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  LEADERBOARDUSERSCORE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYLEADERBOARDDEFINITIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYLEADERBOARDDEFINITIONS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYLEADERBOARDRANKS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYLEADERBOARDRANKS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field QUERYLEADERBOARDUSERSCORES_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYLEADERBOARDUSERSCORES_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field TIME_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  TIME_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field USERSCORESQUERYSTATINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  USERSCORESQUERYSTATINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Leaderboards::LeaderboardsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
