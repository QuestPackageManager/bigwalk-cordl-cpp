#pragma once
// IWYU pragma private; include "UnityEngine/Splines/GetPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetPosition)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct GetPosition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::GetPosition);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::GetPosition, "UnityEngine.Splines", "GetPosition");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.Splines.NativeSpline
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.GetPosition
struct CORDL_TYPE GetPosition {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18217ace0, size 0x190, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr GetPosition() ;

// Ctor Parameters [CppParam { name: "Spline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None }, CppParam { name: "Positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }]
constexpr GetPosition(::UnityEngine::Splines::NativeSpline  Spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Positions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18740};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Spline, offset: 0x0, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  Spline;

/// @brief Field Positions, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  Positions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::GetPosition, Spline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::GetPosition, Positions) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::GetPosition) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Splines
