#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinResponseReceivedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRequestToJoinResponseReceivedCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinResponseReceivedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct RequestToJoinResponseReceivedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinResponseReceivedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnRequestToJoinResponseReceivedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnRequestToJoinResponseReceivedCallbackInternalImplementation
class CORDL_TYPE OnRequestToJoinResponseReceivedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180529d10, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180529d70, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRequestToJoinResponseReceivedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRequestToJoinResponseReceivedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRequestToJoinResponseReceivedCallbackInternalImplementation(OnRequestToJoinResponseReceivedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRequestToJoinResponseReceivedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRequestToJoinResponseReceivedCallbackInternalImplementation(OnRequestToJoinResponseReceivedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9076};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
