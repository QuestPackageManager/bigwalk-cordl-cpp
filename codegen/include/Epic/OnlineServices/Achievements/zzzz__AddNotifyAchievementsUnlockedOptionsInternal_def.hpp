#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/AddNotifyAchievementsUnlockedOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AddNotifyAchievementsUnlockedOptionsInternal)
namespace Epic::OnlineServices::Achievements {
struct AddNotifyAchievementsUnlockedOptions;
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
struct AddNotifyAchievementsUnlockedOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptionsInternal, "Epic.OnlineServices.Achievements", "AddNotifyAchievementsUnlockedOptionsInternal");
// Dependencies 
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.AddNotifyAchievementsUnlockedOptionsInternal
struct CORDL_TYPE AddNotifyAchievementsUnlockedOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x1804bdbc0, size 0x20, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__AddNotifyAchievementsUnlockedOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyAchievementsUnlockedOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddNotifyAchievementsUnlockedOptionsInternal(int32_t  m_ApiVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::AddNotifyAchievementsUnlockedOptionsInternal) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
