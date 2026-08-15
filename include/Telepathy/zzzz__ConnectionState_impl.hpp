#pragma once
// IWYU pragma private; include "Telepathy/ConnectionState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__ConnectionState_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "Telepathy/zzzz__MagnificentSendPipe_def.hpp"
//  Writing Method size for method: ::Telepathy::ConnectionState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::ConnectionState::*)(::System::Net::Sockets::TcpClient*, int32_t)>(&::Telepathy::ConnectionState::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e584d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ConnectionState*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::TcpClient*& Telepathy::ConnectionState::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::System::Net::Sockets::TcpClient* const& Telepathy::ConnectionState::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Telepathy::ConnectionState::__cordl_internal_set_client(::System::Net::Sockets::TcpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::Telepathy::MagnificentSendPipe*& Telepathy::ConnectionState::__cordl_internal_get_sendPipe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendPipe;
}
constexpr ::Telepathy::MagnificentSendPipe* const& Telepathy::ConnectionState::__cordl_internal_get_sendPipe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendPipe;
}
constexpr void Telepathy::ConnectionState::__cordl_internal_set_sendPipe(::Telepathy::MagnificentSendPipe*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendPipe = value;
}
constexpr ::System::Threading::ManualResetEvent*& Telepathy::ConnectionState::__cordl_internal_get_sendPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendPending;
}
constexpr ::System::Threading::ManualResetEvent* const& Telepathy::ConnectionState::__cordl_internal_get_sendPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendPending;
}
constexpr void Telepathy::ConnectionState::__cordl_internal_set_sendPending(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendPending = value;
}
inline void Telepathy::ConnectionState::_ctor(::System::Net::Sockets::TcpClient*  client, int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::ConnectionState*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, MaxMessageSize);
}
inline ::Telepathy::ConnectionState* Telepathy::ConnectionState::New_ctor(::System::Net::Sockets::TcpClient*  client, int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::ConnectionState*>(client, MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::ConnectionState::ConnectionState()   {
}
