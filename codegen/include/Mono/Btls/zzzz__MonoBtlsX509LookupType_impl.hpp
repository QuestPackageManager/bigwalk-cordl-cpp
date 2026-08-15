#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509LookupType.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509LookupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsX509LookupType::MonoBtlsX509LookupType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509LookupType::MonoBtlsX509LookupType()   {
}
constexpr ::Mono::Btls::MonoBtlsX509LookupType  Mono::Btls::MonoBtlsX509LookupType::UNKNOWN{static_cast<int32_t>(0x0)};
constexpr ::Mono::Btls::MonoBtlsX509LookupType  Mono::Btls::MonoBtlsX509LookupType::FILE{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsX509LookupType  Mono::Btls::MonoBtlsX509LookupType::HASH_DIR{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsX509LookupType  Mono::Btls::MonoBtlsX509LookupType::MONO{static_cast<int32_t>(0x3)};
