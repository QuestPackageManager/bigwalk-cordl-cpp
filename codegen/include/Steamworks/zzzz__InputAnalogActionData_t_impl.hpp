#pragma once
// IWYU pragma private; include "Steamworks/InputAnalogActionData_t.hpp"
#include "Steamworks/zzzz__EInputSourceMode_impl.hpp"
#include "Steamworks/zzzz__InputAnalogActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "eMode", ty: "::Steamworks::EInputSourceMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bActive", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::InputAnalogActionData_t::InputAnalogActionData_t(::Steamworks::EInputSourceMode  eMode, float_t  x, float_t  y, uint8_t  bActive) noexcept  {
this->eMode = eMode;
this->x = x;
this->y = y;
this->bActive = bActive;
}
// Ctor Parameters []
constexpr ::Steamworks::InputAnalogActionData_t::InputAnalogActionData_t()   {
}
