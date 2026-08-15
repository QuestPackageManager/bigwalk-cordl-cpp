#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteAcceptedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnCustomInviteAcceptedCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
struct OnCustomInviteAcceptedCallbackInfoInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteAcceptedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteAcceptedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnCustomInviteAcceptedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnCustomInviteAcceptedCallbackInternalImplementation
class CORDL_TYPE OnCustomInviteAcceptedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180519560, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805195d0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCustomInviteAcceptedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCustomInviteAcceptedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCustomInviteAcceptedCallbackInternalImplementation(OnCustomInviteAcceptedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCustomInviteAcceptedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCustomInviteAcceptedCallbackInternalImplementation(OnCustomInviteAcceptedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
