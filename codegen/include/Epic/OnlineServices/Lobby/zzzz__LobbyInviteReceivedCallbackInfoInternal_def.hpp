#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyInviteReceivedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyInviteReceivedCallbackInfoInternal)
namespace Epic::OnlineServices::Lobby {
struct LobbyInviteReceivedCallbackInfo;
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
struct LobbyInviteReceivedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal, "Epic.OnlineServices.Lobby", "LobbyInviteReceivedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyInviteReceivedCallbackInfoInternal
struct CORDL_TYPE LobbyInviteReceivedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo>*() ;

/// @brief Method Get, addr 0x18050aa60, size 0x140, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Lobby__LobbyInviteReceivedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyInviteReceivedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LobbyInviteReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_InviteId, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_InviteId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_InviteId;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_TargetUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_TargetUserId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal, m_InviteId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal, m_TargetUserId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
