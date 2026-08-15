#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnLinkAccountCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLinkAccountCallbackInternalImplementation)
namespace Epic::OnlineServices::Auth {
struct LinkAccountCallbackInfoInternal;
}
namespace Epic::OnlineServices::Auth {
class OnLinkAccountCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
class OnLinkAccountCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*, "Epic.OnlineServices.Auth", "OnLinkAccountCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Auth {
// Is value type: false
// CS Name: Epic.OnlineServices.Auth.OnLinkAccountCallbackInternalImplementation
class CORDL_TYPE OnLinkAccountCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180527af0, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180527c80, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLinkAccountCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLinkAccountCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLinkAccountCallbackInternalImplementation(OnLinkAccountCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLinkAccountCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLinkAccountCallbackInternalImplementation(OnLinkAccountCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9264};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
