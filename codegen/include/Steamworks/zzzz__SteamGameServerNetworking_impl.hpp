#pragma once
// IWYU pragma private; include "Steamworks/SteamGameServerNetworking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamGameServerNetworking_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EP2PSend_def.hpp"
#include "Steamworks/zzzz__ESNetSocketConnectionType_def.hpp"
#include "Steamworks/zzzz__P2PSessionState_t_def.hpp"
#include "Steamworks/zzzz__SNetListenSocket_t_def.hpp"
#include "Steamworks/zzzz__SNetSocket_t_def.hpp"
#include "Steamworks/zzzz__SteamIPAddress_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.SendP2PPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::ArrayW<uint8_t>, uint32_t, ::Steamworks::EP2PSend, int32_t)>(&::Steamworks::SteamGameServerNetworking::SendP2PPacket)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180599fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"SendP2PPacket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EP2PSend>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.IsP2PPacketAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint32_t>, int32_t)>(&::Steamworks::SteamGameServerNetworking::IsP2PPacketAvailable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180599a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"IsP2PPacketAvailable", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.ReadP2PPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::CSteamID>, int32_t)>(&::Steamworks::SteamGameServerNetworking::ReadP2PPacket)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180599b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"ReadP2PPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.AcceptP2PSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServerNetworking::AcceptP2PSessionWithUser)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180598b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"AcceptP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.CloseP2PSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID)>(&::Steamworks::SteamGameServerNetworking::CloseP2PSessionWithUser)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180598e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CloseP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.CloseP2PChannelWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, int32_t)>(&::Steamworks::SteamGameServerNetworking::CloseP2PChannelWithUser)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180598d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CloseP2PChannelWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.GetP2PSessionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::by_ref<::Steamworks::P2PSessionState_t>)>(&::Steamworks::SteamGameServerNetworking::GetP2PSessionState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805995d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetP2PSessionState", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::Steamworks::P2PSessionState_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.AllowP2PPacketRelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::Steamworks::SteamGameServerNetworking::AllowP2PPacketRelay)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180598c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"AllowP2PPacketRelay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.CreateListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetListenSocket_t (*)(int32_t, ::Steamworks::SteamIPAddress_t, uint16_t, bool)>(&::Steamworks::SteamGameServerNetworking::CreateListenSocket)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180599010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CreateListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.CreateP2PConnectionSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetSocket_t (*)(::Steamworks::CSteamID, int32_t, int32_t, bool)>(&::Steamworks::SteamGameServerNetworking::CreateP2PConnectionSocket)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180599140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CreateP2PConnectionSocket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.CreateConnectionSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::SNetSocket_t (*)(::Steamworks::SteamIPAddress_t, uint16_t, int32_t)>(&::Steamworks::SteamGameServerNetworking::CreateConnectionSocket)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180598f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CreateConnectionSocket", {}, {::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.DestroySocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, bool)>(&::Steamworks::SteamGameServerNetworking::DestroySocket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180599330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"DestroySocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.DestroyListenSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, bool)>(&::Steamworks::SteamGameServerNetworking::DestroyListenSocket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180599250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"DestroyListenSocket", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.SendDataOnSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::ArrayW<uint8_t>, uint32_t, bool)>(&::Steamworks::SteamGameServerNetworking::SendDataOnSocket)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180599e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"SendDataOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.IsDataAvailableOnSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerNetworking::IsDataAvailableOnSocket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180599890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"IsDataAvailableOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.RetrieveDataFromSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>)>(&::Steamworks::SteamGameServerNetworking::RetrieveDataFromSocket)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180599c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"RetrieveDataFromSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.IsDataAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::SNetSocket_t>)>(&::Steamworks::SteamGameServerNetworking::IsDataAvailable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180599970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"IsDataAvailable", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.RetrieveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::ArrayW<uint8_t>, uint32_t, ::by_ref<uint32_t>, ::by_ref<::Steamworks::SNetSocket_t>)>(&::Steamworks::SteamGameServerNetworking::RetrieveData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180599d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"RetrieveData", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.GetSocketInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetSocket_t, ::by_ref<::Steamworks::CSteamID>, ::by_ref<int32_t>, ::by_ref<::Steamworks::SteamIPAddress_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamGameServerNetworking::GetSocketInfo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180599780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.GetListenSocketInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::SNetListenSocket_t, ::by_ref<::Steamworks::SteamIPAddress_t>, ::by_ref<uint16_t>)>(&::Steamworks::SteamGameServerNetworking::GetListenSocketInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180599410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetListenSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.GetSocketConnectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESNetSocketConnectionType (*)(::Steamworks::SNetSocket_t)>(&::Steamworks::SteamGameServerNetworking::GetSocketConnectionType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805996b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetSocketConnectionType", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamGameServerNetworking.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Steamworks::SNetSocket_t)>(&::Steamworks::SteamGameServerNetworking::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180599500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetMaxPacketSize", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamGameServerNetworking::SendP2PPacket(::Steamworks::CSteamID  steamIDRemote, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, ::Steamworks::EP2PSend  eP2PSendType, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"SendP2PPacket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EP2PSend>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
}
inline bool Steamworks::SteamGameServerNetworking::IsP2PPacketAvailable(::by_ref<uint32_t>  pcubMsgSize, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"IsP2PPacketAvailable", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pcubMsgSize, nChannel);
}
inline bool Steamworks::SteamGameServerNetworking::ReadP2PPacket(::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::CSteamID>  psteamIDRemote, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"ReadP2PPacket", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
}
inline bool Steamworks::SteamGameServerNetworking::AcceptP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"AcceptP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote);
}
inline bool Steamworks::SteamGameServerNetworking::CloseP2PSessionWithUser(::Steamworks::CSteamID  steamIDRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CloseP2PSessionWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote);
}
inline bool Steamworks::SteamGameServerNetworking::CloseP2PChannelWithUser(::Steamworks::CSteamID  steamIDRemote, int32_t  nChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CloseP2PChannelWithUser", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote, nChannel);
}
inline bool Steamworks::SteamGameServerNetworking::GetP2PSessionState(::Steamworks::CSteamID  steamIDRemote, ::by_ref<::Steamworks::P2PSessionState_t>  pConnectionState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetP2PSessionState", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::by_ref<::Steamworks::P2PSessionState_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamIDRemote, pConnectionState);
}
inline bool Steamworks::SteamGameServerNetworking::AllowP2PPacketRelay(bool  bAllow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"AllowP2PPacketRelay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bAllow);
}
inline ::Steamworks::SNetListenSocket_t Steamworks::SteamGameServerNetworking::CreateListenSocket(int32_t  nVirtualP2PPort, ::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, bool  bAllowUseOfPacketRelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CreateListenSocket", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetListenSocket_t>(nullptr, ___internal_method, nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}
inline ::Steamworks::SNetSocket_t Steamworks::SteamGameServerNetworking::CreateP2PConnectionSocket(::Steamworks::CSteamID  steamIDTarget, int32_t  nVirtualPort, int32_t  nTimeoutSec, bool  bAllowUseOfPacketRelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CreateP2PConnectionSocket", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetSocket_t>(nullptr, ___internal_method, steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}
inline ::Steamworks::SNetSocket_t Steamworks::SteamGameServerNetworking::CreateConnectionSocket(::Steamworks::SteamIPAddress_t  nIP, uint16_t  nPort, int32_t  nTimeoutSec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"CreateConnectionSocket", {}, {::i2c::type_of<::Steamworks::SteamIPAddress_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::SNetSocket_t>(nullptr, ___internal_method, nIP, nPort, nTimeoutSec);
}
inline bool Steamworks::SteamGameServerNetworking::DestroySocket(::Steamworks::SNetSocket_t  hSocket, bool  bNotifyRemoteEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"DestroySocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, bNotifyRemoteEnd);
}
inline bool Steamworks::SteamGameServerNetworking::DestroyListenSocket(::Steamworks::SNetListenSocket_t  hSocket, bool  bNotifyRemoteEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"DestroyListenSocket", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, bNotifyRemoteEnd);
}
inline bool Steamworks::SteamGameServerNetworking::SendDataOnSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubData, uint32_t  cubData, bool  bReliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"SendDataOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pubData, cubData, bReliable);
}
inline bool Steamworks::SteamGameServerNetworking::IsDataAvailableOnSocket(::Steamworks::SNetSocket_t  hSocket, ::by_ref<uint32_t>  pcubMsgSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"IsDataAvailableOnSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pcubMsgSize);
}
inline bool Steamworks::SteamGameServerNetworking::RetrieveDataFromSocket(::Steamworks::SNetSocket_t  hSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"RetrieveDataFromSocket", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pubDest, cubDest, pcubMsgSize);
}
inline bool Steamworks::SteamGameServerNetworking::IsDataAvailable(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"IsDataAvailable", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hListenSocket, pcubMsgSize, phSocket);
}
inline bool Steamworks::SteamGameServerNetworking::RetrieveData(::Steamworks::SNetListenSocket_t  hListenSocket, ::ArrayW<uint8_t>  pubDest, uint32_t  cubDest, ::by_ref<uint32_t>  pcubMsgSize, ::by_ref<::Steamworks::SNetSocket_t>  phSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"RetrieveData", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SNetSocket_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}
inline bool Steamworks::SteamGameServerNetworking::GetSocketInfo(::Steamworks::SNetSocket_t  hSocket, ::by_ref<::Steamworks::CSteamID>  pSteamIDRemote, ::by_ref<int32_t>  peSocketStatus, ::by_ref<::Steamworks::SteamIPAddress_t>  punIPRemote, ::by_ref<uint16_t>  punPortRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::CSteamID>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}
inline bool Steamworks::SteamGameServerNetworking::GetListenSocketInfo(::Steamworks::SNetListenSocket_t  hListenSocket, ::by_ref<::Steamworks::SteamIPAddress_t>  pnIP, ::by_ref<uint16_t>  pnPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetListenSocketInfo", {}, {::i2c::type_of<::Steamworks::SNetListenSocket_t>(), ::i2c::type_of<::by_ref<::Steamworks::SteamIPAddress_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hListenSocket, pnIP, pnPort);
}
inline ::Steamworks::ESNetSocketConnectionType Steamworks::SteamGameServerNetworking::GetSocketConnectionType(::Steamworks::SNetSocket_t  hSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetSocketConnectionType", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESNetSocketConnectionType>(nullptr, ___internal_method, hSocket);
}
inline int32_t Steamworks::SteamGameServerNetworking::GetMaxPacketSize(::Steamworks::SNetSocket_t  hSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamGameServerNetworking*>(),
                        {"GetMaxPacketSize", {}, {::i2c::type_of<::Steamworks::SNetSocket_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hSocket);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamGameServerNetworking::SteamGameServerNetworking()   {
}
