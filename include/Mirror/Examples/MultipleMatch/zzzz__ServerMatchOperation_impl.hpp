#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ServerMatchOperation.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ServerMatchOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation::ServerMatchOperation(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation::ServerMatchOperation()   {
}
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::None{static_cast<uint8_t>(0x0u)};
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::Create{static_cast<uint8_t>(0x1u)};
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::Cancel{static_cast<uint8_t>(0x2u)};
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::Start{static_cast<uint8_t>(0x3u)};
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::Join{static_cast<uint8_t>(0x4u)};
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::Leave{static_cast<uint8_t>(0x5u)};
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchOperation  Mirror::Examples::MultipleMatch::ServerMatchOperation::Ready{static_cast<uint8_t>(0x6u)};
