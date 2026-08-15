#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnQueryInvitesCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryInvitesCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
class OnQueryInvitesCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct QueryInvitesCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnQueryInvitesCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnQueryInvitesCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnQueryInvitesCallbackInternalImplementation
class CORDL_TYPE OnQueryInvitesCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050fd70, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050fdd0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryInvitesCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryInvitesCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryInvitesCallbackInternalImplementation(OnQueryInvitesCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryInvitesCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryInvitesCallbackInternalImplementation(OnQueryInvitesCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
