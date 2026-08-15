#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/JoinLobbyByIdOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LobbyRTCRoomJoinActionType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinLobbyByIdOptionsInternal)
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyByIdOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyByIdOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, "Epic.OnlineServices.Lobby", "JoinLobbyByIdOptionsInternal");
// Dependencies Epic.OnlineServices.Lobby.LobbyRTCRoomJoinActionType, System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.JoinLobbyByIdOptionsInternal
struct CORDL_TYPE JoinLobbyByIdOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1804f1a20, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180505560, size 0x140, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::JoinLobbyByIdOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__JoinLobbyByIdOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinLobbyByIdOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalRTCOptions", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CrossplayOptOut", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RTCRoomJoinActionType", ty: "::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType", modifiers: "", def_value: None }]
constexpr JoinLobbyByIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LobbyId, ::System::IntPtr  m_LocalUserId, int32_t  m_PresenceEnabled, ::System::IntPtr  m_LocalRTCOptions, int32_t  m_CrossplayOptOut, ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  m_RTCRoomJoinActionType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8486};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_LobbyId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PresenceEnabled, offset: 0x18, size: 0x4, def value: None
 int32_t  m_PresenceEnabled;

/// @brief Field m_LocalRTCOptions, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_LocalRTCOptions;

/// @brief Field m_CrossplayOptOut, offset: 0x28, size: 0x4, def value: None
 int32_t  m_CrossplayOptOut;

/// @brief Field m_RTCRoomJoinActionType, offset: 0x2c, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyRTCRoomJoinActionType  m_RTCRoomJoinActionType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_LobbyId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_PresenceEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_LocalRTCOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_CrossplayOptOut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal, m_RTCRoomJoinActionType) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::JoinLobbyByIdOptionsInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
