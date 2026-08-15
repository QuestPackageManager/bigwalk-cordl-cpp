#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchOnFindCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SessionSearchOnFindCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
struct SessionSearchFindCallbackInfoInternal;
}
namespace Epic::OnlineServices::Sessions {
class SessionSearchOnFindCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class SessionSearchOnFindCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "SessionSearchOnFindCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.SessionSearchOnFindCallbackInternalImplementation
class CORDL_TYPE SessionSearchOnFindCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f2f10, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SessionSearchFindCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f2f70, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SessionSearchOnFindCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SessionSearchOnFindCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SessionSearchOnFindCallbackInternalImplementation(SessionSearchOnFindCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SessionSearchOnFindCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SessionSearchOnFindCallbackInternalImplementation(SessionSearchOnFindCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionSearchOnFindCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
