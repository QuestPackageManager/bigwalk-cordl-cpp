#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnUpdateLobbyCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUpdateLobbyCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
class OnUpdateLobbyCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnUpdateLobbyCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnUpdateLobbyCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnUpdateLobbyCallbackInternalImplementation
class CORDL_TYPE OnUpdateLobbyCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180510bd0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180510c30, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUpdateLobbyCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateLobbyCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUpdateLobbyCallbackInternalImplementation(OnUpdateLobbyCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateLobbyCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUpdateLobbyCallbackInternalImplementation(OnUpdateLobbyCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
