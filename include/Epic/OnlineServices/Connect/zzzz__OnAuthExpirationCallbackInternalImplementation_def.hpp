#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnAuthExpirationCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAuthExpirationCallbackInternalImplementation)
namespace Epic::OnlineServices::Connect {
struct AuthExpirationCallbackInfoInternal;
}
namespace Epic::OnlineServices::Connect {
class OnAuthExpirationCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
class OnAuthExpirationCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*, "Epic.OnlineServices.Connect", "OnAuthExpirationCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Connect {
// Is value type: false
// CS Name: Epic.OnlineServices.Connect.OnAuthExpirationCallbackInternalImplementation
class CORDL_TYPE OnAuthExpirationCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180526890, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805268f0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAuthExpirationCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAuthExpirationCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAuthExpirationCallbackInternalImplementation(OnAuthExpirationCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAuthExpirationCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAuthExpirationCallbackInternalImplementation(OnAuthExpirationCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
