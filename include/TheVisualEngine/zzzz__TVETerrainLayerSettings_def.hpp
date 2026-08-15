#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainLayerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVEUVMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TVETerrainLayerSettings)
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace TheVisualEngine {
class TVETerrainLayerSettings;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVETerrainLayerSettings*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETerrainLayerSettings*, "TheVisualEngine", "TVETerrainLayerSettings");
// Dependencies System.Object, TheVisualEngine.TVEUVMode, UnityEngine.Color, UnityEngine.Vector4
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVETerrainLayerSettings
class CORDL_TYPE TVETerrainLayerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field isInitialized, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Field layerAlbedo, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerAlbedo, put=__cordl_internal_set_layerAlbedo)) ::UnityW<::UnityEngine::Texture>  layerAlbedo;

/// @brief Field layerColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_layerColor, put=__cordl_internal_set_layerColor)) ::UnityEngine::Color  layerColor;

/// @brief Field layerID, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerID, put=__cordl_internal_set_layerID)) int32_t  layerID;

/// @brief Field layerNormal, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerNormal, put=__cordl_internal_set_layerNormal)) ::UnityW<::UnityEngine::Texture>  layerNormal;

/// @brief Field layerNormalScale, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerNormalScale, put=__cordl_internal_set_layerNormalScale)) float_t  layerNormalScale;

/// @brief Field layerRemapMax, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_layerRemapMax, put=__cordl_internal_set_layerRemapMax)) ::UnityEngine::Vector4  layerRemapMax;

/// @brief Field layerRemapMin, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_layerRemapMin, put=__cordl_internal_set_layerRemapMin)) ::UnityEngine::Vector4  layerRemapMin;

/// @brief Field layerShader, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerShader, put=__cordl_internal_set_layerShader)) ::UnityW<::UnityEngine::Texture>  layerShader;

/// @brief Field layerSmoothness, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerSmoothness, put=__cordl_internal_set_layerSmoothness)) float_t  layerSmoothness;

/// @brief Field layerSpecular, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_layerSpecular, put=__cordl_internal_set_layerSpecular)) ::UnityEngine::Color  layerSpecular;

/// @brief Field layerUVMode, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerUVMode, put=__cordl_internal_set_layerUVMode)) ::TheVisualEngine::TVEUVMode  layerUVMode;

/// @brief Field layerUVValue, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get_layerUVValue, put=__cordl_internal_set_layerUVValue)) ::UnityEngine::Vector4  layerUVValue;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field terrainLayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainLayer, put=__cordl_internal_set_terrainLayer)) ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer;

/// @brief Field useCustomCoords, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomCoords, put=__cordl_internal_set_useCustomCoords)) bool  useCustomCoords;

/// @brief Field useCustomLayer, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomLayer, put=__cordl_internal_set_useCustomLayer)) bool  useCustomLayer;

/// @brief Field useCustomSettings, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomSettings, put=__cordl_internal_set_useCustomSettings)) bool  useCustomSettings;

/// @brief Field useCustomTextures, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomTextures, put=__cordl_internal_set_useCustomTextures)) bool  useCustomTextures;

static inline ::TheVisualEngine::TVETerrainLayerSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_layerAlbedo() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_layerAlbedo() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_layerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_layerColor() ;

constexpr int32_t const& __cordl_internal_get_layerID() const;

constexpr int32_t& __cordl_internal_get_layerID() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_layerNormal() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_layerNormal() ;

constexpr float_t const& __cordl_internal_get_layerNormalScale() const;

constexpr float_t& __cordl_internal_get_layerNormalScale() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_layerRemapMax() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_layerRemapMax() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_layerRemapMin() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_layerRemapMin() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_layerShader() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_layerShader() ;

constexpr float_t const& __cordl_internal_get_layerSmoothness() const;

constexpr float_t& __cordl_internal_get_layerSmoothness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_layerSpecular() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_layerSpecular() ;

constexpr ::TheVisualEngine::TVEUVMode const& __cordl_internal_get_layerUVMode() const;

