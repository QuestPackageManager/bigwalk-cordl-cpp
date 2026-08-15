#pragma once
// IWYU pragma private; include "GlobalNamespace/DevSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerCount_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DevSettings)
namespace GlobalNamespace {
class ControllerGlyphSet;
}
namespace GlobalNamespace {
class FontFallbackData;
}
namespace GlobalNamespace {
class FontMappingData;
}
namespace GlobalNamespace {
class LightQualityData;
}
namespace GlobalNamespace {
class LocalizationDataSet;
}
namespace GlobalNamespace {
class TextureCombiner;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class DevSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevSettings*, "", "DevSettings");
// Dependencies PlayerCount, UnityEngine.Material, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevSettings
class CORDL_TYPE DevSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field baseProp, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseProp, put=__cordl_internal_set_baseProp)) ::UnityW<::UnityEngine::GameObject>  baseProp;

/// @brief Field baseScene, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseScene, put=__cordl_internal_set_baseScene)) ::StringW  baseScene;

/// @brief Field bypassVersionCheck, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassVersionCheck, put=__cordl_internal_set_bypassVersionCheck)) bool  bypassVersionCheck;

/// @brief Field compatibilityVesion, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_compatibilityVesion, put=__cordl_internal_set_compatibilityVesion)) ::StringW  compatibilityVesion;

/// @brief Field controllerGlyphSet, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerGlyphSet, put=__cordl_internal_set_controllerGlyphSet)) ::UnityW<::GlobalNamespace::ControllerGlyphSet>  controllerGlyphSet;

/// @brief Field defaultLightQualityData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultLightQualityData, put=__cordl_internal_set_defaultLightQualityData)) ::UnityW<::GlobalNamespace::LightQualityData>  defaultLightQualityData;

/// @brief Field displayVersion, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayVersion, put=__cordl_internal_set_displayVersion)) ::StringW  displayVersion;

/// @brief Field dontMergeMeshes, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontMergeMeshes, put=__cordl_internal_set_dontMergeMeshes)) bool  dontMergeMeshes;

/// @brief Field dummyMaterialEmissive0, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyMaterialEmissive0, put=__cordl_internal_set_dummyMaterialEmissive0)) ::UnityW<::UnityEngine::Material>  dummyMaterialEmissive0;

/// @brief Field dummyMaterialEmissive1, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyMaterialEmissive1, put=__cordl_internal_set_dummyMaterialEmissive1)) ::UnityW<::UnityEngine::Material>  dummyMaterialEmissive1;

/// @brief Field dummyMaterialEmissive2, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyMaterialEmissive2, put=__cordl_internal_set_dummyMaterialEmissive2)) ::UnityW<::UnityEngine::Material>  dummyMaterialEmissive2;

/// @brief Field dummyMaterialEmissive3, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyMaterialEmissive3, put=__cordl_internal_set_dummyMaterialEmissive3)) ::UnityW<::UnityEngine::Material>  dummyMaterialEmissive3;

/// @brief Field dummyMaterialVertexColorsShiny, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyMaterialVertexColorsShiny, put=__cordl_internal_set_dummyMaterialVertexColorsShiny)) ::UnityW<::UnityEngine::Material>  dummyMaterialVertexColorsShiny;

/// @brief Field enviroScene, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enviroScene, put=__cordl_internal_set_enviroScene)) ::StringW  enviroScene;

/// @brief Field fontFallbackData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_fontFallbackData, put=__cordl_internal_set_fontFallbackData)) ::UnityW<::GlobalNamespace::FontFallbackData>  fontFallbackData;

/// @brief Field fontMappingData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fontMappingData, put=__cordl_internal_set_fontMappingData)) ::UnityW<::GlobalNamespace::FontMappingData>  fontMappingData;

/// @brief Field forceSkipAidsActive, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceSkipAidsActive, put=__cordl_internal_set_forceSkipAidsActive)) bool  forceSkipAidsActive;

/// @brief Field localizationDataSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizationDataSet, put=__cordl_internal_set_localizationDataSet)) ::UnityW<::GlobalNamespace::LocalizationDataSet>  localizationDataSet;

