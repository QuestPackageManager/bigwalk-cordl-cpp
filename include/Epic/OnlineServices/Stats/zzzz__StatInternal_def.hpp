#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/StatInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StatInternal)
namespace Epic::OnlineServices::Stats {
struct Stat;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Stats {
struct StatInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Stats::StatInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Stats::StatInternal, "Epic.OnlineServices.Stats", "StatInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Stats {
// Is value type: true
// CS Name: Epic.OnlineServices.Stats.StatInternal
struct CORDL_TYPE StatInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>*() ;

/// @brief Method Get, addr 0x1804e0e50, size 0x120, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Stats::Stat>  other) ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Stats__Stat_() ;

// Ctor Parameters []
// @brief default ctor
constexpr StatInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StatInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, int64_t  m_StartTime, int64_t  m_EndTime, int32_t  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_Name;

/// @brief Field m_StartTime, offset: 0x10, size: 0x8, def value: None
 int64_t  m_StartTime;

/// @brief Field m_EndTime, offset: 0x18, size: 0x8, def value: None
 int64_t  m_EndTime;

/// @brief Field m_Value, offset: 0x20, size: 0x4, def value: None
 int32_t  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Stats::StatInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::StatInternal, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::StatInternal, m_StartTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::StatInternal, m_EndTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Stats::StatInternal, m_Value) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Stats::StatInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Stats
