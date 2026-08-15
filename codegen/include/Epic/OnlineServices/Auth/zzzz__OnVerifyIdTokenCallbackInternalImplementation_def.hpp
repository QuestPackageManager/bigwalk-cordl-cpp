#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnVerifyIdTokenCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnVerifyIdTokenCallbackInternalImplementation)
namespace Epic::OnlineServices::Auth {
class OnVerifyIdTokenCallbackInternal;
}
namespace Epic::OnlineServices::Auth {
struct VerifyIdTokenCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Auth {
class OnVerifyIdTokenCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*, "Epic.OnlineServices.Auth", "OnVerifyIdTokenCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Auth {
// Is value type: false
// CS Name: Epic.OnlineServices.Auth.OnVerifyIdTokenCallbackInternalImplementation
class CORDL_TYPE OnVerifyIdTokenCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052aaa0, size 0x80, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052aba0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnVerifyIdTokenCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnVerifyIdTokenCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnVerifyIdTokenCallbackInternalImplementation(OnVerifyIdTokenCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnVerifyIdTokenCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnVerifyIdTokenCallbackInternalImplementation(OnVerifyIdTokenCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
