#pragma once
// IWYU pragma private; include "UnityEngine/TerrainChangedFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainChangedFlags)
// Forward declare root types
namespace UnityEngine {
struct TerrainChangedFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainChangedFlags);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainChangedFlags, "UnityEngine", "TerrainChangedFlags");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TerrainChangedFlags
struct CORDL_TYPE TerrainChangedFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainChangedFlags_Unwrapped
enum struct __TerrainChangedFlags_Unwrapped : int32_t {
__E_Heightmap = static_cast<int32_t>(0x1),
__E_TreeInstances = static_cast<int32_t>(0x2),
__E_DelayedHeightmapUpdate = static_cast<int32_t>(0x4),
__E_FlushEverythingImmediately = static_cast<int32_t>(0x8),
__E_RemoveDirtyDetailsImmediately = static_cast<int32_t>(0x10),
__E_HeightmapResolution = static_cast<int32_t>(0x20),
__E_Holes = static_cast<int32_t>(0x40),
__E_DelayedHolesUpdate = static_cast<int32_t>(0x80),
__E_WillBeDestroyed = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainChangedFlags_Unwrapped () const noexcept {
return static_cast<__TerrainChangedFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainChangedFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainChangedFlags(int32_t  value__) noexcept;

/// @brief Field DelayedHeightmapUpdate value: I32(4)
static ::UnityEngine::TerrainChangedFlags const DelayedHeightmapUpdate;

/// @brief Field DelayedHolesUpdate value: I32(128)
static ::UnityEngine::TerrainChangedFlags const DelayedHolesUpdate;

/// @brief Field FlushEverythingImmediately value: I32(8)
static ::UnityEngine::TerrainChangedFlags const FlushEverythingImmediately;

/// @brief Field Heightmap value: I32(1)
static ::UnityEngine::TerrainChangedFlags const Heightmap;

/// @brief Field HeightmapResolution value: I32(32)
static ::UnityEngine::TerrainChangedFlags const HeightmapResolution;

/// @brief Field Holes value: I32(64)
static ::UnityEngine::TerrainChangedFlags const Holes;

/// @brief Field RemoveDirtyDetailsImmediately value: I32(16)
static ::UnityEngine::TerrainChangedFlags const RemoveDirtyDetailsImmediately;

/// @brief Field TreeInstances value: I32(2)
static ::UnityEngine::TerrainChangedFlags const TreeInstances;

/// @brief Field WillBeDestroyed value: I32(256)
static ::UnityEngine::TerrainChangedFlags const WillBeDestroyed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainChangedFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainChangedFlags) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
