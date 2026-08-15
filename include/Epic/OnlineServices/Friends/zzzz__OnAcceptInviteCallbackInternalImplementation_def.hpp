#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnAcceptInviteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAcceptInviteCallbackInternalImplementation)
namespace Epic::OnlineServices::Friends {
struct AcceptInviteCallbackInfoInternal;
}
namespace Epic::OnlineServices::Friends {
class OnAcceptInviteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
class OnAcceptInviteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*, "Epic.OnlineServices.Friends", "OnAcceptInviteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Friends {
// Is value type: false
// CS Name: Epic.OnlineServices.Friends.OnAcceptInviteCallbackInternalImplementation
class CORDL_TYPE OnAcceptInviteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805188e0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180518940, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAcceptInviteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAcceptInviteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAcceptInviteCallbackInternalImplementation(OnAcceptInviteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAcceptInviteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAcceptInviteCallbackInternalImplementation(OnAcceptInviteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8855};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
