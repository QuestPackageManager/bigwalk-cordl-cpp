#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Connection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::Connection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Connection::*)(::System::Net::Sockets::TcpClient*, ::System::Action_1<::Mirror::SimpleWeb::Connection*>*)>(&::Mirror::SimpleWeb::Connection::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad07f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Connection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<::System::Action_1<::Mirror::SimpleWeb::Connection*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Connection.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Connection::*)()>(&::Mirror::SimpleWeb::Connection::Dispose)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181ad0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Connection*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Connection.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::SimpleWeb::Connection::*)()>(&::Mirror::SimpleWeb::Connection::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad0700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::Connection*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::Connection*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Mirror::SimpleWeb::Connection::__cordl_internal_get_disposedLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedLock;
}
constexpr ::System::Object* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_disposedLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedLock;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_disposedLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposedLock = value;
}
constexpr ::System::Net::Sockets::TcpClient*& Mirror::SimpleWeb::Connection::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::System::Net::Sockets::TcpClient* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_client(::System::Net::Sockets::TcpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr int32_t& Mirror::SimpleWeb::Connection::__cordl_internal_get_connId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connId;
}
constexpr int32_t const& Mirror::SimpleWeb::Connection::__cordl_internal_get_connId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connId;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_connId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connId = value;
}
constexpr ::System::IO::Stream*& Mirror::SimpleWeb::Connection::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
constexpr ::System::Threading::Thread*& Mirror::SimpleWeb::Connection::__cordl_internal_get_receiveThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveThread;
}
constexpr ::System::Threading::Thread* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_receiveThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receiveThread;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_receiveThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receiveThread = value;
}
constexpr ::System::Threading::Thread*& Mirror::SimpleWeb::Connection::__cordl_internal_get_sendThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendThread;
}
constexpr ::System::Threading::Thread* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_sendThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendThread;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_sendThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendThread = value;
}
constexpr ::System::Threading::ManualResetEventSlim*& Mirror::SimpleWeb::Connection::__cordl_internal_get_sendPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendPending;
}
constexpr ::System::Threading::ManualResetEventSlim* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_sendPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendPending;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_sendPending(::System::Threading::ManualResetEventSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendPending = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*& Mirror::SimpleWeb::Connection::__cordl_internal_get_sendQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_sendQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendQueue;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_sendQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::Mirror::SimpleWeb::ArrayBuffer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendQueue = value;
}
constexpr ::System::Action_1<::Mirror::SimpleWeb::Connection*>*& Mirror::SimpleWeb::Connection::__cordl_internal_get_onDispose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDispose;
}
constexpr ::System::Action_1<::Mirror::SimpleWeb::Connection*>* const& Mirror::SimpleWeb::Connection::__cordl_internal_get_onDispose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDispose;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_onDispose(::System::Action_1<::Mirror::SimpleWeb::Connection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDispose = value;
}
constexpr bool& Mirror::SimpleWeb::Connection::__cordl_internal_get_hasDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDisposed;
}
constexpr bool const& Mirror::SimpleWeb::Connection::__cordl_internal_get_hasDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDisposed;
}
constexpr void Mirror::SimpleWeb::Connection::__cordl_internal_set_hasDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasDisposed = value;
}
inline void Mirror::SimpleWeb::Connection::_ctor(::System::Net::Sockets::TcpClient*  client, ::System::Action_1<::Mirror::SimpleWeb::Connection*>*  onDispose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Connection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<::System::Action_1<::Mirror::SimpleWeb::Connection*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, onDispose);
}
inline void Mirror::SimpleWeb::Connection::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Connection*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::SimpleWeb::Connection::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::Connection*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mirror::SimpleWeb::Connection* Mirror::SimpleWeb::Connection::New_ctor(::System::Net::Sockets::TcpClient*  client, ::System::Action_1<::Mirror::SimpleWeb::Connection*>*  onDispose)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::Connection*>(client, onDispose));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Mirror::SimpleWeb::Connection::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mirror::SimpleWeb::Connection::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::Connection::Connection()   {
}
