#pragma once
// IWYU pragma private; include "Mono/Security/Interface/TlsProtocolCode.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocolCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Security::Interface::TlsProtocolCode::TlsProtocolCode(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::TlsProtocolCode::TlsProtocolCode()   {
}
constexpr ::Mono::Security::Interface::TlsProtocolCode  Mono::Security::Interface::TlsProtocolCode::Tls10{static_cast<int16_t>(0x301)};
constexpr ::Mono::Security::Interface::TlsProtocolCode  Mono::Security::Interface::TlsProtocolCode::Tls11{static_cast<int16_t>(0x302)};
constexpr ::Mono::Security::Interface::TlsProtocolCode  Mono::Security::Interface::TlsProtocolCode::Tls12{static_cast<int16_t>(0x303)};
