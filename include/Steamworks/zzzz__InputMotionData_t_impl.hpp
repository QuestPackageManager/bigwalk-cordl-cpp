#pragma once
// IWYU pragma private; include "Steamworks/InputMotionData_t.hpp"
#include "Steamworks/zzzz__InputMotionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "rotQuatX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotQuatY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotQuatZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotQuatW", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "posAccelX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "posAccelY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "posAccelZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotVelX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotVelY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotVelZ", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::InputMotionData_t::InputMotionData_t(float_t  rotQuatX, float_t  rotQuatY, float_t  rotQuatZ, float_t  rotQuatW, float_t  posAccelX, float_t  posAccelY, float_t  posAccelZ, float_t  rotVelX, float_t  rotVelY, float_t  rotVelZ) noexcept  {
this->rotQuatX = rotQuatX;
this->rotQuatY = rotQuatY;
this->rotQuatZ = rotQuatZ;
this->rotQuatW = rotQuatW;
this->posAccelX = posAccelX;
this->posAccelY = posAccelY;
this->posAccelZ = posAccelZ;
this->rotVelX = rotVelX;
this->rotVelY = rotVelY;
this->rotVelZ = rotVelZ;
}
// Ctor Parameters []
constexpr ::Steamworks::InputMotionData_t::InputMotionData_t()   {
}
