#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnLoginStatusChangedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLoginStatusChangedCallbackInternalImplementation)
namespace Epic::OnlineServices::Connect {
struct LoginStatusChangedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Connect {
class OnLoginStatusChangedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
class OnLoginStatusChangedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*, "Epic.OnlineServices.Connect", "OnLoginStatusChangedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Connect {
// Is value type: false
// CS Name: Epic.OnlineServices.Connect.OnLoginStatusChangedCallbackInternalImplementation
class CORDL_TYPE OnLoginStatusChangedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1805283c0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805285a0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLoginStatusChangedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLoginStatusChangedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLoginStatusChangedCallbackInternalImplementation(OnLoginStatusChangedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLoginStatusChangedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLoginStatusChangedCallbackInternalImplementation(OnLoginStatusChangedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
