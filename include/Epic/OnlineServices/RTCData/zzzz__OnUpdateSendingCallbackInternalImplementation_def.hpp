#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnUpdateSendingCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUpdateSendingCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCData {
class OnUpdateSendingCallbackInternal;
}
namespace Epic::OnlineServices::RTCData {
struct UpdateSendingCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCData {
class OnUpdateSendingCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*, "Epic.OnlineServices.RTCData", "OnUpdateSendingCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCData {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCData.OnUpdateSendingCallbackInternalImplementation
class CORDL_TYPE OnUpdateSendingCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ecdb0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ecf40, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUpdateSendingCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateSendingCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUpdateSendingCallbackInternalImplementation(OnUpdateSendingCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateSendingCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUpdateSendingCallbackInternalImplementation(OnUpdateSendingCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7920};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
