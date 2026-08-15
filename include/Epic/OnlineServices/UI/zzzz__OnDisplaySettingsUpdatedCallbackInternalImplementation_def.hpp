#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnDisplaySettingsUpdatedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnDisplaySettingsUpdatedCallbackInternalImplementation)
namespace Epic::OnlineServices::UI {
struct OnDisplaySettingsUpdatedCallbackInfoInternal;
}
namespace Epic::OnlineServices::UI {
class OnDisplaySettingsUpdatedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
class OnDisplaySettingsUpdatedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*, "Epic.OnlineServices.UI", "OnDisplaySettingsUpdatedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UI {
// Is value type: false
// CS Name: Epic.OnlineServices.UI.OnDisplaySettingsUpdatedCallbackInternalImplementation
class CORDL_TYPE OnDisplaySettingsUpdatedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804dcb00, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804dcb60, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDisplaySettingsUpdatedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDisplaySettingsUpdatedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDisplaySettingsUpdatedCallbackInternalImplementation(OnDisplaySettingsUpdatedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDisplaySettingsUpdatedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDisplaySettingsUpdatedCallbackInternalImplementation(OnDisplaySettingsUpdatedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7532};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
