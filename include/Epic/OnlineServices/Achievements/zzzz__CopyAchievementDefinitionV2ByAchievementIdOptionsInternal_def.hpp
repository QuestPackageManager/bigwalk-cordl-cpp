#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionV2ByAchievementIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyAchievementDefinitionV2ByAchievementIdOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionV2ByAchievementIdOptions;
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
struct CopyAchievementDefinitionV2ByAchievementIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptionsInternal, "Epic.OnlineServices.Achievements", "CopyAchievementDefinitionV2ByAchievementIdOptionsInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyAchievementDefinitionV2ByAchievementIdOptionsInternal
struct CORDL_TYPE CopyAchievementDefinitionV2ByAchievementIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804e6d90, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180524540, size 0x80, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyAchievementDefinitionV2ByAchievementIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyAchievementDefinitionV2ByAchievementIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr CopyAchievementDefinitionV2ByAchievementIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9462};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AchievementId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_AchievementId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptionsInternal, m_AchievementId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByAchievementIdOptionsInternal) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
