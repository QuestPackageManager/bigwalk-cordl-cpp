#pragma once
// IWYU pragma private; include "Rowlan/Genesis/GenesisData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__TreeStamp_def.hpp"
#include "Rowlan/Genesis/zzzz__HeightStampSettings_def.hpp"
#include "Rowlan/Genesis/zzzz__LayerSettings_def.hpp"
#include "Rowlan/Genesis/zzzz__PathSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GenesisData)
namespace JBooth::MicroVerseCore {
class TreeStamp;
}
namespace Rowlan::Genesis {
struct GenesisData_HeightStampPlacement;
}
namespace Rowlan::Genesis {
struct GenesisData_TerrainSettings;
}
namespace Rowlan::Genesis {
struct GenesisData_TreeSettings;
}
// Forward declare root types
namespace Rowlan::Genesis {
struct GenesisData_HeightStampPlacement;
}
namespace Rowlan::Genesis {
class GenesisData;
}
namespace Rowlan::Genesis {
struct GenesisData_TerrainSettings;
}
namespace Rowlan::Genesis {
struct GenesisData_TreeSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::GenesisData_HeightStampPlacement);
MARK_REF_T(::Rowlan::Genesis::GenesisData*);
MARK_VAL_T(::Rowlan::Genesis::GenesisData_TerrainSettings);
MARK_VAL_T(::Rowlan::Genesis::GenesisData_TreeSettings);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::GenesisData_HeightStampPlacement, "Rowlan.Genesis", "GenesisData/HeightStampPlacement");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::GenesisData*, "Rowlan.Genesis", "GenesisData");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::GenesisData_TerrainSettings, "Rowlan.Genesis", "GenesisData/TerrainSettings");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::GenesisData_TreeSettings, "Rowlan.Genesis", "GenesisData/TreeSettings");
// Dependencies 
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.GenesisData/HeightStampPlacement
struct CORDL_TYPE GenesisData_HeightStampPlacement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GenesisData_HeightStampPlacement_Unwrapped
enum struct __GenesisData_HeightStampPlacement_Unwrapped : int32_t {
__E_Random = static_cast<int32_t>(0x0),
__E_Grid = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GenesisData_HeightStampPlacement_Unwrapped () const noexcept {
return static_cast<__GenesisData_HeightStampPlacement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GenesisData_HeightStampPlacement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GenesisData_HeightStampPlacement(int32_t  value__) noexcept;

/// @brief Field Grid value: I32(1)
static ::Rowlan::Genesis::GenesisData_HeightStampPlacement const Grid;

/// @brief Field Random value: I32(0)
static ::Rowlan::Genesis::GenesisData_HeightStampPlacement const Random;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::GenesisData_HeightStampPlacement, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::GenesisData_HeightStampPlacement) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis
// Dependencies UnityEngine.Vector3
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.GenesisData/TerrainSettings
struct CORDL_TYPE GenesisData_TerrainSettings {
public:
// Declarations
/// @brief Method Reset, addr 0x181abfbf0, size 0x230, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr GenesisData_TerrainSettings() ;

// Ctor Parameters [CppParam { name: "totalWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tilesX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tilesZ", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "groupingID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "autoConnect", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pixelError", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "baseMapDistance", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "drawInstanced", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "heightmapResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "controlTextureResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "baseTextureResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "detailResolution", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "detailResolutionPerPatch", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clearExisting", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assetDirectory", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "enableGuid", ty: "bool", modifiers: "", def_value: None }]
constexpr GenesisData_TerrainSettings(int32_t  totalWidth, int32_t  totalLength, int32_t  totalHeight, int32_t  tilesX, int32_t  tilesZ, ::UnityEngine::Vector3  startPosition, int32_t  groupingID, bool  autoConnect, int32_t  pixelError, int32_t  baseMapDistance, bool  drawInstanced, int32_t  heightmapResolution, int32_t  controlTextureResolution, int32_t  baseTextureResolution, int32_t  detailResolution, int32_t  detailResolutionPerPatch, bool  clearExisting, ::StringW  assetDirectory, bool  enableGuid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field totalWidth, offset: 0x0, size: 0x4, def value: None
 int32_t  totalWidth;

/// @brief Field totalLength, offset: 0x4, size: 0x4, def value: None
 int32_t  totalLength;

/// @brief Field totalHeight, offset: 0x8, size: 0x4, def value: None
 int32_t  totalHeight;

/// @brief Field tilesX, offset: 0xc, size: 0x4, def value: None
 int32_t  tilesX;

/// @brief Field tilesZ, offset: 0x10, size: 0x4, def value: None
 int32_t  tilesZ;

/// @brief Field startPosition, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  startPosition;

/// @brief Field groupingID, offset: 0x20, size: 0x4, def value: None
 int32_t  groupingID;

/// @brief Field autoConnect, offset: 0x24, size: 0x1, def value: None
 bool  autoConnect;

/// @brief Field pixelError, offset: 0x28, size: 0x4, def value: None
 int32_t  pixelError;

/// @brief Field baseMapDistance, offset: 0x2c, size: 0x4, def value: None
 int32_t  baseMapDistance;

/// @brief Field drawInstanced, offset: 0x30, size: 0x1, def value: None
 bool  drawInstanced;

/// @brief Field heightmapResolution, offset: 0x34, size: 0x4, def value: None
 int32_t  heightmapResolution;

/// @brief Field controlTextureResolution, offset: 0x38, size: 0x4, def value: None
 int32_t  controlTextureResolution;

/// @brief Field baseTextureResolution, offset: 0x3c, size: 0x4, def value: None
 int32_t  baseTextureResolution;

/// @brief Field detailResolution, offset: 0x40, size: 0x4, def value: None
 int32_t  detailResolution;

/// @brief Field detailResolutionPerPatch, offset: 0x44, size: 0x4, def value: None
 int32_t  detailResolutionPerPatch;

/// @brief Field clearExisting, offset: 0x48, size: 0x1, def value: None
 bool  clearExisting;

/// @brief Field assetDirectory, offset: 0x50, size: 0x8, def value: None
 ::StringW  assetDirectory;

/// @brief Field enableGuid, offset: 0x58, size: 0x1, def value: None
 bool  enableGuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, totalWidth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, totalLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, totalHeight) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, tilesX) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, tilesZ) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, startPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, groupingID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, autoConnect) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, pixelError) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, baseMapDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, drawInstanced) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, heightmapResolution) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, controlTextureResolution) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, baseTextureResolution) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, detailResolution) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, detailResolutionPerPatch) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, clearExisting) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, assetDirectory) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData_TerrainSettings, enableGuid) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::GenesisData_TerrainSettings) == 0x60, "Size mismatch!");

} // namespace end def Rowlan::Genesis
// Dependencies JBooth.MicroVerseCore.TreeStamp
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.GenesisData/TreeSettings
struct CORDL_TYPE GenesisData_TreeSettings {
public:
// Declarations
/// @brief Method Reset, addr 0x181ac21a0, size 0x70, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr GenesisData_TreeSettings() ;

// Ctor Parameters [CppParam { name: "treePlacement", ty: "::ArrayW<::UnityW<::JBooth::MicroVerseCore::TreeStamp>>", modifiers: "", def_value: None }]
constexpr GenesisData_TreeSettings(::ArrayW<::UnityW<::JBooth::MicroVerseCore::TreeStamp>>  treePlacement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20377};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field treePlacement, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::JBooth::MicroVerseCore::TreeStamp>>  treePlacement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::GenesisData_TreeSettings, treePlacement) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::GenesisData_TreeSettings) == 0x8, "Size mismatch!");

} // namespace end def Rowlan::Genesis
// Dependencies Rowlan.Genesis.GenesisData::HeightStampPlacement, Rowlan.Genesis.GenesisData::TerrainSettings, Rowlan.Genesis.GenesisData::TreeSettings, Rowlan.Genesis.HeightStampSettings, Rowlan.Genesis.LayerSettings, Rowlan.Genesis.PathSettings, UnityEngine.ScriptableObject
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.GenesisData
class CORDL_TYPE GenesisData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using HeightStampPlacement = ::Rowlan::Genesis::GenesisData_HeightStampPlacement;

