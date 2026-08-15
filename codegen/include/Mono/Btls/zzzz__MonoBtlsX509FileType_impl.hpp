#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509FileType.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509FileType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsX509FileType::MonoBtlsX509FileType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509FileType::MonoBtlsX509FileType()   {
}
constexpr ::Mono::Btls::MonoBtlsX509FileType  Mono::Btls::MonoBtlsX509FileType::PEM{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsX509FileType  Mono::Btls::MonoBtlsX509FileType::ASN1{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsX509FileType  Mono::Btls::MonoBtlsX509FileType::DEFAULT{static_cast<int32_t>(0x3)};
