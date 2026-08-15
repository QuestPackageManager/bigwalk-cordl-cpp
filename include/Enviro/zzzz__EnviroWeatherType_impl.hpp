#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherType.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Enviro/zzzz__EnviroWeatherType_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeAudioOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeAuroraOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeCloudsOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeEffectsOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeEnvironmentOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeFlatCloudsOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeFogOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeLightingOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeLightningOverride_def.hpp"
#include "Enviro/zzzz__EnviroWeatherTypeSkyOverride_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroWeatherType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroWeatherType::*)()>(&::Enviro::EnviroWeatherType::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEditor = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showEffectControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEffectControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showEffectControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEffectControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showEffectControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEffectControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showCloudControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCloudControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showCloudControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCloudControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showCloudControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showCloudControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showFlatCloudControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFlatCloudControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showFlatCloudControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFlatCloudControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showFlatCloudControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFlatCloudControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showFogControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFogControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showFogControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFogControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showFogControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFogControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showSkyControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showSkyControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSkyControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showSkyControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSkyControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showLightingControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLightingControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showLightingControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLightingControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showLightingControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showLightingControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showAuroraControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAuroraControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showAuroraControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAuroraControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showAuroraControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAuroraControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showEnvironmentControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEnvironmentControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showEnvironmentControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEnvironmentControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showEnvironmentControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEnvironmentControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showAudioControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAudioControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showAudioControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAudioControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showAudioControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAudioControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showAmbientAudioControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAmbientAudioControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showAmbientAudioControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAmbientAudioControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showAmbientAudioControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAmbientAudioControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showWeatherAudioControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWeatherAudioControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showWeatherAudioControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWeatherAudioControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showWeatherAudioControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWeatherAudioControls = value;
}
constexpr bool& Enviro::EnviroWeatherType::__cordl_internal_get_showLightningControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLightningControls;
}
constexpr bool const& Enviro::EnviroWeatherType::__cordl_internal_get_showLightningControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLightningControls;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_showLightningControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showLightningControls = value;
}
constexpr ::Enviro::EnviroWeatherTypeCloudsOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_cloudsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsOverride;
}
constexpr ::Enviro::EnviroWeatherTypeCloudsOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_cloudsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_cloudsOverride(::Enviro::EnviroWeatherTypeCloudsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeFlatCloudsOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_flatCloudsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsOverride;
}
constexpr ::Enviro::EnviroWeatherTypeFlatCloudsOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_flatCloudsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_flatCloudsOverride(::Enviro::EnviroWeatherTypeFlatCloudsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeLightingOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_lightingOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingOverride;
}
constexpr ::Enviro::EnviroWeatherTypeLightingOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_lightingOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_lightingOverride(::Enviro::EnviroWeatherTypeLightingOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightingOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeSkyOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_skyOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyOverride;
}
constexpr ::Enviro::EnviroWeatherTypeSkyOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_skyOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_skyOverride(::Enviro::EnviroWeatherTypeSkyOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeFogOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_fogOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogOverride;
}
constexpr ::Enviro::EnviroWeatherTypeFogOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_fogOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_fogOverride(::Enviro::EnviroWeatherTypeFogOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeAuroraOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_auroraOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraOverride;
}
constexpr ::Enviro::EnviroWeatherTypeAuroraOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_auroraOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_auroraOverride(::Enviro::EnviroWeatherTypeAuroraOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeEffectsOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_effectsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsOverride;
}
constexpr ::Enviro::EnviroWeatherTypeEffectsOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_effectsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_effectsOverride(::Enviro::EnviroWeatherTypeEffectsOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeAudioOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_audioOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOverride;
}
constexpr ::Enviro::EnviroWeatherTypeAudioOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_audioOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_audioOverride(::Enviro::EnviroWeatherTypeAudioOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeLightningOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_lightningOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningOverride;
}
constexpr ::Enviro::EnviroWeatherTypeLightningOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_lightningOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_lightningOverride(::Enviro::EnviroWeatherTypeLightningOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningOverride = value;
}
constexpr ::Enviro::EnviroWeatherTypeEnvironmentOverride*& Enviro::EnviroWeatherType::__cordl_internal_get_environmentOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentOverride;
}
constexpr ::Enviro::EnviroWeatherTypeEnvironmentOverride* const& Enviro::EnviroWeatherType::__cordl_internal_get_environmentOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environmentOverride;
}
constexpr void Enviro::EnviroWeatherType::__cordl_internal_set_environmentOverride(::Enviro::EnviroWeatherTypeEnvironmentOverride*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___environmentOverride = value;
}
inline void Enviro::EnviroWeatherType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroWeatherType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroWeatherType* Enviro::EnviroWeatherType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroWeatherType*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroWeatherType::EnviroWeatherType()   {
}
