#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/JoinLobbyByIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JoinLobbyByIdOptions)
namespace Epic::OnlineServices::Lobby {
struct LobbyRTCRoomJoinActionType;
}
namespace Epic::OnlineServices::Lobby {
struct LocalRTCOptions;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyByIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, "Epic.OnlineServices.Lobby", "JoinLobbyByIdOptions");
// Dependencies Epic.OnlineServices.Lobby.LobbyRTCRoomJoinActionType, Epic.OnlineServices.Lobby.LocalRTCOptions, System.Nullable`1<T>
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.JoinLobbyByIdOptions
struct CORDL_TYPE JoinLobbyByIdOptions {
public:
// Declarations
 __declspec(property(get=get_CrossplayOptOut, put=set_CrossplayOptOut)) bool  CrossplayOptOut;

 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_LocalRTCOptions, put=set_LocalRTCOptions)) ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  LocalRTCOptions;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_PresenceEnabled, put=set_PresenceEnabled)) bool  PresenceEnabled;

 __declspec(property(get=get_RTCRoomJoinActionType, put=set_RTCRoomJoinActionType)) ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  RTCRoomJoinActionType;

/// @brief Method get_CrossplayOptOut, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_CrossplayOptOut() ;

/// @brief Method get_LobbyId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_LocalRTCOptions, addr 0x1804e66a0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> get_LocalRTCOptions() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_PresenceEnabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_PresenceEnabled() ;

/// @brief Method get_RTCRoomJoinActionType, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType get_RTCRoomJoinActionType() ;

/// @brief Method set_CrossplayOptOut, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_CrossplayOptOut(bool  value) ;

/// @brief Method set_LobbyId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalRTCOptions, addr 0x1804f66a0, size 0x20, virtual false, abstract: false, final false
inline void set_LocalRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_PresenceEnabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_PresenceEnabled(bool  value) ;

/// @brief Method set_RTCRoomJoinActionType, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_RTCRoomJoinActionType(::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinLobbyByIdOptions() ;

// Ctor Parameters [CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_PresenceEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_LocalRTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>", modifiers: "", def_value: None }, CppParam { name: "_CrossplayOptOut_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_RTCRoomJoinActionType_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: None }]
constexpr JoinLobbyByIdOptions(::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, bool  _PresenceEnabled_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField, bool  _CrossplayOptOut_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  _RTCRoomJoinActionType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8485};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <LobbyId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <PresenceEnabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  _PresenceEnabled_k__BackingField;

/// @brief Field <LocalRTCOptions>k__BackingField, offset: 0x18, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField;

/// @brief Field <CrossplayOptOut>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  _CrossplayOptOut_k__BackingField;

/// @brief Field <RTCRoomJoinActionType>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  _RTCRoomJoinActionType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, _LobbyId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, _PresenceEnabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, _LocalRTCOptions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, _CrossplayOptOut_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions, _RTCRoomJoinActionType_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
