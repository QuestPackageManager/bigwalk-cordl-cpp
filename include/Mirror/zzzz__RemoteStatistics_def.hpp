#pragma once
// IWYU pragma private; include "Mirror/RemoteStatistics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__Stats_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStatistics)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkStatistics;
}
namespace Mirror {
struct Stats;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Mirror {
class RemoteStatistics;
}
// Write type traits
MARK_REF_T(::Mirror::RemoteStatistics*);
DEFINE_IL2CPP_CLASS(::Mirror::RemoteStatistics*, "Mirror", "RemoteStatistics");
// Dependencies Mirror.NetworkBehaviour, Mirror.Stats, UnityEngine.KeyCode, UnityEngine.Rect
namespace Mirror {
// Is value type: false
// CS Name: Mirror.RemoteStatistics
class CORDL_TYPE RemoteStatistics : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field NetworkStatistics, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetworkStatistics, put=__cordl_internal_set_NetworkStatistics)) ::UnityW<::Mirror::NetworkStatistics>  NetworkStatistics;

/// @brief Field clientAuthenticated, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientAuthenticated, put=__cordl_internal_set_clientAuthenticated)) bool  clientAuthenticated;

/// @brief Field clientPassword, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_clientPassword, put=__cordl_internal_set_clientPassword)) ::StringW  clientPassword;

/// @brief Field hotKey, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_hotKey, put=__cordl_internal_set_hotKey)) ::UnityEngine::KeyCode  hotKey;

/// @brief Field lastSendTime, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSendTime, put=__cordl_internal_set_lastSendTime)) double_t  lastSendTime;

/// @brief Field passwordFile, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_passwordFile, put=__cordl_internal_set_passwordFile)) ::StringW  passwordFile;

/// @brief Field sendInterval, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_sendInterval, put=__cordl_internal_set_sendInterval)) float_t  sendInterval;

/// @brief Field serverAuthenticated, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_serverAuthenticated, put=__cordl_internal_set_serverAuthenticated)) bool  serverAuthenticated;

/// @brief Field serverPassword, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_serverPassword, put=__cordl_internal_set_serverPassword)) ::StringW  serverPassword;

/// @brief Field showGui, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGui, put=__cordl_internal_set_showGui)) bool  showGui;

/// @brief Field stats, offset 0xb8, size 0x58 
 __declspec(property(get=__cordl_internal_get_stats, put=__cordl_internal_set_stats)) ::Mirror::Stats  stats;

/// @brief Field windowRect, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_windowRect, put=__cordl_internal_set_windowRect)) ::UnityEngine::Rect  windowRect;

/// @brief Method CmdAuthenticate, addr 0x18152c4c0, size 0xc0, virtual false, abstract: false, final false
inline void CmdAuthenticate(::StringW  v) ;

/// @brief Method GUILayout_ProgressBar, addr 0x18152c580, size 0xb0, virtual false, abstract: false, final false
inline void GUILayout_ProgressBar(double_t  ratio, int32_t  width) ;

/// @brief Method GUILayout_TextAndProgressBar, addr 0x18152c630, size 0x220, virtual false, abstract: false, final false
inline void GUILayout_TextAndProgressBar(::StringW  text, double_t  ratio, int32_t  progressbarWidth, ::StringW  caption, int32_t  captionWidth, ::UnityEngine::Color  captionColor) ;

/// @brief Method GUILayout_TextAndValue, addr 0x18152c850, size 0x150, virtual false, abstract: false, final false
inline void GUILayout_TextAndValue(::StringW  text, ::StringW  value) ;

/// @brief Method GUI_Authenticate, addr 0x18152c9a0, size 0x320, virtual false, abstract: false, final false
inline void GUI_Authenticate() ;

/// @brief Method GUI_Cpu, addr 0x18152ccc0, size 0x2c0, virtual false, abstract: false, final false
inline void GUI_Cpu(float_t  serverTickInterval, double_t  fullUpdateAvg, double_t  serverEarlyAvg, double_t  serverLateAvg, double_t  transportEarlyAvg, double_t  transportLateAvg) ;

/// @brief Method GUI_General, addr 0x18152cf80, size 0x240, virtual false, abstract: false, final false
inline void GUI_General(int32_t  connections, double_t  uptime, int32_t  configuredTickRate, int32_t  actualTickRate) ;

/// @brief Method GUI_Notice, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void GUI_Notice() ;

/// @brief Method GUI_Traffic, addr 0x18152d1c0, size 0x190, virtual false, abstract: false, final false
inline void GUI_Traffic(int64_t  serverSentBytesPerSecond, int64_t  serverReceivedBytesPerSecond) ;

/// @brief Method InvokeUserCode_CmdAuthenticate__String, addr 0x18152d350, size 0x160, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdAuthenticate__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_TargetRpcSync__Stats, addr 0x18152d4b0, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_TargetRpcSync__Stats(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method LoadPassword, addr 0x18152d5e0, size 0xb0, virtual false, abstract: false, final false
inline void LoadPassword() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::RemoteStatistics* New_ctor() ;

/// @brief Method OnGUI, addr 0x18152d690, size 0xe0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnStartLocalPlayer, addr 0x18152d770, size 0x70, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStartServer, addr 0x18152d7e0, size 0xf0, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnValidate, addr 0x18152d8d0, size 0x10, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OnWindow, addr 0x18152d8e0, size 0x250, virtual false, abstract: false, final false
inline void OnWindow(int32_t  windowID) ;

