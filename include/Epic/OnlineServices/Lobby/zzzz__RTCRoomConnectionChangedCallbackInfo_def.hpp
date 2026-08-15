#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/RTCRoomConnectionChangedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RTCRoomConnectionChangedCallbackInfo)
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
struct RTCRoomConnectionChangedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo, "Epic.OnlineServices.Lobby", "RTCRoomConnectionChangedCallbackInfo");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.RTCRoomConnectionChangedCallbackInfo
struct CORDL_TYPE RTCRoomConnectionChangedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_DisconnectReason, put=set_DisconnectReason)) ::Epic::OnlineServices::Result  DisconnectReason;

 __declspec(property(get=get_IsConnected, put=set_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_DisconnectReason, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_DisconnectReason() ;

/// @brief Method get_IsConnected, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_LobbyId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_DisconnectReason, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_DisconnectReason(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_IsConnected, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_IsConnected(bool  value) ;

/// @brief Method set_LobbyId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RTCRoomConnectionChangedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_IsConnected_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_DisconnectReason_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }]
constexpr RTCRoomConnectionChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, bool  _IsConnected_k__BackingField, ::Epic::OnlineServices::Result  _DisconnectReason_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8678};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LobbyId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <IsConnected>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  _IsConnected_k__BackingField;

/// @brief Field <DisconnectReason>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _DisconnectReason_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo, _LobbyId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo, _IsConnected_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo, _DisconnectReason_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
