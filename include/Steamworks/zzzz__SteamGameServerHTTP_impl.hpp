#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerHTTP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerHTTP_def.hpp"
#include "Steamworks/zzzz__EHTTPMethod_def.hpp"
#include "Steamworks/zzzz__HTTPCookieContainerHandle_def.hpp"
#include "Steamworks/zzzz__HTTPRequestHandle_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.CreateHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HTTPRequestHandle (*)(::Steamworks::EHTTPMethod, ::StringW)>(&::Steamworks::SteamGameServerHTTP::CreateHTTPRequest)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18058e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"CreateHTTPRequest", {}, {::i2c::type_of<::Steamworks::EHTTPMethod>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestContextValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint64_t)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestContextValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestContextValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestNetworkActivityTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint32_t)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestNetworkActivityTimeout)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058fce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestNetworkActivityTimeout", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestHeaderValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::StringW)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestHeaderValue)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18058fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestGetOrPostParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::StringW)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestGetOrPostParameter)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18058f780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestGetOrPostParameter", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SendHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<::Steamworks::SteamAPICall_t>)>(&::Steamworks::SteamGameServerHTTP::SendHTTPRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058f050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SendHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SendHTTPRequestAndStreamResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<::Steamworks::SteamAPICall_t>)>(&::Steamworks::SteamGameServerHTTP::SendHTTPRequestAndStreamResponse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SendHTTPRequestAndStreamResponse", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.DeferHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle)>(&::Steamworks::SteamGameServerHTTP::DeferHTTPRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"DeferHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.PrioritizeHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle)>(&::Steamworks::SteamGameServerHTTP::PrioritizeHTTPRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058ed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"PrioritizeHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPResponseHeaderSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerHTTP::GetHTTPResponseHeaderSize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18058e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseHeaderSize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPResponseHeaderValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamGameServerHTTP::GetHTTPResponseHeaderValue)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18058e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPResponseBodySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerHTTP::GetHTTPResponseBodySize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058e730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseBodySize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPResponseBodyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamGameServerHTTP::GetHTTPResponseBodyData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058e630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPStreamingResponseBodyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint32_t, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamGameServerHTTP::GetHTTPStreamingResponseBodyData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18058ebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPStreamingResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.ReleaseHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle)>(&::Steamworks::SteamGameServerHTTP::ReleaseHTTPRequest)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"ReleaseHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPDownloadProgressPct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<float_t>)>(&::Steamworks::SteamGameServerHTTP::GetHTTPDownloadProgressPct)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058e450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPDownloadProgressPct", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestRawPostBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestRawPostBody)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18058fdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestRawPostBody", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.CreateCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HTTPCookieContainerHandle (*)(bool)>(&::Steamworks::SteamGameServerHTTP::CreateCookieContainer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058e0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"CreateCookieContainer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.ReleaseCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPCookieContainerHandle)>(&::Steamworks::SteamGameServerHTTP::ReleaseCookieContainer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18058edd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"ReleaseCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetCookie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPCookieContainerHandle, ::StringW, ::StringW, ::StringW)>(&::Steamworks::SteamGameServerHTTP::SetCookie)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18058f130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetCookie", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::Steamworks::HTTPCookieContainerHandle)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestCookieContainer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestUserAgentInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestUserAgentInfo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1805900a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestUserAgentInfo", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestRequiresVerifiedCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, bool)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestRequiresVerifiedCertificate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestRequiresVerifiedCertificate", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.SetHTTPRequestAbsoluteTimeoutMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint32_t)>(&::Steamworks::SteamGameServerHTTP::SetHTTPRequestAbsoluteTimeoutMS)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18058f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestAbsoluteTimeoutMS", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerHTTP.GetHTTPRequestWasTimedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<bool>)>(&::Steamworks::SteamGameServerHTTP::GetHTTPRequestWasTimedOut)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18058e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPRequestWasTimedOut", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HTTPRequestHandle Steamworks::SteamGameServerHTTP::CreateHTTPRequest(::Steamworks::EHTTPMethod  eHTTPRequestMethod, ::StringW  pchAbsoluteURL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"CreateHTTPRequest", {}, {::i2c::type_of<::Steamworks::EHTTPMethod>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HTTPRequestHandle>(nullptr, ___internal_method, eHTTPRequestMethod, pchAbsoluteURL);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestContextValue(::Steamworks::HTTPRequestHandle  hRequest, uint64_t  ulContextValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestContextValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, ulContextValue);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestNetworkActivityTimeout(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unTimeoutSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestNetworkActivityTimeout", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, unTimeoutSeconds);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestHeaderValue(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::StringW  pchHeaderValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchHeaderName, pchHeaderValue);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestGetOrPostParameter(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchParamName, ::StringW  pchParamValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestGetOrPostParameter", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchParamName, pchParamValue);
}
inline bool Steamworks::SteamGameServerHTTP::SendHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SendHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pCallHandle);
}
inline bool Steamworks::SteamGameServerHTTP::SendHTTPRequestAndStreamResponse(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SendHTTPRequestAndStreamResponse", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pCallHandle);
}
inline bool Steamworks::SteamGameServerHTTP::DeferHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"DeferHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamGameServerHTTP::PrioritizeHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"PrioritizeHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPResponseHeaderSize(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::by_ref<uint32_t>  unResponseHeaderSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseHeaderSize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchHeaderName, unResponseHeaderSize);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPResponseHeaderValue(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::ArrayW<uint8_t>  pHeaderValueBuffer, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPResponseBodySize(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<uint32_t>  unBodySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseBodySize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, unBodySize);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPResponseBodyData(::Steamworks::HTTPRequestHandle  hRequest, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pBodyDataBuffer, unBufferSize);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPStreamingResponseBodyData(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  cOffset, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPStreamingResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
}
inline bool Steamworks::SteamGameServerHTTP::ReleaseHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"ReleaseHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPDownloadProgressPct(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<float_t>  pflPercentOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPDownloadProgressPct", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pflPercentOut);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestRawPostBody(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchContentType, ::ArrayW<uint8_t>  pubBody, uint32_t  unBodyLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestRawPostBody", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchContentType, pubBody, unBodyLen);
}
inline ::Steamworks::HTTPCookieContainerHandle Steamworks::SteamGameServerHTTP::CreateCookieContainer(bool  bAllowResponsesToModify)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"CreateCookieContainer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HTTPCookieContainerHandle>(nullptr, ___internal_method, bAllowResponsesToModify);
}
inline bool Steamworks::SteamGameServerHTTP::ReleaseCookieContainer(::Steamworks::HTTPCookieContainerHandle  hCookieContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"ReleaseCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hCookieContainer);
}
inline bool Steamworks::SteamGameServerHTTP::SetCookie(::Steamworks::HTTPCookieContainerHandle  hCookieContainer, ::StringW  pchHost, ::StringW  pchUrl, ::StringW  pchCookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetCookie", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hCookieContainer, pchHost, pchUrl, pchCookie);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestCookieContainer(::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::HTTPCookieContainerHandle  hCookieContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, hCookieContainer);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestUserAgentInfo(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchUserAgentInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestUserAgentInfo", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchUserAgentInfo);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestRequiresVerifiedCertificate(::Steamworks::HTTPRequestHandle  hRequest, bool  bRequireVerifiedCertificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestRequiresVerifiedCertificate", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, bRequireVerifiedCertificate);
}
inline bool Steamworks::SteamGameServerHTTP::SetHTTPRequestAbsoluteTimeoutMS(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"SetHTTPRequestAbsoluteTimeoutMS", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, unMilliseconds);
}
inline bool Steamworks::SteamGameServerHTTP::GetHTTPRequestWasTimedOut(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<bool>  pbWasTimedOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerHTTP*>(),
                        {"GetHTTPRequestWasTimedOut", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pbWasTimedOut);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerHTTP::SteamGameServerHTTP()   {
}
