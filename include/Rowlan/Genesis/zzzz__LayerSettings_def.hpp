#pragma once
// IWYU pragma private; include "Rowlan/Genesis/LayerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LayerSettings)
namespace Rowlan::Genesis {
class LayerSettingsTemplate;
}
namespace UnityEngine {
class TerrainLayer;
}
// Forward declare root types
namespace Rowlan::Genesis {
struct LayerSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::LayerSettings);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::LayerSettings, "Rowlan.Genesis", "LayerSettings");
// Dependencies UnityEngine.Vector2
namespace Rowlan::Genesis {
// Is value type: true
// CS Name: Rowlan.Genesis.LayerSettings
struct CORDL_TYPE LayerSettings {
public:
// Declarations
/// @brief Method Apply, addr 0x181abeb20, size 0x50, virtual false, abstract: false, final false
inline void Apply(::Rowlan::Genesis::LayerSettingsTemplate*  _cordl_template) ;

/// @brief Method Reset, addr 0x181abeb70, size 0x120, virtual false, abstract: false, final false
inline void Reset() ;

// Ctor Parameters []
// @brief default ctor
constexpr LayerSettings() ;

// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "terrainLayer", ty: "::UnityW<::UnityEngine::TerrainLayer>", modifiers: "", def_value: None }, CppParam { name: "slopeEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "slopeRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr LayerSettings(bool  active, ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer, bool  slopeEnabled, ::UnityEngine::Vector2  slopeRange) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20381};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field active, offset: 0x0, size: 0x1, def value: None
 bool  active;

/// @brief Field terrainLayer, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainLayer>  terrainLayer;

/// @brief Field slopeEnabled, offset: 0x10, size: 0x1, def value: None
 bool  slopeEnabled;

/// @brief Field slopeRange, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  slopeRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::LayerSettings, active) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::LayerSettings, terrainLayer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::LayerSettings, slopeEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::LayerSettings, slopeRange) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::LayerSettings) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis
