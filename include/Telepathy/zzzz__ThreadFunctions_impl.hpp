#pragma once
// IWYU pragma private; include "Telepathy/ThreadFunctions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__ThreadFunctions_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "Telepathy/zzzz__MagnificentReceivePipe_def.hpp"
#include "Telepathy/zzzz__MagnificentSendPipe_def.hpp"
//  Writing Method size for method: ::Telepathy::ThreadFunctions.SendMessagesBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::NetworkStream*, ::ArrayW<uint8_t>, int32_t)>(&::Telepathy::ThreadFunctions::SendMessagesBlocking)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e5b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"SendMessagesBlocking", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::ThreadFunctions.ReadMessageBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::NetworkStream*, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::Telepathy::ThreadFunctions::ReadMessageBlocking)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181e5a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"ReadMessageBlocking", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::ThreadFunctions.ReceiveLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Net::Sockets::TcpClient*, int32_t, ::Telepathy::MagnificentReceivePipe*, int32_t)>(&::Telepathy::ThreadFunctions::ReceiveLoop)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181e5aa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"ReceiveLoop", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Telepathy::MagnificentReceivePipe*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::ThreadFunctions.SendLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Net::Sockets::TcpClient*, ::Telepathy::MagnificentSendPipe*, ::System::Threading::ManualResetEvent*)>(&::Telepathy::ThreadFunctions::SendLoop)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181e5ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"SendLoop", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<::Telepathy::MagnificentSendPipe*>(), ::i2c::type_of<::System::Threading::ManualResetEvent*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Telepathy::ThreadFunctions::SendMessagesBlocking(::System::Net::Sockets::NetworkStream*  stream, ::ArrayW<uint8_t>  payload, int32_t  packetSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"SendMessagesBlocking", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stream, payload, packetSize);
}
inline bool Telepathy::ThreadFunctions::ReadMessageBlocking(::System::Net::Sockets::NetworkStream*  stream, int32_t  MaxMessageSize, ::ArrayW<uint8_t>  headerBuffer, ::ArrayW<uint8_t>  payloadBuffer, ::by_ref<int32_t>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"ReadMessageBlocking", {}, {::i2c::type_of<::System::Net::Sockets::NetworkStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stream, MaxMessageSize, headerBuffer, payloadBuffer, size);
}
inline void Telepathy::ThreadFunctions::ReceiveLoop(int32_t  connectionId, ::System::Net::Sockets::TcpClient*  client, int32_t  MaxMessageSize, ::Telepathy::MagnificentReceivePipe*  receivePipe, int32_t  QueueLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"ReceiveLoop", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Telepathy::MagnificentReceivePipe*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionId, client, MaxMessageSize, receivePipe, QueueLimit);
}
inline void Telepathy::ThreadFunctions::SendLoop(int32_t  connectionId, ::System::Net::Sockets::TcpClient*  client, ::Telepathy::MagnificentSendPipe*  sendPipe, ::System::Threading::ManualResetEvent*  sendPending)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ThreadFunctions*>(),
                        {"SendLoop", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<::Telepathy::MagnificentSendPipe*>(), ::i2c::type_of<::System::Threading::ManualResetEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionId, client, sendPipe, sendPending);
}
// Ctor Parameters []
constexpr ::Telepathy::ThreadFunctions::ThreadFunctions()   {
}
