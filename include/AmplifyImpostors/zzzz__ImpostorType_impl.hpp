#pragma once
// IWYU pragma private; include "AmplifyImpostors/ImpostorType.hpp"
#include "AmplifyImpostors/zzzz__ImpostorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::ImpostorType::ImpostorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::ImpostorType::ImpostorType()   {
}
constexpr ::AmplifyImpostors::ImpostorType  AmplifyImpostors::ImpostorType::Spherical{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::ImpostorType  AmplifyImpostors::ImpostorType::Octahedron{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::ImpostorType  AmplifyImpostors::ImpostorType::HemiOctahedron{static_cast<int32_t>(0x2)};
