#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Format.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Format_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsX509Format::MonoBtlsX509Format(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Format::MonoBtlsX509Format()   {
}
constexpr ::Mono::Btls::MonoBtlsX509Format  Mono::Btls::MonoBtlsX509Format::DER{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsX509Format  Mono::Btls::MonoBtlsX509Format::PEM{static_cast<int32_t>(0x2)};
