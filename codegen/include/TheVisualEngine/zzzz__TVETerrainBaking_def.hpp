#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainBaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVETerrainBaking)
// Forward declare root types
namespace TheVisualEngine {
struct TVETerrainBaking;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVETerrainBaking);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETerrainBaking, "TheVisualEngine", "TVETerrainBaking");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVETerrainBaking
struct CORDL_TYPE TVETerrainBaking {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVETerrainBaking_Unwrapped
enum struct __TVETerrainBaking_Unwrapped : int32_t {
__E_Baked = static_cast<int32_t>(0xa),
__E_RuntimeRenderTexture = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVETerrainBaking_Unwrapped () const noexcept {
return static_cast<__TVETerrainBaking_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVETerrainBaking() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVETerrainBaking(int32_t  value__) noexcept;

/// @brief Field Baked value: I32(10)
static ::TheVisualEngine::TVETerrainBaking const Baked;

/// @brief Field RuntimeRenderTexture value: I32(20)
static ::TheVisualEngine::TVETerrainBaking const RuntimeRenderTexture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETerrainBaking, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETerrainBaking) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
