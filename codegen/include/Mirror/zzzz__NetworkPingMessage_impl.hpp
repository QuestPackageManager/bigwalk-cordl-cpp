#pragma once
// IWYU pragma private; include "Mirror/NetworkPingMessage.hpp"
#include "Mirror/zzzz__NetworkPingMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkPingMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkPingMessage::*)(double_t)>(&::Mirror::NetworkPingMessage::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181517da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkPingMessage>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkPingMessage::_ctor(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkPingMessage>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::NetworkPingMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::NetworkPingMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "clientTime", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkPingMessage::NetworkPingMessage(double_t  clientTime) noexcept  {
this->clientTime = clientTime;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkPingMessage::NetworkPingMessage()   {
}
