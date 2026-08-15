#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TVETerrainSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVETerrainLayerSettings;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace TheVisualEngine {
class TVETerrainSettings;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVETerrainSettings*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETerrainSettings*, "TheVisualEngine", "TVETerrainSettings");
// Dependencies System.Object, UnityEngine.Vector3
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVETerrainSettings
class CORDL_TYPE TVETerrainSettings : public ::System::Object {
public:
// Declarations
/// @brief Field terrainAlbedo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainAlbedo, put=__cordl_internal_set_terrainAlbedo)) ::UnityW<::UnityEngine::Texture>  terrainAlbedo;

/// @brief Field terrainControl01, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainControl01, put=__cordl_internal_set_terrainControl01)) ::UnityW<::UnityEngine::Texture>  terrainControl01;

/// @brief Field terrainControl02, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainControl02, put=__cordl_internal_set_terrainControl02)) ::UnityW<::UnityEngine::Texture>  terrainControl02;

/// @brief Field terrainControl03, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainControl03, put=__cordl_internal_set_terrainControl03)) ::UnityW<::UnityEngine::Texture>  terrainControl03;

/// @brief Field terrainControl04, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainControl04, put=__cordl_internal_set_terrainControl04)) ::UnityW<::UnityEngine::Texture>  terrainControl04;

/// @brief Field terrainFeature, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainFeature, put=__cordl_internal_set_terrainFeature)) ::UnityW<::UnityEngine::Texture>  terrainFeature;

/// @brief Field terrainHolesMask, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainHolesMask, put=__cordl_internal_set_terrainHolesMask)) ::UnityW<::UnityEngine::Texture>  terrainHolesMask;

/// @brief Field terrainLayers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainLayers, put=__cordl_internal_set_terrainLayers)) ::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>*  terrainLayers;

/// @brief Field terrainNormal, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainNormal, put=__cordl_internal_set_terrainNormal)) ::UnityW<::UnityEngine::Texture>  terrainNormal;

/// @brief Field terrainPosition, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_terrainPosition, put=__cordl_internal_set_terrainPosition)) ::UnityEngine::Vector3  terrainPosition;

/// @brief Field terrainShader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainShader, put=__cordl_internal_set_terrainShader)) ::UnityW<::UnityEngine::Texture>  terrainShader;

/// @brief Field terrainSize, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_terrainSize, put=__cordl_internal_set_terrainSize)) ::UnityEngine::Vector3  terrainSize;

/// @brief Field useCustomTextures, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomTextures, put=__cordl_internal_set_useCustomTextures)) bool  useCustomTextures;

/// @brief Field useCustomTransforms, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCustomTransforms, put=__cordl_internal_set_useCustomTransforms)) bool  useCustomTransforms;

/// @brief Field useLayersOrderAsID, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLayersOrderAsID, put=__cordl_internal_set_useLayersOrderAsID)) bool  useLayersOrderAsID;

static inline ::TheVisualEngine::TVETerrainSettings* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainAlbedo() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainAlbedo() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainControl01() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainControl01() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainControl02() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainControl02() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainControl03() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainControl03() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainControl04() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainControl04() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainFeature() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainFeature() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainHolesMask() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainHolesMask() ;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>* const& __cordl_internal_get_terrainLayers() const;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>*& __cordl_internal_get_terrainLayers() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainNormal() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_terrainPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_terrainPosition() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_terrainShader() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_terrainShader() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_terrainSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_terrainSize() ;

constexpr bool const& __cordl_internal_get_useCustomTextures() const;

constexpr bool& __cordl_internal_get_useCustomTextures() ;

constexpr bool const& __cordl_internal_get_useCustomTransforms() const;

constexpr bool& __cordl_internal_get_useCustomTransforms() ;

constexpr bool const& __cordl_internal_get_useLayersOrderAsID() const;

constexpr bool& __cordl_internal_get_useLayersOrderAsID() ;

constexpr void __cordl_internal_set_terrainAlbedo(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainControl01(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainControl02(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainControl03(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainControl04(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainFeature(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainHolesMask(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainLayers(::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>*  value) ;

constexpr void __cordl_internal_set_terrainNormal(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_terrainShader(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set_terrainSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_useCustomTextures(bool  value) ;

constexpr void __cordl_internal_set_useCustomTransforms(bool  value) ;

constexpr void __cordl_internal_set_useLayersOrderAsID(bool  value) ;

/// @brief Method .ctor, addr 0x1804b9960, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVETerrainSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVETerrainSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVETerrainSettings(TVETerrainSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVETerrainSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVETerrainSettings(TVETerrainSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19610};

/// @brief Field terrainAlbedo, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainAlbedo;

/// @brief Field terrainNormal, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainNormal;

/// @brief Field terrainShader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainShader;

/// @brief Field terrainFeature, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainFeature;

/// @brief Field useCustomTextures, offset: 0x30, size: 0x1, def value: None
 bool  ___useCustomTextures;

/// @brief Field terrainControl01, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainControl01;

/// @brief Field terrainControl02, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainControl02;

/// @brief Field terrainControl03, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainControl03;

/// @brief Field terrainControl04, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainControl04;

/// @brief Field terrainHolesMask, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ___terrainHolesMask;

/// @brief Field useCustomTransforms, offset: 0x60, size: 0x1, def value: None
 bool  ___useCustomTransforms;

/// @brief Field terrainPosition, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___terrainPosition;

/// @brief Field terrainSize, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___terrainSize;

/// @brief Field useLayersOrderAsID, offset: 0x7c, size: 0x1, def value: None
 bool  ___useLayersOrderAsID;

/// @brief Field terrainLayers, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::TheVisualEngine::TVETerrainLayerSettings*>*  ___terrainLayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainAlbedo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainNormal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainFeature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___useCustomTextures) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainControl01) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainControl02) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainControl03) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainControl04) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainHolesMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___useCustomTransforms) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainPosition) == 0x64, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainSize) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___useLayersOrderAsID) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVETerrainSettings, ___terrainLayers) == 0x80, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETerrainSettings) == 0x88, "Size mismatch!");

} // namespace end def TheVisualEngine
