#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509StoreType.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509StoreType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Btls::MonoBtlsX509StoreType::MonoBtlsX509StoreType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509StoreType::MonoBtlsX509StoreType()   {
}
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::Custom{static_cast<int32_t>(0x0)};
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::MachineTrustedRoots{static_cast<int32_t>(0x1)};
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::MachineIntermediateCA{static_cast<int32_t>(0x2)};
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::MachineUntrusted{static_cast<int32_t>(0x3)};
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::UserTrustedRoots{static_cast<int32_t>(0x4)};
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::UserIntermediateCA{static_cast<int32_t>(0x5)};
constexpr ::Mono::Btls::MonoBtlsX509StoreType  Mono::Btls::MonoBtlsX509StoreType::UserUntrusted{static_cast<int32_t>(0x6)};
