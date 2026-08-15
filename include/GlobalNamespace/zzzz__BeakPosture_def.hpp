#pragma once
// IWYU pragma private; include "GlobalNamespace/BeakPosture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BeakPosture)
namespace GlobalNamespace {
struct BeakPostureMask;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeakPosture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeakPosture);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeakPosture, "", "BeakPosture");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeakPosture
struct CORDL_TYPE BeakPosture {
public:
// Declarations
 __declspec(property(get=get_rotationAsQuaternion)) ::UnityEngine::Quaternion  rotationAsQuaternion;

/// @brief Method Add, addr 0x18037afa0, size 0x380, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BeakPosture Add(::GlobalNamespace::BeakPosture  a, ::GlobalNamespace::BeakPosture  b) ;

/// @brief Method DrawGizmos, addr 0x18037b320, size 0x2e0, virtual false, abstract: false, final false
inline void DrawGizmos(::GlobalNamespace::Prop*  prop) ;

/// @brief Method Lerp, addr 0x18037bba0, size 0x460, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BeakPosture Lerp(::GlobalNamespace::BeakPosture  a, ::GlobalNamespace::BeakPosture  b, float_t  t) ;

/// @brief Method LerpPreservingDistance, addr 0x18037b600, size 0x5a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BeakPosture LerpPreservingDistance(::GlobalNamespace::BeakPosture  a, ::GlobalNamespace::BeakPosture  b, float_t  t) ;

/// @brief Method OverrideUsingMask, addr 0x18037c000, size 0x3f0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BeakPosture OverrideUsingMask(::GlobalNamespace::BeakPosture  source, ::GlobalNamespace::BeakPosture  destination, ::GlobalNamespace::BeakPostureMask  mask) ;

/// @brief Method get_rotationAsQuaternion, addr 0x18037c3f0, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotationAsQuaternion() ;

// Ctor Parameters []
// @brief default ctor
constexpr BeakPosture() ;

// Ctor Parameters [CppParam { name: "propPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "propRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "grasperPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "upperAngleLimit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lowerAngleLimit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leftGripPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rightGripPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "showGizmos", ty: "bool", modifiers: "", def_value: None }]
constexpr BeakPosture(::UnityEngine::Vector3  propPosition, ::UnityEngine::Vector3  propRotation, ::UnityEngine::Vector3  grasperPosition, float_t  upperAngleLimit, float_t  lowerAngleLimit, ::UnityEngine::Vector3  leftGripPosition, ::UnityEngine::Vector3  rightGripPosition, bool  showGizmos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5566};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field propPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  propPosition;

/// @brief Field propRotation, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  propRotation;

/// @brief Field grasperPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  grasperPosition;

/// @brief Field upperAngleLimit, offset: 0x24, size: 0x4, def value: None
 float_t  upperAngleLimit;

/// @brief Field lowerAngleLimit, offset: 0x28, size: 0x4, def value: None
 float_t  lowerAngleLimit;

/// @brief Field leftGripPosition, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  leftGripPosition;

/// @brief Field rightGripPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  rightGripPosition;

/// @brief Field showGizmos, offset: 0x44, size: 0x1, def value: None
 bool  showGizmos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeakPosture, propPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, propRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, grasperPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, upperAngleLimit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, lowerAngleLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, leftGripPosition) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, rightGripPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeakPosture, showGizmos) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeakPosture) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