/// @brief Field mainAssetPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mainAssetPath, put=setStaticF_mainAssetPath)) ::StringW  mainAssetPath;

/// @brief Field occlusionTransparentMaterials, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionTransparentMaterials, put=__cordl_internal_set_occlusionTransparentMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  occlusionTransparentMaterials;

/// @brief Field occlusionTransparentShader, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionTransparentShader, put=__cordl_internal_set_occlusionTransparentShader)) ::UnityW<::UnityEngine::Shader>  occlusionTransparentShader;

/// @brief Field outputMaterialVertexColors, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputMaterialVertexColors, put=__cordl_internal_set_outputMaterialVertexColors)) ::UnityW<::UnityEngine::Material>  outputMaterialVertexColors;

/// @brief Field platformInitScene, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformInitScene, put=__cordl_internal_set_platformInitScene)) ::StringW  platformInitScene;

/// @brief Field playerCount, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerCount, put=__cordl_internal_set_playerCount)) ::GlobalNamespace::PlayerCount  playerCount;

/// @brief Field regionDebugMaterial, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_regionDebugMaterial, put=__cordl_internal_set_regionDebugMaterial)) ::UnityW<::UnityEngine::Material>  regionDebugMaterial;

/// @brief Field rockMaskTextureCombiner, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockMaskTextureCombiner, put=__cordl_internal_set_rockMaskTextureCombiner)) ::UnityW<::GlobalNamespace::TextureCombiner>  rockMaskTextureCombiner;

/// @brief Field rockShader, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rockShader, put=__cordl_internal_set_rockShader)) ::UnityW<::UnityEngine::Shader>  rockShader;

/// @brief Field secretZoneActive, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get_secretZoneActive, put=__cordl_internal_set_secretZoneActive)) bool  secretZoneActive;

/// @brief Field terrainStudioScene, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainStudioScene, put=__cordl_internal_set_terrainStudioScene)) ::StringW  terrainStudioScene;

/// @brief Field worldScene, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldScene, put=__cordl_internal_set_worldScene)) ::StringW  worldScene;

static inline ::GlobalNamespace::DevSettings* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_baseProp() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_baseProp() ;

constexpr ::StringW const& __cordl_internal_get_baseScene() const;

constexpr ::StringW& __cordl_internal_get_baseScene() ;

constexpr bool const& __cordl_internal_get_bypassVersionCheck() const;

constexpr bool& __cordl_internal_get_bypassVersionCheck() ;

constexpr ::StringW const& __cordl_internal_get_compatibilityVesion() const;

constexpr ::StringW& __cordl_internal_get_compatibilityVesion() ;

constexpr ::UnityW<::GlobalNamespace::ControllerGlyphSet> const& __cordl_internal_get_controllerGlyphSet() const;

constexpr ::UnityW<::GlobalNamespace::ControllerGlyphSet>& __cordl_internal_get_controllerGlyphSet() ;

constexpr ::UnityW<::GlobalNamespace::LightQualityData> const& __cordl_internal_get_defaultLightQualityData() const;

constexpr ::UnityW<::GlobalNamespace::LightQualityData>& __cordl_internal_get_defaultLightQualityData() ;

constexpr ::StringW const& __cordl_internal_get_displayVersion() const;

constexpr ::StringW& __cordl_internal_get_displayVersion() ;

constexpr bool const& __cordl_internal_get_dontMergeMeshes() const;

constexpr bool& __cordl_internal_get_dontMergeMeshes() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dummyMaterialEmissive0() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dummyMaterialEmissive0() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dummyMaterialEmissive1() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dummyMaterialEmissive1() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dummyMaterialEmissive2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dummyMaterialEmissive2() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dummyMaterialEmissive3() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dummyMaterialEmissive3() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dummyMaterialVertexColorsShiny() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dummyMaterialVertexColorsShiny() ;

constexpr ::StringW const& __cordl_internal_get_enviroScene() const;

constexpr ::StringW& __cordl_internal_get_enviroScene() ;

