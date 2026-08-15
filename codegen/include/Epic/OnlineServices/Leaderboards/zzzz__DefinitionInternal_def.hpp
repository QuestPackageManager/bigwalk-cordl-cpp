#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/DefinitionInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefinitionInternal)
namespace Epic::OnlineServices::Leaderboards {
struct Definition;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct DefinitionInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::DefinitionInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::DefinitionInternal, "Epic.OnlineServices.Leaderboards", "DefinitionInternal");
// Dependencies Epic.OnlineServices.Leaderboards.LeaderboardAggregation, System.IntPtr
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.DefinitionInternal
struct CORDL_TYPE DefinitionInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>*() ;

/// @brief Method Get, addr 0x180504b70, size 0x220, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Leaderboards::Definition>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Leaderboards::Definition>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Leaderboards__Definition_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DefinitionInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LeaderboardId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_StatName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Aggregation", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr DefinitionInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LeaderboardId, ::System::IntPtr  m_StatName, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  m_Aggregation, int64_t  m_StartTime, int64_t  m_EndTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LeaderboardId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LeaderboardId;

/// @brief Field m_StatName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_StatName;

/// @brief Field m_Aggregation, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  m_Aggregation;

/// @brief Field m_StartTime, offset: 0x20, size: 0x8, def value: None
 int64_t  m_StartTime;

/// @brief Field m_EndTime, offset: 0x28, size: 0x8, def value: None
 int64_t  m_EndTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::DefinitionInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::DefinitionInternal, m_LeaderboardId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::DefinitionInternal, m_StatName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::DefinitionInternal, m_Aggregation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::DefinitionInternal, m_StartTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::DefinitionInternal, m_EndTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::DefinitionInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
