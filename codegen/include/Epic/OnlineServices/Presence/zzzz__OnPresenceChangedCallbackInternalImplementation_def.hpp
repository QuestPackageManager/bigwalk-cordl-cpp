#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/OnPresenceChangedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnPresenceChangedCallbackInternalImplementation)
namespace Epic::OnlineServices::Presence {
class OnPresenceChangedCallbackInternal;
}
namespace Epic::OnlineServices::Presence {
struct PresenceChangedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
class OnPresenceChangedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternalImplementation*, "Epic.OnlineServices.Presence", "OnPresenceChangedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Presence {
// Is value type: false
// CS Name: Epic.OnlineServices.Presence.OnPresenceChangedCallbackInternalImplementation
class CORDL_TYPE OnPresenceChangedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f9e90, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Presence::PresenceChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f9ef0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPresenceChangedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPresenceChangedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPresenceChangedCallbackInternalImplementation(OnPresenceChangedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPresenceChangedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPresenceChangedCallbackInternalImplementation(OnPresenceChangedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Presence::OnPresenceChangedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
