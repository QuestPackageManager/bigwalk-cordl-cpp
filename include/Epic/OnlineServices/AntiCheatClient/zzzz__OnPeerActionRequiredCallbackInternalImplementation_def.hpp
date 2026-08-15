#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnPeerActionRequiredCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnPeerActionRequiredCallbackInternalImplementation)
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerActionRequiredCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientActionRequiredCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
class OnPeerActionRequiredCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation*, "Epic.OnlineServices.AntiCheatClient", "OnPeerActionRequiredCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatClient.OnPeerActionRequiredCallbackInternalImplementation
class CORDL_TYPE OnPeerActionRequiredCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180530020, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180530080, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPeerActionRequiredCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPeerActionRequiredCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPeerActionRequiredCallbackInternalImplementation(OnPeerActionRequiredCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPeerActionRequiredCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPeerActionRequiredCallbackInternalImplementation(OnPeerActionRequiredCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
