#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyInviteRejectedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLobbyInviteRejectedCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LobbyInviteRejectedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteRejectedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnLobbyInviteRejectedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnLobbyInviteRejectedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnLobbyInviteRejectedCallbackInternalImplementation
class CORDL_TYPE OnLobbyInviteRejectedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050f220, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteRejectedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050f290, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLobbyInviteRejectedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyInviteRejectedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLobbyInviteRejectedCallbackInternalImplementation(OnLobbyInviteRejectedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyInviteRejectedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLobbyInviteRejectedCallbackInternalImplementation(OnLobbyInviteRejectedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8637};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
