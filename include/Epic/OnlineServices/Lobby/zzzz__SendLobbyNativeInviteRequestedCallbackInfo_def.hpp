#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/SendLobbyNativeInviteRequestedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendLobbyNativeInviteRequestedCallbackInfo)
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
namespace Epic::OnlineServices::Lobby {
struct SendLobbyNativeInviteRequestedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, "Epic.OnlineServices.Lobby", "SendLobbyNativeInviteRequestedCallbackInfo");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.SendLobbyNativeInviteRequestedCallbackInfo
struct CORDL_TYPE SendLobbyNativeInviteRequestedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_TargetNativeAccountType, put=set_TargetNativeAccountType)) ::Epic::OnlineServices::Utf8String*  TargetNativeAccountType;

 __declspec(property(get=get_TargetUserNativeAccountId, put=set_TargetUserNativeAccountId)) ::Epic::OnlineServices::Utf8String*  TargetUserNativeAccountId;

 __declspec(property(get=get_UiEventId, put=set_UiEventId)) uint64_t  UiEventId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_LobbyId, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_TargetNativeAccountType, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TargetNativeAccountType() ;

/// @brief Method get_TargetUserNativeAccountId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_TargetUserNativeAccountId() ;

/// @brief Method get_UiEventId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_UiEventId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_LobbyId, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_TargetNativeAccountType, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_TargetNativeAccountType(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TargetUserNativeAccountId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserNativeAccountId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_UiEventId, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_UiEventId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendLobbyNativeInviteRequestedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_UiEventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_TargetNativeAccountType_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserNativeAccountId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SendLobbyNativeInviteRequestedCallbackInfo(::System::Object*  _ClientData_k__BackingField, uint64_t  _UiEventId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TargetNativeAccountType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _TargetUserNativeAccountId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <UiEventId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _UiEventId_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <TargetNativeAccountType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TargetNativeAccountType_k__BackingField;

/// @brief Field <TargetUserNativeAccountId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _TargetUserNativeAccountId_k__BackingField;

/// @brief Field <LobbyId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, _UiEventId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, _TargetNativeAccountType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, _TargetUserNativeAccountId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo, _LobbyId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
