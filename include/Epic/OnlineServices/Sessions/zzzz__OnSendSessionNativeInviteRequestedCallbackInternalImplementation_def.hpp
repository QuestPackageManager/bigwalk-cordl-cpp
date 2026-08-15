#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSendSessionNativeInviteRequestedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSendSessionNativeInviteRequestedCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnSendSessionNativeInviteRequestedCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct SendSessionNativeInviteRequestedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnSendSessionNativeInviteRequestedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnSendSessionNativeInviteRequestedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnSendSessionNativeInviteRequestedCallbackInternalImplementation
class CORDL_TYPE OnSendSessionNativeInviteRequestedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804eaf00, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804eaf70, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSendSessionNativeInviteRequestedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSendSessionNativeInviteRequestedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSendSessionNativeInviteRequestedCallbackInternalImplementation(OnSendSessionNativeInviteRequestedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSendSessionNativeInviteRequestedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSendSessionNativeInviteRequestedCallbackInternalImplementation(OnSendSessionNativeInviteRequestedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
