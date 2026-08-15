#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/CellValue.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CellValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::CellValue::CellValue(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::CellValue::CellValue()   {
}
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::None{static_cast<uint16_t>(0x0u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::A1{static_cast<uint16_t>(0x1u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::B1{static_cast<uint16_t>(0x2u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::C1{static_cast<uint16_t>(0x4u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::A2{static_cast<uint16_t>(0x8u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::B2{static_cast<uint16_t>(0x10u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::C2{static_cast<uint16_t>(0x20u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::A3{static_cast<uint16_t>(0x40u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::B3{static_cast<uint16_t>(0x80u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::C3{static_cast<uint16_t>(0x100u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::TopRow{static_cast<uint16_t>(0x7u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::MidRow{static_cast<uint16_t>(0x38u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::BotRow{static_cast<uint16_t>(0x1c0u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::LeftCol{static_cast<uint16_t>(0x49u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::MidCol{static_cast<uint16_t>(0x92u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::RightCol{static_cast<uint16_t>(0x124u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::Diag1{static_cast<uint16_t>(0x111u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::Diag2{static_cast<uint16_t>(0x54u)};
constexpr ::Mirror::Examples::MultipleMatch::CellValue  Mirror::Examples::MultipleMatch::CellValue::Full{static_cast<uint16_t>(0x1ffu)};
