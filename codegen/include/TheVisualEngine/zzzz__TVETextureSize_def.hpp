#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETextureSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVETextureSize)
// Forward declare root types
namespace TheVisualEngine {
struct TVETextureSize;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVETextureSize);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETextureSize, "TheVisualEngine", "TVETextureSize");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVETextureSize
struct CORDL_TYPE TVETextureSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVETextureSize_Unwrapped
enum struct __TVETextureSize_Unwrapped : int32_t {
__E__64 = static_cast<int32_t>(0x40),
__E__128 = static_cast<int32_t>(0x80),
__E__256 = static_cast<int32_t>(0x100),
__E__512 = static_cast<int32_t>(0x200),
__E__1024 = static_cast<int32_t>(0x400),
__E__2048 = static_cast<int32_t>(0x800),
__E__4096 = static_cast<int32_t>(0x1000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVETextureSize_Unwrapped () const noexcept {
return static_cast<__TVETextureSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVETextureSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVETextureSize(int32_t  value__) noexcept;

/// @brief Field _1024 value: I32(1024)
static ::TheVisualEngine::TVETextureSize const _1024;

/// @brief Field _128 value: I32(128)
static ::TheVisualEngine::TVETextureSize const _128;

/// @brief Field _2048 value: I32(2048)
static ::TheVisualEngine::TVETextureSize const _2048;

/// @brief Field _256 value: I32(256)
static ::TheVisualEngine::TVETextureSize const _256;

/// @brief Field _4096 value: I32(4096)
static ::TheVisualEngine::TVETextureSize const _4096;

/// @brief Field _512 value: I32(512)
static ::TheVisualEngine::TVETextureSize const _512;

/// @brief Field _64 value: I32(64)
static ::TheVisualEngine::TVETextureSize const _64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETextureSize, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETextureSize) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
