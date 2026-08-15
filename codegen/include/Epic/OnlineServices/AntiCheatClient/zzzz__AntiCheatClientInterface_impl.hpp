#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AntiCheatClientInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientInterface_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddExternalIntegrityCatalogOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyClientIntegrityViolatedOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyMessageToPeerOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyMessageToServerOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyPeerActionRequiredOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AddNotifyPeerAuthStatusChangedOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__BeginSessionOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__EndSessionOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__GetModuleBuildIdOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__GetProtectMessageOutputLengthOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToPeerCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToServerCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnPeerActionRequiredCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnPeerAuthStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__PollStatusOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ProtectMessageOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ReceiveMessageFromPeerOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__ReceiveMessageFromServerOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__RegisterPeerOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__Reserved01Options_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__Reserved02Options_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__UnprotectMessageOptions_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__UnregisterPeerOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)()>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.AddExternalIntegrityCatalog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddExternalIntegrityCatalog)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18051ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddExternalIntegrityCatalog", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.AddNotifyClientIntegrityViolated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyClientIntegrityViolatedOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyClientIntegrityViolated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18051ece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyClientIntegrityViolated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyClientIntegrityViolatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.AddNotifyMessageToPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyMessageToPeer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18051ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyMessageToPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.AddNotifyMessageToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyMessageToServer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18051eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyMessageToServer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.AddNotifyPeerActionRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyPeerActionRequired)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18051efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyPeerActionRequired", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.AddNotifyPeerAuthStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>, ::System::Object*, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyPeerAuthStatusChanged)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18051f0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyPeerAuthStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.BeginSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::BeginSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"BeginSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.EndSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::EndSessionOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::EndSession)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"EndSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::EndSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.GetModuleBuildId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::GetModuleBuildIdOptions>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::GetModuleBuildId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"GetModuleBuildId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::GetModuleBuildIdOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.GetProtectMessageOutputLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::GetProtectMessageOutputLength)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"GetProtectMessageOutputLength", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.PollStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>, ::by_ref<::Epic::OnlineServices::Utf8String*>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::PollStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18051f340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"PollStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.ProtectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>, ::System::ArraySegment_1<uint8_t>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::ProtectMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18051f3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"ProtectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.ReceiveMessageFromPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::ReceiveMessageFromPeer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051f490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"ReceiveMessageFromPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.ReceiveMessageFromServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::ReceiveMessageFromServer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"ReceiveMessageFromServer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.RegisterPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RegisterPeer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051f530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RegisterPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.RemoveNotifyClientIntegrityViolated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyClientIntegrityViolated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyClientIntegrityViolated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.RemoveNotifyMessageToPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyMessageToPeer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyMessageToPeer", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.RemoveNotifyMessageToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyMessageToServer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyMessageToServer", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.RemoveNotifyPeerActionRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyPeerActionRequired)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyPeerActionRequired", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.RemoveNotifyPeerAuthStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(uint64_t)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyPeerAuthStatusChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18051f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyPeerAuthStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.Reserved01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>, ::by_ref<int32_t>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::Reserved01)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"Reserved01", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.Reserved02
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::Reserved02)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051f6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"Reserved02", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.UnprotectMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions>, ::System::ArraySegment_1<uint8_t>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::UnprotectMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18051f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"UnprotectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface.UnregisterPeer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>)>(&::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::UnregisterPeer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18051f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"UnregisterPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::setStaticF_PEER_SELF(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "PEER_SELF", ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::getStaticF_PEER_SELF()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "PEER_SELF", ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>();
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddExternalIntegrityCatalog(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddExternalIntegrityCatalog", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddExternalIntegrityCatalogOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline uint64_t Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyClientIntegrityViolated(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyClientIntegrityViolatedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyClientIntegrityViolated", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyClientIntegrityViolatedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyMessageToPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyMessageToPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyMessageToServer(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyMessageToServer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyPeerActionRequired(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyPeerActionRequired", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnPeerActionRequiredCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline uint64_t Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AddNotifyPeerAuthStatusChanged(::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*  notificationFn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"AddNotifyPeerAuthStatusChanged", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerAuthStatusChangedOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::AntiCheatClient::OnPeerAuthStatusChangedCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, options, clientData, notificationFn);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::BeginSession(::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"BeginSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::EndSession(::by_ref<::Epic::OnlineServices::AntiCheatClient::EndSessionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"EndSession", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::EndSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::GetModuleBuildId(::by_ref<::Epic::OnlineServices::AntiCheatClient::GetModuleBuildIdOptions>  options, ::by_ref<uint32_t>  outModuleBuildId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"GetModuleBuildId", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::GetModuleBuildIdOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outModuleBuildId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::GetProtectMessageOutputLength(::by_ref<::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions>  options, ::by_ref<uint32_t>  outBufferSizeBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"GetProtectMessageOutputLength", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBufferSizeBytes);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::PollStatus(::by_ref<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>  options, ::by_ref<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>  outViolationType, ::by_ref<::Epic::OnlineServices::Utf8String*>  outMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"PollStatus", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::PollStatusOptions>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType>>(), ::i2c::type_of<::by_ref<::Epic::OnlineServices::Utf8String*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outViolationType, outMessage);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::ProtectMessage(::by_ref<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"ProtectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer, outBytesWritten);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::ReceiveMessageFromPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"ReceiveMessageFromPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::ReceiveMessageFromServer(::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"ReceiveMessageFromServer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RegisterPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RegisterPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyClientIntegrityViolated(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyClientIntegrityViolated", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyMessageToPeer(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyMessageToPeer", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyMessageToServer(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyMessageToServer", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyPeerActionRequired(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyPeerActionRequired", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline void Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::RemoveNotifyPeerAuthStatusChanged(uint64_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"RemoveNotifyPeerAuthStatusChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notificationId);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::Reserved01(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>  options, ::by_ref<int32_t>  outValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"Reserved01", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved01Options>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outValue);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::Reserved02(::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"Reserved02", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::Reserved02Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::UnprotectMessage(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions>  options, ::System::ArraySegment_1<uint8_t>  outBuffer, ::by_ref<uint32_t>  outBytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"UnprotectMessage", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outBuffer, outBytesWritten);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::UnregisterPeer(::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(),
                        {"UnregisterPeer", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::UnregisterPeerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>());
}
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface* Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientInterface::AntiCheatClientInterface()   {
}
