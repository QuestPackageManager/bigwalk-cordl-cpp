#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEUVMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEUVMode)
// Forward declare root types
namespace TheVisualEngine {
struct TVEUVMode;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVEUVMode);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEUVMode, "TheVisualEngine", "TVEUVMode");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVEUVMode
struct CORDL_TYPE TVEUVMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVEUVMode_Unwrapped
enum struct __TVEUVMode_Unwrapped : int32_t {
__E_Tilling = static_cast<int32_t>(0x0),
__E_Scale = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVEUVMode_Unwrapped () const noexcept {
return static_cast<__TVEUVMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVEUVMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVEUVMode(int32_t  value__) noexcept;

/// @brief Field Scale value: I32(1)
static ::TheVisualEngine::TVEUVMode const Scale;

/// @brief Field Tilling value: I32(0)
static ::TheVisualEngine::TVEUVMode const Tilling;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEUVMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEUVMode) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
