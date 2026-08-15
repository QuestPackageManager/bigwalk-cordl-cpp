#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/UnlockedAchievement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UnlockedAchievement)
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct UnlockedAchievement;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::UnlockedAchievement);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::UnlockedAchievement, "Epic.OnlineServices.Achievements", "UnlockedAchievement");
// Dependencies System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.UnlockedAchievement
struct CORDL_TYPE UnlockedAchievement {
public:
// Declarations
 __declspec(property(get=get_AchievementId, put=set_AchievementId)) ::Epic::OnlineServices::Utf8String*  AchievementId;

 __declspec(property(get=get_UnlockTime, put=set_UnlockTime)) ::System::Nullable_1<::System::DateTimeOffset>  UnlockTime;

/// @brief Method get_AchievementId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AchievementId() ;

/// @brief Method get_UnlockTime, addr 0x1804bda90, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime() ;

/// @brief Method set_AchievementId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AchievementId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UnlockTime, addr 0x1804bdad0, size 0x20, virtual false, abstract: false, final false
inline void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnlockedAchievement() ;

// Ctor Parameters [CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnlockTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }]
constexpr UnlockedAchievement(::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <AchievementId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField;

/// @brief Field <UnlockTime>k__BackingField, offset: 0x8, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockedAchievement, _AchievementId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::UnlockedAchievement, _UnlockTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::UnlockedAchievement) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
