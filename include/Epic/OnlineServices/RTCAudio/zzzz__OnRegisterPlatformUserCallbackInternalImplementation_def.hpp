#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnRegisterPlatformUserCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRegisterPlatformUserCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct OnRegisterPlatformUserCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnRegisterPlatformUserCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnRegisterPlatformUserCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnRegisterPlatformUserCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnRegisterPlatformUserCallbackInternalImplementation
class CORDL_TYPE OnRegisterPlatformUserCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ea3c0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ea420, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRegisterPlatformUserCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRegisterPlatformUserCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRegisterPlatformUserCallbackInternalImplementation(OnRegisterPlatformUserCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRegisterPlatformUserCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRegisterPlatformUserCallbackInternalImplementation(OnRegisterPlatformUserCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
