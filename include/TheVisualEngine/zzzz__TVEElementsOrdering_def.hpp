#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementsOrdering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEElementsOrdering)
// Forward declare root types
namespace TheVisualEngine {
struct TVEElementsOrdering;
}
// Write type traits
MARK_VAL_T(::TheVisualEngine::TVEElementsOrdering);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEElementsOrdering, "TheVisualEngine", "TVEElementsOrdering");
// Dependencies 
namespace TheVisualEngine {
// Is value type: true
// CS Name: TheVisualEngine.TVEElementsOrdering
struct CORDL_TYPE TVEElementsOrdering {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TVEElementsOrdering_Unwrapped
enum struct __TVEElementsOrdering_Unwrapped : int32_t {
__E_SortInEditMode = static_cast<int32_t>(0x0),
__E_SortAtRuntime = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TVEElementsOrdering_Unwrapped () const noexcept {
return static_cast<__TVEElementsOrdering_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TVEElementsOrdering() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TVEElementsOrdering(int32_t  value__) noexcept;

/// @brief Field SortAtRuntime value: I32(10)
static ::TheVisualEngine::TVEElementsOrdering const SortAtRuntime;

/// @brief Field SortInEditMode value: I32(0)
static ::TheVisualEngine::TVEElementsOrdering const SortInEditMode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEElementsOrdering, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEElementsOrdering) == 0x4, "Size mismatch!");

} // namespace end def TheVisualEngine
