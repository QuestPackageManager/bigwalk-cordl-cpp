#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnKickMemberCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnKickMemberCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct KickMemberCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnKickMemberCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnKickMemberCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnKickMemberCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnKickMemberCallbackInternalImplementation
class CORDL_TYPE OnKickMemberCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050e490, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050e4f0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnKickMemberCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnKickMemberCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnKickMemberCallbackInternalImplementation(OnKickMemberCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnKickMemberCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnKickMemberCallbackInternalImplementation(OnKickMemberCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8619};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnKickMemberCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
