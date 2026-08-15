#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/QueryDefinitionsOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryDefinitionsOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct QueryDefinitionsOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct QueryDefinitionsOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal, "Epic.OnlineServices.Achievements", "QueryDefinitionsOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.QueryDefinitionsOptionsInternal
struct CORDL_TYPE QueryDefinitionsOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1b70, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180533310, size 0x120, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::QueryDefinitionsOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__QueryDefinitionsOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryDefinitionsOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_EpicUserId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_HiddenAchievementIds_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_HiddenAchievementsCount_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr QueryDefinitionsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_EpicUserId_DEPRECATED, ::System::IntPtr  m_HiddenAchievementIds_DEPRECATED, uint32_t  m_HiddenAchievementsCount_DEPRECATED) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_EpicUserId_DEPRECATED, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_EpicUserId_DEPRECATED;

/// @brief Field m_HiddenAchievementIds_DEPRECATED, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_HiddenAchievementIds_DEPRECATED;

/// @brief Field m_HiddenAchievementsCount_DEPRECATED, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_HiddenAchievementsCount_DEPRECATED;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal, m_EpicUserId_DEPRECATED) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal, m_HiddenAchievementIds_DEPRECATED) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal, m_HiddenAchievementsCount_DEPRECATED) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::QueryDefinitionsOptionsInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
