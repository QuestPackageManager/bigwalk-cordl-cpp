#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnLoginCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLoginCallbackInternalImplementation)
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfoInternal;
}
namespace Epic::OnlineServices::Connect {
class OnLoginCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
class OnLoginCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*, "Epic.OnlineServices.Connect", "OnLoginCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Connect {
// Is value type: false
// CS Name: Epic.OnlineServices.Connect.OnLoginCallbackInternalImplementation
class CORDL_TYPE OnLoginCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Connect::OnLoginCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180527f20, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Connect::OnLoginCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180528120, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Connect::OnLoginCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnLoginCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLoginCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLoginCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLoginCallbackInternalImplementation(OnLoginCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLoginCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLoginCallbackInternalImplementation(OnLoginCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
