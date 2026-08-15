#pragma once
// IWYU pragma private; include "Enviro/LobbyLighting.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Enviro/zzzz__LobbyLighting_def.hpp"
#include "Enviro/zzzz__LobbyLighting_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::LobbyLighting_AreaType::LobbyLighting_AreaType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::LobbyLighting_AreaType::LobbyLighting_AreaType()   {
}
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::Default{static_cast<int32_t>(0x0)};
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::Tunnel{static_cast<int32_t>(0x1)};
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::Gauntlet{static_cast<int32_t>(0x2)};
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::BellRoom{static_cast<int32_t>(0x3)};
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::GoodbyeChapel{static_cast<int32_t>(0x4)};
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::Dream{static_cast<int32_t>(0x5)};
constexpr ::Enviro::LobbyLighting_AreaType  Enviro::LobbyLighting_AreaType::GoodbyeVoid{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::Enviro::LobbyLighting_LightAreaSettings.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::LobbyLighting_LightAreaSettings (*)(::Enviro::LobbyLighting_LightAreaSettings, ::Enviro::LobbyLighting_LightAreaSettings, float_t)>(&::Enviro::LobbyLighting_LightAreaSettings::Lerp)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x18060a670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting_LightAreaSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>(), ::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting_LightAreaSettings.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::LobbyLighting_LightAreaSettings (*)(::Enviro::LobbyLighting_LightAreaSettings, ::Enviro::LobbyLighting_LightAreaSettings)>(&::Enviro::LobbyLighting_LightAreaSettings::Combine)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18060a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting_LightAreaSettings>(),
                        {"Combine", {}, {::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>(), ::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Enviro::LobbyLighting_LightAreaSettings Enviro::LobbyLighting_LightAreaSettings::Lerp(::Enviro::LobbyLighting_LightAreaSettings  a, ::Enviro::LobbyLighting_LightAreaSettings  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting_LightAreaSettings>(),
                        {"Lerp", {}, {::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>(), ::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::LobbyLighting_LightAreaSettings>(nullptr, ___internal_method, a, b, t);
}
inline ::Enviro::LobbyLighting_LightAreaSettings Enviro::LobbyLighting_LightAreaSettings::Combine(::Enviro::LobbyLighting_LightAreaSettings  a, ::Enviro::LobbyLighting_LightAreaSettings  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting_LightAreaSettings>(),
                        {"Combine", {}, {::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>(), ::i2c::type_of<::Enviro::LobbyLighting_LightAreaSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::LobbyLighting_LightAreaSettings>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "strength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fogColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerLightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "sunlightStrength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "skyColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "horizonColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "groundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::LobbyLighting_LightAreaSettings::LobbyLighting_LightAreaSettings(float_t  strength, ::UnityEngine::Color  fogColor, ::UnityEngine::Color  playerLightColor, float_t  sunlightStrength, ::UnityEngine::Color  skyColor, ::UnityEngine::Color  horizonColor, ::UnityEngine::Color  groundColor) noexcept  {
this->strength = strength;
this->fogColor = fogColor;
this->playerLightColor = playerLightColor;
this->sunlightStrength = sunlightStrength;
this->skyColor = skyColor;
this->horizonColor = horizonColor;
this->groundColor = groundColor;
}
// Ctor Parameters []
constexpr ::Enviro::LobbyLighting_LightAreaSettings::LobbyLighting_LightAreaSettings()   {
}
// Ctor Parameters [CppParam { name: "physicsMaterial", ty: "::UnityW<::UnityEngine::PhysicsMaterial>", modifiers: "", def_value: Some("{}") }, CppParam { name: "areaType", ty: "::Enviro::LobbyLighting_AreaType", modifiers: "", def_value: Some("{}") }, CppParam { name: "strength", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::LobbyLighting_LightingMaterial::LobbyLighting_LightingMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  physicsMaterial, ::Enviro::LobbyLighting_AreaType  areaType, float_t  strength) noexcept  {
this->physicsMaterial = physicsMaterial;
this->areaType = areaType;
this->strength = strength;
}
// Ctor Parameters []
constexpr ::Enviro::LobbyLighting_LightingMaterial::LobbyLighting_LightingMaterial()   {
}
//  Writing Method size for method: ::Enviro::LobbyLighting.get_isDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Enviro::LobbyLighting::get_isDirty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18060b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"get_isDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.set_isDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Enviro::LobbyLighting::set_isDirty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18060b8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"set_isDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.get_hasActiveOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Enviro::LobbyLighting::get_hasActiveOverrides)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18060b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"get_hasActiveOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::LobbyLighting::*)()>(&::Enviro::LobbyLighting::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18060aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.GetCombinedSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::LobbyLighting_LightAreaSettings (::Enviro::LobbyLighting::*)()>(&::Enviro::LobbyLighting::GetCombinedSettings)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x18060add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetCombinedSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.GetActiveSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Enviro::LobbyLighting_LightAreaSettings (*)()>(&::Enviro::LobbyLighting::GetActiveSettings)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18060ad90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetActiveSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.GetStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Enviro::LobbyLighting_AreaType)>(&::Enviro::LobbyLighting::GetStrength)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18060b1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetStrength", {}, {::i2c::type_of<::Enviro::LobbyLighting_AreaType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.SetStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::Enviro::LobbyLighting_AreaType)>(&::Enviro::LobbyLighting::SetStrength)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18060b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"SetStrength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Enviro::LobbyLighting_AreaType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.ClearAllStrengths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Enviro::LobbyLighting::ClearAllStrengths)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18060acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"ClearAllStrengths", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.SetTrilight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::Enviro::LobbyLighting::SetTrilight)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18060b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"SetTrilight", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.GetFogColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(&::Enviro::LobbyLighting::GetFogColor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18060b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetFogColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.get_SunlightModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Enviro::LobbyLighting::get_SunlightModifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18060b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"get_SunlightModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting.CheckLightingOfArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::by_ref<::Enviro::LobbyLighting_AreaType>, ::by_ref<float_t>)>(&::Enviro::LobbyLighting::CheckLightingOfArea)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18060aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"CheckLightingOfArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Enviro::LobbyLighting_AreaType>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::LobbyLighting._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::LobbyLighting::*)()>(&::Enviro::LobbyLighting::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::LobbyLighting_LightAreaSettings& Enviro::LobbyLighting::__cordl_internal_get_tunnelSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunnelSettings;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings const& Enviro::LobbyLighting::__cordl_internal_get_tunnelSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunnelSettings;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_tunnelSettings(::Enviro::LobbyLighting_LightAreaSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tunnelSettings = value;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings& Enviro::LobbyLighting::__cordl_internal_get_gauntletSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gauntletSettings;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings const& Enviro::LobbyLighting::__cordl_internal_get_gauntletSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gauntletSettings;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_gauntletSettings(::Enviro::LobbyLighting_LightAreaSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gauntletSettings = value;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings& Enviro::LobbyLighting::__cordl_internal_get_bellRoomSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bellRoomSettings;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings const& Enviro::LobbyLighting::__cordl_internal_get_bellRoomSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bellRoomSettings;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_bellRoomSettings(::Enviro::LobbyLighting_LightAreaSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bellRoomSettings = value;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings& Enviro::LobbyLighting::__cordl_internal_get_goodbyeChapelSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodbyeChapelSettings;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings const& Enviro::LobbyLighting::__cordl_internal_get_goodbyeChapelSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodbyeChapelSettings;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_goodbyeChapelSettings(::Enviro::LobbyLighting_LightAreaSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodbyeChapelSettings = value;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings& Enviro::LobbyLighting::__cordl_internal_get_dreamSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamSettings;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings const& Enviro::LobbyLighting::__cordl_internal_get_dreamSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamSettings;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_dreamSettings(::Enviro::LobbyLighting_LightAreaSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamSettings = value;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings& Enviro::LobbyLighting::__cordl_internal_get_goodbyeVoidSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodbyeVoidSettings;
}
constexpr ::Enviro::LobbyLighting_LightAreaSettings const& Enviro::LobbyLighting::__cordl_internal_get_goodbyeVoidSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodbyeVoidSettings;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_goodbyeVoidSettings(::Enviro::LobbyLighting_LightAreaSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodbyeVoidSettings = value;
}
constexpr ::UnityEngine::LayerMask& Enviro::LobbyLighting::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& Enviro::LobbyLighting::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr ::ArrayW<::Enviro::LobbyLighting_LightingMaterial>& Enviro::LobbyLighting::__cordl_internal_get_lightingMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingMaterials;
}
constexpr ::ArrayW<::Enviro::LobbyLighting_LightingMaterial> const& Enviro::LobbyLighting::__cordl_internal_get_lightingMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingMaterials;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_lightingMaterials(::ArrayW<::Enviro::LobbyLighting_LightingMaterial>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightingMaterials = value;
}
constexpr bool& Enviro::LobbyLighting::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& Enviro::LobbyLighting::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& Enviro::LobbyLighting::__cordl_internal_get__isTransitioning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTransitioning;
}
constexpr bool const& Enviro::LobbyLighting::__cordl_internal_get__isTransitioning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTransitioning;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set__isTransitioning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTransitioning = value;
}
constexpr bool& Enviro::LobbyLighting::__cordl_internal_get__isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty;
}
constexpr bool const& Enviro::LobbyLighting::__cordl_internal_get__isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty;
}
constexpr void Enviro::LobbyLighting::__cordl_internal_set__isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDirty = value;
}
inline void Enviro::LobbyLighting::setStaticF_instance(::UnityW<::Enviro::LobbyLighting>  value)  {
::cordl_internals::setStaticField<::UnityW<::Enviro::LobbyLighting>, "instance", ::Enviro::LobbyLighting*>(std::forward<::UnityW<::Enviro::LobbyLighting>>(value));
}
inline ::UnityW<::Enviro::LobbyLighting> Enviro::LobbyLighting::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Enviro::LobbyLighting>, "instance", ::Enviro::LobbyLighting*>();
}
inline bool Enviro::LobbyLighting::get_isDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"get_isDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Enviro::LobbyLighting::set_isDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"set_isDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Enviro::LobbyLighting::get_hasActiveOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"get_hasActiveOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Enviro::LobbyLighting::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::LobbyLighting_LightAreaSettings Enviro::LobbyLighting::GetCombinedSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetCombinedSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::LobbyLighting_LightAreaSettings>(this, ___internal_method);
}
inline ::Enviro::LobbyLighting_LightAreaSettings Enviro::LobbyLighting::GetActiveSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetActiveSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Enviro::LobbyLighting_LightAreaSettings>(nullptr, ___internal_method);
}
inline float_t Enviro::LobbyLighting::GetStrength(::Enviro::LobbyLighting_AreaType  areaType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetStrength", {}, {::i2c::type_of<::Enviro::LobbyLighting_AreaType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, areaType);
}
inline void Enviro::LobbyLighting::SetStrength(float_t  value, ::Enviro::LobbyLighting_AreaType  areaType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"SetStrength", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Enviro::LobbyLighting_AreaType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, areaType);
}
inline void Enviro::LobbyLighting::ClearAllStrengths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"ClearAllStrengths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Enviro::LobbyLighting::SetTrilight(::UnityEngine::Color  enviroSky, ::UnityEngine::Color  enviroHorizon, ::UnityEngine::Color  enviroGround)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"SetTrilight", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enviroSky, enviroHorizon, enviroGround);
}
inline ::UnityEngine::Color Enviro::LobbyLighting::GetFogColor(::UnityEngine::Color  enviroFogColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"GetFogColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, enviroFogColor);
}
inline float_t Enviro::LobbyLighting::get_SunlightModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"get_SunlightModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Enviro::LobbyLighting::CheckLightingOfArea(::UnityEngine::Vector3  samplePosition, ::by_ref<::Enviro::LobbyLighting_AreaType>  area, ::by_ref<float_t>  tunnelStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {"CheckLightingOfArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Enviro::LobbyLighting_AreaType>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, samplePosition, area, tunnelStrength);
}
inline void Enviro::LobbyLighting::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::LobbyLighting*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::LobbyLighting* Enviro::LobbyLighting::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::LobbyLighting*>());
}
// Ctor Parameters []
constexpr ::Enviro::LobbyLighting::LobbyLighting()   {
}
