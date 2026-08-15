#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/LoginStatusChangedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginStatusChangedCallbackInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct LoginStatus;
}
namespace Epic::OnlineServices {
class ProductUserId;
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
namespace Epic::OnlineServices::Connect {
struct LoginStatusChangedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo, "Epic.OnlineServices.Connect", "LoginStatusChangedCallbackInfo");
// Dependencies Epic.OnlineServices.LoginStatus
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.LoginStatusChangedCallbackInfo
struct CORDL_TYPE LoginStatusChangedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_CurrentStatus, put=set_CurrentStatus)) ::Epic::OnlineServices::LoginStatus  CurrentStatus;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_PreviousStatus, put=set_PreviousStatus)) ::Epic::OnlineServices::LoginStatus  PreviousStatus;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_CurrentStatus, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus get_CurrentStatus() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_PreviousStatus, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::LoginStatus get_PreviousStatus() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_CurrentStatus, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentStatus(::Epic::OnlineServices::LoginStatus  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_PreviousStatus, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_PreviousStatus(::Epic::OnlineServices::LoginStatus  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginStatusChangedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_PreviousStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }, CppParam { name: "_CurrentStatus_k__BackingField", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }]
constexpr LoginStatusChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::LoginStatus  _PreviousStatus_k__BackingField, ::Epic::OnlineServices::LoginStatus  _CurrentStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9156};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <PreviousStatus>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  _PreviousStatus_k__BackingField;

/// @brief Field <CurrentStatus>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  _CurrentStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo, _PreviousStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo, _CurrentStatus_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
