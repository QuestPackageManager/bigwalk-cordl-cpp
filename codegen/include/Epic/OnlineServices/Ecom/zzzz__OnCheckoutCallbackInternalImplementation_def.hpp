#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnCheckoutCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnCheckoutCallbackInternalImplementation)
namespace Epic::OnlineServices::Ecom {
struct CheckoutCallbackInfoInternal;
}
namespace Epic::OnlineServices::Ecom {
class OnCheckoutCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Ecom {
class OnCheckoutCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*, "Epic.OnlineServices.Ecom", "OnCheckoutCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Ecom {
// Is value type: false
// CS Name: Epic.OnlineServices.Ecom.OnCheckoutCallbackInternalImplementation
class CORDL_TYPE OnCheckoutCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805190a0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180519100, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnCheckoutCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnCheckoutCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnCheckoutCallbackInternalImplementation(OnCheckoutCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnCheckoutCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnCheckoutCallbackInternalImplementation(OnCheckoutCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
