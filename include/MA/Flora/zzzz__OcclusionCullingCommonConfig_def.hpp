#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionCullingCommonConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingCommonConfig)
// Forward declare root types
namespace MA::Flora {
struct OcclusionCullingCommonConfig;
}
// Write type traits
MARK_VAL_T(::MA::Flora::OcclusionCullingCommonConfig);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionCullingCommonConfig, "MA.Flora", "OcclusionCullingCommonConfig");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OcclusionCullingCommonConfig
struct CORDL_TYPE OcclusionCullingCommonConfig {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OcclusionCullingCommonConfig_Unwrapped
enum struct __OcclusionCullingCommonConfig_Unwrapped : int32_t {
__E_MaxOccluderMips = static_cast<int32_t>(0x8),
__E_MaxOccluderSilhouettePlanes = static_cast<int32_t>(0x6),
__E_MaxSubviewsPerView = static_cast<int32_t>(0x6),
__E_DebugPyramidOffset = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OcclusionCullingCommonConfig_Unwrapped () const noexcept {
return static_cast<__OcclusionCullingCommonConfig_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingCommonConfig() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OcclusionCullingCommonConfig(int32_t  value__) noexcept;

/// @brief Field DebugPyramidOffset value: I32(4)
static ::MA::Flora::OcclusionCullingCommonConfig const DebugPyramidOffset;

/// @brief Field MaxOccluderMips value: I32(8)
static ::MA::Flora::OcclusionCullingCommonConfig const MaxOccluderMips;

/// @brief Field MaxOccluderSilhouettePlanes value: I32(6)
static ::MA::Flora::OcclusionCullingCommonConfig const MaxOccluderSilhouettePlanes;

/// @brief Field MaxSubviewsPerView value: I32(6)
static ::MA::Flora::OcclusionCullingCommonConfig const MaxSubviewsPerView;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OcclusionCullingCommonConfig, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OcclusionCullingCommonConfig) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
