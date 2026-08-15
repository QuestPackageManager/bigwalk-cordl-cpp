#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinRejectedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRequestToJoinRejectedCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
struct OnRequestToJoinRejectedCallbackInfoInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinRejectedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnRequestToJoinRejectedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnRequestToJoinRejectedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnRequestToJoinRejectedCallbackInternalImplementation
class CORDL_TYPE OnRequestToJoinRejectedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180529ad0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180529b30, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRequestToJoinRejectedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRequestToJoinRejectedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRequestToJoinRejectedCallbackInternalImplementation(OnRequestToJoinRejectedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRequestToJoinRejectedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRequestToJoinRejectedCallbackInternalImplementation(OnRequestToJoinRejectedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9071};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
