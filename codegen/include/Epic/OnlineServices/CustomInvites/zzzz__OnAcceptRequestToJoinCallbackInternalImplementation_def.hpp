#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnAcceptRequestToJoinCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAcceptRequestToJoinCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
struct AcceptRequestToJoinCallbackInfoInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnAcceptRequestToJoinCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnAcceptRequestToJoinCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnAcceptRequestToJoinCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnAcceptRequestToJoinCallbackInternalImplementation
class CORDL_TYPE OnAcceptRequestToJoinCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180518b20, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180518b80, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAcceptRequestToJoinCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAcceptRequestToJoinCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAcceptRequestToJoinCallbackInternalImplementation(OnAcceptRequestToJoinCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAcceptRequestToJoinCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAcceptRequestToJoinCallbackInternalImplementation(OnAcceptRequestToJoinCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9044};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
