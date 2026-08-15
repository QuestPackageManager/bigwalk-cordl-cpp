#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnSetInputDeviceSettingsCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSetInputDeviceSettingsCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct OnSetInputDeviceSettingsCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnSetInputDeviceSettingsCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnSetInputDeviceSettingsCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnSetInputDeviceSettingsCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnSetInputDeviceSettingsCallbackInternalImplementation
class CORDL_TYPE OnSetInputDeviceSettingsCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804eb860, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804eb8c0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSetInputDeviceSettingsCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSetInputDeviceSettingsCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSetInputDeviceSettingsCallbackInternalImplementation(OnSetInputDeviceSettingsCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSetInputDeviceSettingsCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSetInputDeviceSettingsCallbackInternalImplementation(OnSetInputDeviceSettingsCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8016};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
