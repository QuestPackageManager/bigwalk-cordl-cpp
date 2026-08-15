#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnQueryOutputDevicesInformationCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryOutputDevicesInformationCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct OnQueryOutputDevicesInformationCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnQueryOutputDevicesInformationCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnQueryOutputDevicesInformationCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnQueryOutputDevicesInformationCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnQueryOutputDevicesInformationCallbackInternalImplementation
class CORDL_TYPE OnQueryOutputDevicesInformationCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ea150, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ea1b0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryOutputDevicesInformationCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryOutputDevicesInformationCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryOutputDevicesInformationCallbackInternalImplementation(OnQueryOutputDevicesInformationCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryOutputDevicesInformationCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryOutputDevicesInformationCallbackInternalImplementation(OnQueryOutputDevicesInformationCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
