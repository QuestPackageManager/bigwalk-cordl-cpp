#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendCustomNativeInviteRequestedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSendCustomNativeInviteRequestedCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
class OnSendCustomNativeInviteRequestedCallbackInternal;
}
namespace Epic::OnlineServices::CustomInvites {
struct SendCustomNativeInviteRequestedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnSendCustomNativeInviteRequestedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnSendCustomNativeInviteRequestedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnSendCustomNativeInviteRequestedCallbackInternalImplementation
class CORDL_TYPE OnSendCustomNativeInviteRequestedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052a190, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052a200, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSendCustomNativeInviteRequestedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSendCustomNativeInviteRequestedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSendCustomNativeInviteRequestedCallbackInternalImplementation(OnSendCustomNativeInviteRequestedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSendCustomNativeInviteRequestedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSendCustomNativeInviteRequestedCallbackInternalImplementation(OnSendCustomNativeInviteRequestedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9082};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
