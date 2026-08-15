#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnRejectInviteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRejectInviteCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
class OnRejectInviteCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct RejectInviteCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnRejectInviteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnRejectInviteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnRejectInviteCallbackInternalImplementation
class CORDL_TYPE OnRejectInviteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805102b0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::RejectInviteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180510310, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRejectInviteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRejectInviteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRejectInviteCallbackInternalImplementation(OnRejectInviteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRejectInviteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRejectInviteCallbackInternalImplementation(OnRejectInviteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnRejectInviteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
