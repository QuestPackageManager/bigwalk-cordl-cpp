#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETextureFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVETextureFormat)
// Forward declare root types
namespace TheVisualEngine {
struct TVETextureFormat;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVETextureFormat);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVETextureFormat, "TheVisualEngine", "TVETextureFormat");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVETextureFormat
struct CORDL_TYPE TVETextureFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVETextureFormat_Unwrapped
enum struct __TVETextureFormat_Unwrapped : int32_t {
__E_LDR8 = static_cast<int32_t>(0x0),
__E_HDR16 = static_cast<int32_t>(0xa),
__E_HDR32 = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVETextureFormat_Unwrapped () const noexcept {
return static_cast<__TVETextureFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVETextureFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVETextureFormat(int32_t  value__) noexcept;

/// @brief Field HDR16 value: I32(10)
static ::TheVisualEngine::TVETextureFormat const HDR16;

/// @brief Field HDR32 value: I32(20)
static ::TheVisualEngine::TVETextureFormat const HDR32;

/// @brief Field LDR8 value: I32(0)
static ::TheVisualEngine::TVETextureFormat const LDR8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19591};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVETextureFormat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVETextureFormat) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
