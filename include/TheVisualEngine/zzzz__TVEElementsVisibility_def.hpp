#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementsVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEElementsVisibility)
// Forward declare root types
namespace TheVisualEngine {
struct TVEElementsVisibility;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVEElementsVisibility);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementsVisibility, "TheVisualEngine", "TVEElementsVisibility");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVEElementsVisibility
struct CORDL_TYPE TVEElementsVisibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVEElementsVisibility_Unwrapped
enum struct __TVEElementsVisibility_Unwrapped : int32_t {
__E_AlwaysHidden = static_cast<int32_t>(0x0),
__E_AlwaysVisible = static_cast<int32_t>(0xa),
__E_HiddenAtRuntime = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVEElementsVisibility_Unwrapped () const noexcept {
return static_cast<__TVEElementsVisibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVEElementsVisibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVEElementsVisibility(int32_t  value__) noexcept;

/// @brief Field AlwaysHidden value: I32(0)
static ::TheVisualEngine::TVEElementsVisibility const AlwaysHidden;

/// @brief Field AlwaysVisible value: I32(10)
static ::TheVisualEngine::TVEElementsVisibility const AlwaysVisible;

/// @brief Field HiddenAtRuntime value: I32(20)
static ::TheVisualEngine::TVEElementsVisibility const HiddenAtRuntime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementsVisibility, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementsVisibility) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
