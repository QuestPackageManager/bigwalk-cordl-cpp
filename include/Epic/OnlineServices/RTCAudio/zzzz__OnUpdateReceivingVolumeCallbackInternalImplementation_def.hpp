#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUpdateReceivingVolumeCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUpdateReceivingVolumeCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateReceivingVolumeCallbackInternal;
}
namespace Epic::OnlineServices::RTCAudio {
struct UpdateReceivingVolumeCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnUpdateReceivingVolumeCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnUpdateReceivingVolumeCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnUpdateReceivingVolumeCallbackInternalImplementation
class CORDL_TYPE OnUpdateReceivingVolumeCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ecaf0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ecb60, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUpdateReceivingVolumeCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateReceivingVolumeCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUpdateReceivingVolumeCallbackInternalImplementation(OnUpdateReceivingVolumeCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateReceivingVolumeCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUpdateReceivingVolumeCallbackInternalImplementation(OnUpdateReceivingVolumeCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
