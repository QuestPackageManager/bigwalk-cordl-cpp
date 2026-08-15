#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyUpdateReceivedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLobbyUpdateReceivedCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LobbyUpdateReceivedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLobbyUpdateReceivedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnLobbyUpdateReceivedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnLobbyUpdateReceivedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnLobbyUpdateReceivedCallbackInternalImplementation
class CORDL_TYPE OnLobbyUpdateReceivedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050f8f0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050f950, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLobbyUpdateReceivedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyUpdateReceivedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLobbyUpdateReceivedCallbackInternalImplementation(OnLobbyUpdateReceivedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLobbyUpdateReceivedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLobbyUpdateReceivedCallbackInternalImplementation(OnLobbyUpdateReceivedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8646};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
