#pragma once
// IWYU pragma private; include "GlobalNamespace/DevSettings.hpp"
#include "GlobalNamespace/zzzz__PlayerCount_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__DevSettings_def.hpp"
#include "GlobalNamespace/zzzz__ControllerGlyphSet_def.hpp"
#include "GlobalNamespace/zzzz__FontFallbackData_def.hpp"
#include "GlobalNamespace/zzzz__FontMappingData_def.hpp"
#include "GlobalNamespace/zzzz__LightQualityData_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationDataSet_def.hpp"
#include "GlobalNamespace/zzzz__TextureCombiner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevSettings.get_currentSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::DevSettings> (*)()>(&::GlobalNamespace::DevSettings::get_currentSettings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180420d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevSettings*>(),
                        {"get_currentSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevSettings::*)()>(&::GlobalNamespace::DevSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_platformInitScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformInitScene;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_platformInitScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformInitScene;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_platformInitScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformInitScene = value;
}
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_baseScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseScene;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_baseScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseScene;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_baseScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseScene = value;
}
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_worldScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldScene;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_worldScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldScene;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_worldScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldScene = value;
}
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_enviroScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enviroScene;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_enviroScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enviroScene;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_enviroScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enviroScene = value;
}
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_terrainStudioScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainStudioScene;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_terrainStudioScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainStudioScene;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_terrainStudioScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainStudioScene = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::DevSettings::__cordl_internal_get_baseProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseProp;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::DevSettings::__cordl_internal_get_baseProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseProp;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_baseProp(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseProp = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizationDataSet>& GlobalNamespace::DevSettings::__cordl_internal_get_localizationDataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationDataSet;
}
constexpr ::UnityW<::GlobalNamespace::LocalizationDataSet> const& GlobalNamespace::DevSettings::__cordl_internal_get_localizationDataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationDataSet;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_localizationDataSet(::UnityW<::GlobalNamespace::LocalizationDataSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizationDataSet = value;
}
constexpr ::UnityW<::GlobalNamespace::FontMappingData>& GlobalNamespace::DevSettings::__cordl_internal_get_fontMappingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontMappingData;
}
constexpr ::UnityW<::GlobalNamespace::FontMappingData> const& GlobalNamespace::DevSettings::__cordl_internal_get_fontMappingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontMappingData;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_fontMappingData(::UnityW<::GlobalNamespace::FontMappingData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontMappingData = value;
}
constexpr ::UnityW<::GlobalNamespace::FontFallbackData>& GlobalNamespace::DevSettings::__cordl_internal_get_fontFallbackData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontFallbackData;
}
constexpr ::UnityW<::GlobalNamespace::FontFallbackData> const& GlobalNamespace::DevSettings::__cordl_internal_get_fontFallbackData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontFallbackData;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_fontFallbackData(::UnityW<::GlobalNamespace::FontFallbackData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontFallbackData = value;
}
constexpr ::UnityW<::GlobalNamespace::ControllerGlyphSet>& GlobalNamespace::DevSettings::__cordl_internal_get_controllerGlyphSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerGlyphSet;
}
constexpr ::UnityW<::GlobalNamespace::ControllerGlyphSet> const& GlobalNamespace::DevSettings::__cordl_internal_get_controllerGlyphSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerGlyphSet;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_controllerGlyphSet(::UnityW<::GlobalNamespace::ControllerGlyphSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerGlyphSet = value;
}
constexpr ::UnityW<::GlobalNamespace::TextureCombiner>& GlobalNamespace::DevSettings::__cordl_internal_get_rockMaskTextureCombiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockMaskTextureCombiner;
}
constexpr ::UnityW<::GlobalNamespace::TextureCombiner> const& GlobalNamespace::DevSettings::__cordl_internal_get_rockMaskTextureCombiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockMaskTextureCombiner;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_rockMaskTextureCombiner(::UnityW<::GlobalNamespace::TextureCombiner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rockMaskTextureCombiner = value;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData>& GlobalNamespace::DevSettings::__cordl_internal_get_defaultLightQualityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLightQualityData;
}
constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& GlobalNamespace::DevSettings::__cordl_internal_get_defaultLightQualityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLightQualityData;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_defaultLightQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLightQualityData = value;
}
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_compatibilityVesion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compatibilityVesion;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_compatibilityVesion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compatibilityVesion;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_compatibilityVesion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compatibilityVesion = value;
}
constexpr ::StringW& GlobalNamespace::DevSettings::__cordl_internal_get_displayVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayVersion;
}
constexpr ::StringW const& GlobalNamespace::DevSettings::__cordl_internal_get_displayVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayVersion;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_displayVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayVersion = value;
}
constexpr bool& GlobalNamespace::DevSettings::__cordl_internal_get_bypassVersionCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassVersionCheck;
}
constexpr bool const& GlobalNamespace::DevSettings::__cordl_internal_get_bypassVersionCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassVersionCheck;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_bypassVersionCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassVersionCheck = value;
}
constexpr bool& GlobalNamespace::DevSettings::__cordl_internal_get_dontMergeMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontMergeMeshes;
}
constexpr bool const& GlobalNamespace::DevSettings::__cordl_internal_get_dontMergeMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontMergeMeshes;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_dontMergeMeshes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontMergeMeshes = value;
}
constexpr bool& GlobalNamespace::DevSettings::__cordl_internal_get_secretZoneActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secretZoneActive;
}
constexpr bool const& GlobalNamespace::DevSettings::__cordl_internal_get_secretZoneActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secretZoneActive;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_secretZoneActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secretZoneActive = value;
}
constexpr ::GlobalNamespace::PlayerCount& GlobalNamespace::DevSettings::__cordl_internal_get_playerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCount;
}
constexpr ::GlobalNamespace::PlayerCount const& GlobalNamespace::DevSettings::__cordl_internal_get_playerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCount;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_playerCount(::GlobalNamespace::PlayerCount  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCount = value;
}
constexpr bool& GlobalNamespace::DevSettings::__cordl_internal_get_forceSkipAidsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceSkipAidsActive;
}
constexpr bool const& GlobalNamespace::DevSettings::__cordl_internal_get_forceSkipAidsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceSkipAidsActive;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_forceSkipAidsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceSkipAidsActive = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialVertexColorsShiny()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialVertexColorsShiny;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialVertexColorsShiny() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialVertexColorsShiny;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_dummyMaterialVertexColorsShiny(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyMaterialVertexColorsShiny = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_outputMaterialVertexColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputMaterialVertexColors;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_outputMaterialVertexColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputMaterialVertexColors;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_outputMaterialVertexColors(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputMaterialVertexColors = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive0;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive0;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_dummyMaterialEmissive0(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyMaterialEmissive0 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive1;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive1;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_dummyMaterialEmissive1(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyMaterialEmissive1 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive2;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive2;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_dummyMaterialEmissive2(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyMaterialEmissive2 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive3;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_dummyMaterialEmissive3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyMaterialEmissive3;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_dummyMaterialEmissive3(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyMaterialEmissive3 = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::DevSettings::__cordl_internal_get_occlusionTransparentMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionTransparentMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::DevSettings::__cordl_internal_get_occlusionTransparentMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionTransparentMaterials;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_occlusionTransparentMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionTransparentMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::DevSettings::__cordl_internal_get_occlusionTransparentShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionTransparentShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::DevSettings::__cordl_internal_get_occlusionTransparentShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionTransparentShader;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_occlusionTransparentShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionTransparentShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::DevSettings::__cordl_internal_get_rockShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::DevSettings::__cordl_internal_get_rockShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rockShader;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_rockShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rockShader = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::DevSettings::__cordl_internal_get_regionDebugMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::DevSettings::__cordl_internal_get_regionDebugMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___regionDebugMaterial;
}
constexpr void GlobalNamespace::DevSettings::__cordl_internal_set_regionDebugMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___regionDebugMaterial = value;
}
inline void GlobalNamespace::DevSettings::setStaticF_mainAssetPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "mainAssetPath", ::GlobalNamespace::DevSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::DevSettings::getStaticF_mainAssetPath()  {
return ::cordl_internals::getStaticField<::StringW, "mainAssetPath", ::GlobalNamespace::DevSettings*>();
}
inline ::UnityW<::GlobalNamespace::DevSettings> GlobalNamespace::DevSettings::get_currentSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevSettings*>(),
                        {"get_currentSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::DevSettings>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DevSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevSettings* GlobalNamespace::DevSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevSettings::DevSettings()   {
}
