#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnUninstallModCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUninstallModCallbackInternalImplementation)
namespace Epic::OnlineServices::Mods {
class OnUninstallModCallbackInternal;
}
namespace Epic::OnlineServices::Mods {
struct UninstallModCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
class OnUninstallModCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation*, "Epic.OnlineServices.Mods", "OnUninstallModCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Mods {
// Is value type: false
// CS Name: Epic.OnlineServices.Mods.OnUninstallModCallbackInternalImplementation
class CORDL_TYPE OnUninstallModCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180510980, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Mods::UninstallModCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805109f0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Mods::OnUninstallModCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUninstallModCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUninstallModCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUninstallModCallbackInternalImplementation(OnUninstallModCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUninstallModCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUninstallModCallbackInternalImplementation(OnUninstallModCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Mods::OnUninstallModCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
