#pragma once
// IWYU pragma private; include "Telepathy/Client.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__Common_impl.hpp"
#include "Telepathy/zzzz__Client_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "Telepathy/zzzz__ClientConnectionState_def.hpp"
#include "Telepathy/zzzz__Client_def.hpp"
//  Writing Method size for method: ::Telepathy::Client___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client___c__DisplayClass13_0::*)()>(&::Telepathy::Client___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client___c__DisplayClass13_0._ReceiveThreadFunction_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client___c__DisplayClass13_0::*)()>(&::Telepathy::Client___c__DisplayClass13_0::_ReceiveThreadFunction_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e5b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass13_0*>(),
                        {"<ReceiveThreadFunction>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Telepathy::ClientConnectionState*& Telepathy::Client___c__DisplayClass13_0::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::Telepathy::ClientConnectionState* const& Telepathy::Client___c__DisplayClass13_0::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Telepathy::Client___c__DisplayClass13_0::__cordl_internal_set_state(::Telepathy::ClientConnectionState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline void Telepathy::Client___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Telepathy::Client___c__DisplayClass13_0::_ReceiveThreadFunction_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass13_0*>(),
                        {"<ReceiveThreadFunction>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::Client___c__DisplayClass13_0* Telepathy::Client___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Client___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::Telepathy::Client___c__DisplayClass13_0::Client___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::Telepathy::Client___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client___c__DisplayClass14_0::*)()>(&::Telepathy::Client___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client___c__DisplayClass14_0._Connect_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client___c__DisplayClass14_0::*)()>(&::Telepathy::Client___c__DisplayClass14_0::_Connect_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e5b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass14_0*>(),
                        {"<Connect>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Telepathy::Client*& Telepathy::Client___c__DisplayClass14_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Telepathy::Client* const& Telepathy::Client___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Telepathy::Client___c__DisplayClass14_0::__cordl_internal_set___4__this(::Telepathy::Client*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Telepathy::Client___c__DisplayClass14_0::__cordl_internal_get_ip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ip;
}
constexpr ::StringW const& Telepathy::Client___c__DisplayClass14_0::__cordl_internal_get_ip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ip;
}
constexpr void Telepathy::Client___c__DisplayClass14_0::__cordl_internal_set_ip(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ip = value;
}
constexpr int32_t& Telepathy::Client___c__DisplayClass14_0::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr int32_t const& Telepathy::Client___c__DisplayClass14_0::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void Telepathy::Client___c__DisplayClass14_0::__cordl_internal_set_port(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
inline void Telepathy::Client___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Telepathy::Client___c__DisplayClass14_0::_Connect_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client___c__DisplayClass14_0*>(),
                        {"<Connect>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Telepathy::Client___c__DisplayClass14_0* Telepathy::Client___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Client___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::Telepathy::Client___c__DisplayClass14_0::Client___c__DisplayClass14_0()   {
}
//  Writing Method size for method: ::Telepathy::Client.get_Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Client::*)()>(&::Telepathy::Client::get_Connected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e58440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"get_Connected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.get_Connecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Client::*)()>(&::Telepathy::Client::get_Connecting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e58470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"get_Connecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.get_ReceivePipeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::Client::*)()>(&::Telepathy::Client::get_ReceivePipeCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e58490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"get_ReceivePipeCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client::*)(int32_t)>(&::Telepathy::Client::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e58420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.ReceiveThreadFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Telepathy::ClientConnectionState*, ::StringW, int32_t, int32_t, bool, int32_t, int32_t, int32_t)>(&::Telepathy::Client::ReceiveThreadFunction)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x181e57c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"ReceiveThreadFunction", {}, {::i2c::type_of<::Telepathy::ClientConnectionState*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client::*)(::StringW, int32_t)>(&::Telepathy::Client::Connect)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181e57920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Client::*)()>(&::Telepathy::Client::Disconnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e57b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Telepathy::Client::*)(::System::ArraySegment_1<uint8_t>)>(&::Telepathy::Client::Send)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181e58030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Telepathy::Client.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Telepathy::Client::*)(int32_t, ::System::Func_1<bool>*)>(&::Telepathy::Client::Tick)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e582c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Tick", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Telepathy::Client::__cordl_internal_get_OnConnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr ::System::Action* const& Telepathy::Client::__cordl_internal_get_OnConnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnected;
}
constexpr void Telepathy::Client::__cordl_internal_set_OnConnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnected = value;
}
constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>*& Telepathy::Client::__cordl_internal_get_OnData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr ::System::Action_1<::System::ArraySegment_1<uint8_t>>* const& Telepathy::Client::__cordl_internal_get_OnData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnData;
}
constexpr void Telepathy::Client::__cordl_internal_set_OnData(::System::Action_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnData = value;
}
constexpr ::System::Action*& Telepathy::Client::__cordl_internal_get_OnDisconnected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr ::System::Action* const& Telepathy::Client::__cordl_internal_get_OnDisconnected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisconnected;
}
constexpr void Telepathy::Client::__cordl_internal_set_OnDisconnected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisconnected = value;
}
constexpr int32_t& Telepathy::Client::__cordl_internal_get_SendQueueLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendQueueLimit;
}
constexpr int32_t const& Telepathy::Client::__cordl_internal_get_SendQueueLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendQueueLimit;
}
constexpr void Telepathy::Client::__cordl_internal_set_SendQueueLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendQueueLimit = value;
}
constexpr int32_t& Telepathy::Client::__cordl_internal_get_ReceiveQueueLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveQueueLimit;
}
constexpr int32_t const& Telepathy::Client::__cordl_internal_get_ReceiveQueueLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveQueueLimit;
}
constexpr void Telepathy::Client::__cordl_internal_set_ReceiveQueueLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiveQueueLimit = value;
}
constexpr ::Telepathy::ClientConnectionState*& Telepathy::Client::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::Telepathy::ClientConnectionState* const& Telepathy::Client::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Telepathy::Client::__cordl_internal_set_state(::Telepathy::ClientConnectionState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
inline bool Telepathy::Client::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"get_Connected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Telepathy::Client::get_Connecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"get_Connecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Telepathy::Client::get_ReceivePipeCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"get_ReceivePipeCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Telepathy::Client::_ctor(int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MaxMessageSize);
}
inline void Telepathy::Client::ReceiveThreadFunction(::Telepathy::ClientConnectionState*  state, ::StringW  ip, int32_t  port, int32_t  MaxMessageSize, bool  NoDelay, int32_t  SendTimeout, int32_t  ReceiveTimeout, int32_t  ReceiveQueueLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"ReceiveThreadFunction", {}, {::i2c::type_of<::Telepathy::ClientConnectionState*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, ip, port, MaxMessageSize, NoDelay, SendTimeout, ReceiveTimeout, ReceiveQueueLimit);
}
inline void Telepathy::Client::Connect(::StringW  ip, int32_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ip, port);
}
inline void Telepathy::Client::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Telepathy::Client::Send(::System::ArraySegment_1<uint8_t>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Send", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline int32_t Telepathy::Client::Tick(int32_t  processLimit, ::System::Func_1<bool>*  checkEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Client*>(),
                        {"Tick", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, processLimit, checkEnabled);
}
inline ::Telepathy::Client* Telepathy::Client::New_ctor(int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Client*>(MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::Client::Client()   {
}
