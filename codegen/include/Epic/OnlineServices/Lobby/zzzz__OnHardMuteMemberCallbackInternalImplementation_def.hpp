#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnHardMuteMemberCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnHardMuteMemberCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct HardMuteMemberCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnHardMuteMemberCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnHardMuteMemberCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnHardMuteMemberCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnHardMuteMemberCallbackInternalImplementation
class CORDL_TYPE OnHardMuteMemberCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050d700, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::HardMuteMemberCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050d760, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnHardMuteMemberCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnHardMuteMemberCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnHardMuteMemberCallbackInternalImplementation(OnHardMuteMemberCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnHardMuteMemberCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnHardMuteMemberCallbackInternalImplementation(OnHardMuteMemberCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnHardMuteMemberCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
