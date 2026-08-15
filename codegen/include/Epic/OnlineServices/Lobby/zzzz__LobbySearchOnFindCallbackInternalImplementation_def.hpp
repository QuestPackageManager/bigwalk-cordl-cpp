#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchOnFindCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LobbySearchOnFindCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LobbySearchFindCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class LobbySearchOnFindCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class LobbySearchOnFindCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "LobbySearchOnFindCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.LobbySearchOnFindCallbackInternalImplementation
class CORDL_TYPE LobbySearchOnFindCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050b360, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050b3c0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbySearchOnFindCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbySearchOnFindCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbySearchOnFindCallbackInternalImplementation(LobbySearchOnFindCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbySearchOnFindCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbySearchOnFindCallbackInternalImplementation(LobbySearchOnFindCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8581};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
