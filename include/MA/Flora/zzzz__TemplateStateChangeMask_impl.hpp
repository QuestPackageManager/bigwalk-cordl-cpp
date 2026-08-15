#pragma once
// IWYU pragma private; include "MA/Flora/TemplateStateChangeMask.hpp"
#include "MA/Flora/zzzz__TemplateStateChangeMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateStateChangeMask::TemplateStateChangeMask(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateStateChangeMask::TemplateStateChangeMask()   {
}
constexpr ::MA::Flora::TemplateStateChangeMask  MA::Flora::TemplateStateChangeMask::None{static_cast<uint8_t>(0x0u)};
constexpr ::MA::Flora::TemplateStateChangeMask  MA::Flora::TemplateStateChangeMask::DomainChanged{static_cast<uint8_t>(0x1u)};
constexpr ::MA::Flora::TemplateStateChangeMask  MA::Flora::TemplateStateChangeMask::DrawChanged{static_cast<uint8_t>(0x2u)};
constexpr ::MA::Flora::TemplateStateChangeMask  MA::Flora::TemplateStateChangeMask::TemplateDataChanged{static_cast<uint8_t>(0x4u)};
constexpr ::MA::Flora::TemplateStateChangeMask  MA::Flora::TemplateStateChangeMask::CapabilityChanged{static_cast<uint8_t>(0x8u)};
