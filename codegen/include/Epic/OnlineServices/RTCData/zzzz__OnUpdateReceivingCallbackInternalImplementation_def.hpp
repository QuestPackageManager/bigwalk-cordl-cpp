#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnUpdateReceivingCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUpdateReceivingCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCData {
class OnUpdateReceivingCallbackInternal;
}
namespace Epic::OnlineServices::RTCData {
struct UpdateReceivingCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCData {
class OnUpdateReceivingCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*, "Epic.OnlineServices.RTCData", "OnUpdateReceivingCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCData {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCData.OnUpdateReceivingCallbackInternalImplementation
class CORDL_TYPE OnUpdateReceivingCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ec6c0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ec730, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUpdateReceivingCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateReceivingCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUpdateReceivingCallbackInternalImplementation(OnUpdateReceivingCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateReceivingCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUpdateReceivingCallbackInternalImplementation(OnUpdateReceivingCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7917};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
