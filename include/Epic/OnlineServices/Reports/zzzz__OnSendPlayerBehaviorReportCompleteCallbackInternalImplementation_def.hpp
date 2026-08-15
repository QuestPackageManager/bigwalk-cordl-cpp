#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::Reports {
class OnSendPlayerBehaviorReportCompleteCallbackInternal;
}
namespace Epic::OnlineServices::Reports {
struct SendPlayerBehaviorReportCompleteCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Reports {
class OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*, "Epic.OnlineServices.Reports", "OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Reports {
// Is value type: false
// CS Name: Epic.OnlineServices.Reports.OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation
class CORDL_TYPE OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804eacc0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ead20, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation(OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation(OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7896};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Reports
