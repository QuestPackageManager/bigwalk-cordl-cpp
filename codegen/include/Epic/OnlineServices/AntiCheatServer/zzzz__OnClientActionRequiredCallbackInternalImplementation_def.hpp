#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/OnClientActionRequiredCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnClientActionRequiredCallbackInternalImplementation)
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientActionRequiredCallbackInfoInternal;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnClientActionRequiredCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
class OnClientActionRequiredCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation*, "Epic.OnlineServices.AntiCheatServer", "OnClientActionRequiredCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatServer.OnClientActionRequiredCallbackInternalImplementation
class CORDL_TYPE OnClientActionRequiredCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180526ba0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180526c00, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnClientActionRequiredCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnClientActionRequiredCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnClientActionRequiredCallbackInternalImplementation(OnClientActionRequiredCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnClientActionRequiredCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnClientActionRequiredCallbackInternalImplementation(OnClientActionRequiredCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
