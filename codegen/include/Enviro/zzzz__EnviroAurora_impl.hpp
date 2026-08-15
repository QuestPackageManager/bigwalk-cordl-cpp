#pragma once
// IWYU pragma private; include "Enviro/EnviroAurora.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Enviro/zzzz__EnviroAurora_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroAurora._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroAurora::*)()>(&::Enviro::EnviroAurora::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805fdf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAurora*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroAurora::__cordl_internal_get_useAurora()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAurora;
}
constexpr bool const& Enviro::EnviroAurora::__cordl_internal_get_useAurora() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAurora;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_useAurora(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useAurora = value;
}
constexpr float_t& Enviro::EnviroAurora::__cordl_internal_get_auroraIntensityModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraIntensityModifier;
}
constexpr float_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraIntensityModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraIntensityModifier;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraIntensityModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraIntensityModifier = value;
}
constexpr ::UnityEngine::AnimationCurve*& Enviro::EnviroAurora::__cordl_internal_get_auroraIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraIntensity;
}
constexpr ::UnityEngine::AnimationCurve* const& Enviro::EnviroAurora::__cordl_internal_get_auroraIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraIntensity;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraIntensity(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraIntensity = value;
}
constexpr ::UnityEngine::Color& Enviro::EnviroAurora::__cordl_internal_get_auroraColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraColor;
}
constexpr ::UnityEngine::Color const& Enviro::EnviroAurora::__cordl_internal_get_auroraColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraColor;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraColor = value;
}
constexpr float_t& Enviro::EnviroAurora::__cordl_internal_get_auroraBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraBrightness;
}
constexpr float_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraBrightness;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraBrightness = value;
}
constexpr float_t& Enviro::EnviroAurora::__cordl_internal_get_auroraContrast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraContrast;
}
constexpr float_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraContrast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraContrast;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraContrast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraContrast = value;
}
constexpr float_t& Enviro::EnviroAurora::__cordl_internal_get_auroraHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraHeight;
}
constexpr float_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraHeight;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraHeight = value;
}
constexpr float_t& Enviro::EnviroAurora::__cordl_internal_get_auroraScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraScale;
}
constexpr float_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraScale;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraScale = value;
}
constexpr int32_t& Enviro::EnviroAurora::__cordl_internal_get_auroraSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraSteps;
}
constexpr int32_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraSteps;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraSteps = value;
}
constexpr ::UnityEngine::Vector4& Enviro::EnviroAurora::__cordl_internal_get_auroraLayer1Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraLayer1Settings;
}
constexpr ::UnityEngine::Vector4 const& Enviro::EnviroAurora::__cordl_internal_get_auroraLayer1Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraLayer1Settings;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraLayer1Settings(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraLayer1Settings = value;
}
constexpr ::UnityEngine::Vector4& Enviro::EnviroAurora::__cordl_internal_get_auroraLayer2Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraLayer2Settings;
}
constexpr ::UnityEngine::Vector4 const& Enviro::EnviroAurora::__cordl_internal_get_auroraLayer2Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraLayer2Settings;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraLayer2Settings(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraLayer2Settings = value;
}
constexpr ::UnityEngine::Vector4& Enviro::EnviroAurora::__cordl_internal_get_auroraColorshiftSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraColorshiftSettings;
}
constexpr ::UnityEngine::Vector4 const& Enviro::EnviroAurora::__cordl_internal_get_auroraColorshiftSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraColorshiftSettings;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraColorshiftSettings(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraColorshiftSettings = value;
}
constexpr float_t& Enviro::EnviroAurora::__cordl_internal_get_auroraSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraSpeed;
}
constexpr float_t const& Enviro::EnviroAurora::__cordl_internal_get_auroraSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraSpeed;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_auroraSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroAurora::__cordl_internal_get_aurora_layer_1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora_layer_1;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroAurora::__cordl_internal_get_aurora_layer_1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora_layer_1;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_aurora_layer_1(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aurora_layer_1 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroAurora::__cordl_internal_get_aurora_layer_2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora_layer_2;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroAurora::__cordl_internal_get_aurora_layer_2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora_layer_2;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_aurora_layer_2(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aurora_layer_2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Enviro::EnviroAurora::__cordl_internal_get_aurora_colorshift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora_colorshift;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Enviro::EnviroAurora::__cordl_internal_get_aurora_colorshift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aurora_colorshift;
}
constexpr void Enviro::EnviroAurora::__cordl_internal_set_aurora_colorshift(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aurora_colorshift = value;
}
inline void Enviro::EnviroAurora::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroAurora*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroAurora* Enviro::EnviroAurora::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroAurora*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroAurora::EnviroAurora()   {
}
