#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnJoinSessionCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnJoinSessionCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
struct JoinSessionCallbackInfoInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnJoinSessionCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnJoinSessionCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnJoinSessionCallbackInternalImplementation
class CORDL_TYPE OnJoinSessionCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e9110, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e9170, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinSessionCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinSessionCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinSessionCallbackInternalImplementation(OnJoinSessionCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinSessionCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinSessionCallbackInternalImplementation(OnJoinSessionCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7737};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnJoinSessionCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
