#pragma once
// IWYU pragma private; include "MA/Flora/FrustumIntersectResult.hpp"
#include "MA/Flora/zzzz__FrustumIntersectResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FrustumIntersectResult::FrustumIntersectResult(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FrustumIntersectResult::FrustumIntersectResult()   {
}
constexpr ::MA::Flora::FrustumIntersectResult  MA::Flora::FrustumIntersectResult::Outside{static_cast<uint8_t>(0x0u)};
constexpr ::MA::Flora::FrustumIntersectResult  MA::Flora::FrustumIntersectResult::Inside{static_cast<uint8_t>(0x1u)};
constexpr ::MA::Flora::FrustumIntersectResult  MA::Flora::FrustumIntersectResult::Partial{static_cast<uint8_t>(0x2u)};
