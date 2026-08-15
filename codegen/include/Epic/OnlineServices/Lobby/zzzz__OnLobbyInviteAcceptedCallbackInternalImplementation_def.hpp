#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyInviteAcceptedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLobbyInviteAcceptedCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LobbyInviteAcceptedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteAcceptedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteAcceptedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnLobbyInviteAcceptedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnLobbyInviteAcceptedCallbackInternalImplementation
class CORDL_TYPE OnLobbyInviteAcceptedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050ed90, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050ee00, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLobbyInviteAcceptedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyInviteAcceptedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLobbyInviteAcceptedCallbackInternalImplementation(OnLobbyInviteAcceptedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyInviteAcceptedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLobbyInviteAcceptedCallbackInternalImplementation(OnLobbyInviteAcceptedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8631};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
