#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSslError.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsSslError::MonoBtlsSslError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslError::MonoBtlsSslError()   {
}
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::None{static_cast<int32_t>(0x0)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::Ssl{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantRead{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantWrite{static_cast<int32_t>(0x3)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantX509Lookup{static_cast<int32_t>(0x4)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::Syscall{static_cast<int32_t>(0x5)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::ZeroReturn{static_cast<int32_t>(0x6)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantConnect{static_cast<int32_t>(0x7)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantAccept{static_cast<int32_t>(0x8)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantChannelIdLookup{static_cast<int32_t>(0x9)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::PendingSession{static_cast<int32_t>(0xb)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::PendingCertificate{static_cast<int32_t>(0xc)};
constexpr ::Mono::Btls::MonoBtlsSslError  Mono::Btls::MonoBtlsSslError::WantPrivateKeyOperation{static_cast<int32_t>(0xd)};
