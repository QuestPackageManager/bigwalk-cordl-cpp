#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/QueryStatsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryStatsOptionsInternal)
namespace Epic::OnlineServices::Stats {
struct QueryStatsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct QueryStatsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, "Epic.OnlineServices.Stats", "QueryStatsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.QueryStatsOptionsInternal
struct CORDL_TYPE QueryStatsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804dfe20, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804dfea0, size 0x230, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__QueryStatsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryStatsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_StatNames", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_StatNamesCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryStatsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, int64_t  m_StartTime, int64_t  m_EndTime, ::System::IntPtr  m_StatNames, uint32_t  m_StatNamesCount, ::System::IntPtr  m_TargetUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7661};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_StartTime, offset: 0x10, size: 0x8, def value: None
 int64_t  m_StartTime;

/// @brief Field m_EndTime, offset: 0x18, size: 0x8, def value: None
 int64_t  m_EndTime;

/// @brief Field m_StatNames, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_StatNames;

/// @brief Field m_StatNamesCount, offset: 0x28, size: 0x4, def value: None
 uint32_t  m_StatNamesCount;

/// @brief Field m_TargetUserId, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_StartTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_EndTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_StatNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_StatNamesCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal, m_TargetUserId) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::QueryStatsOptionsInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
