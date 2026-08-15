#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteReceivedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnCustomInviteReceivedCallbackInternalImplementation)
namespace Epic::OnlineServices::CustomInvites {
struct OnCustomInviteReceivedCallbackInfoInternal;
}
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteReceivedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
class OnCustomInviteReceivedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*, "Epic.OnlineServices.CustomInvites", "OnCustomInviteReceivedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::CustomInvites {
// Is value type: false
// CS Name: Epic.OnlineServices.CustomInvites.OnCustomInviteReceivedCallbackInternalImplementation
class CORDL_TYPE OnCustomInviteReceivedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805197e0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180519850, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCustomInviteReceivedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCustomInviteReceivedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCustomInviteReceivedCallbackInternalImplementation(OnCustomInviteReceivedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCustomInviteReceivedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCustomInviteReceivedCallbackInternalImplementation(OnCustomInviteReceivedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
