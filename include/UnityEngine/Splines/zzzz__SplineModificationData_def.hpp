#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineModificationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineModificationData)
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineModificationData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineModificationData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineModificationData, "UnityEngine.Splines", "SplineModificationData");
// Dependencies UnityEngine.Splines.SplineModification
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineModificationData
struct CORDL_TYPE SplineModificationData {
public:
// Declarations
/// @brief Method .ctor, addr 0x18217c930, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Splines::SplineModification  modification, int32_t  knotIndex, float_t  prevCurveLength, float_t  nextCurveLength) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineModificationData() ;

// Ctor Parameters [CppParam { name: "Spline", ty: "::UnityEngine::Splines::Spline*", modifiers: "", def_value: None }, CppParam { name: "Modification", ty: "::UnityEngine::Splines::SplineModification", modifiers: "", def_value: None }, CppParam { name: "KnotIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PrevCurveLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "NextCurveLength", ty: "float_t", modifiers: "", def_value: None }]
constexpr SplineModificationData(::UnityEngine::Splines::Spline*  Spline, ::UnityEngine::Splines::SplineModification  Modification, int32_t  KnotIndex, float_t  PrevCurveLength, float_t  NextCurveLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Spline, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Splines::Spline*  Spline;

/// @brief Field Modification, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineModification  Modification;

/// @brief Field KnotIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  KnotIndex;

/// @brief Field PrevCurveLength, offset: 0x10, size: 0x4, def value: None
 float_t  PrevCurveLength;

/// @brief Field NextCurveLength, offset: 0x14, size: 0x4, def value: None
 float_t  NextCurveLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineModificationData, Spline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineModificationData, Modification) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineModificationData, KnotIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineModificationData, PrevCurveLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineModificationData, NextCurveLength) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineModificationData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
