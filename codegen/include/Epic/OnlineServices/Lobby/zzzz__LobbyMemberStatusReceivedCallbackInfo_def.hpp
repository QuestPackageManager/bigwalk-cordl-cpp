#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyMemberStatusReceivedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyMemberStatusReceivedCallbackInfo)
namespace Epic::OnlineServices::Lobby {
struct LobbyMemberStatus;
}
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
struct LobbyMemberStatusReceivedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo, "Epic.OnlineServices.Lobby", "LobbyMemberStatusReceivedCallbackInfo");
// Dependencies Epic.OnlineServices.Lobby.LobbyMemberStatus
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyMemberStatusReceivedCallbackInfo
struct CORDL_TYPE LobbyMemberStatusReceivedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_CurrentStatus, put=set_CurrentStatus)) ::Epic::OnlineServices::Lobby::LobbyMemberStatus  CurrentStatus;

 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_CurrentStatus, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyMemberStatus get_CurrentStatus() ;

/// @brief Method get_LobbyId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_TargetUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_CurrentStatus, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentStatus(::Epic::OnlineServices::Lobby::LobbyMemberStatus  value) ;

/// @brief Method set_LobbyId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TargetUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyMemberStatusReceivedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_CurrentStatus_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyMemberStatus", modifiers: "", def_value: None }]
constexpr LobbyMemberStatusReceivedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyMemberStatus  _CurrentStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8545};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LobbyId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <CurrentStatus>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyMemberStatus  _CurrentStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo, _LobbyId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo, _TargetUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo, _CurrentStatus_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
