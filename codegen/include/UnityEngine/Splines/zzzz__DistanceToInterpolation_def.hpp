#pragma once
// IWYU pragma private; include "UnityEngine/Splines/DistanceToInterpolation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DistanceToInterpolation)
// Forward declare root types
namespace UnityEngine::Splines {
struct DistanceToInterpolation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::DistanceToInterpolation);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::DistanceToInterpolation, "UnityEngine.Splines", "DistanceToInterpolation");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.DistanceToInterpolation
struct CORDL_TYPE DistanceToInterpolation {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::UnityEngine::Splines::DistanceToInterpolation  Invalid;

static inline ::UnityEngine::Splines::DistanceToInterpolation getStaticF_Invalid() ;

static inline void setStaticF_Invalid(::UnityEngine::Splines::DistanceToInterpolation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DistanceToInterpolation() ;

// Ctor Parameters [CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "T", ty: "float_t", modifiers: "", def_value: None }]
constexpr DistanceToInterpolation(float_t  Distance, float_t  T) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Distance, offset: 0x0, size: 0x4, def value: None
 float_t  Distance;

/// @brief Field T, offset: 0x4, size: 0x4, def value: None
 float_t  T;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::DistanceToInterpolation, Distance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::DistanceToInterpolation, T) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::DistanceToInterpolation) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Splines
