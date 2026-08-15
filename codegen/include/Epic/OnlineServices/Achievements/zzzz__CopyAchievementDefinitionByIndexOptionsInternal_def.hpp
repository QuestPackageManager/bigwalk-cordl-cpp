#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionByIndexOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyAchievementDefinitionByIndexOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct CopyAchievementDefinitionByIndexOptions;
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
struct CopyAchievementDefinitionByIndexOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal, "Epic.OnlineServices.Achievements", "CopyAchievementDefinitionByIndexOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.CopyAchievementDefinitionByIndexOptionsInternal
struct CORDL_TYPE CopyAchievementDefinitionByIndexOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbe0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__CopyAchievementDefinitionByIndexOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyAchievementDefinitionByIndexOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AchievementIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyAchievementDefinitionByIndexOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_AchievementIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9460};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_AchievementIndex, offset: 0x4, size: 0x4, def value: None
 uint32_t  m_AchievementIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal, m_AchievementIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::CopyAchievementDefinitionByIndexOptionsInternal) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
