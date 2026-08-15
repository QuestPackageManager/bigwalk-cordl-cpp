#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomCullingGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomCullingGroup)
namespace GlobalNamespace {
struct CustomCullingGroup_CheckDistanceJobIncrementOperation;
}
namespace GlobalNamespace {
struct CustomCullingGroup_Element;
}
namespace GlobalNamespace {
struct CustomCullingGroup_Job1;
}
namespace GlobalNamespace {
struct CustomCullingGroup_Job2;
}
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomCullingGroup;
}
namespace GlobalNamespace {
struct CustomCullingGroup_CheckDistanceJobIncrementOperation;
}
namespace GlobalNamespace {
struct CustomCullingGroup_Element;
}
namespace GlobalNamespace {
struct CustomCullingGroup_Job1;
}
namespace GlobalNamespace {
struct CustomCullingGroup_Job2;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomCullingGroup*);
MARK_VAL_T(::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation);
MARK_VAL_T(::GlobalNamespace::CustomCullingGroup_Element);
MARK_VAL_T(::GlobalNamespace::CustomCullingGroup_Job1);
MARK_VAL_T(::GlobalNamespace::CustomCullingGroup_Job2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomCullingGroup*, "", "CustomCullingGroup");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation, "", "CustomCullingGroup/CheckDistanceJobIncrementOperation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomCullingGroup_Element, "", "CustomCullingGroup/Element");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomCullingGroup_Job1, "", "CustomCullingGroup/Job1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomCullingGroup_Job2, "", "CustomCullingGroup/Job2");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomCullingGroup/CheckDistanceJobIncrementOperation
struct CORDL_TYPE CustomCullingGroup_CheckDistanceJobIncrementOperation {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CustomCullingGroup_CheckDistanceJobIncrementOperation() ;

// Ctor Parameters [CppParam { name: "ElementIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCullingGroup_CheckDistanceJobIncrementOperation(int32_t  ElementIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ElementIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  ElementIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation, ElementIndex) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomCullingGroup/Element
struct CORDL_TYPE CustomCullingGroup_Element {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CustomCullingGroup_Element() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None }]
constexpr CustomCullingGroup_Element(::Unity::Mathematics::float3  Position, float_t  Radius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Radius, offset: 0xc, size: 0x4, def value: None
 float_t  Radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Element, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Element, Radius) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomCullingGroup_Element) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CustomCullingGroup::CheckDistanceJobIncrementOperation, CustomCullingGroup::Element, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1::ParallelWriter<T>, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomCullingGroup/Job1
struct CORDL_TYPE CustomCullingGroup_Job1 {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18049f140, size 0x90, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomCullingGroup_Job1() ;

// Ctor Parameters [CppParam { name: "Elements", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>", modifiers: "", def_value: None }, CppParam { name: "Operations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>", modifiers: "", def_value: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "PlayerPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr CustomCullingGroup_Job1(::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  Elements, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  Operations, float_t  Distance, ::Unity::Mathematics::float3  PlayerPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Elements, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  Elements;

/// @brief Field Operations, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  Operations;

/// @brief Field Distance, offset: 0x18, size: 0x4, def value: None
 float_t  Distance;

/// @brief Field PlayerPosition, offset: 0x1c, size: 0xc, def value: None
 ::Unity::Mathematics::float3  PlayerPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job1, Elements) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job1, Operations) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job1, Distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job1, PlayerPosition) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomCullingGroup_Job1) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CustomCullingGroup::CheckDistanceJobIncrementOperation, CustomCullingGroup::Element, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1::ParallelWriter<T>, Unity.Mathematics.float2, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomCullingGroup/Job2
