#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnSetParticipantHardMuteCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSetParticipantHardMuteCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAdmin {
class OnSetParticipantHardMuteCompleteCallbackInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct SetParticipantHardMuteCompleteCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
class OnSetParticipantHardMuteCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*, "Epic.OnlineServices.RTCAdmin", "OnSetParticipantHardMuteCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAdmin.OnSetParticipantHardMuteCompleteCallbackInternalImplementation
class CORDL_TYPE OnSetParticipantHardMuteCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fb2f0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fb350, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSetParticipantHardMuteCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSetParticipantHardMuteCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSetParticipantHardMuteCompleteCallbackInternalImplementation(OnSetParticipantHardMuteCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSetParticipantHardMuteCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSetParticipantHardMuteCompleteCallbackInternalImplementation(OnSetParticipantHardMuteCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8110};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
