#pragma once
// IWYU pragma private; include "Steamworks/ISteamNetworkingSignalingRecvContext.hpp"
#include "Steamworks/zzzz__ISteamNetworkingSignalingRecvContext_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::ISteamNetworkingSignalingRecvContext.OnConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Steamworks::ISteamNetworkingSignalingRecvContext::*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t)>(&::Steamworks::ISteamNetworkingSignalingRecvContext::OnConnectRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805aa470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingSignalingRecvContext>(),
                        {"OnConnectRequest", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamNetworkingSignalingRecvContext.SendRejectionSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamNetworkingSignalingRecvContext::*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::System::IntPtr, int32_t)>(&::Steamworks::ISteamNetworkingSignalingRecvContext::SendRejectionSignal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805aa4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingSignalingRecvContext>(),
                        {"SendRejectionSignal", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Steamworks::ISteamNetworkingSignalingRecvContext::OnConnectRequest(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetworkingIdentity>  identityPeer, int32_t  nLocalVirtualPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingSignalingRecvContext>(),
                        {"OnConnectRequest", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method, hConn, identityPeer, nLocalVirtualPort);
}
inline void Steamworks::ISteamNetworkingSignalingRecvContext::SendRejectionSignal(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityPeer, ::System::IntPtr  pMsg, int32_t  cbMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingSignalingRecvContext>(),
                        {"SendRejectionSignal", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, identityPeer, pMsg, cbMsg);
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamNetworkingSignalingRecvContext::ISteamNetworkingSignalingRecvContext()   {
}
