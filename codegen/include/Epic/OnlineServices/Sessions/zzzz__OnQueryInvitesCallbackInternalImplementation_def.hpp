#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnQueryInvitesCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryInvitesCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnQueryInvitesCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct QueryInvitesCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnQueryInvitesCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnQueryInvitesCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnQueryInvitesCallbackInternalImplementation
class CORDL_TYPE OnQueryInvitesCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e9f10, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e9f70, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
