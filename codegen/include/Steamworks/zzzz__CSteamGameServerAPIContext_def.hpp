#pragma once
// IWYU pragma private; include "Steamworks/CSteamGameServerAPIContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CSteamGameServerAPIContext)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class CSteamGameServerAPIContext;
}
// Write type traits
MARK_REF_T(::Steamworks::CSteamGameServerAPIContext*);
DEFINE_IL2CPP_CLASS(::Steamworks::CSteamGameServerAPIContext*, "Steamworks", "CSteamGameServerAPIContext");
// Dependencies System.IntPtr, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CSteamGameServerAPIContext
class CORDL_TYPE CSteamGameServerAPIContext : public ::System::Object {
public:
// Declarations
/// @brief Field m_pSteamClient, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamClient, put=setStaticF_m_pSteamClient)) ::System::IntPtr  m_pSteamClient;

/// @brief Field m_pSteamGameServer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamGameServer, put=setStaticF_m_pSteamGameServer)) ::System::IntPtr  m_pSteamGameServer;

/// @brief Field m_pSteamGameServerStats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamGameServerStats, put=setStaticF_m_pSteamGameServerStats)) ::System::IntPtr  m_pSteamGameServerStats;

/// @brief Field m_pSteamHTTP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamHTTP, put=setStaticF_m_pSteamHTTP)) ::System::IntPtr  m_pSteamHTTP;

/// @brief Field m_pSteamInventory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamInventory, put=setStaticF_m_pSteamInventory)) ::System::IntPtr  m_pSteamInventory;

/// @brief Field m_pSteamNetworking, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworking, put=setStaticF_m_pSteamNetworking)) ::System::IntPtr  m_pSteamNetworking;

/// @brief Field m_pSteamNetworkingMessages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworkingMessages, put=setStaticF_m_pSteamNetworkingMessages)) ::System::IntPtr  m_pSteamNetworkingMessages;

/// @brief Field m_pSteamNetworkingSockets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworkingSockets, put=setStaticF_m_pSteamNetworkingSockets)) ::System::IntPtr  m_pSteamNetworkingSockets;

/// @brief Field m_pSteamNetworkingUtils, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamNetworkingUtils, put=setStaticF_m_pSteamNetworkingUtils)) ::System::IntPtr  m_pSteamNetworkingUtils;

/// @brief Field m_pSteamUGC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamUGC, put=setStaticF_m_pSteamUGC)) ::System::IntPtr  m_pSteamUGC;

/// @brief Field m_pSteamUtils, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_pSteamUtils, put=setStaticF_m_pSteamUtils)) ::System::IntPtr  m_pSteamUtils;

/// @brief Method Clear, addr 0x18054c230, size 0xd0, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method GetSteamClient, addr 0x18054c300, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamClient() ;

/// @brief Method GetSteamGameServer, addr 0x18054c340, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamGameServer() ;

/// @brief Method GetSteamGameServerStats, addr 0x18054c320, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamGameServerStats() ;

/// @brief Method GetSteamHTTP, addr 0x18054c360, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamHTTP() ;

/// @brief Method GetSteamInventory, addr 0x18054c380, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamInventory() ;

/// @brief Method GetSteamNetworking, addr 0x18054c400, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworking() ;

/// @brief Method GetSteamNetworkingMessages, addr 0x18054c3a0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworkingMessages() ;

/// @brief Method GetSteamNetworkingSockets, addr 0x18054c3c0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworkingSockets() ;

/// @brief Method GetSteamNetworkingUtils, addr 0x18054c3e0, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamNetworkingUtils() ;

/// @brief Method GetSteamUGC, addr 0x18054c420, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamUGC() ;

/// @brief Method GetSteamUtils, addr 0x18054c440, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSteamUtils() ;

/// @brief Method Init, addr 0x18054c460, size 0x5b0, virtual false, abstract: false, final false
static inline bool Init() ;

static inline ::System::IntPtr getStaticF_m_pSteamClient() ;

static inline ::System::IntPtr getStaticF_m_pSteamGameServer() ;

static inline ::System::IntPtr getStaticF_m_pSteamGameServerStats() ;

static inline ::System::IntPtr getStaticF_m_pSteamHTTP() ;

static inline ::System::IntPtr getStaticF_m_pSteamInventory() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworking() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworkingMessages() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworkingSockets() ;

static inline ::System::IntPtr getStaticF_m_pSteamNetworkingUtils() ;

static inline ::System::IntPtr getStaticF_m_pSteamUGC() ;

static inline ::System::IntPtr getStaticF_m_pSteamUtils() ;

static inline void setStaticF_m_pSteamClient(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamGameServer(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamGameServerStats(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamHTTP(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamInventory(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworking(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworkingMessages(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworkingSockets(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamNetworkingUtils(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamUGC(::System::IntPtr  value) ;

static inline void setStaticF_m_pSteamUtils(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CSteamGameServerAPIContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CSteamGameServerAPIContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CSteamGameServerAPIContext(CSteamGameServerAPIContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CSteamGameServerAPIContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CSteamGameServerAPIContext(CSteamGameServerAPIContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CSteamGameServerAPIContext) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
