#pragma once
// IWYU pragma private; include "TheVisualEngine/TVERefreshMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVERefreshMode)
// Forward declare root types
namespace TheVisualEngine {
struct TVERefreshMode;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVERefreshMode);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVERefreshMode, "TheVisualEngine", "TVERefreshMode");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVERefreshMode
struct CORDL_TYPE TVERefreshMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVERefreshMode_Unwrapped
enum struct __TVERefreshMode_Unwrapped : int32_t {
__E_Realtime = static_cast<int32_t>(0x0),
__E_Selection = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVERefreshMode_Unwrapped () const noexcept {
return static_cast<__TVERefreshMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVERefreshMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVERefreshMode(int32_t  value__) noexcept;

/// @brief Field Realtime value: I32(0)
static ::TheVisualEngine::TVERefreshMode const Realtime;

/// @brief Field Selection value: I32(10)
static ::TheVisualEngine::TVERefreshMode const Selection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVERefreshMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVERefreshMode) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
