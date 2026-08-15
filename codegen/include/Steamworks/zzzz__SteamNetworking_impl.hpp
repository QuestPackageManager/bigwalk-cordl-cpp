#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamNetworking_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EP2PSend_def.hpp"
#include "Steamworks/zzzz__ESNetSocketConnectionType_def.hpp"
#include "Steamworks/zzzz__P2PSessionState_t_def.hpp"
#include "Steamworks/zzzz__SNetListenSocket_t_def.hpp"
#include "Steamworks/zzzz__SNetSocket_t_def.hpp"
#include "Steamworks/zzzz__SteamIPAddress_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworking.SendP2PPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::ArrayW<uint8_t>, uint32_t, ::Steamworks::EP2PSend, int32_t)>(&::Steamworks::SteamNetworking::SendP2PPacket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"SendP2PPacket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EP2PSend>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.IsP2PPacketAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint32_t>, int32_t)>(&::Steamworks::SteamNetworking::IsP2PPacketAvailable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b7260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"IsP2PPacketAvailable", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.ReadP2PPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::CSteamID>, int32_t)>(&::Steamworks::SteamNetworking::ReadP2PPacket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b72a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"ReadP2PPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.AcceptP2PSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamNetworking::AcceptP2PSessionWithUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"AcceptP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.CloseP2PSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamNetworking::CloseP2PSessionWithUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CloseP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.CloseP2PChannelWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamNetworking::CloseP2PChannelWithUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CloseP2PChannelWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.GetP2PSessionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::by_ref<::Steamworks::P2PSessionState_t>)>(&::Steamworks::SteamNetworking::GetP2PSessionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b70c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetP2PSessionState", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::Steamworks::P2PSessionState_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.AllowP2PPacketRelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamNetworking::AllowP2PPacketRelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"AllowP2PPacketRelay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.CreateListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetListenSocket_t (*)(int32_t, ::Steamworks::SteamIPAddress_t, uint16_t, bool)>(&::Steamworks::SteamNetworking::CreateListenSocket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b6ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CreateListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.CreateP2PConnectionSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetSocket_t (*)(::Steamworks::CSteamID, int32_t, int32_t, bool)>(&::Steamworks::SteamNetworking::CreateP2PConnectionSocket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b6f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CreateP2PConnectionSocket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.CreateConnectionSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetSocket_t (*)(::Steamworks::SteamIPAddress_t, uint16_t, int32_t)>(&::Steamworks::SteamNetworking::CreateConnectionSocket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b6e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CreateConnectionSocket", {}, {::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.DestroySocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, bool)>(&::Steamworks::SteamNetworking::DestroySocket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"DestroySocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.DestroyListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, bool)>(&::Steamworks::SteamNetworking::DestroyListenSocket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b6fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"DestroyListenSocket", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.SendDataOnSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::ArrayW<uint8_t>, uint32_t, bool)>(&::Steamworks::SteamNetworking::SendDataOnSocket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"SendDataOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.IsDataAvailableOnSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamNetworking::IsDataAvailableOnSocket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b71c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"IsDataAvailableOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.RetrieveDataFromSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamNetworking::RetrieveDataFromSocket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805b7320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"RetrieveDataFromSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.IsDataAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::SNetSocket_t>)>(&::Steamworks::SteamNetworking::IsDataAvailable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b7200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"IsDataAvailable", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.RetrieveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::SNetSocket_t>)>(&::Steamworks::SteamNetworking::RetrieveData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b7390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"RetrieveData", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.GetSocketInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::by_ref<::Steamworks::CSteamID>, ::by_ref<int32_t>, ::by_ref<::Steamworks::SteamIPAddress_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamNetworking::GetSocketInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b7140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.GetListenSocketInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::by_ref<::Steamworks::SteamIPAddress_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamNetworking::GetListenSocketInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b7030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetListenSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.GetSocketConnectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESNetSocketConnectionType (*)(::Steamworks::SNetSocket_t)>(&::Steamworks::SteamNetworking::GetSocketConnectionType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetSocketConnectionType", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworking.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SNetSocket_t)>(&::Steamworks::SteamNetworking::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805b7090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetMaxPacketSize", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamNetworking::SendP2PPacket(::Steamworks::CSteamID  steamIDRemote, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, ::Steamworks::EP2PSend  eP2PSendType, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"SendP2PPacket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EP2PSend>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
}
inline bool Steamworks::SteamNetworking::IsP2PPacketAvailable(::by_ref<uint32_t>  pcubMsgSize, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"IsP2PPacketAvailable", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pcubMsgSize, nChannel);
}
inline bool Steamworks::SteamNetworking::ReadP2PPacket(::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::CSteamID>  psteamIDRemote, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"ReadP2PPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
}
inline bool Steamworks::SteamNetworking::AcceptP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"AcceptP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote);
}
inline bool Steamworks::SteamNetworking::CloseP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CloseP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote);
}
inline bool Steamworks::SteamNetworking::CloseP2PChannelWithUser(::Steamworks::CSteamID  steamIDRemote, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CloseP2PChannelWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote, nChannel);
}
inline bool Steamworks::SteamNetworking::GetP2PSessionState(::Steamworks::CSteamID  steamIDRemote, ::by_ref<::Steamworks::P2PSessionState_t>  pConnectionState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetP2PSessionState", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::Steamworks::P2PSessionState_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote, pConnectionState);
}
inline bool Steamworks::SteamNetworking::AllowP2PPacketRelay(bool  bAllow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"AllowP2PPacketRelay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bAllow);
}
inline ::Steamworks::SNetListenSocket_t Steamworks::SteamNetworking::CreateListenSocket(int32_t  nVirtualP2PPort, ::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, bool  bAllowUseOfPacketRelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CreateListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetListenSocket_t>(nullptr, ___internal_method, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}
inline ::Steamworks::SNetSocket_t Steamworks::SteamNetworking::CreateP2PConnectionSocket(::Steamworks::CSteamID  steamIDTarget, int32_t  nVirtualPort, int32_t  nTimeoutSec, bool  bAllowUseOfPacketRelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CreateP2PConnectionSocket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetSocket_t>(nullptr, ___internal_method, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}
inline ::Steamworks::SNetSocket_t Steamworks::SteamNetworking::CreateConnectionSocket(::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, int32_t  nTimeoutSec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"CreateConnectionSocket", {}, {::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetSocket_t>(nullptr, ___internal_method, nIP, nPort, nTimeoutSec);
}
inline bool Steamworks::SteamNetworking::DestroySocket(::Steamworks::SNetSocket_t  hSocket, bool  bNotifyRemoteEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"DestroySocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, bNotifyRemoteEnd);
}
inline bool Steamworks::SteamNetworking::DestroyListenSocket(::Steamworks::SNetListenSocket_t  hSocket, bool  bNotifyRemoteEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"DestroyListenSocket", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, bNotifyRemoteEnd);
}
inline bool Steamworks::SteamNetworking::SendDataOnSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, bool  bReliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"SendDataOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pubData, cubData, bReliable);
}
inline bool Steamworks::SteamNetworking::IsDataAvailableOnSocket(::Steamworks::SNetSocket_t  hSocket, ::by_ref<uint32_t>  pcubMsgSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"IsDataAvailableOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pcubMsgSize);
}
inline bool Steamworks::SteamNetworking::RetrieveDataFromSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"RetrieveDataFromSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pubDest, cubDest, pcubMsgSize);
}
inline bool Steamworks::SteamNetworking::IsDataAvailable(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"IsDataAvailable", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hListenSocket, pcubMsgSize, phSocket);
}
inline bool Steamworks::SteamNetworking::RetrieveData(::Steamworks::SNetListenSocket_t  hListenSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"RetrieveData", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}
inline bool Steamworks::SteamNetworking::GetSocketInfo(::Steamworks::SNetSocket_t  hSocket, ::by_ref<::Steamworks::CSteamID>  pSteamIDRemote, ::by_ref<int32_t>  peSocketStatus, ::by_ref<::Steamworks::SteamIPAddress_t>  punIPRemote, ::by_ref<uint16_t>  punPortRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}
inline bool Steamworks::SteamNetworking::GetListenSocketInfo(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<::Steamworks::SteamIPAddress_t>  pnIP, ::by_ref<uint16_t>  pnPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetListenSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hListenSocket, pnIP, pnPort);
}
inline ::Steamworks::ESNetSocketConnectionType Steamworks::SteamNetworking::GetSocketConnectionType(::Steamworks::SNetSocket_t  hSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetSocketConnectionType", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESNetSocketConnectionType>(nullptr, ___internal_method, hSocket);
}
inline int32_t Steamworks::SteamNetworking::GetMaxPacketSize(::Steamworks::SNetSocket_t  hSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworking*>(),
                        {"GetMaxPacketSize", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hSocket);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworking::SteamNetworking()   {
}
