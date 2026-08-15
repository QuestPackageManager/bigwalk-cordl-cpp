#pragma once
// IWYU pragma private; include "UnityEngine/Splines/BezierTangent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierTangent)
// Forward declare root types
namespace UnityEngine::Splines {
struct BezierTangent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::BezierTangent);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::BezierTangent, "UnityEngine.Splines", "BezierTangent");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.BezierTangent
struct CORDL_TYPE BezierTangent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BezierTangent_Unwrapped
enum struct __BezierTangent_Unwrapped : int32_t {
__E_In = static_cast<int32_t>(0x0),
__E_Out = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BezierTangent_Unwrapped () const noexcept {
return static_cast<__BezierTangent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BezierTangent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BezierTangent(int32_t  value__) noexcept;

/// @brief Field In value: I32(0)
static ::UnityEngine::Splines::BezierTangent const In;

/// @brief Field Out value: I32(1)
static ::UnityEngine::Splines::BezierTangent const Out;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::BezierTangent, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::BezierTangent) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