/// @brief Method TargetRpcSync, addr 0x18152db30, size 0x110, virtual false, abstract: false, final false
inline void TargetRpcSync(::Mirror::Stats  v) ;

/// @brief Method Update, addr 0x18152df10, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateClient, addr 0x18152dc40, size 0x30, virtual false, abstract: false, final false
inline void UpdateClient() ;

/// @brief Method UpdateServer, addr 0x18152dc70, size 0x2a0, virtual false, abstract: false, final false
inline void UpdateServer() ;

/// @brief Method UserCode_CmdAuthenticate__String, addr 0x18152df70, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_CmdAuthenticate__String(::StringW  v) ;

/// @brief Method UserCode_TargetRpcSync__Stats, addr 0x18152e020, size 0x50, virtual false, abstract: false, final false
inline void UserCode_TargetRpcSync__Stats(::Mirror::Stats  v) ;

constexpr ::UnityW<::Mirror::NetworkStatistics> const& __cordl_internal_get_NetworkStatistics() const;

constexpr ::UnityW<::Mirror::NetworkStatistics>& __cordl_internal_get_NetworkStatistics() ;

constexpr bool const& __cordl_internal_get_clientAuthenticated() const;

constexpr bool& __cordl_internal_get_clientAuthenticated() ;

constexpr ::StringW const& __cordl_internal_get_clientPassword() const;

constexpr ::StringW& __cordl_internal_get_clientPassword() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_hotKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_hotKey() ;

constexpr double_t const& __cordl_internal_get_lastSendTime() const;

constexpr double_t& __cordl_internal_get_lastSendTime() ;

constexpr ::StringW const& __cordl_internal_get_passwordFile() const;

constexpr ::StringW& __cordl_internal_get_passwordFile() ;

constexpr float_t const& __cordl_internal_get_sendInterval() const;

constexpr float_t& __cordl_internal_get_sendInterval() ;

constexpr bool const& __cordl_internal_get_serverAuthenticated() const;

constexpr bool& __cordl_internal_get_serverAuthenticated() ;

constexpr ::StringW const& __cordl_internal_get_serverPassword() const;

constexpr ::StringW& __cordl_internal_get_serverPassword() ;

constexpr bool const& __cordl_internal_get_showGui() const;

constexpr bool& __cordl_internal_get_showGui() ;

constexpr ::Mirror::Stats const& __cordl_internal_get_stats() const;

constexpr ::Mirror::Stats& __cordl_internal_get_stats() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_windowRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_windowRect() ;

constexpr void __cordl_internal_set_NetworkStatistics(::UnityW<::Mirror::NetworkStatistics>  value) ;

constexpr void __cordl_internal_set_clientAuthenticated(bool  value) ;

constexpr void __cordl_internal_set_clientPassword(::StringW  value) ;

constexpr void __cordl_internal_set_hotKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_lastSendTime(double_t  value) ;

constexpr void __cordl_internal_set_passwordFile(::StringW  value) ;

constexpr void __cordl_internal_set_sendInterval(float_t  value) ;

constexpr void __cordl_internal_set_serverAuthenticated(bool  value) ;

constexpr void __cordl_internal_set_serverPassword(::StringW  value) ;

constexpr void __cordl_internal_set_showGui(bool  value) ;

constexpr void __cordl_internal_set_stats(::Mirror::Stats  value) ;

constexpr void __cordl_internal_set_windowRect(::UnityEngine::Rect  value) ;

/// @brief Method .ctor, addr 0x18152e130, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStatistics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteStatistics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteStatistics(RemoteStatistics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStatistics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteStatistics(RemoteStatistics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19250};

/// @brief Field NetworkStatistics, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkStatistics>  ___NetworkStatistics;

/// @brief Field sendInterval, offset: 0x70, size: 0x4, def value: None
 float_t  ___sendInterval;

/// @brief Field lastSendTime, offset: 0x78, size: 0x8, def value: None
 double_t  ___lastSendTime;

/// @brief Field showGui, offset: 0x80, size: 0x1, def value: None
 bool  ___showGui;

/// @brief Field hotKey, offset: 0x84, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___hotKey;

/// @brief Field windowRect, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Rect  ___windowRect;

/// @brief Field passwordFile, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___passwordFile;

/// @brief Field serverAuthenticated, offset: 0xa0, size: 0x1, def value: None
 bool  ___serverAuthenticated;

/// @brief Field clientAuthenticated, offset: 0xa1, size: 0x1, def value: None
 bool  ___clientAuthenticated;

/// @brief Field serverPassword, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___serverPassword;

/// @brief Field clientPassword, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___clientPassword;

/// @brief Field stats, offset: 0xb8, size: 0x58, def value: None
 ::Mirror::Stats  ___stats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::RemoteStatistics, ___NetworkStatistics) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___sendInterval) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___lastSendTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___showGui) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___hotKey) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___windowRect) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___passwordFile) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___serverAuthenticated) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___clientAuthenticated) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___serverPassword) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___clientPassword) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mirror::RemoteStatistics, ___stats) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Mirror::RemoteStatistics) == 0x110, "Size mismatch!");

} // namespace end def Mirror
