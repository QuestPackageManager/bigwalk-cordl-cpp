#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Leaderboards/UserScoresQueryStatInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Leaderboards/zzzz__LeaderboardAggregation_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserScoresQueryStatInfoInternal)
namespace Epic::OnlineServices::Leaderboards {
struct UserScoresQueryStatInfo;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Leaderboards {
struct UserScoresQueryStatInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal, "Epic.OnlineServices.Leaderboards", "UserScoresQueryStatInfoInternal");
// Dependencies Epic.OnlineServices.Leaderboards.LeaderboardAggregation, System.IntPtr
namespace Epic::OnlineServices::Leaderboards {
// Is value type: true
// CS Name: Epic.OnlineServices.Leaderboards.UserScoresQueryStatInfoInternal
struct CORDL_TYPE UserScoresQueryStatInfoInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804f3150, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfo>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Leaderboards__UserScoresQueryStatInfo_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UserScoresQueryStatInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StatName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Aggregation", ty: "::Epic::OnlineServices::Leaderboards::LeaderboardAggregation", modifiers: "", def_value: None }]
constexpr UserScoresQueryStatInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_StatName, ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  m_Aggregation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_StatName, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_StatName;

/// @brief Field m_Aggregation, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Leaderboards::LeaderboardAggregation  m_Aggregation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal, m_StatName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal, m_Aggregation) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Leaderboards::UserScoresQueryStatInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Leaderboards
