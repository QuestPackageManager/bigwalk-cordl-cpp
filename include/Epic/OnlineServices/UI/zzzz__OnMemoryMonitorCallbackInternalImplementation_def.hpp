#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnMemoryMonitorCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnMemoryMonitorCallbackInternalImplementation)
namespace Epic::OnlineServices::UI {
struct MemoryMonitorCallbackInfoInternal;
}
namespace Epic::OnlineServices::UI {
class OnMemoryMonitorCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
class OnMemoryMonitorCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation*, "Epic.OnlineServices.UI", "OnMemoryMonitorCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UI {
// Is value type: false
// CS Name: Epic.OnlineServices.UI.OnMemoryMonitorCallbackInternalImplementation
class CORDL_TYPE OnMemoryMonitorCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804dd400, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804dd460, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnMemoryMonitorCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnMemoryMonitorCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnMemoryMonitorCallbackInternalImplementation(OnMemoryMonitorCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnMemoryMonitorCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnMemoryMonitorCallbackInternalImplementation(OnMemoryMonitorCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UI::OnMemoryMonitorCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
