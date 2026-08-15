#pragma once
// IWYU pragma private; include "Rowlan/Genesis/PathSettings.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/zzzz__PathSettings_def.hpp"
#include "Rowlan/Genesis/zzzz__PathSettingsTemplate_def.hpp"
#include "Rowlan/Genesis/zzzz__PathSettings_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::PathSettings_Shape::PathSettings_Shape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::PathSettings_Shape::PathSettings_Shape()   {
}
constexpr ::Rowlan::Genesis::PathSettings_Shape  Rowlan::Genesis::PathSettings_Shape::Line{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::PathSettings_Shape  Rowlan::Genesis::PathSettings_Shape::Rectangle{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::Genesis::PathSettings_Shape  Rowlan::Genesis::PathSettings_Shape::RoundedRectangle{static_cast<int32_t>(0x2)};
constexpr ::Rowlan::Genesis::PathSettings_Shape  Rowlan::Genesis::PathSettings_Shape::Circle{static_cast<int32_t>(0x3)};
constexpr ::Rowlan::Genesis::PathSettings_Shape  Rowlan::Genesis::PathSettings_Shape::Random{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::Rowlan::Genesis::PathSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::PathSettings::*)()>(&::Rowlan::Genesis::PathSettings::Reset)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181abf590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettings>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::PathSettings.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::PathSettings::*)(::Rowlan::Genesis::PathSettingsTemplate*)>(&::Rowlan::Genesis::PathSettings::Apply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abf530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettings>(),
                        {"Apply", {}, {::i2c::type_of<::Rowlan::Genesis::PathSettingsTemplate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::PathSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettings>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Rowlan::Genesis::PathSettings::Apply(::Rowlan::Genesis::PathSettingsTemplate*  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathSettings>(),
                        {"Apply", {}, {::i2c::type_of<::Rowlan::Genesis::PathSettingsTemplate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "shape", ty: "::Rowlan::Genesis::PathSettings_Shape", modifiers: "", def_value: Some("{}") }, CppParam { name: "closed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deformationAngle", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "subdivisionIterations", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subdivisionRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "terrainLayer", ty: "::UnityW<::UnityEngine::TerrainLayer>", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::PathSettings::PathSettings(bool  active, ::Rowlan::Genesis::PathSettings_Shape  shape, bool  closed, float_t  scale, ::UnityEngine::Vector2  deformationAngle, int32_t  subdivisionIterations, ::UnityEngine::Vector2  subdivisionRange, ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer) noexcept  {
this->active = active;
this->shape = shape;
this->closed = closed;
this->scale = scale;
this->deformationAngle = deformationAngle;
this->subdivisionIterations = subdivisionIterations;
this->subdivisionRange = subdivisionRange;
this->terrainLayer = terrainLayer;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::PathSettings::PathSettings()   {
}
