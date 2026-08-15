#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioInputStateCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAudioInputStateCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct AudioInputStateCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioInputStateCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnAudioInputStateCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnAudioInputStateCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnAudioInputStateCallbackInternalImplementation
class CORDL_TYPE OnAudioInputStateCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e8380, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioInputStateCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e83e0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAudioInputStateCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAudioInputStateCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAudioInputStateCallbackInternalImplementation(OnAudioInputStateCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAudioInputStateCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAudioInputStateCallbackInternalImplementation(OnAudioInputStateCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnAudioInputStateCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
