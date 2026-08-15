#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnJoinSessionAcceptedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnJoinSessionAcceptedCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
struct JoinSessionAcceptedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionAcceptedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionAcceptedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnJoinSessionAcceptedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnJoinSessionAcceptedCallbackInternalImplementation
class CORDL_TYPE OnJoinSessionAcceptedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e8ed0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e8f30, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinSessionAcceptedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinSessionAcceptedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinSessionAcceptedCallbackInternalImplementation(OnJoinSessionAcceptedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinSessionAcceptedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinSessionAcceptedCallbackInternalImplementation(OnJoinSessionAcceptedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
