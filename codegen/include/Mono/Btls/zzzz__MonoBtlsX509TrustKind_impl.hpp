#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509TrustKind.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509TrustKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsX509TrustKind::MonoBtlsX509TrustKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509TrustKind::MonoBtlsX509TrustKind()   {
}
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::DEFAULT{static_cast<int32_t>(0x0)};
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::TRUST_CLIENT{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::TRUST_SERVER{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::TRUST_ALL{static_cast<int32_t>(0x4)};
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::REJECT_CLIENT{static_cast<int32_t>(0x20)};
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::REJECT_SERVER{static_cast<int32_t>(0x40)};
constexpr ::Mono::Btls::MonoBtlsX509TrustKind  Mono::Btls::MonoBtlsX509TrustKind::REJECT_ALL{static_cast<int32_t>(0x80)};
