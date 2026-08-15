#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectSpawnJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__BendRules_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectSpawnJob)
namespace JBooth::MicroVerseCore {
struct ObjectSpawnJob_ObjEntry;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct ObjectSpawnJob;
}
namespace JBooth::MicroVerseCore {
struct ObjectSpawnJob_ObjEntry;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::ObjectSpawnJob);
MARK_VAL_T(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectSpawnJob, "JBooth.MicroVerseCore", "ObjectSpawnJob");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, "JBooth.MicroVerseCore", "ObjectSpawnJob/ObjEntry");
// Dependencies JBooth.MicroVerseCore.BendRules::CullMode, JBooth.MicroVerseCore.BendRules::Mode, Unity.Mathematics.float3, Unity.Mathematics.quaternion, UnityEngine.Vector3
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.ObjectSpawnJob/ObjEntry
struct CORDL_TYPE ObjectSpawnJob_ObjEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ObjectSpawnJob_ObjEntry() ;

// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bendRule", ty: "::JBooth::MicroVerseCore::BendRules_Mode", modifiers: "", def_value: None }, CppParam { name: "positionVariance", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "rotationVariance", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "scaleVariance", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "scaleUniform", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "chance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cullingMode", ty: "::JBooth::MicroVerseCore::BendRules_CullMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "quaternion", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr ObjectSpawnJob_ObjEntry(float_t  start, float_t  range, float_t  meshLength, ::JBooth::MicroVerseCore::BendRules_Mode  bendRule, ::Unity::Mathematics::float3  positionVariance, ::Unity::Mathematics::float3  rotationVariance, ::Unity::Mathematics::float3  scaleVariance, bool  scaleUniform, float_t  chance, ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode, ::UnityEngine::Vector3  position, ::Unity::Mathematics::quaternion  quaternion, ::Unity::Mathematics::float3  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field start, offset: 0x0, size: 0x4, def value: None
 float_t  start;

/// @brief Field range, offset: 0x4, size: 0x4, def value: None
 float_t  range;

/// @brief Field meshLength, offset: 0x8, size: 0x4, def value: None
 float_t  meshLength;

/// @brief Field bendRule, offset: 0xc, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_Mode  bendRule;

/// @brief Field positionVariance, offset: 0x10, size: 0xc, def value: None
 ::Unity::Mathematics::float3  positionVariance;

/// @brief Field rotationVariance, offset: 0x1c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  rotationVariance;

/// @brief Field scaleVariance, offset: 0x28, size: 0xc, def value: None
 ::Unity::Mathematics::float3  scaleVariance;

/// @brief Field scaleUniform, offset: 0x34, size: 0x1, def value: None
 bool  scaleUniform;

/// @brief Field chance, offset: 0x38, size: 0x4, def value: None
 float_t  chance;

/// @brief Field cullingMode, offset: 0x3c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode;

/// @brief Field position, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field quaternion, offset: 0x4c, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  quaternion;

/// @brief Field scale, offset: 0x5c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, range) == 0x4, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, meshLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, bendRule) == 0xc, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, positionVariance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, rotationVariance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, scaleVariance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, scaleUniform) == 0x34, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, chance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, cullingMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, quaternion) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry, scale) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry) == 0x68, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.CacheSplineJob::PosQuat, JBooth.MicroVerseCore.ObjectSpawnJob::ObjEntry, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.ObjectSpawnJob
struct CORDL_TYPE ObjectSpawnJob {
public:
// Declarations
using ObjEntry = ::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry;

/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method EulerZXY, addr 0x181418020, size 0x2a0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 EulerZXY(::Unity::Mathematics::quaternion  q) ;

/// @brief Method Execute, addr 0x18141d270, size 0x1320, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr ObjectSpawnJob() ;

// Ctor Parameters [CppParam { name: "posQuats", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: None }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "orientation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allowRoll", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "globalScaleBegin", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "globalScaleEnd", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "entries", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>", modifiers: "", def_value: None }]
constexpr ObjectSpawnJob(::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, float_t  meshLength, int32_t  orientation, bool  allowRoll, ::Unity::Mathematics::float2  globalScaleBegin, ::Unity::Mathematics::float2  globalScaleEnd, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>  entries) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field posQuats, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats;

/// @brief Field meshLength, offset: 0x10, size: 0x4, def value: None
 float_t  meshLength;

/// @brief Field orientation, offset: 0x14, size: 0x4, def value: None
 int32_t  orientation;

/// @brief Field allowRoll, offset: 0x18, size: 0x1, def value: None
 bool  allowRoll;

/// @brief Field globalScaleBegin, offset: 0x1c, size: 0x8, def value: None
 ::Unity::Mathematics::float2  globalScaleBegin;

/// @brief Field globalScaleEnd, offset: 0x24, size: 0x8, def value: None
 ::Unity::Mathematics::float2  globalScaleEnd;

/// @brief Field entries, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>  entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, posQuats) == 0x0, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, meshLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, orientation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, allowRoll) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, globalScaleBegin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, globalScaleEnd) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::ObjectSpawnJob, entries) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::ObjectSpawnJob) == 0x40, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
