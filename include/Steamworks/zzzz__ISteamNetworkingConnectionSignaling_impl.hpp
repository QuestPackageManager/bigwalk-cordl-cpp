#pragma once
// IWYU pragma private; include "Steamworks/ISteamNetworkingConnectionSignaling.hpp"
#include "Steamworks/zzzz__ISteamNetworkingConnectionSignaling_def.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::ISteamNetworkingConnectionSignaling.SendSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::ISteamNetworkingConnectionSignaling::*)(::Steamworks::HSteamNetConnection, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>, ::System::IntPtr, int32_t)>(&::Steamworks::ISteamNetworkingConnectionSignaling::SendSignal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805aa440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingConnectionSignaling>(),
                        {"SendSignal", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::ISteamNetworkingConnectionSignaling.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::ISteamNetworkingConnectionSignaling::*)()>(&::Steamworks::ISteamNetworkingConnectionSignaling::Release)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingConnectionSignaling>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::ISteamNetworkingConnectionSignaling::SendSignal(::Steamworks::HSteamNetConnection  hConn, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  info, ::System::IntPtr  pMsg, int32_t  cbMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingConnectionSignaling>(),
                        {"SendSignal", {}, {::i2c::type_of<::Steamworks::HSteamNetConnection>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, hConn, info, pMsg, cbMsg);
}
inline void Steamworks::ISteamNetworkingConnectionSignaling::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::ISteamNetworkingConnectionSignaling>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::ISteamNetworkingConnectionSignaling::ISteamNetworkingConnectionSignaling()   {
}
