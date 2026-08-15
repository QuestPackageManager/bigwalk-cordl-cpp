#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerNetworkingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerNetworkingUtils)
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct ESteamNetworkingAvailability;
}
namespace Steamworks {
struct ESteamNetworkingConfigDataType;
}
namespace Steamworks {
struct ESteamNetworkingConfigScope;
}
namespace Steamworks {
struct ESteamNetworkingConfigValue;
}
namespace Steamworks {
struct ESteamNetworkingFakeIPType;
}
namespace Steamworks {
struct ESteamNetworkingGetConfigValueResult;
}
namespace Steamworks {
struct ESteamNetworkingSocketsDebugOutputType;
}
namespace Steamworks {
class FSteamNetworkingSocketsDebugOutput;
}
namespace Steamworks {
struct SteamNetworkPingLocation_t;
}
namespace Steamworks {
struct SteamNetworkingIPAddr;
}
namespace Steamworks {
struct SteamNetworkingIdentity;
}
namespace Steamworks {
struct SteamNetworkingMicroseconds;
}
namespace Steamworks {
struct SteamNetworkingPOPID;
}
namespace Steamworks {
struct SteamRelayNetworkStatus_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServerNetworkingUtils;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerNetworkingUtils*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerNetworkingUtils*, "Steamworks", "SteamGameServerNetworkingUtils");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerNetworkingUtils
class CORDL_TYPE SteamGameServerNetworkingUtils : public ::System::Object {
public:
// Declarations
/// @brief Method AllocateMessage, addr 0x1805968c0, size 0xd0, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocateMessage(int32_t  cbAllocateBuffer) ;

/// @brief Method CheckPingDataUpToDate, addr 0x180596990, size 0xe0, virtual false, abstract: false, final false
static inline bool CheckPingDataUpToDate(float_t  flMaxAgeSeconds) ;

/// @brief Method ConvertPingLocationToString, addr 0x180596a70, size 0x240, virtual false, abstract: false, final false
static inline void ConvertPingLocationToString(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location, ::by_ref<::StringW>  pszBuf, int32_t  cchBufSize) ;

/// @brief Method EstimatePingTimeBetweenTwoLocations, addr 0x180596cb0, size 0x70, virtual false, abstract: false, final false
static inline int32_t EstimatePingTimeBetweenTwoLocations(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location1, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location2) ;

/// @brief Method EstimatePingTimeFromLocalHost, addr 0x180596d20, size 0x200, virtual false, abstract: false, final false
static inline int32_t EstimatePingTimeFromLocalHost(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  remoteLocation) ;

/// @brief Method GetConfigValue, addr 0x180597020, size 0x120, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingGetConfigValueResult GetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::System::IntPtr  pResult, ::by_ref<uint64_t>  cbResult) ;

/// @brief Method GetConfigValueInfo, addr 0x180596f20, size 0x100, virtual false, abstract: false, final false
static inline ::StringW GetConfigValueInfo(::Steamworks::ESteamNetworkingConfigValue  eValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>  pOutScope) ;

/// @brief Method GetDirectPingToPOP, addr 0x180597140, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetDirectPingToPOP(::Steamworks::SteamNetworkingPOPID  popID) ;

/// @brief Method GetIPv4FakeIPType, addr 0x180597210, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType GetIPv4FakeIPType(uint32_t  nIPv4) ;

/// @brief Method GetLocalPingLocation, addr 0x1805972e0, size 0x1b0, virtual false, abstract: false, final false
static inline float_t GetLocalPingLocation(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result) ;

/// @brief Method GetLocalTimestamp, addr 0x180597490, size 0xd0, virtual false, abstract: false, final false
static inline ::Steamworks::SteamNetworkingMicroseconds GetLocalTimestamp() ;

/// @brief Method GetPOPCount, addr 0x180597560, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetPOPCount() ;

/// @brief Method GetPOPList, addr 0x180597630, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetPOPList(::by_ref<::Steamworks::SteamNetworkingPOPID>  list, int32_t  nListSz) ;

/// @brief Method GetPingToDataCenter, addr 0x180597710, size 0xe0, virtual false, abstract: false, final false
static inline int32_t GetPingToDataCenter(::Steamworks::SteamNetworkingPOPID  popID, ::by_ref<::Steamworks::SteamNetworkingPOPID>  pViaRelayPoP) ;

/// @brief Method GetRealIdentityForFakeIP, addr 0x1805977f0, size 0x1b0, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetRealIdentityForFakeIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  fakeIP, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pOutRealIdentity) ;

/// @brief Method GetRelayNetworkStatus, addr 0x1805979a0, size 0x1c0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability GetRelayNetworkStatus(::by_ref<::Steamworks::SteamRelayNetworkStatus_t>  pDetails) ;

/// @brief Method InitRelayNetworkAccess, addr 0x180597b60, size 0xd0, virtual false, abstract: false, final false
static inline void InitRelayNetworkAccess() ;

/// @brief Method IsFakeIPv4, addr 0x180597c30, size 0xd0, virtual false, abstract: false, final false
static inline bool IsFakeIPv4(uint32_t  nIPv4) ;

/// @brief Method IterateGenericEditableConfigValues, addr 0x180597d00, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingConfigValue IterateGenericEditableConfigValues(::Steamworks::ESteamNetworkingConfigValue  eCurrent, bool  bEnumerateDevVars) ;

/// @brief Method ParsePingLocationString, addr 0x180597de0, size 0x280, virtual false, abstract: false, final false
static inline bool ParsePingLocationString(::StringW  pszString, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result) ;

/// @brief Method SetConfigValue, addr 0x180598060, size 0x110, virtual false, abstract: false, final false
static inline bool SetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::Steamworks::ESteamNetworkingConfigDataType  eDataType, ::System::IntPtr  pArg) ;

/// @brief Method SetDebugOutputFunction, addr 0x180598170, size 0xf0, virtual false, abstract: false, final false
static inline void SetDebugOutputFunction(::Steamworks::ESteamNetworkingSocketsDebugOutputType  eDetailLevel, ::Steamworks::FSteamNetworkingSocketsDebugOutput*  pfnFunc) ;

/// @brief Method SteamNetworkingIPAddr_GetFakeIPType, addr 0x180598260, size 0x140, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType SteamNetworkingIPAddr_GetFakeIPType(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr) ;

/// @brief Method SteamNetworkingIPAddr_ParseString, addr 0x1805983a0, size 0x230, virtual false, abstract: false, final false
static inline bool SteamNetworkingIPAddr_ParseString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  pAddr, ::StringW  pszStr) ;

/// @brief Method SteamNetworkingIPAddr_ToString, addr 0x1805985d0, size 0x1a0, virtual false, abstract: false, final false
static inline void SteamNetworkingIPAddr_ToString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr, ::by_ref<::StringW>  buf, uint32_t  cbBuf, bool  bWithPort) ;

/// @brief Method SteamNetworkingIdentity_ParseString, addr 0x180598770, size 0x270, virtual false, abstract: false, final false
static inline bool SteamNetworkingIdentity_ParseString(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity, ::StringW  pszStr) ;

/// @brief Method SteamNetworkingIdentity_ToString, addr 0x1805989e0, size 0x1a0, virtual false, abstract: false, final false
static inline void SteamNetworkingIdentity_ToString(::by_ref<::Steamworks::SteamNetworkingIdentity>  identity, ::by_ref<::StringW>  buf, uint32_t  cbBuf) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerNetworkingUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerNetworkingUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerNetworkingUtils(SteamGameServerNetworkingUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerNetworkingUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerNetworkingUtils(SteamGameServerNetworkingUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerNetworkingUtils) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
