#pragma once
// IWYU pragma private; include "GlobalNamespace/BeakPostureMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BeakPostureMask)
// Forward declare root types
namespace GlobalNamespace {
struct BeakPostureMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeakPostureMask);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeakPostureMask, "", "BeakPostureMask");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeakPostureMask
struct CORDL_TYPE BeakPostureMask {
public:
// Declarations
/// @brief Method op_Multiply, addr 0x18037af10, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BeakPostureMask op_Multiply(::GlobalNamespace::BeakPostureMask  mask, float_t  scalar) ;

// Ctor Parameters []
// @brief default ctor
constexpr BeakPostureMask() ;

// Ctor Parameters [CppParam { name: "propPositionWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "propRotationWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "grasperPositionWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "upperAngleLimitWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lowerAngleLimitWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leftGripPositionWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightGripPositionWeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr BeakPostureMask(float_t  propPositionWeight, float_t  propRotationWeight, float_t  grasperPositionWeight, float_t  upperAngleLimitWeight, float_t  lowerAngleLimitWeight, float_t  leftGripPositionWeight, float_t  rightGripPositionWeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field propPositionWeight, offset: 0x0, size: 0x4, def value: None
 float_t  propPositionWeight;

/// @brief Field propRotationWeight, offset: 0x4, size: 0x4, def value: None
 float_t  propRotationWeight;

/// @brief Field grasperPositionWeight, offset: 0x8, size: 0x4, def value: None
 float_t  grasperPositionWeight;

/// @brief Field upperAngleLimitWeight, offset: 0xc, size: 0x4, def value: None
 float_t  upperAngleLimitWeight;

/// @brief Field lowerAngleLimitWeight, offset: 0x10, size: 0x4, def value: None
 float_t  lowerAngleLimitWeight;

/// @brief Field leftGripPositionWeight, offset: 0x14, size: 0x4, def value: None
 float_t  leftGripPositionWeight;

/// @brief Field rightGripPositionWeight, offset: 0x18, size: 0x4, def value: None
 float_t  rightGripPositionWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeakPostureMask, propPositionWeight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPostureMask, propRotationWeight) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPostureMask, grasperPositionWeight) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPostureMask, upperAngleLimitWeight) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPostureMask, lowerAngleLimitWeight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPostureMask, leftGripPositionWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPostureMask, rightGripPositionWeight) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeakPostureMask) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
