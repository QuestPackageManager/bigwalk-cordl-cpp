#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerHTTP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameServerHTTP)
namespace Steamworks {
struct EHTTPMethod;
}
namespace Steamworks {
struct HTTPCookieContainerHandle;
}
namespace Steamworks {
struct HTTPRequestHandle;
}
namespace Steamworks {
struct SteamAPICall_t;
}
// Forward declare root types
namespace Steamworks {
class SteamGameServerHTTP;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamGameServerHTTP*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamGameServerHTTP*, "Steamworks", "SteamGameServerHTTP");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamGameServerHTTP
class CORDL_TYPE SteamGameServerHTTP : public ::System::Object {
public:
// Declarations
/// @brief Method CreateCookieContainer, addr 0x18058e0c0, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::HTTPCookieContainerHandle CreateCookieContainer(bool  bAllowResponsesToModify) ;

/// @brief Method CreateHTTPRequest, addr 0x18058e1a0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Steamworks::HTTPRequestHandle CreateHTTPRequest(::Steamworks::EHTTPMethod  eHTTPRequestMethod, ::StringW  pchAbsoluteURL) ;

/// @brief Method DeferHTTPRequest, addr 0x18058e380, size 0xd0, virtual false, abstract: false, final false
static inline bool DeferHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest) ;

/// @brief Method GetHTTPDownloadProgressPct, addr 0x18058e450, size 0xe0, virtual false, abstract: false, final false
static inline bool GetHTTPDownloadProgressPct(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<float_t>  pflPercentOut) ;

/// @brief Method GetHTTPRequestWasTimedOut, addr 0x18058e530, size 0x100, virtual false, abstract: false, final false
static inline bool GetHTTPRequestWasTimedOut(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<bool>  pbWasTimedOut) ;

/// @brief Method GetHTTPResponseBodyData, addr 0x18058e630, size 0x100, virtual false, abstract: false, final false
static inline bool GetHTTPResponseBodyData(::Steamworks::HTTPRequestHandle  hRequest, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize) ;

/// @brief Method GetHTTPResponseBodySize, addr 0x18058e730, size 0xe0, virtual false, abstract: false, final false
static inline bool GetHTTPResponseBodySize(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<uint32_t>  unBodySize) ;

/// @brief Method GetHTTPResponseHeaderSize, addr 0x18058e810, size 0x1e0, virtual false, abstract: false, final false
static inline bool GetHTTPResponseHeaderSize(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::by_ref<uint32_t>  unResponseHeaderSize) ;

/// @brief Method GetHTTPResponseHeaderValue, addr 0x18058e9f0, size 0x200, virtual false, abstract: false, final false
static inline bool GetHTTPResponseHeaderValue(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::ArrayW<uint8_t>  pHeaderValueBuffer, uint32_t  unBufferSize) ;

/// @brief Method GetHTTPStreamingResponseBodyData, addr 0x18058ebf0, size 0x110, virtual false, abstract: false, final false
static inline bool GetHTTPStreamingResponseBodyData(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  cOffset, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize) ;

/// @brief Method PrioritizeHTTPRequest, addr 0x18058ed00, size 0xd0, virtual false, abstract: false, final false
static inline bool PrioritizeHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest) ;

/// @brief Method ReleaseCookieContainer, addr 0x18058edd0, size 0xd0, virtual false, abstract: false, final false
static inline bool ReleaseCookieContainer(::Steamworks::HTTPCookieContainerHandle  hCookieContainer) ;

/// @brief Method ReleaseHTTPRequest, addr 0x18058eea0, size 0xd0, virtual false, abstract: false, final false
static inline bool ReleaseHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest) ;

/// @brief Method SendHTTPRequest, addr 0x18058f050, size 0xe0, virtual false, abstract: false, final false
static inline bool SendHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle) ;

/// @brief Method SendHTTPRequestAndStreamResponse, addr 0x18058ef70, size 0xe0, virtual false, abstract: false, final false
static inline bool SendHTTPRequestAndStreamResponse(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle) ;

/// @brief Method SetCookie, addr 0x18058f130, size 0x3b0, virtual false, abstract: false, final false
static inline bool SetCookie(::Steamworks::HTTPCookieContainerHandle  hCookieContainer, ::StringW  pchHost, ::StringW  pchUrl, ::StringW  pchCookie) ;

/// @brief Method SetHTTPRequestAbsoluteTimeoutMS, addr 0x18058f4e0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestAbsoluteTimeoutMS(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unMilliseconds) ;

/// @brief Method SetHTTPRequestContextValue, addr 0x18058f5c0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestContextValue(::Steamworks::HTTPRequestHandle  hRequest, uint64_t  ulContextValue) ;

/// @brief Method SetHTTPRequestCookieContainer, addr 0x18058f6a0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestCookieContainer(::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::HTTPCookieContainerHandle  hCookieContainer) ;

/// @brief Method SetHTTPRequestGetOrPostParameter, addr 0x18058f780, size 0x2b0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestGetOrPostParameter(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchParamName, ::StringW  pchParamValue) ;

/// @brief Method SetHTTPRequestHeaderValue, addr 0x18058fa30, size 0x2b0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestHeaderValue(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::StringW  pchHeaderValue) ;

/// @brief Method SetHTTPRequestNetworkActivityTimeout, addr 0x18058fce0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestNetworkActivityTimeout(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unTimeoutSeconds) ;

/// @brief Method SetHTTPRequestRawPostBody, addr 0x18058fdc0, size 0x200, virtual false, abstract: false, final false
static inline bool SetHTTPRequestRawPostBody(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchContentType, ::ArrayW<uint8_t>  pubBody, uint32_t  unBodyLen) ;

/// @brief Method SetHTTPRequestRequiresVerifiedCertificate, addr 0x18058ffc0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestRequiresVerifiedCertificate(::Steamworks::HTTPRequestHandle  hRequest, bool  bRequireVerifiedCertificate) ;

/// @brief Method SetHTTPRequestUserAgentInfo, addr 0x1805900a0, size 0x1e0, virtual false, abstract: false, final false
static inline bool SetHTTPRequestUserAgentInfo(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchUserAgentInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamGameServerHTTP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerHTTP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamGameServerHTTP(SteamGameServerHTTP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamGameServerHTTP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamGameServerHTTP(SteamGameServerHTTP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamGameServerHTTP) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
