#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnFriendsUpdateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Friends/zzzz__FriendsStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnFriendsUpdateInfo)
namespace Epic::OnlineServices::Friends {
struct FriendsStatus;
}
namespace Epic::OnlineServices {
class EpicAccountId;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
struct OnFriendsUpdateInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo, "Epic.OnlineServices.Friends", "OnFriendsUpdateInfo");
// Dependencies Epic.OnlineServices.Friends.FriendsStatus
namespace Epic::OnlineServices::Friends {
// Is value type: true
// CS Name: Epic.OnlineServices.Friends.OnFriendsUpdateInfo
struct CORDL_TYPE OnFriendsUpdateInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_CurrentStatus, put=set_CurrentStatus)) ::Epic::OnlineServices::Friends::FriendsStatus  CurrentStatus;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_PreviousStatus, put=set_PreviousStatus)) ::Epic::OnlineServices::Friends::FriendsStatus  PreviousStatus;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::EpicAccountId*  TargetUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_CurrentStatus, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Friends::FriendsStatus get_CurrentStatus() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_PreviousStatus, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Friends::FriendsStatus get_PreviousStatus() ;

/// @brief Method get_TargetUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_TargetUserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_CurrentStatus, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentStatus(::Epic::OnlineServices::Friends::FriendsStatus  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_PreviousStatus, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_PreviousStatus(::Epic::OnlineServices::Friends::FriendsStatus  value) ;

/// @brief Method set_TargetUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnFriendsUpdateInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_PreviousStatus_k__BackingField", ty: "::Epic::OnlineServices::Friends::FriendsStatus", modifiers: "", def_value: None }, CppParam { name: "_CurrentStatus_k__BackingField", ty: "::Epic::OnlineServices::Friends::FriendsStatus", modifiers: "", def_value: None }]
constexpr OnFriendsUpdateInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::Friends::FriendsStatus  _PreviousStatus_k__BackingField, ::Epic::OnlineServices::Friends::FriendsStatus  _CurrentStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8864};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField;

/// @brief Field <PreviousStatus>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Friends::FriendsStatus  _PreviousStatus_k__BackingField;

/// @brief Field <CurrentStatus>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::Friends::FriendsStatus  _CurrentStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo, _TargetUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo, _PreviousStatus_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo, _CurrentStatus_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Friends::OnFriendsUpdateInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
