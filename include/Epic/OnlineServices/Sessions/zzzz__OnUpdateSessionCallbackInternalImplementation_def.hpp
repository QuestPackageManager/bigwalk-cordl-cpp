#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnUpdateSessionCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUpdateSessionCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnUpdateSessionCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnUpdateSessionCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnUpdateSessionCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnUpdateSessionCallbackInternalImplementation
class CORDL_TYPE OnUpdateSessionCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ed430, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ed490, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUpdateSessionCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateSessionCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUpdateSessionCallbackInternalImplementation(OnUpdateSessionCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUpdateSessionCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUpdateSessionCallbackInternalImplementation(OnUpdateSessionCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnUpdateSessionCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
