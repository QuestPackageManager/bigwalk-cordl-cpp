#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnLogoutCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLogoutCallbackInternalImplementation)
namespace Epic::OnlineServices::Auth {
struct LogoutCallbackInfoInternal;
}
namespace Epic::OnlineServices::Auth {
class OnLogoutCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
class OnLogoutCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*, "Epic.OnlineServices.Auth", "OnLogoutCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Auth {
// Is value type: false
// CS Name: Epic.OnlineServices.Auth.OnLogoutCallbackInternalImplementation
class CORDL_TYPE OnLogoutCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180528840, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Auth::OnLogoutCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180528900, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Auth::OnLogoutCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLogoutCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLogoutCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLogoutCallbackInternalImplementation(OnLogoutCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLogoutCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLogoutCallbackInternalImplementation(OnLogoutCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
