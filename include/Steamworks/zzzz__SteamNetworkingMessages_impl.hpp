#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingMessages.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingMessages_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_def.hpp"
#include "Steamworks/zzzz__SteamNetConnectionRealTimeStatus_t_def.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessages.SendMessageToUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::EResult (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::System::IntPtr, uint32_t, int32_t, int32_t)>(&::Steamworks::SteamNetworkingMessages::SendMessageToUser)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805b4f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"SendMessageToUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessages.ReceiveMessagesOnChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<::System::IntPtr>, int32_t)>(&::Steamworks::SteamNetworkingMessages::ReceiveMessagesOnChannel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b4f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"ReceiveMessagesOnChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessages.AcceptSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamNetworkingMessages::AcceptSessionWithUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"AcceptSessionWithUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessages.CloseSessionWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>)>(&::Steamworks::SteamNetworkingMessages::CloseSessionWithUser)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805b4e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"CloseSessionWithUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessages.CloseChannelWithUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, int32_t)>(&::Steamworks::SteamNetworkingMessages::CloseChannelWithUser)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805b4e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"CloseChannelWithUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamNetworkingMessages.GetSessionConnectionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::ESteamNetworkingConnectionState (*)(::by_ref<::Steamworks::SteamNetworkingIdentity>, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>)>(&::Steamworks::SteamNetworkingMessages::GetSessionConnectionInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805b4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"GetSessionConnectionInfo", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Steamworks::EResult Steamworks::SteamNetworkingMessages::SendMessageToUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, ::System::IntPtr  pubData, uint32_t  cubData, int32_t  nSendFlags, int32_t  nRemoteChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"SendMessageToUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::EResult>(nullptr, ___internal_method, identityRemote, pubData, cubData, nSendFlags, nRemoteChannel);
}
inline int32_t Steamworks::SteamNetworkingMessages::ReceiveMessagesOnChannel(int32_t  nLocalChannel, ::ArrayW<::System::IntPtr>  ppOutMessages, int32_t  nMaxMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"ReceiveMessagesOnChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, nLocalChannel, ppOutMessages, nMaxMessages);
}
inline bool Steamworks::SteamNetworkingMessages::AcceptSessionWithUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"AcceptSessionWithUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identityRemote);
}
inline bool Steamworks::SteamNetworkingMessages::CloseSessionWithUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"CloseSessionWithUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identityRemote);
}
inline bool Steamworks::SteamNetworkingMessages::CloseChannelWithUser(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, int32_t  nLocalChannel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"CloseChannelWithUser", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identityRemote, nLocalChannel);
}
inline ::Steamworks::ESteamNetworkingConnectionState Steamworks::SteamNetworkingMessages::GetSessionConnectionInfo(::by_ref<::Steamworks::SteamNetworkingIdentity>  identityRemote, ::by_ref<::Steamworks::SteamNetConnectionInfo_t>  pConnectionInfo, ::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>  pQuickStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingMessages*>(),
                        {"GetSessionConnectionInfo", {}, {::i2c::type_of<::by_ref<::Steamworks::SteamNetworkingIdentity>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionInfo_t>>(), ::i2c::type_of<::by_ref<::Steamworks::SteamNetConnectionRealTimeStatus_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::ESteamNetworkingConnectionState>(nullptr, ___internal_method, identityRemote, pConnectionInfo, pQuickStatus);
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingMessages::SteamNetworkingMessages()   {
}
