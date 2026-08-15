#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebClient.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebClient_def.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferPool_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientState_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Message_def.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::SimpleWebClient* (*)(int32_t, int32_t, ::Mirror::SimpleWeb::TcpConfig)>(&::Mirror::SimpleWeb::SimpleWebClient::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad4ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(int32_t, int32_t)>(&::Mirror::SimpleWeb::SimpleWebClient::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ad4d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.get_ConnectionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::SimpleWeb::ClientState (::Mirror::SimpleWeb::SimpleWebClient::*)()>(&::Mirror::SimpleWeb::SimpleWebClient::get_ConnectionState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"get_ConnectionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.add_onConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action*)>(&::Mirror::SimpleWeb::SimpleWebClient::add_onConnect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onConnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.remove_onConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action*)>(&::Mirror::SimpleWeb::SimpleWebClient::remove_onConnect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18062ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onConnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.add_onDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action*)>(&::Mirror::SimpleWeb::SimpleWebClient::add_onDisconnect)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180da2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onDisconnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.remove_onDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action*)>(&::Mirror::SimpleWeb::SimpleWebClient::remove_onDisconnect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180da3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onDisconnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.add_onData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action_1<::System::ArraySegment_1<uint8_t>>*)>(&::Mirror::SimpleWeb::SimpleWebClient::add_onData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad4e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onData", {}, {::i2c::type_of<::System::Action_1<::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.remove_onData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action_1<::System::ArraySegment_1<uint8_t>>*)>(&::Mirror::SimpleWeb::SimpleWebClient::remove_onData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad4f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onData", {}, {::i2c::type_of<::System::Action_1<::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.add_onError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action_1<::System::Exception*>*)>(&::Mirror::SimpleWeb::SimpleWebClient::add_onError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.remove_onError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Action_1<::System::Exception*>*)>(&::Mirror::SimpleWeb::SimpleWebClient::remove_onError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad4fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.ProcessMessageQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)()>(&::Mirror::SimpleWeb::SimpleWebClient::ProcessMessageQueue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ad4b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"ProcessMessageQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.ProcessMessageQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::UnityEngine::MonoBehaviour*)>(&::Mirror::SimpleWeb::SimpleWebClient::ProcessMessageQueue)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181ad4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"ProcessMessageQueue", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::Uri*)>(&::Mirror::SimpleWeb::SimpleWebClient::Connect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)()>(&::Mirror::SimpleWeb::SimpleWebClient::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebClient::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::SimpleWebClient::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_maxMessagesPerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessagesPerTick;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_maxMessagesPerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessagesPerTick;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_maxMessagesPerTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMessagesPerTick = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_maxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessageSize;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_maxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessageSize;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_maxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMessageSize = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_receiveQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>* const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_receiveQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveQueue;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_receiveQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::Message>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveQueue = value;
}
constexpr ::Mirror::SimpleWeb::BufferPool*& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_bufferPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr ::Mirror::SimpleWeb::BufferPool* const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_bufferPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferPool = value;
}
constexpr ::Mirror::SimpleWeb::ClientState& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::Mirror::SimpleWeb::ClientState const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_state(::Mirror::SimpleWeb::ClientState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Action*& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConnect;
}
constexpr ::System::Action* const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConnect;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_onConnect(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onConnect = value;
}
constexpr ::System::Action*& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisconnect;
}
constexpr ::System::Action* const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisconnect;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_onDisconnect(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDisconnect = value;
}
constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>*& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onData;
}
constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>* const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onData;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_onData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onData = value;
}
constexpr ::System::Action_1<::System::Exception*>*& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
constexpr ::System::Action_1<::System::Exception*>* const& Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_get_onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
constexpr void Mirror::SimpleWeb::SimpleWebClient::__cordl_internal_set_onError(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onError = value;
}
inline ::Mirror::SimpleWeb::SimpleWebClient* Mirror::SimpleWeb::SimpleWebClient::Create(int32_t  maxMessageSize, int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::SimpleWebClient*>(nullptr, ___internal_method, maxMessageSize, maxMessagesPerTick, tcpConfig);
}
inline void Mirror::SimpleWeb::SimpleWebClient::_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxMessageSize, maxMessagesPerTick);
}
inline ::Mirror::SimpleWeb::ClientState Mirror::SimpleWeb::SimpleWebClient::get_ConnectionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"get_ConnectionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::SimpleWeb::ClientState>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebClient::add_onConnect(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onConnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::remove_onConnect(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onConnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::add_onDisconnect(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onDisconnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::remove_onDisconnect(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onDisconnect", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::add_onData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onData", {}, {::i2c::type_of<::System::Action_1<::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::remove_onData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onData", {}, {::i2c::type_of<::System::Action_1<::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::add_onError(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"add_onError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::remove_onError(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"remove_onError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebClient::ProcessMessageQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"ProcessMessageQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebClient::ProcessMessageQueue(::UnityEngine::MonoBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(),
                        {"ProcessMessageQueue", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline void Mirror::SimpleWeb::SimpleWebClient::Connect(::System::Uri*  serverAddress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverAddress);
}
inline void Mirror::SimpleWeb::SimpleWebClient::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebClient::Send(::System::ArraySegment_1<uint8_t>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::SimpleWebClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline ::Mirror::SimpleWeb::SimpleWebClient* Mirror::SimpleWeb::SimpleWebClient::New_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::SimpleWebClient*>(maxMessageSize, maxMessagesPerTick));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SimpleWebClient::SimpleWebClient()   {
}
