#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OnUserPreLogoutCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUserPreLogoutCallbackInternalImplementation)
namespace Epic::OnlineServices::IntegratedPlatform {
struct IntegratedPlatformPreLogoutAction;
}
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserPreLogoutCallbackInternal;
}
namespace Epic::OnlineServices::IntegratedPlatform {
struct UserPreLogoutCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::IntegratedPlatform {
class OnUserPreLogoutCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*, "Epic.OnlineServices.IntegratedPlatform", "OnUserPreLogoutCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::IntegratedPlatform {
// Is value type: false
// CS Name: Epic.OnlineServices.IntegratedPlatform.OnUserPreLogoutCallbackInternalImplementation
class CORDL_TYPE OnUserPreLogoutCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051cc90, size 0x70, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction EntryPoint(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051cd00, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUserPreLogoutCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUserPreLogoutCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUserPreLogoutCallbackInternalImplementation(OnUserPreLogoutCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUserPreLogoutCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUserPreLogoutCallbackInternalImplementation(OnUserPreLogoutCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8816};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::IntegratedPlatform
