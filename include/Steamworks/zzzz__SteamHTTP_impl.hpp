#pragma once
// IWYU pragma private; include "Steamworks/SteamHTTP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamHTTP_def.hpp"
#include "Steamworks/zzzz__EHTTPMethod_def.hpp"
#include "Steamworks/zzzz__HTTPCookieContainerHandle_def.hpp"
#include "Steamworks/zzzz__HTTPRequestHandle_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamHTTP.CreateHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HTTPRequestHandle (*)(::Steamworks::EHTTPMethod, ::StringW)>(&::Steamworks::SteamHTTP::CreateHTTPRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805add00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"CreateHTTPRequest", {}, {::i2c::type_of<::Steamworks::EHTTPMethod>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestContextValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint64_t)>(&::Steamworks::SteamHTTP::SetHTTPRequestContextValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestContextValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestNetworkActivityTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint32_t)>(&::Steamworks::SteamHTTP::SetHTTPRequestNetworkActivityTimeout)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestNetworkActivityTimeout", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestHeaderValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::StringW)>(&::Steamworks::SteamHTTP::SetHTTPRequestHeaderValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805ae700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestGetOrPostParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::StringW)>(&::Steamworks::SteamHTTP::SetHTTPRequestGetOrPostParameter)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805ae580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestGetOrPostParameter", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SendHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<::Steamworks::SteamAPICall_t>)>(&::Steamworks::SteamHTTP::SendHTTPRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SendHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SendHTTPRequestAndStreamResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<::Steamworks::SteamAPICall_t>)>(&::Steamworks::SteamHTTP::SendHTTPRequestAndStreamResponse)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SendHTTPRequestAndStreamResponse", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.DeferHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle)>(&::Steamworks::SteamHTTP::DeferHTTPRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805adde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"DeferHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.PrioritizeHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle)>(&::Steamworks::SteamHTTP::PrioritizeHTTPRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ae1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"PrioritizeHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPResponseHeaderSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::by_ref<uint32_t>)>(&::Steamworks::SteamHTTP::GetHTTPResponseHeaderSize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805adf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseHeaderSize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPResponseHeaderValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamHTTP::GetHTTPResponseHeaderValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805ae030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPResponseBodySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<uint32_t>)>(&::Steamworks::SteamHTTP::GetHTTPResponseBodySize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805adef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseBodySize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPResponseBodyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamHTTP::GetHTTPResponseBodyData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805ade90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPStreamingResponseBodyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint32_t, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamHTTP::GetHTTPStreamingResponseBodyData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ae140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPStreamingResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.ReleaseHTTPRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle)>(&::Steamworks::SteamHTTP::ReleaseHTTPRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ae210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"ReleaseHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPDownloadProgressPct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<float_t>)>(&::Steamworks::SteamHTTP::GetHTTPDownloadProgressPct)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ade10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPDownloadProgressPct", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestRawPostBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW, ::ArrayW<uint8_t>, uint32_t)>(&::Steamworks::SteamHTTP::SetHTTPRequestRawPostBody)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805ae8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestRawPostBody", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.CreateCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HTTPCookieContainerHandle (*)(bool)>(&::Steamworks::SteamHTTP::CreateCookieContainer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805adcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"CreateCookieContainer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.ReleaseCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPCookieContainerHandle)>(&::Steamworks::SteamHTTP::ReleaseCookieContainer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805ae1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"ReleaseCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetCookie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPCookieContainerHandle, ::StringW, ::StringW, ::StringW)>(&::Steamworks::SteamHTTP::SetCookie)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805ae2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetCookie", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestCookieContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::Steamworks::HTTPCookieContainerHandle)>(&::Steamworks::SteamHTTP::SetHTTPRequestCookieContainer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestUserAgentInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::StringW)>(&::Steamworks::SteamHTTP::SetHTTPRequestUserAgentInfo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805aea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestUserAgentInfo", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestRequiresVerifiedCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, bool)>(&::Steamworks::SteamHTTP::SetHTTPRequestRequiresVerifiedCertificate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestRequiresVerifiedCertificate", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.SetHTTPRequestAbsoluteTimeoutMS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, uint32_t)>(&::Steamworks::SteamHTTP::SetHTTPRequestAbsoluteTimeoutMS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ae4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestAbsoluteTimeoutMS", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamHTTP.GetHTTPRequestWasTimedOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HTTPRequestHandle, ::by_ref<bool>)>(&::Steamworks::SteamHTTP::GetHTTPRequestWasTimedOut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805ade50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPRequestWasTimedOut", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HTTPRequestHandle Steamworks::SteamHTTP::CreateHTTPRequest(::Steamworks::EHTTPMethod  eHTTPRequestMethod, ::StringW  pchAbsoluteURL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"CreateHTTPRequest", {}, {::i2c::type_of<::Steamworks::EHTTPMethod>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HTTPRequestHandle>(nullptr, ___internal_method, eHTTPRequestMethod, pchAbsoluteURL);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestContextValue(::Steamworks::HTTPRequestHandle  hRequest, uint64_t  ulContextValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestContextValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, ulContextValue);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestNetworkActivityTimeout(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unTimeoutSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestNetworkActivityTimeout", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, unTimeoutSeconds);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestHeaderValue(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::StringW  pchHeaderValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchHeaderName, pchHeaderValue);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestGetOrPostParameter(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchParamName, ::StringW  pchParamValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestGetOrPostParameter", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchParamName, pchParamValue);
}
inline bool Steamworks::SteamHTTP::SendHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SendHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pCallHandle);
}
inline bool Steamworks::SteamHTTP::SendHTTPRequestAndStreamResponse(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<::Steamworks::SteamAPICall_t>  pCallHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SendHTTPRequestAndStreamResponse", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<::Steamworks::SteamAPICall_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pCallHandle);
}
inline bool Steamworks::SteamHTTP::DeferHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"DeferHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamHTTP::PrioritizeHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"PrioritizeHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamHTTP::GetHTTPResponseHeaderSize(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::by_ref<uint32_t>  unResponseHeaderSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseHeaderSize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchHeaderName, unResponseHeaderSize);
}
inline bool Steamworks::SteamHTTP::GetHTTPResponseHeaderValue(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchHeaderName, ::ArrayW<uint8_t>  pHeaderValueBuffer, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseHeaderValue", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}
inline bool Steamworks::SteamHTTP::GetHTTPResponseBodySize(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<uint32_t>  unBodySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseBodySize", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, unBodySize);
}
inline bool Steamworks::SteamHTTP::GetHTTPResponseBodyData(::Steamworks::HTTPRequestHandle  hRequest, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pBodyDataBuffer, unBufferSize);
}
inline bool Steamworks::SteamHTTP::GetHTTPStreamingResponseBodyData(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  cOffset, ::ArrayW<uint8_t>  pBodyDataBuffer, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPStreamingResponseBodyData", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
}
inline bool Steamworks::SteamHTTP::ReleaseHTTPRequest(::Steamworks::HTTPRequestHandle  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"ReleaseHTTPRequest", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamHTTP::GetHTTPDownloadProgressPct(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<float_t>  pflPercentOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPDownloadProgressPct", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pflPercentOut);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestRawPostBody(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchContentType, ::ArrayW<uint8_t>  pubBody, uint32_t  unBodyLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestRawPostBody", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchContentType, pubBody, unBodyLen);
}
inline ::Steamworks::HTTPCookieContainerHandle Steamworks::SteamHTTP::CreateCookieContainer(bool  bAllowResponsesToModify)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"CreateCookieContainer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HTTPCookieContainerHandle>(nullptr, ___internal_method, bAllowResponsesToModify);
}
inline bool Steamworks::SteamHTTP::ReleaseCookieContainer(::Steamworks::HTTPCookieContainerHandle  hCookieContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"ReleaseCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hCookieContainer);
}
inline bool Steamworks::SteamHTTP::SetCookie(::Steamworks::HTTPCookieContainerHandle  hCookieContainer, ::StringW  pchHost, ::StringW  pchUrl, ::StringW  pchCookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetCookie", {}, {::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hCookieContainer, pchHost, pchUrl, pchCookie);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestCookieContainer(::Steamworks::HTTPRequestHandle  hRequest, ::Steamworks::HTTPCookieContainerHandle  hCookieContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestCookieContainer", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::Steamworks::HTTPCookieContainerHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, hCookieContainer);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestUserAgentInfo(::Steamworks::HTTPRequestHandle  hRequest, ::StringW  pchUserAgentInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestUserAgentInfo", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pchUserAgentInfo);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestRequiresVerifiedCertificate(::Steamworks::HTTPRequestHandle  hRequest, bool  bRequireVerifiedCertificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestRequiresVerifiedCertificate", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, bRequireVerifiedCertificate);
}
inline bool Steamworks::SteamHTTP::SetHTTPRequestAbsoluteTimeoutMS(::Steamworks::HTTPRequestHandle  hRequest, uint32_t  unMilliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"SetHTTPRequestAbsoluteTimeoutMS", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, unMilliseconds);
}
inline bool Steamworks::SteamHTTP::GetHTTPRequestWasTimedOut(::Steamworks::HTTPRequestHandle  hRequest, ::by_ref<bool>  pbWasTimedOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamHTTP*>(),
                        {"GetHTTPRequestWasTimedOut", {}, {::i2c::type_of<::Steamworks::HTTPRequestHandle>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest, pbWasTimedOut);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamHTTP::SteamHTTP()   {
}
