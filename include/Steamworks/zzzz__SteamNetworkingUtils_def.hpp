#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamNetworkingUtils)
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
class SteamNetworkingUtils;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamNetworkingUtils*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamNetworkingUtils*, "Steamworks", "SteamNetworkingUtils");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamNetworkingUtils
class CORDL_TYPE SteamNetworkingUtils : public ::System::Object {
public:
// Declarations
/// @brief Method AllocateMessage, addr 0x1805b6270, size 0x40, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocateMessage(int32_t  cbAllocateBuffer) ;

/// @brief Method CheckPingDataUpToDate, addr 0x1805b62b0, size 0x40, virtual false, abstract: false, final false
static inline bool CheckPingDataUpToDate(float_t  flMaxAgeSeconds) ;

/// @brief Method ConvertPingLocationToString, addr 0x1805b62f0, size 0xa0, virtual false, abstract: false, final false
static inline void ConvertPingLocationToString(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location, ::by_ref<::StringW>  pszBuf, int32_t  cchBufSize) ;

/// @brief Method EstimatePingTimeBetweenTwoLocations, addr 0x1805b6390, size 0x50, virtual false, abstract: false, final false
static inline int32_t EstimatePingTimeBetweenTwoLocations(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location1, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  location2) ;

/// @brief Method EstimatePingTimeFromLocalHost, addr 0x1805b63e0, size 0x40, virtual false, abstract: false, final false
static inline int32_t EstimatePingTimeFromLocalHost(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  remoteLocation) ;

/// @brief Method GetConfigValue, addr 0x1805b6490, size 0x80, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingGetConfigValueResult GetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::System::IntPtr  pResult, ::by_ref<uint64_t>  cbResult) ;

/// @brief Method GetConfigValueInfo, addr 0x1805b6420, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetConfigValueInfo(::Steamworks::ESteamNetworkingConfigValue  eValue, ::by_ref<::Steamworks::ESteamNetworkingConfigDataType>  pOutDataType, ::by_ref<::Steamworks::ESteamNetworkingConfigScope>  pOutScope) ;

/// @brief Method GetDirectPingToPOP, addr 0x1805b6510, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetDirectPingToPOP(::Steamworks::SteamNetworkingPOPID  popID) ;

/// @brief Method GetIPv4FakeIPType, addr 0x1805b6550, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType GetIPv4FakeIPType(uint32_t  nIPv4) ;

/// @brief Method GetLocalPingLocation, addr 0x1805b6590, size 0x40, virtual false, abstract: false, final false
static inline float_t GetLocalPingLocation(::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result) ;

/// @brief Method GetLocalTimestamp, addr 0x1805b65d0, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::SteamNetworkingMicroseconds GetLocalTimestamp() ;

/// @brief Method GetPOPCount, addr 0x1805b6600, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetPOPCount() ;

/// @brief Method GetPOPList, addr 0x1805b6630, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetPOPList(::by_ref<::Steamworks::SteamNetworkingPOPID>  list, int32_t  nListSz) ;

/// @brief Method GetPingToDataCenter, addr 0x1805b6680, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetPingToDataCenter(::Steamworks::SteamNetworkingPOPID  popID, ::by_ref<::Steamworks::SteamNetworkingPOPID>  pViaRelayPoP) ;

/// @brief Method GetRealIdentityForFakeIP, addr 0x1805b66d0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::EResult GetRealIdentityForFakeIP(::by_ref<::Steamworks::SteamNetworkingIPAddr>  fakeIP, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pOutRealIdentity) ;

/// @brief Method GetRelayNetworkStatus, addr 0x1805b6720, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingAvailability GetRelayNetworkStatus(::by_ref<::Steamworks::SteamRelayNetworkStatus_t>  pDetails) ;

/// @brief Method InitRelayNetworkAccess, addr 0x1805b6760, size 0x30, virtual false, abstract: false, final false
static inline void InitRelayNetworkAccess() ;

/// @brief Method IsFakeIPv4, addr 0x1805b6790, size 0x40, virtual false, abstract: false, final false
static inline bool IsFakeIPv4(uint32_t  nIPv4) ;

/// @brief Method IterateGenericEditableConfigValues, addr 0x1805b67d0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingConfigValue IterateGenericEditableConfigValues(::Steamworks::ESteamNetworkingConfigValue  eCurrent, bool  bEnumerateDevVars) ;

/// @brief Method ParsePingLocationString, addr 0x1805b6820, size 0xf0, virtual false, abstract: false, final false
static inline bool ParsePingLocationString(::StringW  pszString, ::by_ref<::Steamworks::SteamNetworkPingLocation_t>  result) ;

/// @brief Method SetConfigValue, addr 0x1805b6910, size 0x80, virtual false, abstract: false, final false
static inline bool SetConfigValue(::Steamworks::ESteamNetworkingConfigValue  eValue, ::Steamworks::ESteamNetworkingConfigScope  eScopeType, ::System::IntPtr  scopeObj, ::Steamworks::ESteamNetworkingConfigDataType  eDataType, ::System::IntPtr  pArg) ;

/// @brief Method SetDebugOutputFunction, addr 0x1805b6990, size 0x50, virtual false, abstract: false, final false
static inline void SetDebugOutputFunction(::Steamworks::ESteamNetworkingSocketsDebugOutputType  eDetailLevel, ::Steamworks::FSteamNetworkingSocketsDebugOutput*  pfnFunc) ;

/// @brief Method SteamNetworkingIPAddr_GetFakeIPType, addr 0x1805b69e0, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamNetworkingFakeIPType SteamNetworkingIPAddr_GetFakeIPType(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr) ;

/// @brief Method SteamNetworkingIPAddr_ParseString, addr 0x1805b6a20, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamNetworkingIPAddr_ParseString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  pAddr, ::StringW  pszStr) ;

/// @brief Method SteamNetworkingIPAddr_ToString, addr 0x1805b6b10, size 0xb0, virtual false, abstract: false, final false
static inline void SteamNetworkingIPAddr_ToString(::by_ref<::Steamworks::SteamNetworkingIPAddr>  addr, ::by_ref<::StringW>  buf, uint32_t  cbBuf, bool  bWithPort) ;

/// @brief Method SteamNetworkingIdentity_ParseString, addr 0x1805b6bc0, size 0xf0, virtual false, abstract: false, final false
static inline bool SteamNetworkingIdentity_ParseString(::by_ref<::Steamworks::SteamNetworkingIdentity>  pIdentity, ::StringW  pszStr) ;

/// @brief Method SteamNetworkingIdentity_ToString, addr 0x1805b6cb0, size 0xa0, virtual false, abstract: false, final false
static inline void SteamNetworkingIdentity_ToString(::by_ref<::Steamworks::SteamNetworkingIdentity>  identity, ::by_ref<::StringW>  buf, uint32_t  cbBuf) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamNetworkingUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkingUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamNetworkingUtils(SteamNetworkingUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamNetworkingUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamNetworkingUtils(SteamNetworkingUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamNetworkingUtils) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