constexpr ::UnityW<::GlobalNamespace::FontFallbackData> const& __cordl_internal_get_fontFallbackData() const;

constexpr ::UnityW<::GlobalNamespace::FontFallbackData>& __cordl_internal_get_fontFallbackData() ;

constexpr ::UnityW<::GlobalNamespace::FontMappingData> const& __cordl_internal_get_fontMappingData() const;

constexpr ::UnityW<::GlobalNamespace::FontMappingData>& __cordl_internal_get_fontMappingData() ;

constexpr bool const& __cordl_internal_get_forceSkipAidsActive() const;

constexpr bool& __cordl_internal_get_forceSkipAidsActive() ;

constexpr ::UnityW<::GlobalNamespace::LocalizationDataSet> const& __cordl_internal_get_localizationDataSet() const;

constexpr ::UnityW<::GlobalNamespace::LocalizationDataSet>& __cordl_internal_get_localizationDataSet() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_occlusionTransparentMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_occlusionTransparentMaterials() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_occlusionTransparentShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_occlusionTransparentShader() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_outputMaterialVertexColors() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_outputMaterialVertexColors() ;

constexpr ::StringW const& __cordl_internal_get_platformInitScene() const;

constexpr ::StringW& __cordl_internal_get_platformInitScene() ;

constexpr ::GlobalNamespace::PlayerCount const& __cordl_internal_get_playerCount() const;

constexpr ::GlobalNamespace::PlayerCount& __cordl_internal_get_playerCount() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_regionDebugMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_regionDebugMaterial() ;

constexpr ::UnityW<::GlobalNamespace::TextureCombiner> const& __cordl_internal_get_rockMaskTextureCombiner() const;

constexpr ::UnityW<::GlobalNamespace::TextureCombiner>& __cordl_internal_get_rockMaskTextureCombiner() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_rockShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_rockShader() ;

constexpr bool const& __cordl_internal_get_secretZoneActive() const;

constexpr bool& __cordl_internal_get_secretZoneActive() ;

constexpr ::StringW const& __cordl_internal_get_terrainStudioScene() const;

constexpr ::StringW& __cordl_internal_get_terrainStudioScene() ;

constexpr ::StringW const& __cordl_internal_get_worldScene() const;

constexpr ::StringW& __cordl_internal_get_worldScene() ;

