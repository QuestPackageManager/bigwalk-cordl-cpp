#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryEntitlementsCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryEntitlementsCallbackInternalImplementation)
namespace Epic::OnlineServices::Ecom {
class OnQueryEntitlementsCallbackInternal;
}
namespace Epic::OnlineServices::Ecom {
struct QueryEntitlementsCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
class OnQueryEntitlementsCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*, "Epic.OnlineServices.Ecom", "OnQueryEntitlementsCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Ecom {
// Is value type: false
// CS Name: Epic.OnlineServices.Ecom.OnQueryEntitlementsCallbackInternalImplementation
class CORDL_TYPE OnQueryEntitlementsCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051a680, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051a6e0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryEntitlementsCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryEntitlementsCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryEntitlementsCallbackInternalImplementation(OnQueryEntitlementsCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryEntitlementsCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryEntitlementsCallbackInternalImplementation(OnQueryEntitlementsCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
