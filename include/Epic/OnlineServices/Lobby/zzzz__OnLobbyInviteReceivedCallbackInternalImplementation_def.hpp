#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyInviteReceivedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLobbyInviteReceivedCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LobbyInviteReceivedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteReceivedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteReceivedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnLobbyInviteReceivedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnLobbyInviteReceivedCallbackInternalImplementation
class CORDL_TYPE OnLobbyInviteReceivedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050efe0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteReceivedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050f040, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLobbyInviteReceivedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyInviteReceivedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLobbyInviteReceivedCallbackInternalImplementation(OnLobbyInviteReceivedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyInviteReceivedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLobbyInviteReceivedCallbackInternalImplementation(OnLobbyInviteReceivedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
