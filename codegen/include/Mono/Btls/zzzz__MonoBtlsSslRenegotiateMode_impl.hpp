#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSslRenegotiateMode.hpp"
#include "Mono/Btls/zzzz__MonoBtlsSslRenegotiateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsSslRenegotiateMode::MonoBtlsSslRenegotiateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsSslRenegotiateMode::MonoBtlsSslRenegotiateMode()   {
}
constexpr ::Mono::Btls::MonoBtlsSslRenegotiateMode  Mono::Btls::MonoBtlsSslRenegotiateMode::NEVER{static_cast<int32_t>(0x0)};
constexpr ::Mono::Btls::MonoBtlsSslRenegotiateMode  Mono::Btls::MonoBtlsSslRenegotiateMode::ONCE{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsSslRenegotiateMode  Mono::Btls::MonoBtlsSslRenegotiateMode::FREELY{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsSslRenegotiateMode  Mono::Btls::MonoBtlsSslRenegotiateMode::IGNORE{static_cast<int32_t>(0x3)};
