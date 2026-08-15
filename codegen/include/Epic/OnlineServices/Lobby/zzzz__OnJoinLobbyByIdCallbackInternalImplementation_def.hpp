#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinLobbyByIdCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnJoinLobbyByIdCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyByIdCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyByIdCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnJoinLobbyByIdCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnJoinLobbyByIdCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnJoinLobbyByIdCallbackInternalImplementation
class CORDL_TYPE OnJoinLobbyByIdCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050ddd0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050de30, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinLobbyByIdCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinLobbyByIdCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinLobbyByIdCallbackInternalImplementation(OnJoinLobbyByIdCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinLobbyByIdCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinLobbyByIdCallbackInternalImplementation(OnJoinLobbyByIdCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8610};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
