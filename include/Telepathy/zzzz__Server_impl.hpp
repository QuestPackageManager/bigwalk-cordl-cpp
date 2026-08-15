#pragma once
// IWYU pragma private; include "Telepathy/Server.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__Common_impl.hpp"
#include "Telepathy/zzzz__Server_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "Telepathy/zzzz__ConnectionState_def.hpp"
#include "Telepathy/zzzz__MagnificentReceivePipe_def.hpp"
#include "Telepathy/zzzz__Server_def.hpp"
//  Writing Method size for method: ::Telepathy::Server___c__DisplayClass16_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server___c__DisplayClass16_0::*)()>(&::Telepathy::Server___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server___c__DisplayClass16_0._Listen_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server___c__DisplayClass16_0::*)()>(&::Telepathy::Server___c__DisplayClass16_0::_Listen_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e5b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass16_0*>(),
                        {"<Listen>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server___c__DisplayClass16_0._Listen_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server___c__DisplayClass16_0::*)()>(&::Telepathy::Server___c__DisplayClass16_0::_Listen_b__1)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181e5b2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass16_0*>(),
                        {"<Listen>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_connectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionId;
}
constexpr int32_t const& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_connectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionId;
}
constexpr void Telepathy::Server___c__DisplayClass16_0::__cordl_internal_set_connectionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionId = value;
}
constexpr ::System::Net::Sockets::TcpClient*& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::System::Net::Sockets::TcpClient* const& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Telepathy::Server___c__DisplayClass16_0::__cordl_internal_set_client(::System::Net::Sockets::TcpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::Telepathy::ConnectionState*& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_connection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connection;
}
constexpr ::Telepathy::ConnectionState* const& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_connection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connection;
}
constexpr void Telepathy::Server___c__DisplayClass16_0::__cordl_internal_set_connection(::Telepathy::ConnectionState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connection = value;
}
constexpr ::System::Threading::Thread*& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_sendThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendThread;
}
constexpr ::System::Threading::Thread* const& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get_sendThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendThread;
}
constexpr void Telepathy::Server___c__DisplayClass16_0::__cordl_internal_set_sendThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendThread = value;
}
constexpr ::Telepathy::Server*& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Telepathy::Server* const& Telepathy::Server___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Telepathy::Server___c__DisplayClass16_0::__cordl_internal_set___4__this(::Telepathy::Server*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Telepathy::Server___c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass16_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Telepathy::Server___c__DisplayClass16_0::_Listen_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass16_0*>(),
                        {"<Listen>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Telepathy::Server___c__DisplayClass16_0::_Listen_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass16_0*>(),
                        {"<Listen>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::Server___c__DisplayClass16_0* Telepathy::Server___c__DisplayClass16_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Server___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::Telepathy::Server___c__DisplayClass16_0::Server___c__DisplayClass16_0()   {
}
//  Writing Method size for method: ::Telepathy::Server___c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server___c__DisplayClass17_0::*)()>(&::Telepathy::Server___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server___c__DisplayClass17_0._Start_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server___c__DisplayClass17_0::*)()>(&::Telepathy::Server___c__DisplayClass17_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e5b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass17_0*>(),
                        {"<Start>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Telepathy::Server*& Telepathy::Server___c__DisplayClass17_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Telepathy::Server* const& Telepathy::Server___c__DisplayClass17_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Telepathy::Server___c__DisplayClass17_0::__cordl_internal_set___4__this(::Telepathy::Server*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Telepathy::Server___c__DisplayClass17_0::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr int32_t const& Telepathy::Server___c__DisplayClass17_0::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void Telepathy::Server___c__DisplayClass17_0::__cordl_internal_set_port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
inline void Telepathy::Server___c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Telepathy::Server___c__DisplayClass17_0::_Start_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server___c__DisplayClass17_0*>(),
                        {"<Start>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::Server___c__DisplayClass17_0* Telepathy::Server___c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Server___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Telepathy::Server___c__DisplayClass17_0::Server___c__DisplayClass17_0()   {
}
//  Writing Method size for method: ::Telepathy::Server.get_ReceivePipeTotalCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::Server::*)()>(&::Telepathy::Server::get_ReceivePipeTotalCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e5a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"get_ReceivePipeTotalCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.NextConnectionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::Server::*)()>(&::Telepathy::Server::NextConnectionId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e59ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"NextConnectionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Server::*)()>(&::Telepathy::Server::get_Active)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e5a800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server::*)(int32_t)>(&::Telepathy::Server::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e5a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.Listen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server::*)(int32_t)>(&::Telepathy::Server::Listen)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181e59980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Listen", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Server::*)(int32_t)>(&::Telepathy::Server::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181e5a140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Start", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Server::*)()>(&::Telepathy::Server::Stop)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181e5a2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Server::*)(int32_t, ::System::ArraySegment_1<uint8_t>)>(&::Telepathy::Server::Send)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181e59f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.GetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Telepathy::Server::*)(int32_t)>(&::Telepathy::Server::GetClientAddress)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e598b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"GetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Server::*)(int32_t)>(&::Telepathy::Server::Disconnect)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e597f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Server.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::Server::*)(int32_t, ::System::Func_1<bool>*)>(&::Telepathy::Server::Tick)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181e5a5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Tick", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& Telepathy::Server::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action_1<int32_t>* const& Telepathy::Server::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void Telepathy::Server::__cordl_internal_set_OnConnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*& Telepathy::Server::__cordl_internal_get_OnData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>* const& Telepathy::Server::__cordl_internal_get_OnData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr void Telepathy::Server::__cordl_internal_set_OnData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnData = value;
}
constexpr ::System::Action_1<int32_t>*& Telepathy::Server::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action_1<int32_t>* const& Telepathy::Server::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void Telepathy::Server::__cordl_internal_set_OnDisconnected(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr ::System::Net::Sockets::TcpListener*& Telepathy::Server::__cordl_internal_get_listener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listener;
}
constexpr ::System::Net::Sockets::TcpListener* const& Telepathy::Server::__cordl_internal_get_listener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listener;
}
constexpr void Telepathy::Server::__cordl_internal_set_listener(::System::Net::Sockets::TcpListener*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listener = value;
}
constexpr ::System::Threading::Thread*& Telepathy::Server::__cordl_internal_get_listenerThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerThread;
}
constexpr ::System::Threading::Thread* const& Telepathy::Server::__cordl_internal_get_listenerThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerThread;
}
constexpr void Telepathy::Server::__cordl_internal_set_listenerThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerThread = value;
}
constexpr int32_t& Telepathy::Server::__cordl_internal_get_SendQueueLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendQueueLimit;
}
constexpr int32_t const& Telepathy::Server::__cordl_internal_get_SendQueueLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendQueueLimit;
}
constexpr void Telepathy::Server::__cordl_internal_set_SendQueueLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendQueueLimit = value;
}
constexpr int32_t& Telepathy::Server::__cordl_internal_get_ReceiveQueueLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveQueueLimit;
}
constexpr int32_t const& Telepathy::Server::__cordl_internal_get_ReceiveQueueLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveQueueLimit;
}
constexpr void Telepathy::Server::__cordl_internal_set_ReceiveQueueLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiveQueueLimit = value;
}
constexpr ::Telepathy::MagnificentReceivePipe*& Telepathy::Server::__cordl_internal_get_receivePipe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivePipe;
}
constexpr ::Telepathy::MagnificentReceivePipe* const& Telepathy::Server::__cordl_internal_get_receivePipe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receivePipe;
}
constexpr void Telepathy::Server::__cordl_internal_set_receivePipe(::Telepathy::MagnificentReceivePipe*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receivePipe = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>*& Telepathy::Server::__cordl_internal_get_clients()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clients;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>* const& Telepathy::Server::__cordl_internal_get_clients() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clients;
}
constexpr void Telepathy::Server::__cordl_internal_set_clients(::System::Collections::Concurrent::ConcurrentDictionary_2<int32_t,::Telepathy::ConnectionState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clients = value;
}
constexpr int32_t& Telepathy::Server::__cordl_internal_get_counter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counter;
}
constexpr int32_t const& Telepathy::Server::__cordl_internal_get_counter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counter;
}
constexpr void Telepathy::Server::__cordl_internal_set_counter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counter = value;
}
inline int32_t Telepathy::Server::get_ReceivePipeTotalCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"get_ReceivePipeTotalCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Telepathy::Server::NextConnectionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"NextConnectionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Telepathy::Server::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Telepathy::Server::_ctor(int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MaxMessageSize);
}
inline void Telepathy::Server::Listen(int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Listen", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline bool Telepathy::Server::Start(int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Start", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port);
}
inline void Telepathy::Server::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Telepathy::Server::Send(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Send", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connectionId, message);
}
inline ::StringW Telepathy::Server::GetClientAddress(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"GetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline bool Telepathy::Server::Disconnect(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connectionId);
}
inline int32_t Telepathy::Server::Tick(int32_t  processLimit, ::System::Func_1<bool>*  checkEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Server*>(),
                        {"Tick", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, processLimit, checkEnabled);
}
inline ::Telepathy::Server* Telepathy::Server::New_ctor(int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Server*>(MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::Server::Server()   {
}