struct CORDL_TYPE CustomCullingGroup_Job2 {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18049f1d0, size 0xb0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomCullingGroup_Job2() ;

// Ctor Parameters [CppParam { name: "Elements", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>", modifiers: "", def_value: None }, CppParam { name: "Operations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>", modifiers: "", def_value: None }, CppParam { name: "Distances", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "PlayerPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "QueriedIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CustomCullingGroup_Job2(::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  Elements, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  Operations, ::Unity::Mathematics::float2  Distances, ::Unity::Mathematics::float3  PlayerPosition, int32_t  QueriedIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17591};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Elements, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  Elements;

/// @brief Field Operations, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  Operations;

/// @brief Field Distances, offset: 0x18, size: 0x8, def value: None
 ::Unity::Mathematics::float2  Distances;

/// @brief Field PlayerPosition, offset: 0x20, size: 0xc, def value: None
 ::Unity::Mathematics::float3  PlayerPosition;

/// @brief Field QueriedIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  QueriedIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job2, Elements) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job2, Operations) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job2, Distances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job2, PlayerPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup_Job2, QueriedIndex) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomCullingGroup_Job2) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CustomCullingGroup::CheckDistanceJobIncrementOperation, CustomCullingGroup::Element, System.Object, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1<T>, Unity.Jobs.JobHandle, UnityEngine.BoundingSphere
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomCullingGroup
class CORDL_TYPE CustomCullingGroup : public ::System::Object {
public:
// Declarations
using CheckDistanceJobIncrementOperation = ::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation;

using Element = ::GlobalNamespace::CustomCullingGroup_Element;

using Job1 = ::GlobalNamespace::CustomCullingGroup_Job1;

using Job2 = ::GlobalNamespace::CustomCullingGroup_Job2;

/// @brief Field _distances, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__distances, put=__cordl_internal_set__distances)) ::ArrayW<float_t>  _distances;

/// @brief Field _elementCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__elementCount, put=__cordl_internal_set__elementCount)) int32_t  _elementCount;

/// @brief Field _jobHandle, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__jobHandle, put=__cordl_internal_set__jobHandle)) ::Unity::Jobs::JobHandle  _jobHandle;

/// @brief Field _operations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__operations, put=__cordl_internal_set__operations)) ::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  _operations;

/// @brief Field _queriedIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__queriedIndex, put=__cordl_internal_set__queriedIndex)) int32_t  _queriedIndex;

/// @brief Field _referenceTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__referenceTransform, put=__cordl_internal_set__referenceTransform)) ::UnityW<::UnityEngine::Transform>  _referenceTransform;

/// @brief Field _sourceSpheres, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceSpheres, put=__cordl_internal_set__sourceSpheres)) ::ArrayW<::UnityEngine::BoundingSphere>  _sourceSpheres;

/// @brief Field _spheres, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__spheres, put=__cordl_internal_set__spheres)) ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  _spheres;

/// @brief Field hasScheduledJob, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasScheduledJob, put=__cordl_internal_set_hasScheduledJob)) bool  hasScheduledJob;

/// @brief Field hasUnprocessedResults, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasUnprocessedResults, put=__cordl_internal_set_hasUnprocessedResults)) bool  hasUnprocessedResults;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClearUnprocessedResults, addr 0x18049da10, size 0x10, virtual false, abstract: false, final false
inline void ClearUnprocessedResults() ;

/// @brief Method CompleteJob, addr 0x18049da20, size 0x30, virtual false, abstract: false, final false
inline void CompleteJob() ;

/// @brief Method Dispose, addr 0x18049da50, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetBatchCount, addr 0x1803e29a0, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetBatchCount(int32_t  elementCount) ;

/// @brief Method GetDistance, addr 0x18049da80, size 0x150, virtual false, abstract: false, final false
inline int32_t GetDistance(int32_t  index) ;

/// @brief Method GetNextPowerOfTwo, addr 0x1803e2af0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetNextPowerOfTwo(float_t  count) ;

static inline ::GlobalNamespace::CustomCullingGroup* New_ctor() ;

/// @brief Method QueryIndices, addr 0x18049dbd0, size 0x100, virtual false, abstract: false, final false
inline int32_t QueryIndices(int32_t  distanceIndex, ::ArrayW<int32_t>  result) ;

/// @brief Method RebuildElements, addr 0x18049dcd0, size 0x100, virtual false, abstract: false, final false
inline void RebuildElements() ;

/// @brief Method ScheduleJob, addr 0x18049e0e0, size 0x3a0, virtual false, abstract: false, final false
inline void ScheduleJob() ;

/// @brief Method ScheduleJob1, addr 0x18049ddd0, size 0x190, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleJob1() ;

/// @brief Method ScheduleJob2, addr 0x18049df60, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleJob2() ;

/// @brief Method SetBoundingDistances, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void SetBoundingDistances(::ArrayW<float_t>  distances) ;

/// @brief Method SetBoundingSphereCount, addr 0x18049e480, size 0x120, virtual false, abstract: false, final false
inline void SetBoundingSphereCount(int32_t  count) ;

/// @brief Method SetBoundingSpheres, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void SetBoundingSpheres(::ArrayW<::UnityEngine::BoundingSphere>  array) ;

/// @brief Method SetDistanceReferencePoint, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void SetDistanceReferencePoint(::UnityEngine::Transform*  transform) ;

/// @brief Method SetQueriedIndex, addr 0x18049e5a0, size 0xa0, virtual false, abstract: false, final false
inline void SetQueriedIndex(int32_t  index) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__distances() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__distances() ;

constexpr int32_t const& __cordl_internal_get__elementCount() const;

constexpr int32_t& __cordl_internal_get__elementCount() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__jobHandle() ;

constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation> const& __cordl_internal_get__operations() const;

constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>& __cordl_internal_get__operations() ;

constexpr int32_t const& __cordl_internal_get__queriedIndex() const;

constexpr int32_t& __cordl_internal_get__queriedIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__referenceTransform() ;

constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& __cordl_internal_get__sourceSpheres() const;

constexpr ::ArrayW<::UnityEngine::BoundingSphere>& __cordl_internal_get__sourceSpheres() ;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element> const& __cordl_internal_get__spheres() const;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>& __cordl_internal_get__spheres() ;

constexpr bool const& __cordl_internal_get_hasScheduledJob() const;

constexpr bool& __cordl_internal_get_hasScheduledJob() ;

constexpr bool const& __cordl_internal_get_hasUnprocessedResults() const;

constexpr bool& __cordl_internal_get_hasUnprocessedResults() ;

constexpr void __cordl_internal_set__distances(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__elementCount(int32_t  value) ;

constexpr void __cordl_internal_set__jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__operations(::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  value) ;

constexpr void __cordl_internal_set__queriedIndex(int32_t  value) ;

constexpr void __cordl_internal_set__referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sourceSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value) ;

constexpr void __cordl_internal_set__spheres(::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  value) ;

constexpr void __cordl_internal_set_hasScheduledJob(bool  value) ;

constexpr void __cordl_internal_set_hasUnprocessedResults(bool  value) ;

/// @brief Method .ctor, addr 0x18049e640, size 0x210, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomCullingGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomCullingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomCullingGroup(CustomCullingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomCullingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomCullingGroup(CustomCullingGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17594};

/// @brief Field _referenceTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____referenceTransform;

/// @brief Field _sourceSpheres, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::BoundingSphere>  ____sourceSpheres;

/// @brief Field _distances, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____distances;

/// @brief Field _spheres, offset: 0x28, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  ____spheres;

/// @brief Field _operations, offset: 0x30, size: 0x8, def value: None
 ::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  ____operations;

/// @brief Field _elementCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____elementCount;

/// @brief Field _queriedIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____queriedIndex;

/// @brief Field hasUnprocessedResults, offset: 0x40, size: 0x1, def value: None
 bool  ___hasUnprocessedResults;

/// @brief Field hasScheduledJob, offset: 0x41, size: 0x1, def value: None
 bool  ___hasScheduledJob;

/// @brief Field _jobHandle, offset: 0x48, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____jobHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____referenceTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____sourceSpheres) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____distances) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____spheres) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____operations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____elementCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____queriedIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ___hasUnprocessedResults) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ___hasScheduledJob) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomCullingGroup, ____jobHandle) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomCullingGroup) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
