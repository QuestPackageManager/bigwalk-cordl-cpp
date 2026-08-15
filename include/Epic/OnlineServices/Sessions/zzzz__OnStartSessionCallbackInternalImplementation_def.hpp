#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnStartSessionCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnStartSessionCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnStartSessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct StartSessionCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnStartSessionCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnStartSessionCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnStartSessionCallbackInternalImplementation
class CORDL_TYPE OnStartSessionCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ebd10, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::StartSessionCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ebd70, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnStartSessionCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnStartSessionCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnStartSessionCallbackInternalImplementation(OnStartSessionCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnStartSessionCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnStartSessionCallbackInternalImplementation(OnStartSessionCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
