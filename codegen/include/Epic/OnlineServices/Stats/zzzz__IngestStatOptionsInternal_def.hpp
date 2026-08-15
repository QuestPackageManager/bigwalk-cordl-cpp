#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/IngestStatOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IngestStatOptionsInternal)
namespace Epic::OnlineServices::Stats {
struct IngestStatOptions;
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
struct IngestStatOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::IngestStatOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::IngestStatOptionsInternal, "Epic.OnlineServices.Stats", "IngestStatOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.IngestStatOptionsInternal
struct CORDL_TYPE IngestStatOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804dbea0, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804dbf20, size 0x110, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__IngestStatOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr IngestStatOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Stats", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_StatsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr IngestStatOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Stats, uint32_t  m_StatsCount, ::System::IntPtr  m_TargetUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7651};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_Stats, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_Stats;

/// @brief Field m_StatsCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_StatsCount;

/// @brief Field m_TargetUserId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptionsInternal, m_Stats) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptionsInternal, m_StatsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::IngestStatOptionsInternal, m_TargetUserId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::IngestStatOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
