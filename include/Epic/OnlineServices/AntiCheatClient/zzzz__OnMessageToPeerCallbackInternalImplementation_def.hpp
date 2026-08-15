#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToPeerCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnMessageToPeerCallbackInternalImplementation)
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToPeerCallbackInternal;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnMessageToClientCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
class OnMessageToPeerCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation*, "Epic.OnlineServices.AntiCheatClient", "OnMessageToPeerCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatClient.OnMessageToPeerCallbackInternalImplementation
class CORDL_TYPE OnMessageToPeerCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052fba0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052fc00, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnMessageToPeerCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnMessageToPeerCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnMessageToPeerCallbackInternalImplementation(OnMessageToPeerCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnMessageToPeerCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnMessageToPeerCallbackInternalImplementation(OnMessageToPeerCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9422};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
