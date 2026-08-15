#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/SetPresenceCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SetPresenceCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::Presence {
struct SetPresenceCallbackInfoInternal;
}
namespace Epic::OnlineServices::Presence {
class SetPresenceCompleteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
class SetPresenceCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation*, "Epic.OnlineServices.Presence", "SetPresenceCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Presence {
// Is value type: false
// CS Name: Epic.OnlineServices.Presence.SetPresenceCompleteCallbackInternalImplementation
class CORDL_TYPE SetPresenceCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180502a30, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Presence::SetPresenceCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180502a90, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetPresenceCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetPresenceCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetPresenceCompleteCallbackInternalImplementation(SetPresenceCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetPresenceCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetPresenceCompleteCallbackInternalImplementation(SetPresenceCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8261};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Presence::SetPresenceCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