constexpr void __cordl_internal_set_baseProp(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_baseScene(::StringW  value) ;

constexpr void __cordl_internal_set_bypassVersionCheck(bool  value) ;

constexpr void __cordl_internal_set_compatibilityVesion(::StringW  value) ;

constexpr void __cordl_internal_set_controllerGlyphSet(::UnityW<::GlobalNamespace::ControllerGlyphSet>  value) ;

constexpr void __cordl_internal_set_defaultLightQualityData(::UnityW<::GlobalNamespace::LightQualityData>  value) ;

constexpr void __cordl_internal_set_displayVersion(::StringW  value) ;

constexpr void __cordl_internal_set_dontMergeMeshes(bool  value) ;

constexpr void __cordl_internal_set_dummyMaterialEmissive0(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_dummyMaterialEmissive1(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_dummyMaterialEmissive2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_dummyMaterialEmissive3(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_dummyMaterialVertexColorsShiny(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_enviroScene(::StringW  value) ;

constexpr void __cordl_internal_set_fontFallbackData(::UnityW<::GlobalNamespace::FontFallbackData>  value) ;

constexpr void __cordl_internal_set_fontMappingData(::UnityW<::GlobalNamespace::FontMappingData>  value) ;

constexpr void __cordl_internal_set_forceSkipAidsActive(bool  value) ;

constexpr void __cordl_internal_set_localizationDataSet(::UnityW<::GlobalNamespace::LocalizationDataSet>  value) ;

constexpr void __cordl_internal_set_occlusionTransparentMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_occlusionTransparentShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_outputMaterialVertexColors(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_platformInitScene(::StringW  value) ;

constexpr void __cordl_internal_set_playerCount(::GlobalNamespace::PlayerCount  value) ;

constexpr void __cordl_internal_set_regionDebugMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_rockMaskTextureCombiner(::UnityW<::GlobalNamespace::TextureCombiner>  value) ;

constexpr void __cordl_internal_set_rockShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_secretZoneActive(bool  value) ;

constexpr void __cordl_internal_set_terrainStudioScene(::StringW  value) ;

constexpr void __cordl_internal_set_worldScene(::StringW  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_mainAssetPath() ;

/// @brief Method get_currentSettings, addr 0x180420d80, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::DevSettings> get_currentSettings() ;

static inline void setStaticF_mainAssetPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevSettings(DevSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevSettings(DevSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5161};

/// @brief Field platformInitScene, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___platformInitScene;

/// @brief Field baseScene, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___baseScene;

/// @brief Field worldScene, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___worldScene;

/// @brief Field enviroScene, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___enviroScene;

/// @brief Field terrainStudioScene, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___terrainStudioScene;

/// @brief Field baseProp, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___baseProp;

/// @brief Field localizationDataSet, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizationDataSet>  ___localizationDataSet;

/// @brief Field fontMappingData, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FontMappingData>  ___fontMappingData;

/// @brief Field fontFallbackData, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FontFallbackData>  ___fontFallbackData;

/// @brief Field controllerGlyphSet, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ControllerGlyphSet>  ___controllerGlyphSet;

/// @brief Field rockMaskTextureCombiner, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextureCombiner>  ___rockMaskTextureCombiner;

/// @brief Field defaultLightQualityData, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightQualityData>  ___defaultLightQualityData;

/// @brief Field compatibilityVesion, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___compatibilityVesion;

/// @brief Field displayVersion, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___displayVersion;

/// @brief Field bypassVersionCheck, offset: 0x88, size: 0x1, def value: None
 bool  ___bypassVersionCheck;

/// @brief Field dontMergeMeshes, offset: 0x89, size: 0x1, def value: None
 bool  ___dontMergeMeshes;

/// @brief Field secretZoneActive, offset: 0x8a, size: 0x1, def value: None
 bool  ___secretZoneActive;

/// @brief Field playerCount, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::PlayerCount  ___playerCount;

/// @brief Field forceSkipAidsActive, offset: 0x90, size: 0x1, def value: None
 bool  ___forceSkipAidsActive;

/// @brief Field dummyMaterialVertexColorsShiny, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___dummyMaterialVertexColorsShiny;

/// @brief Field outputMaterialVertexColors, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___outputMaterialVertexColors;

/// @brief Field dummyMaterialEmissive0, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___dummyMaterialEmissive0;

/// @brief Field dummyMaterialEmissive1, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___dummyMaterialEmissive1;

/// @brief Field dummyMaterialEmissive2, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___dummyMaterialEmissive2;

/// @brief Field dummyMaterialEmissive3, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___dummyMaterialEmissive3;

/// @brief Field occlusionTransparentMaterials, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___occlusionTransparentMaterials;

/// @brief Field occlusionTransparentShader, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___occlusionTransparentShader;

/// @brief Field rockShader, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___rockShader;

/// @brief Field regionDebugMaterial, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___regionDebugMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevSettings, ___platformInitScene) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___baseScene) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___worldScene) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___enviroScene) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___terrainStudioScene) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___baseProp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___localizationDataSet) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___fontMappingData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___fontFallbackData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___controllerGlyphSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___rockMaskTextureCombiner) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___defaultLightQualityData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___compatibilityVesion) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___displayVersion) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___bypassVersionCheck) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___dontMergeMeshes) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___secretZoneActive) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___playerCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___forceSkipAidsActive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___dummyMaterialVertexColorsShiny) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___outputMaterialVertexColors) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___dummyMaterialEmissive0) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___dummyMaterialEmissive1) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___dummyMaterialEmissive2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___dummyMaterialEmissive3) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___occlusionTransparentMaterials) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___occlusionTransparentShader) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___rockShader) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevSettings, ___regionDebugMaterial) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevSettings) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
