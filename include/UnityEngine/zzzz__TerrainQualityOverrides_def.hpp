#pragma once
// IWYU pragma private; include "UnityEngine/TerrainQualityOverrides.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainQualityOverrides)
// Forward declare root types
namespace UnityEngine {
struct TerrainQualityOverrides;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainQualityOverrides);
DEFINE_IL2CPP_CLASS(::UnityEngine::TerrainQualityOverrides, "UnityEngine", "TerrainQualityOverrides");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TerrainQualityOverrides
struct CORDL_TYPE TerrainQualityOverrides {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainQualityOverrides_Unwrapped
enum struct __TerrainQualityOverrides_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PixelError = static_cast<int32_t>(0x1),
__E_BasemapDistance = static_cast<int32_t>(0x2),
__E_DetailDensity = static_cast<int32_t>(0x4),
__E_DetailDistance = static_cast<int32_t>(0x8),
__E_TreeDistance = static_cast<int32_t>(0x10),
__E_BillboardStart = static_cast<int32_t>(0x20),
__E_FadeLength = static_cast<int32_t>(0x40),
__E_MaxTrees = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainQualityOverrides_Unwrapped () const noexcept {
return static_cast<__TerrainQualityOverrides_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TerrainQualityOverrides() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainQualityOverrides(int32_t  value__) noexcept;

/// @brief Field BasemapDistance value: I32(2)
static ::UnityEngine::TerrainQualityOverrides const BasemapDistance;

/// @brief Field BillboardStart value: I32(32)
static ::UnityEngine::TerrainQualityOverrides const BillboardStart;

/// @brief Field DetailDensity value: I32(4)
static ::UnityEngine::TerrainQualityOverrides const DetailDensity;

/// @brief Field DetailDistance value: I32(8)
static ::UnityEngine::TerrainQualityOverrides const DetailDistance;

/// @brief Field FadeLength value: I32(64)
static ::UnityEngine::TerrainQualityOverrides const FadeLength;

/// @brief Field MaxTrees value: I32(128)
static ::UnityEngine::TerrainQualityOverrides const MaxTrees;

/// @brief Field None value: I32(0)
static ::UnityEngine::TerrainQualityOverrides const None;

/// @brief Field PixelError value: I32(1)
static ::UnityEngine::TerrainQualityOverrides const PixelError;

/// @brief Field TreeDistance value: I32(16)
static ::UnityEngine::TerrainQualityOverrides const TreeDistance;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TerrainQualityOverrides, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TerrainQualityOverrides) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
