#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVETerrainTexture)
// Forward declare root types
namespace TheVisualEngine {
struct TVETerrainTexture;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVETerrainTexture);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETerrainTexture, "TheVisualEngine", "TVETerrainTexture");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVETerrainTexture
struct CORDL_TYPE TVETerrainTexture {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVETerrainTexture_Unwrapped
enum struct __TVETerrainTexture_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0xffffffff),
__E_None = static_cast<int32_t>(0x0),
__E_heightTexture = static_cast<int32_t>(0xa),
__E_normalTexture = static_cast<int32_t>(0x14),
__E_holesTexture = static_cast<int32_t>(0x1e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVETerrainTexture_Unwrapped () const noexcept {
return static_cast<__TVETerrainTexture_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVETerrainTexture() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVETerrainTexture(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(-1)
static ::TheVisualEngine::TVETerrainTexture const Auto;

/// @brief Field None value: I32(0)
static ::TheVisualEngine::TVETerrainTexture const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field heightTexture value: I32(10)
static ::TheVisualEngine::TVETerrainTexture const heightTexture;

/// @brief Field holesTexture value: I32(30)
static ::TheVisualEngine::TVETerrainTexture const holesTexture;

/// @brief Field normalTexture value: I32(20)
static ::TheVisualEngine::TVETerrainTexture const normalTexture;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETerrainTexture, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETerrainTexture) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
