#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUnregisterPlatformUserCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUnregisterPlatformUserCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct OnUnregisterPlatformUserCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnUnregisterPlatformUserCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnUnregisterPlatformUserCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnUnregisterPlatformUserCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnUnregisterPlatformUserCallbackInternalImplementation
class CORDL_TYPE OnUnregisterPlatformUserCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ebf80, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ebfe0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUnregisterPlatformUserCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUnregisterPlatformUserCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUnregisterPlatformUserCallbackInternalImplementation(OnUnregisterPlatformUserCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUnregisterPlatformUserCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUnregisterPlatformUserCallbackInternalImplementation(OnUnregisterPlatformUserCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
