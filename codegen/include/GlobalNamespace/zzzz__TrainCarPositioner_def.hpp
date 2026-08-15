#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainCarPositioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TrainCarPositioner)
namespace GlobalNamespace {
class TrainCar;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct TrainCarPositioner;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrainCarPositioner);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainCarPositioner, "", "TrainCarPositioner");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: TrainCarPositioner
struct CORDL_TYPE TrainCarPositioner {
public:
// Declarations
/// @brief Method PositionOnSpline, addr 0x180419520, size 0x590, virtual false, abstract: false, final false
inline void PositionOnSpline(::GlobalNamespace::TrainCar*  car, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldRotation, bool  bank) ;

// Ctor Parameters []
// @brief default ctor
constexpr TrainCarPositioner() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_smoothRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_rotationVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_hasInitialRotation", ty: "bool", modifiers: "", def_value: None }]
constexpr TrainCarPositioner(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  _smoothRotation, ::UnityEngine::Vector3  _rotationVelocity, bool  _hasInitialRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field _smoothRotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _smoothRotation;

/// @brief Field _rotationVelocity, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  _rotationVelocity;

/// @brief Field _hasInitialRotation, offset: 0x28, size: 0x1, def value: None
 bool  _hasInitialRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainCarPositioner, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCarPositioner, _smoothRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCarPositioner, _rotationVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainCarPositioner, _hasInitialRotation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainCarPositioner) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
