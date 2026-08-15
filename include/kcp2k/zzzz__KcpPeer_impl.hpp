#pragma once
// IWYU pragma private; include "kcp2k/KcpPeer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__KcpState_impl.hpp"
#include "kcp2k/zzzz__KcpPeer_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "kcp2k/zzzz__ErrorCode_def.hpp"
#include "kcp2k/zzzz__KcpChannel_def.hpp"
#include "kcp2k/zzzz__KcpConfig_def.hpp"
#include "kcp2k/zzzz__KcpHeader_def.hpp"
#include "kcp2k/zzzz__Kcp_def.hpp"
//  Writing Method size for method: ::kcp2k::KcpPeer.ReliableMaxMessageSize_Unconstrained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, uint32_t)>(&::kcp2k::KcpPeer::ReliableMaxMessageSize_Unconstrained)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18144eb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"ReliableMaxMessageSize_Unconstrained", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.ReliableMaxMessageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, uint32_t)>(&::kcp2k::KcpPeer::ReliableMaxMessageSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18144eb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"ReliableMaxMessageSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.UnreliableMaxMessageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::kcp2k::KcpPeer::UnreliableMaxMessageSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18144f7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"UnreliableMaxMessageSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.get_SendQueueCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::get_SendQueueCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_SendQueueCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.get_ReceiveQueueCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::get_ReceiveQueueCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_ReceiveQueueCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.get_SendBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::get_SendBufferCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144fbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_SendBufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.get_ReceiveBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::get_ReceiveBufferCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_ReceiveBufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.get_MaxSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::get_MaxSendRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18144fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_MaxSendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.get_MaxReceiveRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::get_MaxReceiveRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18144fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_MaxReceiveRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::System::Action_1<::System::ArraySegment_1<uint8_t>>*, ::System::Action*, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*, ::System::Action*, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*, ::kcp2k::KcpConfig*, uint32_t)>(&::kcp2k::KcpPeer::_ctor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18144f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::kcp2k::ErrorCode,::StringW>*>(), ::i2c::type_of<::kcp2k::KcpConfig*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.HandleTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(uint32_t)>(&::kcp2k::KcpPeer::HandleTimeout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18144e2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandleTimeout", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.HandleDeadLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::HandleDeadLink)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18144e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandleDeadLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.HandlePing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(uint32_t)>(&::kcp2k::KcpPeer::HandlePing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18144e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandlePing", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.HandleChoked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::HandleChoked)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18144df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandleChoked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.ReceiveNextReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::kcp2k::KcpPeer::*)(::by_ref<::kcp2k::KcpHeader>, ::by_ref<::System::ArraySegment_1<uint8_t>>)>(&::kcp2k::KcpPeer::ReceiveNextReliable)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18144e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"ReceiveNextReliable", {}, {::i2c::type_of<::by_ref<::kcp2k::KcpHeader>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.TickIncoming_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(uint32_t)>(&::kcp2k::KcpPeer::TickIncoming_Connected)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18144f3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickIncoming_Connected", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.TickIncoming_Authenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(uint32_t)>(&::kcp2k::KcpPeer::TickIncoming_Authenticated)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18144f190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickIncoming_Authenticated", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.TickIncoming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::TickIncoming)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18144f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickIncoming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.TickOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::TickOutgoing)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18144f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickOutgoing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.OnRawInputReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpPeer::OnRawInputReliable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18144e370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"OnRawInputReliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.OnRawInputUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpPeer::OnRawInputUnreliable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18144e460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"OnRawInputUnreliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.RawInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpPeer::RawInput)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18144e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"RawInput", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.RawSendReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::ArrayW<uint8_t>, int32_t)>(&::kcp2k::KcpPeer::RawSendReliable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18144e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"RawSendReliable", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.SendReliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::kcp2k::KcpHeader, ::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpPeer::SendReliable)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18144ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendReliable", {}, {::i2c::type_of<::kcp2k::KcpHeader>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.SendUnreliable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::System::ArraySegment_1<uint8_t>)>(&::kcp2k::KcpPeer::SendUnreliable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18144f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendUnreliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.SendHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::SendHandshake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18144ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendHandshake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)(::System::ArraySegment_1<uint8_t>, ::kcp2k::KcpChannel)>(&::kcp2k::KcpPeer::SendData)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18144eb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendData", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.SendPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::SendPing)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendPing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.SendDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::SendDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18144ed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::KcpPeer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpPeer::*)()>(&::kcp2k::KcpPeer::Disconnect)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18144dea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::kcp2k::Kcp*& kcp2k::KcpPeer::__cordl_internal_get_kcp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kcp;
}
constexpr ::kcp2k::Kcp* const& kcp2k::KcpPeer::__cordl_internal_get_kcp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kcp;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_kcp(::kcp2k::Kcp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kcp = value;
}
constexpr uint32_t& kcp2k::KcpPeer::__cordl_internal_get_cookie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr uint32_t const& kcp2k::KcpPeer::__cordl_internal_get_cookie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cookie;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_cookie(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cookie = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::KcpPeer::__cordl_internal_get_receivedCookie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedCookie;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::KcpPeer::__cordl_internal_get_receivedCookie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivedCookie;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_receivedCookie(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivedCookie = value;
}
constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>*& kcp2k::KcpPeer::__cordl_internal_get_RawSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawSend;
}
constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>* const& kcp2k::KcpPeer::__cordl_internal_get_RawSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawSend;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_RawSend(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RawSend = value;
}
constexpr ::kcp2k::KcpState& kcp2k::KcpPeer::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::kcp2k::KcpState const& kcp2k::KcpPeer::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_state(::kcp2k::KcpState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Action*& kcp2k::KcpPeer::__cordl_internal_get_OnAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAuthenticated;
}
constexpr ::System::Action* const& kcp2k::KcpPeer::__cordl_internal_get_OnAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAuthenticated;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_OnAuthenticated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAuthenticated = value;
}
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*& kcp2k::KcpPeer::__cordl_internal_get_OnData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>* const& kcp2k::KcpPeer::__cordl_internal_get_OnData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_OnData(::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnData = value;
}
constexpr ::System::Action*& kcp2k::KcpPeer::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action* const& kcp2k::KcpPeer::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_OnDisconnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>*& kcp2k::KcpPeer::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::System::Action_2<::kcp2k::ErrorCode,::StringW>* const& kcp2k::KcpPeer::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_OnError(::System::Action_2<::kcp2k::ErrorCode,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr int32_t& kcp2k::KcpPeer::__cordl_internal_get_timeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr int32_t const& kcp2k::KcpPeer::__cordl_internal_get_timeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeout;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_timeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeout = value;
}
constexpr uint32_t& kcp2k::KcpPeer::__cordl_internal_get_lastReceiveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReceiveTime;
}
constexpr uint32_t const& kcp2k::KcpPeer::__cordl_internal_get_lastReceiveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReceiveTime;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_lastReceiveTime(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReceiveTime = value;
}
constexpr ::System::Diagnostics::Stopwatch*& kcp2k::KcpPeer::__cordl_internal_get_watch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr ::System::Diagnostics::Stopwatch* const& kcp2k::KcpPeer::__cordl_internal_get_watch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watch;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_watch(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watch = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::KcpPeer::__cordl_internal_get_kcpMessageBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kcpMessageBuffer;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::KcpPeer::__cordl_internal_get_kcpMessageBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kcpMessageBuffer;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_kcpMessageBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kcpMessageBuffer = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::KcpPeer::__cordl_internal_get_kcpSendBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kcpSendBuffer;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::KcpPeer::__cordl_internal_get_kcpSendBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kcpSendBuffer;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_kcpSendBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kcpSendBuffer = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::KcpPeer::__cordl_internal_get_rawSendBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawSendBuffer;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::KcpPeer::__cordl_internal_get_rawSendBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawSendBuffer;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_rawSendBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawSendBuffer = value;
}
constexpr uint32_t& kcp2k::KcpPeer::__cordl_internal_get_lastPingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPingTime;
}
constexpr uint32_t const& kcp2k::KcpPeer::__cordl_internal_get_lastPingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPingTime;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_lastPingTime(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPingTime = value;
}
constexpr int32_t& kcp2k::KcpPeer::__cordl_internal_get_unreliableMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableMax;
}
constexpr int32_t const& kcp2k::KcpPeer::__cordl_internal_get_unreliableMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableMax;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_unreliableMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableMax = value;
}
constexpr int32_t& kcp2k::KcpPeer::__cordl_internal_get_reliableMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableMax;
}
constexpr int32_t const& kcp2k::KcpPeer::__cordl_internal_get_reliableMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableMax;
}
constexpr void kcp2k::KcpPeer::__cordl_internal_set_reliableMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableMax = value;
}
inline int32_t kcp2k::KcpPeer::ReliableMaxMessageSize_Unconstrained(int32_t  mtu, uint32_t  rcv_wnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"ReliableMaxMessageSize_Unconstrained", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mtu, rcv_wnd);
}
inline int32_t kcp2k::KcpPeer::ReliableMaxMessageSize(int32_t  mtu, uint32_t  rcv_wnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"ReliableMaxMessageSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mtu, rcv_wnd);
}
inline int32_t kcp2k::KcpPeer::UnreliableMaxMessageSize(int32_t  mtu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"UnreliableMaxMessageSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, mtu);
}
inline int32_t kcp2k::KcpPeer::get_SendQueueCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_SendQueueCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t kcp2k::KcpPeer::get_ReceiveQueueCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_ReceiveQueueCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t kcp2k::KcpPeer::get_SendBufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_SendBufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t kcp2k::KcpPeer::get_ReceiveBufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_ReceiveBufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t kcp2k::KcpPeer::get_MaxSendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_MaxSendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t kcp2k::KcpPeer::get_MaxReceiveRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"get_MaxReceiveRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::_ctor(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  output, ::System::Action*  OnAuthenticated, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config, uint32_t  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action_2<::kcp2k::ErrorCode,::StringW>*>(), ::i2c::type_of<::kcp2k::KcpConfig*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, OnAuthenticated, OnData, OnDisconnected, OnError, config, cookie);
}
inline void kcp2k::KcpPeer::HandleTimeout(uint32_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandleTimeout", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void kcp2k::KcpPeer::HandleDeadLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandleDeadLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::HandlePing(uint32_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandlePing", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void kcp2k::KcpPeer::HandleChoked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"HandleChoked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool kcp2k::KcpPeer::ReceiveNextReliable(::by_ref<::kcp2k::KcpHeader>  header, ::by_ref<::System::ArraySegment_1<uint8_t>>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"ReceiveNextReliable", {}, {::i2c::type_of<::by_ref<::kcp2k::KcpHeader>>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, header, message);
}
inline void kcp2k::KcpPeer::TickIncoming_Connected(uint32_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickIncoming_Connected", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void kcp2k::KcpPeer::TickIncoming_Authenticated(uint32_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickIncoming_Authenticated", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void kcp2k::KcpPeer::TickIncoming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickIncoming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::TickOutgoing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"TickOutgoing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::OnRawInputReliable(::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"OnRawInputReliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void kcp2k::KcpPeer::OnRawInputUnreliable(::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"OnRawInputUnreliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void kcp2k::KcpPeer::RawInput(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"RawInput", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void kcp2k::KcpPeer::RawSendReliable(::ArrayW<uint8_t>  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"RawSendReliable", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length);
}
inline void kcp2k::KcpPeer::SendReliable(::kcp2k::KcpHeader  header, ::System::ArraySegment_1<uint8_t>  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendReliable", {}, {::i2c::type_of<::kcp2k::KcpHeader>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, content);
}
inline void kcp2k::KcpPeer::SendUnreliable(::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendUnreliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void kcp2k::KcpPeer::SendHandshake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendHandshake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::SendData(::System::ArraySegment_1<uint8_t>  data, ::kcp2k::KcpChannel  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendData", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::kcp2k::KcpChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channel);
}
inline void kcp2k::KcpPeer::SendPing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendPing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::SendDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"SendDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::KcpPeer::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpPeer*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::kcp2k::KcpPeer* kcp2k::KcpPeer::New_ctor(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  output, ::System::Action*  OnAuthenticated, ::System::Action_2<::System::ArraySegment_1<uint8_t>,::kcp2k::KcpChannel>*  OnData, ::System::Action*  OnDisconnected, ::System::Action_2<::kcp2k::ErrorCode,::StringW>*  OnError, ::kcp2k::KcpConfig*  config, uint32_t  cookie)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::KcpPeer*>(output, OnAuthenticated, OnData, OnDisconnected, OnError, config, cookie));
}
// Ctor Parameters []
constexpr ::kcp2k::KcpPeer::KcpPeer()   {
}
