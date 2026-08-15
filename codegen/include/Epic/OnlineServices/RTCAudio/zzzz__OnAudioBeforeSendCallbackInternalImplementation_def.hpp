#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioBeforeSendCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAudioBeforeSendCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAudio {
struct AudioBeforeSendCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAudio {
class OnAudioBeforeSendCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
class OnAudioBeforeSendCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*, "Epic.OnlineServices.RTCAudio", "OnAudioBeforeSendCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAudio {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAudio.OnAudioBeforeSendCallbackInternalImplementation
class CORDL_TYPE OnAudioBeforeSendCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e7ef0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e7f60, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAudioBeforeSendCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAudioBeforeSendCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAudioBeforeSendCallbackInternalImplementation(OnAudioBeforeSendCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAudioBeforeSendCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAudioBeforeSendCallbackInternalImplementation(OnAudioBeforeSendCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7986};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
