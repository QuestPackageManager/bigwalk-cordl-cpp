#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2Info.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnAchievementsUnlockedCallbackV2Info)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
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
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct OnAchievementsUnlockedCallbackV2Info;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info, "Epic.OnlineServices.Achievements", "OnAchievementsUnlockedCallbackV2Info");
// Dependencies System.DateTimeOffset, System.Nullable`1<T>
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.OnAchievementsUnlockedCallbackV2Info
struct CORDL_TYPE OnAchievementsUnlockedCallbackV2Info {
public:
// Declarations
 __declspec(property(get=get_AchievementId, put=set_AchievementId)) ::Epic::OnlineServices::Utf8String*  AchievementId;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_UnlockTime, put=set_UnlockTime)) ::System::Nullable_1<::System::DateTimeOffset>  UnlockTime;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_AchievementId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_AchievementId() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_UnlockTime, addr 0x1804e66a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::DateTimeOffset> get_UnlockTime() ;

/// @brief Method get_UserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_AchievementId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_AchievementId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_UnlockTime, addr 0x1804f66a0, size 0x20, virtual false, abstract: false, final false
inline void set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method set_UserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnAchievementsUnlockedCallbackV2Info() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_UnlockTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: None }]
constexpr OnAchievementsUnlockedCallbackV2Info(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <AchievementId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField;

/// @brief Field <UnlockTime>k__BackingField, offset: 0x18, size: 0x18, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info, _UserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info, _AchievementId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info, _UnlockTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