constexpr ::TheVisualEngine::TVEUVMode& __cordl_internal_get_layerUVMode() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_layerUVValue() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_layerUVValue() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::UnityW<::UnityEngine::TerrainLayer> const& __cordl_internal_get_terrainLayer() const;

constexpr ::UnityW<::UnityEngine::TerrainLayer>& __cordl_internal_get_terrainLayer() ;

constexpr bool const& __cordl_internal_get_useCustomCoords() const;

constexpr bool& __cordl_internal_get_useCustomCoords() ;

constexpr bool const& __cordl_internal_get_useCustomLayer() const;

constexpr bool& __cordl_internal_get_useCustomLayer() ;

constexpr bool const& __cordl_internal_get_useCustomSettings() const;

constexpr bool& __cordl_internal_get_useCustomSettings() ;

constexpr bool const& __cordl_internal_get_useCustomTextures() const;

constexpr bool& __cordl_internal_get_useCustomTextures() ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_layerAlbedo(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_layerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_layerID(int32_t  value) ;

constexpr void __cordl_internal_set_layerNormal(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_layerNormalScale(float_t  value) ;

constexpr void __cordl_internal_set_layerRemapMax(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_layerRemapMin(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_layerShader(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_layerSmoothness(float_t  value) ;

constexpr void __cordl_internal_set_layerSpecular(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_layerUVMode(::TheVisualEngine::TVEUVMode  value) ;

constexpr void __cordl_internal_set_layerUVValue(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_terrainLayer(::UnityW<::UnityEngine::TerrainLayer>  value) ;

constexpr void __cordl_internal_set_useCustomCoords(bool  value) ;

constexpr void __cordl_internal_set_useCustomLayer(bool  value) ;

constexpr void __cordl_internal_set_useCustomSettings(bool  value) ;

constexpr void __cordl_internal_set_useCustomTextures(bool  value) ;

/// @brief Method .ctor, addr 0x1804b98c0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVETerrainLayerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVETerrainLayerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVETerrainLayerSettings(TVETerrainLayerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVETerrainLayerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVETerrainLayerSettings(TVETerrainLayerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19612};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field isInitialized, offset: 0x18, size: 0x1, def value: None
 bool  ___isInitialized;

/// @brief Field layerID, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___layerID;

/// @brief Field layerColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___layerColor;

/// @brief Field useCustomLayer, offset: 0x30, size: 0x1, def value: None
 bool  ___useCustomLayer;

/// @brief Field terrainLayer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  ___terrainLayer;

/// @brief Field useCustomTextures, offset: 0x40, size: 0x1, def value: None
 bool  ___useCustomTextures;

/// @brief Field layerAlbedo, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___layerAlbedo;

/// @brief Field layerNormal, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___layerNormal;

/// @brief Field layerShader, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___layerShader;

/// @brief Field useCustomSettings, offset: 0x60, size: 0x1, def value: None
 bool  ___useCustomSettings;

/// @brief Field layerSpecular, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ___layerSpecular;

/// @brief Field layerRemapMin, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___layerRemapMin;

/// @brief Field layerRemapMax, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___layerRemapMax;

/// @brief Field layerSmoothness, offset: 0x94, size: 0x4, def value: None
 float_t  ___layerSmoothness;

/// @brief Field layerNormalScale, offset: 0x98, size: 0x4, def value: None
 float_t  ___layerNormalScale;

/// @brief Field useCustomCoords, offset: 0x9c, size: 0x1, def value: None
 bool  ___useCustomCoords;

/// @brief Field layerUVMode, offset: 0xa0, size: 0x4, def value: None
 ::TheVisualEngine::TVEUVMode  ___layerUVMode;

/// @brief Field layerUVValue, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___layerUVValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___isInitialized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerID) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___useCustomLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___terrainLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___useCustomTextures) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerAlbedo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerNormal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerShader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___useCustomSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerSpecular) == 0x64, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerRemapMin) == 0x74, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerRemapMax) == 0x84, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerSmoothness) == 0x94, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerNormalScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___useCustomCoords) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerUVMode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainLayerSettings, ___layerUVValue) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETerrainLayerSettings) == 0xb8, "Size mismatch!");

} // namespace end def TheVisualEngine
