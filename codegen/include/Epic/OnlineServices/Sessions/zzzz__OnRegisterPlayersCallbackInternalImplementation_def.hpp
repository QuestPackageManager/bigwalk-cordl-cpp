#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnRegisterPlayersCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRegisterPlayersCallbackInternalImplementation)
namespace Epic::OnlineServices::Sessions {
class OnRegisterPlayersCallbackInternal;
}
namespace Epic::OnlineServices::Sessions {
struct RegisterPlayersCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
class OnRegisterPlayersCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation*, "Epic.OnlineServices.Sessions", "OnRegisterPlayersCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Sessions {
// Is value type: false
// CS Name: Epic.OnlineServices.Sessions.OnRegisterPlayersCallbackInternalImplementation
class CORDL_TYPE OnRegisterPlayersCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ea600, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::RegisterPlayersCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ea660, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRegisterPlayersCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRegisterPlayersCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRegisterPlayersCallbackInternalImplementation(OnRegisterPlayersCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRegisterPlayersCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRegisterPlayersCallbackInternalImplementation(OnRegisterPlayersCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7746};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Sessions::OnRegisterPlayersCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
