#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLeaveLobbyCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLeaveLobbyCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LeaveLobbyCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveLobbyCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnLeaveLobbyCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnLeaveLobbyCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnLeaveLobbyCallbackInternalImplementation
class CORDL_TYPE OnLeaveLobbyCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050e6d0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050e730, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLeaveLobbyCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveLobbyCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLeaveLobbyCallbackInternalImplementation(OnLeaveLobbyCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveLobbyCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLeaveLobbyCallbackInternalImplementation(OnLeaveLobbyCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8622};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
