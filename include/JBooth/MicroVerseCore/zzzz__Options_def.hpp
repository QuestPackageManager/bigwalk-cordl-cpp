#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Options)
namespace JBooth::MicroVerseCore {
class Options_Colors;
}
namespace JBooth::MicroVerseCore {
struct Options_GizmoVisibility;
}
namespace JBooth::MicroVerseCore {
class Options_Settings;
}
namespace JBooth::MicroVerseCore {
struct Settings_Options_TerrainSearchMethod;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct Options_GizmoVisibility;
}
namespace JBooth::MicroVerseCore {
struct Settings_Options_TerrainSearchMethod;
}
namespace JBooth::MicroVerseCore {
class Options;
}
namespace JBooth::MicroVerseCore {
class Options_Colors;
}
namespace JBooth::MicroVerseCore {
class Options_Settings;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::Options_GizmoVisibility);
MARK_VAL_T(::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod);
MARK_REF_T(::JBooth::MicroVerseCore::Options*);
MARK_REF_T(::JBooth::MicroVerseCore::Options_Colors*);
MARK_REF_T(::JBooth::MicroVerseCore::Options_Settings*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Options_GizmoVisibility, "JBooth.MicroVerseCore", "Options/GizmoVisibility");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod, "JBooth.MicroVerseCore", "Options/Settings/TerrainSearchMethod");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Options*, "JBooth.MicroVerseCore", "Options");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Options_Colors*, "JBooth.MicroVerseCore", "Options/Colors");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Options_Settings*, "JBooth.MicroVerseCore", "Options/Settings");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Options/Settings/TerrainSearchMethod
struct CORDL_TYPE Settings_Options_TerrainSearchMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Settings_Options_TerrainSearchMethod_Unwrapped
enum struct __Settings_Options_TerrainSearchMethod_Unwrapped : int32_t {
__E_Hierarchy = static_cast<int32_t>(0x0),
__E_AllInScene = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Settings_Options_TerrainSearchMethod_Unwrapped () const noexcept {
return static_cast<__Settings_Options_TerrainSearchMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Settings_Options_TerrainSearchMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Settings_Options_TerrainSearchMethod(int32_t  value__) noexcept;

/// @brief Field AllInScene value: I32(1)
static ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod const AllInScene;

/// @brief Field Hierarchy value: I32(0)
static ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod const Hierarchy;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Options::Settings::TerrainSearchMethod, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Options/Settings
class CORDL_TYPE Options_Settings : public ::System::Object {
public:
// Declarations
using TerrainSearchMethod = ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod;

/// @brief Field SyncHolesOnSave, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_SyncHolesOnSave, put=__cordl_internal_set_SyncHolesOnSave)) bool  SyncHolesOnSave;

/// @brief Field controllFoliageDraw, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_controllFoliageDraw, put=__cordl_internal_set_controllFoliageDraw)) bool  controllFoliageDraw;

/// @brief Field keepLayersInSync, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepLayersInSync, put=__cordl_internal_set_keepLayersInSync)) bool  keepLayersInSync;

/// @brief Field maxHeightSaveBackPerFrame, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHeightSaveBackPerFrame, put=__cordl_internal_set_maxHeightSaveBackPerFrame)) int32_t  maxHeightSaveBackPerFrame;

/// @brief Field sceneCameraCullingDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneCameraCullingDistance, put=__cordl_internal_set_sceneCameraCullingDistance)) float_t  sceneCameraCullingDistance;

/// @brief Field sceneTerrainCullingDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneTerrainCullingDistance, put=__cordl_internal_set_sceneTerrainCullingDistance)) float_t  sceneTerrainCullingDistance;

/// @brief Field sceneVegetationCullingDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneVegetationCullingDistance, put=__cordl_internal_set_sceneVegetationCullingDistance)) float_t  sceneVegetationCullingDistance;

/// @brief Field terrainSearchMethod, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_terrainSearchMethod, put=__cordl_internal_set_terrainSearchMethod)) ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod  terrainSearchMethod;

/// @brief Field useSceneCulling, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSceneCulling, put=__cordl_internal_set_useSceneCulling)) bool  useSceneCulling;

static inline ::JBooth::MicroVerseCore::Options_Settings* New_ctor() ;

constexpr bool const& __cordl_internal_get_SyncHolesOnSave() const;

constexpr bool& __cordl_internal_get_SyncHolesOnSave() ;

constexpr bool const& __cordl_internal_get_controllFoliageDraw() const;

constexpr bool& __cordl_internal_get_controllFoliageDraw() ;

constexpr bool const& __cordl_internal_get_keepLayersInSync() const;

constexpr bool& __cordl_internal_get_keepLayersInSync() ;

constexpr int32_t const& __cordl_internal_get_maxHeightSaveBackPerFrame() const;

constexpr int32_t& __cordl_internal_get_maxHeightSaveBackPerFrame() ;

constexpr float_t const& __cordl_internal_get_sceneCameraCullingDistance() const;

constexpr float_t& __cordl_internal_get_sceneCameraCullingDistance() ;

constexpr float_t const& __cordl_internal_get_sceneTerrainCullingDistance() const;

constexpr float_t& __cordl_internal_get_sceneTerrainCullingDistance() ;

constexpr float_t const& __cordl_internal_get_sceneVegetationCullingDistance() const;

constexpr float_t& __cordl_internal_get_sceneVegetationCullingDistance() ;

constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod const& __cordl_internal_get_terrainSearchMethod() const;

constexpr ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod& __cordl_internal_get_terrainSearchMethod() ;

constexpr bool const& __cordl_internal_get_useSceneCulling() const;

constexpr bool& __cordl_internal_get_useSceneCulling() ;

constexpr void __cordl_internal_set_SyncHolesOnSave(bool  value) ;

constexpr void __cordl_internal_set_controllFoliageDraw(bool  value) ;

constexpr void __cordl_internal_set_keepLayersInSync(bool  value) ;

constexpr void __cordl_internal_set_maxHeightSaveBackPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_sceneCameraCullingDistance(float_t  value) ;

constexpr void __cordl_internal_set_sceneTerrainCullingDistance(float_t  value) ;

constexpr void __cordl_internal_set_sceneVegetationCullingDistance(float_t  value) ;

constexpr void __cordl_internal_set_terrainSearchMethod(::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod  value) ;

constexpr void __cordl_internal_set_useSceneCulling(bool  value) ;

/// @brief Method .ctor, addr 0x18143cff0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Options_Settings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Options_Settings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Options_Settings(Options_Settings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Options_Settings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Options_Settings(Options_Settings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18026};

/// @brief Field terrainSearchMethod, offset: 0x10, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Settings_Options_TerrainSearchMethod  ___terrainSearchMethod;

/// @brief Field keepLayersInSync, offset: 0x14, size: 0x1, def value: None
 bool  ___keepLayersInSync;

/// @brief Field maxHeightSaveBackPerFrame, offset: 0x18, size: 0x4, def value: None
 int32_t  ___maxHeightSaveBackPerFrame;

/// @brief Field useSceneCulling, offset: 0x1c, size: 0x1, def value: None
 bool  ___useSceneCulling;

/// @brief Field controllFoliageDraw, offset: 0x1d, size: 0x1, def value: None
 bool  ___controllFoliageDraw;

/// @brief Field sceneTerrainCullingDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___sceneTerrainCullingDistance;

/// @brief Field sceneVegetationCullingDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___sceneVegetationCullingDistance;

/// @brief Field sceneCameraCullingDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___sceneCameraCullingDistance;

/// @brief Field SyncHolesOnSave, offset: 0x2c, size: 0x1, def value: None
 bool  ___SyncHolesOnSave;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___terrainSearchMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___keepLayersInSync) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___maxHeightSaveBackPerFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___useSceneCulling) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___controllFoliageDraw) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___sceneTerrainCullingDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___sceneVegetationCullingDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___sceneCameraCullingDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Settings, ___SyncHolesOnSave) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Options_Settings) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object, UnityEngine.Color
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Options/Colors
class CORDL_TYPE Options_Colors : public ::System::Object {
public:
// Declarations
/// @brief Field ambientAreaColor, offset 0xa4, size 0x10 
 __declspec(property(get=__cordl_internal_get_ambientAreaColor, put=__cordl_internal_set_ambientAreaColor)) ::UnityEngine::Color  ambientAreaColor;

/// @brief Field copyStampColor, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_copyStampColor, put=__cordl_internal_set_copyStampColor)) ::UnityEngine::Color  copyStampColor;

/// @brief Field detailStampColor, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_detailStampColor, put=__cordl_internal_set_detailStampColor)) ::UnityEngine::Color  detailStampColor;

/// @brief Field drawStampPreviews, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawStampPreviews, put=__cordl_internal_set_drawStampPreviews)) bool  drawStampPreviews;

/// @brief Field filterPreviewColor, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get_filterPreviewColor, put=__cordl_internal_set_filterPreviewColor)) ::UnityEngine::Color  filterPreviewColor;

/// @brief Field heightStampColor, offset 0x14, size 0x10 
 __declspec(property(get=__cordl_internal_get_heightStampColor, put=__cordl_internal_set_heightStampColor)) ::UnityEngine::Color  heightStampColor;

/// @brief Field maskStampColor, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_maskStampColor, put=__cordl_internal_set_maskStampColor)) ::UnityEngine::Color  maskStampColor;

/// @brief Field noisePreviewColor, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_noisePreviewColor, put=__cordl_internal_set_noisePreviewColor)) ::UnityEngine::Color  noisePreviewColor;

/// @brief Field objectStampColor, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_objectStampColor, put=__cordl_internal_set_objectStampColor)) ::UnityEngine::Color  objectStampColor;

/// @brief Field occluderStampColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_occluderStampColor, put=__cordl_internal_set_occluderStampColor)) ::UnityEngine::Color  occluderStampColor;

/// @brief Field pasteStampColor, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get_pasteStampColor, put=__cordl_internal_set_pasteStampColor)) ::UnityEngine::Color  pasteStampColor;

/// @brief Field textureStampColor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_textureStampColor, put=__cordl_internal_set_textureStampColor)) ::UnityEngine::Color  textureStampColor;

/// @brief Field treeStampColor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_treeStampColor, put=__cordl_internal_set_treeStampColor)) ::UnityEngine::Color  treeStampColor;

static inline ::JBooth::MicroVerseCore::Options_Colors* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_ambientAreaColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_ambientAreaColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_copyStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_copyStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_detailStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_detailStampColor() ;

constexpr bool const& __cordl_internal_get_drawStampPreviews() const;

constexpr bool& __cordl_internal_get_drawStampPreviews() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_filterPreviewColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_filterPreviewColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_heightStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_heightStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_maskStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_maskStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_noisePreviewColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_noisePreviewColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_objectStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_objectStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_occluderStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_occluderStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_pasteStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_pasteStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_textureStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_textureStampColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_treeStampColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_treeStampColor() ;

constexpr void __cordl_internal_set_ambientAreaColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_copyStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_detailStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_drawStampPreviews(bool  value) ;

constexpr void __cordl_internal_set_filterPreviewColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_heightStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_maskStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_noisePreviewColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_objectStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_occluderStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_pasteStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_textureStampColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_treeStampColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x18142a670, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Options_Colors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Options_Colors", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Options_Colors(Options_Colors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Options_Colors", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Options_Colors(Options_Colors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18027};

/// @brief Field drawStampPreviews, offset: 0x10, size: 0x1, def value: None
 bool  ___drawStampPreviews;

/// @brief Field heightStampColor, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Color  ___heightStampColor;

/// @brief Field textureStampColor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___textureStampColor;

/// @brief Field treeStampColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___treeStampColor;

/// @brief Field detailStampColor, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ___detailStampColor;

/// @brief Field occluderStampColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ___occluderStampColor;

/// @brief Field copyStampColor, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Color  ___copyStampColor;

/// @brief Field pasteStampColor, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Color  ___pasteStampColor;

/// @brief Field maskStampColor, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Color  ___maskStampColor;

/// @brief Field objectStampColor, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ___objectStampColor;

/// @brief Field ambientAreaColor, offset: 0xa4, size: 0x10, def value: None
 ::UnityEngine::Color  ___ambientAreaColor;

/// @brief Field noisePreviewColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ___noisePreviewColor;

/// @brief Field filterPreviewColor, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Color  ___filterPreviewColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___drawStampPreviews) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___heightStampColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___textureStampColor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___treeStampColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___detailStampColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___occluderStampColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___copyStampColor) == 0x64, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___pasteStampColor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___maskStampColor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___objectStampColor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___ambientAreaColor) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___noisePreviewColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options_Colors, ___filterPreviewColor) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Options_Colors) == 0xd8, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.Options/GizmoVisibility
struct CORDL_TYPE Options_GizmoVisibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Options_GizmoVisibility_Unwrapped
enum struct __Options_GizmoVisibility_Unwrapped : int32_t {
__E_GizmosOff = static_cast<int32_t>(0x0),
__E_Culled = static_cast<int32_t>(0x1),
__E_AlwaysVisible = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Options_GizmoVisibility_Unwrapped () const noexcept {
return static_cast<__Options_GizmoVisibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Options_GizmoVisibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Options_GizmoVisibility(int32_t  value__) noexcept;

/// @brief Field AlwaysVisible value: I32(2)
static ::JBooth::MicroVerseCore::Options_GizmoVisibility const AlwaysVisible;

/// @brief Field Culled value: I32(1)
static ::JBooth::MicroVerseCore::Options_GizmoVisibility const Culled;

/// @brief Field GizmosOff value: I32(0)
static ::JBooth::MicroVerseCore::Options_GizmoVisibility const GizmosOff;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Options_GizmoVisibility, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Options_GizmoVisibility) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.Options::GizmoVisibility, System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Options
class CORDL_TYPE Options : public ::System::Object {
public:
// Declarations
using Colors = ::JBooth::MicroVerseCore::Options_Colors;

using GizmoVisibility = ::JBooth::MicroVerseCore::Options_GizmoVisibility;

using Settings = ::JBooth::MicroVerseCore::Options_Settings;

/// @brief Field colors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::JBooth::MicroVerseCore::Options_Colors*  colors;

/// @brief Field gizmoVisibility, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gizmoVisibility, put=__cordl_internal_set_gizmoVisibility)) ::JBooth::MicroVerseCore::Options_GizmoVisibility  gizmoVisibility;

/// @brief Field settings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::JBooth::MicroVerseCore::Options_Settings*  settings;

static inline ::JBooth::MicroVerseCore::Options* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::Options_Colors* const& __cordl_internal_get_colors() const;

constexpr ::JBooth::MicroVerseCore::Options_Colors*& __cordl_internal_get_colors() ;

constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility const& __cordl_internal_get_gizmoVisibility() const;

constexpr ::JBooth::MicroVerseCore::Options_GizmoVisibility& __cordl_internal_get_gizmoVisibility() ;

constexpr ::JBooth::MicroVerseCore::Options_Settings* const& __cordl_internal_get_settings() const;

constexpr ::JBooth::MicroVerseCore::Options_Settings*& __cordl_internal_get_settings() ;

constexpr void __cordl_internal_set_colors(::JBooth::MicroVerseCore::Options_Colors*  value) ;

constexpr void __cordl_internal_set_gizmoVisibility(::JBooth::MicroVerseCore::Options_GizmoVisibility  value) ;

constexpr void __cordl_internal_set_settings(::JBooth::MicroVerseCore::Options_Settings*  value) ;

/// @brief Method .ctor, addr 0x18143bac0, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Options() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Options", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Options(Options && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Options", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Options(Options const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18029};

/// @brief Field settings, offset: 0x10, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Options_Settings*  ___settings;

/// @brief Field colors, offset: 0x18, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Options_Colors*  ___colors;

/// @brief Field gizmoVisibility, offset: 0x20, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::Options_GizmoVisibility  ___gizmoVisibility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Options, ___settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options, ___colors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Options, ___gizmoVisibility) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Options) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
