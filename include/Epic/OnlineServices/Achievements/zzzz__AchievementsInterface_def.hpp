#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/AchievementsInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementsInterface)
namespace Epic::OnlineServices::Achievements {
struct AddNotifyAchievementsUnlockedOptions;
}
namespace Epic::OnlineServices::Achievements {
struct AddNotifyAchievementsUnlockedV2Options;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionByAchievementIdOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionByIndexOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionV2ByAchievementIdOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionV2ByIndexOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyPlayerAchievementByAchievementIdOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyPlayerAchievementByIndexOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByAchievementIdOptions;
}
namespace Epic::OnlineServices::Achievements {
struct CopyUnlockedAchievementByIndexOptions;
}
namespace Epic::OnlineServices::Achievements {
struct DefinitionV2;
}
namespace Epic::OnlineServices::Achievements {
struct Definition;
}
namespace Epic::OnlineServices::Achievements {
struct GetAchievementDefinitionCountOptions;
}
namespace Epic::OnlineServices::Achievements {
struct GetPlayerAchievementCountOptions;
}
namespace Epic::OnlineServices::Achievements {
struct GetUnlockedAchievementCountOptions;
}
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackV2;
}
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallback;
}
namespace Epic::OnlineServices::Achievements {
class OnQueryDefinitionsCompleteCallback;
}
namespace Epic::OnlineServices::Achievements {
class OnQueryPlayerAchievementsCompleteCallback;
}
namespace Epic::OnlineServices::Achievements {
class OnUnlockAchievementsCompleteCallback;
}
namespace Epic::OnlineServices::Achievements {
struct PlayerAchievement;
}
namespace Epic::OnlineServices::Achievements {
struct QueryDefinitionsOptions;
}
namespace Epic::OnlineServices::Achievements {
struct QueryPlayerAchievementsOptions;
}
namespace Epic::OnlineServices::Achievements {
struct UnlockAchievementsOptions;
}
namespace Epic::OnlineServices::Achievements {
struct UnlockedAchievement;
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
namespace Epic::OnlineServices::Achievements {
class AchievementsInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Achievements::AchievementsInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::AchievementsInterface*, "Epic.OnlineServices.Achievements", "AchievementsInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::Achievements {
// Is value type: false
// CS Name: Epic.OnlineServices.Achievements.AchievementsInterface
class CORDL_TYPE AchievementsInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyAchievementsUnlocked, addr 0x18052cdb0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyAchievementsUnlocked(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallback*  notificationFn) ;

/// @brief Method AddNotifyAchievementsUnlockedV2, addr 0x18052cbc0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyAchievementsUnlockedV2(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedV2Options>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2*  notificationFn) ;

/// @brief Method CopyAchievementDefinitionByAchievementId, addr 0x18052cfa0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyAchievementDefinitionByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>  outDefinition) ;

/// @brief Method CopyAchievementDefinitionByIndex, addr 0x18052d060, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyAchievementDefinitionByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::Definition>>  outDefinition) ;

/// @brief Method CopyAchievementDefinitionV2ByAchievementId, addr 0x18052d0e0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyAchievementDefinitionV2ByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>  outDefinition) ;

/// @brief Method CopyAchievementDefinitionV2ByIndex, addr 0x18052d1a0, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyAchievementDefinitionV2ByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2>>  outDefinition) ;

/// @brief Method CopyPlayerAchievementByAchievementId, addr 0x18052d220, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyPlayerAchievementByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>  outAchievement) ;

/// @brief Method CopyPlayerAchievementByIndex, addr 0x18052d310, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyPlayerAchievementByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>>  outAchievement) ;

/// @brief Method CopyUnlockedAchievementByAchievementId, addr 0x18052d3f0, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyUnlockedAchievementByAchievementId(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>  outAchievement) ;

/// @brief Method CopyUnlockedAchievementByIndex, addr 0x18052d4d0, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result CopyUnlockedAchievementByIndex(::by_ref<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>>  outAchievement) ;

/// @brief Method GetAchievementDefinitionCount, addr 0x18052d590, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetAchievementDefinitionCount(::by_ref<::Epic::OnlineServices::Achievements::GetAchievementDefinitionCountOptions>  options) ;

/// @brief Method GetPlayerAchievementCount, addr 0x18052d5d0, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetPlayerAchievementCount(::by_ref<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>  options) ;

/// @brief Method GetUnlockedAchievementCount, addr 0x18052d640, size 0x70, virtual false, abstract: false, final false
inline uint32_t GetUnlockedAchievementCount(::by_ref<::Epic::OnlineServices::Achievements::GetUnlockedAchievementCountOptions>  options) ;

static inline ::Epic::OnlineServices::Achievements::AchievementsInterface* New_ctor() ;

static inline ::Epic::OnlineServices::Achievements::AchievementsInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method QueryDefinitions, addr 0x18052d6b0, size 0x260, virtual false, abstract: false, final false
inline void QueryDefinitions(::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnQueryDefinitionsCompleteCallback*  completionDelegate) ;

/// @brief Method QueryPlayerAchievements, addr 0x18052d910, size 0x230, virtual false, abstract: false, final false
inline void QueryPlayerAchievements(::by_ref<::Epic::OnlineServices::Achievements::QueryPlayerAchievementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnQueryPlayerAchievementsCompleteCallback*  completionDelegate) ;

/// @brief Method RemoveNotifyAchievementsUnlocked, addr 0x18052db40, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyAchievementsUnlocked(uint64_t  inId) ;

/// @brief Method UnlockAchievements, addr 0x18052db70, size 0x240, virtual false, abstract: false, final false
inline void UnlockAchievements(::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Achievements::OnUnlockAchievementsCompleteCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AchievementsInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AchievementsInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AchievementsInterface(AchievementsInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AchievementsInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AchievementsInterface(AchievementsInterface const& ) = delete;

/// @brief Field ACHIEVEMENT_UNLOCKTIME_UNDEFINED offset 0xffffffff size 0x4
static constexpr int32_t  ACHIEVEMENT_UNLOCKTIME_UNDEFINED{static_cast<int32_t>(0xffffffff)};

/// @brief Field ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field ADDNOTIFYACHIEVEMENTSUNLOCKED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYACHIEVEMENTSUNLOCKED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYACHIEVEMENTDEFINITIONV2BYACHIEVEMENTID_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYACHIEVEMENTDEFINITIONV2BYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYACHIEVEMENTDEFINITIONV2BYINDEX_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYDEFINITIONBYACHIEVEMENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYDEFINITIONBYACHIEVEMENTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYDEFINITIONBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYDEFINITIONBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYDEFINITIONV2BYACHIEVEMENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYDEFINITIONV2BYACHIEVEMENTID_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYDEFINITIONV2BYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYDEFINITIONV2BYINDEX_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYPLAYERACHIEVEMENTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYPLAYERACHIEVEMENTBYINDEX_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTID_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYUNLOCKEDACHIEVEMENTBYACHIEVEMENTID_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field COPYUNLOCKEDACHIEVEMENTBYINDEX_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  COPYUNLOCKEDACHIEVEMENTBYINDEX_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DEFINITIONV2_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DEFINITIONV2_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field DEFINITION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DEFINITION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETACHIEVEMENTDEFINITIONCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETACHIEVEMENTDEFINITIONCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPLAYERACHIEVEMENTCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPLAYERACHIEVEMENTCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETUNLOCKEDACHIEVEMENTCOUNT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETUNLOCKEDACHIEVEMENTCOUNT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field PLAYERACHIEVEMENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PLAYERACHIEVEMENT_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field PLAYERSTATINFO_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PLAYERSTATINFO_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field QUERYDEFINITIONS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYDEFINITIONS_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field QUERYPLAYERACHIEVEMENTS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  QUERYPLAYERACHIEVEMENTS_API_LATEST{static_cast<int32_t>(0x2)};

/// @brief Field STATTHRESHOLDS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  STATTHRESHOLDS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field STATTHRESHOLD_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  STATTHRESHOLD_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNLOCKACHIEVEMENTS_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNLOCKACHIEVEMENTS_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNLOCKEDACHIEVEMENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNLOCKEDACHIEVEMENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9452};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Achievements::AchievementsInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
