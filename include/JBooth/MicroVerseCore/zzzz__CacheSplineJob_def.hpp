#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/CacheSplineJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CacheSplineJob)
namespace JBooth::MicroVerseCore {
struct CacheSplineJob_PosQuat;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Mathematics {
struct float2;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct CacheSplineJob;
}
namespace JBooth::MicroVerseCore {
struct CacheSplineJob_PosQuat;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::CacheSplineJob);
MARK_VAL_T(::JBooth::MicroVerseCore::CacheSplineJob_PosQuat);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::CacheSplineJob, "JBooth.MicroVerseCore", "CacheSplineJob");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::CacheSplineJob_PosQuat, "JBooth.MicroVerseCore", "CacheSplineJob/PosQuat");
// Dependencies Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.CacheSplineJob/PosQuat
struct CORDL_TYPE CacheSplineJob_PosQuat {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CacheSplineJob_PosQuat() ;

// Ctor Parameters [CppParam { name: "pos", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "quat", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
constexpr CacheSplineJob_PosQuat(::Unity::Mathematics::float3  pos, ::Unity::Mathematics::quaternion  quat, ::Unity::Mathematics::float2  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field pos, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  pos;

/// @brief Field quat, offset: 0xc, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  quat;

/// @brief Field scale, offset: 0x1c, size: 0x8, def value: None
 ::Unity::Mathematics::float2  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob_PosQuat, pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob_PosQuat, quat) == 0xc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob_PosQuat, scale) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::CacheSplineJob_PosQuat) == 0x24, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.CacheSplineJob::PosQuat, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.Splines.NativeSpline
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.CacheSplineJob
struct CORDL_TYPE CacheSplineJob {
public:
// Declarations
using PosQuat = ::JBooth::MicroVerseCore::CacheSplineJob_PosQuat;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x181405dd0, size 0x330, virtual true, abstract: false, final true
inline void Execute(int32_t  i) ;

/// @brief Method FindShapeValue, addr 0x181406100, size 0x2c0, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 FindShapeValue(float_t  normalized_t) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CacheSplineJob() ;

// Ctor Parameters [CppParam { name: "spline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: None }, CppParam { name: "shapeData", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "sampleCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: None }]
constexpr CacheSplineJob(::UnityEngine::Splines::NativeSpline  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  shapeData, int32_t  sampleCount, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17949};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field spline, offset: 0x0, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  spline;

/// @brief Field shapeData, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  shapeData;

/// @brief Field sampleCount, offset: 0x58, size: 0x4, def value: None
 int32_t  sampleCount;

/// @brief Field data, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob, spline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob, shapeData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob, sampleCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::CacheSplineJob, data) == 0x60, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::CacheSplineJob) == 0x70, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
