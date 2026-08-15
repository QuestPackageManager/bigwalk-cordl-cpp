#pragma once
// IWYU pragma private; include "Mirror/LocalConnectionToServer.hpp"
#include "Mirror/zzzz__NetworkConnectionToServer_impl.hpp"
#include "Mirror/zzzz__LocalConnectionToServer_def.hpp"
#include "Mirror/zzzz__LocalConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkWriterPooled_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.get_address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::get_address)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181536de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"get_address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.QueueConnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::QueueConnectedEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181537080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"QueueConnectedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.QueueDisconnectedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::QueueDisconnectedEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181537090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"QueueDisconnectedEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::LocalConnectionToServer::Send)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1815370a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::Update)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181537240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.DisconnectInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::DisconnectInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181536df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"DisconnectInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::Disconnect)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181536e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::LocalConnectionToServer::*)(float_t)>(&::Mirror::LocalConnectionToServer::IsAlive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                    {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LocalConnectionToServer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LocalConnectionToServer::*)()>(&::Mirror::LocalConnectionToServer::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815375b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::LocalConnectionToClient*& Mirror::LocalConnectionToServer::__cordl_internal_get_connectionToClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionToClient;
}
constexpr ::Mirror::LocalConnectionToClient* const& Mirror::LocalConnectionToServer::__cordl_internal_get_connectionToClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionToClient;
}
constexpr void Mirror::LocalConnectionToServer::__cordl_internal_set_connectionToClient(::Mirror::LocalConnectionToClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionToClient = value;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*& Mirror::LocalConnectionToServer::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>* const& Mirror::LocalConnectionToServer::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void Mirror::LocalConnectionToServer::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<::Mirror::NetworkWriterPooled*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
constexpr bool& Mirror::LocalConnectionToServer::__cordl_internal_get_connectedEventPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedEventPending;
}
constexpr bool const& Mirror::LocalConnectionToServer::__cordl_internal_get_connectedEventPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedEventPending;
}
constexpr void Mirror::LocalConnectionToServer::__cordl_internal_set_connectedEventPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedEventPending = value;
}
constexpr bool& Mirror::LocalConnectionToServer::__cordl_internal_get_disconnectedEventPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectedEventPending;
}
constexpr bool const& Mirror::LocalConnectionToServer::__cordl_internal_get_disconnectedEventPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectedEventPending;
}
constexpr void Mirror::LocalConnectionToServer::__cordl_internal_set_disconnectedEventPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectedEventPending = value;
}
inline ::StringW Mirror::LocalConnectionToServer::get_address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"get_address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToServer::QueueConnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"QueueConnectedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToServer::QueueDisconnectedEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"QueueDisconnectedEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToServer::Send(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::LocalConnectionToServer::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToServer::DisconnectInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {"DisconnectInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LocalConnectionToServer::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::LocalConnectionToServer::IsAlive(float_t  timeout)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LocalConnectionToServer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout);
}
inline void Mirror::LocalConnectionToServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LocalConnectionToServer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::LocalConnectionToServer* Mirror::LocalConnectionToServer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::LocalConnectionToServer*>());
}
// Ctor Parameters []
constexpr ::Mirror::LocalConnectionToServer::LocalConnectionToServer()   {
}
