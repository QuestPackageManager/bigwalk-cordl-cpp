#pragma once
// IWYU pragma private; include "GlobalNamespace/CheckDistanceJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RemotePlayerData_def.hpp"
#include "GlobalNamespace/zzzz__RustleOperation_def.hpp"
#include "GlobalNamespace/zzzz__VegetationGroupJobData_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_def.hpp"
#include "GlobalNamespace/zzzz__WindyOperation_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CheckDistanceJob)
namespace GlobalNamespace {
struct VegetationSoundElement;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct CheckDistanceJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CheckDistanceJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CheckDistanceJob, "", "CheckDistanceJob");
// Dependencies RemotePlayerData, RustleOperation, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeQueue`1::ParallelWriter<T>, Unity.Mathematics.float3, VegetationGroupJobData, VegetationSoundElement, WindyOperation
namespace GlobalNamespace {
// Is value type: true
// CS Name: CheckDistanceJob
struct CORDL_TYPE CheckDistanceJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method CalculateRemotePlayers, addr 0x1803e4330, size 0x130, virtual false, abstract: false, final false
inline void CalculateRemotePlayers(::GlobalNamespace::VegetationSoundElement  element, float_t  maxDistanceSq) ;

/// @brief Method Execute, addr 0x1803e4460, size 0x1a0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CheckDistanceJob() ;

// Ctor Parameters [CppParam { name: "GroupJobData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationGroupJobData>", modifiers: "", def_value: None }, CppParam { name: "Elements", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationSoundElement>", modifiers: "", def_value: None }, CppParam { name: "RemotePlayers", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::RemotePlayerData>", modifiers: "", def_value: None }, CppParam { name: "RustleOperations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::RustleOperation>", modifiers: "", def_value: None }, CppParam { name: "WindyOperations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::WindyOperation>", modifiers: "", def_value: None }, CppParam { name: "LocalPlayerPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "MaxDistanceSq", ty: "float_t", modifiers: "", def_value: None }]
constexpr CheckDistanceJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationGroupJobData>  GroupJobData, ::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationSoundElement>  Elements, ::Unity::Collections::NativeArray_1<::GlobalNamespace::RemotePlayerData>  RemotePlayers, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::RustleOperation>  RustleOperations, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::WindyOperation>  WindyOperations, ::Unity::Mathematics::float3  LocalPlayerPosition, float_t  MaxDistanceSq) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field GroupJobData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationGroupJobData>  GroupJobData;

/// @brief Field Elements, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationSoundElement>  Elements;

/// @brief Field RemotePlayers, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::RemotePlayerData>  RemotePlayers;

/// @brief Field RustleOperations, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::RustleOperation>  RustleOperations;

/// @brief Field WindyOperations, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::WindyOperation>  WindyOperations;

/// @brief Field LocalPlayerPosition, offset: 0x50, size: 0xc, def value: None
 ::Unity::Mathematics::float3  LocalPlayerPosition;

/// @brief Field MaxDistanceSq, offset: 0x5c, size: 0x4, def value: None
 float_t  MaxDistanceSq;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, GroupJobData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, Elements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, RemotePlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, RustleOperations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, WindyOperations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, LocalPlayerPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckDistanceJob, MaxDistanceSq) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CheckDistanceJob) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
