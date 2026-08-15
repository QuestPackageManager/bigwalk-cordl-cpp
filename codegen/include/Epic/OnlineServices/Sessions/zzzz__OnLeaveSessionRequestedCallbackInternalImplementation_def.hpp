#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnLeaveSessionRequestedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLeaveSessionRequestedCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
struct LeaveSessionRequestedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnLeaveSessionRequestedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnLeaveSessionRequestedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnLeaveSessionRequestedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnLeaveSessionRequestedCallbackInternalImplementation
class CORDL_TYPE OnLeaveSessionRequestedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e9350, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::LeaveSessionRequestedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e93b0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLeaveSessionRequestedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveSessionRequestedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLeaveSessionRequestedCallbackInternalImplementation(OnLeaveSessionRequestedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveSessionRequestedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLeaveSessionRequestedCallbackInternalImplementation(OnLeaveSessionRequestedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7740};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
