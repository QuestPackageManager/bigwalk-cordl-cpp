#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnKickCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnKickCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAdmin {
struct KickCompleteCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
class OnKickCompleteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
class OnKickCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation*, "Epic.OnlineServices.RTCAdmin", "OnKickCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAdmin.OnKickCompleteCallbackInternalImplementation
class CORDL_TYPE OnKickCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f97c0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAdmin::KickCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f9820, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnKickCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnKickCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnKickCompleteCallbackInternalImplementation(OnKickCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnKickCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnKickCompleteCallbackInternalImplementation(OnKickCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::OnKickCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
