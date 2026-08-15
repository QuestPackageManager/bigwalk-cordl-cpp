#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRejectRequestToJoinCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRejectRequestToJoinCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
class OnRejectRequestToJoinCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct RejectRequestToJoinCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnRejectRequestToJoinCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnRejectRequestToJoinCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnRejectRequestToJoinCallbackInternalImplementation
class CORDL_TYPE OnRejectRequestToJoinCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051c080, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::RejectRequestToJoinCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051c0e0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRejectRequestToJoinCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRejectRequestToJoinCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRejectRequestToJoinCallbackInternalImplementation(OnRejectRequestToJoinCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRejectRequestToJoinCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRejectRequestToJoinCallbackInternalImplementation(OnRejectRequestToJoinCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9060};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnRejectRequestToJoinCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
