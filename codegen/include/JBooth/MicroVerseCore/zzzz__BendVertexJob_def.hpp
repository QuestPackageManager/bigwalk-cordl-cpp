#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BendVertexJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__BendRules_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BendVertexJob)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct BendVertexJob;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::BendVertexJob);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BendVertexJob, "JBooth.MicroVerseCore", "BendVertexJob");
// Dependencies JBooth.MicroVerseCore.BendRules::CullMode, JBooth.MicroVerseCore.CacheSplineJob::PosQuat, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float3, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Vector3, UnityEngine.Vector4
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BendVertexJob
struct CORDL_TYPE BendVertexJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x181418920, size 0x1350, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method ExtractRotationFromMatrix, addr 0x181419c70, size 0x310, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 ExtractRotationFromMatrix(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr BendVertexJob() ;

// Ctor Parameters [CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "worldToLocal", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "posQuats", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: None }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allowRoll", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullingMode", ty: "::JBooth::MicroVerseCore::BendRules_CullMode", modifiers: "", def_value: None }, CppParam { name: "globalScaleBegin", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "globalScaleEnd", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "localPos", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "bounds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>", modifiers: "", def_value: None }]
constexpr BendVertexJob(::UnityEngine::Matrix4x4  localToWorld, ::UnityEngine::Matrix4x4  worldToLocal, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, float_t  start, float_t  range, float_t  meshLength, float_t  meshScale, int32_t  orientation, bool  allowRoll, ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode, ::Unity::Mathematics::float2  globalScaleBegin, ::Unity::Mathematics::float2  globalScaleEnd, ::Unity::Mathematics::float3  localPos, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>  bounds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x108};

/// @brief Field localToWorld, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  localToWorld;

/// @brief Field worldToLocal, offset: 0x40, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  worldToLocal;

/// @brief Field posQuats, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats;

/// @brief Field start, offset: 0x90, size: 0x4, def value: None
 float_t  start;

/// @brief Field range, offset: 0x94, size: 0x4, def value: None
 float_t  range;

/// @brief Field meshLength, offset: 0x98, size: 0x4, def value: None
 float_t  meshLength;

/// @brief Field meshScale, offset: 0x9c, size: 0x4, def value: None
 float_t  meshScale;

/// @brief Field orientation, offset: 0xa0, size: 0x4, def value: None
 int32_t  orientation;

/// @brief Field allowRoll, offset: 0xa4, size: 0x1, def value: None
 bool  allowRoll;

/// @brief Field cullingMode, offset: 0xa8, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode;

/// @brief Field globalScaleBegin, offset: 0xac, size: 0x8, def value: None
 ::Unity::Mathematics::float2  globalScaleBegin;

/// @brief Field globalScaleEnd, offset: 0xb4, size: 0x8, def value: None
 ::Unity::Mathematics::float2  globalScaleEnd;

/// @brief Field localPos, offset: 0xbc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  localPos;

/// @brief Field positions, offset: 0xc8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions;

/// @brief Field normals, offset: 0xd8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  normals;

/// @brief Field tangents, offset: 0xe8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  tangents;

/// @brief Field bounds, offset: 0xf8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>  bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, localToWorld) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, worldToLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, posQuats) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, start) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, range) == 0x94, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, meshLength) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, meshScale) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, orientation) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, allowRoll) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, cullingMode) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, globalScaleBegin) == 0xac, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, globalScaleEnd) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, localPos) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, positions) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, normals) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, tangents) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BendVertexJob, bounds) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BendVertexJob) == 0x108, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
