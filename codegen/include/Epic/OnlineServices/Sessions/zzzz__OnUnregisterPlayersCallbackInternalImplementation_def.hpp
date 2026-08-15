#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnUnregisterPlayersCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnUnregisterPlayersCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnUnregisterPlayersCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct UnregisterPlayersCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnUnregisterPlayersCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnUnregisterPlayersCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnUnregisterPlayersCallbackInternalImplementation
class CORDL_TYPE OnUnregisterPlayersCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ec1c0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::UnregisterPlayersCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ec220, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnUnregisterPlayersCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnUnregisterPlayersCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnUnregisterPlayersCallbackInternalImplementation(OnUnregisterPlayersCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnUnregisterPlayersCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnUnregisterPlayersCallbackInternalImplementation(OnUnregisterPlayersCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
