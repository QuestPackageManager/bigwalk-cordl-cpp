#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/SendLobbyNativeInviteRequestedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendLobbyNativeInviteRequestedCallbackInfoInternal)
namespace Epic::OnlineServices::Lobby {
struct SendLobbyNativeInviteRequestedCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct SendLobbyNativeInviteRequestedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, "Epic.OnlineServices.Lobby", "SendLobbyNativeInviteRequestedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.SendLobbyNativeInviteRequestedCallbackInfoInternal
struct CORDL_TYPE SendLobbyNativeInviteRequestedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804f1d80, size 0x140, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__SendLobbyNativeInviteRequestedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SendLobbyNativeInviteRequestedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetNativeAccountType", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserNativeAccountId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LobbyId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr SendLobbyNativeInviteRequestedCallbackInfoInternal(::System::IntPtr  m_ClientData, uint64_t  m_UiEventId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetNativeAccountType, ::System::IntPtr  m_TargetUserNativeAccountId, ::System::IntPtr  m_LobbyId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_UiEventId, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_UiEventId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetNativeAccountType, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetNativeAccountType;

/// @brief Field m_TargetUserNativeAccountId, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserNativeAccountId;

/// @brief Field m_LobbyId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_LobbyId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, m_UiEventId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, m_TargetNativeAccountType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, m_TargetUserNativeAccountId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal, m_LobbyId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
