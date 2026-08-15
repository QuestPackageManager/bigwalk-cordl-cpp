#pragma once
// IWYU pragma private; include "Rowlan/Genesis/LayerSettings.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rowlan/Genesis/zzzz__LayerSettings_def.hpp"
#include "Rowlan/Genesis/zzzz__LayerSettingsTemplate_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::LayerSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::LayerSettings::*)()>(&::Rowlan::Genesis::LayerSettings::Reset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181abeb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerSettings>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::LayerSettings.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::LayerSettings::*)(::Rowlan::Genesis::LayerSettingsTemplate*)>(&::Rowlan::Genesis::LayerSettings::Apply)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181abeb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerSettings>(),
                        {"Apply", {}, {::i2c::type_of<::Rowlan::Genesis::LayerSettingsTemplate*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::LayerSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerSettings>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Rowlan::Genesis::LayerSettings::Apply(::Rowlan::Genesis::LayerSettingsTemplate*  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::LayerSettings>(),
                        {"Apply", {}, {::i2c::type_of<::Rowlan::Genesis::LayerSettingsTemplate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_template);
}
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "terrainLayer", ty: "::UnityW<::UnityEngine::TerrainLayer>", modifiers: "", def_value: Some("{}") }, CppParam { name: "slopeEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "slopeRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::LayerSettings::LayerSettings(bool  active, ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer, bool  slopeEnabled, ::UnityEngine::Vector2  slopeRange) noexcept  {
this->active = active;
this->terrainLayer = terrainLayer;
this->slopeEnabled = slopeEnabled;
this->slopeRange = slopeRange;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::LayerSettings::LayerSettings()   {
}
