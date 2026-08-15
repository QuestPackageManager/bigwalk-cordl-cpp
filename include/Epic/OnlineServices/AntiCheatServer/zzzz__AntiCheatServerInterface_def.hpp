#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/AntiCheatServerInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatServerInterface)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogEventOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogGameRoundEndOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogGameRoundStartOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerDespawnOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerReviveOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerSpawnOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTakeDamageOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTickOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseAbilityOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct RegisterEventOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct SetClientDetailsOptions;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct SetGameSessionIdOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct AddNotifyClientActionRequiredOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct AddNotifyClientAuthStatusChangedOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct AddNotifyMessageToClientOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct BeginSessionOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct EndSessionOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct GetProtectMessageOutputLengthOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnClientActionRequiredCallback;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnClientAuthStatusChangedCallback;
}
namespace Epic::OnlineServices::AntiCheatServer {
class OnMessageToClientCallback;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct ProtectMessageOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct ReceiveMessageFromClientOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct RegisterClientOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct SetClientNetworkStateOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct UnprotectMessageOptions;
}
namespace Epic::OnlineServices::AntiCheatServer {
struct UnregisterClientOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatServer {
class AntiCheatServerInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface*, "Epic.OnlineServices.AntiCheatServer", "AntiCheatServerInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::AntiCheatServer {
// Is value type: false
// CS Name: Epic.OnlineServices.AntiCheatServer.AntiCheatServerInterface
class CORDL_TYPE AntiCheatServerInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddNotifyClientActionRequired, addr 0x18051f860, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyClientActionRequired(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientActionRequiredOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientActionRequiredCallback*  notificationFn) ;

/// @brief Method AddNotifyClientAuthStatusChanged, addr 0x18051fa50, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyClientAuthStatusChanged(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*  notificationFn) ;

/// @brief Method AddNotifyMessageToClient, addr 0x18051fc40, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t AddNotifyMessageToClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*  notificationFn) ;

/// @brief Method BeginSession, addr 0x18051fe30, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result BeginSession(::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>  options) ;

/// @brief Method EndSession, addr 0x18051fee0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result EndSession(::by_ref<::Epic::OnlineServices::AntiCheatServer::EndSessionOptions>  options) ;

/// @brief Method GetProtectMessageOutputLength, addr 0x18051ff20, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result GetProtectMessageOutputLength(::by_ref<::Epic::OnlineServices::AntiCheatServer::GetProtectMessageOutputLengthOptions>  options, ::by_ref<uint32_t>  outBufferSizeBytes) ;

/// @brief Method LogEvent, addr 0x18051ff60, size 0x90, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogEvent(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogEventOptions>  options) ;

/// @brief Method LogGameRoundEnd, addr 0x18051fff0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogGameRoundEnd(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundEndOptions>  options) ;

/// @brief Method LogGameRoundStart, addr 0x180520030, size 0xc0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogGameRoundStart(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions>  options) ;

/// @brief Method LogPlayerDespawn, addr 0x1805200f0, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerDespawn(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerDespawnOptions>  options) ;

/// @brief Method LogPlayerRevive, addr 0x180520130, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerRevive(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerReviveOptions>  options) ;

/// @brief Method LogPlayerSpawn, addr 0x180520180, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerSpawn(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerSpawnOptions>  options) ;

/// @brief Method LogPlayerTakeDamage, addr 0x1805201d0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerTakeDamage(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>  options) ;

/// @brief Method LogPlayerTick, addr 0x180520240, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerTick(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions>  options) ;

/// @brief Method LogPlayerUseAbility, addr 0x1805202a0, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerUseAbility(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseAbilityOptions>  options) ;

/// @brief Method LogPlayerUseWeapon, addr 0x180520300, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result LogPlayerUseWeapon(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponOptions>  options) ;

static inline ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* New_ctor() ;

static inline ::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method ProtectMessage, addr 0x1805203a0, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ProtectMessage(::by_ref<::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method ReceiveMessageFromClient, addr 0x180520490, size 0x90, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result ReceiveMessageFromClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions>  options) ;

/// @brief Method RegisterClient, addr 0x180520520, size 0xe0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RegisterClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>  options) ;

/// @brief Method RegisterEvent, addr 0x180520600, size 0xb0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result RegisterEvent(::by_ref<::Epic::OnlineServices::AntiCheatCommon::RegisterEventOptions>  options) ;

/// @brief Method RemoveNotifyClientActionRequired, addr 0x1805206b0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyClientActionRequired(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyClientAuthStatusChanged, addr 0x1805206e0, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyClientAuthStatusChanged(uint64_t  notificationId) ;

/// @brief Method RemoveNotifyMessageToClient, addr 0x180520710, size 0x30, virtual false, abstract: false, final false
inline void RemoveNotifyMessageToClient(uint64_t  notificationId) ;

/// @brief Method SetClientDetails, addr 0x180520740, size 0x50, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetClientDetails(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetClientDetailsOptions>  options) ;

/// @brief Method SetClientNetworkState, addr 0x180520790, size 0x60, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetClientNetworkState(::by_ref<::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions>  options) ;

/// @brief Method SetGameSessionId, addr 0x1805207f0, size 0x70, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result SetGameSessionId(::by_ref<::Epic::OnlineServices::AntiCheatCommon::SetGameSessionIdOptions>  options) ;

/// @brief Method UnprotectMessage, addr 0x180520860, size 0xf0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UnprotectMessage(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnprotectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten) ;

/// @brief Method UnregisterClient, addr 0x180520950, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result UnregisterClient(::by_ref<::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions>  options) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatServerInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AntiCheatServerInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AntiCheatServerInterface(AntiCheatServerInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AntiCheatServerInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AntiCheatServerInterface(AntiCheatServerInterface const& ) = delete;

/// @brief Field ADDNOTIFYCLIENTACTIONREQUIRED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYCLIENTACTIONREQUIRED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYCLIENTAUTHSTATUSCHANGED_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYCLIENTAUTHSTATUSCHANGED_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ADDNOTIFYMESSAGETOCLIENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDNOTIFYMESSAGETOCLIENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field BEGINSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  BEGINSESSION_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field BEGINSESSION_MAX_REGISTERTIMEOUT offset 0xffffffff size 0x4
static constexpr int32_t  BEGINSESSION_MAX_REGISTERTIMEOUT{static_cast<int32_t>(0x78)};

/// @brief Field BEGINSESSION_MIN_REGISTERTIMEOUT offset 0xffffffff size 0x4
static constexpr int32_t  BEGINSESSION_MIN_REGISTERTIMEOUT{static_cast<int32_t>(0xa)};

/// @brief Field ENDSESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENDSESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field GETPROTECTMESSAGEOUTPUTLENGTH_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  GETPROTECTMESSAGEOUTPUTLENGTH_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ONMESSAGETOCLIENTCALLBACK_MAX_MESSAGE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  ONMESSAGETOCLIENTCALLBACK_MAX_MESSAGE_SIZE{static_cast<int32_t>(0x200)};

/// @brief Field PROTECTMESSAGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  PROTECTMESSAGE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field RECEIVEMESSAGEFROMCLIENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  RECEIVEMESSAGEFROMCLIENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field REGISTERCLIENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  REGISTERCLIENT_API_LATEST{static_cast<int32_t>(0x3)};

/// @brief Field SETCLIENTNETWORKSTATE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SETCLIENTNETWORKSTATE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNPROTECTMESSAGE_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNPROTECTMESSAGE_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field UNREGISTERCLIENT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  UNREGISTERCLIENT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatServer::AntiCheatServerInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatServer
