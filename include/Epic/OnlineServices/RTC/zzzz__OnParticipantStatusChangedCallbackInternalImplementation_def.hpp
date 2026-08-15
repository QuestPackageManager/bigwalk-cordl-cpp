#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnParticipantStatusChangedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnParticipantStatusChangedCallbackInternalImplementation)
namespace Epic::OnlineServices::RTC {
class OnParticipantStatusChangedCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
struct ParticipantStatusChangedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnParticipantStatusChangedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*, "Epic.OnlineServices.RTC", "OnParticipantStatusChangedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnParticipantStatusChangedCallbackInternalImplementation
class CORDL_TYPE OnParticipantStatusChangedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f9c40, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f9cb0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnParticipantStatusChangedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnParticipantStatusChangedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnParticipantStatusChangedCallbackInternalImplementation(OnParticipantStatusChangedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnParticipantStatusChangedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnParticipantStatusChangedCallbackInternalImplementation(OnParticipantStatusChangedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
