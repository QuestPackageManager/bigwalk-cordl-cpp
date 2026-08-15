#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioDevicesChangedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAudioDevicesChangedCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct AudioDevicesChangedCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioDevicesChangedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnAudioDevicesChangedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnAudioDevicesChangedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnAudioDevicesChangedCallbackInternalImplementation
class CORDL_TYPE OnAudioDevicesChangedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e8140, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e81a0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAudioDevicesChangedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAudioDevicesChangedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAudioDevicesChangedCallbackInternalImplementation(OnAudioDevicesChangedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAudioDevicesChangedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAudioDevicesChangedCallbackInternalImplementation(OnAudioDevicesChangedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
