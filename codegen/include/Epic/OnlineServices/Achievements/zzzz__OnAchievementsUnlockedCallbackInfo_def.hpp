#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnAchievementsUnlockedCallbackInfo)
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
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
struct OnAchievementsUnlockedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo, "Epic.OnlineServices.Achievements", "OnAchievementsUnlockedCallbackInfo");
// Dependencies Epic.OnlineServices.Utf8String
namespace Epic::OnlineServices::Achievements {
// Is value type: true
// CS Name: Epic.OnlineServices.Achievements.OnAchievementsUnlockedCallbackInfo
struct CORDL_TYPE OnAchievementsUnlockedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_AchievementIds, put=set_AchievementIds)) ::ArrayW<::Epic::OnlineServices::Utf8String*>  AchievementIds;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_AchievementIds, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::Utf8String*> get_AchievementIds() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_UserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_AchievementIds, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_AchievementIds(::ArrayW<::Epic::OnlineServices::Utf8String*>  value) ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_UserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnAchievementsUnlockedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_AchievementIds_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::Utf8String*>", modifiers: "", def_value: None }]
constexpr OnAchievementsUnlockedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, ::ArrayW<::Epic::OnlineServices::Utf8String*>  _AchievementIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <AchievementIds>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Utf8String*>  _AchievementIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo, _UserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo, _AchievementIds_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements
