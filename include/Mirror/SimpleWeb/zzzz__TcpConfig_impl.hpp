#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/TcpConfig.hpp"
#include "Mirror/SimpleWeb/zzzz__TcpConfig_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::TcpConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::TcpConfig::*)(bool, int32_t, int32_t)>(&::Mirror::SimpleWeb::TcpConfig::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c6c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::TcpConfig>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::TcpConfig.ApplyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::TcpConfig::*)(::System::Net::Sockets::TcpClient*)>(&::Mirror::SimpleWeb::TcpConfig::ApplyTo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad60f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::TcpConfig>(),
                        {"ApplyTo", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::TcpConfig::_ctor(bool  noDelay, int32_t  sendTimeout, int32_t  receiveTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::TcpConfig>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, noDelay, sendTimeout, receiveTimeout);
}
inline void Mirror::SimpleWeb::TcpConfig::ApplyTo(::System::Net::Sockets::TcpClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::TcpConfig>(),
                        {"ApplyTo", {}, {::i2c::type_of<::System::Net::Sockets::TcpClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, client);
}
// Ctor Parameters [CppParam { name: "noDelay", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sendTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiveTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::TcpConfig::TcpConfig(bool  noDelay, int32_t  sendTimeout, int32_t  receiveTimeout) noexcept  {
this->noDelay = noDelay;
this->sendTimeout = sendTimeout;
this->receiveTimeout = receiveTimeout;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::TcpConfig::TcpConfig()   {
}
