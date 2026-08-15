#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSessionInviteAcceptedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSessionInviteAcceptedCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteAcceptedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SessionInviteAcceptedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnSessionInviteAcceptedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnSessionInviteAcceptedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnSessionInviteAcceptedCallbackInternalImplementation
class CORDL_TYPE OnSessionInviteAcceptedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804eb150, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804eb1c0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSessionInviteAcceptedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSessionInviteAcceptedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSessionInviteAcceptedCallbackInternalImplementation(OnSessionInviteAcceptedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSessionInviteAcceptedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSessionInviteAcceptedCallbackInternalImplementation(OnSessionInviteAcceptedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7758};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
