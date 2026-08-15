#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinLobbyCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnJoinLobbyCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnJoinLobbyCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnJoinLobbyCallbackInternalImplementation
class CORDL_TYPE OnJoinLobbyCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050e010, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050e070, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinLobbyCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinLobbyCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinLobbyCallbackInternalImplementation(OnJoinLobbyCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinLobbyCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinLobbyCallbackInternalImplementation(OnJoinLobbyCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8613};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
