#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowReportPlayerCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnShowReportPlayerCallbackInternalImplementation)
namespace Epic::OnlineServices::UI {
struct OnShowReportPlayerCallbackInfoInternal;
}
namespace Epic::OnlineServices::UI {
class OnShowReportPlayerCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
class OnShowReportPlayerCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*, "Epic.OnlineServices.UI", "OnShowReportPlayerCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UI {
// Is value type: false
// CS Name: Epic.OnlineServices.UI.OnShowReportPlayerCallbackInternalImplementation
class CORDL_TYPE OnShowReportPlayerCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804df5d0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804df630, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnShowReportPlayerCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnShowReportPlayerCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnShowReportPlayerCallbackInternalImplementation(OnShowReportPlayerCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnShowReportPlayerCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnShowReportPlayerCallbackInternalImplementation(OnShowReportPlayerCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7561};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
