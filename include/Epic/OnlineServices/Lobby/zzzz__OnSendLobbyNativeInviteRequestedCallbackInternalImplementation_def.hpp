#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnSendLobbyNativeInviteRequestedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSendLobbyNativeInviteRequestedCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
class OnSendLobbyNativeInviteRequestedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct SendLobbyNativeInviteRequestedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnSendLobbyNativeInviteRequestedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnSendLobbyNativeInviteRequestedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnSendLobbyNativeInviteRequestedCallbackInternalImplementation
class CORDL_TYPE OnSendLobbyNativeInviteRequestedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180510730, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805107a0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSendLobbyNativeInviteRequestedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSendLobbyNativeInviteRequestedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSendLobbyNativeInviteRequestedCallbackInternalImplementation(OnSendLobbyNativeInviteRequestedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSendLobbyNativeInviteRequestedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSendLobbyNativeInviteRequestedCallbackInternalImplementation(OnSendLobbyNativeInviteRequestedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
