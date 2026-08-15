#pragma once
// IWYU pragma private; include "UnityEngine/DetailScatterMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DetailScatterMode)
// Forward declare root types
namespace UnityEngine {
struct DetailScatterMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DetailScatterMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::DetailScatterMode, "UnityEngine", "DetailScatterMode");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DetailScatterMode
struct CORDL_TYPE DetailScatterMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DetailScatterMode_Unwrapped
enum struct __DetailScatterMode_Unwrapped : int32_t {
__E_CoverageMode = static_cast<int32_t>(0x0),
__E_InstanceCountMode = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DetailScatterMode_Unwrapped () const noexcept {
return static_cast<__DetailScatterMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DetailScatterMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DetailScatterMode(int32_t  value__) noexcept;

/// @brief Field CoverageMode value: I32(0)
static ::UnityEngine::DetailScatterMode const CoverageMode;

/// @brief Field InstanceCountMode value: I32(1)
static ::UnityEngine::DetailScatterMode const InstanceCountMode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DetailScatterMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::DetailScatterMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
