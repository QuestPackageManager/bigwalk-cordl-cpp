#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnBlockParticipantCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnBlockParticipantCallbackInternalImplementation)
namespace Epic::OnlineServices::RTC {
struct BlockParticipantCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTC {
class OnBlockParticipantCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnBlockParticipantCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation*, "Epic.OnlineServices.RTC", "OnBlockParticipantCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnBlockParticipantCallbackInternalImplementation
class CORDL_TYPE OnBlockParticipantCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f8350, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTC::BlockParticipantCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f83c0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnBlockParticipantCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnBlockParticipantCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnBlockParticipantCallbackInternalImplementation(OnBlockParticipantCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnBlockParticipantCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnBlockParticipantCallbackInternalImplementation(OnBlockParticipantCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnBlockParticipantCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
