#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToServerCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnMessageToServerCallbackInternalImplementation)
namespace Epic::OnlineServices::AntiCheatClient {
struct OnMessageToServerCallbackInfoInternal;
}
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToServerCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToServerCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternalImplementation*, "Epic.OnlineServices.AntiCheatClient", "OnMessageToServerCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatClient.OnMessageToServerCallbackInternalImplementation
class CORDL_TYPE OnMessageToServerCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052fde0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052fe40, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnMessageToServerCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnMessageToServerCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnMessageToServerCallbackInternalImplementation(OnMessageToServerCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnMessageToServerCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnMessageToServerCallbackInternalImplementation(OnMessageToServerCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
