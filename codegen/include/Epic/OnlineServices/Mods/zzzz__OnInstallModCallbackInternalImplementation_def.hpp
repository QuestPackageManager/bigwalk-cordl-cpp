#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/OnInstallModCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnInstallModCallbackInternalImplementation)
namespace Epic::OnlineServices::Mods {
struct InstallModCallbackInfoInternal;
}
namespace Epic::OnlineServices::Mods {
class OnInstallModCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Mods {
class OnInstallModCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation*, "Epic.OnlineServices.Mods", "OnInstallModCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Mods {
// Is value type: false
// CS Name: Epic.OnlineServices.Mods.OnInstallModCallbackInternalImplementation
class CORDL_TYPE OnInstallModCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050d940, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Mods::InstallModCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Mods::OnInstallModCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050d9b0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Mods::OnInstallModCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Mods::OnInstallModCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnInstallModCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnInstallModCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnInstallModCallbackInternalImplementation(OnInstallModCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnInstallModCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnInstallModCallbackInternalImplementation(OnInstallModCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Mods::OnInstallModCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Mods
