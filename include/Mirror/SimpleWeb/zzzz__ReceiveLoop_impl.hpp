#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ReceiveLoop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__ReceiveLoop_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferPool_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Message_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ReceiveLoop_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop_Config._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ReceiveLoop_Config::*)(::Mirror::SimpleWeb::Connection*, int32_t, bool, ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*, ::Mirror::SimpleWeb::BufferPool*)>(&::Mirror::SimpleWeb::ReceiveLoop_Config::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ad0380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>(), ::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop_Config.Deconstruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::ReceiveLoop_Config::*)(::by_ref<::Mirror::SimpleWeb::Connection*>, ::by_ref<int32_t>, ::by_ref<bool>, ::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>, ::by_ref<::Mirror::SimpleWeb::BufferPool*>)>(&::Mirror::SimpleWeb::ReceiveLoop_Config::Deconstruct)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ad0300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(),
                        {"Deconstruct", {}, {::i2c::type_of<::by_ref<::Mirror::SimpleWeb::Connection*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>>(), ::i2c::type_of<::by_ref<::Mirror::SimpleWeb::BufferPool*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::ReceiveLoop_Config::_ctor(::Mirror::SimpleWeb::Connection*  conn, int32_t  maxMessageSize, bool  expectMask, ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  queue, ::Mirror::SimpleWeb::BufferPool*  bufferPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>(), ::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, conn, maxMessageSize, expectMask, queue, bufferPool);
}
inline void Mirror::SimpleWeb::ReceiveLoop_Config::Deconstruct(::by_ref<::Mirror::SimpleWeb::Connection*>  conn, ::by_ref<int32_t>  maxMessageSize, ::by_ref<bool>  expectMask, ::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>  queue, ::by_ref<::Mirror::SimpleWeb::BufferPool*>  bufferPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(),
                        {"Deconstruct", {}, {::i2c::type_of<::by_ref<::Mirror::SimpleWeb::Connection*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*>>(), ::i2c::type_of<::by_ref<::Mirror::SimpleWeb::BufferPool*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, conn, maxMessageSize, expectMask, queue, bufferPool);
}
// Ctor Parameters [CppParam { name: "conn", ty: "::Mirror::SimpleWeb::Connection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxMessageSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "expectMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "queue", ty: "::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferPool", ty: "::Mirror::SimpleWeb::BufferPool*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::ReceiveLoop_Config::ReceiveLoop_Config(::Mirror::SimpleWeb::Connection*  conn, int32_t  maxMessageSize, bool  expectMask, ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  queue, ::Mirror::SimpleWeb::BufferPool*  bufferPool) noexcept  {
this->conn = conn;
this->maxMessageSize = maxMessageSize;
this->expectMask = expectMask;
this->queue = queue;
this->bufferPool = bufferPool;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ReceiveLoop_Config::ReceiveLoop_Config()   {
}
// Ctor Parameters [CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "opcode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "finished", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::ReceiveLoop_Header::ReceiveLoop_Header(int32_t  payloadLength, int32_t  offset, int32_t  opcode, bool  finished) noexcept  {
this->payloadLength = payloadLength;
this->offset = offset;
this->opcode = opcode;
this->finished = finished;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ReceiveLoop_Header::ReceiveLoop_Header()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SimpleWeb::ReceiveLoop_Config)>(&::Mirror::SimpleWeb::ReceiveLoop::Loop)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x181ad2590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"Loop", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.ReadOneMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SimpleWeb::ReceiveLoop_Config, ::ArrayW<uint8_t>)>(&::Mirror::SimpleWeb::ReceiveLoop::ReadOneMessage)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x181ad2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"ReadOneMessage", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.ReadHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::ReceiveLoop_Header (*)(::Mirror::SimpleWeb::ReceiveLoop_Config, ::ArrayW<uint8_t>, bool)>(&::Mirror::SimpleWeb::ReceiveLoop::ReadHeader)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181ad2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"ReadHeader", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.HandleArrayMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SimpleWeb::ReceiveLoop_Config, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ReceiveLoop::HandleArrayMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181ad22e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"HandleArrayMessage", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.CopyMessageToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::ArrayBuffer* (*)(::Mirror::SimpleWeb::BufferPool*, bool, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ReceiveLoop::CopyMessageToBuffer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad2140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"CopyMessageToBuffer", {}, {::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.HandleCloseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SimpleWeb::ReceiveLoop_Config, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ReceiveLoop::HandleCloseMessage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ad24c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"HandleCloseMessage", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.GetCloseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::ReceiveLoop::GetCloseMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad2280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"GetCloseMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::ReceiveLoop.GetCloseCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mirror::SimpleWeb::ReceiveLoop::GetCloseCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"GetCloseCode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::ReceiveLoop::Loop(::Mirror::SimpleWeb::ReceiveLoop_Config  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"Loop", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config);
}
inline void Mirror::SimpleWeb::ReceiveLoop::ReadOneMessage(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"ReadOneMessage", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config, buffer);
}
inline ::Mirror::SimpleWeb::ReceiveLoop_Header Mirror::SimpleWeb::ReceiveLoop::ReadHeader(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer, bool  opCodeContinuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"ReadHeader", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::ReceiveLoop_Header>(nullptr, ___internal_method, config, buffer, opCodeContinuation);
}
inline void Mirror::SimpleWeb::ReceiveLoop::HandleArrayMessage(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"HandleArrayMessage", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config, buffer, msgOffset, payloadLength);
}
inline ::Mirror::SimpleWeb::ArrayBuffer* Mirror::SimpleWeb::ReceiveLoop::CopyMessageToBuffer(::Mirror::SimpleWeb::BufferPool*  bufferPool, bool  expectMask, ::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"CopyMessageToBuffer", {}, {::i2c::type_of<::Mirror::SimpleWeb::BufferPool*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::ArrayBuffer*>(nullptr, ___internal_method, bufferPool, expectMask, buffer, msgOffset, payloadLength);
}
inline void Mirror::SimpleWeb::ReceiveLoop::HandleCloseMessage(::Mirror::SimpleWeb::ReceiveLoop_Config  config, ::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"HandleCloseMessage", {}, {::i2c::type_of<::Mirror::SimpleWeb::ReceiveLoop_Config>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config, buffer, msgOffset, payloadLength);
}
inline ::StringW Mirror::SimpleWeb::ReceiveLoop::GetCloseMessage(::ArrayW<uint8_t>  buffer, int32_t  msgOffset, int32_t  payloadLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"GetCloseMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, msgOffset, payloadLength);
}
inline int32_t Mirror::SimpleWeb::ReceiveLoop::GetCloseCode(::ArrayW<uint8_t>  buffer, int32_t  msgOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::ReceiveLoop*>(),
                        {"GetCloseCode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, msgOffset);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ReceiveLoop::ReceiveLoop()   {
}
