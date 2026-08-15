#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OnUserLoginStatusChangedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUserLoginStatusChangedCallbackInternalImplementation)
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserLoginStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserLoginStatusChangedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserLoginStatusChangedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternalImplementation*, "Epic.OnlineServices.IntegratedPlatform", "OnUserLoginStatusChangedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: false
// CS Name: Epic.OnlineServices.IntegratedPlatform.OnUserLoginStatusChangedCallbackInternalImplementation
class CORDL_TYPE OnUserLoginStatusChangedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051ca40, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051cab0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUserLoginStatusChangedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUserLoginStatusChangedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUserLoginStatusChangedCallbackInternalImplementation(OnUserLoginStatusChangedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUserLoginStatusChangedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUserLoginStatusChangedCallbackInternalImplementation(OnUserLoginStatusChangedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8813};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::OnUserLoginStatusChangedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