using TerrainSettings = ::Rowlan::Genesis::GenesisData_TerrainSettings;

using TreeSettings = ::Rowlan::Genesis::GenesisData_TreeSettings;

/// @brief Field confirmationPopup, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_confirmationPopup, put=__cordl_internal_set_confirmationPopup)) bool  confirmationPopup;

/// @brief Field heightStampPlacement, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightStampPlacement, put=__cordl_internal_set_heightStampPlacement)) ::Rowlan::Genesis::GenesisData_HeightStampPlacement  heightStampPlacement;

/// @brief Field heightStamps, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightStamps, put=__cordl_internal_set_heightStamps)) ::ArrayW<::Rowlan::Genesis::HeightStampSettings>  heightStamps;

/// @brief Field helpBoxVisible, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

/// @brief Field layerSettings, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerSettings, put=__cordl_internal_set_layerSettings)) ::ArrayW<::Rowlan::Genesis::LayerSettings>  layerSettings;

/// @brief Field pathSettings, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathSettings, put=__cordl_internal_set_pathSettings)) ::ArrayW<::Rowlan::Genesis::PathSettings>  pathSettings;

/// @brief Field replaceExisting, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_replaceExisting, put=__cordl_internal_set_replaceExisting)) bool  replaceExisting;

/// @brief Field terrainSettings, offset 0x20, size 0x60 
 __declspec(property(get=__cordl_internal_get_terrainSettings, put=__cordl_internal_set_terrainSettings)) ::Rowlan::Genesis::GenesisData_TerrainSettings  terrainSettings;

