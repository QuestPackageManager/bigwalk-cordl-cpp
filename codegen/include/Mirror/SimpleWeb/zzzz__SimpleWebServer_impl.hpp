#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SimpleWebServer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebServer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__BufferPool_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SslConfig_def.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "Mirror/SimpleWeb/zzzz__WebSocketServer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.add_onConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::SimpleWeb::SimpleWebServer::add_onConnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18062fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onConnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.remove_onConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::SimpleWeb::SimpleWebServer::remove_onConnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180630120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onConnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.add_onDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::SimpleWeb::SimpleWebServer::add_onDisconnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad5b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onDisconnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.remove_onDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_1<int32_t>*)>(&::Mirror::SimpleWeb::SimpleWebServer::remove_onDisconnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad5cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onDisconnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.add_onData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*)>(&::Mirror::SimpleWeb::SimpleWebServer::add_onData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onData", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.remove_onData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*)>(&::Mirror::SimpleWeb::SimpleWebServer::remove_onData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad5c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onData", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.add_onError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_2<int32_t,::System::Exception*>*)>(&::Mirror::SimpleWeb::SimpleWebServer::add_onError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad5b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.remove_onError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Action_2<int32_t,::System::Exception*>*)>(&::Mirror::SimpleWeb::SimpleWebServer::remove_onError)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ad5d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::SimpleWebServer::*)()>(&::Mirror::SimpleWeb::SimpleWebServer::get_Active)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(bool)>(&::Mirror::SimpleWeb::SimpleWebServer::set_Active)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(int32_t, ::Mirror::SimpleWeb::TcpConfig, int32_t, int32_t, ::Mirror::SimpleWeb::SslConfig)>(&::Mirror::SimpleWeb::SimpleWebServer::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad5960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::SslConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(uint16_t)>(&::Mirror::SimpleWeb::SimpleWebServer::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ad5700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"Start", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)()>(&::Mirror::SimpleWeb::SimpleWebServer::Stop)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.SendAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::System::Collections::Generic::List_1<int32_t>*, ::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::SimpleWebServer::SendAll)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181ad5500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"SendAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.SendOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(int32_t, ::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::SimpleWebServer::SendOne)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ad5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"SendOne", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.KickClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::SimpleWebServer::*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebServer::KickClient)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181ad5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"KickClient", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.GetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::SimpleWebServer::*)(int32_t)>(&::Mirror::SimpleWeb::SimpleWebServer::GetClientAddress)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181ad5050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"GetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.ProcessMessageQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)()>(&::Mirror::SimpleWeb::SimpleWebServer::ProcessMessageQueue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ad54f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"ProcessMessageQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SimpleWebServer.ProcessMessageQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SimpleWebServer::*)(::UnityEngine::MonoBehaviour*)>(&::Mirror::SimpleWeb::SimpleWebServer::ProcessMessageQueue)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181ad5270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"ProcessMessageQueue", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<int32_t>*& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConnect;
}
constexpr ::System::Action_1<int32_t>* const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onConnect;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_onConnect(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onConnect = value;
}
constexpr ::System::Action_1<int32_t>*& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onDisconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisconnect;
}
constexpr ::System::Action_1<int32_t>* const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onDisconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDisconnect;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_onDisconnect(::System::Action_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDisconnect = value;
}
constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onData;
}
constexpr ::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>* const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onData;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_onData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onData = value;
}
constexpr ::System::Action_2<int32_t,::System::Exception*>*& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
constexpr ::System::Action_2<int32_t,::System::Exception*>* const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_onError(::System::Action_2<int32_t,::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onError = value;
}
constexpr int32_t& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_maxMessagesPerTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessagesPerTick;
}
constexpr int32_t const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_maxMessagesPerTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxMessagesPerTick;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_maxMessagesPerTick(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxMessagesPerTick = value;
}
constexpr ::Mirror::SimpleWeb::WebSocketServer*& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_server()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr ::Mirror::SimpleWeb::WebSocketServer* const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_server() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___server;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_server(::Mirror::SimpleWeb::WebSocketServer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___server = value;
}
constexpr ::Mirror::SimpleWeb::BufferPool*& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_bufferPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr ::Mirror::SimpleWeb::BufferPool* const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get_bufferPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferPool;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set_bufferPool(::Mirror::SimpleWeb::BufferPool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferPool = value;
}
constexpr bool& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Mirror::SimpleWeb::SimpleWebServer::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
inline void Mirror::SimpleWeb::SimpleWebServer::add_onConnect(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onConnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::remove_onConnect(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onConnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::add_onDisconnect(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onDisconnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::remove_onDisconnect(::System::Action_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onDisconnect", {}, {::i2c::type_of<::System::Action_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::add_onData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onData", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::remove_onData(::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onData", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::ArraySegment_1<uint8_t>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::add_onError(::System::Action_2<int32_t,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"add_onError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::remove_onError(::System::Action_2<int32_t,::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"remove_onError", {}, {::i2c::type_of<::System::Action_2<int32_t,::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::SimpleWeb::SimpleWebServer::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebServer::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::SimpleWeb::SimpleWebServer::_ctor(int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::TcpConfig>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::SslConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxMessagesPerTick, tcpConfig, maxMessageSize, handshakeMaxSize, sslConfig);
}
inline void Mirror::SimpleWeb::SimpleWebServer::Start(uint16_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"Start", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void Mirror::SimpleWeb::SimpleWebServer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebServer::SendAll(::System::Collections::Generic::List_1<int32_t>*  connectionIds, ::System::ArraySegment_1<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"SendAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionIds, source);
}
inline void Mirror::SimpleWeb::SimpleWebServer::SendOne(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"SendOne", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, source);
}
inline bool Mirror::SimpleWeb::SimpleWebServer::KickClient(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"KickClient", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connectionId);
}
inline ::StringW Mirror::SimpleWeb::SimpleWebServer::GetClientAddress(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"GetClientAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::SimpleWeb::SimpleWebServer::ProcessMessageQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"ProcessMessageQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::SimpleWebServer::ProcessMessageQueue(::UnityEngine::MonoBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SimpleWebServer*>(),
                        {"ProcessMessageQueue", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline ::Mirror::SimpleWeb::SimpleWebServer* Mirror::SimpleWeb::SimpleWebServer::New_ctor(int32_t  maxMessagesPerTick, ::Mirror::SimpleWeb::TcpConfig  tcpConfig, int32_t  maxMessageSize, int32_t  handshakeMaxSize, ::Mirror::SimpleWeb::SslConfig  sslConfig)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::SimpleWebServer*>(maxMessagesPerTick, tcpConfig, maxMessageSize, handshakeMaxSize, sslConfig));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SimpleWebServer::SimpleWebServer()   {
}
