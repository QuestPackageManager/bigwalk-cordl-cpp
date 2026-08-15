#pragma once
// IWYU pragma private; include "UnityEngine/TerrainHeightmapSyncControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainHeightmapSyncControl)
// Forward declare root types
namespace UnityEngine {
struct TerrainHeightmapSyncControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainHeightmapSyncControl);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainHeightmapSyncControl, "UnityEngine", "TerrainHeightmapSyncControl");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TerrainHeightmapSyncControl
struct CORDL_TYPE TerrainHeightmapSyncControl {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainHeightmapSyncControl_Unwrapped
enum struct __TerrainHeightmapSyncControl_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HeightOnly = static_cast<int32_t>(0x1),
__E_HeightAndLod = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainHeightmapSyncControl_Unwrapped () const noexcept {
return static_cast<__TerrainHeightmapSyncControl_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainHeightmapSyncControl() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainHeightmapSyncControl(int32_t  value__) noexcept;

/// @brief Field HeightAndLod value: I32(2)
static ::UnityEngine::TerrainHeightmapSyncControl const HeightAndLod;

/// @brief Field HeightOnly value: I32(1)
static ::UnityEngine::TerrainHeightmapSyncControl const HeightOnly;

/// @brief Field None value: I32(0)
static ::UnityEngine::TerrainHeightmapSyncControl const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainHeightmapSyncControl, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainHeightmapSyncControl) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
