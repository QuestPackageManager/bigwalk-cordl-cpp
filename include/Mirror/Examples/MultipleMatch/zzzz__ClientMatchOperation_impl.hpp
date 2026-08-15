#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ClientMatchOperation.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ClientMatchOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation::ClientMatchOperation(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation::ClientMatchOperation()   {
}
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::None{static_cast<uint8_t>(0x0u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::List{static_cast<uint8_t>(0x1u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::Created{static_cast<uint8_t>(0x2u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::Cancelled{static_cast<uint8_t>(0x3u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::Joined{static_cast<uint8_t>(0x4u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::Departed{static_cast<uint8_t>(0x5u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::UpdateRoom{static_cast<uint8_t>(0x6u)};
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchOperation  Mirror::Examples::MultipleMatch::ClientMatchOperation::Started{static_cast<uint8_t>(0x7u)};
