#pragma once
// IWYU pragma private; include "Steamworks/SteamMatchmakingServers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamMatchmakingServers_def.hpp"
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__HServerListRequest_def.hpp"
#include "Steamworks/zzzz__HServerQuery_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingPingResponse_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingPlayersResponse_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingRulesResponse_def.hpp"
#include "Steamworks/zzzz__ISteamMatchmakingServerListResponse_def.hpp"
#include "Steamworks/zzzz__MatchMakingKeyValuePair_t_def.hpp"
#include "Steamworks/zzzz__gameserveritem_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RequestInternetServerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::Steamworks::AppId_t, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>, uint32_t, ::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::SteamMatchmakingServers::RequestInternetServerList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b1c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestInternetServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RequestLANServerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::Steamworks::AppId_t, ::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::SteamMatchmakingServers::RequestLANServerList)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b1ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestLANServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RequestFriendsServerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::Steamworks::AppId_t, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>, uint32_t, ::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::SteamMatchmakingServers::RequestFriendsServerList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b1ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestFriendsServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RequestFavoritesServerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::Steamworks::AppId_t, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>, uint32_t, ::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::SteamMatchmakingServers::RequestFavoritesServerList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b1a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestFavoritesServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RequestHistoryServerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::Steamworks::AppId_t, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>, uint32_t, ::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::SteamMatchmakingServers::RequestHistoryServerList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b1b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestHistoryServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RequestSpectatorServerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerListRequest (*)(::Steamworks::AppId_t, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>, uint32_t, ::Steamworks::ISteamMatchmakingServerListResponse*)>(&::Steamworks::SteamMatchmakingServers::RequestSpectatorServerList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b1d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestSpectatorServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.ReleaseRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HServerListRequest)>(&::Steamworks::SteamMatchmakingServers::ReleaseRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"ReleaseRequest", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.GetServerDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::gameserveritem_t* (*)(::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::SteamMatchmakingServers::GetServerDetails)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805b17a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"GetServerDetails", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.CancelQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HServerListRequest)>(&::Steamworks::SteamMatchmakingServers::CancelQuery)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b16f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"CancelQuery", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RefreshQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HServerListRequest)>(&::Steamworks::SteamMatchmakingServers::RefreshQuery)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b1960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RefreshQuery", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.IsRefreshing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::HServerListRequest)>(&::Steamworks::SteamMatchmakingServers::IsRefreshing)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b1840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"IsRefreshing", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.GetServerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::HServerListRequest)>(&::Steamworks::SteamMatchmakingServers::GetServerCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b1760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"GetServerCount", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.RefreshServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HServerListRequest, int32_t)>(&::Steamworks::SteamMatchmakingServers::RefreshServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b19a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RefreshServer", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.PingServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerQuery (*)(uint32_t, uint16_t, ::Steamworks::ISteamMatchmakingPingResponse*)>(&::Steamworks::SteamMatchmakingServers::PingServer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"PingServer", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.PlayerDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerQuery (*)(uint32_t, uint16_t, ::Steamworks::ISteamMatchmakingPlayersResponse*)>(&::Steamworks::SteamMatchmakingServers::PlayerDetails)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"PlayerDetails", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.ServerRules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::HServerQuery (*)(uint32_t, uint16_t, ::Steamworks::ISteamMatchmakingRulesResponse*)>(&::Steamworks::SteamMatchmakingServers::ServerRules)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b1da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"ServerRules", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamMatchmakingServers.CancelServerQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Steamworks::HServerQuery)>(&::Steamworks::SteamMatchmakingServers::CancelServerQuery)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b1730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"CancelServerQuery", {}, {::i2c::type_of<::Steamworks::HServerQuery>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::HServerListRequest Steamworks::SteamMatchmakingServers::RequestInternetServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestInternetServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, iApp, ppchFilters, nFilters, pRequestServersResponse);
}
inline ::Steamworks::HServerListRequest Steamworks::SteamMatchmakingServers::RequestLANServerList(::Steamworks::AppId_t  iApp, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestLANServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, iApp, pRequestServersResponse);
}
inline ::Steamworks::HServerListRequest Steamworks::SteamMatchmakingServers::RequestFriendsServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestFriendsServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, iApp, ppchFilters, nFilters, pRequestServersResponse);
}
inline ::Steamworks::HServerListRequest Steamworks::SteamMatchmakingServers::RequestFavoritesServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestFavoritesServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, iApp, ppchFilters, nFilters, pRequestServersResponse);
}
inline ::Steamworks::HServerListRequest Steamworks::SteamMatchmakingServers::RequestHistoryServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestHistoryServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, iApp, ppchFilters, nFilters, pRequestServersResponse);
}
inline ::Steamworks::HServerListRequest Steamworks::SteamMatchmakingServers::RequestSpectatorServerList(::Steamworks::AppId_t  iApp, ::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>  ppchFilters, uint32_t  nFilters, ::Steamworks::ISteamMatchmakingServerListResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RequestSpectatorServerList", {}, {::i2c::type_of<::Steamworks::AppId_t>(), ::i2c::type_of<::ArrayW<::Steamworks::MatchMakingKeyValuePair_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingServerListResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerListRequest>(nullptr, ___internal_method, iApp, ppchFilters, nFilters, pRequestServersResponse);
}
inline void Steamworks::SteamMatchmakingServers::ReleaseRequest(::Steamworks::HServerListRequest  hServerListRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"ReleaseRequest", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hServerListRequest);
}
inline ::Steamworks::gameserveritem_t* Steamworks::SteamMatchmakingServers::GetServerDetails(::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"GetServerDetails", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::gameserveritem_t*>(nullptr, ___internal_method, hRequest, iServer);
}
inline void Steamworks::SteamMatchmakingServers::CancelQuery(::Steamworks::HServerListRequest  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"CancelQuery", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hRequest);
}
inline void Steamworks::SteamMatchmakingServers::RefreshQuery(::Steamworks::HServerListRequest  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RefreshQuery", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hRequest);
}
inline bool Steamworks::SteamMatchmakingServers::IsRefreshing(::Steamworks::HServerListRequest  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"IsRefreshing", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hRequest);
}
inline int32_t Steamworks::SteamMatchmakingServers::GetServerCount(::Steamworks::HServerListRequest  hRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"GetServerCount", {}, {::i2c::type_of<::Steamworks::HServerListRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hRequest);
}
inline void Steamworks::SteamMatchmakingServers::RefreshServer(::Steamworks::HServerListRequest  hRequest, int32_t  iServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"RefreshServer", {}, {::i2c::type_of<::Steamworks::HServerListRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hRequest, iServer);
}
inline ::Steamworks::HServerQuery Steamworks::SteamMatchmakingServers::PingServer(uint32_t  unIP, uint16_t  usPort, ::Steamworks::ISteamMatchmakingPingResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"PingServer", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerQuery>(nullptr, ___internal_method, unIP, usPort, pRequestServersResponse);
}
inline ::Steamworks::HServerQuery Steamworks::SteamMatchmakingServers::PlayerDetails(uint32_t  unIP, uint16_t  usPort, ::Steamworks::ISteamMatchmakingPlayersResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"PlayerDetails", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingPlayersResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerQuery>(nullptr, ___internal_method, unIP, usPort, pRequestServersResponse);
}
inline ::Steamworks::HServerQuery Steamworks::SteamMatchmakingServers::ServerRules(uint32_t  unIP, uint16_t  usPort, ::Steamworks::ISteamMatchmakingRulesResponse*  pRequestServersResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"ServerRules", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Steamworks::ISteamMatchmakingRulesResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::HServerQuery>(nullptr, ___internal_method, unIP, usPort, pRequestServersResponse);
}
inline void Steamworks::SteamMatchmakingServers::CancelServerQuery(::Steamworks::HServerQuery  hServerQuery)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamMatchmakingServers*>(),
                        {"CancelServerQuery", {}, {::i2c::type_of<::Steamworks::HServerQuery>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hServerQuery);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamMatchmakingServers::SteamMatchmakingServers()   {
}