/// @brief Field treeSettings, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeSettings, put=__cordl_internal_set_treeSettings)) ::Rowlan::Genesis::GenesisData_TreeSettings  treeSettings;

static inline ::Rowlan::Genesis::GenesisData* New_ctor() ;

/// @brief Method Reset, addr 0x181abe750, size 0xb0, virtual false, abstract: false, final false
inline void Reset() ;

constexpr bool const& __cordl_internal_get_confirmationPopup() const;

constexpr bool& __cordl_internal_get_confirmationPopup() ;

constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement const& __cordl_internal_get_heightStampPlacement() const;

constexpr ::Rowlan::Genesis::GenesisData_HeightStampPlacement& __cordl_internal_get_heightStampPlacement() ;

constexpr ::ArrayW<::Rowlan::Genesis::HeightStampSettings> const& __cordl_internal_get_heightStamps() const;

constexpr ::ArrayW<::Rowlan::Genesis::HeightStampSettings>& __cordl_internal_get_heightStamps() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr ::ArrayW<::Rowlan::Genesis::LayerSettings> const& __cordl_internal_get_layerSettings() const;

constexpr ::ArrayW<::Rowlan::Genesis::LayerSettings>& __cordl_internal_get_layerSettings() ;

constexpr ::ArrayW<::Rowlan::Genesis::PathSettings> const& __cordl_internal_get_pathSettings() const;

constexpr ::ArrayW<::Rowlan::Genesis::PathSettings>& __cordl_internal_get_pathSettings() ;

constexpr bool const& __cordl_internal_get_replaceExisting() const;

constexpr bool& __cordl_internal_get_replaceExisting() ;

constexpr ::Rowlan::Genesis::GenesisData_TerrainSettings const& __cordl_internal_get_terrainSettings() const;

constexpr ::Rowlan::Genesis::GenesisData_TerrainSettings& __cordl_internal_get_terrainSettings() ;

constexpr ::Rowlan::Genesis::GenesisData_TreeSettings const& __cordl_internal_get_treeSettings() const;

constexpr ::Rowlan::Genesis::GenesisData_TreeSettings& __cordl_internal_get_treeSettings() ;

constexpr void __cordl_internal_set_confirmationPopup(bool  value) ;

constexpr void __cordl_internal_set_heightStampPlacement(::Rowlan::Genesis::GenesisData_HeightStampPlacement  value) ;

constexpr void __cordl_internal_set_heightStamps(::ArrayW<::Rowlan::Genesis::HeightStampSettings>  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

constexpr void __cordl_internal_set_layerSettings(::ArrayW<::Rowlan::Genesis::LayerSettings>  value) ;

constexpr void __cordl_internal_set_pathSettings(::ArrayW<::Rowlan::Genesis::PathSettings>  value) ;

constexpr void __cordl_internal_set_replaceExisting(bool  value) ;

constexpr void __cordl_internal_set_terrainSettings(::Rowlan::Genesis::GenesisData_TerrainSettings  value) ;

constexpr void __cordl_internal_set_treeSettings(::Rowlan::Genesis::GenesisData_TreeSettings  value) ;

/// @brief Method .ctor, addr 0x181abe800, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenesisData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenesisData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GenesisData(GenesisData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenesisData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenesisData(GenesisData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20378};

/// @brief Field helpBoxVisible, offset: 0x18, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field replaceExisting, offset: 0x19, size: 0x1, def value: None
 bool  ___replaceExisting;

/// @brief Field confirmationPopup, offset: 0x1a, size: 0x1, def value: None
 bool  ___confirmationPopup;

/// @brief Field terrainSettings, offset: 0x20, size: 0x60, def value: None
 ::Rowlan::Genesis::GenesisData_TerrainSettings  ___terrainSettings;

/// @brief Field heightStampPlacement, offset: 0x80, size: 0x4, def value: None
 ::Rowlan::Genesis::GenesisData_HeightStampPlacement  ___heightStampPlacement;

/// @brief Field heightStamps, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Rowlan::Genesis::HeightStampSettings>  ___heightStamps;

/// @brief Field layerSettings, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::Rowlan::Genesis::LayerSettings>  ___layerSettings;

/// @brief Field pathSettings, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::Rowlan::Genesis::PathSettings>  ___pathSettings;

/// @brief Field treeSettings, offset: 0xa0, size: 0x8, def value: None
 ::Rowlan::Genesis::GenesisData_TreeSettings  ___treeSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___helpBoxVisible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___replaceExisting) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___confirmationPopup) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___terrainSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___heightStampPlacement) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___heightStamps) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___layerSettings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___pathSettings) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::GenesisData, ___treeSettings) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::GenesisData) == 0xa8, "Size mismatch!");

} // namespace end def Rowlan::Genesis
