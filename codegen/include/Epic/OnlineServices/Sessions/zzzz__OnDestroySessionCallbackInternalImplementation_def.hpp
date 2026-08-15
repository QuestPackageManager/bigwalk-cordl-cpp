#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnDestroySessionCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnDestroySessionCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
struct DestroySessionCallbackInfoInternal;
}
namespace Epic::OnlineServices::Sessions {
class OnDestroySessionCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnDestroySessionCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnDestroySessionCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnDestroySessionCallbackInternalImplementation
class CORDL_TYPE OnDestroySessionCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804e8a50, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::DestroySessionCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804e8ab0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDestroySessionCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDestroySessionCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDestroySessionCallbackInternalImplementation(OnDestroySessionCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDestroySessionCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDestroySessionCallbackInternalImplementation(OnDestroySessionCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7728};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnDestroySessionCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
