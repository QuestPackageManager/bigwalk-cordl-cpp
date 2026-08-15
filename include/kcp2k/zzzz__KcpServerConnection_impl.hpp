#pragma once
// IWYU pragma private; include "kcp2k/KcpServerConnection.hpp"
#include "kcp2k/zzzz__KcpServerConnection_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "kcp2k/zzzz__KcpPeer_def.hpp"
//  Writing Method size for method: ::kcp2k::KcpServerConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::KcpServerConnection::*)(::System::Net::EndPoint*)>(&::kcp2k::KcpServerConnection::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18144fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServerConnection>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::EndPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void kcp2k::KcpServerConnection::_ctor(::System::Net::EndPoint*  remoteEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::KcpServerConnection>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::EndPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, remoteEndPoint);
}
// Ctor Parameters [CppParam { name: "peer", ty: "::kcp2k::KcpPeer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "::System::Net::EndPoint*", modifiers: "", def_value: Some("{}") }]
constexpr ::kcp2k::KcpServerConnection::KcpServerConnection(::kcp2k::KcpPeer*  peer, ::System::Net::EndPoint*  remoteEndPoint) noexcept  {
this->peer = peer;
this->remoteEndPoint = remoteEndPoint;
}
// Ctor Parameters []
constexpr ::kcp2k::KcpServerConnection::KcpServerConnection()   {
}
