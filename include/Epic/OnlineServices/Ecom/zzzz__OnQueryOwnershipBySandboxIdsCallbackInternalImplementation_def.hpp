#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOwnershipBySandboxIdsCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryOwnershipBySandboxIdsCallbackInternalImplementation)
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipBySandboxIdsCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryOwnershipBySandboxIdsCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
class OnQueryOwnershipBySandboxIdsCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*, "Epic.OnlineServices.Ecom", "OnQueryOwnershipBySandboxIdsCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Ecom {
// Is value type: false
// CS Name: Epic.OnlineServices.Ecom.OnQueryOwnershipBySandboxIdsCallbackInternalImplementation
class CORDL_TYPE OnQueryOwnershipBySandboxIdsCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051b2e0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051b340, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryOwnershipBySandboxIdsCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryOwnershipBySandboxIdsCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryOwnershipBySandboxIdsCallbackInternalImplementation(OnQueryOwnershipBySandboxIdsCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryOwnershipBySandboxIdsCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryOwnershipBySandboxIdsCallbackInternalImplementation(OnQueryOwnershipBySandboxIdsCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
