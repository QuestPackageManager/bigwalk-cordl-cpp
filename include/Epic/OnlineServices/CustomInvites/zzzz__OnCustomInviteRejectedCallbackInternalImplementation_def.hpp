#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteRejectedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnCustomInviteRejectedCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
struct CustomInviteRejectedCallbackInfoInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteRejectedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteRejectedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnCustomInviteRejectedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnCustomInviteRejectedCallbackInternalImplementation
class CORDL_TYPE OnCustomInviteRejectedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180519a30, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::CustomInviteRejectedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180519aa0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCustomInviteRejectedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCustomInviteRejectedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCustomInviteRejectedCallbackInternalImplementation(OnCustomInviteRejectedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCustomInviteRejectedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCustomInviteRejectedCallbackInternalImplementation(OnCustomInviteRejectedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnCustomInviteRejectedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
